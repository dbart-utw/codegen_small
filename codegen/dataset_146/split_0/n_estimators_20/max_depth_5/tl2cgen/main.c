
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.032407407407407406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9305555555555556;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016666666666666666;
            result[4] += 0.36666666666666664;
            result[5] += 0.6166666666666667;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54) ) ) {
            result[0] += 0.8356164383561644;
            result[1] += 0.0410958904109589;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1232876712328767;
            result[5] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.6857142857142857;
            result[5] += 0.014285714285714285;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9375;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.0014124293785310734;
            result[2] += 0;
            result[3] += 0.04096045197740113;
            result[4] += 0.031073446327683617;
            result[5] += 0.9265536723163842;
          } else {
            result[0] += 0.004201680672268907;
            result[1] += 0.008403361344537815;
            result[2] += 0;
            result[3] += 0.19747899159663865;
            result[4] += 0.17647058823529413;
            result[5] += 0.6134453781512605;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0.9629629629629629;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)62) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.022222222222222223;
            result[4] += 0.044444444444444446;
            result[5] += 0;
          } else {
            result[0] += 0.05191256830601093;
            result[1] += 0;
            result[2] += 0.060109289617486336;
            result[3] += 0.47540983606557374;
            result[4] += 0.07377049180327869;
            result[5] += 0.33879781420765026;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8599640933572711;
            result[1] += 0.03680430879712747;
            result[2] += 0.003590664272890485;
            result[3] += 0.02064631956912029;
            result[4] += 0.07360861759425494;
            result[5] += 0.005385996409335727;
          } else {
            result[0] += 0.1943127962085308;
            result[1] += 0.09004739336492891;
            result[2] += 0.16113744075829384;
            result[3] += 0.21800947867298578;
            result[4] += 0.10900473933649289;
            result[5] += 0.22748815165876776;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15126050420168066;
            result[3] += 0.5882352941176471;
            result[4] += 0;
            result[5] += 0.2605042016806723;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6694915254237288;
            result[3] += 0.211864406779661;
            result[4] += 0;
            result[5] += 0.11864406779661017;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.6111111111111112;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.5294117647058824;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.29411764705882354;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.02336448598130841;
            result[1] += 0;
            result[2] += 0.8457943925233645;
            result[3] += 0.11214953271028037;
            result[4] += 0;
            result[5] += 0.018691588785046728;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.022222222222222223;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001579778830963665;
            result[1] += 0;
            result[2] += 0.9747235387045814;
            result[3] += 0.023696682464454975;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9532710280373832;
            result[5] += 0.04672897196261682;
          } else {
            result[0] += 0.28205128205128205;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01282051282051282;
            result[4] += 0.3974358974358974;
            result[5] += 0.3076923076923077;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.5625;
            result[5] += 0;
          } else {
            result[0] += 0.8831168831168831;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1038961038961039;
            result[5] += 0.012987012987012988;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.11428571428571428;
            result[4] += 0.6;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.002107481559536354;
            result[1] += 0.004214963119072708;
            result[2] += 0.003161222339304531;
            result[3] += 0.05584826132771338;
            result[4] += 0.0368809272918862;
            result[5] += 0.8977871443624869;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0.018867924528301886;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.24528301886792453;
            result[4] += 0;
            result[5] += 0.7169811320754716;
          } else {
            result[0] += 0.01;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.785;
            result[4] += 0;
            result[5] += 0.205;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
            result[0] += 0.08163265306122448;
            result[1] += 0.1292517006802721;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.7687074829931972;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8478260869565217;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06521739130434782;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8838383838383839;
            result[1] += 0.011784511784511785;
            result[2] += 0.010101010101010102;
            result[3] += 0.018518518518518517;
            result[4] += 0.04713804713804714;
            result[5] += 0.02861952861952862;
          } else {
            result[0] += 0.15576323987538943;
            result[1] += 0.009345794392523366;
            result[2] += 0.36760124610591904;
            result[3] += 0.2710280373831776;
            result[4] += 0.06230529595015577;
            result[5] += 0.1339563862928349;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10416666666666667;
            result[4] += 0.0625;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.5714285714285715;
            result[2] += 0.14285714285714288;
            result[3] += 0;
            result[4] += 0.28571428571428575;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.5789473684210527;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28125;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.09375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.017699115044247787;
            result[1] += 0;
            result[2] += 0.8539823008849557;
            result[3] += 0.12389380530973451;
            result[4] += 0;
            result[5] += 0.004424778761061947;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0.03125000000000001;
            result[1] += 0;
            result[2] += 0.8541666666666667;
            result[3] += 0.10416666666666669;
            result[4] += 0;
            result[5] += 0.010416666666666668;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9842829076620825;
            result[3] += 0.0137524557956778;
            result[4] += 0;
            result[5] += 0.0019646365422396855;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9748743718592965;
            result[5] += 0.020100502512562814;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
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
            result[3] += 0.034328358208955224;
            result[4] += 0.008955223880597015;
            result[5] += 0.9567164179104478;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8518518518518519;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.007029876977152899;
            result[1] += 0.02460456942003515;
            result[2] += 0.04745166959578207;
            result[3] += 0.24428822495606328;
            result[4] += 0.070298769771529;
            result[5] += 0.6063268892794376;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.03669724770642202;
            result[1] += 0.05504587155963303;
            result[2] += 0.009174311926605505;
            result[3] += 0.06422018348623854;
            result[4] += 0.7889908256880734;
            result[5] += 0.045871559633027525;
          } else {
            result[0] += 0;
            result[1] += 0.8850574712643678;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.08045977011494253;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8551779935275081;
            result[1] += 0.015372168284789644;
            result[2] += 0.0024271844660194173;
            result[3] += 0.024271844660194174;
            result[4] += 0.08576051779935275;
            result[5] += 0.01699029126213592;
          } else {
            result[0] += 0.31950207468879666;
            result[1] += 0.012448132780082987;
            result[2] += 0.15767634854771784;
            result[3] += 0.2572614107883817;
            result[4] += 0.07883817427385892;
            result[5] += 0.17427385892116182;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)103.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
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
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05952380952380952;
            result[3] += 0.7619047619047619;
            result[4] += 0;
            result[5] += 0.17857142857142858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0.17647058823529413;
            result[4] += 0.058823529411764705;
            result[5] += 0.29411764705882354;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0.26;
            result[3] += 0.48;
            result[4] += 0;
            result[5] += 0.18;
          } else {
            result[0] += 0.04444444444444445;
            result[1] += 0.022222222222222227;
            result[2] += 0.7333333333333334;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.0888888888888889;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7407407407407408;
            result[3] += 0.21759259259259262;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)111.5) ) ) {
            result[0] += 0.1836734693877551;
            result[1] += 0.02040816326530612;
            result[2] += 0.6122448979591837;
            result[3] += 0.02040816326530612;
            result[4] += 0.12244897959183673;
            result[5] += 0.04081632653061224;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005934718100890208;
            result[1] += 0;
            result[2] += 0.9643916913946587;
            result[3] += 0.026706231454005934;
            result[4] += 0;
            result[5] += 0.002967359050445104;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)120) ) ) {
            result[0] += 0.0042194092827004225;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9746835443037976;
            result[5] += 0.021097046413502112;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)53) ) ) {
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
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0.8387096774193549;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06451612903225806;
            result[5] += 0.0967741935483871;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0.21212121212121213;
            result[4] += 0.45454545454545453;
            result[5] += 0.24242424242424243;
          } else {
            result[0] += 0.003355704697986577;
            result[1] += 0.003355704697986577;
            result[2] += 0.003355704697986577;
            result[3] += 0.053691275167785234;
            result[4] += 0.030201342281879196;
            result[5] += 0.9060402684563759;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
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
            result[3] += 0.11290322580645161;
            result[4] += 0;
            result[5] += 0.8870967741935484;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.005747126436781609;
            result[1] += 0.011494252873563218;
            result[2] += 0.011494252873563218;
            result[3] += 0.8103448275862069;
            result[4] += 0;
            result[5] += 0.16091954022988506;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.9978165938864629;
            result[2] += 0;
            result[3] += 0.002183406113537118;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0.10389610389610392;
            result[1] += 0.08441558441558443;
            result[2] += 0;
            result[3] += 0.006493506493506495;
            result[4] += 0.7987012987012988;
            result[5] += 0.006493506493506495;
          } else {
            result[0] += 0.01694915254237288;
            result[1] += 0.6949152542372882;
            result[2] += 0.01694915254237288;
            result[3] += 0.01694915254237288;
            result[4] += 0.1864406779661017;
            result[5] += 0.06779661016949153;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9084249084249084;
            result[1] += 0.009157509157509158;
            result[2] += 0;
            result[3] += 0.015567765567765568;
            result[4] += 0.046703296703296704;
            result[5] += 0.020146520146520148;
          } else {
            result[0] += 0.332089552238806;
            result[1] += 0.014925373134328358;
            result[2] += 0.13432835820895522;
            result[3] += 0.23880597014925373;
            result[4] += 0.048507462686567165;
            result[5] += 0.23134328358208955;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)72.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.21568627450980393;
            result[2] += 0.29411764705882354;
            result[3] += 0.0196078431372549;
            result[4] += 0.13725490196078433;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0.0045045045045045045;
            result[1] += 0;
            result[2] += 0.22972972972972974;
            result[3] += 0.5495495495495496;
            result[4] += 0.009009009009009009;
            result[5] += 0.2072072072072072;
          } else {
            result[0] += 0.19148936170212766;
            result[1] += 0;
            result[2] += 0.6808510638297872;
            result[3] += 0.02127659574468085;
            result[4] += 0.02127659574468085;
            result[5] += 0.0851063829787234;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)114) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0.7777777777777778;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4642857142857143;
            result[3] += 0.35714285714285715;
            result[4] += 0.03571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.011668611435239206;
            result[1] += 0;
            result[2] += 0.9194865810968494;
            result[3] += 0.06651108518086347;
            result[4] += 0;
            result[5] += 0.002333722287047841;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024630541871921183;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
            result[0] += 0.05214723926380368;
            result[1] += 0.012269938650306749;
            result[2] += 0;
            result[3] += 0.012269938650306749;
            result[4] += 0.8220858895705522;
            result[5] += 0.10122699386503067;
          } else {
            result[0] += 0.06382978723404256;
            result[1] += 0.7446808510638299;
            result[2] += 0;
            result[3] += 0.04255319148936171;
            result[4] += 0.10638297872340427;
            result[5] += 0.04255319148936171;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8260869565217391;
            result[5] += 0;
          } else {
            result[0] += 0.9437340153452686;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02557544757033248;
            result[5] += 0.030690537084398978;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12280701754385964;
            result[3] += 0;
            result[4] += 0.40350877192982454;
            result[5] += 0.47368421052631576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004366812227074236;
            result[3] += 0.03202328966521106;
            result[4] += 0.027656477438136828;
            result[5] += 0.9359534206695779;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0.04804045512010114;
            result[1] += 0.02781289506953224;
            result[2] += 0.029077117572692796;
            result[3] += 0.4222503160556258;
            result[4] += 0.0986093552465234;
            result[5] += 0.37420986093552466;
          } else {
            result[0] += 0.3985239852398524;
            result[1] += 0.11808118081180811;
            result[2] += 0.12546125461254612;
            result[3] += 0.07749077490774908;
            result[4] += 0.1881918819188192;
            result[5] += 0.09225092250922509;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71) ) ) {
            result[0] += 0.9791666666666666;
            result[1] += 0;
            result[2] += 0.020833333333333332;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.6181818181818182;
            result[3] += 0.2;
            result[4] += 0.05454545454545454;
            result[5] += 0.10909090909090909;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.22727272727272727;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
            result[0] += 0.0071174377224199285;
            result[1] += 0;
            result[2] += 0.8873072360616845;
            result[3] += 0.09489916963226572;
            result[4] += 0;
            result[5] += 0.010676156583629894;
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9976415094339622;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023584905660377358;
            result[5] += 0;
          } else {
            result[0] += 0.5238095238095238;
            result[1] += 0;
            result[2] += 0.47619047619047616;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109) ) ) {
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
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9891891891891892;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.010810810810810811;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.2727272727272727;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)64.5) ) ) {
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
            result[4] += 0.3188405797101449;
            result[5] += 0.6811594202898551;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0046801872074883;
            result[4] += 0.0187207488299532;
            result[5] += 0.9765990639625585;
          } else {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.017543859649122806;
            result[3] += 0.14035087719298245;
            result[4] += 0.11842105263157894;
            result[5] += 0.6710526315789473;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.2159090909090909;
            result[4] += 0.022727272727272728;
            result[5] += 0.6704545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04672897196261682;
            result[3] += 0.5607476635514018;
            result[4] += 0;
            result[5] += 0.3925233644859813;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014814814814814815;
            result[3] += 0.8296296296296296;
            result[4] += 0;
            result[5] += 0.15555555555555556;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
            result[0] += 0.6927083333333334;
            result[1] += 0.026041666666666668;
            result[2] += 0;
            result[3] += 0.015625;
            result[4] += 0.24479166666666666;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0.018779342723004695;
            result[1] += 0.014084507042253521;
            result[2] += 0.03286384976525822;
            result[3] += 0.29577464788732394;
            result[4] += 0.15492957746478872;
            result[5] += 0.4835680751173709;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
            result[0] += 0.08609271523178809;
            result[1] += 0.4635761589403974;
            result[2] += 0;
            result[3] += 0.03973509933774835;
            result[4] += 0.3907284768211921;
            result[5] += 0.019867549668874177;
          } else {
            result[0] += 0.8776091081593927;
            result[1] += 0.018026565464895637;
            result[2] += 0.013282732447817837;
            result[3] += 0.010436432637571158;
            result[4] += 0.06641366223908918;
            result[5] += 0.014231499051233396;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404256;
            result[3] += 0.8085106382978724;
            result[4] += 0;
            result[5] += 0.12765957446808512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.4489795918367347;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7090909090909091;
            result[3] += 0.23636363636363636;
            result[4] += 0;
            result[5] += 0.05454545454545454;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0.5092592592592593;
            result[3] += 0.12962962962962962;
            result[4] += 0.07407407407407407;
            result[5] += 0.06481481481481481;
          } else {
            result[0] += 0.008982035928143712;
            result[1] += 0;
            result[2] += 0.7994011976047904;
            result[3] += 0.1467065868263473;
            result[4] += 0;
            result[5] += 0.04491017964071856;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.912568306010929;
            result[3] += 0.08743169398907104;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9976525821596244;
            result[3] += 0.002347417840375587;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00854700854700855;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.982905982905983;
            result[5] += 0.00854700854700855;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0.041666666666666664;
            result[3] += 0.041666666666666664;
            result[4] += 0.3333333333333333;
            result[5] += 0.5416666666666666;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.023255813953488372;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6046511627906976;
            result[5] += 0.37209302325581395;
          } else {
            result[0] += 0.0013966480446927375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02094972067039106;
            result[4] += 0.015363128491620111;
            result[5] += 0.9622905027932961;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7755102040816326;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0;
            result[4] += 0.1836734693877551;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004424778761061947;
            result[2] += 0.00663716814159292;
            result[3] += 0.36504424778761063;
            result[4] += 0.0752212389380531;
            result[5] += 0.5486725663716814;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)51) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7741935483870968;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22580645161290322;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1;
            result[1] += 0.30714285714285716;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5785714285714286;
            result[5] += 0.014285714285714285;
          } else {
            result[0] += 0.863013698630137;
            result[1] += 0.0059931506849315065;
            result[2] += 0.003424657534246575;
            result[3] += 0.014554794520547944;
            result[4] += 0.09417808219178082;
            result[5] += 0.018835616438356163;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0.043814432989690726;
            result[1] += 0.04123711340206186;
            result[2] += 0.32731958762886604;
            result[3] += 0.3041237113402062;
            result[4] += 0.038659793814433;
            result[5] += 0.2448453608247423;
          } else {
            result[0] += 0.8701298701298701;
            result[1] += 0;
            result[2] += 0.025974025974025976;
            result[3] += 0;
            result[4] += 0.1038961038961039;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.8235294117647058;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.3076923076923077;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.2592592592592593;
            result[1] += 0;
            result[2] += 0.2592592592592593;
            result[3] += 0.07407407407407408;
            result[4] += 0.03703703703703704;
            result[5] += 0.3703703703703704;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)121) ) ) {
            result[0] += 0.01507537688442211;
            result[1] += 0;
            result[2] += 0.7587939698492462;
            result[3] += 0.21608040201005024;
            result[4] += 0;
            result[5] += 0.010050251256281407;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8811188811188811;
            result[3] += 0.1048951048951049;
            result[4] += 0;
            result[5] += 0.013986013986013986;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9823874755381604;
            result[3] += 0.01761252446183953;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3076923076923077;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.008733624454148471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.982532751091703;
            result[5] += 0.008733624454148471;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
            result[0] += 0.86;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14;
            result[5] += 0;
          } else {
            result[0] += 0.0125;
            result[1] += 0.0875;
            result[2] += 0.0125;
            result[3] += 0;
            result[4] += 0.425;
            result[5] += 0.4625;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.004366812227074236;
            result[1] += 0;
            result[2] += 0.001091703056768559;
            result[3] += 0.07641921397379912;
            result[4] += 0.04475982532751092;
            result[5] += 0.8733624454148472;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
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
            result[3] += 0.8315789473684211;
            result[4] += 0.010526315789473684;
            result[5] += 0.15789473684210525;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.38461538461538464;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0.07692307692307693;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.7745664739884393;
            result[1] += 0.03468208092485549;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18497109826589594;
            result[5] += 0.005780346820809248;
          } else {
            result[0] += 0.04143646408839779;
            result[1] += 0.03867403314917127;
            result[2] += 0.1685082872928177;
            result[3] += 0.24585635359116023;
            result[4] += 0.13812154696132597;
            result[5] += 0.3674033149171271;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
            result[0] += 0.010752688172043012;
            result[1] += 0.5053763440860215;
            result[2] += 0;
            result[3] += 0.043010752688172046;
            result[4] += 0.44086021505376344;
            result[5] += 0;
          } else {
            result[0] += 0.8744313011828936;
            result[1] += 0.00272975432211101;
            result[2] += 0.03275705186533212;
            result[3] += 0.025477707006369428;
            result[4] += 0.0545950864422202;
            result[5] += 0.010009099181073703;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.11627906976744186;
            result[4] += 0.16279069767441862;
            result[5] += 0.6744186046511628;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.026785714285714284;
            result[1] += 0;
            result[2] += 0.08035714285714286;
            result[3] += 0.6607142857142857;
            result[4] += 0;
            result[5] += 0.23214285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.7647058823529411;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0.05405405405405406;
            result[1] += 0.05405405405405406;
            result[2] += 0.21621621621621623;
            result[3] += 0.4594594594594595;
            result[4] += 0.13513513513513514;
            result[5] += 0.08108108108108109;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.15384615384615385;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
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
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.9523809523809523;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.375;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.052631578947368425;
            result[1] += 0;
            result[2] += 0.8421052631578948;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.8125;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.625;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0035294117647058825;
            result[1] += 0;
            result[2] += 0.9188235294117647;
            result[3] += 0.07529411764705882;
            result[4] += 0;
            result[5] += 0.002352941176470588;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.011695906432748537;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9883040935672515;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8260869565217391;
            result[5] += 0.17391304347826086;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
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
            result[4] += 0.09090909090909091;
            result[5] += 0.9090909090909091;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023391812865497075;
            result[4] += 0.01608187134502924;
            result[5] += 0.9605263157894737;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.26153846153846155;
            result[2] += 0;
            result[3] += 0.12307692307692308;
            result[4] += 0.5076923076923077;
            result[5] += 0.1076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0.00546448087431694;
            result[2] += 0.01366120218579235;
            result[3] += 0.39617486338797814;
            result[4] += 0.03551912568306011;
            result[5] += 0.5491803278688525;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0.07042253521126761;
            result[1] += 0.24647887323943662;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6408450704225352;
            result[5] += 0.04225352112676056;
          } else {
            result[0] += 0.866348448687351;
            result[1] += 0.009546539379474943;
            result[2] += 0.003182179793158314;
            result[3] += 0.03023070803500398;
            result[4] += 0.06841686555290376;
            result[5] += 0.0222752585521082;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02834008097165992;
            result[1] += 0.020242914979757085;
            result[2] += 0.04048582995951417;
            result[3] += 0.3076923076923077;
            result[4] += 0.1700404858299595;
            result[5] += 0.4331983805668016;
          } else {
            result[0] += 0.4736842105263158;
            result[1] += 0;
            result[2] += 0.4315789473684211;
            result[3] += 0.09473684210526317;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0.0273972602739726;
            result[2] += 0;
            result[3] += 0.1917808219178082;
            result[4] += 0.0273972602739726;
            result[5] += 0.7534246575342466;
          } else {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0.5000000000000001;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08974358974358974;
            result[3] += 0.8076923076923077;
            result[4] += 0;
            result[5] += 0.10256410256410256;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.2692307692307692;
            result[4] += 0.038461538461538464;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0.18421052631578946;
            result[4] += 0.05263157894736842;
            result[5] += 0.2894736842105263;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5263157894736842;
            result[3] += 0.21052631578947367;
            result[4] += 0;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
            result[0] += 0.008620689655172415;
            result[1] += 0;
            result[2] += 0.8017241379310346;
            result[3] += 0.12931034482758624;
            result[4] += 0;
            result[5] += 0.060344827586206906;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
            result[0] += 0.020618556701030927;
            result[1] += 0;
            result[2] += 0.8075601374570447;
            result[3] += 0.14432989690721648;
            result[4] += 0.003436426116838488;
            result[5] += 0.024054982817869417;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            result[0] += 0.33333333333333337;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9886363636363636;
            result[3] += 0.011363636363636364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.30434782608695654;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5217391304347826;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06451612903225806;
            result[5] += 0.9354838709677419;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98.5) ) ) {
            result[0] += 0.02173913043478261;
            result[1] += 0.06521739130434784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.891304347826087;
            result[5] += 0.02173913043478261;
          } else {
            result[0] += 0;
            result[1] += 0.95;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0;
          } else {
            result[0] += 0.9497716894977168;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0502283105022831;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026143790849673203;
            result[4] += 0.032679738562091505;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.3333333333333333;
            result[4] += 0.11594202898550725;
            result[5] += 0.5072463768115942;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.15942028985507245;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.6086956521739131;
            result[5] += 0.057971014492753624;
          } else {
            result[0] += 0.3220338983050847;
            result[1] += 0.11864406779661017;
            result[2] += 0;
            result[3] += 0.23728813559322035;
            result[4] += 0.0847457627118644;
            result[5] += 0.23728813559322035;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
            result[0] += 0.005154639175257732;
            result[1] += 0;
            result[2] += 0.005154639175257732;
            result[3] += 0.23711340206185566;
            result[4] += 0.08247422680412371;
            result[5] += 0.6701030927835051;
          } else {
            result[0] += 0.02413793103448276;
            result[1] += 0.03103448275862069;
            result[2] += 0.041379310344827586;
            result[3] += 0.5448275862068965;
            result[4] += 0.020689655172413793;
            result[5] += 0.33793103448275863;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
            result[0] += 0.018867924528301886;
            result[1] += 0.9622641509433962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.018867924528301886;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.5909090909090909;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.13636363636363635;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.941240478781284;
            result[1] += 0.004352557127312296;
            result[2] += 0.003264417845484222;
            result[3] += 0.01632208922742111;
            result[4] += 0.025027203482045703;
            result[5] += 0.009793253536452665;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.41975308641975306;
            result[3] += 0.32098765432098764;
            result[4] += 0.04938271604938271;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0.6976744186046512;
            result[1] += 0;
            result[2] += 0.06976744186046512;
            result[3] += 0;
            result[4] += 0.23255813953488372;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.6111111111111112;
            result[2] += 0.2222222222222222;
            result[3] += 0.05555555555555555;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.045871559633027525;
            result[1] += 0;
            result[2] += 0.1651376146788991;
            result[3] += 0.3394495412844037;
            result[4] += 0.03669724770642202;
            result[5] += 0.41284403669724773;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
            result[0] += 0.04166666666666667;
            result[1] += 0;
            result[2] += 0.7638888888888891;
            result[3] += 0.013888888888888892;
            result[4] += 0.06944444444444446;
            result[5] += 0.11111111111111113;
          } else {
            result[0] += 0.6842105263157895;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.6071428571428571;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6060606060606061;
            result[3] += 0.3484848484848485;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0.009259259259259259;
            result[1] += 0;
            result[2] += 0.9305555555555556;
            result[3] += 0.059027777777777776;
            result[4] += 0;
            result[5] += 0.0011574074074074073;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
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
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.004132231404958678;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9504132231404959;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.7894736842105263;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0;
            result[1] += 0.003003003003003003;
            result[2] += 0.0045045045045045045;
            result[3] += 0.018018018018018018;
            result[4] += 0.03453453453453453;
            result[5] += 0.93993993993994;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0.08372093023255814;
            result[1] += 0;
            result[2] += 0.004651162790697674;
            result[3] += 0.06511627906976744;
            result[4] += 0.17674418604651163;
            result[5] += 0.6697674418604651;
          } else {
            result[0] += 0.10933333333333334;
            result[1] += 0.024;
            result[2] += 0.056;
            result[3] += 0.4666666666666667;
            result[4] += 0.048;
            result[5] += 0.296;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
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
            result[3] += 0.3333333333333333;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.06779661016949154;
            result[1] += 0.29378531073446335;
            result[2] += 0;
            result[3] += 0.016949152542372885;
            result[4] += 0.5932203389830509;
            result[5] += 0.028248587570621472;
          } else {
            result[0] += 0.8759493670886076;
            result[1] += 0.005063291139240506;
            result[2] += 0.002531645569620253;
            result[3] += 0.020253164556962026;
            result[4] += 0.05822784810126582;
            result[5] += 0.0379746835443038;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0.013824884792626729;
            result[1] += 0.018433179723502304;
            result[2] += 0.03686635944700461;
            result[3] += 0.271889400921659;
            result[4] += 0.03686635944700461;
            result[5] += 0.6221198156682027;
          } else {
            result[0] += 0.18571428571428572;
            result[1] += 0;
            result[2] += 0.34285714285714286;
            result[3] += 0.28095238095238095;
            result[4] += 0.08095238095238096;
            result[5] += 0.10952380952380952;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04761904761904762;
            result[3] += 0.8571428571428572;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.36363636363636365;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98) ) ) {
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
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)123.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7924528301886793;
            result[3] += 0.20754716981132076;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.3375;
            result[4] += 0;
            result[5] += 0.0375;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9073170731707317;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0.01951219512195122;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9672131147540983;
            result[3] += 0.03278688524590164;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0.16049382716049382;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.008146639511201629;
            result[1] += 0;
            result[2] += 0.9755600814663951;
            result[3] += 0.016293279022403257;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)33) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0.01020408163265306;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9897959183673469;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.71875;
            result[5] += 0.21875;
          } else {
            result[0] += 0.02312925170068027;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021768707482993196;
            result[4] += 0.02312925170068027;
            result[5] += 0.9319727891156463;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.07604562737642585;
            result[1] += 0.057034220532319393;
            result[2] += 0;
            result[3] += 0.13688212927756654;
            result[4] += 0.07224334600760456;
            result[5] += 0.6577946768060836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018691588785046728;
            result[3] += 0.6588785046728972;
            result[4] += 0.014018691588785047;
            result[5] += 0.308411214953271;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.08745247148288973;
            result[1] += 0.2585551330798479;
            result[2] += 0.011406844106463879;
            result[3] += 0.0038022813688212928;
            result[4] += 0.5741444866920152;
            result[5] += 0.06463878326996197;
          } else {
            result[0] += 0.8288444830582102;
            result[1] += 0.011294526498696786;
            result[2] += 0.0017376194613379669;
            result[3] += 0.03127715030408341;
            result[4] += 0.08514335360556038;
            result[5] += 0.04170286707211121;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.023952095808383235;
            result[1] += 0.008982035928143712;
            result[2] += 0.15868263473053892;
            result[3] += 0.46107784431137727;
            result[4] += 0.03293413173652695;
            result[5] += 0.3143712574850299;
          } else {
            result[0] += 0.42424242424242425;
            result[1] += 0;
            result[2] += 0.46060606060606063;
            result[3] += 0.07272727272727272;
            result[4] += 0.006060606060606061;
            result[5] += 0.03636363636363636;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.9902439024390244;
            result[2] += 0;
            result[3] += 0.004878048780487805;
            result[4] += 0.004878048780487805;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)54.5) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.6346153846153846;
            result[4] += 0.057692307692307696;
            result[5] += 0.2692307692307692;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5294117647058824;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0.30434782608695654;
            result[4] += 0;
            result[5] += 0.043478260869565216;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014285714285714287;
            result[1] += 0;
            result[2] += 0.6285714285714287;
            result[3] += 0.3428571428571429;
            result[4] += 0;
            result[5] += 0.014285714285714287;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)96.5) ) ) {
            result[0] += 0.013333333333333336;
            result[1] += 0;
            result[2] += 0.9066666666666667;
            result[3] += 0.06666666666666668;
            result[4] += 0;
            result[5] += 0.013333333333333336;
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6086956521739131;
            result[3] += 0.30434782608695654;
            result[4] += 0;
            result[5] += 0.08695652173913043;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9543509272467903;
            result[3] += 0.04136947218259629;
            result[4] += 0;
            result[5] += 0.0042796005706134095;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            result[0] += 0.008928571428571428;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9851190476190477;
            result[5] += 0.005952380952380952;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0.1896551724137931;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6896551724137931;
            result[5] += 0.08620689655172414;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            result[0] += 0.5161290322580645;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45161290322580644;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.026923076923076925;
            result[5] += 0.9397435897435897;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008982035928143712;
            result[1] += 0.008982035928143712;
            result[2] += 0.041916167664670656;
            result[3] += 0.47604790419161674;
            result[4] += 0.059880239520958084;
            result[5] += 0.4041916167664671;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.5413533834586466;
            result[1] += 0.06766917293233082;
            result[2] += 0.005012531328320802;
            result[3] += 0.09523809523809523;
            result[4] += 0.18045112781954886;
            result[5] += 0.11027568922305764;
          } else {
            result[0] += 0.9159953970080553;
            result[1] += 0.010356731875719219;
            result[2] += 0.0069044879171461454;
            result[3] += 0.017261219792865365;
            result[4] += 0.03682393555811278;
            result[5] += 0.012658227848101267;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
            result[0] += 0.01680672268907563;
            result[1] += 0.02100840336134454;
            result[2] += 0.15546218487394958;
            result[3] += 0.29411764705882354;
            result[4] += 0.12184873949579832;
            result[5] += 0.3907563025210084;
          } else {
            result[0] += 0.8387096774193549;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.12903225806451613;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05434782608695652;
            result[3] += 0.7717391304347826;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4814814814814815;
            result[3] += 0.29629629629629634;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0.8793103448275862;
            result[3] += 0.08620689655172414;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.5;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.009216589861751152;
            result[1] += 0;
            result[2] += 0.8433179723502304;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.018433179723502304;
          } else {
            result[0] += 0.014084507042253523;
            result[1] += 0;
            result[2] += 0.947887323943662;
            result[3] += 0.03521126760563381;
            result[4] += 0;
            result[5] += 0.002816901408450705;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004081632653061225;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9714285714285714;
            result[5] += 0.024489795918367346;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8974358974358975;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0.7105263157894737;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0.004197271773347324;
            result[1] += 0.001049317943336831;
            result[2] += 0.0031479538300104933;
            result[3] += 0.05036726128016789;
            result[4] += 0.0472193074501574;
            result[5] += 0.8940188877229801;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022988505747126436;
            result[3] += 0.12643678160919541;
            result[4] += 0;
            result[5] += 0.8505747126436781;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.8709677419354839;
          } else {
            result[0] += 0;
            result[1] += 0.015384615384615385;
            result[2] += 0.015384615384615385;
            result[3] += 0.7487179487179487;
            result[4] += 0.005128205128205128;
            result[5] += 0.2153846153846154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
            result[0] += 0.024691358024691357;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0.012345679012345678;
            result[4] += 0.8271604938271605;
            result[5] += 0.06172839506172839;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01639344262295082;
            result[1] += 0.6229508196721312;
            result[2] += 0;
            result[3] += 0.06557377049180328;
            result[4] += 0.29508196721311475;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8856152512998267;
            result[1] += 0.021663778162911613;
            result[2] += 0.0008665511265164644;
            result[3] += 0.016464471403812825;
            result[4] += 0.0684575389948007;
            result[5] += 0.006932409012131715;
          } else {
            result[0] += 0.29545454545454547;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.1590909090909091;
            result[4] += 0.32954545454545453;
            result[5] += 0.07954545454545454;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
            result[0] += 0.011363636363636364;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.5227272727272727;
            result[4] += 0.022727272727272728;
            result[5] += 0.3522727272727273;
          } else {
            result[0] += 0.6046511627906976;
            result[1] += 0.023255813953488372;
            result[2] += 0.13953488372093023;
            result[3] += 0.11627906976744186;
            result[4] += 0.06976744186046512;
            result[5] += 0.046511627906976744;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0.03125;
            result[3] += 0.0625;
            result[4] += 0.15625;
            result[5] += 0.71875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19310344827586207;
            result[3] += 0.5655172413793104;
            result[4] += 0;
            result[5] += 0.2413793103448276;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.625;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
            result[0] += 0.08108108108108109;
            result[1] += 0.06756756756756757;
            result[2] += 0.5540540540540541;
            result[3] += 0.06756756756756757;
            result[4] += 0.04054054054054054;
            result[5] += 0.1891891891891892;
          } else {
            result[0] += 0.5333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
            result[0] += 0.00804289544235925;
            result[1] += 0;
            result[2] += 0.7882037533512064;
            result[3] += 0.16353887399463807;
            result[4] += 0.010723860589812333;
            result[5] += 0.029490616621983913;
          } else {
            result[0] += 0.008665511265164644;
            result[1] += 0;
            result[2] += 0.9566724436741768;
            result[3] += 0.03466204506065858;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.004464285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9866071428571429;
            result[5] += 0.008928571428571428;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5151515151515151;
            result[5] += 0.48484848484848486;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014084507042253521;
            result[4] += 0.007042253521126761;
            result[5] += 0.9788732394366197;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17256637168141592;
            result[4] += 0.10619469026548672;
            result[5] += 0.7212389380530974;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.007874015748031496;
            result[1] += 0.049868766404199474;
            result[2] += 0.03937007874015748;
            result[3] += 0.3648293963254593;
            result[4] += 0.05774278215223097;
            result[5] += 0.48031496062992124;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
            result[0] += 0.008;
            result[1] += 0.064;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.904;
            result[5] += 0.024;
          } else {
            result[0] += 0;
            result[1] += 0.9130434782608695;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.9950738916256158;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0049261083743842365;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0.015384615384615385;
            result[1] += 0.3230769230769231;
            result[2] += 0;
            result[3] += 0.18461538461538463;
            result[4] += 0.4461538461538462;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0.9007901668129938;
            result[1] += 0.0026338893766461808;
            result[2] += 0.004389815627743635;
            result[3] += 0.021949078138718173;
            result[4] += 0.056189640035118525;
            result[5] += 0.014047410008779631;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2606060606060606;
            result[3] += 0.3515151515151515;
            result[4] += 0.048484848484848485;
            result[5] += 0.3393939393939394;
          } else {
            result[0] += 0.6025641025641025;
            result[1] += 0;
            result[2] += 0.1282051282051282;
            result[3] += 0.05128205128205128;
            result[4] += 0.19230769230769232;
            result[5] += 0.02564102564102564;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.0625;
            result[4] += 0.5625;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6857142857142857;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012500000000000002;
            result[3] += 0.8875000000000001;
            result[4] += 0.012500000000000002;
            result[5] += 0.08750000000000001;
          } else {
            result[0] += 0.036036036036036036;
            result[1] += 0.11711711711711711;
            result[2] += 0.26126126126126126;
            result[3] += 0.3783783783783784;
            result[4] += 0.05405405405405406;
            result[5] += 0.15315315315315314;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
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
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0.5581395348837209;
            result[3] += 0.2558139534883721;
            result[4] += 0;
            result[5] += 0.16279069767441862;
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
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5813953488372093;
            result[3] += 0.27906976744186046;
            result[4] += 0;
            result[5] += 0.13953488372093023;
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
            result[0] += 0.012585812356979404;
            result[1] += 0;
            result[2] += 0.9244851258581236;
            result[3] += 0.05606407322654462;
            result[4] += 0;
            result[5] += 0.006864988558352402;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.01951219512195122;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9707317073170731;
            result[5] += 0.00975609756097561;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4909090909090909;
            result[5] += 0.509090909090909;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.42592592592592593;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5740740740740741;
            result[5] += 0;
          } else {
            result[0] += 0.9705882352941178;
            result[1] += 0.014705882352941178;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.014705882352941178;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0026490066225165563;
            result[3] += 0.03576158940397351;
            result[4] += 0.025165562913907286;
            result[5] += 0.9364238410596026;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0.011627906976744186;
            result[1] += 0.06395348837209303;
            result[2] += 0.03488372093023256;
            result[3] += 0.11046511627906977;
            result[4] += 0.18604651162790697;
            result[5] += 0.5930232558139535;
          } else {
            result[0] += 0.0030959752321981426;
            result[1] += 0.009287925696594427;
            result[2] += 0.09907120743034056;
            result[3] += 0.5603715170278638;
            result[4] += 0.006191950464396285;
            result[5] += 0.3219814241486068;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0.12345679012345678;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.08024691358024691;
            result[4] += 0.6604938271604939;
            result[5] += 0.08024691358024691;
          } else {
            result[0] += 0;
            result[1] += 0.9642857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8703374777975134;
            result[1] += 0.021314387211367674;
            result[2] += 0.006216696269982238;
            result[3] += 0.017761989342806393;
            result[4] += 0.0630550621669627;
            result[5] += 0.021314387211367674;
          } else {
            result[0] += 0.28318584070796465;
            result[1] += 0;
            result[2] += 0.21238938053097348;
            result[3] += 0.1946902654867257;
            result[4] += 0.11504424778761063;
            result[5] += 0.1946902654867257;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06060606060606061;
            result[4] += 0.030303030303030304;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.041666666666666664;
            result[2] += 0.2916666666666667;
            result[3] += 0.20833333333333334;
            result[4] += 0.20833333333333334;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6242424242424243;
            result[4] += 0;
            result[5] += 0.17575757575757575;
          } else {
            result[0] += 0;
            result[1] += 0.21875;
            result[2] += 0.46875;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0.28125;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.019543973941368076;
            result[1] += 0;
            result[2] += 0.7785016286644951;
            result[3] += 0.17263843648208468;
            result[4] += 0;
            result[5] += 0.029315960912052116;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9225806451612903;
            result[3] += 0.07419354838709677;
            result[4] += 0;
            result[5] += 0.0032258064516129032;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9933554817275747;
            result[3] += 0.006644518272425249;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            result[0] += 0.007380073800738007;
            result[1] += 0.007380073800738007;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.955719557195572;
            result[5] += 0.02952029520295203;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
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
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0015455950540958269;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023183925811437404;
            result[4] += 0.030911901081916538;
            result[5] += 0.9443585780525502;
          } else {
            result[0] += 0.1323529411764706;
            result[1] += 0.024509803921568627;
            result[2] += 0;
            result[3] += 0.1323529411764706;
            result[4] += 0.10784313725490197;
            result[5] += 0.6029411764705882;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
            result[0] += 0.03546099290780142;
            result[1] += 0.0070921985815602835;
            result[2] += 0;
            result[3] += 0.2553191489361702;
            result[4] += 0.06382978723404255;
            result[5] += 0.6382978723404256;
          } else {
            result[0] += 0.0365296803652968;
            result[1] += 0.0136986301369863;
            result[2] += 0.0045662100456621;
            result[3] += 0.6301369863013698;
            result[4] += 0.0182648401826484;
            result[5] += 0.2968036529680365;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9901960784313726;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00980392156862745;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0.023529411764705882;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9176470588235294;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0.6421568627450981;
            result[1] += 0.04411764705882353;
            result[2] += 0;
            result[3] += 0.05392156862745098;
            result[4] += 0.1715686274509804;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.27555555555555555;
            result[1] += 0.011111111111111112;
            result[2] += 0.23333333333333334;
            result[3] += 0.26222222222222225;
            result[4] += 0.024444444444444446;
            result[5] += 0.19333333333333333;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9299610894941635;
            result[1] += 0.007782101167315175;
            result[2] += 0.0025940337224383916;
            result[3] += 0.00648508430609598;
            result[4] += 0.05317769130998703;
            result[5] += 0;
          } else {
            result[0] += 0.4428571428571429;
            result[1] += 0;
            result[2] += 0.31428571428571433;
            result[3] += 0.042857142857142864;
            result[4] += 0.18571428571428575;
            result[5] += 0.014285714285714287;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)58) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0.8260869565217391;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9523809523809523;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9285714285714286;
          } else {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0.21052631578947367;
            result[3] += 0.7105263157894737;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857144;
            result[1] += 0;
            result[2] += 0.742857142857143;
            result[3] += 0.10000000000000002;
            result[4] += 0.014285714285714287;
            result[5] += 0.07142857142857144;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116) ) ) {
            result[0] += 0.04878048780487806;
            result[1] += 0.02439024390243903;
            result[2] += 0.853658536585366;
            result[3] += 0.07317073170731708;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7222222222222222;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.8204081632653061;
            result[3] += 0.15918367346938775;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9791304347826087;
            result[3] += 0.020869565217391306;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.01107011070110701;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.966789667896679;
            result[5] += 0.02214022140221402;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3055555555555556;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.8850574712643678;
            result[1] += 0.08045977011494253;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011494252873563218;
            result[5] += 0.022988505747126436;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030183727034120734;
            result[4] += 0.03674540682414698;
            result[5] += 0.9330708661417323;
          } else {
            result[0] += 0.07352941176470588;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0.3382352941176471;
            result[5] += 0.35294117647058826;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.05181347150259067;
            result[1] += 0;
            result[2] += 0.0051813471502590676;
            result[3] += 0.36787564766839376;
            result[4] += 0;
            result[5] += 0.5751295336787565;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010752688172043012;
            result[3] += 0.7849462365591398;
            result[4] += 0;
            result[5] += 0.20430107526881722;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8478260869565218;
            result[2] += 0;
            result[3] += 0.06521739130434784;
            result[4] += 0.06521739130434784;
            result[5] += 0.02173913043478261;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
            result[0] += 0.20441988950276244;
            result[1] += 0.08839779005524862;
            result[2] += 0;
            result[3] += 0.011049723756906077;
            result[4] += 0.6850828729281768;
            result[5] += 0.011049723756906077;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8900279589934763;
            result[1] += 0.005591798695246972;
            result[2] += 0.008387698042870458;
            result[3] += 0.02143522833178006;
            result[4] += 0.054054054054054064;
            result[5] += 0.020503261882572232;
          } else {
            result[0] += 0.1378299120234604;
            result[1] += 0.011730205278592375;
            result[2] += 0.36363636363636365;
            result[3] += 0.2434017595307918;
            result[4] += 0.10263929618768329;
            result[5] += 0.14076246334310852;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05660377358490566;
            result[3] += 0.03773584905660377;
            result[4] += 0.018867924528301886;
            result[5] += 0.8867924528301887;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714288;
            result[1] += 0.2142857142857143;
            result[2] += 0.14285714285714288;
            result[3] += 0.2142857142857143;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0.020000000000000004;
            result[1] += 0.04000000000000001;
            result[2] += 0.020000000000000004;
            result[3] += 0.8400000000000001;
            result[4] += 0;
            result[5] += 0.08000000000000002;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.7758620689655172;
            result[3] += 0.1752873563218391;
            result[4] += 0;
            result[5] += 0.031609195402298854;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8166666666666667;
            result[3] += 0.18333333333333332;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009652509652509652;
            result[1] += 0;
            result[2] += 0.9633204633204633;
            result[3] += 0.02702702702702703;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)127.5) ) ) {
            result[0] += 0.01171875;
            result[1] += 0.0078125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9609375;
            result[5] += 0.01953125;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5833333333333334;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
            result[0] += 0.07142857142857144;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428572;
            result[5] += 0.07142857142857144;
          } else {
            result[0] += 0.9444444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013679890560875513;
            result[3] += 0.015047879616963064;
            result[4] += 0.028727770177838577;
            result[5] += 0.9548563611491108;
          } else {
            result[0] += 0.009828009828009828;
            result[1] += 0.004914004914004914;
            result[2] += 0.002457002457002457;
            result[3] += 0.36117936117936117;
            result[4] += 0.06388206388206388;
            result[5] += 0.5577395577395577;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.9908045977011494;
            result[2] += 0;
            result[3] += 0.0022988505747126436;
            result[4] += 0.006896551724137931;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            result[0] += 0.0967741935483871;
            result[1] += 0.32903225806451614;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5548387096774193;
            result[5] += 0.01935483870967742;
          } else {
            result[0] += 0.8622222222222223;
            result[1] += 0.003555555555555556;
            result[2] += 0.001777777777777778;
            result[3] += 0.029333333333333336;
            result[4] += 0.08000000000000002;
            result[5] += 0.023111111111111114;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0.003787878787878788;
            result[1] += 0.026515151515151516;
            result[2] += 0.24242424242424243;
            result[3] += 0.42045454545454547;
            result[4] += 0.022727272727272728;
            result[5] += 0.2840909090909091;
          } else {
            result[0] += 0.608;
            result[1] += 0;
            result[2] += 0.176;
            result[3] += 0.016;
            result[4] += 0.168;
            result[5] += 0.032;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0.9487179487179487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.5769230769230769;
            result[5] += 0.15384615384615385;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08536585365853659;
            result[3] += 0.7317073170731707;
            result[4] += 0.036585365853658534;
            result[5] += 0.14634146341463414;
          } else {
            result[0] += 0.046875;
            result[1] += 0;
            result[2] += 0.328125;
            result[3] += 0.328125;
            result[4] += 0.03125;
            result[5] += 0.265625;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5483870967741935;
            result[3] += 0.45161290322580644;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011695906432748537;
            result[1] += 0;
            result[2] += 0.8830409356725146;
            result[3] += 0.09064327485380116;
            result[4] += 0;
            result[5] += 0.014619883040935672;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9024390243902439;
            result[3] += 0.0975609756097561;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9895833333333334;
            result[3] += 0.010416666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008130081300813009;
            result[4] += 0.9796747967479674;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0.35714285714285715;
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.8611111111111112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1388888888888889;
            result[5] += 0;
          } else {
            result[0] += 0.0010309278350515464;
            result[1] += 0.006185567010309278;
            result[2] += 0.006185567010309278;
            result[3] += 0.061855670103092786;
            result[4] += 0.06804123711340206;
            result[5] += 0.856701030927835;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
            result[0] += 0.021505376344086023;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24731182795698925;
            result[4] += 0.12903225806451613;
            result[5] += 0.6021505376344086;
          } else {
            result[0] += 0.07352941176470588;
            result[1] += 0.004901960784313725;
            result[2] += 0.12254901960784313;
            result[3] += 0.6274509803921569;
            result[4] += 0;
            result[5] += 0.1715686274509804;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)105.5) ) ) {
            result[0] += 0.810542398777693;
            result[1] += 0.022154316271963334;
            result[2] += 0.008403361344537816;
            result[3] += 0.02521008403361345;
            result[4] += 0.11382734912146679;
            result[5] += 0.01986249045072575;
          } else {
            result[0] += 0;
            result[1] += 0.9811320754716981;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.018867924528301886;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03793103448275862;
            result[1] += 0.03103448275862069;
            result[2] += 0.07241379310344828;
            result[3] += 0.35172413793103446;
            result[4] += 0.0896551724137931;
            result[5] += 0.41724137931034483;
          } else {
            result[0] += 0.2916666666666667;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.06547619047619048;
            result[4] += 0.03571428571428571;
            result[5] += 0.023809523809523808;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.7916666666666667;
            result[2] += 0;
            result[3] += 0.04166666666666667;
            result[4] += 0.12500000000000003;
            result[5] += 0.04166666666666667;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.96875;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8235294117647058;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20833333333333334;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7435897435897436;
            result[3] += 0.2564102564102564;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
            result[0] += 0.2631578947368421;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0.3684210526315789;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.007462686567164179;
            result[1] += 0.0037313432835820895;
            result[2] += 0.8134328358208955;
            result[3] += 0.15671641791044777;
            result[4] += 0;
            result[5] += 0.018656716417910446;
          } else {
            result[0] += 0.003616636528028933;
            result[1] += 0;
            result[2] += 0.9656419529837251;
            result[3] += 0.02531645569620253;
            result[4] += 0;
            result[5] += 0.0054249547920434;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)107) ) ) {
            result[0] += 0.8235294117647058;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
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
