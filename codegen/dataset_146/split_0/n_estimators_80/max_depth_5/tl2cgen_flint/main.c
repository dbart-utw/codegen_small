
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.015037593984962405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9736842105263158;
            result[5] += 0.011278195488721804;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21052631578947367;
            result[5] += 0.7894736842105263;
          } else {
            result[0] += 0.9603960396039604;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.039603960396039604;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.75;
            result[5] += 0.17857142857142858;
          } else {
            result[0] += 0;
            result[1] += 0.0022598870056497176;
            result[2] += 0;
            result[3] += 0.03615819209039548;
            result[4] += 0.04293785310734463;
            result[5] += 0.9186440677966101;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.014814814814814815;
            result[1] += 0.007407407407407408;
            result[2] += 0;
            result[3] += 0.25925925925925924;
            result[4] += 0;
            result[5] += 0.7185185185185186;
          } else {
            result[0] += 0.02962962962962963;
            result[1] += 0;
            result[2] += 0.014814814814814815;
            result[3] += 0.6888888888888889;
            result[4] += 0;
            result[5] += 0.26666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.058394160583941604;
            result[1] += 0.0364963503649635;
            result[2] += 0.029197080291970802;
            result[3] += 0.0072992700729927005;
            result[4] += 0.8248175182481752;
            result[5] += 0.043795620437956206;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0.896551724137931;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.17241379310344832;
            result[1] += 0.37931034482758624;
            result[2] += 0;
            result[3] += 0.04597701149425288;
            result[4] += 0.36781609195402304;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0.9190751445086703;
            result[1] += 0.0028901734104046237;
            result[2] += 0.010597302504816953;
            result[3] += 0.02986512524084778;
            result[4] += 0.027938342967244695;
            result[5] += 0.009633911368015412;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.02631578947368421;
            result[2] += 0.4105263157894737;
            result[3] += 0.24736842105263157;
            result[4] += 0.12631578947368421;
            result[5] += 0.1631578947368421;
          } else {
            result[0] += 0.7727272727272727;
            result[1] += 0;
            result[2] += 0.1590909090909091;
            result[3] += 0;
            result[4] += 0.06818181818181818;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.5454545454545454;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13207547169811323;
            result[3] += 0.7169811320754718;
            result[4] += 0;
            result[5] += 0.15094339622641512;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.868421052631579;
            result[3] += 0.13157894736842105;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 0.01056338028169014;
            result[1] += 0;
            result[2] += 0.8380281690140845;
            result[3] += 0.1443661971830986;
            result[4] += 0;
            result[5] += 0.007042253521126761;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014173228346456693;
            result[1] += 0;
            result[2] += 0.9606299212598425;
            result[3] += 0.02047244094488189;
            result[4] += 0;
            result[5] += 0.004724409448818898;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9641255605381166;
            result[5] += 0.03587443946188341;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12;
            result[4] += 0.24;
            result[5] += 0.64;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.01597051597051597;
            result[1] += 0.002457002457002457;
            result[2] += 0;
            result[3] += 0.04054054054054054;
            result[4] += 0.03931203931203931;
            result[5] += 0.9017199017199017;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024096385542168676;
            result[3] += 0.04819277108433735;
            result[4] += 0.07228915662650602;
            result[5] += 0.8554216867469879;
          } else {
            result[0] += 0.10087719298245613;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.5087719298245614;
            result[4] += 0.08333333333333333;
            result[5] += 0.2543859649122807;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42200000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.3055555555555556;
            result[2] += 0.005555555555555556;
            result[3] += 0.044444444444444446;
            result[4] += 0.5444444444444444;
            result[5] += 0.016666666666666666;
          } else {
            result[0] += 0.8361858190709046;
            result[1] += 0.008149959250203748;
            result[2] += 0.017929910350448247;
            result[3] += 0.02852485737571312;
            result[4] += 0.07090464547677261;
            result[5] += 0.03830480847595762;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.008356545961002786;
            result[1] += 0.008356545961002786;
            result[2] += 0.2646239554317549;
            result[3] += 0.3147632311977716;
            result[4] += 0.04178272980501393;
            result[5] += 0.362116991643454;
          } else {
            result[0] += 0.6282051282051282;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.02564102564102564;
            result[4] += 0.20512820512820512;
            result[5] += 0.0641025641025641;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.017543859649122806;
            result[2] += 0.07017543859649122;
            result[3] += 0.8245614035087719;
            result[4] += 0;
            result[5] += 0.08771929824561403;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25925925925925924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7407407407407407;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.2727272727272727;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.04444444444444445;
            result[1] += 0;
            result[2] += 0.888888888888889;
            result[3] += 0.04444444444444445;
            result[4] += 0;
            result[5] += 0.022222222222222227;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0.16666666666666669;
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.005089058524173028;
            result[1] += 0;
            result[2] += 0.8295165394402035;
            result[3] += 0.1628498727735369;
            result[4] += 0;
            result[5] += 0.002544529262086514;
          } else {
            result[0] += 0.5882352941176471;
            result[1] += 0;
            result[2] += 0.4117647058823529;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.007722007722007723;
            result[1] += 0;
            result[2] += 0.9710424710424711;
            result[3] += 0.021235521235521238;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.4;
          } else {
            result[0] += 0.004273504273504274;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9957264957264957;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.7777777777777778;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01568627450980392;
            result[4] += 0.023529411764705882;
            result[5] += 0.9607843137254902;
          } else {
            result[0] += 0.049689440993788817;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09006211180124224;
            result[4] += 0.07453416149068323;
            result[5] += 0.7857142857142857;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          } else {
            result[0] += 0.005376344086021506;
            result[1] += 0.005376344086021506;
            result[2] += 0.01881720430107527;
            result[3] += 0.41397849462365593;
            result[4] += 0.07795698924731183;
            result[5] += 0.478494623655914;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bb0000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.13793103448275862;
            result[1] += 0.2689655172413793;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.5379310344827586;
            result[5] += 0.020689655172413793;
          } else {
            result[0] += 0.8638373121131742;
            result[1] += 0.020335985853227233;
            result[2] += 0.0008841732979664014;
            result[3] += 0.029177718832891247;
            result[4] += 0.06631299734748011;
            result[5] += 0.019451812555260833;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.022988505747126436;
            result[1] += 0.005747126436781609;
            result[2] += 0.28448275862068967;
            result[3] += 0.3275862068965517;
            result[4] += 0.10344827586206896;
            result[5] += 0.2557471264367816;
          } else {
            result[0] += 0.7222222222222223;
            result[1] += 0.01388888888888889;
            result[2] += 0.04166666666666667;
            result[3] += 0.01388888888888889;
            result[4] += 0.20833333333333337;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0967741935483871;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.06451612903225806;
            result[5] += 0.8064516129032258;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025;
            result[3] += 0.925;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0.7714285714285715;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6103896103896104;
            result[3] += 0.2987012987012987;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.02452316076294278;
            result[1] += 0;
            result[2] += 0.8474114441416893;
            result[3] += 0.11989100817438691;
            result[4] += 0;
            result[5] += 0.008174386920980926;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9825918762088974;
            result[3] += 0.017408123791102514;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.01568627450980392;
            result[1] += 0.00392156862745098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9607843137254902;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0.061224489795918366;
            result[2] += 0.02040816326530612;
            result[3] += 0;
            result[4] += 0.20408163265306123;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.8444444444444444;
            result[1] += 0;
            result[2] += 0.022222222222222223;
            result[3] += 0.06666666666666667;
            result[4] += 0.03333333333333333;
            result[5] += 0.03333333333333333;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5294117647058824;
            result[5] += 0.47058823529411764;
          } else {
            result[0] += 0;
            result[1] += 0.007614213197969543;
            result[2] += 0.0012690355329949238;
            result[3] += 0.03934010152284264;
            result[4] += 0.0266497461928934;
            result[5] += 0.9251269035532995;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.11224489795918367;
            result[2] += 0.02040816326530612;
            result[3] += 0.12244897959183673;
            result[4] += 0.08163265306122448;
            result[5] += 0.6224489795918368;
          } else {
            result[0] += 0;
            result[1] += 0.017123287671232876;
            result[2] += 0.03424657534246575;
            result[3] += 0.6301369863013698;
            result[4] += 0.003424657534246575;
            result[5] += 0.3150684931506849;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0.017094017094017096;
            result[2] += 0;
            result[3] += 0.05128205128205128;
            result[4] += 0.8803418803418803;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0;
            result[1] += 0.7857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.08045977011494253;
            result[1] += 0.5287356321839081;
            result[2] += 0;
            result[3] += 0.08045977011494253;
            result[4] += 0.27586206896551724;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0.8954305799648506;
            result[1] += 0.0017574692442882249;
            result[2] += 0.008787346221441126;
            result[3] += 0.02899824253075571;
            result[4] += 0.05711775043936731;
            result[5] += 0.007908611599297012;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0.042483660130718956;
            result[1] += 0.00980392156862745;
            result[2] += 0.32679738562091504;
            result[3] += 0.24836601307189543;
            result[4] += 0.12745098039215685;
            result[5] += 0.24509803921568626;
          } else {
            result[0] += 0.7831325301204819;
            result[1] += 0;
            result[2] += 0.10843373493975904;
            result[3] += 0;
            result[4] += 0.0963855421686747;
            result[5] += 0.012048192771084338;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.09090909090909091;
            result[4] += 0.18181818181818182;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.7857142857142857;
            result[4] += 0.023809523809523808;
            result[5] += 0.09523809523809523;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0.01834862385321101;
            result[1] += 0.027522935779816515;
            result[2] += 0.7431192660550459;
            result[3] += 0.1651376146788991;
            result[4] += 0.01834862385321101;
            result[5] += 0.027522935779816515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0.02040816326530612;
            result[2] += 0.5918367346938775;
            result[3] += 0.02040816326530612;
            result[4] += 0.12244897959183673;
            result[5] += 0.1836734693877551;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01119402985074627;
            result[1] += 0;
            result[2] += 0.8656716417910448;
            result[3] += 0.12313432835820896;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9933184855233853;
            result[3] += 0.0066815144766146995;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
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
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.014492753623188408;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9130434782608696;
            result[5] += 0.07246376811594205;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.04945054945054945;
            result[1] += 0.004395604395604396;
            result[2] += 0;
            result[3] += 0.027472527472527472;
            result[4] += 0.07032967032967033;
            result[5] += 0.8483516483516483;
          } else {
            result[0] += 0;
            result[1] += 0.0035335689045936395;
            result[2] += 0.007067137809187279;
            result[3] += 0.5759717314487632;
            result[4] += 0.007067137809187279;
            result[5] += 0.40636042402826855;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.084070796460177;
            result[1] += 0.3053097345132743;
            result[2] += 0;
            result[3] += 0.004424778761061947;
            result[4] += 0.5796460176991151;
            result[5] += 0.02654867256637168;
          } else {
            result[0] += 0.8404701931150294;
            result[1] += 0.009235936188077247;
            result[2] += 0.0008396305625524769;
            result[3] += 0.03526448362720403;
            result[4] += 0.07136859781696053;
            result[5] += 0.042821158690176324;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.016597510373443983;
            result[1] += 0.02074688796680498;
            result[2] += 0.13278008298755187;
            result[3] += 0.4854771784232365;
            result[4] += 0.05394190871369295;
            result[5] += 0.29045643153526973;
          } else {
            result[0] += 0.319047619047619;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.07142857142857142;
            result[4] += 0.023809523809523808;
            result[5] += 0.11904761904761904;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07017543859649122;
            result[3] += 0.21052631578947367;
            result[4] += 0.05263157894736842;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0.11428571428571428;
            result[1] += 0.17142857142857143;
            result[2] += 0.45714285714285713;
            result[3] += 0.22857142857142856;
            result[4] += 0.02857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.03076923076923077;
            result[1] += 0;
            result[2] += 0.8615384615384616;
            result[3] += 0.03076923076923077;
            result[4] += 0;
            result[5] += 0.07692307692307693;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.02564102564102564;
            result[2] += 0.20512820512820512;
            result[3] += 0.5897435897435898;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015384615384615385;
            result[1] += 0;
            result[2] += 0.8923076923076924;
            result[3] += 0.09230769230769231;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8629032258064516;
            result[3] += 0.13709677419354838;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9698492462311558;
            result[3] += 0.03015075376884422;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.005128205128205128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9846153846153847;
            result[5] += 0.010256410256410256;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5263157894736842;
            result[5] += 0.47368421052631576;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.6363636363636364;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.85;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024147727272727272;
            result[4] += 0.029829545454545456;
            result[5] += 0.9460227272727273;
          } else {
            result[0] += 0;
            result[1] += 0.16279069767441862;
            result[2] += 0;
            result[3] += 0.08139534883720931;
            result[4] += 0.1744186046511628;
            result[5] += 0.5813953488372093;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0.007407407407407408;
            result[2] += 0.007407407407407408;
            result[3] += 0.2814814814814815;
            result[4] += 0.014814814814814815;
            result[5] += 0.6888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02459016393442623;
            result[3] += 0.7950819672131147;
            result[4] += 0;
            result[5] += 0.18032786885245902;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0.04516129032258064;
            result[2] += 0;
            result[3] += 0.012903225806451613;
            result[4] += 0.9161290322580645;
            result[5] += 0.025806451612903226;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.3603053435114504;
            result[1] += 0.01984732824427481;
            result[2] += 0.050381679389312976;
            result[3] += 0.2152671755725191;
            result[4] += 0.08549618320610687;
            result[5] += 0.2687022900763359;
          } else {
            result[0] += 0.8339317773788151;
            result[1] += 0.0062836624775583485;
            result[2] += 0.05834829443447038;
            result[3] += 0.03321364452423698;
            result[4] += 0.06104129263913824;
            result[5] += 0.00718132854578097;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.5833333333333334;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9310344827586207;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5633802816901409;
            result[3] += 0.3380281690140845;
            result[4] += 0;
            result[5] += 0.09859154929577464;
          } else {
            result[0] += 0.00847457627118644;
            result[1] += 0;
            result[2] += 0.8559322033898306;
            result[3] += 0.1271186440677966;
            result[4] += 0;
            result[5] += 0.00847457627118644;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.001321003963011889;
            result[1] += 0;
            result[2] += 0.9537648612945839;
            result[3] += 0.03963011889035667;
            result[4] += 0;
            result[5] += 0.005284015852047556;
          } else {
            result[0] += 0.35;
            result[1] += 0;
            result[2] += 0.65;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0.004484304932735426;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9730941704035875;
            result[5] += 0.02242152466367713;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.109375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.453125;
            result[5] += 0.4375;
          } else {
            result[0] += 0.9;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03134796238244514;
            result[4] += 0.0219435736677116;
            result[5] += 0.9467084639498433;
          } else {
            result[0] += 0.016216216216216217;
            result[1] += 0.010810810810810811;
            result[2] += 0.002702702702702703;
            result[3] += 0.14324324324324325;
            result[4] += 0.16216216216216217;
            result[5] += 0.6648648648648648;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14102564102564102;
            result[4] += 0.10256410256410256;
            result[5] += 0.7564102564102564;
          } else {
            result[0] += 0.004566210045662101;
            result[1] += 0.009132420091324202;
            result[2] += 0;
            result[3] += 0.7031963470319635;
            result[4] += 0.009132420091324202;
            result[5] += 0.27397260273972607;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.5833333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.9951573849878934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004842615012106538;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0.048;
            result[1] += 0.144;
            result[2] += 0;
            result[3] += 0.016;
            result[4] += 0.776;
            result[5] += 0.016;
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42640000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.03571428571428571;
            result[2] += 0.11904761904761904;
            result[3] += 0.40476190476190477;
            result[4] += 0.08333333333333333;
            result[5] += 0.32142857142857145;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.9124423963133639;
            result[1] += 0.030414746543778796;
            result[2] += 0.000921658986175115;
            result[3] += 0.01105990783410138;
            result[4] += 0.040552995391705066;
            result[5] += 0.004608294930875575;
          } else {
            result[0] += 0.32663316582914576;
            result[1] += 0.035175879396984924;
            result[2] += 0.23115577889447236;
            result[3] += 0.1457286432160804;
            result[4] += 0.1306532663316583;
            result[5] += 0.1306532663316583;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17142857142857143;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0.7714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12962962962962962;
            result[3] += 0.7962962962962963;
            result[4] += 0;
            result[5] += 0.07407407407407407;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0.32894736842105265;
            result[4] += 0;
            result[5] += 0.19736842105263158;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.2222222222222222;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21739130434782608;
            result[3] += 0.4782608695652174;
            result[4] += 0;
            result[5] += 0.30434782608695654;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7157894736842105;
            result[3] += 0.24210526315789474;
            result[4] += 0;
            result[5] += 0.042105263157894736;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.018050541516245487;
            result[1] += 0;
            result[2] += 0.851985559566787;
            result[3] += 0.11552346570397112;
            result[4] += 0.007220216606498195;
            result[5] += 0.007220216606498195;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.4166666666666667;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018867924528301887;
            result[1] += 0;
            result[2] += 0.9773584905660377;
            result[3] += 0.020754716981132074;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
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
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9954545454545455;
            result[5] += 0.004545454545454545;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20512820512820512;
            result[5] += 0.7435897435897436;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.02;
            result[4] += 0.72;
            result[5] += 0.18;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.52;
          } else {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.08571428571428572;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666669;
            result[2] += 0;
            result[3] += 0.06666666666666668;
            result[4] += 0.6000000000000001;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04203821656050955;
            result[4] += 0.033121019108280254;
            result[5] += 0.9248407643312102;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012048192771084338;
            result[3] += 0.24096385542168675;
            result[4] += 0.03614457831325301;
            result[5] += 0.7108433734939759;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7801418439716312;
            result[4] += 0.0070921985815602835;
            result[5] += 0.2127659574468085;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.05063291139240506;
            result[1] += 0;
            result[2] += 0.16455696202531644;
            result[3] += 0.17721518987341772;
            result[4] += 0.012658227848101266;
            result[5] += 0.5949367088607594;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.15384615384615388;
            result[1] += 0.2307692307692308;
            result[2] += 0;
            result[3] += 0.025641025641025644;
            result[4] += 0.5448717948717949;
            result[5] += 0.04487179487179488;
          } else {
            result[0] += 0.8900169204737733;
            result[1] += 0.005076142131979696;
            result[2] += 0.0016920473773265653;
            result[3] += 0.019458544839255503;
            result[4] += 0.04060913705583757;
            result[5] += 0.043147208121827416;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0.01910828025477707;
            result[1] += 0.022292993630573247;
            result[2] += 0.16878980891719744;
            result[3] += 0.3471337579617834;
            result[4] += 0.1337579617834395;
            result[5] += 0.3089171974522293;
          } else {
            result[0] += 0.7058823529411764;
            result[1] += 0;
            result[2] += 0.21176470588235288;
            result[3] += 0;
            result[4] += 0.04705882352941175;
            result[5] += 0.035294117647058816;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03703703703703704;
            result[3] += 0.7962962962962964;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.0297029702970297;
            result[1] += 0;
            result[2] += 0.38613861386138615;
            result[3] += 0.39603960396039606;
            result[4] += 0.019801980198019802;
            result[5] += 0.16831683168316833;
          } else {
            result[0] += 0;
            result[1] += 0.03076923076923077;
            result[2] += 0.8307692307692308;
            result[3] += 0.12307692307692308;
            result[4] += 0;
            result[5] += 0.015384615384615385;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0.23529411764705882;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.058823529411764705;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0.007509386733416771;
            result[1] += 0;
            result[2] += 0.9449311639549437;
            result[3] += 0.04505632040050062;
            result[4] += 0;
            result[5] += 0.0025031289111389237;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0041841004184100415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9748953974895398;
            result[5] += 0.02092050209205021;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03721488595438175;
            result[4] += 0.055222088835534214;
            result[5] += 0.907563025210084;
          } else {
            result[0] += 0.3032258064516129;
            result[1] += 0.012903225806451613;
            result[2] += 0.0064516129032258064;
            result[3] += 0.13548387096774195;
            result[4] += 0.07741935483870968;
            result[5] += 0.4645161290322581;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.08035714285714286;
            result[1] += 0.017857142857142856;
            result[2] += 0.008928571428571428;
            result[3] += 0.19642857142857142;
            result[4] += 0.08035714285714286;
            result[5] += 0.6160714285714286;
          } else {
            result[0] += 0;
            result[1] += 0.013986013986013986;
            result[2] += 0;
            result[3] += 0.7132867132867133;
            result[4] += 0.027972027972027972;
            result[5] += 0.24475524475524477;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
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
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0.09649122807017543;
            result[2] += 0;
            result[3] += 0.017543859649122806;
            result[4] += 0.8508771929824561;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0;
            result[1] += 0.8292682926829268;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0.14634146341463414;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.35114503816793896;
            result[1] += 0.12977099236641224;
            result[2] += 0.015267175572519085;
            result[3] += 0.03053435114503817;
            result[4] += 0.4274809160305344;
            result[5] += 0.04580152671755726;
          } else {
            result[0] += 0.9093484419263457;
            result[1] += 0.013220018885741267;
            result[2] += 0;
            result[3] += 0.037771482530689335;
            result[4] += 0.03210576015108594;
            result[5] += 0.007554296506137867;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.03303303303303303;
            result[1] += 0.04504504504504504;
            result[2] += 0.2222222222222222;
            result[3] += 0.3123123123123123;
            result[4] += 0.04804804804804805;
            result[5] += 0.33933933933933935;
          } else {
            result[0] += 0.7166666666666667;
            result[1] += 0.041666666666666664;
            result[2] += 0.09166666666666666;
            result[3] += 0.025;
            result[4] += 0.11666666666666667;
            result[5] += 0.008333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14;
            result[3] += 0.76;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d50000))) ) ) {
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0819672131147541;
            result[1] += 0;
            result[2] += 0.42622950819672134;
            result[3] += 0.42622950819672134;
            result[4] += 0;
            result[5] += 0.0655737704918033;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0.004761904761904762;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.10952380952380952;
            result[4] += 0;
            result[5] += 0.01904761904761905;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00310077519379845;
            result[1] += 0;
            result[2] += 0.9689922480620156;
            result[3] += 0.026356589147286825;
            result[4] += 0;
            result[5] += 0.001550387596899225;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9694323144104804;
            result[5] += 0.03056768558951965;
          } else {
            result[0] += 0.2037037037037037;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25925925925925924;
            result[5] += 0.5370370370370371;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0.9361702127659575;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0425531914893617;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3888888888888889;
            result[4] += 0.5;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0.001183431952662722;
            result[2] += 0;
            result[3] += 0.05325443786982249;
            result[4] += 0.03076923076923077;
            result[5] += 0.914792899408284;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011111111111111112;
            result[3] += 0.06666666666666667;
            result[4] += 0.1;
            result[5] += 0.8222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0.014150943396226415;
            result[2] += 0.0047169811320754715;
            result[3] += 0.7122641509433962;
            result[4] += 0.009433962264150943;
            result[5] += 0.25943396226415094;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.18534482758620693;
            result[1] += 0.12068965517241381;
            result[2] += 0.01724137931034483;
            result[3] += 0.03879310344827587;
            result[4] += 0.6120689655172414;
            result[5] += 0.025862068965517244;
          } else {
            result[0] += 0.8565101860053145;
            result[1] += 0.0141718334809566;
            result[2] += 0.002657218777679362;
            result[3] += 0.04074402125775022;
            result[4] += 0.0566873339238264;
            result[5] += 0.029229406554472984;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.030405405405405407;
            result[1] += 0.02027027027027027;
            result[2] += 0.33783783783783783;
            result[3] += 0.32432432432432434;
            result[4] += 0.013513513513513514;
            result[5] += 0.27364864864864863;
          } else {
            result[0] += 0.6635514018691588;
            result[1] += 0.028037383177570093;
            result[2] += 0.22429906542056074;
            result[3] += 0;
            result[4] += 0.08411214953271028;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.08333333333333333;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12727272727272726;
            result[3] += 0.7636363636363637;
            result[4] += 0;
            result[5] += 0.10909090909090909;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.06060606060606061;
            result[2] += 0.15151515151515152;
            result[3] += 0.12121212121212122;
            result[4] += 0.06060606060606061;
            result[5] += 0.5151515151515151;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7380952380952381;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.047619047619047616;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.48717948717948717;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.20512820512820512;
          } else {
            result[0] += 0.0076045627376425855;
            result[1] += 0;
            result[2] += 0.8365019011406845;
            result[3] += 0.155893536121673;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9136690647482014;
            result[3] += 0.08633093525179857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0051813471502590676;
            result[1] += 0;
            result[2] += 0.9792746113989638;
            result[3] += 0.015544041450777202;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.004081632653061225;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9959183673469387;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.25;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7368421052631579;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030726256983240222;
            result[4] += 0.019553072625698324;
            result[5] += 0.9497206703910615;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.015151515151515152;
          } else {
            result[0] += 0.014018691588785047;
            result[1] += 0.002336448598130841;
            result[2] += 0.035046728971962614;
            result[3] += 0.39485981308411217;
            result[4] += 0.0514018691588785;
            result[5] += 0.5023364485981309;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8823529411764706;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.014285714285714285;
            result[1] += 0.2571428571428571;
            result[2] += 0.03571428571428571;
            result[3] += 0.05714285714285714;
            result[4] += 0.5714285714285714;
            result[5] += 0.06428571428571428;
          } else {
            result[0] += 0.8164915117219078;
            result[1] += 0.02021018593371059;
            result[2] += 0.012934518997574777;
            result[3] += 0.023443815683104285;
            result[4] += 0.09296685529506872;
            result[5] += 0.03395311236863379;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.020242914979757085;
            result[1] += 0;
            result[2] += 0.10931174089068826;
            result[3] += 0.4291497975708502;
            result[4] += 0.10931174089068826;
            result[5] += 0.3319838056680162;
          } else {
            result[0] += 0.32903225806451614;
            result[1] += 0;
            result[2] += 0.5483870967741935;
            result[3] += 0.07096774193548387;
            result[4] += 0.01935483870967742;
            result[5] += 0.03225806451612903;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.041666666666666664;
            result[5] += 0.7916666666666666;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10000000000000002;
            result[3] += 0.7333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0;
            result[2] += 0.7799352750809061;
            result[3] += 0.18122977346278318;
            result[4] += 0;
            result[5] += 0.02912621359223301;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.888;
            result[3] += 0.104;
            result[4] += 0;
            result[5] += 0.008;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9871323529411765;
            result[3] += 0.012867647058823529;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.007692307692307693;
            result[1] += 0.0038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9692307692307692;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42930000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.56;
            result[1] += 0.24;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14666666666666667;
            result[5] += 0.05333333333333334;
          } else {
            result[0] += 0.0023228803716608595;
            result[1] += 0.011614401858304297;
            result[2] += 0;
            result[3] += 0.03716608594657375;
            result[4] += 0.04645760743321719;
            result[5] += 0.9024390243902439;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20270270270270271;
            result[4] += 0.08108108108108109;
            result[5] += 0.7162162162162162;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07476635514018691;
            result[3] += 0.6822429906542056;
            result[4] += 0;
            result[5] += 0.24299065420560748;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0.23809523809523808;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.5714285714285714;
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09210526315789473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.868421052631579;
            result[5] += 0.039473684210526314;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.12500000000000003;
            result[1] += 0.3194444444444445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5416666666666667;
            result[5] += 0.01388888888888889;
          } else {
            result[0] += 0.8715986394557824;
            result[1] += 0.022959183673469392;
            result[2] += 0.0017006802721088437;
            result[3] += 0.018707482993197282;
            result[4] += 0.06122448979591837;
            result[5] += 0.02380952380952381;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0.01529051987767584;
            result[1] += 0.009174311926605505;
            result[2] += 0.12538226299694188;
            result[3] += 0.3730886850152905;
            result[4] += 0.04281345565749235;
            result[5] += 0.43425076452599387;
          } else {
            result[0] += 0.6129032258064516;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0;
            result[4] += 0.3225806451612903;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.8653846153846154;
            result[4] += 0;
            result[5] += 0.09615384615384616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.7;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8666666666666667;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.47619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42990000))) ) ) {
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
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0.01951219512195122;
            result[1] += 0;
            result[2] += 0.7975609756097561;
            result[3] += 0.14878048780487804;
            result[4] += 0.0024390243902439024;
            result[5] += 0.03170731707317073;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.8235294117647058;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9715370018975332;
            result[3] += 0.028462998102466792;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00423728813559322;
            result[1] += 0.0211864406779661;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9194915254237288;
            result[5] += 0.05508474576271186;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7608695652173914;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21739130434782608;
            result[5] += 0;
          } else {
            result[0] += 0.015384615384615385;
            result[1] += 0.12307692307692308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36923076923076925;
            result[5] += 0.49230769230769234;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.0036855036855036856;
            result[2] += 0.002457002457002457;
            result[3] += 0.06265356265356266;
            result[4] += 0.04791154791154791;
            result[5] += 0.8832923832923832;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.02666666666666667;
            result[2] += 0;
            result[3] += 0.02666666666666667;
            result[4] += 0.28;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.04310344827586207;
            result[1] += 0;
            result[2] += 0.04741379310344827;
            result[3] += 0.6594827586206896;
            result[4] += 0.01293103448275862;
            result[5] += 0.23706896551724138;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01694915254237288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9830508474576272;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8095238095238095;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19047619047619047;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.05357142857142857;
            result[1] += 0.16071428571428573;
            result[2] += 0;
            result[3] += 0.05357142857142857;
            result[4] += 0.10714285714285714;
            result[5] += 0.625;
          } else {
            result[0] += 0.8641975308641975;
            result[1] += 0.01675485008818342;
            result[2] += 0.003527336860670194;
            result[3] += 0.015873015873015872;
            result[4] += 0.0890652557319224;
            result[5] += 0.010582010582010581;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.020565552699228794;
            result[1] += 0;
            result[2] += 0.29305912596401035;
            result[3] += 0.3419023136246787;
            result[4] += 0.020565552699228794;
            result[5] += 0.3239074550128535;
          } else {
            result[0] += 0.6336633663366337;
            result[1] += 0.09900990099009901;
            result[2] += 0.0594059405940594;
            result[3] += 0.019801980198019802;
            result[4] += 0.18811881188118812;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
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
            result[3] += 0.08;
            result[4] += 0.04;
            result[5] += 0.88;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.4375;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.4375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32075471698113206;
            result[3] += 0.6226415094339622;
            result[4] += 0;
            result[5] += 0.05660377358490566;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0.5555555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 0.0273972602739726;
            result[1] += 0.0547945205479452;
            result[2] += 0.7123287671232876;
            result[3] += 0.0273972602739726;
            result[4] += 0;
            result[5] += 0.1780821917808219;
          } else {
            result[0] += 0.8125;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3170731707317074;
            result[3] += 0.5853658536585367;
            result[4] += 0;
            result[5] += 0.09756097560975611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8113207547169812;
            result[3] += 0.16981132075471697;
            result[4] += 0;
            result[5] += 0.018867924528301886;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8495145631067961;
            result[3] += 0.15048543689320387;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004934210526315789;
            result[1] += 0;
            result[2] += 0.962171052631579;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0.001644736842105263;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.97265625;
            result[5] += 0.01953125;
          } else {
            result[0] += 0;
            result[1] += 0.8260869565217391;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17391304347826086;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9457831325301205;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04216867469879518;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0.25;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46875;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7727272727272727;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0.0011876484560570072;
            result[1] += 0.007125890736342043;
            result[2] += 0;
            result[3] += 0.04513064133016627;
            result[4] += 0.026128266033254157;
            result[5] += 0.9204275534441805;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.1115702479338843;
            result[1] += 0.02066115702479339;
            result[2] += 0;
            result[3] += 0.09917355371900827;
            result[4] += 0.32644628099173556;
            result[5] += 0.44214876033057854;
          } else {
            result[0] += 0.031578947368421054;
            result[1] += 0;
            result[2] += 0.010526315789473684;
            result[3] += 0.5947368421052631;
            result[4] += 0;
            result[5] += 0.3631578947368421;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.9333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.8657718120805369;
            result[1] += 0.004793863854266539;
            result[2] += 0.0019175455417066154;
            result[3] += 0.028763183125599234;
            result[4] += 0.08149568552253116;
            result[5] += 0.01725790987535954;
          } else {
            result[0] += 0.02272727272727273;
            result[1] += 0.7954545454545455;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363638;
            result[5] += 0.04545454545454546;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.031746031746031744;
            result[1] += 0;
            result[2] += 0.031746031746031744;
            result[3] += 0.4973544973544973;
            result[4] += 0.1164021164021164;
            result[5] += 0.32275132275132273;
          } else {
            result[0] += 0.4252873563218391;
            result[1] += 0;
            result[2] += 0.4367816091954024;
            result[3] += 0.10344827586206898;
            result[4] += 0.02298850574712644;
            result[5] += 0.01149425287356322;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8076923076923077;
            result[5] += 0.19230769230769232;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.9166666666666666;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.24;
            result[4] += 0.12;
            result[5] += 0.56;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0945945945945946;
            result[3] += 0.7702702702702703;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5952380952380952;
            result[3] += 0.36904761904761907;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.6923076923076923;
            result[1] += 0.15384615384615385;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8189300411522634;
            result[3] += 0.17695473251028807;
            result[4] += 0;
            result[5] += 0.00411522633744856;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0.003642987249544627;
            result[1] += 0;
            result[2] += 0.9726775956284154;
            result[3] += 0.023679417122040077;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.004081632653061225;
            result[1] += 0.004081632653061225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9795918367346939;
            result[5] += 0.012244897959183673;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6190476190476191;
            result[5] += 0.38095238095238093;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2608695652173913;
            result[5] += 0.7391304347826086;
          } else {
            result[0] += 0.7391304347826088;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1884057971014493;
            result[5] += 0.07246376811594205;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.003826530612244898;
            result[2] += 0;
            result[3] += 0.030612244897959183;
            result[4] += 0.030612244897959183;
            result[5] += 0.9349489795918368;
          } else {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0.24166666666666667;
            result[4] += 0.14166666666666666;
            result[5] += 0.5916666666666667;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.006369426751592357;
            result[2] += 0.050955414012738856;
            result[3] += 0.2611464968152866;
            result[4] += 0.07643312101910828;
            result[5] += 0.6050955414012739;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005263157894736842;
            result[3] += 0.7052631578947368;
            result[4] += 0.005263157894736842;
            result[5] += 0.28421052631578947;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 0.9976958525345622;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002304147465437788;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.1518987341772152;
            result[1] += 0.1518987341772152;
            result[2] += 0;
            result[3] += 0.02531645569620253;
            result[4] += 0.6708860759493671;
            result[5] += 0;
          } else {
            result[0] += 0.840669014084507;
            result[1] += 0.022007042253521125;
            result[2] += 0.0017605633802816902;
            result[3] += 0.029049295774647887;
            result[4] += 0.09419014084507042;
            result[5] += 0.01232394366197183;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.021148036253776436;
            result[1] += 0.030211480362537766;
            result[2] += 0.21450151057401812;
            result[3] += 0.42900302114803623;
            result[4] += 0.03625377643504532;
            result[5] += 0.2688821752265861;
          } else {
            result[0] += 0.7755102040816327;
            result[1] += 0;
            result[2] += 0.051020408163265314;
            result[3] += 0;
            result[4] += 0.17346938775510207;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08823529411764706;
            result[3] += 0.9117647058823529;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19047619047619047;
            result[3] += 0.14285714285714285;
            result[4] += 0.047619047619047616;
            result[5] += 0.6190476190476191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.9210526315789473;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.888888888888889;
            result[3] += 0.03703703703703704;
            result[4] += 0;
            result[5] += 0.07407407407407408;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.12244897959183673;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9056603773584906;
            result[3] += 0.09433962264150944;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9957537154989384;
            result[3] += 0.004246284501061571;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04398826979472142;
            result[1] += 0.0029325513196480943;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9325513196480939;
            result[5] += 0.02052785923753666;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.15;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.45;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0.0012453300124533001;
            result[2] += 0;
            result[3] += 0.026151930261519303;
            result[4] += 0.057285180572851806;
            result[5] += 0.9153175591531756;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0.09803921568627451;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0.49019607843137253;
            result[5] += 0.21568627450980393;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0.07272727272727272;
            result[4] += 0;
            result[5] += 0.8909090909090909;
          } else {
            result[0] += 0.0423728813559322;
            result[1] += 0;
            result[2] += 0.012711864406779662;
            result[3] += 0.5254237288135594;
            result[4] += 0.029661016949152543;
            result[5] += 0.3898305084745763;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0.06521739130434784;
            result[1] += 0.9130434782608696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02173913043478261;
            result[5] += 0;
          } else {
            result[0] += 0.8249336870026526;
            result[1] += 0.03183023872679045;
            result[2] += 0.00618921308576481;
            result[3] += 0.03359858532272325;
            result[4] += 0.08399646330680813;
            result[5] += 0.019451812555260833;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.033707865168539325;
            result[1] += 0;
            result[2] += 0.3202247191011236;
            result[3] += 0.34269662921348315;
            result[4] += 0;
            result[5] += 0.30337078651685395;
          } else {
            result[0] += 0.49382716049382724;
            result[1] += 0.09876543209876545;
            result[2] += 0.12345679012345681;
            result[3] += 0.012345679012345682;
            result[4] += 0.23456790123456794;
            result[5] += 0.03703703703703704;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9974554707379135;
            result[2] += 0;
            result[3] += 0.002544529262086514;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.046511627906976744;
            result[2] += 0;
            result[3] += 0.06976744186046512;
            result[4] += 0.4418604651162791;
            result[5] += 0.4418604651162791;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0.20512820512820512;
            result[4] += 0.02564102564102564;
            result[5] += 0.7435897435897436;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14388489208633093;
            result[3] += 0.7266187050359713;
            result[4] += 0;
            result[5] += 0.12949640287769784;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          } else {
            result[0] += 0.2142857142857143;
            result[1] += 0.07142857142857144;
            result[2] += 0.28571428571428575;
            result[3] += 0.14285714285714288;
            result[4] += 0.10714285714285715;
            result[5] += 0.1785714285714286;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.02;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.008944543828264758;
            result[1] += 0;
            result[2] += 0.855098389982111;
            result[3] += 0.12880143112701253;
            result[4] += 0;
            result[5] += 0.007155635062611807;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x43058000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0.06666666666666667;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9722222222222222;
            result[3] += 0.027777777777777776;
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.005102040816326531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.989795918367347;
            result[5] += 0.005102040816326531;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6346153846153846;
            result[5] += 0.36538461538461536;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.06122448979591837;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5510204081632654;
            result[5] += 0.38775510204081637;
          } else {
            result[0] += 0.012311901504787962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.038303693570451436;
            result[4] += 0.015047879616963064;
            result[5] += 0.9343365253077975;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.061124694376528114;
            result[1] += 0.05378973105134474;
            result[2] += 0.02689486552567237;
            result[3] += 0.4156479217603912;
            result[4] += 0.05867970660146699;
            result[5] += 0.38386308068459657;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8297872340425532;
            result[3] += 0.1702127659574468;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
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
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.0078125;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0.0078125;
            result[4] += 0.7890625;
            result[5] += 0.0078125;
          } else {
            result[0] += 0.8409272581934453;
            result[1] += 0.015187849720223821;
            result[2] += 0.012789768185451638;
            result[3] += 0.02877697841726619;
            result[4] += 0.07434052757793765;
            result[5] += 0.027977617905675458;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.013468013468013467;
            result[1] += 0.020202020202020204;
            result[2] += 0.07407407407407407;
            result[3] += 0.39730639730639733;
            result[4] += 0.14814814814814814;
            result[5] += 0.3468013468013468;
          } else {
            result[0] += 0.3550295857988166;
            result[1] += 0;
            result[2] += 0.485207100591716;
            result[3] += 0.035502958579881665;
            result[4] += 0.02366863905325444;
            result[5] += 0.10059171597633138;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
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
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09677419354838711;
            result[3] += 0.19354838709677422;
            result[4] += 0.03225806451612904;
            result[5] += 0.6774193548387097;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b50000))) ) ) {
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12765957446808512;
            result[3] += 0.7446808510638299;
            result[4] += 0;
            result[5] += 0.12765957446808512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5405405405405406;
            result[3] += 0.43243243243243246;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.918918918918919;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8709677419354839;
            result[3] += 0.12655086848635236;
            result[4] += 0;
            result[5] += 0.0024813895781637717;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0.9670886075949368;
            result[3] += 0.020253164556962026;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.0031847133757961785;
            result[1] += 0.022292993630573247;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.964968152866242;
            result[5] += 0.009554140127388535;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5945945945945946;
            result[5] += 0.40540540540540543;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423a0000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9953161592505855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00468384074941452;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0.9285714285714286;
            result[1] += 0.01020408163265306;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.02040816326530612;
            result[5] += 0.02040816326530612;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00516795865633075;
            result[3] += 0.02454780361757106;
            result[4] += 0.03488372093023256;
            result[5] += 0.9354005167958657;
          } else {
            result[0] += 0.04941860465116279;
            result[1] += 0.014534883720930232;
            result[2] += 0.029069767441860465;
            result[3] += 0.27325581395348836;
            result[4] += 0.12790697674418605;
            result[5] += 0.5058139534883721;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7068965517241379;
            result[4] += 0.005747126436781609;
            result[5] += 0.25287356321839083;
          } else {
            result[0] += 0.36134453781512604;
            result[1] += 0.04411764705882353;
            result[2] += 0.07773109243697479;
            result[3] += 0.1869747899159664;
            result[4] += 0.07352941176470588;
            result[5] += 0.25630252100840334;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.8776541961577351;
            result[1] += 0.012133468149646108;
            result[2] += 0.021233569261880688;
            result[3] += 0.014155712841253791;
            result[4] += 0.07381193124368049;
            result[5] += 0.0010111223458038423;
          } else {
            result[0] += 0.25000000000000006;
            result[1] += 0.02272727272727273;
            result[2] += 0.31818181818181823;
            result[3] += 0.14772727272727276;
            result[4] += 0.10227272727272729;
            result[5] += 0.15909090909090912;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c60000))) ) ) {
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42890000))) ) ) {
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
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11320754716981134;
            result[3] += 0.7358490566037736;
            result[4] += 0.01886792452830189;
            result[5] += 0.13207547169811323;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8709677419354839;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0.03225806451612903;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.006802721088435375;
            result[1] += 0;
            result[2] += 0.6802721088435375;
            result[3] += 0.2517006802721089;
            result[4] += 0;
            result[5] += 0.06122448979591837;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0.006329113924050633;
            result[1] += 0;
            result[2] += 0.9113924050632911;
            result[3] += 0.0759493670886076;
            result[4] += 0;
            result[5] += 0.006329113924050633;
          } else {
            result[0] += 0.46153846153846156;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9024390243902439;
            result[3] += 0.0975609756097561;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9893842887473461;
            result[3] += 0.010615711252653927;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953488372093023;
            result[5] += 0.004651162790697674;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.07407407407407408;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03703703703703704;
            result[4] += 0.6666666666666667;
            result[5] += 0.22222222222222224;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0013908205841446453;
            result[1] += 0.0013908205841446453;
            result[2] += 0;
            result[3] += 0.04172461752433936;
            result[4] += 0.015299026425591099;
            result[5] += 0.9401947148817803;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001953125;
            result[1] += 0;
            result[2] += 0.01171875;
            result[3] += 0.37109375;
            result[4] += 0.115234375;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9957894736842106;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004210526315789474;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.0847457627118644;
            result[1] += 0.211864406779661;
            result[2] += 0;
            result[3] += 0.01694915254237288;
            result[4] += 0.6864406779661016;
            result[5] += 0;
          } else {
            result[0] += 0.8816362053959965;
            result[1] += 0.0034812880765883376;
            result[2] += 0.004351610095735422;
            result[3] += 0.033942558746736295;
            result[4] += 0.0557006092254134;
            result[5] += 0.020887728459530026;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.020833333333333332;
            result[1] += 0.03333333333333333;
            result[2] += 0.075;
            result[3] += 0.49166666666666664;
            result[4] += 0.03333333333333333;
            result[5] += 0.3458333333333333;
          } else {
            result[0] += 0.34328358208955223;
            result[1] += 0.026119402985074626;
            result[2] += 0.39552238805970147;
            result[3] += 0.022388059701492536;
            result[4] += 0.07462686567164178;
            result[5] += 0.13805970149253732;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.33333333333333337;
            result[1] += 0.5000000000000001;
            result[2] += 0.16666666666666669;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404255;
            result[3] += 0.7659574468085106;
            result[4] += 0;
            result[5] += 0.1702127659574468;
          } else {
            result[0] += 0.04166666666666667;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.12500000000000003;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
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
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e00000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c80000))) ) ) {
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
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0.008333333333333333;
            result[1] += 0;
            result[2] += 0.8791666666666667;
            result[3] += 0.10833333333333334;
            result[4] += 0;
            result[5] += 0.004166666666666667;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.002967359050445104;
            result[1] += 0;
            result[2] += 0.9436201780415431;
            result[3] += 0.050445103857566766;
            result[4] += 0;
            result[5] += 0.002967359050445104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9922178988326849;
            result[3] += 0.007782101167315175;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.007547169811320755;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9660377358490566;
            result[5] += 0.026415094339622643;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9879518072289156;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012048192771084338;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.875;
          } else {
            result[0] += 0.09756097560975611;
            result[1] += 0.21951219512195125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6097560975609757;
            result[5] += 0.07317073170731708;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002680965147453083;
            result[2] += 0;
            result[3] += 0.02680965147453083;
            result[4] += 0.030831099195710455;
            result[5] += 0.9396782841823056;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
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
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.625;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.011627906976744186;
            result[1] += 0;
            result[2] += 0.005813953488372093;
            result[3] += 0.14534883720930233;
            result[4] += 0.0872093023255814;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.0033222591362126247;
            result[1] += 0.006644518272425249;
            result[2] += 0;
            result[3] += 0.6611295681063123;
            result[4] += 0.016611295681063124;
            result[5] += 0.3122923588039867;
          } else {
            result[0] += 0.12903225806451615;
            result[1] += 0;
            result[2] += 0.14516129032258068;
            result[3] += 0.16129032258064518;
            result[4] += 0.01612903225806452;
            result[5] += 0.5483870967741936;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.05;
            result[1] += 0.2;
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.2028985507246377;
            result[1] += 0.14492753623188406;
            result[2] += 0;
            result[3] += 0.057971014492753624;
            result[4] += 0.5942028985507246;
            result[5] += 0;
          } else {
            result[0] += 0.8553299492385787;
            result[1] += 0.006768189509306261;
            result[2] += 0.026226734348561764;
            result[3] += 0.03637901861252116;
            result[4] += 0.04060913705583757;
            result[5] += 0.03468697123519459;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.07352941176470588;
            result[1] += 0.10294117647058823;
            result[2] += 0.11764705882352941;
            result[3] += 0.058823529411764705;
            result[4] += 0.45588235294117646;
            result[5] += 0.19117647058823528;
          } else {
            result[0] += 0.046875;
            result[1] += 0.010416666666666666;
            result[2] += 0.328125;
            result[3] += 0.3854166666666667;
            result[4] += 0.026041666666666668;
            result[5] += 0.203125;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.32;
            result[1] += 0;
            result[2] += 0.56;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.12;
          } else {
            result[0] += 0.015839493136219636;
            result[1] += 0;
            result[2] += 0.9039070749736007;
            result[3] += 0.07497360084477295;
            result[4] += 0;
            result[5] += 0.005279831045406546;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0.09090909090909091;
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0.00881057268722467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.986784140969163;
            result[5] += 0.004405286343612335;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0.7368421052631579;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8620689655172414;
            result[5] += 0.10344827586206898;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.6375000000000001;
            result[1] += 0.037500000000000006;
            result[2] += 0;
            result[3] += 0.06250000000000001;
            result[4] += 0.10000000000000002;
            result[5] += 0.16250000000000003;
          } else {
            result[0] += 0.004219409282700422;
            result[1] += 0.006329113924050633;
            result[2] += 0.002109704641350211;
            result[3] += 0.06751054852320675;
            result[4] += 0.022151898734177215;
            result[5] += 0.8976793248945147;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.18604651162790697;
            result[5] += 0.7674418604651163;
          } else {
            result[0] += 0.005917159763313609;
            result[1] += 0;
            result[2] += 0.005917159763313609;
            result[3] += 0.8224852071005917;
            result[4] += 0;
            result[5] += 0.16568047337278108;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9951923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004807692307692308;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.20994475138121546;
            result[1] += 0.06077348066298342;
            result[2] += 0.03314917127071823;
            result[3] += 0.016574585635359115;
            result[4] += 0.6353591160220995;
            result[5] += 0.04419889502762431;
          } else {
            result[0] += 0.8340180772391126;
            result[1] += 0.02875924404272802;
            result[2] += 0.004108463434675432;
            result[3] += 0.041084634346754315;
            result[4] += 0.06820049301561217;
            result[5] += 0.0238290879211175;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0.014563106796116505;
            result[2] += 0.13106796116504854;
            result[3] += 0.36893203883495146;
            result[4] += 0.07766990291262135;
            result[5] += 0.39805825242718446;
          } else {
            result[0] += 0.22033898305084748;
            result[1] += 0.01129943502824859;
            result[2] += 0.5480225988700566;
            result[3] += 0.07344632768361584;
            result[4] += 0.07344632768361584;
            result[5] += 0.07344632768361584;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.044444444444444446;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9555555555555556;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42580000))) ) ) {
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
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05357142857142857;
            result[2] += 0.4107142857142857;
            result[3] += 0.44642857142857145;
            result[4] += 0;
            result[5] += 0.08928571428571429;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.625;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3888888888888889;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7843137254901961;
            result[3] += 0.1568627450980392;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0049813200498132005;
            result[1] += 0;
            result[2] += 0.9427148194271482;
            result[3] += 0.052303860523038606;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.003236245954692557;
            result[1] += 0.006472491909385114;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9902912621359223;
            result[5] += 0;
          } else {
            result[0] += 0.06578947368421052;
            result[1] += 0.02631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5657894736842105;
            result[5] += 0.34210526315789475;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ac0000))) ) ) {
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0.12;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.88;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0042780748663101605;
            result[1] += 0.0053475935828877;
            result[2] += 0;
            result[3] += 0.05561497326203209;
            result[4] += 0.051336898395721926;
            result[5] += 0.8834224598930481;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.030303030303030304;
            result[2] += 0.030303030303030304;
            result[3] += 0.13636363636363635;
            result[4] += 0.015151515151515152;
            result[5] += 0.7878787878787878;
          } else {
            result[0] += 0.011494252873563218;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7298850574712644;
            result[4] += 0;
            result[5] += 0.25862068965517243;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0.5906432748538012;
            result[1] += 0;
            result[2] += 0.03508771929824561;
            result[3] += 0.08187134502923976;
            result[4] += 0.17543859649122806;
            result[5] += 0.11695906432748537;
          } else {
            result[0] += 0.22916666666666669;
            result[1] += 0.020833333333333336;
            result[2] += 0.13392857142857145;
            result[3] += 0.32738095238095244;
            result[4] += 0.0386904761904762;
            result[5] += 0.25000000000000006;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.1935483870967742;
            result[1] += 0.16129032258064516;
            result[2] += 0;
            result[3] += 0.04838709677419355;
            result[4] += 0.5967741935483871;
            result[5] += 0;
          } else {
            result[0] += 0.8033707865168539;
            result[1] += 0.011235955056179775;
            result[2] += 0.06835205992509363;
            result[3] += 0.03651685393258427;
            result[4] += 0.04868913857677903;
            result[5] += 0.031835205992509365;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0.8857142857142857;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8518518518518519;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.05660377358490566;
            result[1] += 0;
            result[2] += 0.7358490566037735;
            result[3] += 0.18867924528301888;
            result[4] += 0;
            result[5] += 0.018867924528301886;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5529411764705883;
            result[3] += 0.43529411764705883;
            result[4] += 0;
            result[5] += 0.011764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.92;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9083969465648855;
            result[3] += 0.08396946564885496;
            result[4] += 0;
            result[5] += 0.007633587786259542;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7209302325581395;
            result[3] += 0.2558139534883721;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8804347826086957;
            result[3] += 0.10869565217391304;
            result[4] += 0;
            result[5] += 0.010869565217391304;
          } else {
            result[0] += 0.00186219739292365;
            result[1] += 0;
            result[2] += 0.9869646182495344;
            result[3] += 0.0111731843575419;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.004975124378109453;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9800995024875622;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425c0000))) ) ) {
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
            result[3] += 0.018518518518518517;
            result[4] += 0.02849002849002849;
            result[5] += 0.9529914529914529;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.07848837209302326;
            result[1] += 0.040697674418604654;
            result[2] += 0.011627906976744186;
            result[3] += 0.18604651162790697;
            result[4] += 0.0872093023255814;
            result[5] += 0.5959302325581395;
          } else {
            result[0] += 0;
            result[1] += 0.007633587786259542;
            result[2] += 0;
            result[3] += 0.8015267175572519;
            result[4] += 0.007633587786259542;
            result[5] += 0.183206106870229;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0.03773584905660377;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9433962264150944;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.85;
            result[5] += 0.1;
          } else {
            result[0] += 0.13297872340425532;
            result[1] += 0.026595744680851064;
            result[2] += 0.005319148936170213;
            result[3] += 0.2872340425531915;
            result[4] += 0.13297872340425532;
            result[5] += 0.4148936170212766;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8713450292397661;
            result[1] += 0.01921470342522974;
            result[2] += 0.005012531328320802;
            result[3] += 0.00835421888053467;
            result[4] += 0.08939014202172096;
            result[5] += 0.006683375104427736;
          } else {
            result[0] += 0.2422907488986784;
            result[1] += 0;
            result[2] += 0.22026431718061673;
            result[3] += 0.23788546255506607;
            result[4] += 0.11894273127753303;
            result[5] += 0.18061674008810572;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0.22413793103448276;
            result[2] += 0.1724137931034483;
            result[3] += 0.1206896551724138;
            result[4] += 0.08620689655172414;
            result[5] += 0.39655172413793105;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.021505376344086027;
            result[1] += 0;
            result[2] += 0.03225806451612904;
            result[3] += 0.6559139784946237;
            result[4] += 0.021505376344086027;
            result[5] += 0.2688172043010753;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9375;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0.013888888888888888;
            result[2] += 0.4930555555555556;
            result[3] += 0.3541666666666667;
            result[4] += 0;
            result[5] += 0.1388888888888889;
          } else {
            result[0] += 0.08823529411764706;
            result[1] += 0;
            result[2] += 0.8529411764705882;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0.029411764705882353;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006472491909385114;
            result[1] += 0;
            result[2] += 0.8446601941747572;
            result[3] += 0.13915857605177995;
            result[4] += 0;
            result[5] += 0.009708737864077669;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.16363636363636364;
            result[4] += 0;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0.0019157088122605363;
            result[1] += 0;
            result[2] += 0.9846743295019157;
            result[3] += 0.013409961685823755;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9842931937172775;
            result[5] += 0.015706806282722512;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5517241379310345;
            result[5] += 0.4482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7916666666666667;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0.00145985401459854;
            result[2] += 0;
            result[3] += 0.01897810218978102;
            result[4] += 0.0364963503649635;
            result[5] += 0.9430656934306569;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.39622641509433965;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09433962264150944;
            result[4] += 0.4339622641509434;
            result[5] += 0.07547169811320754;
          } else {
            result[0] += 0;
            result[1] += 0.0029069767441860465;
            result[2] += 0.0029069767441860465;
            result[3] += 0.35755813953488375;
            result[4] += 0.02616279069767442;
            result[5] += 0.6104651162790697;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bf0000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.09473684210526316;
            result[1] += 0.21578947368421053;
            result[2] += 0;
            result[3] += 0.015789473684210527;
            result[4] += 0.6684210526315789;
            result[5] += 0.005263157894736842;
          } else {
            result[0] += 0.8400335008375209;
            result[1] += 0.007537688442211055;
            result[2] += 0.005025125628140704;
            result[3] += 0.03768844221105527;
            result[4] += 0.07956448911222781;
            result[5] += 0.03015075376884422;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.05246913580246913;
            result[1] += 0.027777777777777776;
            result[2] += 0.06790123456790123;
            result[3] += 0.44135802469135804;
            result[4] += 0.06790123456790123;
            result[5] += 0.3425925925925926;
          } else {
            result[0] += 0.4214876033057851;
            result[1] += 0;
            result[2] += 0.4834710743801653;
            result[3] += 0.06198347107438017;
            result[4] += 0.012396694214876033;
            result[5] += 0.02066115702479339;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.1282051282051282;
            result[4] += 0.1282051282051282;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07017543859649122;
            result[3] += 0.9122807017543859;
            result[4] += 0;
            result[5] += 0.017543859649122806;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0.29411764705882354;
            result[4] += 0;
            result[5] += 0.5294117647058824;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.26666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9777777777777777;
            result[3] += 0.022222222222222223;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6296296296296297;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5000000000000001;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.16666666666666669;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.009966777408637873;
            result[1] += 0;
            result[2] += 0.8704318936877077;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0.0033222591362126247;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9722222222222222;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953917050691244;
            result[5] += 0.004608294930875576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.717391304347826;
            result[5] += 0.2608695652173913;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4583333333333333;
            result[5] += 0.5416666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
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
            result[3] += 0.05115712545676005;
            result[4] += 0.037758830694275276;
            result[5] += 0.9110840438489647;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.004975124378109453;
            result[1] += 0.04975124378109453;
            result[2] += 0.06965174129353234;
            result[3] += 0.18407960199004975;
            result[4] += 0.11442786069651742;
            result[5] += 0.5771144278606966;
          } else {
            result[0] += 0.013422818791946308;
            result[1] += 0.013422818791946308;
            result[2] += 0.013422818791946308;
            result[3] += 0.6241610738255033;
            result[4] += 0.04697986577181208;
            result[5] += 0.28859060402684567;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0.9954441913439636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004555808656036446;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.70995670995671;
            result[1] += 0.06493506493506493;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22510822510822512;
            result[5] += 0;
          } else {
            result[0] += 0.04950495049504951;
            result[1] += 0.056105610561056105;
            result[2] += 0.07920792079207921;
            result[3] += 0.1848184818481848;
            result[4] += 0.15181518151815182;
            result[5] += 0.47854785478547857;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0.1724137931034483;
            result[1] += 0.7241379310344828;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10344827586206896;
            result[5] += 0;
          } else {
            result[0] += 0.8518877057115198;
            result[1] += 0.002904162633107454;
            result[2] += 0.027105517909002903;
            result[3] += 0.026137463697967087;
            result[4] += 0.07841239109390126;
            result[5] += 0.013552758954501452;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12295081967213115;
            result[3] += 0.5983606557377049;
            result[4] += 0;
            result[5] += 0.2786885245901639;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.05194805194805195;
            result[1] += 0.012987012987012988;
            result[2] += 0.2727272727272727;
            result[3] += 0.4675324675324675;
            result[4] += 0.06493506493506493;
            result[5] += 0.12987012987012986;
          } else {
            result[0] += 0;
            result[1] += 0.06382978723404256;
            result[2] += 0.7446808510638299;
            result[3] += 0.14893617021276598;
            result[4] += 0;
            result[5] += 0.04255319148936171;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.32727272727272727;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.09090909090909091;
            result[4] += 0.03636363636363636;
            result[5] += 0;
          } else {
            result[0] += 0.011160714285714286;
            result[1] += 0;
            result[2] += 0.8962053571428571;
            result[3] += 0.08816964285714286;
            result[4] += 0;
            result[5] += 0.004464285714285714;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.0091324200913242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9863013698630136;
            result[5] += 0.0045662100456621;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.6363636363636364;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.2;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.625;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35;
            result[5] += 0;
          } else {
            result[0] += 0.005580357142857143;
            result[1] += 0;
            result[2] += 0.0011160714285714285;
            result[3] += 0.04575892857142857;
            result[4] += 0.049107142857142856;
            result[5] += 0.8984375;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.16363636363636364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.5636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0.006493506493506495;
            result[2] += 0;
            result[3] += 0.7727272727272728;
            result[4] += 0;
            result[5] += 0.2207792207792208;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.05789473684210526;
            result[1] += 0.3105263157894737;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6263157894736842;
            result[5] += 0.005263157894736842;
          } else {
            result[0] += 0.8536371603856268;
            result[1] += 0.020157756354075376;
            result[2] += 0.004382120946538125;
            result[3] += 0.02629272567922875;
            result[4] += 0.06836108676599476;
            result[5] += 0.027169149868536375;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.04950495049504951;
            result[1] += 0.024752475247524754;
            result[2] += 0.2202970297029703;
            result[3] += 0.37376237623762376;
            result[4] += 0.039603960396039604;
            result[5] += 0.29207920792079206;
          } else {
            result[0] += 0.6410256410256411;
            result[1] += 0.09615384615384616;
            result[2] += 0.1858974358974359;
            result[3] += 0.019230769230769232;
            result[4] += 0.04487179487179487;
            result[5] += 0.01282051282051282;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42840000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.5000000000000001;
            result[2] += 0.33333333333333337;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.5428571428571428;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.010344827586206896;
            result[1] += 0;
            result[2] += 0.7689655172413793;
            result[3] += 0.1724137931034483;
            result[4] += 0.0034482758620689655;
            result[5] += 0.04482758620689655;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8697916666666666;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.005208333333333333;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.925;
            result[3] += 0.075;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9946666666666667;
            result[3] += 0.005333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004098360655737706;
            result[4] += 0.9836065573770493;
            result[5] += 0.012295081967213116;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.48717948717948717;
            result[5] += 0.358974358974359;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c20000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.660377358490566;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.33962264150943394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.003121748178980229;
            result[2] += 0.003121748178980229;
            result[3] += 0.06971904266389178;
            result[4] += 0.047866805411030174;
            result[5] += 0.8761706555671176;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.30434782608695654;
            result[4] += 0.043478260869565216;
            result[5] += 0.6521739130434783;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.1388888888888889;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0851063829787234;
            result[2] += 0;
            result[3] += 0.0851063829787234;
            result[4] += 0.8085106382978723;
            result[5] += 0.02127659574468085;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.05090311986863711;
            result[2] += 0.016420361247947456;
            result[3] += 0.008210180623973728;
            result[4] += 0.2315270935960591;
            result[5] += 0.026272577996715927;
          } else {
            result[0] += 0.04556962025316456;
            result[1] += 0.030379746835443037;
            result[2] += 0.16962025316455695;
            result[3] += 0.3721518987341772;
            result[4] += 0.043037974683544304;
            result[5] += 0.3392405063291139;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8945362134688691;
            result[1] += 0.012706480304955527;
            result[2] += 0.03430749682337993;
            result[3] += 0.0063532401524777635;
            result[4] += 0.044472681067344345;
            result[5] += 0.007623888182973317;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.92;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28571428571428575;
            result[3] += 0.4285714285714286;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0.17647058823529413;
            result[3] += 0.058823529411764705;
            result[4] += 0.058823529411764705;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25925925925925924;
            result[3] += 0.7037037037037037;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.14705882352941177;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.37037037037037035;
            result[1] += 0;
            result[2] += 0.6296296296296297;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9211822660098522;
            result[3] += 0.07389162561576355;
            result[4] += 0;
            result[5] += 0.0049261083743842365;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.00432900432900433;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9653679653679654;
            result[5] += 0.030303030303030307;
          } else {
            result[0] += 0.3157894736842105;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21052631578947367;
            result[5] += 0.47368421052631576;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006211180124223602;
            result[2] += 0.0037267080745341614;
            result[3] += 0.05093167701863354;
            result[4] += 0.03975155279503106;
            result[5] += 0.8993788819875776;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08928571428571429;
            result[4] += 0.05357142857142857;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.058823529411764705;
            result[3] += 0.5336134453781513;
            result[4] += 0.046218487394957986;
            result[5] += 0.3025210084033613;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975429975429976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002457002457002457;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.8571428571428571;
            result[5] += 0.05;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5068493150684932;
            result[2] += 0;
            result[3] += 0.1232876712328767;
            result[4] += 0.3013698630136986;
            result[5] += 0.0684931506849315;
          } else {
            result[0] += 0.8692640692640693;
            result[1] += 0.006926406926406926;
            result[2] += 0.005194805194805195;
            result[3] += 0.02683982683982684;
            result[4] += 0.06666666666666667;
            result[5] += 0.025108225108225107;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.01204819277108434;
            result[1] += 0.06024096385542169;
            result[2] += 0.12048192771084339;
            result[3] += 0.4096385542168675;
            result[4] += 0.02409638554216868;
            result[5] += 0.3734939759036145;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0;
            result[2] += 0.15053763440860218;
            result[3] += 0;
            result[4] += 0.13978494623655915;
            result[5] += 0.04301075268817205;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15625;
            result[4] += 0.09375;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.953125;
            result[4] += 0.015625;
            result[5] += 0.03125;
          } else {
            result[0] += 0;
            result[1] += 0.08235294117647059;
            result[2] += 0.17647058823529413;
            result[3] += 0.43529411764705883;
            result[4] += 0.03529411764705882;
            result[5] += 0.27058823529411763;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5925925925925926;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.041666666666666664;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.05343511450381679;
            result[1] += 0;
            result[2] += 0.6641221374045801;
            result[3] += 0.19083969465648856;
            result[4] += 0.007633587786259542;
            result[5] += 0.08396946564885496;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.0031645569620253164;
            result[1] += 0;
            result[2] += 0.8512658227848101;
            result[3] += 0.14240506329113925;
            result[4] += 0;
            result[5] += 0.0031645569620253164;
          } else {
            result[0] += 0.0017825311942959;
            result[1] += 0;
            result[2] += 0.9732620320855615;
            result[3] += 0.017825311942959002;
            result[4] += 0;
            result[5] += 0.0071301247771836;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0.005263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947368421052631;
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
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9523809523809523;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.92;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.6;
            result[5] += 0.36;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0011235955056179776;
            result[1] += 0.010112359550561797;
            result[2] += 0;
            result[3] += 0.046067415730337076;
            result[4] += 0.03146067415730337;
            result[5] += 0.9112359550561798;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.8421052631578947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005649717514124294;
            result[3] += 0.7909604519774012;
            result[4] += 0.011299435028248588;
            result[5] += 0.192090395480226;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08064516129032258;
            result[3] += 0.25806451612903225;
            result[4] += 0.016129032258064516;
            result[5] += 0.6451612903225806;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.05263157894736842;
            result[4] += 0.2631578947368421;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02;
            result[1] += 0.06;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.89;
            result[5] += 0.03;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9883177570093459;
            result[2] += 0;
            result[3] += 0.004672897196261683;
            result[4] += 0.007009345794392524;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.041025641025641026;
            result[1] += 0;
            result[2] += 0.05641025641025641;
            result[3] += 0.16923076923076924;
            result[4] += 0.358974358974359;
            result[5] += 0.37435897435897436;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.14102564102564105;
            result[1] += 0.43589743589743596;
            result[2] += 0.03846153846153847;
            result[3] += 0;
            result[4] += 0.3461538461538462;
            result[5] += 0.03846153846153847;
          } else {
            result[0] += 0.8532110091743119;
            result[1] += 0.007506255212677231;
            result[2] += 0.015012510425354461;
            result[3] += 0.04420350291909925;
            result[4] += 0.0475396163469558;
            result[5] += 0.03252710592160134;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11450381679389313;
            result[3] += 0.6259541984732825;
            result[4] += 0;
            result[5] += 0.2595419847328244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45652173913043476;
            result[3] += 0.45652173913043476;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.0379746835443038;
            result[1] += 0;
            result[2] += 0.8987341772151899;
            result[3] += 0.012658227848101266;
            result[4] += 0;
            result[5] += 0.05063291139240506;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5142857142857143;
            result[3] += 0.20000000000000007;
            result[4] += 0.14285714285714288;
            result[5] += 0.14285714285714288;
          } else {
            result[0] += 0.85;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7391304347826086;
            result[3] += 0.20108695652173914;
            result[4] += 0;
            result[5] += 0.059782608695652176;
          } else {
            result[0] += 0.020161290322580648;
            result[1] += 0;
            result[2] += 0.924731182795699;
            result[3] += 0.05376344086021506;
            result[4] += 0;
            result[5] += 0.0013440860215053767;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008583690987124463;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9914163090128756;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0.7;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0.9565217391304348;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9607843137254902;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0392156862745098;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017973856209150325;
            result[4] += 0.013071895424836602;
            result[5] += 0.9689542483660131;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.011278195488721804;
            result[2] += 0.007518796992481203;
            result[3] += 0.10150375939849623;
            result[4] += 0.13909774436090225;
            result[5] += 0.7406015037593985;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.0196078431372549;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.058823529411764705;
            result[5] += 0.803921568627451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.5869565217391305;
            result[4] += 0;
            result[5] += 0.3695652173913043;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.013513513513513514;
            result[1] += 0.06756756756756757;
            result[2] += 0.006756756756756757;
            result[3] += 0.44594594594594594;
            result[4] += 0.0472972972972973;
            result[5] += 0.4189189189189189;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0.030612244897959183;
            result[2] += 0.015306122448979591;
            result[3] += 0.7959183673469388;
            result[4] += 0.00510204081632653;
            result[5] += 0.1326530612244898;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.5357142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.0784313725490196;
            result[1] += 0.0392156862745098;
            result[2] += 0;
            result[3] += 0.0392156862745098;
            result[4] += 0.7941176470588235;
            result[5] += 0.049019607843137254;
          } else {
            result[0] += 0.030303030303030307;
            result[1] += 0.893939393939394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030307;
            result[5] += 0.04545454545454546;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.8499558693733451;
            result[1] += 0.00441306266548985;
            result[2] += 0.02118270079435128;
            result[3] += 0.02559576345984113;
            result[4] += 0.06972639011473963;
            result[5] += 0.02912621359223301;
          } else {
            result[0] += 0.2993197278911565;
            result[1] += 0.020408163265306124;
            result[2] += 0.2448979591836735;
            result[3] += 0.19727891156462588;
            result[4] += 0.054421768707483;
            result[5] += 0.18367346938775514;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.6;
            result[4] += 0.13333333333333333;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.6875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.06818181818181818;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.022727272727272728;
            result[4] += 0.20454545454545456;
            result[5] += 0.29545454545454547;
          } else {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0.6640625;
            result[3] += 0.28125;
            result[4] += 0;
            result[5] += 0.046875;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1951219512195122;
            result[1] += 0;
            result[2] += 0.6341463414634146;
            result[3] += 0.04878048780487805;
            result[4] += 0;
            result[5] += 0.12195121951219512;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.37142857142857144;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004968944099378882;
            result[1] += 0;
            result[2] += 0.9366459627329192;
            result[3] += 0.05217391304347826;
            result[4] += 0;
            result[5] += 0.006211180124223602;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.023529411764705882;
            result[1] += 0.0058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.6363636363636364;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.45161290322580644;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5483870967741935;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0036719706242350062;
            result[2] += 0.0036719706242350062;
            result[3] += 0.02937576499388005;
            result[4] += 0.03916768665850673;
            result[5] += 0.9241126070991432;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5986394557823129;
            result[4] += 0.013605442176870748;
            result[5] += 0.3877551020408163;
          } else {
            result[0] += 0.0660377358490566;
            result[1] += 0.05660377358490566;
            result[2] += 0.09433962264150944;
            result[3] += 0.20754716981132076;
            result[4] += 0.12264150943396226;
            result[5] += 0.4528301886792453;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.96;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.6119162640901771;
            result[1] += 0.056360708534621565;
            result[2] += 0;
            result[3] += 0.011272141706924314;
            result[4] += 0.2624798711755233;
            result[5] += 0.05797101449275361;
          } else {
            result[0] += 0.032818532818532815;
            result[1] += 0.03088803088803089;
            result[2] += 0.1274131274131274;
            result[3] += 0.38223938223938225;
            result[4] += 0.03861003861003861;
            result[5] += 0.38803088803088803;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.9190184049079753;
            result[1] += 0.01349693251533742;
            result[2] += 0.006134969325153373;
            result[3] += 0.009815950920245398;
            result[4] += 0.050306748466257656;
            result[5] += 0.0012269938650306747;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.15;
            result[4] += 0.15;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.04;
            result[1] += 0.1;
            result[2] += 0.04;
            result[3] += 0.02;
            result[4] += 0.24;
            result[5] += 0.56;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.8163265306122449;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3548387096774194;
            result[3] += 0.5161290322580645;
            result[4] += 0;
            result[5] += 0.12903225806451613;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0.01282051282051282;
            result[1] += 0;
            result[2] += 0.9102564102564102;
            result[3] += 0.07692307692307693;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0.7746478873239436;
            result[3] += 0.16901408450704225;
            result[4] += 0;
            result[5] += 0.04225352112676056;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00846262341325811;
            result[1] += 0;
            result[2] += 0.9506346967559943;
            result[3] += 0.039492242595204514;
            result[4] += 0;
            result[5] += 0.0014104372355430183;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012096774193548387;
            result[3] += 0.004032258064516129;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006738544474393531;
            result[2] += 0;
            result[3] += 0.03908355795148248;
            result[4] += 0.022911051212938006;
            result[5] += 0.931266846361186;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.1759656652360515;
            result[1] += 0.04721030042918455;
            result[2] += 0;
            result[3] += 0.034334763948497854;
            result[4] += 0.19313304721030042;
            result[5] += 0.5493562231759657;
          } else {
            result[0] += 0.009389671361502348;
            result[1] += 0.004694835680751174;
            result[2] += 0.0892018779342723;
            result[3] += 0.6009389671361502;
            result[4] += 0;
            result[5] += 0.29577464788732394;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.6467576791808872;
            result[1] += 0.047781569965870296;
            result[2] += 0.0034129692832764497;
            result[3] += 0.03242320819112627;
            result[4] += 0.23549488054607504;
            result[5] += 0.0341296928327645;
          } else {
            result[0] += 0.03579952267303103;
            result[1] += 0.021479713603818614;
            result[2] += 0.15274463007159905;
            result[3] += 0.32935560859188545;
            result[4] += 0.11455847255369929;
            result[5] += 0.3460620525059666;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.918774966711052;
            result[1] += 0.018641810918774968;
            result[2] += 0.006657789613848202;
            result[3] += 0.002663115845539281;
            result[4] += 0.05326231691078562;
            result[5] += 0;
          } else {
            result[0] += 0.3944954128440367;
            result[1] += 0;
            result[2] += 0.4036697247706422;
            result[3] += 0.11009174311926606;
            result[4] += 0.08256880733944955;
            result[5] += 0.009174311926605505;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18867924528301888;
            result[3] += 0.5849056603773585;
            result[4] += 0;
            result[5] += 0.22641509433962265;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.632768361581921;
            result[3] += 0.2711864406779661;
            result[4] += 0;
            result[5] += 0.096045197740113;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9824561403508771;
            result[3] += 0.017543859649122806;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.052083333333333336;
            result[1] += 0;
            result[2] += 0.8489583333333334;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0.005208333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9696969696969697;
            result[3] += 0.030303030303030304;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.007751937984496124;
            result[1] += 0.011627906976744186;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9418604651162791;
            result[5] += 0.03875968992248062;
          } else {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0.7758620689655172;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20689655172413793;
            result[5] += 0.017241379310344827;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.09375;
            result[2] += 0;
            result[3] += 0.09375;
            result[4] += 0.59375;
            result[5] += 0.21875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05188679245283019;
            result[4] += 0.060141509433962265;
            result[5] += 0.8879716981132075;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7202072538860104;
            result[4] += 0.010362694300518135;
            result[5] += 0.2694300518134715;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.20512820512820512;
            result[4] += 0.10256410256410256;
            result[5] += 0.5512820512820513;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0.15789473684210525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8421052631578947;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5357142857142857;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.07142857142857142;
            result[5] += 0.14285714285714285;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.056179775280898875;
            result[1] += 0.20224719101123595;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7303370786516854;
            result[5] += 0.011235955056179775;
          } else {
            result[0] += 0.8394039735099339;
            result[1] += 0.005794701986754968;
            result[2] += 0.012417218543046359;
            result[3] += 0.028973509933774837;
            result[4] += 0.07698675496688744;
            result[5] += 0.036423841059602655;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.030434782608695653;
            result[1] += 0.04782608695652174;
            result[2] += 0.26521739130434785;
            result[3] += 0.391304347826087;
            result[4] += 0.0391304347826087;
            result[5] += 0.22608695652173913;
          } else {
            result[0] += 0.8271604938271605;
            result[1] += 0;
            result[2] += 0.04938271604938271;
            result[3] += 0;
            result[4] += 0.08641975308641975;
            result[5] += 0.037037037037037035;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.023255813953488372;
            result[4] += 0.046511627906976744;
            result[5] += 0.8837209302325582;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0.11363636363636363;
            result[2] += 0;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.06818181818181818;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.23333333333333334;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.22727272727272727;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8936170212765957;
            result[3] += 0.10638297872340426;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.03333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ae0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.03436426116838488;
            result[1] += 0;
            result[2] += 0.7319587628865979;
            result[3] += 0.18213058419243985;
            result[4] += 0;
            result[5] += 0.05154639175257732;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8853211009174312;
            result[3] += 0.11467889908256881;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9705215419501134;
            result[3] += 0.02947845804988662;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0038314176245210726;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9731800766283525;
            result[5] += 0.022988505747126436;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0;
            result[4] += 0.8148148148148149;
            result[5] += 0.07407407407407408;
          } else {
            result[0] += 0.010471204188481676;
            result[1] += 0.006544502617801047;
            result[2] += 0.002617801047120419;
            result[3] += 0.0274869109947644;
            result[4] += 0.03926701570680628;
            result[5] += 0.9136125654450262;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.6507936507936508;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0.07936507936507936;
          } else {
            result[0] += 0.013550135501355014;
            result[1] += 0.018970189701897018;
            result[2] += 0.04065040650406504;
            result[3] += 0.4254742547425474;
            result[4] += 0.013550135501355014;
            result[5] += 0.4878048780487805;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e40000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.05405405405405406;
            result[1] += 0.4594594594594595;
            result[2] += 0;
            result[3] += 0.21621621621621623;
            result[4] += 0.21621621621621623;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0;
            result[1] += 0.9977924944812362;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002207505518763797;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.19327731092436976;
            result[1] += 0.18487394957983194;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6134453781512605;
            result[5] += 0.008403361344537815;
          } else {
            result[0] += 0.8973897389738974;
            result[1] += 0.0036003600360036;
            result[2] += 0.009900990099009901;
            result[3] += 0.023402340234023402;
            result[4] += 0.041404140414041404;
            result[5] += 0.024302430243024302;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0.05343511450381679;
            result[1] += 0.030534351145038167;
            result[2] += 0.14122137404580154;
            result[3] += 0.24045801526717558;
            result[4] += 0.16793893129770993;
            result[5] += 0.366412213740458;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07086614173228346;
            result[3] += 0.7401574803149606;
            result[4] += 0;
            result[5] += 0.1889763779527559;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.1;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5652173913043478;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0.967741935483871;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0.06666666666666667;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8108108108108109;
            result[3] += 0.13513513513513514;
            result[4] += 0.02702702702702703;
            result[5] += 0.02702702702702703;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0.30357142857142855;
            result[4] += 0;
            result[5] += 0.05357142857142857;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0.927536231884058;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.717948717948718;
            result[3] += 0.2564102564102564;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.012422360248447204;
            result[1] += 0;
            result[2] += 0.9192546583850931;
            result[3] += 0.049689440993788817;
            result[4] += 0;
            result[5] += 0.018633540372670808;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.06584362139917696;
            result[4] += 0;
            result[5] += 0.00823045267489712;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.996996996996997;
            result[3] += 0.003003003003003003;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.00851063829787234;
            result[1] += 0.00425531914893617;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9872340425531915;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
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
            result[3] += 0.1111111111111111;
            result[4] += 0.16666666666666666;
            result[5] += 0.7222222222222222;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012062726176115801;
            result[3] += 0.031363088057901084;
            result[4] += 0.021712907117008445;
            result[5] += 0.9457177322074789;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.3235294117647059;
            result[1] += 0.38235294117647056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08823529411764706;
            result[5] += 0.20588235294117646;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03184713375796178;
            result[3] += 0.33121019108280253;
            result[4] += 0.03184713375796178;
            result[5] += 0.6050955414012739;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.03355704697986577;
            result[2] += 0;
            result[3] += 0.8120805369127517;
            result[4] += 0;
            result[5] += 0.15436241610738255;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.40476190476190477;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.4523809523809524;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
            result[5] += 0.030612244897959183;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5581395348837209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4418604651162791;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.125;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.625;
            result[5] += 0.03125;
          } else {
            result[0] += 0.8718381112984823;
            result[1] += 0.010961214165261383;
            result[2] += 0.0042158516020236085;
            result[3] += 0.026981450252951095;
            result[4] += 0.05564924114671164;
            result[5] += 0.03035413153456998;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0.05220883534136546;
            result[1] += 0.012048192771084338;
            result[2] += 0.14457831325301204;
            result[3] += 0.2248995983935743;
            result[4] += 0.1686746987951807;
            result[5] += 0.39759036144578314;
          } else {
            result[0] += 0.9428571428571428;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0;
            result[4] += 0.02857142857142857;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9545454545454546;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0.5294117647058824;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.010752688172043012;
            result[1] += 0.010752688172043012;
            result[2] += 0.40860215053763443;
            result[3] += 0.41935483870967744;
            result[4] += 0.03225806451612903;
            result[5] += 0.11827956989247312;
          } else {
            result[0] += 0.016949152542372885;
            result[1] += 0;
            result[2] += 0.7627118644067797;
            result[3] += 0.18644067796610173;
            result[4] += 0;
            result[5] += 0.03389830508474577;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.7045454545454546;
            result[1] += 0.06818181818181818;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0.057692307692307696;
            result[2] += 0.5961538461538461;
            result[3] += 0.038461538461538464;
            result[4] += 0.038461538461538464;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.014689265536723166;
            result[1] += 0;
            result[2] += 0.92090395480226;
            result[3] += 0.056497175141242945;
            result[4] += 0;
            result[5] += 0.007909604519774013;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004132231404958678;
            result[1] += 0.012396694214876033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9504132231404959;
            result[5] += 0.03305785123966942;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0.06451612903225806;
            result[1] += 0.22580645161290322;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0.3225806451612903;
            result[5] += 0.2903225806451613;
          } else {
            result[0] += 0.823529411764706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07843137254901962;
            result[5] += 0.09803921568627452;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.027777777777777776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8055555555555556;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.0011574074074074073;
            result[2] += 0;
            result[3] += 0.07060185185185185;
            result[4] += 0.03009259259259259;
            result[5] += 0.8981481481481481;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.3;
            result[4] += 0.05333333333333334;
            result[5] += 0.6133333333333333;
          } else {
            result[0] += 0.014388489208633094;
            result[1] += 0;
            result[2] += 0.03597122302158273;
            result[3] += 0.8345323741007195;
            result[4] += 0;
            result[5] += 0.11510791366906475;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0.046296296296296294;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.018518518518518517;
            result[4] += 0.8703703703703703;
            result[5] += 0.009259259259259259;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.6835443037974684;
            result[1] += 0.07594936708860761;
            result[2] += 0;
            result[3] += 0.05063291139240507;
            result[4] += 0.17721518987341775;
            result[5] += 0.012658227848101267;
          } else {
            result[0] += 0.02100840336134454;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.3235294117647059;
            result[4] += 0.02100840336134454;
            result[5] += 0.49159663865546216;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.11904761904761904;
            result[1] += 0.5119047619047619;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.27380952380952384;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0.8030669895076675;
            result[1] += 0;
            result[2] += 0.07586763518966909;
            result[3] += 0.042776432606941084;
            result[4] += 0.048426150121065374;
            result[5] += 0.02986279257465698;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.65625;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0.07407407407407407;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.4;
            result[1] += 0.3333333333333333;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.21739130434782608;
            result[4] += 0;
            result[5] += 0.4782608695652174;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00784313725490196;
            result[1] += 0;
            result[2] += 0.7725490196078432;
            result[3] += 0.19215686274509805;
            result[4] += 0;
            result[5] += 0.027450980392156862;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e00000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9667721518987342;
            result[3] += 0.028481012658227847;
            result[4] += 0;
            result[5] += 0.004746835443037975;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.00819672131147541;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9795081967213115;
            result[5] += 0.012295081967213115;
          } else {
            result[0] += 0.024096385542168676;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6746987951807228;
            result[5] += 0.30120481927710846;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0.9583333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9452054794520548;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0547945205479452;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.002699055330634278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021592442645074223;
            result[4] += 0.03508771929824561;
            result[5] += 0.9406207827260459;
          } else {
            result[0] += 0.023696682464454978;
            result[1] += 0.009478672985781993;
            result[2] += 0.023696682464454978;
            result[3] += 0.2511848341232228;
            result[4] += 0.14691943127962087;
            result[5] += 0.5450236966824645;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5217391304347826;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.34782608695652173;
            result[5] += 0;
          } else {
            result[0] += 0.004761904761904762;
            result[1] += 0.9904761904761905;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004761904761904762;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.10619469026548672;
            result[1] += 0.05752212389380531;
            result[2] += 0.035398230088495575;
            result[3] += 0.2079646017699115;
            result[4] += 0.05752212389380531;
            result[5] += 0.5353982300884956;
          } else {
            result[0] += 0.873362445414847;
            result[1] += 0.021834061135371174;
            result[2] += 0.001746724890829694;
            result[3] += 0.02882096069868995;
            result[4] += 0.05676855895196505;
            result[5] += 0.01746724890829694;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.02;
            result[1] += 0.02;
            result[2] += 0.144;
            result[3] += 0.56;
            result[4] += 0.04;
            result[5] += 0.216;
          } else {
            result[0] += 0.37096774193548393;
            result[1] += 0.03225806451612904;
            result[2] += 0.42741935483870974;
            result[3] += 0.06451612903225808;
            result[4] += 0.07258064516129034;
            result[5] += 0.03225806451612904;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.9047619047619048;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.7333333333333333;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0.05555555555555556;
            result[1] += 0;
            result[2] += 0.05555555555555556;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.5882352941176471;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0.8717948717948718;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7280701754385965;
            result[3] += 0.2543859649122807;
            result[4] += 0;
            result[5] += 0.017543859649122806;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0.0048543689320388345;
            result[1] += 0;
            result[2] += 0.933252427184466;
            result[3] += 0.05946601941747573;
            result[4] += 0;
            result[5] += 0.0024271844660194173;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.991701244813278;
            result[5] += 0.008298755186721992;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0.15384615384615385;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.007309941520467836;
            result[2] += 0.01023391812865497;
            result[3] += 0.039473684210526314;
            result[4] += 0.021929824561403508;
            result[5] += 0.9210526315789473;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.9736842105263158;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02631578947368421;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.018223234624145785;
            result[2] += 0.004555808656036446;
            result[3] += 0.39863325740318906;
            result[4] += 0.0888382687927107;
            result[5] += 0.489749430523918;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.0024630541871921183;
            result[1] += 0.9876847290640394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009852216748768473;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.07920792079207921;
            result[1] += 0.16831683168316833;
            result[2] += 0;
            result[3] += 0.06930693069306931;
            result[4] += 0.6633663366336634;
            result[5] += 0.019801980198019802;
          } else {
            result[0] += 0.8399014778325123;
            result[1] += 0.006568144499178982;
            result[2] += 0.0180623973727422;
            result[3] += 0.035303776683087026;
            result[4] += 0.07471264367816093;
            result[5] += 0.025451559934318555;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.011450381679389313;
            result[1] += 0.007633587786259542;
            result[2] += 0.08778625954198473;
            result[3] += 0.3893129770992366;
            result[4] += 0.0648854961832061;
            result[5] += 0.4389312977099237;
          } else {
            result[0] += 0.38095238095238093;
            result[1] += 0.0380952380952381;
            result[2] += 0.2571428571428571;
            result[3] += 0.0380952380952381;
            result[4] += 0.23809523809523808;
            result[5] += 0.047619047619047616;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
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
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.13333333333333333;
            result[5] += 0.7555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18604651162790697;
            result[3] += 0.5348837209302325;
            result[4] += 0;
            result[5] += 0.27906976744186046;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285715;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2558139534883721;
            result[3] += 0.46511627906976744;
            result[4] += 0;
            result[5] += 0.27906976744186046;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6818181818181818;
            result[3] += 0;
            result[4] += 0.3181818181818182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.03669724770642202;
            result[1] += 0;
            result[2] += 0.8073394495412844;
            result[3] += 0.10091743119266056;
            result[4] += 0.009174311926605505;
            result[5] += 0.045871559633027525;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.025559105431309903;
            result[1] += 0;
            result[2] += 0.8178913738019169;
            result[3] += 0.13099041533546327;
            result[4] += 0;
            result[5] += 0.025559105431309903;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9701492537313433;
            result[3] += 0.029850746268656716;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.006153846153846154;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009230769230769232;
            result[4] += 0.9692307692307692;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.0024009603841536613;
            result[1] += 0;
            result[2] += 0.0012004801920768306;
            result[3] += 0.027611044417767107;
            result[4] += 0.04441776710684274;
            result[5] += 0.9243697478991597;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.43373493975903615;
            result[4] += 0.024096385542168676;
            result[5] += 0.5421686746987951;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.7601626016260162;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0.008130081300813009;
            result[4] += 0.1910569105691057;
            result[5] += 0.028455284552845527;
          } else {
            result[0] += 0.006230529595015576;
            result[1] += 0.003115264797507788;
            result[2] += 0.012461059190031152;
            result[3] += 0.4236760124610592;
            result[4] += 0.0529595015576324;
            result[5] += 0.5015576323987538;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 0.7222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0.11206896551724135;
            result[1] += 0.4224137931034482;
            result[2] += 0.1379310344827586;
            result[3] += 0.025862068965517234;
            result[4] += 0.26724137931034475;
            result[5] += 0.03448275862068965;
          } else {
            result[0] += 0.8961973278520041;
            result[1] += 0.0041109969167523125;
            result[2] += 0.013360739979445015;
            result[3] += 0.03186022610483042;
            result[4] += 0.03905447070914697;
            result[5] += 0.015416238437821172;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.06168831168831169;
            result[1] += 0.012987012987012988;
            result[2] += 0.30844155844155846;
            result[3] += 0.3116883116883117;
            result[4] += 0.03896103896103896;
            result[5] += 0.2662337662337662;
          } else {
            result[0] += 0.736842105263158;
            result[1] += 0.03157894736842106;
            result[2] += 0.09473684210526317;
            result[3] += 0;
            result[4] += 0.13684210526315793;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06060606060606061;
            result[3] += 0.030303030303030304;
            result[4] += 0.030303030303030304;
            result[5] += 0.8787878787878788;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11940298507462686;
            result[3] += 0.7910447761194029;
            result[4] += 0;
            result[5] += 0.08955223880597014;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8148148148148149;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.07407407407407408;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8381877022653722;
            result[3] += 0.15857605177993528;
            result[4] += 0;
            result[5] += 0.003236245954692557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9694793536804309;
            result[3] += 0.026929982046678635;
            result[4] += 0;
            result[5] += 0.003590664272890485;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9354838709677419;
            result[5] += 0.06451612903225806;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.782608695652174;
            result[5] += 0.21739130434782608;
          } else {
            result[0] += 0.0027816411682892906;
            result[1] += 0;
            result[2] += 0.006954102920723227;
            result[3] += 0.037552155771905425;
            result[4] += 0.012517385257301807;
            result[5] += 0.9401947148817803;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.32258064516129037;
            result[1] += 0.021505376344086027;
            result[2] += 0;
            result[3] += 0.010752688172043013;
            result[4] += 0.5483870967741936;
            result[5] += 0.09677419354838711;
          } else {
            result[0] += 0.03324808184143223;
            result[1] += 0;
            result[2] += 0.005115089514066497;
            result[3] += 0.340153452685422;
            result[4] += 0.02557544757033248;
            result[5] += 0.5959079283887468;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.639344262295082;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3442622950819672;
            result[5] += 0.01639344262295082;
          } else {
            result[0] += 0.018115942028985508;
            result[1] += 0.10869565217391304;
            result[2] += 0.010869565217391304;
            result[3] += 0.2427536231884058;
            result[4] += 0.07246376811594203;
            result[5] += 0.5471014492753623;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.07913669064748201;
            result[1] += 0.33093525179856115;
            result[2] += 0.007194244604316547;
            result[3] += 0.02877697841726619;
            result[4] += 0.5323741007194245;
            result[5] += 0.02158273381294964;
          } else {
            result[0] += 0.8135179153094463;
            result[1] += 0.010586319218241042;
            result[2] += 0.0496742671009772;
            result[3] += 0.04315960912052117;
            result[4] += 0.06026058631921824;
            result[5] += 0.02280130293159609;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7333333333333333;
            result[4] += 0.26666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03773584905660377;
            result[2] += 0.1509433962264151;
            result[3] += 0.03773584905660377;
            result[4] += 0.11320754716981132;
            result[5] += 0.660377358490566;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1926605504587156;
            result[3] += 0.7064220183486238;
            result[4] += 0;
            result[5] += 0.10091743119266056;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5816326530612245;
            result[3] += 0.30612244897959184;
            result[4] += 0;
            result[5] += 0.11224489795918367;
          } else {
            result[0] += 0.17142857142857143;
            result[1] += 0.014285714285714285;
            result[2] += 0.7714285714285715;
            result[3] += 0.04285714285714286;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.6956521739130435;
            result[4] += 0;
            result[5] += 0.17391304347826086;
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.09655172413793103;
            result[4] += 0;
            result[5] += 0.006896551724137931;
          } else {
            result[0] += 0.01038961038961039;
            result[1] += 0;
            result[2] += 0.9662337662337662;
            result[3] += 0.02077922077922078;
            result[4] += 0;
            result[5] += 0.0025974025974025974;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9872340425531915;
            result[5] += 0.01276595744680851;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.9285714285714286;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016750418760469012;
            result[3] += 0.010050251256281407;
            result[4] += 0.02680067001675042;
            result[5] += 0.9614740368509213;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11428571428571428;
            result[4] += 0.7428571428571429;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.00819672131147541;
            result[1] += 0.00819672131147541;
            result[2] += 0.01092896174863388;
            result[3] += 0.17759562841530055;
            result[4] += 0.030054644808743168;
            result[5] += 0.7650273224043715;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
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
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.8421052631578947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9007633587786259;
            result[4] += 0;
            result[5] += 0.09923664122137404;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bf0000))) ) ) {
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.06962025316455696;
            result[1] += 0.1518987341772152;
            result[2] += 0.006329113924050633;
            result[3] += 0.02531645569620253;
            result[4] += 0.740506329113924;
            result[5] += 0.006329113924050633;
          } else {
            result[0] += 0.6789473684210527;
            result[1] += 0.01710526315789474;
            result[2] += 0.04342105263157896;
            result[3] += 0.08815789473684212;
            result[4] += 0.09736842105263159;
            result[5] += 0.07500000000000001;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9630252100840336;
            result[1] += 0;
            result[2] += 0.0067226890756302525;
            result[3] += 0;
            result[4] += 0.030252100840336135;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.017391304347826087;
            result[2] += 0.19130434782608696;
            result[3] += 0.4652173913043478;
            result[4] += 0.09130434782608696;
            result[5] += 0.23478260869565218;
          } else {
            result[0] += 0.06077348066298342;
            result[1] += 0;
            result[2] += 0.6353591160220995;
            result[3] += 0.19337016574585636;
            result[4] += 0.027624309392265192;
            result[5] += 0.08287292817679558;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.75;
            result[1] += 0.022727272727272728;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          } else {
            result[0] += 0.015550239234449762;
            result[1] += 0;
            result[2] += 0.9090909090909092;
            result[3] += 0.06459330143540672;
            result[4] += 0;
            result[5] += 0.010765550239234452;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42720000))) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0.006269592476489028;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9655172413793104;
            result[5] += 0.02821316614420063;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8787878787878788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12121212121212122;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0078003120124804995;
            result[4] += 0.0171606864274571;
            result[5] += 0.9750390015600624;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.10869565217391304;
            result[4] += 0.1956521739130435;
            result[5] += 0.6304347826086957;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9019607843137255;
            result[1] += 0.0196078431372549;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0392156862745098;
            result[5] += 0.0392156862745098;
          } else {
            result[0] += 0.008960573476702509;
            result[1] += 0.017921146953405017;
            result[2] += 0.04121863799283154;
            result[3] += 0.35842293906810035;
            result[4] += 0.06272401433691756;
            result[5] += 0.510752688172043;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.07936507936507936;
            result[1] += 0.20634920634920634;
            result[2] += 0.07936507936507936;
            result[3] += 0.06349206349206349;
            result[4] += 0.4603174603174603;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.86;
            result[1] += 0.004166666666666667;
            result[2] += 0.0008333333333333334;
            result[3] += 0.030833333333333334;
            result[4] += 0.0775;
            result[5] += 0.02666666666666667;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0.022935779816513763;
            result[2] += 0.10091743119266056;
            result[3] += 0.481651376146789;
            result[4] += 0.03211009174311927;
            result[5] += 0.3532110091743119;
          } else {
            result[0] += 0.35000000000000003;
            result[1] += 0.010000000000000002;
            result[2] += 0.4650000000000001;
            result[3] += 0.030000000000000002;
            result[4] += 0.06500000000000002;
            result[5] += 0.08000000000000002;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42680000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.92;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.15625;
            result[1] += 0.0625;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0.34375;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14516129032258066;
            result[3] += 0.6451612903225806;
            result[4] += 0.016129032258064516;
            result[5] += 0.1935483870967742;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.803921568627451;
            result[3] += 0.13725490196078433;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42dd0000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7108433734939759;
            result[3] += 0.2891566265060241;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9758064516129032;
            result[3] += 0.024193548387096774;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0019455252918287938;
            result[1] += 0;
            result[2] += 0.9727626459143969;
            result[3] += 0.023346303501945526;
            result[4] += 0;
            result[5] += 0.0019455252918287938;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
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
            result[4] += 0.9945652173913043;
            result[5] += 0.005434782608695652;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0.96;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.29411764705882354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7058823529411765;
            result[5] += 0;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0;
            result[4] += 0.2894736842105263;
            result[5] += 0.6578947368421053;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42860000))) ) ) {
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
            result[4] += 0.9444444444444444;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001841620626151013;
            result[3] += 0.014732965009208104;
            result[4] += 0.0055248618784530384;
            result[5] += 0.9779005524861878;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12962962962962962;
            result[4] += 0.037037037037037035;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022988505747126436;
            result[3] += 0.09195402298850575;
            result[4] += 0.09195402298850575;
            result[5] += 0.7931034482758621;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024844720496894408;
            result[3] += 0.3167701863354037;
            result[4] += 0.20496894409937888;
            result[5] += 0.453416149068323;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.39080459770114945;
            result[1] += 0.011494252873563218;
            result[2] += 0;
            result[3] += 0.05747126436781609;
            result[4] += 0.4482758620689655;
            result[5] += 0.09195402298850575;
          } else {
            result[0] += 0.012096774193548387;
            result[1] += 0.008064516129032258;
            result[2] += 0.10483870967741936;
            result[3] += 0.4475806451612903;
            result[4] += 0.09274193548387097;
            result[5] += 0.3346774193548387;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.5261382799325464;
            result[1] += 0.048903878583473864;
            result[2] += 0.016863406408094434;
            result[3] += 0.1163575042158516;
            result[4] += 0.18887015177065766;
            result[5] += 0.10286677908937605;
          } else {
            result[0] += 0.8848837209302326;
            result[1] += 0.02441860465116279;
            result[2] += 0.02558139534883721;
            result[3] += 0.002325581395348837;
            result[4] += 0.06162790697674419;
            result[5] += 0.0011627906976744186;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ac0000))) ) ) {
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
            result[3] += 0.96875;
            result[4] += 0;
            result[5] += 0.03125;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0.3142857142857143;
            result[4] += 0.014285714285714285;
            result[5] += 0.6142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.5076923076923077;
            result[4] += 0.015384615384615385;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.28571428571428575;
            result[1] += 0.12500000000000003;
            result[2] += 0.19642857142857145;
            result[3] += 0.19642857142857145;
            result[4] += 0.0892857142857143;
            result[5] += 0.10714285714285715;
          } else {
            result[0] += 0.016359918200409;
            result[1] += 0;
            result[2] += 0.7464212678936605;
            result[3] += 0.19427402862985685;
            result[4] += 0.00408997955010225;
            result[5] += 0.03885480572597137;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x43028000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9725557461406518;
            result[3] += 0.025728987993138937;
            result[4] += 0;
            result[5] += 0.0017152658662092624;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0.027210884353741496;
            result[1] += 0.01020408163265306;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9489795918367347;
            result[5] += 0.013605442176870748;
          } else {
            result[0] += 0;
            result[1] += 0.84;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.7222222222222222;
          } else {
            result[0] += 0.8352402745995424;
            result[1] += 0.03890160183066362;
            result[2] += 0;
            result[3] += 0.03432494279176202;
            result[4] += 0.08237986270022885;
            result[5] += 0.009153318077803205;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014858841010401188;
            result[3] += 0.02823179791976226;
            result[4] += 0.008915304606240713;
            result[5] += 0.9613670133729569;
          } else {
            result[0] += 0.006230529595015576;
            result[1] += 0;
            result[2] += 0.003115264797507788;
            result[3] += 0.18691588785046728;
            result[4] += 0.13395638629283488;
            result[5] += 0.6697819314641744;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.3179012345679013;
            result[1] += 0.10493827160493828;
            result[2] += 0.0154320987654321;
            result[3] += 0.0771604938271605;
            result[4] += 0.367283950617284;
            result[5] += 0.11728395061728396;
          } else {
            result[0] += 0.014245014245014245;
            result[1] += 0.005698005698005698;
            result[2] += 0.05413105413105413;
            result[3] += 0.48148148148148145;
            result[4] += 0.05128205128205128;
            result[5] += 0.39316239316239315;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d40000))) ) ) {
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42fc0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
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
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9724349157733537;
            result[1] += 0;
            result[2] += 0.0030627871362940277;
            result[3] += 0.006125574272588055;
            result[4] += 0.016845329249617153;
            result[5] += 0.0015313935681470138;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0.1;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0967741935483871;
            result[3] += 0.16129032258064516;
            result[4] += 0;
            result[5] += 0.7419354838709677;
          } else {
            result[0] += 0;
            result[1] += 0.007194244604316547;
            result[2] += 0.31654676258992803;
            result[3] += 0.5683453237410072;
            result[4] += 0;
            result[5] += 0.1079136690647482;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.4666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0.05;
            result[5] += 0.31666666666666665;
          } else {
            result[0] += 0.07526881720430108;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.24731182795698925;
            result[4] += 0.010752688172043012;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0.38461538461538464;
            result[2] += 0.6153846153846154;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012805587892898719;
            result[1] += 0;
            result[2] += 0.9045401629802096;
            result[3] += 0.07334109429569266;
            result[4] += 0;
            result[5] += 0.009313154831199068;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.109375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.796875;
            result[5] += 0.09375;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.6;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.025641025641025644;
            result[1] += 0.1153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.576923076923077;
            result[5] += 0.2820512820512821;
          } else {
            result[0] += 0.04782608695652174;
            result[1] += 0.003260869565217391;
            result[2] += 0.0010869565217391304;
            result[3] += 0.06195652173913044;
            result[4] += 0.015217391304347827;
            result[5] += 0.8706521739130435;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0;
            result[3] += 0.18421052631578946;
            result[4] += 0.10526315789473684;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7692307692307693;
            result[4] += 0.04487179487179487;
            result[5] += 0.1858974358974359;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.2074074074074074;
            result[2] += 0;
            result[3] += 0.014814814814814815;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9722222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.028985507246376812;
            result[2] += 0.10144927536231885;
            result[3] += 0.08695652173913043;
            result[4] += 0.34782608695652173;
            result[5] += 0.30434782608695654;
          } else {
            result[0] += 0.8993174061433447;
            result[1] += 0.021331058020477817;
            result[2] += 0.002559726962457338;
            result[3] += 0.021331058020477817;
            result[4] += 0.04692832764505119;
            result[5] += 0.008532423208191127;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.03056768558951965;
            result[1] += 0.048034934497816595;
            result[2] += 0.11353711790393013;
            result[3] += 0.32751091703056767;
            result[4] += 0.1703056768558952;
            result[5] += 0.31004366812227074;
          } else {
            result[0] += 0.7108433734939759;
            result[1] += 0;
            result[2] += 0.21686746987951808;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07228915662650602;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.18;
            result[4] += 0.02;
            result[5] += 0.78;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0.006211180124223602;
            result[1] += 0.018633540372670808;
            result[2] += 0.2236024844720497;
            result[3] += 0.4782608695652174;
            result[4] += 0;
            result[5] += 0.2732919254658385;
          } else {
            result[0] += 0;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428572;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.03174603174603175;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e50000))) ) ) {
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8501742160278746;
            result[3] += 0.13588850174216027;
            result[4] += 0;
            result[5] += 0.013937282229965157;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ff0000))) ) ) {
            result[0] += 0.006734006734006734;
            result[1] += 0;
            result[2] += 0.9595959595959596;
            result[3] += 0.03198653198653199;
            result[4] += 0;
            result[5] += 0.0016835016835016834;
          } else {
            result[0] += 0.35714285714285715;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
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
            result[3] += 0.05555555555555555;
            result[4] += 0.4444444444444444;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.5652173913043478;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.391304347826087;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.15151515151515152;
            result[5] += 0.8181818181818182;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.16666666666666666;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42260000))) ) ) {
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
            result[3] += 0.16326530612244897;
            result[4] += 0.4897959183673469;
            result[5] += 0.3469387755102041;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0035650623885918;
            result[4] += 0.0053475935828877;
            result[5] += 0.9910873440285205;
          } else {
            result[0] += 0.02030456852791878;
            result[1] += 0.005076142131979695;
            result[2] += 0.02030456852791878;
            result[3] += 0.1065989847715736;
            result[4] += 0.07614213197969544;
            result[5] += 0.7715736040609137;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09302325581395349;
            result[4] += 0.023255813953488372;
            result[5] += 0.8837209302325582;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0.33333333333333337;
            result[4] += 0.33333333333333337;
            result[5] += 0.22222222222222224;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.009174311926605505;
            result[2] += 0;
            result[3] += 0.7155963302752294;
            result[4] += 0.0045871559633027525;
            result[5] += 0.2706422018348624;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.35;
            result[3] += 0.18333333333333332;
            result[4] += 0.016666666666666666;
            result[5] += 0.38333333333333336;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.9722222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          } else {
            result[0] += 0.02586206896551724;
            result[1] += 0.02586206896551724;
            result[2] += 0.017241379310344827;
            result[3] += 0.10344827586206896;
            result[4] += 0.7672413793103449;
            result[5] += 0.0603448275862069;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.23828125;
            result[1] += 0.01953125;
            result[2] += 0.03515625;
            result[3] += 0.25;
            result[4] += 0.1328125;
            result[5] += 0.32421875;
          } else {
            result[0] += 0.8783902012248469;
            result[1] += 0.013123359580052493;
            result[2] += 0.005249343832020997;
            result[3] += 0.023622047244094488;
            result[4] += 0.0647419072615923;
            result[5] += 0.014873140857392825;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09166666666666666;
            result[3] += 0.5583333333333333;
            result[4] += 0.016666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.057692307692307696;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.07692307692307693;
            result[4] += 0.038461538461538464;
            result[5] += 0.057692307692307696;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.631336405529954;
            result[3] += 0.30414746543778803;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.9228070175438596;
            result[3] += 0.04327485380116959;
            result[4] += 0.0023391812865497076;
            result[5] += 0.00935672514619883;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.03508771929824561;
            result[1] += 0.013157894736842105;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9342105263157895;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0821917808219178;
            result[3] += 0;
            result[4] += 0.547945205479452;
            result[5] += 0.3698630136986301;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.32558139534883723;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6744186046511628;
            result[5] += 0;
          } else {
            result[0] += 0.8681318681318682;
            result[1] += 0.01098901098901099;
            result[2] += 0;
            result[3] += 0.01098901098901099;
            result[4] += 0.10989010989010989;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025252525252525252;
            result[4] += 0.03872053872053872;
            result[5] += 0.936026936026936;
          } else {
            result[0] += 0.007751937984496124;
            result[1] += 0.003875968992248062;
            result[2] += 0.007751937984496124;
            result[3] += 0.13565891472868216;
            result[4] += 0.1821705426356589;
            result[5] += 0.6627906976744186;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.003676470588235294;
            result[2] += 0.011029411764705883;
            result[3] += 0.5919117647058824;
            result[4] += 0.03308823529411765;
            result[5] += 0.3602941176470588;
          } else {
            result[0] += 0.06111111111111111;
            result[1] += 0.11666666666666667;
            result[2] += 0.13333333333333333;
            result[3] += 0.1388888888888889;
            result[4] += 0.16111111111111112;
            result[5] += 0.3888888888888889;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0.0022727272727272726;
            result[1] += 0.9931818181818182;
            result[2] += 0;
            result[3] += 0.0022727272727272726;
            result[4] += 0.0022727272727272726;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.6576086956521738;
            result[1] += 0.03442028985507246;
            result[2] += 0.005434782608695651;
            result[3] += 0.04166666666666666;
            result[4] += 0.21195652173913038;
            result[5] += 0.04891304347826086;
          } else {
            result[0] += 0.05514705882352941;
            result[1] += 0.03308823529411765;
            result[2] += 0.3272058823529412;
            result[3] += 0.3382352941176471;
            result[4] += 0.011029411764705883;
            result[5] += 0.23529411764705882;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.689655172413793;
            result[2] += 0;
            result[3] += 0.1379310344827586;
            result[4] += 0.1379310344827586;
            result[5] += 0.03448275862068965;
          } else {
            result[0] += 0.9147058823529413;
            result[1] += 0.0029411764705882357;
            result[2] += 0.01323529411764706;
            result[3] += 0.008823529411764707;
            result[4] += 0.04852941176470589;
            result[5] += 0.011764705882352943;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08888888888888889;
            result[4] += 0.08888888888888889;
            result[5] += 0.8222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.061224489795918366;
            result[2] += 0.10204081632653061;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          } else {
            result[0] += 0.03333333333333334;
            result[1] += 0.03333333333333334;
            result[2] += 0.5666666666666668;
            result[3] += 0.16666666666666669;
            result[4] += 0.06666666666666668;
            result[5] += 0.13333333333333336;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7011494252873564;
            result[3] += 0.26436781609195403;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.6666666666666666;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.006993006993006993;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.13286713286713286;
            result[4] += 0;
            result[5] += 0.013986013986013986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010719754977029096;
            result[1] += 0;
            result[2] += 0.9555895865237366;
            result[3] += 0.033690658499234305;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.008403361344537815;
            result[1] += 0.012605042016806723;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9705882352941176;
            result[5] += 0.008403361344537815;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3764705882352941;
            result[5] += 0.4235294117647059;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7586206896551724;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2413793103448276;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
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
            result[3] += 0.008888888888888889;
            result[4] += 0.02666666666666667;
            result[5] += 0.9644444444444444;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.006802721088435374;
            result[1] += 0.017006802721088437;
            result[2] += 0;
            result[3] += 0.20068027210884354;
            result[4] += 0.10884353741496598;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.01932367149758454;
            result[1] += 0;
            result[2] += 0.03864734299516908;
            result[3] += 0.6328502415458938;
            result[4] += 0.014492753623188406;
            result[5] += 0.2946859903381642;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
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
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
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
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.17467248908296942;
            result[1] += 0.06986899563318777;
            result[2] += 0.06986899563318777;
            result[3] += 0.13100436681222707;
            result[4] += 0.3624454148471616;
            result[5] += 0.19213973799126638;
          } else {
            result[0] += 0.8384547848990342;
            result[1] += 0.029850746268656716;
            result[2] += 0.000877963125548727;
            result[3] += 0.016681299385425813;
            result[4] += 0.10535557506584724;
            result[5] += 0.00877963125548727;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.02422145328719723;
            result[1] += 0.010380622837370242;
            result[2] += 0.23529411764705882;
            result[3] += 0.4359861591695502;
            result[4] += 0.006920415224913495;
            result[5] += 0.28719723183391005;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.22962962962962963;
            result[3] += 0;
            result[4] += 0.16296296296296298;
            result[5] += 0.007407407407407408;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07407407407407407;
            result[3] += 0.6296296296296297;
            result[4] += 0;
            result[5] += 0.2962962962962963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8548387096774194;
            result[3] += 0.08064516129032258;
            result[4] += 0;
            result[5] += 0.06451612903225806;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6571428571428571;
            result[3] += 0.34285714285714286;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8285714285714286;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.011428571428571429;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.0016286644951140066;
            result[1] += 0;
            result[2] += 0.9560260586319218;
            result[3] += 0.04234527687296417;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2916666666666667;
            result[1] += 0;
            result[2] += 0.7083333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.009569377990430622;
            result[2] += 0;
            result[3] += 0.009569377990430622;
            result[4] += 0.9282296650717703;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.8717948717948718;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1282051282051282;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9318181818181818;
            result[5] += 0.06818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00651890482398957;
            result[3] += 0.02998696219035202;
            result[4] += 0.02216427640156454;
            result[5] += 0.9413298565840938;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.0196078431372549;
            result[4] += 0.7843137254901961;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.008928571428571428;
            result[1] += 0.02976190476190476;
            result[2] += 0.0625;
            result[3] += 0.41964285714285715;
            result[4] += 0.023809523809523808;
            result[5] += 0.45535714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.021052631578947368;
            result[1] += 0.010526315789473684;
            result[2] += 0;
            result[3] += 0.010526315789473684;
            result[4] += 0.9052631578947369;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0.9977578475336323;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002242152466367713;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47619047619047616;
            result[5] += 0.023809523809523808;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.784873949579832;
            result[1] += 0.0319327731092437;
            result[2] += 0.0033613445378151267;
            result[3] += 0.042016806722689086;
            result[4] += 0.10420168067226893;
            result[5] += 0.033613445378151266;
          } else {
            result[0] += 0.039755351681957186;
            result[1] += 0.03058103975535168;
            result[2] += 0.03363914373088685;
            result[3] += 0.345565749235474;
            result[4] += 0.18042813455657492;
            result[5] += 0.37003058103975534;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.9895652173913043;
            result[1] += 0;
            result[2] += 0.0034782608695652175;
            result[3] += 0.0052173913043478265;
            result[4] += 0.0017391304347826088;
            result[5] += 0;
          } else {
            result[0] += 0.4666666666666667;
            result[1] += 0;
            result[2] += 0.45714285714285713;
            result[3] += 0.0380952380952381;
            result[4] += 0.0380952380952381;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.3;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06944444444444446;
            result[3] += 0.7222222222222223;
            result[4] += 0.01388888888888889;
            result[5] += 0.19444444444444448;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8253968253968254;
            result[3] += 0.15873015873015872;
            result[4] += 0;
            result[5] += 0.015873015873015872;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.44067796610169496;
            result[3] += 0.42372881355932207;
            result[4] += 0;
            result[5] += 0.13559322033898308;
          } else {
            result[0] += 0.04545454545454546;
            result[1] += 0;
            result[2] += 0.9318181818181819;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02272727272727273;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.00398406374501992;
            result[1] += 0;
            result[2] += 0.8804780876494024;
            result[3] += 0.10756972111553785;
            result[4] += 0;
            result[5] += 0.00796812749003984;
          } else {
            result[0] += 0.003502626970227671;
            result[1] += 0;
            result[2] += 0.9649737302977234;
            result[3] += 0.02802101576182137;
            result[4] += 0;
            result[5] += 0.003502626970227671;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9897435897435898;
            result[5] += 0.010256410256410256;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9629629629629629;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0.3870967741935484;
            result[5] += 0.5161290322580645;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0013440860215053765;
            result[2] += 0;
            result[3] += 0.013440860215053764;
            result[4] += 0.038978494623655914;
            result[5] += 0.946236559139785;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0.02197802197802198;
            result[3] += 0.43956043956043955;
            result[4] += 0.02197802197802198;
            result[5] += 0.43956043956043955;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.11643835616438356;
            result[1] += 0.030821917808219176;
            result[2] += 0.010273972602739725;
            result[3] += 0.1541095890410959;
            result[4] += 0.16095890410958905;
            result[5] += 0.5273972602739726;
          } else {
            result[0] += 0.0070921985815602835;
            result[1] += 0;
            result[2] += 0.09219858156028368;
            result[3] += 0.6879432624113475;
            result[4] += 0;
            result[5] += 0.2127659574468085;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.667095115681234;
            result[1] += 0.06683804627249358;
            result[2] += 0.0012853470437017996;
            result[3] += 0.026992287917737792;
            result[4] += 0.19408740359897175;
            result[5] += 0.04370179948586119;
          } else {
            result[0] += 0.11641791044776119;
            result[1] += 0.050746268656716415;
            result[2] += 0.11343283582089553;
            result[3] += 0.23880597014925373;
            result[4] += 0.18507462686567164;
            result[5] += 0.2955223880597015;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.9578207381370827;
            result[1] += 0.00351493848857645;
            result[2] += 0.005272407732864676;
            result[3] += 0.00351493848857645;
            result[4] += 0.0281195079086116;
            result[5] += 0.001757469244288225;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a50000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.8709677419354839;
            result[4] += 0;
            result[5] += 0.11290322580645161;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
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
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9375;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6206896551724138;
            result[3] += 0.2413793103448276;
            result[4] += 0;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8133971291866029;
            result[3] += 0.15311004784688995;
            result[4] += 0;
            result[5] += 0.03349282296650718;
          } else {
            result[0] += 0.028571428571428574;
            result[1] += 0;
            result[2] += 0.48571428571428577;
            result[3] += 0.4571428571428572;
            result[4] += 0;
            result[5] += 0.028571428571428574;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0;
            result[2] += 0.7391304347826088;
            result[3] += 0.04347826086956522;
            result[4] += 0.04347826086956522;
            result[5] += 0.13043478260869568;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.030927835051546393;
            result[1] += 0;
            result[2] += 0.8556701030927835;
            result[3] += 0.1134020618556701;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9942528735632183;
            result[3] += 0.005747126436781609;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.004081632653061225;
            result[1] += 0.012244897959183673;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.963265306122449;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42930000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014326647564469915;
            result[4] += 0.025787965616045846;
            result[5] += 0.9598853868194842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.4571428571428572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.042857142857142864;
            result[4] += 0.4571428571428572;
            result[5] += 0.042857142857142864;
          } else {
            result[0] += 0.004366812227074236;
            result[1] += 0.002183406113537118;
            result[2] += 0.04148471615720524;
            result[3] += 0.3646288209606987;
            result[4] += 0.0611353711790393;
            result[5] += 0.5262008733624454;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.0390625;
            result[2] += 0.0234375;
            result[3] += 0.0625;
            result[4] += 0.796875;
            result[5] += 0.078125;
          } else {
            result[0] += 0;
            result[1] += 0.9024390243902439;
            result[2] += 0;
            result[3] += 0.04878048780487805;
            result[4] += 0.04878048780487805;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42320000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8523002421307506;
            result[1] += 0.00887812752219532;
            result[2] += 0.014527845036319613;
            result[3] += 0.03631961259079903;
            result[4] += 0.06295399515738499;
            result[5] += 0.025020177562550445;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08152173913043478;
            result[3] += 0.483695652173913;
            result[4] += 0.02717391304347826;
            result[5] += 0.4076086956521739;
          } else {
            result[0] += 0.3475177304964539;
            result[1] += 0.014184397163120567;
            result[2] += 0.3617021276595745;
            result[3] += 0.1347517730496454;
            result[4] += 0.12056737588652482;
            result[5] += 0.02127659574468085;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0.975;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06329113924050633;
            result[3] += 0.6582278481012658;
            result[4] += 0;
            result[5] += 0.27848101265822783;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.3;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34545454545454546;
            result[3] += 0.4727272727272727;
            result[4] += 0.01818181818181818;
            result[5] += 0.16363636363636364;
          } else {
            result[0] += 0.010101010101010104;
            result[1] += 0;
            result[2] += 0.7525252525252526;
            result[3] += 0.20202020202020204;
            result[4] += 0;
            result[5] += 0.03535353535353536;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.28571428571428575;
            result[1] += 0.07142857142857144;
            result[2] += 0.14285714285714288;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0.2142857142857143;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002881844380403458;
            result[1] += 0;
            result[2] += 0.9567723342939481;
            result[3] += 0.040345821325648415;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.1282051282051282;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.3235294117647059;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6764705882352942;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03018867924528302;
            result[4] += 0.0440251572327044;
            result[5] += 0.9257861635220126;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.085;
            result[1] += 0.04;
            result[2] += 0.04;
            result[3] += 0.265;
            result[4] += 0.07;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0078125;
            result[3] += 0.7890625;
            result[4] += 0.015625;
            result[5] += 0.1875;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9927884615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007211538461538462;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.09803921568627451;
            result[1] += 0.3137254901960784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5882352941176471;
            result[5] += 0;
          } else {
            result[0] += 0.8665526090675791;
            result[1] += 0.007698887938408896;
            result[2] += 0;
            result[3] += 0.018819503849443968;
            result[4] += 0.06244653550042772;
            result[5] += 0.04448246364414029;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.008108108108108109;
            result[1] += 0.008108108108108109;
            result[2] += 0.21891891891891893;
            result[3] += 0.3783783783783784;
            result[4] += 0.01891891891891892;
            result[5] += 0.3675675675675676;
          } else {
            result[0] += 0.7352941176470589;
            result[1] += 0.029411764705882353;
            result[2] += 0.09803921568627451;
            result[3] += 0.029411764705882353;
            result[4] += 0.09803921568627451;
            result[5] += 0.00980392156862745;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.09090909090909091;
            result[2] += 0.2727272727272727;
            result[3] += 0.18181818181818182;
            result[4] += 0.36363636363636365;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1282051282051282;
            result[3] += 0.10256410256410256;
            result[4] += 0.02564102564102564;
            result[5] += 0.7435897435897436;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.8846153846153846;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30000000000000004;
            result[3] += 0.6000000000000001;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0.011990407673860911;
            result[1] += 0;
            result[2] += 0.8129496402877698;
            result[3] += 0.1606714628297362;
            result[4] += 0;
            result[5] += 0.014388489208633094;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9898580121703854;
            result[3] += 0.010141987829614604;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
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
            result[4] += 0.9912280701754386;
            result[5] += 0.008771929824561403;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42680000))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0.28571428571428575;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4285714285714286;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0.0014492753623188406;
            result[2] += 0;
            result[3] += 0.028985507246376812;
            result[4] += 0.020289855072463767;
            result[5] += 0.9492753623188406;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.5205479452054794;
            result[1] += 0;
            result[2] += 0.0821917808219178;
            result[3] += 0.0821917808219178;
            result[4] += 0.2602739726027397;
            result[5] += 0.0547945205479452;
          } else {
            result[0] += 0;
            result[1] += 0.003424657534246575;
            result[2] += 0.023972602739726026;
            result[3] += 0.14726027397260275;
            result[4] += 0.0821917808219178;
            result[5] += 0.7431506849315068;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0.04878048780487805;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0.2682926829268293;
            result[4] += 0.07317073170731707;
            result[5] += 0.5853658536585366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006622516556291391;
            result[3] += 0.7350993377483444;
            result[4] += 0.006622516556291391;
            result[5] += 0.25165562913907286;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.015267175572519083;
            result[1] += 0.1297709923664122;
            result[2] += 0;
            result[3] += 0.007633587786259542;
            result[4] += 0.8015267175572519;
            result[5] += 0.04580152671755725;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0.9436619718309859;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04225352112676056;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8744838976052849;
            result[1] += 0.013212221304706853;
            result[2] += 0.0008257638315441783;
            result[3] += 0.01486374896779521;
            result[4] += 0.08918249380677126;
            result[5] += 0.007431874483897605;
          } else {
            result[0] += 0.31272727272727274;
            result[1] += 0.0036363636363636364;
            result[2] += 0.17454545454545456;
            result[3] += 0.2581818181818182;
            result[4] += 0.06545454545454546;
            result[5] += 0.18545454545454546;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.046153846153846156;
            result[1] += 0.07692307692307693;
            result[2] += 0.07692307692307693;
            result[3] += 0.06153846153846154;
            result[4] += 0.38461538461538464;
            result[5] += 0.35384615384615387;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.1388888888888889;
            result[3] += 0.6111111111111112;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8043478260869565;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.10869565217391304;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.005050505050505051;
            result[1] += 0;
            result[2] += 0.6919191919191919;
            result[3] += 0.2474747474747475;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9032258064516129;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.011128775834658187;
            result[1] += 0;
            result[2] += 0.9395866454689984;
            result[3] += 0.04451510333863275;
            result[4] += 0;
            result[5] += 0.0047694753577106515;
          } else {
            result[0] += 0.39473684210526316;
            result[1] += 0;
            result[2] += 0.6052631578947368;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.981651376146789;
            result[5] += 0.01834862385321101;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36;
            result[5] += 0.64;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.55;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004491017964071856;
            result[3] += 0.01347305389221557;
            result[4] += 0.019461077844311378;
            result[5] += 0.9625748502994012;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.020833333333333332;
            result[3] += 0.2916666666666667;
            result[4] += 0.08333333333333333;
            result[5] += 0.5833333333333334;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.989010989010989;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01098901098901099;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0.004291845493562232;
            result[2] += 0;
            result[3] += 0.1459227467811159;
            result[4] += 0.15879828326180256;
            result[5] += 0.6909871244635193;
          } else {
            result[0] += 0.021505376344086023;
            result[1] += 0.01881720430107527;
            result[2] += 0.03494623655913978;
            result[3] += 0.5456989247311828;
            result[4] += 0.02956989247311828;
            result[5] += 0.34946236559139787;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.03333333333333333;
            result[3] += 0;
            result[4] += 0.9333333333333333;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.8208955223880597;
            result[1] += 0.014925373134328358;
            result[2] += 0;
            result[3] += 0.029850746268656716;
            result[4] += 0.13432835820895522;
            result[5] += 0;
          } else {
            result[0] += 0.041237113402061855;
            result[1] += 0.061855670103092786;
            result[2] += 0.05154639175257732;
            result[3] += 0.35051546391752575;
            result[4] += 0.28865979381443296;
            result[5] += 0.20618556701030927;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.04761904761904762;
            result[1] += 0.33333333333333337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6071428571428572;
            result[5] += 0.011904761904761906;
          } else {
            result[0] += 0.8949771689497718;
            result[1] += 0.011872146118721463;
            result[2] += 0.011872146118721463;
            result[3] += 0.019178082191780826;
            result[4] += 0.05388127853881279;
            result[5] += 0.008219178082191782;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.013333333333333334;
            result[2] += 0.06666666666666667;
            result[3] += 0.3333333333333333;
            result[4] += 0.02666666666666667;
            result[5] += 0.56;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.05000000000000001;
            result[1] += 0;
            result[2] += 0.35000000000000003;
            result[3] += 0.4416666666666667;
            result[4] += 0.025000000000000005;
            result[5] += 0.13333333333333336;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.11594202898550725;
            result[4] += 0;
            result[5] += 0.028985507246376812;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8695652173913043;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.0021834061135371182;
            result[1] += 0;
            result[2] += 0.9050218340611355;
            result[3] += 0.08187772925764193;
            result[4] += 0.0021834061135371182;
            result[5] += 0.008733624454148473;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42440000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004273504273504274;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9871794871794872;
            result[5] += 0.008547008547008548;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34285714285714286;
            result[5] += 0.6285714285714286;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0027434842249657062;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.053497942386831275;
            result[4] += 0.019204389574759947;
            result[5] += 0.9245541838134431;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9615384615384616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0.06611570247933884;
            result[2] += 0.01652892561983471;
            result[3] += 0.39669421487603307;
            result[4] += 0.06336088154269973;
            result[5] += 0.4490358126721763;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0.014705882352941176;
            result[2] += 0.10294117647058823;
            result[3] += 0;
            result[4] += 0.8823529411764706;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022727272727272726;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.17763157894736842;
            result[1] += 0.09868421052631579;
            result[2] += 0.006578947368421052;
            result[3] += 0.08552631578947369;
            result[4] += 0.5855263157894737;
            result[5] += 0.046052631578947366;
          } else {
            result[0] += 0.8444816053511706;
            result[1] += 0.015050167224080268;
            result[2] += 0;
            result[3] += 0.024247491638795988;
            result[4] += 0.07608695652173914;
            result[5] += 0.04013377926421405;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.030120481927710836;
            result[1] += 0.018072289156626502;
            result[2] += 0.23493975903614453;
            result[3] += 0.4036144578313252;
            result[4] += 0.04819277108433734;
            result[5] += 0.2650602409638554;
          } else {
            result[0] += 0.8062015503875969;
            result[1] += 0;
            result[2] += 0.06201550387596899;
            result[3] += 0.007751937984496124;
            result[4] += 0.12403100775193798;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18421052631578946;
            result[3] += 0.7894736842105263;
            result[4] += 0;
            result[5] += 0.02631578947368421;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.0029498525073746312;
            result[1] += 0;
            result[2] += 0.8348082595870207;
            result[3] += 0.1504424778761062;
            result[4] += 0;
            result[5] += 0.011799410029498525;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00539568345323741;
            result[1] += 0;
            result[2] += 0.9766187050359713;
            result[3] += 0.017985611510791366;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0.9354838709677419;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06451612903225806;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.004784688995215311;
            result[1] += 0.004784688995215311;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9760765550239234;
            result[5] += 0.014354066985645933;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0.05454545454545454;
            result[2] += 0.03636363636363636;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0.3181818181818182;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008595988538681949;
            result[4] += 0.04297994269340974;
            result[5] += 0.9484240687679083;
          } else {
            result[0] += 0.025;
            result[1] += 0.0125;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.3375;
            result[5] += 0.525;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13095238095238096;
            result[4] += 0.023809523809523808;
            result[5] += 0.8452380952380952;
          } else {
            result[0] += 0.02553191489361702;
            result[1] += 0;
            result[2] += 0.05106382978723404;
            result[3] += 0.6127659574468085;
            result[4] += 0;
            result[5] += 0.31063829787234043;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.013513513513513514;
            result[3] += 0;
            result[4] += 0.9459459459459459;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.4523809523809524;
            result[2] += 0;
            result[3] += 0.2619047619047619;
            result[4] += 0.14285714285714285;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.002207505518763797;
            result[1] += 0.9845474613686535;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013245033112582781;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.12121212121212122;
            result[1] += 0.42424242424242425;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0;
          } else {
            result[0] += 0.8967297762478486;
            result[1] += 0.00774526678141136;
            result[2] += 0.0034423407917383822;
            result[3] += 0.029259896729776247;
            result[4] += 0.04388984509466437;
            result[5] += 0.0189328743545611;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.026717557251908396;
            result[1] += 0.05343511450381679;
            result[2] += 0.04198473282442748;
            result[3] += 0.3015267175572519;
            result[4] += 0.0916030534351145;
            result[5] += 0.4847328244274809;
          } else {
            result[0] += 0.6344086021505376;
            result[1] += 0;
            result[2] += 0.23655913978494625;
            result[3] += 0.021505376344086023;
            result[4] += 0.03225806451612903;
            result[5] += 0.07526881720430108;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06593406593406594;
            result[3] += 0.6263736263736264;
            result[4] += 0;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.47368421052631576;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11363636363636363;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.06818181818181818;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96875;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.6818181818181818;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6595744680851064;
            result[3] += 0.25531914893617025;
            result[4] += 0;
            result[5] += 0.08510638297872342;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8455284552845529;
            result[3] += 0.10569105691056911;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.5277777777777778;
            result[3] += 0.3611111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007042253521126761;
            result[1] += 0;
            result[2] += 0.9605633802816902;
            result[3] += 0.0323943661971831;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.011278195488721806;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.962406015037594;
            result[5] += 0.026315789473684213;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.6428571428571429;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428e0000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.2916666666666667;
          } else {
            result[0] += 0.890625;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09375;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.0011441647597254005;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.06750572082379863;
            result[5] += 0.9096109839816934;
          } else {
            result[0] += 0.018292682926829267;
            result[1] += 0.006097560975609756;
            result[2] += 0.024390243902439025;
            result[3] += 0.3597560975609756;
            result[4] += 0.03048780487804878;
            result[5] += 0.5609756097560976;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x423a0000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.07894736842105263;
            result[1] += 0.06315789473684211;
            result[2] += 0.015789473684210527;
            result[3] += 0.3;
            result[4] += 0.2;
            result[5] += 0.34210526315789475;
          } else {
            result[0] += 0.8360237892948174;
            result[1] += 0.03143585386576041;
            result[2] += 0.009345794392523364;
            result[3] += 0.01954120645709431;
            result[4] += 0.09090909090909091;
            result[5] += 0.012744265080713678;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.013477088948787063;
            result[1] += 0.0026954177897574125;
            result[2] += 0.07816711590296496;
            result[3] += 0.5040431266846361;
            result[4] += 0.05660377358490566;
            result[5] += 0.3450134770889488;
          } else {
            result[0] += 0.35374149659863946;
            result[1] += 0.05442176870748299;
            result[2] += 0.2857142857142857;
            result[3] += 0.02040816326530612;
            result[4] += 0.17006802721088435;
            result[5] += 0.11564625850340136;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08450704225352113;
            result[3] += 0.8028169014084507;
            result[4] += 0;
            result[5] += 0.11267605633802817;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.04166666666666667;
            result[1] += 0;
            result[2] += 0.7291666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0.020833333333333336;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.34615384615384615;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.13333333333333333;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d10000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.0013550135501355014;
            result[1] += 0;
            result[2] += 0.9363143631436315;
            result[3] += 0.052845528455284556;
            result[4] += 0;
            result[5] += 0.009485094850948509;
          } else {
            result[0] += 0.391304347826087;
            result[1] += 0;
            result[2] += 0.6086956521739131;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
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
            result[4] += 0.9904306220095693;
            result[5] += 0.009569377990430622;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.11904761904761904;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.44047619047619047;
            result[5] += 0.44047619047619047;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425c0000))) ) ) {
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
            result[3] += 0.019417475728155338;
            result[4] += 0.030513176144244106;
            result[5] += 0.9500693481276006;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.006134969325153374;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10429447852760736;
            result[4] += 0.17791411042944785;
            result[5] += 0.7116564417177914;
          } else {
            result[0] += 0.00684931506849315;
            result[1] += 0.010273972602739725;
            result[2] += 0.00684931506849315;
            result[3] += 0.5342465753424658;
            result[4] += 0.03424657534246575;
            result[5] += 0.4075342465753425;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.0875;
            result[1] += 0.0875;
            result[2] += 0.0125;
            result[3] += 0.01875;
            result[4] += 0.76875;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0.8490566037735849;
            result[2] += 0;
            result[3] += 0.05660377358490566;
            result[4] += 0.07547169811320754;
            result[5] += 0.018867924528301886;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0.3367768595041323;
            result[1] += 0.016528925619834715;
            result[2] += 0.0847107438016529;
            result[3] += 0.27066115702479343;
            result[4] += 0.09297520661157026;
            result[5] += 0.19834710743801656;
          } else {
            result[0] += 0.8337899543378996;
            result[1] += 0.005479452054794521;
            result[2] += 0.07123287671232877;
            result[3] += 0.021004566210045664;
            result[4] += 0.049315068493150684;
            result[5] += 0.019178082191780823;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3925233644859813;
            result[3] += 0.4766355140186916;
            result[4] += 0;
            result[5] += 0.1308411214953271;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.0625;
            result[4] += 0.25;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6627906976744187;
            result[3] += 0.2906976744186047;
            result[4] += 0;
            result[5] += 0.04651162790697675;
          } else {
            result[0] += 0.009615384615384616;
            result[1] += 0;
            result[2] += 0.9326923076923077;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0.019230769230769232;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
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
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0.0045871559633027525;
            result[1] += 0;
            result[2] += 0.8761467889908257;
            result[3] += 0.11926605504587157;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9846491228070176;
            result[3] += 0.015350877192982455;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0.005747126436781609;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9942528735632183;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.6176470588235294;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.38235294117647056;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03508771929824561;
            result[4] += 0.7017543859649122;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002386634844868735;
            result[3] += 0.032219570405727926;
            result[4] += 0.032219570405727926;
            result[5] += 0.9331742243436754;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.010526315789473684;
            result[3] += 0.14736842105263157;
            result[4] += 0.06315789473684211;
            result[5] += 0.7263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0.06666666666666667;
            result[3] += 0.6256410256410256;
            result[4] += 0.02564102564102564;
            result[5] += 0.20512820512820512;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.024193548387096774;
            result[1] += 0.21774193548387097;
            result[2] += 0;
            result[3] += 0.024193548387096774;
            result[4] += 0.6451612903225806;
            result[5] += 0.08870967741935484;
          } else {
            result[0] += 0.798904538341158;
            result[1] += 0.007042253521126761;
            result[2] += 0.005477308294209703;
            result[3] += 0.033646322378716745;
            result[4] += 0.1056338028169014;
            result[5] += 0.04929577464788732;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.016722408026755852;
            result[1] += 0.05016722408026756;
            result[2] += 0.033444816053511704;
            result[3] += 0.46488294314381273;
            result[4] += 0.07692307692307693;
            result[5] += 0.35785953177257523;
          } else {
            result[0] += 0.4454148471615721;
            result[1] += 0;
            result[2] += 0.4454148471615721;
            result[3] += 0.0480349344978166;
            result[4] += 0.026200873362445417;
            result[5] += 0.03493449781659389;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.171875;
            result[3] += 0.171875;
            result[4] += 0.09375;
            result[5] += 0.5625;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.020000000000000004;
            result[2] += 0.16000000000000003;
            result[3] += 0.7000000000000001;
            result[4] += 0.04000000000000001;
            result[5] += 0.08000000000000002;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.09302325581395349;
            result[2] += 0.6744186046511628;
            result[3] += 0.16279069767441862;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 0.025;
            result[1] += 0.025;
            result[2] += 0.625;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.225;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9672131147540983;
            result[3] += 0.03278688524590164;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7295081967213115;
            result[3] += 0.2540983606557377;
            result[4] += 0;
            result[5] += 0.01639344262295082;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8103448275862069;
            result[3] += 0.1896551724137931;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9694656488549618;
            result[3] += 0.030534351145038167;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.42857142857142855;
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x43040000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9910514541387024;
            result[3] += 0.008948545861297539;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.004149377593360997;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9834024896265561;
            result[5] += 0.012448132780082988;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0.46153846153846156;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.2;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017045454545454544;
            result[4] += 0.03409090909090909;
            result[5] += 0.03977272727272727;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8431372549019608;
            result[5] += 0.1568627450980392;
          } else {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0.4444444444444444;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0.0011402508551881414;
            result[1] += 0.0011402508551881414;
            result[2] += 0.00798175598631699;
            result[3] += 0.06043329532497149;
            result[4] += 0.04104903078677309;
            result[5] += 0.8882554161915621;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.02608695652173913;
            result[1] += 0.034782608695652174;
            result[2] += 0;
            result[3] += 0.14782608695652175;
            result[4] += 0.06956521739130435;
            result[5] += 0.7217391304347827;
          } else {
            result[0] += 0.05970149253731343;
            result[1] += 0.11940298507462686;
            result[2] += 0.029850746268656716;
            result[3] += 0.13432835820895522;
            result[4] += 0.40298507462686567;
            result[5] += 0.2537313432835821;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0.011834319526627219;
            result[2] += 0;
            result[3] += 0.6804733727810651;
            result[4] += 0.04142011834319527;
            result[5] += 0.26627218934911245;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.16666666666666666;
            result[4] += 0.08333333333333333;
            result[5] += 0.6388888888888888;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7391304347826088;
            result[2] += 0.04347826086956522;
            result[3] += 0;
            result[4] += 0.2173913043478261;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
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
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0.10909090909090909;
            result[1] += 0.8363636363636363;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05454545454545454;
            result[5] += 0;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0.14473684210526316;
            result[2] += 0.06578947368421052;
            result[3] += 0.02631578947368421;
            result[4] += 0.6447368421052632;
            result[5] += 0.039473684210526314;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.9269311064718163;
            result[1] += 0.010438413361169102;
            result[2] += 0.0010438413361169101;
            result[3] += 0.011482254697286013;
            result[4] += 0.04279749478079332;
            result[5] += 0.007306889352818371;
          } else {
            result[0] += 0.34024896265560167;
            result[1] += 0;
            result[2] += 0.1078838174273859;
            result[3] += 0.3112033195020747;
            result[4] += 0.07053941908713693;
            result[5] += 0.17012448132780084;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.2777777777777778;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.6111111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.7586206896551724;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.20833333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0.4583333333333333;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.9375;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4625;
            result[3] += 0.3875;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.012875536480686695;
            result[1] += 0;
            result[2] += 0.8991416309012875;
            result[3] += 0.07725321888412018;
            result[4] += 0.003218884120171674;
            result[5] += 0.0075107296137339056;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0.007843137254901962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9843137254901961;
            result[5] += 0.007843137254901962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0;
            result[4] += 0.34615384615384615;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.8823529411764707;
            result[1] += 0.014705882352941178;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08823529411764708;
            result[5] += 0.014705882352941178;
          } else {
            result[0] += 0.13793103448275862;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5862068965517241;
            result[5] += 0.2413793103448276;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.7368421052631579;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.004291845493562232;
            result[1] += 0.00536480686695279;
            result[2] += 0.0075107296137339056;
            result[3] += 0.07725321888412018;
            result[4] += 0.0536480686695279;
            result[5] += 0.851931330472103;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0.46153846153846156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0;
          } else {
            result[0] += 0.0022172949002217295;
            result[1] += 0.9933481152993349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004434589800443459;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 0.7619047619047619;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19047619047619047;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.025974025974025976;
            result[1] += 0.15584415584415584;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8051948051948052;
            result[5] += 0.012987012987012988;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.14492753623188406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2028985507246377;
            result[4] += 0.11594202898550725;
            result[5] += 0.5362318840579711;
          } else {
            result[0] += 0.9141104294478526;
            result[1] += 0.008179959100204498;
            result[2] += 0.004089979550102249;
            result[3] += 0.015337423312883432;
            result[4] += 0.051124744376278106;
            result[5] += 0.007157464212678935;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.0653061224489796;
            result[1] += 0.04081632653061224;
            result[2] += 0.04897959183673469;
            result[3] += 0.42448979591836733;
            result[4] += 0.07346938775510205;
            result[5] += 0.3469387755102041;
          } else {
            result[0] += 0.8142076502732241;
            result[1] += 0;
            result[2] += 0.1366120218579235;
            result[3] += 0.01092896174863388;
            result[4] += 0.00546448087431694;
            result[5] += 0.03278688524590164;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09259259259259259;
            result[3] += 0.09259259259259259;
            result[4] += 0.018518518518518517;
            result[5] += 0.7962962962962963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.2777777777777778;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15151515151515152;
            result[3] += 0.15151515151515152;
            result[4] += 0;
            result[5] += 0.696969696969697;
          } else {
            result[0] += 0.0053191489361702135;
            result[1] += 0.026595744680851068;
            result[2] += 0.14361702127659579;
            result[3] += 0.6276595744680852;
            result[4] += 0.03191489361702128;
            result[5] += 0.1648936170212766;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7068965517241379;
            result[3] += 0.22413793103448276;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42280000))) ) ) {
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.4814814814814815;
            result[1] += 0;
            result[2] += 0.03703703703703704;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.3703703703703704;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2666666666666667;
            result[3] += 0.6333333333333334;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0.07142857142857144;
            result[1] += 0;
            result[2] += 0.7321428571428572;
            result[3] += 0.19642857142857145;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7785234899328859;
            result[3] += 0.174496644295302;
            result[4] += 0;
            result[5] += 0.04697986577181208;
          } else {
            result[0] += 0.014367816091954023;
            result[1] += 0;
            result[2] += 0.9468390804597702;
            result[3] += 0.034482758620689655;
            result[4] += 0.0014367816091954023;
            result[5] += 0.0028735632183908046;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0.005714285714285715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9600000000000001;
            result[5] += 0.034285714285714294;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9607843137254902;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0392156862745098;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.24;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.26666666666666666;
            result[5] += 0.4266666666666667;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.4166666666666667;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0.002583979328165375;
            result[2] += 0;
            result[3] += 0.012919896640826873;
            result[4] += 0.031007751937984496;
            result[5] += 0.9534883720930233;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.011111111111111112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0.1;
            result[5] += 0.7555555555555555;
          } else {
            result[0] += 0.024793388429752067;
            result[1] += 0;
            result[2] += 0.06611570247933884;
            result[3] += 0.6115702479338843;
            result[4] += 0.004132231404958678;
            result[5] += 0.29338842975206614;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.6147959183673469;
            result[1] += 0.06887755102040816;
            result[2] += 0;
            result[3] += 0.026785714285714284;
            result[4] += 0.2385204081632653;
            result[5] += 0.05102040816326531;
          } else {
            result[0] += 0.0792838874680307;
            result[1] += 0.058823529411764705;
            result[2] += 0.20460358056265984;
            result[3] += 0.3452685421994885;
            result[4] += 0.056265984654731455;
            result[5] += 0.2557544757033248;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.9351432880844647;
            result[1] += 0.00603318250377074;
            result[2] += 0.01206636500754148;
            result[3] += 0.001508295625942685;
            result[4] += 0.036199095022624445;
            result[5] += 0.009049773755656111;
          } else {
            result[0] += 0.2553191489361702;
            result[1] += 0;
            result[2] += 0.723404255319149;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429d0000))) ) ) {
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
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.95;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1958762886597938;
            result[3] += 0.6494845360824743;
            result[4] += 0.061855670103092786;
            result[5] += 0.09278350515463918;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7096774193548387;
            result[3] += 0.16129032258064516;
            result[4] += 0;
            result[5] += 0.12903225806451613;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8172043010752689;
            result[3] += 0.043010752688172046;
            result[4] += 0.043010752688172046;
            result[5] += 0.0967741935483871;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5925925925925926;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a50000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429d0000))) ) ) {
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
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.019762845849802372;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.14624505928853754;
            result[4] += 0;
            result[5] += 0.007905138339920948;
          } else {
            result[0] += 0.0018726591760299626;
            result[1] += 0;
            result[2] += 0.9756554307116105;
            result[3] += 0.02247191011235955;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9855072463768116;
            result[5] += 0.014492753623188406;
          } else {
            result[0] += 0;
            result[1] += 0.1724137931034483;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.3793103448275862;
            result[5] += 0.3793103448275862;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.368421052631579;
            result[2] += 0;
            result[3] += 0.31578947368421056;
            result[4] += 0.31578947368421056;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.4285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.41071428571428575;
            result[5] += 0.16071428571428575;
          } else {
            result[0] += 0;
            result[1] += 0.0038314176245210726;
            result[2] += 0;
            result[3] += 0.035759897828863345;
            result[4] += 0.031928480204342274;
            result[5] += 0.9284802043422733;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.9555555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022222222222222223;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0.011933174224343675;
            result[1] += 0.002386634844868735;
            result[2] += 0.011933174224343675;
            result[3] += 0.42482100238663484;
            result[4] += 0.07875894988066826;
            result[5] += 0.4701670644391408;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0.08928571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8035714285714286;
            result[5] += 0.011904761904761904;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8416370106761566;
            result[1] += 0.00800711743772242;
            result[2] += 0.009786476868327402;
            result[3] += 0.045373665480427046;
            result[4] += 0.06316725978647687;
            result[5] += 0.03202846975088968;
          } else {
            result[0] += 0.22535211267605637;
            result[1] += 0.02253521126760564;
            result[2] += 0.2845070422535212;
            result[3] += 0.21690140845070424;
            result[4] += 0.0619718309859155;
            result[5] += 0.1887323943661972;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.1;
            result[3] += 0.06666666666666667;
            result[4] += 0.16666666666666666;
            result[5] += 0.6333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7446808510638298;
            result[4] += 0;
            result[5] += 0.2553191489361702;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.24;
            result[4] += 0;
            result[5] += 0.36;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9629629629629629;
            result[3] += 0.037037037037037035;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7432432432432432;
            result[3] += 0.22972972972972974;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.53125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.009478672985781991;
            result[1] += 0;
            result[2] += 0.9312796208530806;
            result[3] += 0.05687203791469194;
            result[4] += 0;
            result[5] += 0.002369668246445498;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
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
            result[4] += 0.9792746113989638;
            result[5] += 0.02072538860103627;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.8846153846153847;
            result[1] += 0.03846153846153847;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03846153846153847;
            result[5] += 0.03846153846153847;
          } else {
            result[0] += 0.01818181818181818;
            result[1] += 0.05454545454545454;
            result[2] += 0.05454545454545454;
            result[3] += 0;
            result[4] += 0.6727272727272727;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.9;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.0033975084937712344;
            result[2] += 0.011325028312570781;
            result[3] += 0.045300113250283124;
            result[4] += 0.05889014722536806;
            result[5] += 0.8810872027180068;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.25;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.04310344827586207;
            result[1] += 0;
            result[2] += 0.02586206896551724;
            result[3] += 0.7155172413793104;
            result[4] += 0;
            result[5] += 0.21551724137931033;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0;
            result[3] += 0.022727272727272728;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6129032258064516;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.12903225806451613;
            result[5] += 0.22580645161290322;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0.04;
            result[1] += 0.72;
            result[2] += 0.04;
            result[3] += 0.04;
            result[4] += 0.16;
            result[5] += 0;
          } else {
            result[0] += 0.049586776859504134;
            result[1] += 0.049586776859504134;
            result[2] += 0.008264462809917356;
            result[3] += 0;
            result[4] += 0.8760330578512396;
            result[5] += 0.01652892561983471;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.446875;
            result[1] += 0.0359375;
            result[2] += 0.0484375;
            result[3] += 0.18125;
            result[4] += 0.075;
            result[5] += 0.2125;
          } else {
            result[0] += 0.8976897689768977;
            result[1] += 0.0187018701870187;
            result[2] += 0.0165016501650165;
            result[3] += 0.006600660066006601;
            result[4] += 0.04950495049504951;
            result[5] += 0.011001100110011002;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.13953488372093023;
            result[4] += 0;
            result[5] += 0.8372093023255814;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.3055555555555556;
            result[4] += 0;
            result[5] += 0.6388888888888888;
          } else {
            result[0] += 0;
            result[1] += 0.014705882352941176;
            result[2] += 0.16176470588235295;
            result[3] += 0.6544117647058824;
            result[4] += 0;
            result[5] += 0.16911764705882354;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.6842105263157895;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0.022727272727272728;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.22727272727272727;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0.9655172413793104;
            result[1] += 0;
            result[2] += 0.034482758620689655;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.44;
            result[1] += 0;
            result[2] += 0.56;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.0033783783783783777;
            result[1] += 0;
            result[2] += 0.9132882882882881;
            result[3] += 0.07207207207207206;
            result[4] += 0;
            result[5] += 0.011261261261261259;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.008403361344537815;
            result[1] += 0.004201680672268907;
            result[2] += 0;
            result[3] += 0.008403361344537815;
            result[4] += 0.9495798319327731;
            result[5] += 0.029411764705882353;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.5;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.026315789473684213;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8421052631578948;
            result[5] += 0.13157894736842107;
          } else {
            result[0] += 0.03528114663726571;
            result[1] += 0.002205071664829107;
            result[2] += 0;
            result[3] += 0.030871003307607496;
            result[4] += 0.06284454244762955;
            result[5] += 0.8687982359426681;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.9666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017167381974248927;
            result[3] += 0.6437768240343348;
            result[4] += 0.017167381974248927;
            result[5] += 0.3218884120171674;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0.08823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9117647058823529;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8292682926829268;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17073170731707318;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0.6923076923076924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2692307692307693;
            result[5] += 0.03846153846153847;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.7544581618655692;
            result[1] += 0.06995884773662552;
            result[2] += 0.010973936899862825;
            result[3] += 0.013717421124828532;
            result[4] += 0.12071330589849108;
            result[5] += 0.03017832647462277;
          } else {
            result[0] += 0.06354515050167224;
            result[1] += 0.023411371237458192;
            result[2] += 0.17391304347826086;
            result[3] += 0.4080267558528428;
            result[4] += 0.09698996655518395;
            result[5] += 0.23411371237458195;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.28125;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.09375;
            result[4] += 0.09375;
            result[5] += 0.5;
          } else {
            result[0] += 0.9645868465430016;
            result[1] += 0;
            result[2] += 0.02866779089376054;
            result[3] += 0.0016863406408094434;
            result[4] += 0.003372681281618887;
            result[5] += 0.0016863406408094434;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0.967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0.10526315789473684;
            result[5] += 0.7368421052631579;
          } else {
            result[0] += 0;
            result[1] += 0.05194805194805195;
            result[2] += 0.18181818181818182;
            result[3] += 0.6233766233766234;
            result[4] += 0.06493506493506493;
            result[5] += 0.07792207792207792;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5084745762711864;
            result[3] += 0.288135593220339;
            result[4] += 0;
            result[5] += 0.2033898305084746;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9487179487179487;
            result[3] += 0.02564102564102564;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0.14285714285714285;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.0021551724137931034;
            result[1] += 0;
            result[2] += 0.8642241379310345;
            result[3] += 0.1206896551724138;
            result[4] += 0;
            result[5] += 0.01293103448275862;
          } else {
            result[0] += 0.0022522522522522522;
            result[1] += 0;
            result[2] += 0.9797297297297297;
            result[3] += 0.018018018018018018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9823788546255506;
            result[5] += 0.01762114537444934;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9836065573770492;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01639344262295082;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.050505050505050504;
            result[1] += 0.050505050505050504;
            result[2] += 0;
            result[3] += 0.04040404040404041;
            result[4] += 0.41414141414141414;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.007700770077007701;
            result[1] += 0;
            result[2] += 0.0033003300330033004;
            result[3] += 0.047304730473047306;
            result[4] += 0.033003300330033;
            result[5] += 0.9086908690869087;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.4444444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.8235294117647058;
            result[1] += 0.0196078431372549;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1568627450980392;
            result[5] += 0;
          } else {
            result[0] += 0.013409961685823755;
            result[1] += 0.009578544061302681;
            result[2] += 0.07088122605363985;
            result[3] += 0.49616858237547895;
            result[4] += 0.05747126436781609;
            result[5] += 0.3524904214559387;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.10810810810810811;
            result[1] += 0.36486486486486486;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5067567567567568;
            result[5] += 0.02027027027027027;
          } else {
            result[0] += 0.7697841726618706;
            result[1] += 0.011191047162270186;
            result[2] += 0.08073541167066349;
            result[3] += 0.05355715427657874;
            result[4] += 0.05435651478816947;
            result[5] += 0.030375699440447646;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5833333333333334;
            result[4] += 0.25;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18604651162790697;
            result[3] += 0.046511627906976744;
            result[4] += 0.046511627906976744;
            result[5] += 0.7209302325581395;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7846153846153846;
            result[3] += 0.2076923076923077;
            result[4] += 0;
            result[5] += 0.007692307692307693;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.02252252252252252;
            result[1] += 0.009009009009009009;
            result[2] += 0.8333333333333334;
            result[3] += 0.11711711711711711;
            result[4] += 0.0045045045045045045;
            result[5] += 0.013513513513513514;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9752380952380952;
            result[3] += 0.022857142857142857;
            result[4] += 0;
            result[5] += 0.0019047619047619048;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9881422924901185;
            result[5] += 0.011857707509881422;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0.19047619047619047;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0.9642857142857143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0.0011467889908256881;
            result[1] += 0.0022935779816513763;
            result[2] += 0.0022935779816513763;
            result[3] += 0.02522935779816514;
            result[4] += 0.06077981651376147;
            result[5] += 0.908256880733945;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.09424083769633508;
            result[1] += 0.04712041884816754;
            result[2] += 0.05235602094240838;
            result[3] += 0.23036649214659685;
            result[4] += 0.04712041884816754;
            result[5] += 0.5287958115183246;
          } else {
            result[0] += 0.011904761904761904;
            result[1] += 0.017857142857142856;
            result[2] += 0.047619047619047616;
            result[3] += 0.6547619047619048;
            result[4] += 0.011904761904761904;
            result[5] += 0.25595238095238093;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 0.9649122807017544;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03508771929824561;
            result[5] += 0;
          } else {
            result[0] += 0.0825242718446602;
            result[1] += 0.10194174757281553;
            result[2] += 0;
            result[3] += 0.0048543689320388345;
            result[4] += 0.7912621359223301;
            result[5] += 0.019417475728155338;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8602243313201036;
            result[1] += 0.005176876617773943;
            result[2] += 0.007765314926660914;
            result[3] += 0.03710094909404659;
            result[4] += 0.059534081104400345;
            result[5] += 0.030198446937014668;
          } else {
            result[0] += 0.2894736842105263;
            result[1] += 0.03070175438596491;
            result[2] += 0.15350877192982457;
            result[3] += 0.27631578947368424;
            result[4] += 0.09210526315789473;
            result[5] += 0.15789473684210525;
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0.8852459016393442;
            result[4] += 0;
            result[5] += 0.09836065573770492;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18055555555555555;
            result[3] += 0.4444444444444444;
            result[4] += 0.05555555555555555;
            result[5] += 0.3194444444444444;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.49019607843137253;
            result[3] += 0.39215686274509803;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7823834196891192;
            result[3] += 0.19689119170984457;
            result[4] += 0;
            result[5] += 0.02072538860103627;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004316546762589928;
            result[1] += 0;
            result[2] += 0.9467625899280575;
            result[3] += 0.04748201438848921;
            result[4] += 0;
            result[5] += 0.0014388489208633094;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9833333333333333;
            result[5] += 0.016666666666666666;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
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
            result[3] += 0.9285714285714286;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8823529411764706;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.0036275695284159614;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045949214026602174;
            result[4] += 0.041112454655380895;
            result[5] += 0.909310761789601;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.9696969696969697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          } else {
            result[0] += 0.0117096018735363;
            result[1] += 0.02107728337236534;
            result[2] += 0.00234192037470726;
            result[3] += 0.4028103044496487;
            result[4] += 0.05152224824355972;
            result[5] += 0.5105386416861827;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.3157894736842105;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6842105263157895;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.2426470588235294;
            result[1] += 0.1948529411764706;
            result[2] += 0;
            result[3] += 0.014705882352941176;
            result[4] += 0.5257352941176471;
            result[5] += 0.022058823529411766;
          } else {
            result[0] += 0.9193227091633467;
            result[1] += 0.006972111553784861;
            result[2] += 0.003984063745019921;
            result[3] += 0.009960159362549802;
            result[4] += 0.05577689243027889;
            result[5] += 0.003984063745019921;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.06042296072507553;
            result[1] += 0;
            result[2] += 0.37462235649546827;
            result[3] += 0.32628398791540786;
            result[4] += 0.027190332326283987;
            result[5] += 0.21148036253776434;
          } else {
            result[0] += 0.6494845360824743;
            result[1] += 0.09278350515463918;
            result[2] += 0.07216494845360824;
            result[3] += 0.08247422680412371;
            result[4] += 0.10309278350515463;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06153846153846154;
            result[3] += 0.16923076923076924;
            result[4] += 0.07692307692307693;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7169811320754716;
            result[3] += 0.18867924528301888;
            result[4] += 0;
            result[5] += 0.09433962264150944;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0.3076923076923077;
            result[2] += 0.23076923076923078;
            result[3] += 0.07692307692307693;
            result[4] += 0.23076923076923078;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.525;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0.031007751937984496;
            result[1] += 0;
            result[2] += 0.8217054263565892;
            result[3] += 0.1434108527131783;
            result[4] += 0;
            result[5] += 0.003875968992248062;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.993006993006993;
            result[3] += 0.006993006993006993;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0.01593625498007968;
            result[1] += 0.00796812749003984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.952191235059761;
            result[5] += 0.02390438247011952;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0.14285714285714285;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.42622950819672134;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5081967213114755;
            result[5] += 0.0655737704918033;
          } else {
            result[0] += 0;
            result[1] += 0.004750593824228029;
            result[2] += 0;
            result[3] += 0.048693586698337295;
            result[4] += 0.048693586698337295;
            result[5] += 0.8978622327790974;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.17647058823529413;
            result[1] += 0.02262443438914027;
            result[2] += 0.00904977375565611;
            result[3] += 0.12669683257918551;
            result[4] += 0.07692307692307693;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0.009302325581395349;
            result[1] += 0.013953488372093023;
            result[2] += 0.009302325581395349;
            result[3] += 0.7162790697674418;
            result[4] += 0.004651162790697674;
            result[5] += 0.24651162790697675;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.046875;
            result[1] += 0.3385416666666667;
            result[2] += 0;
            result[3] += 0.010416666666666666;
            result[4] += 0.5833333333333334;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0.8966408268733851;
            result[1] += 0.006890611541774333;
            result[2] += 0.004306632213608959;
            result[3] += 0.009474590869939709;
            result[4] += 0.07062876830318693;
            result[5] += 0.012058570198105084;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.054140127388535034;
            result[1] += 0.01592356687898089;
            result[2] += 0.29936305732484075;
            result[3] += 0.31210191082802546;
            result[4] += 0.025477707006369428;
            result[5] += 0.2929936305732484;
          } else {
            result[0] += 0.8309859154929579;
            result[1] += 0;
            result[2] += 0.014084507042253523;
            result[3] += 0.028169014084507046;
            result[4] += 0.09859154929577466;
            result[5] += 0.028169014084507046;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08823529411764706;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.8529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0.4782608695652174;
            result[4] += 0.043478260869565216;
            result[5] += 0.43478260869565216;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.8260869565217391;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.025641025641025633;
            result[2] += 0.641025641025641;
            result[3] += 0.17948717948717946;
            result[4] += 0.051282051282051266;
            result[5] += 0.10256410256410253;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42930000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4411764705882353;
            result[3] += 0.5294117647058824;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.008955223880597015;
            result[1] += 0;
            result[2] += 0.8507462686567164;
            result[3] += 0.12238805970149254;
            result[4] += 0;
            result[5] += 0.01791044776119403;
          } else {
            result[0] += 0.007722007722007723;
            result[1] += 0;
            result[2] += 0.9671814671814672;
            result[3] += 0.02316602316602317;
            result[4] += 0;
            result[5] += 0.0019305019305019308;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.00411522633744856;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9917695473251029;
            result[5] += 0.00411522633744856;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7083333333333334;
            result[5] += 0.2916666666666667;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.6;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.2857142857142857;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.0036900369003690036;
            result[2] += 0;
            result[3] += 0.041820418204182044;
            result[4] += 0.05289052890528905;
            result[5] += 0.9015990159901599;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.4897959183673469;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.08163265306122448;
            result[4] += 0.3877551020408163;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006622516556291391;
            result[2] += 0.016556291390728478;
            result[3] += 0.4503311258278146;
            result[4] += 0.04304635761589404;
            result[5] += 0.48344370860927155;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
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
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9777777777777777;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022222222222222223;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0.28888888888888886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4222222222222222;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.885593220338983;
            result[1] += 0.016101694915254237;
            result[2] += 0.002542372881355932;
            result[3] += 0.019491525423728815;
            result[4] += 0.06864406779661017;
            result[5] += 0.007627118644067797;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.03317535545023697;
            result[1] += 0.04739336492890995;
            result[2] += 0.15639810426540285;
            result[3] += 0.4265402843601896;
            result[4] += 0.014218009478672985;
            result[5] += 0.3222748815165877;
          } else {
            result[0] += 0.6296296296296297;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.009259259259259259;
            result[4] += 0.1111111111111111;
            result[5] += 0.027777777777777776;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10714285714285714;
            result[3] += 0.10714285714285714;
            result[4] += 0.03571428571428571;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.225;
            result[3] += 0.5625;
            result[4] += 0.0125;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.04098360655737705;
            result[1] += 0.05737704918032788;
            result[2] += 0.7540983606557378;
            result[3] += 0.0737704918032787;
            result[4] += 0.0655737704918033;
            result[5] += 0.008196721311475412;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0.007407407407407408;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.17037037037037037;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9818181818181818;
            result[3] += 0.01818181818181818;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9101796407185628;
            result[3] += 0.08982035928143713;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9428571428571428;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0035587188612099642;
            result[1] += 0;
            result[2] += 0.99644128113879;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03389830508474576;
            result[4] += 0.2711864406779661;
            result[5] += 0.6949152542372882;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0.6538461538461539;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.11538461538461539;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.0012121212121212121;
            result[2] += 0;
            result[3] += 0.05090909090909091;
            result[4] += 0.03393939393939394;
            result[5] += 0.9139393939393939;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
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
            result[3] += 0.01818181818181818;
            result[4] += 0.01818181818181818;
            result[5] += 0.9636363636363636;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0.004098360655737705;
            result[2] += 0.004098360655737705;
            result[3] += 0.6311475409836066;
            result[4] += 0.00819672131147541;
            result[5] += 0.3524590163934426;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.4318181818181818;
            result[3] += 0.06818181818181818;
            result[4] += 0.045454545454545456;
            result[5] += 0.4090909090909091;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0043956043956043965;
            result[1] += 0.9824175824175825;
            result[2] += 0;
            result[3] += 0.006593406593406594;
            result[4] += 0.0043956043956043965;
            result[5] += 0.0021978021978021982;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.1981981981981982;
            result[1] += 0.009009009009009009;
            result[2] += 0;
            result[3] += 0.15315315315315314;
            result[4] += 0.5585585585585585;
            result[5] += 0.08108108108108109;
          } else {
            result[0] += 0.009259259259259259;
            result[1] += 0;
            result[2] += 0.19444444444444445;
            result[3] += 0.25;
            result[4] += 0.1111111111111111;
            result[5] += 0.4351851851851852;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.25333333333333335;
            result[1] += 0.22666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4866666666666667;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0.8354011579818031;
            result[1] += 0.013234077750206782;
            result[2] += 0.028949545078577336;
            result[3] += 0.036393713813068655;
            result[4] += 0.06782464846980976;
            result[5] += 0.018196856906534328;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13513513513513514;
            result[3] += 0;
            result[4] += 0.08108108108108109;
            result[5] += 0.7837837837837838;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.01639344262295082;
            result[1] += 0;
            result[2] += 0.29508196721311475;
            result[3] += 0.5136612021857924;
            result[4] += 0.01639344262295082;
            result[5] += 0.15846994535519127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9047619047619048;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5135135135135135;
            result[3] += 0.13513513513513514;
            result[4] += 0;
            result[5] += 0.35135135135135137;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.45;
            result[1] += 0.15;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0.15;
          } else {
            result[0] += 0.007954545454545454;
            result[1] += 0.0022727272727272726;
            result[2] += 0.928409090909091;
            result[3] += 0.048863636363636366;
            result[4] += 0;
            result[5] += 0.0125;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42860000))) ) ) {
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
            result[3] += 0.04347826086956522;
            result[4] += 0.7391304347826088;
            result[5] += 0.2173913043478261;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.75;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.005050505050505051;
            result[1] += 0;
            result[2] += 0.0025252525252525255;
            result[3] += 0.013888888888888888;
            result[4] += 0.039141414141414144;
            result[5] += 0.9393939393939394;
          } else {
            result[0] += 0.3058823529411765;
            result[1] += 0.011764705882352941;
            result[2] += 0;
            result[3] += 0.09411764705882353;
            result[4] += 0.15294117647058825;
            result[5] += 0.43529411764705883;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.06289308176100629;
            result[1] += 0.06289308176100629;
            result[2] += 0.006289308176100629;
            result[3] += 0.2389937106918239;
            result[4] += 0.050314465408805034;
            result[5] += 0.5786163522012578;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6744186046511628;
            result[4] += 0.03488372093023256;
            result[5] += 0.29069767441860467;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.10160427807486631;
            result[1] += 0.0427807486631016;
            result[2] += 0.0374331550802139;
            result[3] += 0.026737967914438502;
            result[4] += 0.7272727272727273;
            result[5] += 0.06417112299465241;
          } else {
            result[0] += 0.07017543859649124;
            result[1] += 0.8070175438596492;
            result[2] += 0.01754385964912281;
            result[3] += 0.03508771929824562;
            result[4] += 0.07017543859649124;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8414918414918415;
            result[1] += 0.006216006216006216;
            result[2] += 0.006993006993006993;
            result[3] += 0.04351204351204351;
            result[4] += 0.06371406371406371;
            result[5] += 0.03807303807303807;
          } else {
            result[0] += 0.12951807228915663;
            result[1] += 0.012048192771084338;
            result[2] += 0.18072289156626506;
            result[3] += 0.32831325301204817;
            result[4] += 0.07530120481927711;
            result[5] += 0.2740963855421687;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0.002544529262086514;
            result[1] += 0.9974554707379135;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.4;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.7058823529411765;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427c0000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6290322580645161;
            result[3] += 0.33064516129032256;
            result[4] += 0;
            result[5] += 0.04032258064516129;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9519230769230769;
            result[3] += 0.04807692307692308;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.0051813471502590676;
            result[1] += 0;
            result[2] += 0.8756476683937824;
            result[3] += 0.10880829015544041;
            result[4] += 0;
            result[5] += 0.010362694300518135;
          } else {
            result[0] += 0.001834862385321101;
            result[1] += 0;
            result[2] += 0.981651376146789;
            result[3] += 0.01651376146788991;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9867256637168141;
            result[5] += 0.01327433628318584;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8857142857142857;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.2571428571428571;
            result[5] += 0.7142857142857143;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.2916666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.20833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026385224274406333;
            result[4] += 0.030343007915567283;
            result[5] += 0.9432717678100264;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.08780487804878048;
            result[1] += 0.07804878048780488;
            result[2] += 0.04878048780487805;
            result[3] += 0.18536585365853658;
            result[4] += 0.1073170731707317;
            result[5] += 0.4926829268292683;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013333333333333334;
            result[3] += 0.68;
            result[4] += 0.006666666666666667;
            result[5] += 0.3;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.8047868362004488;
            result[1] += 0.014210919970082274;
            result[2] += 0.006731488406881077;
            result[3] += 0.02617801047120419;
            result[4] += 0.12490650710545999;
            result[5] += 0.02318623784592371;
          } else {
            result[0] += 0;
            result[1] += 0.9361702127659575;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06382978723404255;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0.03067484662576687;
            result[1] += 0.02147239263803681;
            result[2] += 0.10429447852760736;
            result[3] += 0.3220858895705521;
            result[4] += 0.10122699386503067;
            result[5] += 0.42024539877300615;
          } else {
            result[0] += 0.765625;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.15625;
            result[5] += 0.015625;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0.7058823529411765;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
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
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.6527777777777778;
            result[4] += 0;
            result[5] += 0.2361111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5434782608695652;
            result[3] += 0.42391304347826086;
            result[4] += 0;
            result[5] += 0.03260869565217391;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96875;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.013157894736842105;
            result[1] += 0;
            result[2] += 0.8157894736842105;
            result[3] += 0.14473684210526316;
            result[4] += 0.013157894736842105;
            result[5] += 0.013157894736842105;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4666666666666667;
            result[1] += 0;
            result[2] += 0.5333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9705882352941176;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
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
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003952569169960475;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9683794466403163;
            result[5] += 0.027667984189723323;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0.9130434782608695;
          } else {
            result[0] += 0.39285714285714285;
            result[1] += 0.05357142857142857;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.44642857142857145;
            result[5] += 0.08928571428571429;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.3230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0.007453416149068323;
            result[2] += 0;
            result[3] += 0.03602484472049689;
            result[4] += 0.02981366459627329;
            result[5] += 0.9267080745341615;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.06;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.84;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08121827411167512;
            result[3] += 0.5786802030456852;
            result[4] += 0;
            result[5] += 0.3401015228426396;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.11836734693877551;
            result[1] += 0.0326530612244898;
            result[2] += 0.024489795918367346;
            result[3] += 0.19183673469387755;
            result[4] += 0.24489795918367346;
            result[5] += 0.3877551020408163;
          } else {
            result[0] += 0.8326143226919759;
            result[1] += 0.029335634167385678;
            result[2] += 0.0008628127696289905;
            result[3] += 0.023295944779982744;
            result[4] += 0.10612597066436583;
            result[5] += 0.007765314926660914;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.01948051948051948;
            result[1] += 0.03571428571428571;
            result[2] += 0.09740259740259741;
            result[3] += 0.3961038961038961;
            result[4] += 0.07792207792207792;
            result[5] += 0.37337662337662336;
          } else {
            result[0] += 0.49593495934959353;
            result[1] += 0.02439024390243903;
            result[2] += 0.3577235772357724;
            result[3] += 0.05691056910569106;
            result[4] += 0.04065040650406505;
            result[5] += 0.02439024390243903;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.02247191011235955;
            result[1] += 0;
            result[2] += 0.15730337078651685;
            result[3] += 0.6292134831460674;
            result[4] += 0.033707865168539325;
            result[5] += 0.15730337078651685;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.6326530612244898;
            result[3] += 0.3469387755102041;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0;
            result[2] += 0.9130434782608696;
            result[3] += 0.04347826086956522;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.045871559633027525;
            result[1] += 0;
            result[2] += 0.8486238532110092;
            result[3] += 0.08256880733944955;
            result[4] += 0;
            result[5] += 0.022935779816513763;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ca0000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8711656441717791;
            result[3] += 0.1165644171779141;
            result[4] += 0;
            result[5] += 0.012269938650306749;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9047619047619048;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9615384615384616;
            result[3] += 0.038461538461538464;
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.98;
            result[5] += 0.015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.5277777777777778;
            result[5] += 0.3888888888888889;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9696969696969697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7941176470588235;
            result[5] += 0.20588235294117646;
          } else {
            result[0] += 0.008823529411764706;
            result[1] += 0;
            result[2] += 0.0014705882352941176;
            result[3] += 0.023529411764705882;
            result[4] += 0.027941176470588237;
            result[5] += 0.9382352941176471;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9866666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0.023305084745762712;
            result[1] += 0.00423728813559322;
            result[2] += 0.00423728813559322;
            result[3] += 0.3644067796610169;
            result[4] += 0.11864406779661017;
            result[5] += 0.4851694915254237;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.12972972972972974;
            result[1] += 0.11351351351351352;
            result[2] += 0.010810810810810811;
            result[3] += 0.016216216216216217;
            result[4] += 0.6756756756756757;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0;
            result[1] += 0.86;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8661778185151238;
            result[1] += 0.016498625114573784;
            result[2] += 0.00458295142071494;
            result[3] += 0.02933088909257562;
            result[4] += 0.05591200733272227;
            result[5] += 0.027497708524289642;
          } else {
            result[0] += 0.23555555555555555;
            result[1] += 0;
            result[2] += 0.24222222222222223;
            result[3] += 0.2088888888888889;
            result[4] += 0.04888888888888889;
            result[5] += 0.2644444444444444;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04000000000000001;
            result[3] += 0.04000000000000001;
            result[4] += 0.8400000000000001;
            result[5] += 0.08000000000000002;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42900000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0967741935483871;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.8709677419354839;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13953488372093023;
            result[3] += 0.5348837209302325;
            result[4] += 0.023255813953488372;
            result[5] += 0.3023255813953488;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34375;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.21875;
          } else {
            result[0] += 0.06451612903225808;
            result[1] += 0;
            result[2] += 0.7903225806451614;
            result[3] += 0.14516129032258068;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.044444444444444446;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7538461538461538;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.015384615384615385;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7534246575342466;
            result[3] += 0.2465753424657534;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007142857142857143;
            result[1] += 0;
            result[2] += 0.9428571428571428;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9194630872483222;
            result[3] += 0.08053691275167785;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002403846153846154;
            result[1] += 0;
            result[2] += 0.9903846153846154;
            result[3] += 0.007211538461538462;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.044444444444444446;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.5777777777777777;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07936507936507936;
            result[4] += 0.5555555555555556;
            result[5] += 0.31746031746031744;
          } else {
            result[0] += 0.7553191489361702;
            result[1] += 0.06382978723404255;
            result[2] += 0;
            result[3] += 0.05319148936170213;
            result[4] += 0.1276595744680851;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013966480446927375;
            result[3] += 0.019553072625698324;
            result[4] += 0.019553072625698324;
            result[5] += 0.9594972067039106;
          } else {
            result[0] += 0.021238938053097345;
            result[1] += 0;
            result[2] += 0.01592920353982301;
            result[3] += 0.32212389380530976;
            result[4] += 0.05309734513274336;
            result[5] += 0.5876106194690266;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9936708860759493;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006329113924050633;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0.1527777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8194444444444444;
            result[5] += 0.013888888888888888;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.880847308031774;
            result[1] += 0.019417475728155338;
            result[2] += 0;
            result[3] += 0.02383053839364519;
            result[4] += 0.06619593998234775;
            result[5] += 0.009708737864077669;
          } else {
            result[0] += 0.3111111111111111;
            result[1] += 0.05555555555555555;
            result[2] += 0.07777777777777778;
            result[3] += 0.2;
            result[4] += 0.14444444444444443;
            result[5] += 0.2111111111111111;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0.08176100628930817;
            result[1] += 0.006289308176100629;
            result[2] += 0.4088050314465409;
            result[3] += 0.22641509433962265;
            result[4] += 0.13836477987421383;
            result[5] += 0.13836477987421383;
          } else {
            result[0] += 0.9523809523809523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.007692307692307693;
            result[1] += 0.023076923076923078;
            result[2] += 0.12307692307692308;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0.8;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5568181818181818;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.06818181818181818;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42980000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005420054200542005;
            result[1] += 0;
            result[2] += 0.9363143631436315;
            result[3] += 0.056910569105691054;
            result[4] += 0;
            result[5] += 0.0013550135501355014;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.22857142857142856;
            result[1] += 0;
            result[2] += 0.7714285714285715;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47619047619047616;
            result[5] += 0.5238095238095238;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0.043478260869565216;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02092050209205021;
            result[4] += 0.023709902370990237;
            result[5] += 0.9553695955369595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3229166666666667;
            result[4] += 0.052083333333333336;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01675977653631285;
            result[1] += 0.06424581005586592;
            result[2] += 0.0111731843575419;
            result[3] += 0.43854748603351956;
            result[4] += 0.0446927374301676;
            result[5] += 0.4245810055865922;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42200000))) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0.009615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9326923076923077;
            result[5] += 0.038461538461538464;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.017241379310344827;
            result[1] += 0.5517241379310345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43103448275862066;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9952380952380953;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004761904761904762;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.34057971014492755;
            result[1] += 0.036231884057971016;
            result[2] += 0.07971014492753623;
            result[3] += 0.21014492753623187;
            result[4] += 0.15217391304347827;
            result[5] += 0.18115942028985507;
          } else {
            result[0] += 0.883982683982684;
            result[1] += 0.015584415584415584;
            result[2] += 0.015584415584415584;
            result[3] += 0.017316017316017316;
            result[4] += 0.05974025974025974;
            result[5] += 0.007792207792207792;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.03076923076923077;
            result[1] += 0.006153846153846154;
            result[2] += 0.27076923076923076;
            result[3] += 0.3261538461538461;
            result[4] += 0.055384615384615386;
            result[5] += 0.31076923076923074;
          } else {
            result[0] += 0.7209302325581395;
            result[1] += 0;
            result[2] += 0.08139534883720931;
            result[3] += 0;
            result[4] += 0.19767441860465115;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
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
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a70000))) ) ) {
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a30000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.007936507936507936;
            result[1] += 0;
            result[2] += 0.828042328042328;
            result[3] += 0.1402116402116402;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0.7857142857142857;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7543859649122807;
            result[3] += 0.24561403508771928;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.995260663507109;
            result[3] += 0.004739336492890996;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0.004504504504504505;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.981981981981982;
            result[5] += 0.013513513513513516;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.34782608695652173;
            result[5] += 0.5217391304347826;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.7619047619047619;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.047619047619047616;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.0010351966873706005;
            result[1] += 0.006211180124223602;
            result[2] += 0.011387163561076604;
            result[3] += 0.07349896480331262;
            result[4] += 0.047619047619047616;
            result[5] += 0.860248447204969;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.8611111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05673758865248227;
            result[3] += 0.7730496453900709;
            result[4] += 0;
            result[5] += 0.1702127659574468;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.08737864077669903;
            result[1] += 0.28640776699029125;
            result[2] += 0.0048543689320388345;
            result[3] += 0.04854368932038835;
            result[4] += 0.5485436893203883;
            result[5] += 0.024271844660194174;
          } else {
            result[0] += 0.8827470686767169;
            result[1] += 0.006700167504187605;
            result[2] += 0.009212730318257957;
            result[3] += 0.02931323283082077;
            result[4] += 0.05611390284757119;
            result[5] += 0.015912897822445562;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.011583011583011582;
            result[1] += 0.007722007722007722;
            result[2] += 0.09266409266409266;
            result[3] += 0.5096525096525096;
            result[4] += 0.023166023166023165;
            result[5] += 0.3552123552123552;
          } else {
            result[0] += 0.2173913043478261;
            result[1] += 0;
            result[2] += 0.46521739130434786;
            result[3] += 0.10434782608695653;
            result[4] += 0.1347826086956522;
            result[5] += 0.07826086956521741;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0425531914893617;
            result[3] += 0.14893617021276595;
            result[4] += 0;
            result[5] += 0.8085106382978723;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.5;
          }
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0.01020408163265306;
            result[2] += 0.5408163265306123;
            result[3] += 0.2653061224489796;
            result[4] += 0.01020408163265306;
            result[5] += 0.15306122448979592;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7176470588235294;
            result[3] += 0.27058823529411763;
            result[4] += 0;
            result[5] += 0.011764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.926829268292683;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9237536656891495;
            result[3] += 0.07331378299120235;
            result[4] += 0;
            result[5] += 0.002932551319648094;
          } else {
            result[0] += 0.011594202898550725;
            result[1] += 0;
            result[2] += 0.9826086956521739;
            result[3] += 0.005797101449275362;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
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
            result[4] += 0.71875;
            result[5] += 0.28125;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0.11363636363636363;
            result[2] += 0;
            result[3] += 0.022727272727272728;
            result[4] += 0.09090909090909091;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0.008421052631578947;
            result[1] += 0.007368421052631579;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.05052631578947368;
            result[5] += 0.8936842105263157;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7533333333333333;
            result[4] += 0;
            result[5] += 0.24666666666666667;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.32142857142857145;
            result[4] += 0.011904761904761904;
            result[5] += 0.5476190476190477;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.0687830687830688;
            result[1] += 0.20634920634920637;
            result[2] += 0;
            result[3] += 0.005291005291005292;
            result[4] += 0.6666666666666667;
            result[5] += 0.052910052910052914;
          } else {
            result[0] += 0.8482142857142857;
            result[1] += 0.024350649350649352;
            result[2] += 0.012987012987012988;
            result[3] += 0.03165584415584415;
            result[4] += 0.06655844155844155;
            result[5] += 0.016233766233766232;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.010869565217391304;
            result[1] += 0.007246376811594203;
            result[2] += 0.09057971014492754;
            result[3] += 0.3804347826086957;
            result[4] += 0.12318840579710146;
            result[5] += 0.38768115942028986;
          } else {
            result[0] += 0.36627906976744184;
            result[1] += 0.011627906976744186;
            result[2] += 0.46511627906976744;
            result[3] += 0.005813953488372093;
            result[4] += 0.06976744186046512;
            result[5] += 0.08139534883720931;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42be0000))) ) ) {
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.6;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.9259259259259259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05405405405405406;
            result[3] += 0.8378378378378378;
            result[4] += 0;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.34615384615384615;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.926829268292683;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.13559322033898305;
            result[1] += 0.03389830508474576;
            result[2] += 0.7288135593220338;
            result[3] += 0.03389830508474576;
            result[4] += 0;
            result[5] += 0.06779661016949153;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.006734006734006734;
            result[1] += 0;
            result[2] += 0.8282828282828283;
            result[3] += 0.14814814814814814;
            result[4] += 0;
            result[5] += 0.016835016835016835;
          } else {
            result[0] += 0.002024291497975709;
            result[1] += 0;
            result[2] += 0.9635627530364373;
            result[3] += 0.03238866396761134;
            result[4] += 0;
            result[5] += 0.002024291497975709;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
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
            result[4] += 0.75;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2916666666666667;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.0967741935483871;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.8064516129032258;
            result[5] += 0.06451612903225806;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0.10204081632653061;
            result[4] += 0.6122448979591837;
            result[5] += 0.2653061224489796;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019817073170731708;
            result[4] += 0.010670731707317074;
            result[5] += 0.9695121951219512;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.7058823529411765;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.27450980392156865;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0;
            result[1] += 0.008281573498964804;
            result[2] += 0.020703933747412008;
            result[3] += 0.391304347826087;
            result[4] += 0.07039337474120083;
            result[5] += 0.5093167701863354;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9916666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.04411764705882353;
            result[1] += 0.07352941176470588;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8676470588235294;
            result[5] += 0.014705882352941176;
          } else {
            result[0] += 0;
            result[1] += 0.9705882352941176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8767693588676103;
            result[1] += 0.00749375520399667;
            result[2] += 0.009159034138218152;
            result[3] += 0.020815986677768527;
            result[4] += 0.07243963363863447;
            result[5] += 0.013322231473771857;
          } else {
            result[0] += 0.1786743515850144;
            result[1] += 0.01729106628242075;
            result[2] += 0.2276657060518732;
            result[3] += 0.28530259365994237;
            result[4] += 0.0345821325648415;
            result[5] += 0.2564841498559078;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.5833333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0.2903225806451613;
            result[4] += 0.03225806451612903;
            result[5] += 0.6451612903225806;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
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
            result[3] += 0.9666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0.7916666666666666;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.7;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.03333333333333333;
            result[2] += 0.06666666666666667;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5555555555555556;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0.782258064516129;
            result[3] += 0.18548387096774194;
            result[4] += 0;
            result[5] += 0.016129032258064516;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.00847457627118644;
            result[1] += 0;
            result[2] += 0.847457627118644;
            result[3] += 0.1440677966101695;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9910514541387024;
            result[3] += 0.006711409395973154;
            result[4] += 0;
            result[5] += 0.0022371364653243847;
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
