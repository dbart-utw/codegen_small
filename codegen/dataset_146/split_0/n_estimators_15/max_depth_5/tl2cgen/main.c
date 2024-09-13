
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
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9956896551724138;
            result[5] += 0.004310344827586207;
          } else {
            result[0] += 0;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0.20689655172413793;
            result[4] += 0.3103448275862069;
            result[5] += 0.4482758620689655;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
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
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10714285714285715;
            result[3] += 0;
            result[4] += 0.6071428571428572;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002758620689655172;
            result[3] += 0.011034482758620689;
            result[4] += 0.023448275862068966;
            result[5] += 0.9627586206896551;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.004395604395604396;
            result[1] += 0;
            result[2] += 0.03296703296703297;
            result[3] += 0.37362637362637363;
            result[4] += 0.06153846153846154;
            result[5] += 0.5274725274725275;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
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
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0.15;
            result[1] += 0.65;
            result[2] += 0;
            result[3] += 0.15;
            result[4] += 0.05;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0.12254901960784313;
            result[1] += 0.2107843137254902;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.5686274509803921;
            result[5] += 0.06862745098039216;
          } else {
            result[0] += 0.8742463393626184;
            result[1] += 0.002583979328165375;
            result[2] += 0.002583979328165375;
            result[3] += 0.029285099052540915;
            result[4] += 0.06632213608957795;
            result[5] += 0.024978466838931956;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0.06439393939393939;
            result[1] += 0.015151515151515152;
            result[2] += 0.12878787878787878;
            result[3] += 0.3787878787878788;
            result[4] += 0.10984848484848485;
            result[5] += 0.30303030303030304;
          } else {
            result[0] += 0.32231404958677684;
            result[1] += 0.04132231404958678;
            result[2] += 0.5371900826446281;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.008264462809917356;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0.33333333333333337;
            result[1] += 0.33333333333333337;
            result[2] += 0.11111111111111112;
            result[3] += 0;
            result[4] += 0.22222222222222224;
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12903225806451613;
            result[3] += 0.7419354838709677;
            result[4] += 0;
            result[5] += 0.12903225806451613;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.47058823529411764;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.14814814814814814;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.07692307692307693;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.41891891891891897;
            result[3] += 0.5270270270270271;
            result[4] += 0;
            result[5] += 0.054054054054054064;
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.047619047619047616;
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
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.89;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.01;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.32954545454545453;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015723270440251573;
            result[1] += 0;
            result[2] += 0.9544025157232704;
            result[3] += 0.04245283018867924;
            result[4] += 0;
            result[5] += 0.0015723270440251573;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947643979057592;
            result[5] += 0.005235602094240838;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.8461538461538461;
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023564064801178203;
            result[4] += 0.014727540500736377;
            result[5] += 0.9617083946980854;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.10793650793650794;
            result[1] += 0.06984126984126984;
            result[2] += 0.012698412698412698;
            result[3] += 0.09206349206349207;
            result[4] += 0.13968253968253969;
            result[5] += 0.5777777777777777;
          } else {
            result[0] += 0.00909090909090909;
            result[1] += 0;
            result[2] += 0.02727272727272727;
            result[3] += 0.6454545454545455;
            result[4] += 0.004545454545454545;
            result[5] += 0.31363636363636366;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)51.5) ) ) {
            result[0] += 0.09803921568627451;
            result[1] += 0.7843137254901961;
            result[2] += 0;
            result[3] += 0.0196078431372549;
            result[4] += 0.09803921568627451;
            result[5] += 0;
          } else {
            result[0] += 0.012195121951219513;
            result[1] += 0.07926829268292683;
            result[2] += 0;
            result[3] += 0.054878048780487805;
            result[4] += 0.8170731707317073;
            result[5] += 0.036585365853658534;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
            result[0] += 0.2865853658536585;
            result[1] += 0;
            result[2] += 0.08231707317073171;
            result[3] += 0.13414634146341464;
            result[4] += 0.1951219512195122;
            result[5] += 0.3018292682926829;
          } else {
            result[0] += 0.8078124999999998;
            result[1] += 0.0070312499999999984;
            result[2] += 0.046093749999999996;
            result[3] += 0.06484374999999999;
            result[4] += 0.04999999999999999;
            result[5] += 0.024218749999999994;
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
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
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
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
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11864406779661017;
            result[3] += 0.6610169491525424;
            result[4] += 0;
            result[5] += 0.22033898305084745;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9714285714285714;
            result[3] += 0.02857142857142857;
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
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.5555555555555556;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.8125;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        }
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006711409395973155;
            result[1] += 0;
            result[2] += 0.7718120805369129;
            result[3] += 0.20134228187919465;
            result[4] += 0.006711409395973155;
            result[5] += 0.01342281879194631;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008207934336525308;
            result[1] += 0;
            result[2] += 0.9316005471956225;
            result[3] += 0.0533515731874145;
            result[4] += 0;
            result[5] += 0.006839945280437756;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.07924528301886792;
            result[1] += 0.04150943396226415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8339622641509434;
            result[5] += 0.045283018867924525;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3695652173913043;
            result[5] += 0.5869565217391305;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.13131313131313133;
            result[1] += 0.13131313131313133;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7171717171717171;
            result[5] += 0.020202020202020204;
          } else {
            result[0] += 0.910941475826972;
            result[1] += 0.007633587786259542;
            result[2] += 0;
            result[3] += 0.007633587786259542;
            result[4] += 0.07124681933842239;
            result[5] += 0.002544529262086514;
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5138888888888888;
            result[5] += 0.4305555555555556;
          } else {
            result[0] += 0;
            result[1] += 0.003579952267303103;
            result[2] += 0.002386634844868735;
            result[3] += 0.0513126491646778;
            result[4] += 0.0513126491646778;
            result[5] += 0.8914081145584726;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0.3745928338762215;
            result[1] += 0.11074918566775244;
            result[2] += 0.013029315960912053;
            result[3] += 0.10749185667752444;
            result[4] += 0.24104234527687296;
            result[5] += 0.15309446254071662;
          } else {
            result[0] += 0.03150912106135987;
            result[1] += 0.014925373134328358;
            result[2] += 0.07462686567164178;
            result[3] += 0.5190713101160862;
            result[4] += 0.03648424543946932;
            result[5] += 0.32338308457711445;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
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
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            result[0] += 0.11111111111111112;
            result[1] += 0;
            result[2] += 0.22222222222222224;
            result[3] += 0.4444444444444445;
            result[4] += 0.22222222222222224;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9908256880733946;
            result[1] += 0;
            result[2] += 0.0045871559633027525;
            result[3] += 0;
            result[4] += 0.0045871559633027525;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.46153846153846156;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.03125;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)114) ) ) {
            result[0] += 0.0909090909090909;
            result[1] += 0;
            result[2] += 0.6969696969696969;
            result[3] += 0.0909090909090909;
            result[4] += 0.0909090909090909;
            result[5] += 0.030303030303030297;
          } else {
            result[0] += 0.85;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
            result[0] += 0.006191950464396286;
            result[1] += 0;
            result[2] += 0.8421052631578948;
            result[3] += 0.13312693498452016;
            result[4] += 0;
            result[5] += 0.018575851393188857;
          } else {
            result[0] += 0.007155635062611807;
            result[1] += 0;
            result[2] += 0.9534883720930233;
            result[3] += 0.03577817531305903;
            result[4] += 0;
            result[5] += 0.0035778175313059034;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
            result[0] += 0.004347826086956523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9869565217391305;
            result[5] += 0.008695652173913045;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
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
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.7272727272727273;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0.0016207455429497568;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03241491085899514;
            result[4] += 0.01620745542949757;
            result[5] += 0.9497568881685575;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
            result[0] += 0.12928759894459102;
            result[1] += 0.052770448548812667;
            result[2] += 0.013192612137203167;
            result[3] += 0.10290237467018469;
            result[4] += 0.08443271767810026;
            result[5] += 0.6174142480211082;
          } else {
            result[0] += 0;
            result[1] += 0.019417475728155338;
            result[2] += 0.0048543689320388345;
            result[3] += 0.6796116504854369;
            result[4] += 0.014563106796116505;
            result[5] += 0.2815533980582524;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
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
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
            result[0] += 0.06818181818181818;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022727272727272728;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.03208556149732621;
            result[2] += 0.058823529411764705;
            result[3] += 0.0748663101604278;
            result[4] += 0.6631016042780749;
            result[5] += 0.08021390374331551;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8554119547657512;
            result[1] += 0.008885298869143781;
            result[2] += 0.0016155088852988692;
            result[3] += 0.04038772213247173;
            result[4] += 0.07835218093699516;
            result[5] += 0.015347334410339256;
          } else {
            result[0] += 0.1806930693069307;
            result[1] += 0;
            result[2] += 0.26485148514851486;
            result[3] += 0.25;
            result[4] += 0.06435643564356436;
            result[5] += 0.2400990099009901;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.8636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.034482758620689655;
            result[3] += 0.4827586206896552;
            result[4] += 0;
            result[5] += 0.4827586206896552;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
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
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0.35;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3684210526315789;
            result[3] += 0.631578947368421;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8108108108108109;
            result[3] += 0.16216216216216217;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8738170347003155;
            result[3] += 0.11356466876971609;
            result[4] += 0;
            result[5] += 0.012618296529968454;
          } else {
            result[0] += 0.017391304347826087;
            result[1] += 0;
            result[2] += 0.9826086956521739;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)102) ) ) {
            result[0] += 0.005813953488372093;
            result[1] += 0;
            result[2] += 0.9825581395348837;
            result[3] += 0.011627906976744186;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.004;
            result[1] += 0.008;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.98;
            result[5] += 0.008;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0.027777777777777776;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.4444444444444444;
            result[5] += 0.4444444444444444;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21621621621621623;
            result[5] += 0.7567567567567568;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14583333333333334;
            result[5] += 0.020833333333333332;
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11904761904761904;
            result[4] += 0.6428571428571429;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06191588785046729;
            result[4] += 0.016355140186915886;
            result[5] += 0.9217289719626168;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.05;
          } else {
            result[0] += 0.008695652173913044;
            result[1] += 0.05217391304347826;
            result[2] += 0.02608695652173913;
            result[3] += 0.3130434782608696;
            result[4] += 0.1826086956521739;
            result[5] += 0.41739130434782606;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0.8214285714285715;
            result[2] += 0.03571428571428572;
            result[3] += 0.10714285714285715;
            result[4] += 0.03571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16279069767441862;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8372093023255814;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0.29850746268656714;
            result[1] += 0.08955223880597014;
            result[2] += 0.06716417910447761;
            result[3] += 0.1865671641791045;
            result[4] += 0.06716417910447761;
            result[5] += 0.291044776119403;
          } else {
            result[0] += 0.8815028901734104;
            result[1] += 0.027938342967244702;
            result[2] += 0.008670520231213872;
            result[3] += 0.011560693641618497;
            result[4] += 0.06647398843930635;
            result[5] += 0.0038535645472061657;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.027918781725888325;
            result[1] += 0.04314720812182741;
            result[2] += 0.06091370558375635;
            result[3] += 0.5532994923857868;
            result[4] += 0.03553299492385787;
            result[5] += 0.27918781725888325;
          } else {
            result[0] += 0.37104072398190047;
            result[1] += 0;
            result[2] += 0.43891402714932126;
            result[3] += 0.12669683257918551;
            result[4] += 0.027149321266968326;
            result[5] += 0.03619909502262444;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
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
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.95;
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
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28125;
            result[3] += 0.546875;
            result[4] += 0;
            result[5] += 0.171875;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7209302325581395;
            result[3] += 0.2558139534883721;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.017094017094017096;
            result[1] += 0;
            result[2] += 0.9316239316239316;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.004273504273504274;
            result[1] += 0;
            result[2] += 0.9401709401709402;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0.004273504273504274;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.00411522633744856;
            result[2] += 0;
            result[3] += 0.00823045267489712;
            result[4] += 0.9382716049382716;
            result[5] += 0.04938271604938271;
          } else {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0.3076923076923077;
            result[4] += 0.15384615384615385;
            result[5] += 0.3076923076923077;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
            result[0] += 0.8775510204081632;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0.8125;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
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
            result[3] += 0.016897081413210446;
            result[4] += 0.01228878648233487;
            result[5] += 0.9708141321044547;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13071895424836602;
            result[4] += 0.1503267973856209;
            result[5] += 0.7189542483660131;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0.015;
            result[3] += 0.475;
            result[4] += 0.04;
            result[5] += 0.43;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)47) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
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
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0.017391304347826087;
            result[1] += 0.13043478260869565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8434782608695652;
            result[5] += 0.008695652173913044;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
            result[0] += 0.025;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.225;
            result[4] += 0.125;
            result[5] += 0.375;
          } else {
            result[0] += 0.8833634719710669;
            result[1] += 0.006329113924050633;
            result[2] += 0;
            result[3] += 0.026220614828209764;
            result[4] += 0.07323688969258589;
            result[5] += 0.0108499095840868;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
            result[0] += 0.028268551236749116;
            result[1] += 0.0176678445229682;
            result[2] += 0.17667844522968199;
            result[3] += 0.28975265017667845;
            result[4] += 0.19081272084805653;
            result[5] += 0.2968197879858657;
          } else {
            result[0] += 0.7033898305084746;
            result[1] += 0;
            result[2] += 0.2033898305084746;
            result[3] += 0.06779661016949153;
            result[4] += 0.01694915254237288;
            result[5] += 0.00847457627118644;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)57.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0.36363636363636365;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.8125;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.035398230088495575;
            result[3] += 0.8053097345132744;
            result[4] += 0;
            result[5] += 0.1592920353982301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0.10344827586206896;
            result[1] += 0.10344827586206896;
            result[2] += 0.10344827586206896;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.41379310344827586;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7358490566037736;
            result[3] += 0.15094339622641512;
            result[4] += 0;
            result[5] += 0.11320754716981134;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.375;
            result[2] += 0.4166666666666667;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.7962962962962964;
            result[1] += 0.03703703703703704;
            result[2] += 0.07407407407407408;
            result[3] += 0;
            result[4] += 0.0925925925925926;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.5217391304347826;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0.014527845036319613;
            result[1] += 0;
            result[2] += 0.7941888619854721;
            result[3] += 0.17433414043583534;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9694072657743786;
            result[3] += 0.028680688336520075;
            result[4] += 0;
            result[5] += 0.0019120458891013384;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)49) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967479674796748;
            result[5] += 0.024390243902439025;
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
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011577424023154847;
            result[4] += 0.03762662807525326;
            result[5] += 0.9507959479015919;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0.32142857142857145;
            result[4] += 0.017857142857142856;
            result[5] += 0.5892857142857143;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9807692307692307;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.019230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0.006329113924050633;
            result[1] += 0.008438818565400843;
            result[2] += 0.008438818565400843;
            result[3] += 0.30168776371308015;
            result[4] += 0.10337552742616034;
            result[5] += 0.5717299578059072;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          } else {
            result[0] += 0.08208955223880597;
            result[1] += 0.1417910447761194;
            result[2] += 0;
            result[3] += 0.03731343283582089;
            result[4] += 0.6865671641791045;
            result[5] += 0.05223880597014925;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8897435897435897;
            result[1] += 0.021367521367521368;
            result[2] += 0.005982905982905983;
            result[3] += 0.022222222222222223;
            result[4] += 0.044444444444444446;
            result[5] += 0.01623931623931624;
          } else {
            result[0] += 0.24124513618677043;
            result[1] += 0;
            result[2] += 0.17120622568093385;
            result[3] += 0.33852140077821014;
            result[4] += 0.04669260700389105;
            result[5] += 0.20233463035019456;
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
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
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0.8;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7714285714285715;
            result[4] += 0;
            result[5] += 0.22857142857142856;
          } else {
            result[0] += 0;
            result[1] += 0.05172413793103448;
            result[2] += 0.034482758620689655;
            result[3] += 0.3793103448275862;
            result[4] += 0;
            result[5] += 0.5344827586206896;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.8717948717948718;
            result[4] += 0;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.3181818181818182;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29166666666666674;
            result[3] += 0.5416666666666667;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.10714285714285714;
            result[2] += 0.07142857142857142;
            result[3] += 0.2857142857142857;
            result[4] += 0.17857142857142858;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.14285714285714288;
            result[1] += 0;
            result[2] += 0.761904761904762;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7034883720930233;
            result[3] += 0.23837209302325582;
            result[4] += 0;
            result[5] += 0.05813953488372093;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.9021739130434783;
            result[3] += 0.06521739130434782;
            result[4] += 0;
            result[5] += 0.010869565217391304;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
            result[0] += 0.044897959183673466;
            result[1] += 0;
            result[2] += 0.8408163265306122;
            result[3] += 0.09387755102040816;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.0042194092827004225;
            result[1] += 0;
            result[2] += 0.9746835443037976;
            result[3] += 0.021097046413502112;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)39.5) ) ) {
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
            result[4] += 0.9752475247524752;
            result[5] += 0.024752475247524754;
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36;
            result[5] += 0.64;
          } else {
            result[0] += 0.8260869565217391;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.32432432432432434;
            result[2] += 0;
            result[3] += 0.02702702702702703;
            result[4] += 0.43243243243243246;
            result[5] += 0.21621621621621623;
          } else {
            result[0] += 0;
            result[1] += 0.009501187648456057;
            result[2] += 0;
            result[3] += 0.03800475059382423;
            result[4] += 0.04275534441805225;
            result[5] += 0.9097387173396675;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0.22357723577235772;
            result[4] += 0.056910569105691054;
            result[5] += 0.6707317073170732;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04838709677419355;
            result[3] += 0.7419354838709677;
            result[4] += 0.008064516129032258;
            result[5] += 0.20161290322580644;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
            result[0] += 0.1461187214611872;
            result[1] += 0.0684931506849315;
            result[2] += 0.0091324200913242;
            result[3] += 0.0091324200913242;
            result[4] += 0.7168949771689498;
            result[5] += 0.0502283105022831;
          } else {
            result[0] += 0;
            result[1] += 0.782608695652174;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21739130434782608;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8491048593350383;
            result[1] += 0.00937766410912191;
            result[2] += 0.0025575447570332483;
            result[3] += 0.04092071611253197;
            result[4] += 0.06734867860187553;
            result[5] += 0.030690537084398978;
          } else {
            result[0] += 0.19197707736389685;
            result[1] += 0.017191977077363897;
            result[2] += 0.22063037249283668;
            result[3] += 0.30659025787965616;
            result[4] += 0.0659025787965616;
            result[5] += 0.1977077363896848;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
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
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0;
            result[4] += 0.8421052631578947;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363635;
            result[5] += 0.8636363636363636;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.46153846153846156;
            result[4] += 0.23076923076923078;
            result[5] += 0.15384615384615385;
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10714285714285714;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.17857142857142858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6060606060606061;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.868421052631579;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.6190476190476191;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39473684210526316;
            result[3] += 0.5526315789473685;
            result[4] += 0.02631578947368421;
            result[5] += 0.02631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.20634920634920634;
            result[4] += 0;
            result[5] += 0.015873015873015872;
          }
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.02030456852791878;
            result[1] += 0;
            result[2] += 0.8223350253807107;
            result[3] += 0.14720812182741116;
            result[4] += 0;
            result[5] += 0.01015228426395939;
          } else {
            result[0] += 0.00351493848857645;
            result[1] += 0;
            result[2] += 0.9578207381370827;
            result[3] += 0.03514938488576451;
            result[4] += 0;
            result[5] += 0.00351493848857645;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
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
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8518518518518519;
            result[5] += 0.07407407407407407;
          }
        }
      } else {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.5625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.7727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002442002442002442;
            result[2] += 0;
            result[3] += 0.03540903540903541;
            result[4] += 0.03540903540903541;
            result[5] += 0.9267399267399268;
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.3953488372093023;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11627906976744186;
            result[4] += 0.3953488372093023;
            result[5] += 0.09302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0.009009009009009009;
            result[2] += 0.0045045045045045045;
            result[3] += 0.22522522522522523;
            result[4] += 0.02252252252252252;
            result[5] += 0.7387387387387387;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28125;
            result[4] += 0.03125;
            result[5] += 0.6875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8305084745762712;
            result[4] += 0;
            result[5] += 0.1694915254237288;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.4230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5769230769230769;
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.9565217391304348;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.21951219512195122;
            result[2] += 0.04878048780487805;
            result[3] += 0.07317073170731707;
            result[4] += 0.6585365853658537;
            result[5] += 0;
          } else {
            result[0] += 0.8774978279756733;
            result[1] += 0.019113814074717638;
            result[2] += 0.0008688097306689834;
            result[3] += 0.026064291920069503;
            result[4] += 0.06429192006950478;
            result[5] += 0.01216333622936577;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
            result[0] += 0.064;
            result[1] += 0.064;
            result[2] += 0.096;
            result[3] += 0.272;
            result[4] += 0.208;
            result[5] += 0.296;
          } else {
            result[0] += 0.851063829787234;
            result[1] += 0;
            result[2] += 0.1276595744680851;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.017045454545454544;
            result[2] += 0.09090909090909091;
            result[3] += 0.6306818181818182;
            result[4] += 0;
            result[5] += 0.26136363636363635;
          } else {
            result[0] += 0.46153846153846156;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.18604651162790697;
            result[4] += 0;
            result[5] += 0.7906976744186046;
          } else {
            result[0] += 0.04054054054054054;
            result[1] += 0.06756756756756757;
            result[2] += 0.6216216216216216;
            result[3] += 0.13513513513513514;
            result[4] += 0.04054054054054054;
            result[5] += 0.0945945945945946;
          }
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.125;
            result[4] += 0.375;
            result[5] += 0;
          } else {
            result[0] += 0.7291666666666667;
            result[1] += 0;
            result[2] += 0.10416666666666669;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.12903225806451613;
            result[1] += 0;
            result[2] += 0.532258064516129;
            result[3] += 0.12903225806451613;
            result[4] += 0.016129032258064516;
            result[5] += 0.1935483870967742;
          } else {
            result[0] += 0.016233766233766232;
            result[1] += 0;
            result[2] += 0.9069264069264069;
            result[3] += 0.07251082251082251;
            result[4] += 0;
            result[5] += 0.004329004329004329;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.007692307692307693;
            result[1] += 0.007692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9846153846153847;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5925925925925926;
            result[5] += 0.4074074074074074;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19444444444444445;
            result[5] += 0.75;
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008849557522123894;
            result[4] += 0.01415929203539823;
            result[5] += 0.9769911504424779;
          } else {
            result[0] += 0;
            result[1] += 0.056338028169014086;
            result[2] += 0.028169014084507043;
            result[3] += 0.15492957746478872;
            result[4] += 0.1267605633802817;
            result[5] += 0.6338028169014085;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10309278350515463;
            result[4] += 0.5360824742268041;
            result[5] += 0.36082474226804123;
          } else {
            result[0] += 0.010273972602739725;
            result[1] += 0.00684931506849315;
            result[2] += 0.00684931506849315;
            result[3] += 0.1952054794520548;
            result[4] += 0.06506849315068493;
            result[5] += 0.7157534246575342;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.2631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7368421052631579;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8536585365853658;
            result[2] += 0;
            result[3] += 0.04878048780487805;
            result[4] += 0.0975609756097561;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
            result[0] += 0.1504424778761062;
            result[1] += 0.39823008849557523;
            result[2] += 0;
            result[3] += 0.04424778761061947;
            result[4] += 0.3893805309734513;
            result[5] += 0.017699115044247787;
          } else {
            result[0] += 0.8617113223854796;
            result[1] += 0.010371650821089023;
            result[2] += 0.005185825410544511;
            result[3] += 0.05358686257562662;
            result[4] += 0.03975799481417459;
            result[5] += 0.029386343993085567;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0.03237410071942446;
            result[1] += 0.007194244604316547;
            result[2] += 0.03237410071942446;
            result[3] += 0.46402877697841727;
            result[4] += 0.10071942446043165;
            result[5] += 0.36330935251798563;
          } else {
            result[0] += 0.1902834008097166;
            result[1] += 0;
            result[2] += 0.46963562753036436;
            result[3] += 0.23076923076923078;
            result[4] += 0.012145748987854251;
            result[5] += 0.09716599190283401;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07017543859649122;
            result[3] += 0.8070175438596491;
            result[4] += 0;
            result[5] += 0.12280701754385964;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.773109243697479;
            result[3] += 0.2184873949579832;
            result[4] += 0;
            result[5] += 0.008403361344537815;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.047619047619047616;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0.13157894736842105;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.015267175572519083;
            result[1] += 0;
            result[2] += 0.8931297709923665;
            result[3] += 0.0916030534351145;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002044989775051125;
            result[1] += 0;
            result[2] += 0.9897750511247444;
            result[3] += 0.0081799591002045;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.984375;
            result[5] += 0.0078125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
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
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.475;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.35;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0.005868544600938967;
            result[2] += 0;
            result[3] += 0.04812206572769953;
            result[4] += 0.045774647887323945;
            result[5] += 0.9002347417840375;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0.08163265306122448;
            result[1] += 0.07142857142857142;
            result[2] += 0.01020408163265306;
            result[3] += 0.14285714285714285;
            result[4] += 0.12244897959183673;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.0375;
            result[1] += 0.025;
            result[2] += 0.025;
            result[3] += 0.675;
            result[4] += 0.0125;
            result[5] += 0.225;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.08597285067873303;
            result[1] += 0.28054298642533937;
            result[2] += 0;
            result[3] += 0.01809954751131222;
            result[4] += 0.6153846153846154;
            result[5] += 0;
          } else {
            result[0] += 0.8340389500423371;
            result[1] += 0.008467400508044032;
            result[2] += 0.0076206604572396286;
            result[3] += 0.03895004233700255;
            result[4] += 0.06096528365791703;
            result[5] += 0.04995766299745979;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.039603960396039604;
            result[1] += 0.04455445544554455;
            result[2] += 0.034653465346534656;
            result[3] += 0.4504950495049505;
            result[4] += 0.054455445544554455;
            result[5] += 0.37623762376237624;
          } else {
            result[0] += 0.38388625592417064;
            result[1] += 0;
            result[2] += 0.5260663507109005;
            result[3] += 0.052132701421800945;
            result[4] += 0.014218009478672985;
            result[5] += 0.023696682464454975;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0022727272727272726;
            result[1] += 0.9886363636363636;
            result[2] += 0;
            result[3] += 0.004545454545454545;
            result[4] += 0.004545454545454545;
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
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.4666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.037037037037037035;
            result[4] += 0.1111111111111111;
            result[5] += 0.8148148148148148;
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.017241379310344827;
            result[2] += 0.1724137931034483;
            result[3] += 0.6206896551724138;
            result[4] += 0.017241379310344827;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.06666666666666667;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.08974358974358974;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
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
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8687258687258688;
            result[3] += 0.12355212355212356;
            result[4] += 0;
            result[5] += 0.007722007722007722;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.8899082568807339;
            result[3] += 0.10091743119266056;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9839080459770115;
            result[3] += 0.016091954022988506;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004098360655737706;
            result[3] += 0.008196721311475412;
            result[4] += 0.9836065573770493;
            result[5] += 0.004098360655737706;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04878048780487805;
            result[4] += 0.4634146341463415;
            result[5] += 0.43902439024390244;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.5;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013550135501355014;
            result[3] += 0.02032520325203252;
            result[4] += 0.03929539295392954;
            result[5] += 0.9390243902439024;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.11578947368421053;
            result[1] += 0.010526315789473684;
            result[2] += 0.010526315789473684;
            result[3] += 0.12982456140350876;
            result[4] += 0.12280701754385964;
            result[5] += 0.6105263157894737;
          } else {
            result[0] += 0.005154639175257732;
            result[1] += 0.010309278350515464;
            result[2] += 0;
            result[3] += 0.654639175257732;
            result[4] += 0.010309278350515464;
            result[5] += 0.31958762886597936;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0.1018867924528302;
            result[1] += 0.23773584905660378;
            result[2] += 0.022641509433962263;
            result[3] += 0.09811320754716982;
            result[4] += 0.5056603773584906;
            result[5] += 0.033962264150943396;
          } else {
            result[0] += 0.8663194444444444;
            result[1] += 0.013020833333333334;
            result[2] += 0.026041666666666668;
            result[3] += 0.020833333333333332;
            result[4] += 0.058159722222222224;
            result[5] += 0.015625;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
            result[0] += 0.015060240963855422;
            result[1] += 0.0030120481927710845;
            result[2] += 0.28012048192771083;
            result[3] += 0.37349397590361444;
            result[4] += 0.04819277108433735;
            result[5] += 0.28012048192771083;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.07407407407407407;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.009259259259259259;
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
    if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9615384615384616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.5405405405405406;
            result[4] += 0;
            result[5] += 0.43243243243243246;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.3076923076923077;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.4782608695652174;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.08695652173913043;
            result[4] += 0.2608695652173913;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4920634920634921;
            result[3] += 0.41269841269841273;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.8636363636363636;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.015432098765432098;
            result[1] += 0;
            result[2] += 0.8425925925925926;
            result[3] += 0.13271604938271606;
            result[4] += 0;
            result[5] += 0.009259259259259259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9841269841269841;
            result[3] += 0.015873015873015872;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010362694300518135;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9792746113989638;
            result[5] += 0.010362694300518135;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011904761904761904;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.34523809523809523;
            result[5] += 0.6071428571428571;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004172461752433936;
            result[3] += 0.022253129346314324;
            result[4] += 0.03477051460361613;
            result[5] += 0.9388038942976356;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0.015873015873015872;
            result[2] += 0.015873015873015872;
            result[3] += 0.015873015873015872;
            result[4] += 0.8571428571428571;
            result[5] += 0.07936507936507936;
          } else {
            result[0] += 0;
            result[1] += 0.015503875968992248;
            result[2] += 0.00516795865633075;
            result[3] += 0.3979328165374677;
            result[4] += 0.03359173126614987;
            result[5] += 0.5478036175710594;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)98) ) ) {
            result[0] += 0.05357142857142857;
            result[1] += 0.09523809523809523;
            result[2] += 0.03571428571428571;
            result[3] += 0.023809523809523808;
            result[4] += 0.7619047619047619;
            result[5] += 0.02976190476190476;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
            result[0] += 0.20588235294117646;
            result[1] += 0.7941176470588235;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8733960650128315;
            result[1] += 0.011976047904191617;
            result[2] += 0.00427715996578272;
            result[3] += 0.03849443969204448;
            result[4] += 0.055603079555175364;
            result[5] += 0.016253207869974338;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.01935483870967742;
            result[1] += 0.07096774193548387;
            result[2] += 0.11612903225806452;
            result[3] += 0.4129032258064516;
            result[4] += 0;
            result[5] += 0.38064516129032255;
          } else {
            result[0] += 0.6486486486486487;
            result[1] += 0.013513513513513514;
            result[2] += 0.06756756756756757;
            result[3] += 0;
            result[4] += 0.22972972972972974;
            result[5] += 0.04054054054054054;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06122448979591837;
            result[3] += 0.653061224489796;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.375;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.22;
            result[3] += 0.62;
            result[4] += 0;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7192982456140351;
            result[3] += 0.17543859649122806;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)128.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.9722222222222222;
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
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79) ) ) {
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
            result[4] += 0;
            result[5] += 0.07142857142857142;
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
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7230769230769231;
            result[3] += 0.2564102564102564;
            result[4] += 0;
            result[5] += 0.020512820512820513;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.022516556291390728;
            result[1] += 0;
            result[2] += 0.9337748344370861;
            result[3] += 0.039735099337748346;
            result[4] += 0;
            result[5] += 0.003973509933774834;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)120) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.004291845493562232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9742489270386266;
            result[5] += 0.02145922746781116;
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
      } else {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.28571428571428575;
            result[1] += 0.14285714285714288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4761904761904762;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0.00477326968973747;
            result[1] += 0.002386634844868735;
            result[2] += 0;
            result[3] += 0.0441527446300716;
            result[4] += 0.034606205250596656;
            result[5] += 0.9140811455847255;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.10891089108910891;
            result[1] += 0.0891089108910891;
            result[2] += 0;
            result[3] += 0.19306930693069307;
            result[4] += 0.0594059405940594;
            result[5] += 0.5495049504950495;
          } else {
            result[0] += 0;
            result[1] += 0.012658227848101266;
            result[2] += 0.012658227848101266;
            result[3] += 0.7468354430379747;
            result[4] += 0.0379746835443038;
            result[5] += 0.189873417721519;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7916666666666667;
            result[2] += 0;
            result[3] += 0.04166666666666667;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.022900763358778626;
            result[1] += 0.21374045801526717;
            result[2] += 0;
            result[3] += 0.007633587786259542;
            result[4] += 0.7175572519083969;
            result[5] += 0.03816793893129771;
          } else {
            result[0] += 0.8014297061159649;
            result[1] += 0.031771247021445584;
            result[2] += 0.003177124702144558;
            result[3] += 0.032565528196981726;
            result[4] += 0.09690230341540902;
            result[5] += 0.034154090548054;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.013937282229965157;
            result[1] += 0.006968641114982578;
            result[2] += 0.0975609756097561;
            result[3] += 0.4738675958188153;
            result[4] += 0.03832752613240418;
            result[5] += 0.3693379790940767;
          } else {
            result[0] += 0.34871794871794876;
            result[1] += 0;
            result[2] += 0.5025641025641027;
            result[3] += 0.09743589743589745;
            result[4] += 0.015384615384615387;
            result[5] += 0.0358974358974359;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)70) ) ) {
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
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.6818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0.057692307692307696;
            result[2] += 0.09615384615384616;
            result[3] += 0.5769230769230769;
            result[4] += 0;
            result[5] += 0.2692307692307692;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
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
            result[3] += 0.5;
            result[4] += 0.1;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.00546448087431694;
            result[1] += 0.01639344262295082;
            result[2] += 0.7486338797814208;
            result[3] += 0.20765027322404372;
            result[4] += 0;
            result[5] += 0.02185792349726776;
          } else {
            result[0] += 0.007739938080495356;
            result[1] += 0.0015479876160990713;
            result[2] += 0.9489164086687306;
            result[3] += 0.03869969040247678;
            result[4] += 0;
            result[5] += 0.0030959752321981426;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.5555555555555556;
          }
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)78) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9736842105263158;
            result[5] += 0.02631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
            result[0] += 0.92;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0022497187851518562;
            result[3] += 0.049493813273340834;
            result[4] += 0.03712035995500562;
            result[5] += 0.9111361079865017;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.6818181818181818;
            result[1] += 0.13636363636363635;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.007518796992481203;
            result[1] += 0;
            result[2] += 0.03007518796992481;
            result[3] += 0.14285714285714285;
            result[4] += 0.08270676691729323;
            result[5] += 0.7368421052631579;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.015384615384615385;
            result[1] += 0;
            result[2] += 0.007692307692307693;
            result[3] += 0.8384615384615385;
            result[4] += 0;
            result[5] += 0.13846153846153847;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.13333333333333333;
            result[3] += 0.26666666666666666;
            result[4] += 0;
            result[5] += 0.5666666666666667;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9978213507625272;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002178649237472767;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9848484848484849;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9108341323106424;
            result[1] += 0.014381591562799617;
            result[2] += 0;
            result[3] += 0.01725790987535954;
            result[4] += 0.05081495685522531;
            result[5] += 0.006711409395973154;
          } else {
            result[0] += 0.4244604316546763;
            result[1] += 0.03597122302158273;
            result[2] += 0.007194244604316547;
            result[3] += 0.12949640287769784;
            result[4] += 0.20863309352517986;
            result[5] += 0.19424460431654678;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0.02027027027027027;
            result[1] += 0.07432432432432433;
            result[2] += 0.10135135135135136;
            result[3] += 0.36486486486486486;
            result[4] += 0.14864864864864866;
            result[5] += 0.2905405405405405;
          } else {
            result[0] += 0.7954545454545454;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.011363636363636364;
            result[4] += 0.10227272727272728;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09615384615384616;
            result[3] += 0.40384615384615385;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28735632183908044;
            result[3] += 0.5057471264367817;
            result[4] += 0;
            result[5] += 0.20689655172413793;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6567164179104478;
            result[3] += 0.2835820895522388;
            result[4] += 0;
            result[5] += 0.05970149253731343;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7346938775510204;
            result[3] += 0.15306122448979592;
            result[4] += 0;
            result[5] += 0.11224489795918367;
          } else {
            result[0] += 0.6896551724137931;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0;
            result[4] += 0.2413793103448276;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7413793103448276;
            result[3] += 0.1896551724137931;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          } else {
            result[0] += 0.012804097311139566;
            result[1] += 0;
            result[2] += 0.9513444302176698;
            result[3] += 0.033290653008962875;
            result[4] += 0;
            result[5] += 0.0025608194622279133;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_0/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
