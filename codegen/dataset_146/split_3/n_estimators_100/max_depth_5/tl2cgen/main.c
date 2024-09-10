
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9839357429718876;
            result[5] += 0.004016064257028112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6923076923076923;
            result[5] += 0.3076923076923077;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
            result[4] += 0.4;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.005122950819672131;
            result[1] += 0.011270491803278689;
            result[2] += 0;
            result[3] += 0.039959016393442626;
            result[4] += 0.06147540983606557;
            result[5] += 0.882172131147541;
          } else {
            result[0] += 0.037383177570093455;
            result[1] += 0;
            result[2] += 0.07476635514018691;
            result[3] += 0.48598130841121495;
            result[4] += 0.028037383177570093;
            result[5] += 0.37383177570093457;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.05970149253731343;
            result[1] += 0.43283582089552236;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5074626865671642;
            result[5] += 0;
          } else {
            result[0] += 0.8495412844036697;
            result[1] += 0.0045871559633027525;
            result[2] += 0.01834862385321101;
            result[3] += 0.05045871559633028;
            result[4] += 0.05504587155963303;
            result[5] += 0.022018348623853212;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.020527859237536656;
            result[1] += 0.017595307917888565;
            result[2] += 0.03225806451612903;
            result[3] += 0.49266862170087977;
            result[4] += 0.11436950146627566;
            result[5] += 0.3225806451612903;
          } else {
            result[0] += 0.3053097345132743;
            result[1] += 0.008849557522123894;
            result[2] += 0.45132743362831856;
            result[3] += 0.05752212389380531;
            result[4] += 0.022123893805309734;
            result[5] += 0.15486725663716813;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
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
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)73.5) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.17857142857142858;
            result[2] += 0.17857142857142858;
            result[3] += 0.17857142857142858;
            result[4] += 0.07142857142857142;
            result[5] += 0.39285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.020833333333333332;
            result[2] += 0.08333333333333333;
            result[3] += 0.8125;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3448275862068966;
            result[3] += 0.6206896551724138;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0.0625;
            result[1] += 0.0625;
            result[2] += 0.6875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88) ) ) {
            result[0] += 0.014492753623188406;
            result[1] += 0;
            result[2] += 0.4057971014492754;
            result[3] += 0.5507246376811594;
            result[4] += 0;
            result[5] += 0.028985507246376812;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0.022727272727272728;
            result[4] += 0;
            result[5] += 0.022727272727272728;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)120.5) ) ) {
            result[0] += 0.0035714285714285713;
            result[1] += 0;
            result[2] += 0.8392857142857143;
            result[3] += 0.15714285714285714;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.974757281553398;
            result[3] += 0.02524271844660194;
            result[4] += 0;
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
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.012552301255230127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9832635983263599;
            result[5] += 0.004184100418410042;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)72) ) ) {
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
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.20588235294117646;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
            result[0] += 0.005215123859191656;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020860495436766623;
            result[4] += 0.024771838331160364;
            result[5] += 0.9491525423728814;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.9512195121951219;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010526315789473684;
            result[2] += 0;
            result[3] += 0.06315789473684211;
            result[4] += 0.21052631578947367;
            result[5] += 0.7157894736842105;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02727272727272727;
            result[3] += 0.18181818181818182;
            result[4] += 0.02727272727272727;
            result[5] += 0.7636363636363637;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += 0.007751937984496124;
            result[1] += 0;
            result[2] += 0.03875968992248062;
            result[3] += 0.4108527131782946;
            result[4] += 0.015503875968992248;
            result[5] += 0.5271317829457365;
          } else {
            result[0] += 0;
            result[1] += 0.0189873417721519;
            result[2] += 0.0379746835443038;
            result[3] += 0.7848101265822784;
            result[4] += 0;
            result[5] += 0.15822784810126583;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.96875;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0.12121212121212122;
            result[4] += 0.15151515151515152;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8604651162790697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13953488372093023;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.975609756097561;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          } else {
            result[0] += 0.034013605442176874;
            result[1] += 0.013605442176870748;
            result[2] += 0.04081632653061224;
            result[3] += 0.22448979591836735;
            result[4] += 0.09523809523809523;
            result[5] += 0.5918367346938775;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1440677966101695;
            result[1] += 0.2711864406779661;
            result[2] += 0.025423728813559324;
            result[3] += 0.00847457627118644;
            result[4] += 0.5338983050847458;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.8482523444160273;
            result[1] += 0.01278772378516624;
            result[2] += 0.020460358056265986;
            result[3] += 0.04092071611253197;
            result[4] += 0.056265984654731455;
            result[5] += 0.021312872975277068;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.38095238095238093;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1527777777777778;
            result[3] += 0.6319444444444444;
            result[4] += 0.020833333333333332;
            result[5] += 0.19444444444444445;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81.5) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.4782608695652174;
            result[2] += 0;
            result[3] += 0.43478260869565216;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009433962264150945;
            result[1] += 0;
            result[2] += 0.6981132075471699;
            result[3] += 0.169811320754717;
            result[4] += 0.009433962264150945;
            result[5] += 0.11320754716981134;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.1;
            result[3] += 0.3;
            result[4] += 0.05;
            result[5] += 0.5;
          } else {
            result[0] += 0.07547169811320754;
            result[1] += 0.03773584905660377;
            result[2] += 0.6415094339622641;
            result[3] += 0.18867924528301888;
            result[4] += 0;
            result[5] += 0.05660377358490566;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8148148148148148;
            result[1] += 0;
            result[2] += 0.18518518518518517;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007100591715976331;
            result[1] += 0;
            result[2] += 0.9301775147928995;
            result[3] += 0.05798816568047337;
            result[4] += 0;
            result[5] += 0.004733727810650888;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.01509433962264151;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9773584905660377;
            result[5] += 0.007547169811320755;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.42857142857142855;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0027739251040221915;
            result[1] += 0;
            result[2] += 0.004160887656033287;
            result[3] += 0.033287101248266296;
            result[4] += 0.033287101248266296;
            result[5] += 0.926490984743412;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08421052631578947;
            result[4] += 0.021052631578947368;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0.09047619047619047;
            result[1] += 0.009523809523809525;
            result[2] += 0.023809523809523808;
            result[3] += 0.41904761904761906;
            result[4] += 0.1;
            result[5] += 0.35714285714285715;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0.11009174311926606;
            result[1] += 0.1559633027522936;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7339449541284404;
            result[5] += 0;
          } else {
            result[0] += 0.8509615384615384;
            result[1] += 0.017628205128205128;
            result[2] += 0.002403846153846154;
            result[3] += 0.023237179487179488;
            result[4] += 0.05368589743589743;
            result[5] += 0.052083333333333336;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0.0321285140562249;
            result[2] += 0.09236947791164658;
            result[3] += 0.43373493975903615;
            result[4] += 0.028112449799196786;
            result[5] += 0.40160642570281124;
          } else {
            result[0] += 0.3352272727272727;
            result[1] += 0;
            result[2] += 0.4602272727272727;
            result[3] += 0.13636363636363635;
            result[4] += 0.05113636363636364;
            result[5] += 0.017045454545454544;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.0967741935483871;
            result[2] += 0.3548387096774194;
            result[3] += 0.22580645161290322;
            result[4] += 0.12903225806451613;
            result[5] += 0.1935483870967742;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.78125;
            result[4] += 0;
            result[5] += 0.15625;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.029411764705882353;
            result[2] += 0.7058823529411765;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.14705882352941177;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6571428571428571;
            result[3] += 0.22857142857142856;
            result[4] += 0;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0.009070294784580499;
            result[1] += 0;
            result[2] += 0.873015873015873;
            result[3] += 0.11564625850340136;
            result[4] += 0;
            result[5] += 0.0022675736961451248;
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
            result[0] += 0.01182033096926714;
            result[1] += 0;
            result[2] += 0.9598108747044918;
            result[3] += 0.028368794326241134;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.01762114537444934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.973568281938326;
            result[5] += 0.00881057268722467;
          } else {
            result[0] += 0.056338028169014086;
            result[1] += 0.014084507042253521;
            result[2] += 0.07042253521126761;
            result[3] += 0.07042253521126761;
            result[4] += 0.5915492957746479;
            result[5] += 0.19718309859154928;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30303030303030304;
            result[5] += 0.06060606060606061;
          } else {
            result[0] += 0.0024968789013732834;
            result[1] += 0;
            result[2] += 0.0012484394506866417;
            result[3] += 0.033707865168539325;
            result[4] += 0.04244694132334582;
            result[5] += 0.920099875156055;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0028089887640449437;
            result[1] += 0.008426966292134831;
            result[2] += 0.014044943820224719;
            result[3] += 0.4550561797752809;
            result[4] += 0.07865168539325842;
            result[5] += 0.4410112359550562;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.09693877551020408;
            result[1] += 0.22959183673469388;
            result[2] += 0.015306122448979591;
            result[3] += 0.05612244897959184;
            result[4] += 0.5561224489795918;
            result[5] += 0.04591836734693878;
          } else {
            result[0] += 0.9112318840579711;
            result[1] += 0.009057971014492754;
            result[2] += 0.007246376811594203;
            result[3] += 0.01358695652173913;
            result[4] += 0.043478260869565216;
            result[5] += 0.015398550724637682;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0.23577235772357724;
            result[3] += 0.34688346883468835;
            result[4] += 0.024390243902439025;
            result[5] += 0.38482384823848237;
          } else {
            result[0] += 0.7647058823529411;
            result[1] += 0.0196078431372549;
            result[2] += 0.12745098039215685;
            result[3] += 0;
            result[4] += 0.08823529411764706;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.3333333333333333;
            result[3] += 0.1111111111111111;
            result[4] += 0.4444444444444444;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0.02564102564102564;
            result[3] += 0.1282051282051282;
            result[4] += 0;
            result[5] += 0.8205128205128205;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612904;
            result[3] += 0.8064516129032259;
            result[4] += 0;
            result[5] += 0.16129032258064518;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.4583333333333333;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8623853211009175;
            result[3] += 0.11926605504587157;
            result[4] += 0;
            result[5] += 0.01834862385321101;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.7;
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0038314176245210726;
            result[1] += 0.0038314176245210726;
            result[2] += 0.8314176245210728;
            result[3] += 0.14942528735632185;
            result[4] += 0;
            result[5] += 0.011494252873563218;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9757575757575757;
            result[3] += 0.022222222222222223;
            result[4] += 0;
            result[5] += 0.00202020202020202;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0;
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
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.014084507042253521;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9753521126760564;
            result[5] += 0.01056338028169014;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6326530612244898;
            result[5] += 0.32653061224489793;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9871794871794872;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01282051282051282;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016260162601626016;
            result[3] += 0.024390243902439025;
            result[4] += 0.016260162601626018;
            result[5] += 0.9577235772357724;
          } else {
            result[0] += 0.017766497461928935;
            result[1] += 0.005076142131979695;
            result[2] += 0.02030456852791878;
            result[3] += 0.10913705583756345;
            result[4] += 0.15736040609137056;
            result[5] += 0.6903553299492385;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
            result[0] += 0.10638297872340426;
            result[1] += 0.09219858156028368;
            result[2] += 0.014184397163120567;
            result[3] += 0.14893617021276595;
            result[4] += 0.12056737588652482;
            result[5] += 0.5177304964539007;
          } else {
            result[0] += 0.8651026392961877;
            result[1] += 0.015640273704789834;
            result[2] += 0.0019550342130987292;
            result[3] += 0.013685239491691105;
            result[4] += 0.07624633431085044;
            result[5] += 0.02737047898338221;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0.014705882352941176;
            result[2] += 0.049019607843137254;
            result[3] += 0.6029411764705882;
            result[4] += 0.0196078431372549;
            result[5] += 0.29901960784313725;
          } else {
            result[0] += 0.28125;
            result[1] += 0.026041666666666668;
            result[2] += 0.3854166666666667;
            result[3] += 0.10416666666666667;
            result[4] += 0.020833333333333332;
            result[5] += 0.18229166666666666;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.19444444444444445;
            result[4] += 0.027777777777777776;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2786885245901639;
            result[3] += 0.5901639344262295;
            result[4] += 0;
            result[5] += 0.13114754098360656;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.36363636363636365;
            result[4] += 0.13636363636363635;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6335877862595419;
            result[3] += 0.3435114503816794;
            result[4] += 0;
            result[5] += 0.022900763358778626;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            result[0] += 0.7058823529411765;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.042424242424242434;
            result[1] += 0.0060606060606060615;
            result[2] += 0.8545454545454546;
            result[3] += 0.08484848484848487;
            result[4] += 0;
            result[5] += 0.012121212121212123;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8688524590163934;
            result[3] += 0.13114754098360656;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9833610648918469;
            result[3] += 0.016638935108153077;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010380622837370242;
            result[2] += 0;
            result[3] += 0.0034602076124567475;
            result[4] += 0.9515570934256056;
            result[5] += 0.03460207612456748;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8709677419354839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12903225806451613;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0199203187250996;
            result[4] += 0.04648074369189907;
            result[5] += 0.9335989375830013;
          } else {
            result[0] += 0.00881057268722467;
            result[1] += 0.013215859030837005;
            result[2] += 0.04405286343612335;
            result[3] += 0.2422907488986784;
            result[4] += 0.16299559471365638;
            result[5] += 0.5286343612334802;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.575;
            result[5] += 0.275;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.6363636363636364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.19161676646706588;
            result[1] += 0.2694610778443114;
            result[2] += 0.011976047904191617;
            result[3] += 0.029940119760479042;
            result[4] += 0.41916167664670656;
            result[5] += 0.07784431137724551;
          } else {
            result[0] += 0.8530434782608696;
            result[1] += 0.008695652173913044;
            result[2] += 0.011304347826086957;
            result[3] += 0.04521739130434783;
            result[4] += 0.04695652173913043;
            result[5] += 0.034782608695652174;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0.01084010840108401;
            result[1] += 0.01084010840108401;
            result[2] += 0.06233062330623306;
            result[3] += 0.4905149051490515;
            result[4] += 0.01084010840108401;
            result[5] += 0.4146341463414634;
          } else {
            result[0] += 0.3963963963963965;
            result[1] += 0.06306306306306307;
            result[2] += 0.33333333333333337;
            result[3] += 0.027027027027027035;
            result[4] += 0.13513513513513517;
            result[5] += 0.04504504504504505;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.7962962962962963;
            result[4] += 0;
            result[5] += 0.14814814814814814;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15217391304347827;
            result[3] += 0.3695652173913043;
            result[4] += 0;
            result[5] += 0.4782608695652174;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8928571428571429;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0.013157894736842105;
            result[1] += 0.013157894736842105;
            result[2] += 0.27631578947368424;
            result[3] += 0.5789473684210527;
            result[4] += 0.013157894736842105;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0.14035087719298248;
            result[1] += 0.01754385964912281;
            result[2] += 0.6666666666666667;
            result[3] += 0.12280701754385967;
            result[4] += 0;
            result[5] += 0.05263157894736843;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008917197452229299;
            result[1] += 0;
            result[2] += 0.9337579617834395;
            result[3] += 0.05477707006369427;
            result[4] += 0;
            result[5] += 0.0025477707006369425;
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)50) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01818181818181818;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.015444015444015446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9691119691119692;
            result[5] += 0.015444015444015446;
          } else {
            result[0] += 0.10638297872340427;
            result[1] += 0.14893617021276598;
            result[2] += 0;
            result[3] += 0.021276595744680854;
            result[4] += 0.5106382978723405;
            result[5] += 0.21276595744680854;
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
            result[0] += 0;
            result[1] += 0.9696969696969697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.25;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4351851851851852;
            result[5] += 0.14814814814814814;
          } else {
            result[0] += 0.8979057591623036;
            result[1] += 0.007853403141361256;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0549738219895288;
            result[5] += 0.03926701570680628;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006147540983606557;
            result[3] += 0.09016393442622951;
            result[4] += 0.05737704918032787;
            result[5] += 0.8463114754098361;
          } else {
            result[0] += 0.16463414634146342;
            result[1] += 0.05030487804878049;
            result[2] += 0.036585365853658534;
            result[3] += 0.27134146341463417;
            result[4] += 0.15701219512195122;
            result[5] += 0.3201219512195122;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014285714285714285;
            result[3] += 0.2571428571428571;
            result[4] += 0.014285714285714285;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69.5) ) ) {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2647058823529412;
            result[2] += 0.5294117647058824;
            result[3] += 0.058823529411764705;
            result[4] += 0.14705882352941177;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.5;
          } else {
            result[0] += 0.11111111111111112;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.22222222222222224;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            result[0] += 0.9799072642967543;
            result[1] += 0.001545595054095827;
            result[2] += 0.006182380216383308;
            result[3] += 0.001545595054095827;
            result[4] += 0.006182380216383308;
            result[5] += 0.004636785162287481;
          } else {
            result[0] += 0.40476190476190477;
            result[1] += 0.07142857142857142;
            result[2] += 0.4523809523809524;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.7017543859649122;
            result[4] += 0;
            result[5] += 0.12280701754385964;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.21875;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.46875;
          } else {
            result[0] += 0.018867924528301886;
            result[1] += 0;
            result[2] += 0.9245283018867925;
            result[3] += 0.03773584905660377;
            result[4] += 0;
            result[5] += 0.018867924528301886;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0.006211180124223603;
            result[1] += 0;
            result[2] += 0.7018633540372672;
            result[3] += 0.25465838509316774;
            result[4] += 0;
            result[5] += 0.03726708074534162;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9308176100628931;
            result[3] += 0.06918238993710692;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.6153846153846154;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013445378151260507;
            result[1] += 0;
            result[2] += 0.9445378151260505;
            result[3] += 0.042016806722689086;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96875;
            result[5] += 0.03125;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.896551724137931;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0.0010604453870625664;
            result[2] += 0.003181336161187699;
            result[3] += 0.04878048780487805;
            result[4] += 0.031813361611876985;
            result[5] += 0.8716861081654295;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0.3902439024390244;
            result[1] += 0.4634146341463415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0.12195121951219512;
          } else {
            result[0] += 0;
            result[1] += 0.011278195488721804;
            result[2] += 0.03759398496240601;
            result[3] += 0.5150375939849624;
            result[4] += 0.045112781954887216;
            result[5] += 0.39097744360902253;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)58) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.9956709956709957;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004329004329004329;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
            result[0] += 0.125;
            result[1] += 0.01875;
            result[2] += 0.01875;
            result[3] += 0.06875;
            result[4] += 0.74375;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.8736933797909407;
            result[1] += 0.005226480836236934;
            result[2] += 0.004355400696864111;
            result[3] += 0.028745644599303136;
            result[4] += 0.06445993031358885;
            result[5] += 0.023519163763066203;
          } else {
            result[0] += 0.3004115226337449;
            result[1] += 0.00823045267489712;
            result[2] += 0.13168724279835392;
            result[3] += 0.29218106995884774;
            result[4] += 0.0411522633744856;
            result[5] += 0.22633744855967078;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0.25;
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018518518518518517;
            result[3] += 0.9259259259259259;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.2962962962962963;
            result[4] += 0.037037037037037035;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0.013333333333333334;
            result[2] += 0.3466666666666667;
            result[3] += 0.56;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.043478260869565216;
            result[2] += 0.34782608695652173;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7942477876106194;
            result[3] += 0.168141592920354;
            result[4] += 0;
            result[5] += 0.03761061946902655;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0.0019193857965451055;
            result[1] += 0;
            result[2] += 0.9673704414587332;
            result[3] += 0.030710172744721688;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0036231884057971015;
            result[1] += 0.010869565217391304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9601449275362319;
            result[5] += 0.025362318840579712;
          } else {
            result[0] += 0.04444444444444445;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5777777777777778;
            result[5] += 0.3777777777777778;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05077574047954866;
            result[4] += 0.028208744710860368;
            result[5] += 0.921015514809591;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8064516129032259;
            result[1] += 0.05376344086021506;
            result[2] += 0;
            result[3] += 0.06451612903225808;
            result[4] += 0.07526881720430109;
            result[5] += 0;
          } else {
            result[0] += 0.012096774193548387;
            result[1] += 0;
            result[2] += 0.0846774193548387;
            result[3] += 0.22983870967741934;
            result[4] += 0.15725806451612903;
            result[5] += 0.5161290322580645;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
            result[0] += 0.8722222222222222;
            result[1] += 0.016666666666666666;
            result[2] += 0.005555555555555556;
            result[3] += 0.05555555555555555;
            result[4] += 0.044444444444444446;
            result[5] += 0.005555555555555556;
          } else {
            result[0] += 0.00984251968503937;
            result[1] += 0.013779527559055118;
            result[2] += 0.08858267716535433;
            result[3] += 0.42322834645669294;
            result[4] += 0.03937007874015748;
            result[5] += 0.4251968503937008;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            result[0] += 0.8958534233365478;
            result[1] += 0.021215043394406947;
            result[2] += 0.015429122468659597;
            result[3] += 0.016393442622950824;
            result[4] += 0.038572806171648995;
            result[5] += 0.012536162005785922;
          } else {
            result[0] += 0.18072289156626506;
            result[1] += 0.024096385542168676;
            result[2] += 0.6506024096385542;
            result[3] += 0.060240963855421686;
            result[4] += 0.012048192771084338;
            result[5] += 0.07228915662650602;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.9642857142857143;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.2608695652173913;
            result[4] += 0;
            result[5] += 0.6956521739130435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
            result[0] += 0.12903225806451613;
            result[1] += 0.25806451612903225;
            result[2] += 0.0967741935483871;
            result[3] += 0.41935483870967744;
            result[4] += 0;
            result[5] += 0.0967741935483871;
          } else {
            result[0] += 0.10714285714285714;
            result[1] += 0;
            result[2] += 0.7678571428571429;
            result[3] += 0.08928571428571429;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
            result[0] += 0.021897810218978107;
            result[1] += 0;
            result[2] += 0.613138686131387;
            result[3] += 0.3284671532846716;
            result[4] += 0;
            result[5] += 0.03649635036496351;
          } else {
            result[0] += 0.01851851851851852;
            result[1] += 0;
            result[2] += 0.8641975308641976;
            result[3] += 0.11728395061728396;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9097222222222222;
            result[3] += 0.0763888888888889;
            result[4] += 0;
            result[5] += 0.013888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5294117647058824;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.991578947368421;
            result[3] += 0.008421052631578947;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)39.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48148148148148145;
            result[5] += 0.5185185185185185;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7931034482758621;
            result[5] += 0.13793103448275862;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.16666666666666666;
            result[5] += 0.4444444444444444;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
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
            result[4] += 0.4;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009302325581395349;
            result[4] += 0.015503875968992248;
            result[5] += 0.9751937984496124;
          } else {
            result[0] += 0;
            result[1] += 0.009708737864077669;
            result[2] += 0;
            result[3] += 0.10679611650485436;
            result[4] += 0.0970873786407767;
            result[5] += 0.7864077669902912;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.11764705882352941;
            result[4] += 0.17647058823529413;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0.2571428571428571;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.08333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.28;
            result[4] += 0.12;
            result[5] += 0;
          } else {
            result[0] += 0.0021691973969631237;
            result[1] += 0.9934924078091106;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004338394793926247;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.3464052287581699;
            result[2] += 0;
            result[3] += 0.0392156862745098;
            result[4] += 0.43137254901960786;
            result[5] += 0.0718954248366013;
          } else {
            result[0] += 0.911764705882353;
            result[1] += 0.0043252595155709355;
            result[2] += 0.006055363321799309;
            result[3] += 0.014705882352941178;
            result[4] += 0.05103806228373703;
            result[5] += 0.012110726643598618;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04716981132075472;
            result[3] += 0.4339622641509434;
            result[4] += 0.02830188679245283;
            result[5] += 0.49056603773584906;
          } else {
            result[0] += 0.3106796116504854;
            result[1] += 0.08737864077669903;
            result[2] += 0.39805825242718446;
            result[3] += 0.08737864077669903;
            result[4] += 0.11650485436893204;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.029411764705882353;
            result[5] += 0.8529411764705882;
          } else {
            result[0] += 0.004651162790697675;
            result[1] += 0.013953488372093025;
            result[2] += 0.2418604651162791;
            result[3] += 0.46976744186046515;
            result[4] += 0.004651162790697675;
            result[5] += 0.2651162790697675;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0.11999999999999997;
            result[1] += 0;
            result[2] += 0.5599999999999999;
            result[3] += 0.15999999999999998;
            result[4] += 0.059999999999999984;
            result[5] += 0.09999999999999998;
          } else {
            result[0] += 0.0033783783783783786;
            result[1] += 0;
            result[2] += 0.9222972972972973;
            result[3] += 0.0731981981981982;
            result[4] += 0;
            result[5] += 0.0011261261261261261;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.00510204081632653;
            result[1] += 0.00510204081632653;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9642857142857143;
            result[5] += 0.025510204081632654;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9347826086956522;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06521739130434782;
            result[5] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.09411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.4470588235294118;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025991792065663474;
            result[4] += 0.023255813953488372;
            result[5] += 0.9507523939808481;
          } else {
            result[0] += 0;
            result[1] += 0.023391812865497075;
            result[2] += 0;
            result[3] += 0.1286549707602339;
            result[4] += 0.21637426900584794;
            result[5] += 0.631578947368421;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0.015503875968992248;
            result[1] += 0.007751937984496124;
            result[2] += 0.03875968992248062;
            result[3] += 0.2558139534883721;
            result[4] += 0.09302325581395349;
            result[5] += 0.5891472868217055;
          } else {
            result[0] += 0;
            result[1] += 0.026143790849673203;
            result[2] += 0.032679738562091505;
            result[3] += 0.7320261437908496;
            result[4] += 0;
            result[5] += 0.20915032679738563;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.4375;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.125;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0.9789473684210527;
            result[2] += 0;
            result[3] += 0.004210526315789474;
            result[4] += 0.01263157894736842;
            result[5] += 0.004210526315789474;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8548812664907651;
            result[1] += 0.026385224274406333;
            result[2] += 0;
            result[3] += 0.005277044854881266;
            result[4] += 0.10202286719437115;
            result[5] += 0.011433597185576077;
          } else {
            result[0] += 0.3508771929824561;
            result[1] += 0.04678362573099415;
            result[2] += 0.14035087719298245;
            result[3] += 0.11695906432748537;
            result[4] += 0.23391812865497075;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0.05241935483870968;
            result[2] += 0.04032258064516129;
            result[3] += 0.3790322580645161;
            result[4] += 0.0846774193548387;
            result[5] += 0.4112903225806452;
          } else {
            result[0] += 0.31543624161073824;
            result[1] += 0;
            result[2] += 0.5167785234899329;
            result[3] += 0.06711409395973154;
            result[4] += 0.03355704697986577;
            result[5] += 0.06711409395973154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07352941176470588;
            result[3] += 0.5735294117647058;
            result[4] += 0.029411764705882353;
            result[5] += 0.3235294117647059;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.07692307692307693;
            result[4] += 0.20512820512820512;
            result[5] += 0.5641025641025641;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0.03174603174603175;
            result[1] += 0.015873015873015876;
            result[2] += 0.8571428571428572;
            result[3] += 0.09523809523809525;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0.0625;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0034305317324185253;
            result[1] += 0.0017152658662092626;
            result[2] += 0.8644939965694683;
            result[3] += 0.11835334476843912;
            result[4] += 0;
            result[5] += 0.012006861063464838;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008097165991902834;
            result[1] += 0;
            result[2] += 0.9919028340080972;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0.005050505050505051;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0.04040404040404041;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02127659574468085;
            result[4] += 0.19148936170212766;
            result[5] += 0.7872340425531915;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)58) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.3076923076923077;
            result[4] += 0.5384615384615384;
            result[5] += 0;
          } else {
            result[0] += 0.9342105263157895;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0.013157894736842105;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.56;
            result[5] += 0.44;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012406947890818859;
            result[3] += 0.04218362282878412;
            result[4] += 0.02729528535980149;
            result[5] += 0.9292803970223326;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.6666666666666666;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18604651162790697;
            result[4] += 0.06976744186046512;
            result[5] += 0.7441860465116279;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            result[0] += 0.012987012987012988;
            result[1] += 0.012987012987012988;
            result[2] += 0;
            result[3] += 0.16233766233766234;
            result[4] += 0.045454545454545456;
            result[5] += 0.7662337662337663;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05128205128205128;
            result[3] += 0.05128205128205128;
            result[4] += 0.5897435897435898;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.026490066225165563;
            result[1] += 0.029801324503311258;
            result[2] += 0.04966887417218543;
            result[3] += 0.5728476821192053;
            result[4] += 0.019867549668874173;
            result[5] += 0.30132450331125826;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.8484848484848485;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15151515151515152;
            result[5] += 0;
          } else {
            result[0] += 0.07575757575757576;
            result[1] += 0.12121212121212122;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.803030303030303;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.9863945578231292;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013605442176870748;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.19230769230769232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0.8995305164319248;
            result[1] += 0.003755868544600939;
            result[2] += 0.011267605633802818;
            result[3] += 0.020657276995305163;
            result[4] += 0.0431924882629108;
            result[5] += 0.0215962441314554;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9743589743589743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.22727272727272727;
            result[4] += 0.13636363636363635;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.6703296703296703;
            result[4] += 0;
            result[5] += 0.17582417582417584;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.37777777777777777;
            result[4] += 0.044444444444444446;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8636363636363638;
            result[3] += 0.12987012987012989;
            result[4] += 0;
            result[5] += 0.006493506493506495;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0.046875;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0.01818181818181818;
            result[2] += 0.5636363636363636;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.14545454545454545;
          } else {
            result[0] += 0.013836477987421384;
            result[1] += 0;
            result[2] += 0.9320754716981132;
            result[3] += 0.04779874213836478;
            result[4] += 0.0012578616352201257;
            result[5] += 0.005031446540880503;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9954954954954955;
            result[5] += 0.0045045045045045045;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.2631578947368421;
            result[5] += 0.631578947368421;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.92;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.04;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.6346153846153846;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36538461538461536;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011933174224343676;
            result[3] += 0.045346062052505964;
            result[4] += 0.0477326968973747;
            result[5] += 0.905727923627685;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            result[0] += 0.03879310344827586;
            result[1] += 0.017241379310344827;
            result[2] += 0.04741379310344827;
            result[3] += 0.3103448275862069;
            result[4] += 0.05172413793103448;
            result[5] += 0.5344827586206896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007751937984496124;
            result[3] += 0.8062015503875969;
            result[4] += 0;
            result[5] += 0.18604651162790697;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0.02;
            result[3] += 0;
            result[4] += 0.94;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0022675736961451248;
            result[1] += 0.9931972789115646;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0045351473922902496;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1414141414141414;
            result[1] += 0.1717171717171717;
            result[2] += 0;
            result[3] += 0.050505050505050504;
            result[4] += 0.6060606060606061;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.8681222707423581;
            result[1] += 0.015720524017467253;
            result[2] += 0.0008733624454148473;
            result[3] += 0.023580786026200878;
            result[4] += 0.07074235807860263;
            result[5] += 0.020960698689956335;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.018050541516245487;
            result[1] += 0;
            result[2] += 0.16606498194945848;
            result[3] += 0.45126353790613716;
            result[4] += 0.05054151624548736;
            result[5] += 0.3140794223826715;
          } else {
            result[0] += 0.4019607843137255;
            result[1] += 0.014705882352941176;
            result[2] += 0.5245098039215687;
            result[3] += 0.024509803921568627;
            result[4] += 0.004901960784313725;
            result[5] += 0.029411764705882353;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0.9714285714285714;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0.046511627906976744;
            result[2] += 0.046511627906976744;
            result[3] += 0.46511627906976744;
            result[4] += 0;
            result[5] += 0.3953488372093023;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.6875;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8478260869565218;
            result[3] += 0.08695652173913045;
            result[4] += 0;
            result[5] += 0.06521739130434784;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6223776223776224;
            result[3] += 0.35664335664335667;
            result[4] += 0.013986013986013986;
            result[5] += 0.006993006993006993;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9136690647482014;
            result[3] += 0.07194244604316546;
            result[4] += 0;
            result[5] += 0.014388489208633094;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9296875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0078125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9909638554216867;
            result[3] += 0.009036144578313253;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9861751152073732;
            result[5] += 0.013824884792626729;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
            result[5] += 0.9655172413793104;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009554140127388535;
            result[4] += 0.011146496815286623;
            result[5] += 0.9792993630573248;
          } else {
            result[0] += 0;
            result[1] += 0.017241379310344827;
            result[2] += 0;
            result[3] += 0.1724137931034483;
            result[4] += 0.1206896551724138;
            result[5] += 0.6896551724137931;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.019230769230769232;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.5384615384615384;
            result[5] += 0.40384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0.006756756756756757;
            result[2] += 0;
            result[3] += 0.14189189189189189;
            result[4] += 0.04054054054054054;
            result[5] += 0.8108108108108109;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.6153846153846154;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.00909090909090909;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0.02727272727272727;
            result[5] += 0.6909090909090909;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017094017094017096;
            result[3] += 0.8290598290598291;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0.20689655172413793;
            result[4] += 0.06896551724137931;
            result[5] += 0.6896551724137931;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
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
            result[3] += 0.03333333333333333;
            result[4] += 0.9666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)123) ) ) {
            result[0] += 0.8418907905460473;
            result[1] += 0.007334963325183374;
            result[2] += 0.0032599837000814994;
            result[3] += 0.021189894050529748;
            result[4] += 0.10594947025264874;
            result[5] += 0.020374898125509373;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
            result[0] += 0.09502262443438914;
            result[1] += 0.049773755656108594;
            result[2] += 0.19457013574660634;
            result[3] += 0.3031674208144796;
            result[4] += 0.08597285067873303;
            result[5] += 0.27149321266968324;
          } else {
            result[0] += 0.9393939393939394;
            result[1] += 0;
            result[2] += 0.06060606060606061;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0.013157894736842105;
            result[5] += 0.8289473684210527;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18823529411764706;
            result[3] += 0.4588235294117647;
            result[4] += 0;
            result[5] += 0.35294117647058826;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)121) ) ) {
            result[0] += 0.056818181818181816;
            result[1] += 0.056818181818181816;
            result[2] += 0.36363636363636365;
            result[3] += 0.2159090909090909;
            result[4] += 0.056818181818181816;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3157894736842105;
            result[3] += 0.5964912280701754;
            result[4] += 0;
            result[5] += 0.08771929824561403;
          } else {
            result[0] += 0.025527192008879027;
            result[1] += 0;
            result[2] += 0.895671476137625;
            result[3] += 0.07325194228634851;
            result[4] += 0;
            result[5] += 0.0055493895671476145;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99.5) ) ) {
            result[0] += 0.017064846416382253;
            result[1] += 0.0034129692832764505;
            result[2] += 0;
            result[3] += 0.0034129692832764505;
            result[4] += 0.9010238907849829;
            result[5] += 0.07508532423208192;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.2;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.9797297297297297;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02027027027027027;
            result[5] += 0;
          } else {
            result[0] += 0.04411764705882353;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.5;
            result[5] += 0.36764705882352944;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.0392156862745098;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.6274509803921569;
            result[5] += 0.2549019607843137;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001199040767386091;
            result[3] += 0.03597122302158273;
            result[4] += 0.04196642685851319;
            result[5] += 0.920863309352518;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0.34210526315789475;
            result[1] += 0.02631578947368421;
            result[2] += 0;
            result[3] += 0.14473684210526316;
            result[4] += 0.39473684210526316;
            result[5] += 0.09210526315789473;
          } else {
            result[0] += 0.00303951367781155;
            result[1] += 0.0182370820668693;
            result[2] += 0.00911854103343465;
            result[3] += 0.41033434650455924;
            result[4] += 0.0486322188449848;
            result[5] += 0.5106382978723404;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9954853273137697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004514672686230248;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0.03333333333333333;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363635;
            result[5] += 0.13636363636363635;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.5416666666666666;
            result[2] += 0.027777777777777776;
            result[3] += 0.041666666666666664;
            result[4] += 0.3055555555555556;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.9066666666666666;
            result[1] += 0.006153846153846154;
            result[2] += 0;
            result[3] += 0.028717948717948718;
            result[4] += 0.04;
            result[5] += 0.018461538461538463;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0.04147465437788019;
            result[1] += 0.0783410138248848;
            result[2] += 0.16129032258064518;
            result[3] += 0.37788018433179726;
            result[4] += 0.05990783410138249;
            result[5] += 0.2811059907834102;
          } else {
            result[0] += 0.8641975308641975;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0.09876543209876543;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05813953488372093;
            result[3] += 0.8604651162790697;
            result[4] += 0;
            result[5] += 0.08139534883720931;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.28125;
            result[4] += 0;
            result[5] += 0.53125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.425531914893617;
            result[3] += 0.40425531914893614;
            result[4] += 0;
            result[5] += 0.1702127659574468;
          } else {
            result[0] += 0.004273504273504274;
            result[1] += 0;
            result[2] += 0.8376068376068376;
            result[3] += 0.1581196581196581;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.0060882800608828;
            result[1] += 0;
            result[2] += 0.9421613394216134;
            result[3] += 0.0471841704718417;
            result[4] += 0.0015220700152207;
            result[5] += 0.0030441400304414;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.9926470588235294;
            result[5] += 0.007352941176470588;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0.05263157894736842;
            result[5] += 0.7894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.631578947368421;
            result[5] += 0.3684210526315789;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.4;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0030211480362537764;
            result[3] += 0.015105740181268883;
            result[4] += 0.00906344410876133;
            result[5] += 0.972809667673716;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          } else {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
            result[0] += 0.050955414012738856;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006369426751592357;
            result[4] += 0.8407643312101911;
            result[5] += 0.10191082802547771;
          } else {
            result[0] += 0;
            result[1] += 0.68;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
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
            result[3] += 0.20261437908496732;
            result[4] += 0.0392156862745098;
            result[5] += 0.7581699346405228;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.004219409282700422;
            result[2] += 0.03375527426160337;
            result[3] += 0.6160337552742616;
            result[4] += 0.008438818565400843;
            result[5] += 0.33755274261603374;
          } else {
            result[0] += 0.11363636363636366;
            result[1] += 0.02272727272727273;
            result[2] += 0.45454545454545464;
            result[3] += 0.04545454545454546;
            result[4] += 0.04545454545454546;
            result[5] += 0.31818181818181823;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09523809523809523;
            result[1] += 0.6190476190476191;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.6938775510204082;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30612244897959184;
            result[5] += 0;
          } else {
            result[0] += 0.0056179775280898875;
            result[1] += 0.14606741573033707;
            result[2] += 0;
            result[3] += 0.1853932584269663;
            result[4] += 0.09550561797752809;
            result[5] += 0.5674157303370787;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.17880794701986757;
            result[1] += 0.3112582781456954;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.490066225165563;
            result[5] += 0.019867549668874177;
          } else {
            result[0] += 0.871513102282333;
            result[1] += 0.0016906170752324597;
            result[2] += 0.01098901098901099;
            result[3] += 0.03634826711749789;
            result[4] += 0.05409974640743871;
            result[5] += 0.0253592561284869;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15151515151515152;
            result[3] += 0.5606060606060606;
            result[4] += 0.005050505050505051;
            result[5] += 0.2828282828282828;
          } else {
            result[0] += 0.007633587786259542;
            result[1] += 0;
            result[2] += 0.6335877862595419;
            result[3] += 0.2595419847328244;
            result[4] += 0.022900763358778626;
            result[5] += 0.07633587786259542;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            result[0] += 0.3018867924528302;
            result[1] += 0.09433962264150944;
            result[2] += 0.33962264150943394;
            result[3] += 0.16981132075471697;
            result[4] += 0.03773584905660377;
            result[5] += 0.05660377358490566;
          } else {
            result[0] += 0.021834061135371178;
            result[1] += 0;
            result[2] += 0.8034934497816594;
            result[3] += 0.11790393013100436;
            result[4] += 0;
            result[5] += 0.056768558951965066;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117.5) ) ) {
            result[0] += 0.03636363636363636;
            result[1] += 0;
            result[2] += 0.7636363636363637;
            result[3] += 0.16363636363636364;
            result[4] += 0;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0.4444444444444445;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9731012658227848;
            result[3] += 0.02531645569620253;
            result[4] += 0;
            result[5] += 0.0015822784810126582;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953271028037384;
            result[5] += 0.004672897196261682;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.2727272727272727;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
            result[0] += 0.01639344262295082;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.22950819672131148;
            result[5] += 0.7213114754098361;
          } else {
            result[0] += 0.1739130434782609;
            result[1] += 0.10869565217391305;
            result[2] += 0.04347826086956522;
            result[3] += 0.2173913043478261;
            result[4] += 0.39130434782608703;
            result[5] += 0.06521739130434784;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0015503875968992248;
            result[3] += 0.024806201550387597;
            result[4] += 0.015503875968992248;
            result[5] += 0.958139534883721;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.01834862385321101;
            result[2] += 0;
            result[3] += 0.2018348623853211;
            result[4] += 0.0581039755351682;
            result[5] += 0.7217125382262997;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016666666666666666;
            result[3] += 0.2;
            result[4] += 0.38333333333333336;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
            result[0] += 0.015748031496062992;
            result[1] += 0.03937007874015748;
            result[2] += 0.023622047244094488;
            result[3] += 0.4881889763779528;
            result[4] += 0.07086614173228346;
            result[5] += 0.36220472440944884;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.056179775280898875;
            result[3] += 0.898876404494382;
            result[4] += 0;
            result[5] += 0.0449438202247191;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.09411764705882353;
            result[2] += 0.03529411764705882;
            result[3] += 0;
            result[4] += 0.8705882352941177;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.7272727272727273;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
            result[0] += 0.0625;
            result[1] += 0.8125;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0.13157894736842105;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7631578947368421;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.14814814814814814;
            result[1] += 0.8148148148148148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.9187996469549868;
            result[1] += 0.0035304501323918805;
            result[2] += 0;
            result[3] += 0.021182700794351285;
            result[4] += 0.046778464254192416;
            result[5] += 0.00970873786407767;
          } else {
            result[0] += 0.2848837209302326;
            result[1] += 0.017441860465116282;
            result[2] += 0.2732558139534884;
            result[3] += 0.13953488372093026;
            result[4] += 0.1046511627906977;
            result[5] += 0.1802325581395349;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0.017543859649122806;
            result[2] += 0.21929824561403508;
            result[3] += 0.32456140350877194;
            result[4] += 0.008771929824561403;
            result[5] += 0.4298245614035088;
          } else {
            result[0] += 0.2631578947368421;
            result[1] += 0.5526315789473685;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18421052631578946;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.57421875;
            result[3] += 0.33203125;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0.049019607843137254;
            result[1] += 0;
            result[2] += 0.9019607843137255;
            result[3] += 0.049019607843137254;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.005763688760806916;
            result[1] += 0;
            result[2] += 0.9582132564841499;
            result[3] += 0.03314121037463977;
            result[4] += 0;
            result[5] += 0.002881844380403458;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.23809523809523808;
            result[5] += 0.5238095238095238;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0.014705882352941178;
            result[1] += 0.2794117647058824;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6029411764705883;
            result[5] += 0.10294117647058824;
          } else {
            result[0] += 0.029322548028311426;
            result[1] += 0.003033367037411527;
            result[2] += 0.0010111223458038423;
            result[3] += 0.06875631951466127;
            result[4] += 0.0262891809908999;
            result[5] += 0.871587462082912;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0.022857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.76;
            result[4] += 0;
            result[5] += 0.21714285714285714;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.009345794392523364;
            result[1] += 0.1308411214953271;
            result[2] += 0.028037383177570093;
            result[3] += 0.009345794392523364;
            result[4] += 0.7850467289719626;
            result[5] += 0.037383177570093455;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8695652173913043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13043478260869565;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.0989010989010989;
            result[2] += 0.02197802197802198;
            result[3] += 0.0989010989010989;
            result[4] += 0.26373626373626374;
            result[5] += 0.37362637362637363;
          } else {
            result[0] += 0.8538657604078165;
            result[1] += 0.022090059473237042;
            result[2] += 0.008496176720475786;
            result[3] += 0.022939677145284623;
            result[4] += 0.07986406117247238;
            result[5] += 0.012744265080713678;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            result[0] += 0.024539877300613498;
            result[1] += 0.03987730061349693;
            result[2] += 0.22699386503067484;
            result[3] += 0.3220858895705521;
            result[4] += 0.08282208588957055;
            result[5] += 0.30368098159509205;
          } else {
            result[0] += 0.8210526315789474;
            result[1] += 0;
            result[2] += 0.08421052631578947;
            result[3] += 0;
            result[4] += 0.08421052631578947;
            result[5] += 0.010526315789473684;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8536585365853658;
            result[4] += 0;
            result[5] += 0.14634146341463414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2380952380952381;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0.4761904761904762;
          } else {
            result[0] += 0.004830917874396135;
            result[1] += 0;
            result[2] += 0.714975845410628;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.057971014492753624;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0.959349593495935;
            result[3] += 0.032520325203252036;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)119) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8717948717948718;
            result[3] += 0.1282051282051282;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)114) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9976470588235294;
            result[3] += 0.002352941176470588;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48148148148148145;
            result[5] += 0.5185185185185185;
          } else {
            result[0] += 0.9473684210526315;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.06521739130434782;
            result[4] += 0.6521739130434783;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0;
            result[1] += 0.005980861244019139;
            result[2] += 0.0035885167464114833;
            result[3] += 0.03588516746411483;
            result[4] += 0.03349282296650718;
            result[5] += 0.9210526315789473;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.2018348623853211;
            result[2] += 0;
            result[3] += 0.09174311926605505;
            result[4] += 0.11009174311926606;
            result[5] += 0.5963302752293578;
          } else {
            result[0] += 0.005;
            result[1] += 0;
            result[2] += 0.025;
            result[3] += 0.665;
            result[4] += 0.035;
            result[5] += 0.27;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.10967741935483871;
            result[1] += 0.2129032258064516;
            result[2] += 0.012903225806451613;
            result[3] += 0.012903225806451613;
            result[4] += 0.6193548387096774;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0.8597402597402598;
            result[1] += 0.005194805194805196;
            result[2] += 0.006926406926406927;
            result[3] += 0.029437229437229442;
            result[4] += 0.05541125541125542;
            result[5] += 0.043290043290043295;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            result[0] += 0.05475504322766571;
            result[1] += 0.02881844380403458;
            result[2] += 0.276657060518732;
            result[3] += 0.2881844380403458;
            result[4] += 0.06340057636887608;
            result[5] += 0.2881844380403458;
          } else {
            result[0] += 0.7681159420289855;
            result[1] += 0;
            result[2] += 0.10144927536231885;
            result[3] += 0;
            result[4] += 0.13043478260869565;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.92;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10869565217391304;
            result[3] += 0.8043478260869565;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0.5625;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0.2727272727272727;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0;
            result[2] += 0.7380952380952381;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6292134831460674;
            result[3] += 0.3707865168539326;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8835616438356164;
            result[3] += 0.08904109589041095;
            result[4] += 0;
            result[5] += 0.0273972602739726;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0066844919786096255;
            result[1] += 0;
            result[2] += 0.9585561497326203;
            result[3] += 0.03342245989304813;
            result[4] += 0;
            result[5] += 0.001336898395721925;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0.07547169811320754;
            result[2] += 0;
            result[3] += 0.03773584905660377;
            result[4] += 0.5471698113207547;
            result[5] += 0.3018867924528302;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.008403361344537815;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04081632653061224;
            result[4] += 0.03841536614645858;
            result[5] += 0.9123649459783914;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0.1559633027522936;
            result[1] += 0.03669724770642202;
            result[2] += 0;
            result[3] += 0.11926605504587157;
            result[4] += 0.07339449541284404;
            result[5] += 0.6146788990825688;
          } else {
            result[0] += 0.008733624454148471;
            result[1] += 0;
            result[2] += 0.004366812227074236;
            result[3] += 0.6506550218340611;
            result[4] += 0.021834061135371178;
            result[5] += 0.314410480349345;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.00234192037470726;
            result[1] += 0.9929742388758782;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00468384074941452;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.23976608187134502;
            result[1] += 0.13450292397660818;
            result[2] += 0;
            result[3] += 0.029239766081871343;
            result[4] += 0.49707602339181284;
            result[5] += 0.09941520467836257;
          } else {
            result[0] += 0.8499550763701708;
            result[1] += 0.013477088948787063;
            result[2] += 0;
            result[3] += 0.02425876010781671;
            result[4] += 0.0664869721473495;
            result[5] += 0.04582210242587601;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0.0163265306122449;
            result[1] += 0.00816326530612245;
            result[2] += 0.11428571428571428;
            result[3] += 0.3877551020408163;
            result[4] += 0.02857142857142857;
            result[5] += 0.4448979591836735;
          } else {
            result[0] += 0.455128205128205;
            result[1] += 0.025641025641025633;
            result[2] += 0.37179487179487175;
            result[3] += 0.051282051282051266;
            result[4] += 0.051282051282051266;
            result[5] += 0.044871794871794865;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0.5;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07936507936507936;
            result[4] += 0.07936507936507936;
            result[5] += 0.8412698412698413;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.009345794392523364;
            result[2] += 0.12149532710280374;
            result[3] += 0.5887850467289719;
            result[4] += 0;
            result[5] += 0.2803738317757009;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)125.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.09375;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9259259259259259;
            result[1] += 0;
            result[2] += 0.07407407407407407;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0.11111111111111113;
            result[1] += 0;
            result[2] += 0.40000000000000013;
            result[3] += 0.33333333333333337;
            result[4] += 0.04444444444444445;
            result[5] += 0.11111111111111113;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.01662049861495845;
            result[1] += 0;
            result[2] += 0.8227146814404432;
            result[3] += 0.16066481994459833;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9662288930581614;
            result[3] += 0.03377110694183865;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.005555555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9722222222222222;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0.5409836065573771;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4262295081967213;
            result[5] += 0.03278688524590164;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.005537098560354375;
            result[2] += 0.0033222591362126247;
            result[3] += 0.04983388704318937;
            result[4] += 0.06866002214839424;
            result[5] += 0.8726467331118494;
          } else {
            result[0] += 0;
            result[1] += 0.007518796992481203;
            result[2] += 0.015037593984962405;
            result[3] += 0.5150375939849624;
            result[4] += 0.05639097744360902;
            result[5] += 0.40601503759398494;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
            result[0] += 0.030303030303030307;
            result[1] += 0.8787878787878789;
            result[2] += 0.030303030303030307;
            result[3] += 0.015151515151515154;
            result[4] += 0.04545454545454546;
            result[5] += 0;
          } else {
            result[0] += 0.1530054644808743;
            result[1] += 0.06557377049180327;
            result[2] += 0.04371584699453551;
            result[3] += 0.021857923497267756;
            result[4] += 0.6448087431693988;
            result[5] += 0.0710382513661202;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.8910034602076125;
            result[1] += 0.020761245674740483;
            result[2] += 0;
            result[3] += 0.012110726643598616;
            result[4] += 0.06747404844290658;
            result[5] += 0.00865051903114187;
          } else {
            result[0] += 0.20599250936329588;
            result[1] += 0;
            result[2] += 0.1797752808988764;
            result[3] += 0.2958801498127341;
            result[4] += 0.02247191011235955;
            result[5] += 0.2958801498127341;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5918367346938775;
            result[4] += 0;
            result[5] += 0.40816326530612246;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.031746031746031744;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.9206349206349206;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0392156862745098;
            result[3] += 0.37254901960784315;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0.012048192771084338;
            result[1] += 0.012048192771084338;
            result[2] += 0.4939759036144578;
            result[3] += 0.3253012048192771;
            result[4] += 0.03614457831325301;
            result[5] += 0.12048192771084337;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0341880341880342;
            result[1] += 0;
            result[2] += 0.754985754985755;
            result[3] += 0.17663817663817666;
            result[4] += 0.005698005698005699;
            result[5] += 0.028490028490028494;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7368421052631579;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.972972972972973;
            result[3] += 0.02702702702702703;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9873417721518988;
            result[3] += 0.012658227848101266;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
            result[0] += 0.021604938271604937;
            result[1] += 0.027777777777777776;
            result[2] += 0.009259259259259259;
            result[3] += 0;
            result[4] += 0.8765432098765432;
            result[5] += 0.06481481481481481;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0.2;
            result[1] += 0.18461538461538463;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.9560723514211886;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.031007751937984496;
            result[5] += 0.012919896640826873;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.1891891891891892;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5945945945945946;
            result[5] += 0.21621621621621623;
          } else {
            result[0] += 0.004405286343612335;
            result[1] += 0.003303964757709251;
            result[2] += 0;
            result[3] += 0.06277533039647577;
            result[4] += 0.03854625550660793;
            result[5] += 0.8909691629955947;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0.027950310559006212;
            result[1] += 0.026397515527950312;
            result[2] += 0.034161490683229816;
            result[3] += 0.44254658385093165;
            result[4] += 0.09472049689440994;
            result[5] += 0.37422360248447206;
          } else {
            result[0] += 0.36466165413533835;
            result[1] += 0.07142857142857142;
            result[2] += 0.15037593984962405;
            result[3] += 0.12781954887218044;
            result[4] += 0.18796992481203006;
            result[5] += 0.09774436090225563;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.29166666666666674;
            result[1] += 0;
            result[2] += 0.08333333333333334;
            result[3] += 0.45833333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.8055555555555556;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
            result[0] += 0.96875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03125;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82) ) ) {
            result[0] += 0.9863013698630136;
            result[1] += 0;
            result[2] += 0.00684931506849315;
            result[3] += 0;
            result[4] += 0.00684931506849315;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.27906976744186046;
            result[3] += 0.6046511627906976;
            result[4] += 0;
            result[5] += 0.11627906976744186;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5333333333333334;
            result[3] += 0.4222222222222223;
            result[4] += 0;
            result[5] += 0.04444444444444445;
          } else {
            result[0] += 0.057692307692307696;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.09615384615384616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0023584905660377358;
            result[1] += 0;
            result[2] += 0.8679245283018868;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.0047169811320754715;
          } else {
            result[0] += 0.011904761904761906;
            result[1] += 0;
            result[2] += 0.9738095238095239;
            result[3] += 0.011904761904761906;
            result[4] += 0;
            result[5] += 0.0023809523809523816;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
            result[0] += 0.004901960784313725;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9656862745098039;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.6835443037974683;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11392405063291139;
            result[5] += 0.20253164556962025;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007022471910112359;
            result[3] += 0.026685393258426966;
            result[4] += 0.026685393258426966;
            result[5] += 0.9396067415730337;
          } else {
            result[0] += 0.0165016501650165;
            result[1] += 0.019801980198019802;
            result[2] += 0.0165016501650165;
            result[3] += 0.1782178217821782;
            result[4] += 0.11551155115511551;
            result[5] += 0.6534653465346535;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0.08108108108108109;
            result[2] += 0;
            result[3] += 0.1891891891891892;
            result[4] += 0.02702702702702703;
            result[5] += 0.6756756756756757;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7364341085271318;
            result[4] += 0.046511627906976744;
            result[5] += 0.21705426356589147;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.8888888888888888;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.6428571428571429;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.14285714285714285;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.004640371229698376;
            result[1] += 0.9930394431554525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002320185614849188;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0.7308970099667773;
            result[1] += 0.04485049833887043;
            result[2] += 0.019933554817275743;
            result[3] += 0.01661129568106312;
            result[4] += 0.1627906976744186;
            result[5] += 0.024916943521594678;
          } else {
            result[0] += 0.10914454277286136;
            result[1] += 0.038348082595870206;
            result[2] += 0.07669616519174041;
            result[3] += 0.31268436578171094;
            result[4] += 0.18584070796460178;
            result[5] += 0.27728613569321536;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.9748322147651006;
            result[1] += 0.0016778523489932886;
            result[2] += 0.013422818791946308;
            result[3] += 0;
            result[4] += 0.010067114093959731;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0.027522935779816515;
            result[2] += 0.027522935779816515;
            result[3] += 0.27522935779816515;
            result[4] += 0.08256880733944955;
            result[5] += 0.5871559633027523;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
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
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5181818181818182;
            result[3] += 0.4090909090909091;
            result[4] += 0;
            result[5] += 0.07272727272727272;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.02564102564102564;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.8666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0.3478260869565218;
            result[1] += 0;
            result[2] += 0.5652173913043479;
            result[3] += 0;
            result[4] += 0.02173913043478261;
            result[5] += 0.06521739130434784;
          } else {
            result[0] += 0.008363201911589008;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.06093189964157706;
            result[4] += 0;
            result[5] += 0.0047789725209080045;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.00411522633744856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9794238683127572;
            result[5] += 0.01646090534979424;
          } else {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48;
            result[5] += 0.44;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.9459459459459459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05405405405405406;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0.005165289256198347;
            result[2] += 0;
            result[3] += 0.0640495867768595;
            result[4] += 0.04855371900826446;
            result[5] += 0.8739669421487604;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.40384615384615385;
            result[4] += 0.038461538461538464;
            result[5] += 0.5576923076923077;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0.7727272727272727;
            result[4] += 0;
            result[5] += 0.20454545454545456;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
            result[0] += 0.06250000000000001;
            result[1] += 0.07954545454545456;
            result[2] += 0.011363636363636366;
            result[3] += 0.15340909090909094;
            result[4] += 0.23295454545454547;
            result[5] += 0.46022727272727276;
          } else {
            result[0] += 0.8212197159565581;
            result[1] += 0.031746031746031744;
            result[2] += 0;
            result[3] += 0.02172096908939014;
            result[4] += 0.10442773600668337;
            result[5] += 0.020885547201336674;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0273224043715847;
            result[1] += 0.07377049180327869;
            result[2] += 0.19398907103825136;
            result[3] += 0.3633879781420765;
            result[4] += 0.07650273224043716;
            result[5] += 0.2650273224043716;
          } else {
            result[0] += 0.5369127516778525;
            result[1] += 0.02684563758389262;
            result[2] += 0.32214765100671144;
            result[3] += 0.02684563758389262;
            result[4] += 0.0604026845637584;
            result[5] += 0.02684563758389262;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17073170731707318;
            result[3] += 0.7560975609756098;
            result[4] += 0;
            result[5] += 0.07317073170731707;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.42857142857142855;
            result[4] += 0.047619047619047616;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9245283018867925;
            result[3] += 0;
            result[4] += 0.03773584905660377;
            result[5] += 0.03773584905660377;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6744186046511629;
            result[3] += 0.2906976744186047;
            result[4] += 0;
            result[5] += 0.034883720930232565;
          } else {
            result[0] += 0.005;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.105;
            result[4] += 0;
            result[5] += 0.01;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.1;
            result[4] += 0.016666666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.008016032064128256;
            result[1] += 0;
            result[2] += 0.9679358717434869;
            result[3] += 0.02404809619238477;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.018957345971563982;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.981042654028436;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6111111111111112;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
            result[0] += 0.5138888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.20833333333333334;
            result[5] += 0.2222222222222222;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002380952380952381;
            result[2] += 0.0011904761904761906;
            result[3] += 0.039285714285714285;
            result[4] += 0.04523809523809524;
            result[5] += 0.9119047619047619;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0.02821316614420063;
            result[2] += 0.009404388714733543;
            result[3] += 0.45141065830721006;
            result[4] += 0.009404388714733543;
            result[5] += 0.5015673981191222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.7368421052631579;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9777777777777777;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.16363636363636366;
            result[1] += 0.09090909090909093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7000000000000001;
            result[5] += 0.04545454545454546;
          } else {
            result[0] += 0.8786367414796342;
            result[1] += 0.017456359102244388;
            result[2] += 0.007481296758104738;
            result[3] += 0.022443890274314215;
            result[4] += 0.05320033250207814;
            result[5] += 0.020781379883624274;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0.022727272727272728;
            result[1] += 0.00909090909090909;
            result[2] += 0.10909090909090909;
            result[3] += 0.37727272727272726;
            result[4] += 0.04090909090909091;
            result[5] += 0.4409090909090909;
          } else {
            result[0] += 0.3231707317073171;
            result[1] += 0.006097560975609756;
            result[2] += 0.4695121951219512;
            result[3] += 0.09146341463414634;
            result[4] += 0.042682926829268296;
            result[5] += 0.06707317073170732;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.034482758620689655;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0.896551724137931;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.013513513513513514;
            result[2] += 0.24324324324324326;
            result[3] += 0.6756756756756757;
            result[4] += 0;
            result[5] += 0.06756756756756757;
          } else {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0.6285714285714286;
            result[3] += 0.05714285714285714;
            result[4] += 0.05714285714285714;
            result[5] += 0.22857142857142856;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.59375;
            result[3] += 0;
            result[4] += 0.09375;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9454545454545454;
            result[3] += 0.05454545454545454;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.654320987654321;
            result[3] += 0.30864197530864196;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9204545454545454;
            result[3] += 0.07954545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9932735426008968;
            result[3] += 0.006726457399103139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9775784753363229;
            result[5] += 0.02242152466367713;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8846153846153846;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
            result[5] += 0.7222222222222222;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
            result[0] += 0.53125;
            result[1] += 0.0625;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.28125;
            result[5] += 0.09375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012239902080783353;
            result[3] += 0.044063647490820076;
            result[4] += 0.03182374541003672;
            result[5] += 0.9228886168910648;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005649717514124294;
            result[1] += 0.08757062146892655;
            result[2] += 0.03672316384180791;
            result[3] += 0.403954802259887;
            result[4] += 0.03389830508474576;
            result[5] += 0.4322033898305085;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0.34868421052631576;
            result[1] += 0.10526315789473684;
            result[2] += 0.019736842105263157;
            result[3] += 0.06578947368421052;
            result[4] += 0.4276315789473684;
            result[5] += 0.03289473684210526;
          } else {
            result[0] += 0.01652892561983471;
            result[1] += 0;
            result[2] += 0.01652892561983471;
            result[3] += 0.38016528925619836;
            result[4] += 0.15702479338842976;
            result[5] += 0.4297520661157025;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0.038834951456310676;
            result[1] += 0.4854368932038835;
            result[2] += 0;
            result[3] += 0.02912621359223301;
            result[4] += 0.44660194174757284;
            result[5] += 0;
          } else {
            result[0] += 0.8216989066442388;
            result[1] += 0.005887300252312868;
            result[2] += 0.03700588730025231;
            result[3] += 0.03616484440706476;
            result[4] += 0.0656013456686291;
            result[5] += 0.0336417157275021;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105.5) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.06666666666666667;
            result[2] += 0.1111111111111111;
            result[3] += 0.15555555555555556;
            result[4] += 0.08888888888888889;
            result[5] += 0.5111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09333333333333334;
            result[3] += 0.84;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.02631578947368421;
            result[4] += 0.05263157894736842;
            result[5] += 0.8157894736842105;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.6190476190476191;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.4230769230769231;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8522727272727273;
            result[3] += 0.13636363636363635;
            result[4] += 0;
            result[5] += 0.011363636363636364;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)119.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6183206106870229;
            result[3] += 0.32061068702290074;
            result[4] += 0.015267175572519083;
            result[5] += 0.04580152671755725;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.1130952380952381;
            result[4] += 0;
            result[5] += 0.005952380952380952;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.9411764705882353;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
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
            result[2] += 0.7777777777777778;
            result[3] += 0.18518518518518517;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.0016638935108153079;
            result[1] += 0;
            result[2] += 0.9816971713810316;
            result[3] += 0.014975041597337771;
            result[4] += 0;
            result[5] += 0.0016638935108153079;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9952830188679245;
            result[5] += 0.0047169811320754715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022988505747126436;
            result[4] += 0.021551724137931036;
            result[5] += 0.9554597701149425;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.4827586206896552;
            result[5] += 0.4482758620689655;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.85;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.05;
            result[5] += 0.075;
          } else {
            result[0] += 0.002380952380952381;
            result[1] += 0.01904761904761905;
            result[2] += 0.016666666666666666;
            result[3] += 0.3619047619047619;
            result[4] += 0.08333333333333333;
            result[5] += 0.5166666666666667;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
            result[0] += 0.2345679012345679;
            result[1] += 0.6296296296296297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13580246913580246;
            result[5] += 0;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0.09722222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8680555555555556;
            result[5] += 0.013888888888888888;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8902743142144638;
            result[1] += 0.010806317539484621;
            result[2] += 0.0016625103906899418;
            result[3] += 0.024106400665004156;
            result[4] += 0.05901911886949293;
            result[5] += 0.014131338320864505;
          } else {
            result[0] += 0.1550632911392405;
            result[1] += 0.015822784810126583;
            result[2] += 0.14873417721518986;
            result[3] += 0.24050632911392406;
            result[4] += 0.056962025316455694;
            result[5] += 0.3829113924050633;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02247191011235955;
            result[3] += 0.7752808988764045;
            result[4] += 0.011235955056179775;
            result[5] += 0.19101123595505617;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0.041666666666666664;
            result[2] += 0.08333333333333333;
            result[3] += 0.125;
            result[4] += 0.041666666666666664;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.015384615384615382;
            result[1] += 0;
            result[2] += 0.769230769230769;
            result[3] += 0.04615384615384615;
            result[4] += 0;
            result[5] += 0.1692307692307692;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0.008368200836820083;
            result[1] += 0;
            result[2] += 0.5983263598326359;
            result[3] += 0.33472803347280333;
            result[4] += 0;
            result[5] += 0.058577405857740586;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.07738095238095238;
            result[4] += 0;
            result[5] += 0.005952380952380952;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8953488372093024;
            result[3] += 0.09883720930232558;
            result[4] += 0;
            result[5] += 0.005813953488372093;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9923076923076923;
            result[3] += 0.007692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9955357142857143;
            result[5] += 0.004464285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.06060606060606061;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3939393939393939;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016176470588235296;
            result[4] += 0.013235294117647059;
            result[5] += 0.9705882352941176;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0.1075;
            result[1] += 0.05;
            result[2] += 0.005;
            result[3] += 0.1675;
            result[4] += 0.08;
            result[5] += 0.59;
          } else {
            result[0] += 0.017964071856287425;
            result[1] += 0.023952095808383235;
            result[2] += 0.023952095808383235;
            result[3] += 0.6766467065868264;
            result[4] += 0.011976047904191617;
            result[5] += 0.24550898203592814;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0.25263157894736843;
            result[1] += 0.031578947368421054;
            result[2] += 0.015789473684210527;
            result[3] += 0.042105263157894736;
            result[4] += 0.47368421052631576;
            result[5] += 0.18421052631578946;
          } else {
            result[0] += 0.8162020905923345;
            result[1] += 0.04965156794425087;
            result[2] += 0.004355400696864111;
            result[3] += 0.01916376306620209;
            result[4] += 0.09494773519163763;
            result[5] += 0.0156794425087108;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
            result[0] += 0.003436426116838488;
            result[1] += 0.006872852233676976;
            result[2] += 0.20618556701030927;
            result[3] += 0.32646048109965636;
            result[4] += 0.1134020618556701;
            result[5] += 0.3436426116838488;
          } else {
            result[0] += 0.6576576576576577;
            result[1] += 0;
            result[2] += 0.13513513513513514;
            result[3] += 0.018018018018018018;
            result[4] += 0.18018018018018017;
            result[5] += 0.009009009009009009;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
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
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.9310344827586207;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.046052631578947366;
            result[2] += 0.24342105263157895;
            result[3] += 0.45394736842105265;
            result[4] += 0;
            result[5] += 0.2565789473684211;
          } else {
            result[0] += 0.23529411764705882;
            result[1] += 0.029411764705882353;
            result[2] += 0.5588235294117647;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0.14705882352941177;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5581395348837209;
            result[3] += 0.3488372093023256;
            result[4] += 0;
            result[5] += 0.09302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8694267515923567;
            result[3] += 0.12738853503184713;
            result[4] += 0;
            result[5] += 0.0031847133757961785;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9056603773584906;
            result[3] += 0.08490566037735849;
            result[4] += 0;
            result[5] += 0.009433962264150943;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9975669099756691;
            result[3] += 0.0024330900243309003;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103.5) ) ) {
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9758454106280193;
            result[5] += 0.024154589371980676;
          } else {
            result[0] += 0.4466019417475729;
            result[1] += 0.15533980582524273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11650485436893206;
            result[5] += 0.28155339805825247;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.0075107296137339056;
            result[2] += 0;
            result[3] += 0.07188841201716738;
            result[4] += 0.06437768240343347;
            result[5] += 0.8562231759656652;
          } else {
            result[0] += 0.012195121951219513;
            result[1] += 0;
            result[2] += 0.012195121951219513;
            result[3] += 0.6707317073170732;
            result[4] += 0;
            result[5] += 0.3048780487804878;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
            result[0] += 0.045112781954887216;
            result[1] += 0.18796992481203006;
            result[2] += 0.05263157894736842;
            result[3] += 0.022556390977443608;
            result[4] += 0.6090225563909775;
            result[5] += 0.08270676691729323;
          } else {
            result[0] += 0.45436507936507936;
            result[1] += 0.022817460317460316;
            result[2] += 0.0873015873015873;
            result[3] += 0.13988095238095238;
            result[4] += 0.11210317460317461;
            result[5] += 0.18353174603174602;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.15151515151515152;
            result[1] += 0.42424242424242425;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.30303030303030304;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.9318518518518518;
            result[1] += 0.008888888888888889;
            result[2] += 0.014814814814814815;
            result[3] += 0.011851851851851851;
            result[4] += 0.025185185185185185;
            result[5] += 0.007407407407407408;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.26666666666666666;
            result[3] += 0.26666666666666666;
            result[4] += 0.06666666666666667;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0.20588235294117646;
            result[3] += 0.6617647058823529;
            result[4] += 0.058823529411764705;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8372093023255814;
            result[3] += 0.13953488372093023;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)70.5) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01577287066246057;
            result[1] += 0;
            result[2] += 0.8107255520504733;
            result[3] += 0.15141955835962148;
            result[4] += 0;
            result[5] += 0.0220820189274448;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0017985611510791368;
            result[1] += 0;
            result[2] += 0.9856115107913669;
            result[3] += 0.012589928057553957;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9762845849802372;
            result[5] += 0.023715415019762844;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.001349527665317139;
            result[2] += 0;
            result[3] += 0.0310391363022942;
            result[4] += 0.014844804318488529;
            result[5] += 0.9527665317139001;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.888888888888889;
            result[1] += 0.0925925925925926;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01851851851851852;
            result[5] += 0;
          } else {
            result[0] += 0.010775862068965518;
            result[1] += 0.004310344827586207;
            result[2] += 0.023706896551724137;
            result[3] += 0.3426724137931034;
            result[4] += 0.14870689655172414;
            result[5] += 0.4698275862068966;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91) ) ) {
            result[0] += 0.017241379310344827;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9482758620689655;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.9975786924939467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002421307506053269;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34615384615384615;
            result[5] += 0.038461538461538464;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
            result[0] += 0.782758620689655;
            result[1] += 0.0689655172413793;
            result[2] += 0;
            result[3] += 0.027586206896551717;
            result[4] += 0.0689655172413793;
            result[5] += 0.05172413793103447;
          } else {
            result[0] += 0.015197568389057751;
            result[1] += 0.0121580547112462;
            result[2] += 0.09422492401215805;
            result[3] += 0.3343465045592705;
            result[4] += 0.03343465045592705;
            result[5] += 0.5106382978723404;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            result[0] += 0.8925964546402503;
            result[1] += 0.0072992700729927005;
            result[2] += 0.009384775808133473;
            result[3] += 0.022940563086548488;
            result[4] += 0.0667361835245047;
            result[5] += 0.0010427528675703858;
          } else {
            result[0] += 0.09615384615384616;
            result[1] += 0.009615384615384616;
            result[2] += 0.5096153846153846;
            result[3] += 0.11538461538461539;
            result[4] += 0.10576923076923077;
            result[5] += 0.16346153846153846;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.36666666666666664;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.26666666666666666;
            result[5] += 0.2;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0;
            result[2] += 0.09302325581395349;
            result[3] += 0.3488372093023256;
            result[4] += 0.06976744186046512;
            result[5] += 0.4418604651162791;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11363636363636363;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.13636363636363635;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9761904761904762;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
            result[0] += 0.21568627450980393;
            result[1] += 0;
            result[2] += 0.5490196078431373;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.008403361344537815;
            result[1] += 0.004201680672268907;
            result[2] += 0.8025210084033614;
            result[3] += 0.18067226890756302;
            result[4] += 0;
            result[5] += 0.004201680672268907;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8936170212765957;
            result[3] += 0.10638297872340426;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004415011037527594;
            result[1] += 0;
            result[2] += 0.9845474613686535;
            result[3] += 0.011037527593818985;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
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
            result[4] += 0.9863636363636363;
            result[5] += 0.013636363636363636;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.5154639175257733;
            result[1] += 0.19587628865979384;
            result[2] += 0;
            result[3] += 0.030927835051546396;
            result[4] += 0.16494845360824745;
            result[5] += 0.09278350515463919;
          } else {
            result[0] += 0.006122448979591836;
            result[1] += 0.004081632653061225;
            result[2] += 0.006122448979591836;
            result[3] += 0.07040816326530612;
            result[4] += 0.04693877551020408;
            result[5] += 0.8663265306122448;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0.9130434782608695;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.7466666666666667;
            result[4] += 0;
            result[5] += 0.19333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
            result[0] += 0.21739130434782608;
            result[1] += 0.14624505928853754;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.4782608695652174;
            result[5] += 0.07114624505928854;
          } else {
            result[0] += 0.888;
            result[1] += 0.0035555555555555557;
            result[2] += 0.0071111111111111115;
            result[3] += 0.019555555555555555;
            result[4] += 0.06755555555555555;
            result[5] += 0.014222222222222223;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.002617801047120419;
            result[1] += 0.02617801047120419;
            result[2] += 0.19109947643979058;
            result[3] += 0.31413612565445026;
            result[4] += 0.07068062827225131;
            result[5] += 0.39528795811518325;
          } else {
            result[0] += 0.7592592592592593;
            result[1] += 0.018518518518518517;
            result[2] += 0.018518518518518517;
            result[3] += 0;
            result[4] += 0.2037037037037037;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
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
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.6190476190476191;
            result[4] += 0.047619047619047616;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7934782608695653;
            result[3] += 0.14130434782608697;
            result[4] += 0;
            result[5] += 0.06521739130434784;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0.0012642225031605561;
            result[1] += 0;
            result[2] += 0.9329962073324903;
            result[3] += 0.05815423514538558;
            result[4] += 0;
            result[5] += 0.007585335018963336;
          } else {
            result[0] += 0.23809523809523808;
            result[1] += 0;
            result[2] += 0.7619047619047619;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9694323144104804;
            result[5] += 0.03056768558951965;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.2878787878787879;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.3787878787878788;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.0012755102040816326;
            result[1] += 0.0012755102040816326;
            result[2] += 0;
            result[3] += 0.03826530612244898;
            result[4] += 0.05102040816326531;
            result[5] += 0.9081632653061225;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0.12804878048780488;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0.06707317073170732;
            result[4] += 0.10365853658536585;
            result[5] += 0.676829268292683;
          } else {
            result[0] += 0.0273224043715847;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.30601092896174864;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9818181818181818;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 0.9953379953379954;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004662004662004662;
            result[5] += 0;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.4782608695652174;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.41304347826086957;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
            result[0] += 0.43356643356643354;
            result[1] += 0.006993006993006993;
            result[2] += 0.013986013986013986;
            result[3] += 0.1048951048951049;
            result[4] += 0.34265734265734266;
            result[5] += 0.0979020979020979;
          } else {
            result[0] += 0.9006102877070619;
            result[1] += 0.03138622493461203;
            result[2] += 0;
            result[3] += 0.014821272885789015;
            result[4] += 0.046207497820401046;
            result[5] += 0.006974716652136007;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0.01327433628318584;
            result[1] += 0;
            result[2] += 0.26991150442477874;
            result[3] += 0.37168141592920356;
            result[4] += 0.02654867256637168;
            result[5] += 0.3185840707964602;
          } else {
            result[0] += 0.6575342465753425;
            result[1] += 0.05479452054794521;
            result[2] += 0.13698630136986303;
            result[3] += 0;
            result[4] += 0.12328767123287672;
            result[5] += 0.027397260273972605;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0.33333333333333337;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.020833333333333332;
            result[5] += 0.7916666666666666;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5348837209302325;
            result[3] += 0.37209302325581395;
            result[4] += 0;
            result[5] += 0.09302325581395349;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.22857142857142856;
            result[2] += 0.05714285714285714;
            result[3] += 0.2;
            result[4] += 0.05714285714285714;
            result[5] += 0.45714285714285713;
          } else {
            result[0] += 0.028169014084507046;
            result[1] += 0.014084507042253523;
            result[2] += 0.6901408450704226;
            result[3] += 0.11267605633802819;
            result[4] += 0.05633802816901409;
            result[5] += 0.09859154929577466;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109) ) ) {
            result[0] += 0.4;
            result[1] += 0.2;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9444444444444444;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.034013605442176874;
            result[1] += 0;
            result[2] += 0.8095238095238095;
            result[3] += 0.13945578231292516;
            result[4] += 0;
            result[5] += 0.017006802721088437;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0035335689045936395;
            result[1] += 0;
            result[2] += 0.9363957597173145;
            result[3] += 0.06007067137809187;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9915966386554622;
            result[3] += 0.008403361344537815;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005235602094240838;
            result[1] += 0.005235602094240838;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9685863874345549;
            result[5] += 0.020942408376963352;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.046875;
            result[2] += 0.046875;
            result[3] += 0.15625;
            result[4] += 0.21875;
            result[5] += 0.53125;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5306122448979592;
            result[5] += 0.4489795918367347;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002472187886279357;
            result[3] += 0.05315203955500618;
            result[4] += 0.038318912237330034;
            result[5] += 0.9060568603213844;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5794871794871795;
            result[4] += 0.03076923076923077;
            result[5] += 0.38974358974358975;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0.10714285714285714;
            result[3] += 0.07142857142857142;
            result[4] += 0.03571428571428571;
            result[5] += 0.7142857142857143;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0.11734693877551022;
            result[1] += 0.09693877551020409;
            result[2] += 0;
            result[3] += 0.051020408163265314;
            result[4] += 0.653061224489796;
            result[5] += 0.0816326530612245;
          } else {
            result[0] += 0.874894336432798;
            result[1] += 0.00422654268808115;
            result[2] += 0.0008453085376162299;
            result[3] += 0.027895181741335588;
            result[4] += 0.0566356720202874;
            result[5] += 0.03550295857988166;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.00881057268722467;
            result[1] += 0.039647577092511016;
            result[2] += 0.0881057268722467;
            result[3] += 0.4669603524229075;
            result[4] += 0.022026431718061675;
            result[5] += 0.3744493392070485;
          } else {
            result[0] += 0.30593607305936077;
            result[1] += 0.06392694063926942;
            result[2] += 0.3835616438356165;
            result[3] += 0.06849315068493152;
            result[4] += 0.11415525114155252;
            result[5] += 0.06392694063926942;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
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
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.9411764705882353;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
            result[0] += 0.02247191011235955;
            result[1] += 0.0449438202247191;
            result[2] += 0.19101123595505617;
            result[3] += 0.4943820224719101;
            result[4] += 0;
            result[5] += 0.24719101123595505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0.016129032258064516;
            result[2] += 0.7903225806451613;
            result[3] += 0.1774193548387097;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.5263157894736842;
            result[4] += 0.05263157894736842;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.11904761904761904;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7450980392156863;
            result[3] += 0.2549019607843137;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9150943396226415;
            result[3] += 0.04716981132075472;
            result[4] += 0;
            result[5] += 0.03773584905660377;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9663299663299664;
            result[3] += 0.03367003367003367;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0.08571428571428572;
            result[4] += 0.8857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.3076923076923077;
            result[5] += 0.6153846153846154;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 0.10526315789473684;
            result[1] += 0.07894736842105263;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7368421052631579;
            result[5] += 0.07894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0.21052631578947367;
            result[2] += 0;
            result[3] += 0.3157894736842105;
            result[4] += 0.05263157894736842;
            result[5] += 0.42105263157894735;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.9895833333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.010416666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.35714285714285715;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04436860068259386;
            result[4] += 0.022753128555176336;
            result[5] += 0.9328782707622298;
          } else {
            result[0] += 0.10909090909090909;
            result[1] += 0;
            result[2] += 0.03636363636363636;
            result[3] += 0.2727272727272727;
            result[4] += 0.16363636363636364;
            result[5] += 0.41818181818181815;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0072992700729927005;
            result[3] += 0.11678832116788321;
            result[4] += 0.1897810218978102;
            result[5] += 0.6861313868613139;
          } else {
            result[0] += 0.0056022408963585435;
            result[1] += 0.022408963585434174;
            result[2] += 0.06722689075630252;
            result[3] += 0.5658263305322129;
            result[4] += 0.022408963585434174;
            result[5] += 0.3165266106442577;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.8163265306122449;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.05319148936170213;
            result[1] += 0.06382978723404255;
            result[2] += 0.07446808510638298;
            result[3] += 0.0425531914893617;
            result[4] += 0.723404255319149;
            result[5] += 0.0425531914893617;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.9443319838056681;
            result[1] += 0.0010121457489878545;
            result[2] += 0.0030364372469635632;
            result[3] += 0.008097165991902836;
            result[4] += 0.03542510121457491;
            result[5] += 0.008097165991902836;
          } else {
            result[0] += 0.25146198830409355;
            result[1] += 0.023391812865497075;
            result[2] += 0.16374269005847952;
            result[3] += 0.19298245614035087;
            result[4] += 0.1286549707602339;
            result[5] += 0.23976608187134502;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.21052631578947367;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1724137931034483;
            result[3] += 0.6206896551724138;
            result[4] += 0.06896551724137931;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
            result[0] += 0.45161290322580644;
            result[1] += 0;
            result[2] += 0.5161290322580645;
            result[3] += 0;
            result[4] += 0.03225806451612903;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.27586206896551724;
            result[3] += 0.5344827586206896;
            result[4] += 0;
            result[5] += 0.1896551724137931;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7837837837837838;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0.01079136690647482;
            result[1] += 0;
            result[2] += 0.762589928057554;
            result[3] += 0.1906474820143885;
            result[4] += 0;
            result[5] += 0.03597122302158273;
          } else {
            result[0] += 0.008310249307479225;
            result[1] += 0;
            result[2] += 0.9404432132963989;
            result[3] += 0.04709141274238227;
            result[4] += 0;
            result[5] += 0.004155124653739612;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)30) ) ) {
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
            result[4] += 0.9911894273127754;
            result[5] += 0.00881057268722467;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5064935064935064;
            result[5] += 0.4935064935064935;
          } else {
            result[0] += 0.84;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.37037037037037035;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0.4444444444444444;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.0032537960954446853;
            result[1] += 0.005422993492407809;
            result[2] += 0;
            result[3] += 0.05314533622559653;
            result[4] += 0.03796095444685466;
            result[5] += 0.9002169197396963;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.05172413793103448;
            result[2] += 0;
            result[3] += 0.08620689655172414;
            result[4] += 0.13793103448275862;
            result[5] += 0.7241379310344828;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6967741935483871;
            result[4] += 0.0064516129032258064;
            result[5] += 0.2967741935483871;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0.004524886877828056;
            result[1] += 0.9819004524886878;
            result[2] += 0.004524886877828056;
            result[3] += 0;
            result[4] += 0.009049773755656111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9705882352941176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0.06481481481481483;
            result[2] += 0.01851851851851852;
            result[3] += 0.00925925925925926;
            result[4] += 0.888888888888889;
            result[5] += 0.01851851851851852;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0.11235955056179775;
            result[1] += 0.06741573033707865;
            result[2] += 0.06741573033707865;
            result[3] += 0.19101123595505617;
            result[4] += 0.23595505617977527;
            result[5] += 0.3258426966292135;
          } else {
            result[0] += 0.8621821164889254;
            result[1] += 0.02871205906480722;
            result[2] += 0.002461033634126333;
            result[3] += 0.02461033634126333;
            result[4] += 0.06890894175553733;
            result[5] += 0.013125512715340444;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.011278195488721806;
            result[1] += 0;
            result[2] += 0.2218045112781955;
            result[3] += 0.4210526315789474;
            result[4] += 0.011278195488721806;
            result[5] += 0.3345864661654136;
          } else {
            result[0] += 0.4322033898305084;
            result[1] += 0.050847457627118633;
            result[2] += 0.3983050847457626;
            result[3] += 0.025423728813559317;
            result[4] += 0.09322033898305083;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.88;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.34375;
            result[4] += 0;
            result[5] += 0.09375;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.125;
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
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)122.5) ) ) {
            result[0] += 0;
            result[1] += 0.011952191235059762;
            result[2] += 0.7968127490039841;
            result[3] += 0.14342629482071717;
            result[4] += 0.011952191235059762;
            result[5] += 0.03585657370517929;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8875739644970414;
            result[3] += 0.11242603550295859;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004357298474945535;
            result[1] += 0;
            result[2] += 0.9803921568627452;
            result[3] += 0.01525054466230937;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9580838323353293;
            result[5] += 0.041916167664670656;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.21568627450980393;
            result[2] += 0;
            result[3] += 0.0196078431372549;
            result[4] += 0.5294117647058824;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0.051685393258426963;
            result[4] += 0.048314606741573035;
            result[5] += 0.8887640449438202;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009615384615384618;
            result[3] += 0.826923076923077;
            result[4] += 0;
            result[5] += 0.1634615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.31666666666666665;
            result[4] += 0.008333333333333333;
            result[5] += 0.525;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.9953703703703705;
            result[2] += 0;
            result[3] += 0.002314814814814815;
            result[4] += 0.002314814814814815;
            result[5] += 0;
          } else {
            result[0] += 0.5454545454545454;
            result[1] += 0.18181818181818182;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.12565445026178013;
            result[1] += 0.2722513089005236;
            result[2] += 0;
            result[3] += 0.03141361256544503;
            result[4] += 0.5602094240837697;
            result[5] += 0.010471204188481678;
          } else {
            result[0] += 0.8740425531914894;
            result[1] += 0.00425531914893617;
            result[2] += 0.003404255319148936;
            result[3] += 0.02893617021276596;
            result[4] += 0.062127659574468086;
            result[5] += 0.02723404255319149;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.024489795918367346;
            result[1] += 0.004081632653061225;
            result[2] += 0.09795918367346938;
            result[3] += 0.5142857142857142;
            result[4] += 0.012244897959183673;
            result[5] += 0.3469387755102041;
          } else {
            result[0] += 0.38961038961038963;
            result[1] += 0.03896103896103896;
            result[2] += 0.4155844155844156;
            result[3] += 0.03896103896103896;
            result[4] += 0.04329004329004329;
            result[5] += 0.0735930735930736;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.5625;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0909090909090909;
            result[1] += 0;
            result[2] += 0.6969696969696969;
            result[3] += 0;
            result[4] += 0.060606060606060594;
            result[5] += 0.1515151515151515;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.163265306122449;
            result[3] += 0.7755102040816327;
            result[4] += 0;
            result[5] += 0.06122448979591837;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0.07142857142857142;
            result[3] += 0.14285714285714285;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.19047619047619047;
            result[4] += 0.023809523809523808;
            result[5] += 0.07142857142857142;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0064516129032258064;
            result[1] += 0;
            result[2] += 0.7935483870967742;
            result[3] += 0.14838709677419354;
            result[4] += 0;
            result[5] += 0.05161290322580645;
          } else {
            result[0] += 0.004225352112676056;
            result[1] += 0;
            result[2] += 0.956338028169014;
            result[3] += 0.03943661971830986;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
            result[0] += 0.004291845493562232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9527896995708155;
            result[5] += 0.04291845493562232;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
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
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.001128668171557562;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06772009029345373;
            result[4] += 0.03160270880361174;
            result[5] += 0.899548532731377;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.918918918918919;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05405405405405406;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 0.0205761316872428;
            result[2] += 0.00823045267489712;
            result[3] += 0.4691358024691358;
            result[4] += 0.053497942386831275;
            result[5] += 0.448559670781893;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)50.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.9907834101382489;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009216589861751152;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)69.5) ) ) {
            result[0] += 0.17964071856287425;
            result[1] += 0.17365269461077845;
            result[2] += 0;
            result[3] += 0.005988023952095809;
            result[4] += 0.5808383233532934;
            result[5] += 0.059880239520958084;
          } else {
            result[0] += 0.783763277693475;
            result[1] += 0.0204855842185129;
            result[2] += 0.02276176024279211;
            result[3] += 0.036418816388467376;
            result[4] += 0.07814871016691957;
            result[5] += 0.05842185128983308;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.016835016835016835;
            result[2] += 0.25252525252525254;
            result[3] += 0.36363636363636365;
            result[4] += 0.02356902356902357;
            result[5] += 0.3434343434343434;
          } else {
            result[0] += 0.7619047619047619;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.011904761904761904;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.25;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.015873015873015872;
            result[2] += 0.07936507936507936;
            result[3] += 0.6507936507936508;
            result[4] += 0;
            result[5] += 0.25396825396825395;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.4473684210526316;
            result[3] += 0.39473684210526316;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.07692307692307693;
            result[2] += 0.23076923076923078;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0.028985507246376812;
            result[2] += 0.8695652173913043;
            result[3] += 0.057971014492753624;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0449438202247191;
            result[1] += 0.02247191011235955;
            result[2] += 0.6629213483146067;
            result[3] += 0.1348314606741573;
            result[4] += 0;
            result[5] += 0.1348314606741573;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9215686274509803;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.0196078431372549;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8630952380952381;
            result[3] += 0.13690476190476192;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04054054054054054;
            result[1] += 0;
            result[2] += 0.9594594594594594;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)49) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008620689655172414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9655172413793104;
            result[5] += 0.02586206896551724;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
            result[0] += 0.6349206349206349;
            result[1] += 0.23809523809523808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.28125;
            result[5] += 0.6875;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.001272264631043257;
            result[2] += 0;
            result[3] += 0.03435114503816794;
            result[4] += 0.02544529262086514;
            result[5] += 0.9389312977099237;
          } else {
            result[0] += 0;
            result[1] += 0.048034934497816595;
            result[2] += 0.05240174672489083;
            result[3] += 0.16593886462882096;
            result[4] += 0.09170305676855896;
            result[5] += 0.6419213973799127;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0.006944444444444444;
            result[1] += 0;
            result[2] += 0.04861111111111111;
            result[3] += 0.7291666666666666;
            result[4] += 0;
            result[5] += 0.2152777777777778;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
            result[0] += 0.3595505617977528;
            result[1] += 0.0449438202247191;
            result[2] += 0;
            result[3] += 0.02247191011235955;
            result[4] += 0.4943820224719101;
            result[5] += 0.07865168539325842;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0.040697674418604654;
            result[2] += 0.01744186046511628;
            result[3] += 0.3313953488372093;
            result[4] += 0.06395348837209303;
            result[5] += 0.5348837209302325;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.18584070796460178;
            result[1] += 0.13274336283185842;
            result[2] += 0.008849557522123894;
            result[3] += 0.017699115044247787;
            result[4] += 0.6548672566371682;
            result[5] += 0;
          } else {
            result[0] += 0.7652777777777778;
            result[1] += 0.017361111111111115;
            result[2] += 0.07291666666666669;
            result[3] += 0.06250000000000001;
            result[4] += 0.043750000000000004;
            result[5] += 0.038194444444444454;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)115) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7037037037037037;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.23529411764705882;
            result[2] += 0.11764705882352941;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.47058823529411764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5116279069767442;
            result[3] += 0.4418604651162791;
            result[4] += 0;
            result[5] += 0.046511627906976744;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.56;
            result[3] += 0.42;
            result[4] += 0;
            result[5] += 0.02;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8392857142857143;
            result[3] += 0.10714285714285714;
            result[4] += 0;
            result[5] += 0.05357142857142857;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.015228426395939087;
            result[1] += 0;
            result[2] += 0.8730964467005076;
            result[3] += 0.1065989847715736;
            result[4] += 0;
            result[5] += 0.005076142131979695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9819819819819819;
            result[3] += 0.018018018018018018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0.009950248756218905;
            result[1] += 0.004975124378109453;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9751243781094527;
            result[5] += 0.009950248756218905;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.8;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51.5) ) ) {
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
            result[4] += 0.1724137931034483;
            result[5] += 0.8275862068965517;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.9767441860465116;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023255813953488372;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021702838063439065;
            result[4] += 0.00333889816360601;
            result[5] += 0.9749582637729549;
          } else {
            result[0] += 0;
            result[1] += 0.01;
            result[2] += 0.01;
            result[3] += 0.17;
            result[4] += 0.09;
            result[5] += 0.72;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.06481481481481481;
            result[2] += 0.037037037037037035;
            result[3] += 0.18518518518518517;
            result[4] += 0.07407407407407407;
            result[5] += 0.6388888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014084507042253521;
            result[3] += 0.352112676056338;
            result[4] += 0.04225352112676056;
            result[5] += 0.5915492957746479;
          } else {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0.012658227848101266;
            result[3] += 0.7278481012658228;
            result[4] += 0;
            result[5] += 0.2468354430379747;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0.4210526315789474;
            result[1] += 0.4210526315789474;
            result[2] += 0;
            result[3] += 0.052631578947368425;
            result[4] += 0.10526315789473685;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
            result[0] += 0.0425531914893617;
            result[1] += 0.9361702127659575;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02127659574468085;
            result[5] += 0;
          } else {
            result[0] += 0.1388888888888889;
            result[1] += 0.08333333333333333;
            result[2] += 0.06481481481481481;
            result[3] += 0.08333333333333333;
            result[4] += 0.6018518518518519;
            result[5] += 0.027777777777777776;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.8876712328767123;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025570776255707764;
            result[4] += 0.06301369863013699;
            result[5] += 0.023744292237442923;
          } else {
            result[0] += 0.3103448275862069;
            result[1] += 0.017241379310344827;
            result[2] += 0.11637931034482758;
            result[3] += 0.2629310344827586;
            result[4] += 0.04310344827586207;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02531645569620253;
            result[3] += 0.22784810126582278;
            result[4] += 0;
            result[5] += 0.7468354430379747;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2340425531914894;
            result[3] += 0.5035460992907802;
            result[4] += 0.049645390070921995;
            result[5] += 0.21276595744680854;
          } else {
            result[0] += 0.05042016806722689;
            result[1] += 0.12605042016806722;
            result[2] += 0.680672268907563;
            result[3] += 0.07563025210084033;
            result[4] += 0;
            result[5] += 0.06722689075630252;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0.01639344262295082;
            result[1] += 0;
            result[2] += 0.7786885245901639;
            result[3] += 0.18442622950819673;
            result[4] += 0;
            result[5] += 0.020491803278688523;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.026595744680851064;
            result[1] += 0;
            result[2] += 0.851063829787234;
            result[3] += 0.11170212765957446;
            result[4] += 0.005319148936170213;
            result[5] += 0.005319148936170213;
          } else {
            result[0] += 0.0064516129032258064;
            result[1] += 0;
            result[2] += 0.9849462365591398;
            result[3] += 0.008602150537634409;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)76) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
            result[0] += 0.013574660633484163;
            result[1] += 0.004524886877828055;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9683257918552036;
            result[5] += 0.013574660633484163;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0.017201834862385322;
            result[1] += 0.005733944954128441;
            result[2] += 0.0045871559633027525;
            result[3] += 0.06077981651376147;
            result[4] += 0.02981651376146789;
            result[5] += 0.8818807339449541;
          } else {
            result[0] += 0.10510510510510511;
            result[1] += 0.018018018018018018;
            result[2] += 0.006006006006006006;
            result[3] += 0.42042042042042044;
            result[4] += 0.036036036036036036;
            result[5] += 0.4144144144144144;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.07500000000000001;
            result[1] += 0.22000000000000003;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6900000000000001;
            result[5] += 0.015000000000000001;
          } else {
            result[0] += 0.8521665250637214;
            result[1] += 0.0118946474086661;
            result[2] += 0.009345794392523364;
            result[3] += 0.028037383177570093;
            result[4] += 0.07391673746813934;
            result[5] += 0.02463891248937978;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.03426791277258567;
            result[1] += 0.03426791277258567;
            result[2] += 0.1277258566978193;
            result[3] += 0.3925233644859813;
            result[4] += 0.08722741433021806;
            result[5] += 0.32398753894080995;
          } else {
            result[0] += 0.3370165745856354;
            result[1] += 0.0055248618784530384;
            result[2] += 0.425414364640884;
            result[3] += 0.0718232044198895;
            result[4] += 0.10497237569060773;
            result[5] += 0.055248618784530384;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
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
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04166666666666667;
            result[3] += 0.9166666666666667;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)109) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.02631578947368421;
            result[4] += 0.02631578947368421;
            result[5] += 0.868421052631579;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.2857142857142857;
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10344827586206898;
            result[3] += 0.8620689655172414;
            result[4] += 0;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4642857142857143;
            result[3] += 0.21428571428571427;
            result[4] += 0.14285714285714285;
            result[5] += 0.17857142857142858;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9423076923076923;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0.019230769230769232;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.0199203187250996;
            result[2] += 0.8127490039840638;
            result[3] += 0.16334661354581673;
            result[4] += 0;
            result[5] += 0.00398406374501992;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9431137724550899;
            result[3] += 0.05688622754491018;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
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
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.989247311827957;
            result[5] += 0.010752688172043012;
          } else {
            result[0] += 0;
            result[1] += 0.023809523809523808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0.19047619047619047;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03579952267303103;
            result[4] += 0.03937947494033413;
            result[5] += 0.9248210023866349;
          } else {
            result[0] += 0.30978260869565216;
            result[1] += 0.02717391304347826;
            result[2] += 0.005434782608695652;
            result[3] += 0.10869565217391304;
            result[4] += 0.11956521739130435;
            result[5] += 0.42934782608695654;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0.2247191011235955;
            result[4] += 0;
            result[5] += 0.7640449438202247;
          } else {
            result[0] += 0;
            result[1] += 0.006024096385542169;
            result[2] += 0;
            result[3] += 0.7168674698795181;
            result[4] += 0.024096385542168676;
            result[5] += 0.25301204819277107;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
            result[0] += 0.028901734104046242;
            result[1] += 0.2023121387283237;
            result[2] += 0.005780346820809248;
            result[3] += 0.04046242774566474;
            result[4] += 0.6994219653179191;
            result[5] += 0.023121387283236993;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0.8974358974358975;
            result[2] += 0.02564102564102564;
            result[3] += 0;
            result[4] += 0.05128205128205128;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.866231647634584;
            result[1] += 0.01957585644371941;
            result[2] += 0.00734094616639478;
            result[3] += 0.02202283849918434;
            result[4] += 0.052202283849918436;
            result[5] += 0.03262642740619902;
          } else {
            result[0] += 0.15869017632241814;
            result[1] += 0.020151133501259445;
            result[2] += 0.2594458438287154;
            result[3] += 0.3123425692695214;
            result[4] += 0.0654911838790932;
            result[5] += 0.18387909319899245;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.8928571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82.5) ) ) {
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
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.34210526315789475;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0.12195121951219512;
            result[1] += 0;
            result[2] += 0.8048780487804879;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4473684210526316;
            result[3] += 0.34210526315789475;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7795275590551181;
            result[3] += 0.1889763779527559;
            result[4] += 0;
            result[5] += 0.031496062992125984;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9197530864197531;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.006172839506172839;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9101123595505618;
            result[3] += 0.0898876404494382;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7368421052631579;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006607929515418502;
            result[1] += 0;
            result[2] += 0.986784140969163;
            result[3] += 0.004405286343612335;
            result[4] += 0;
            result[5] += 0.0022026431718061676;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.4;
            result[3] += 0.4;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)39.5) ) ) {
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
            result[4] += 0.9774436090225563;
            result[5] += 0.022556390977443608;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.0036275695284159614;
            result[2] += 0;
            result[3] += 0.05804111245465538;
            result[4] += 0.036275695284159616;
            result[5] += 0.9020556227327691;
          } else {
            result[0] += 0.12169312169312169;
            result[1] += 0;
            result[2] += 0.005291005291005291;
            result[3] += 0.3835978835978836;
            result[4] += 0.10582010582010581;
            result[5] += 0.3835978835978836;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
            result[0] += 0.028169014084507043;
            result[1] += 0.1056338028169014;
            result[2] += 0.007042253521126761;
            result[3] += 0.06338028169014084;
            result[4] += 0.7535211267605634;
            result[5] += 0.04225352112676056;
          } else {
            result[0] += 0.10869565217391304;
            result[1] += 0.8260869565217391;
            result[2] += 0;
            result[3] += 0.03260869565217391;
            result[4] += 0.03260869565217391;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8275020341741254;
            result[1] += 0.01383238405207486;
            result[2] += 0.010577705451586657;
            result[3] += 0.02929210740439382;
            result[4] += 0.06346623270951995;
            result[5] += 0.05532953620829944;
          } else {
            result[0] += 0.16845878136200718;
            result[1] += 0.0035842293906810036;
            result[2] += 0.17562724014336917;
            result[3] += 0.3225806451612903;
            result[4] += 0.07526881720430108;
            result[5] += 0.25448028673835127;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.5333333333333333;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0.26666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.014705882352941176;
            result[1] += 0.029411764705882353;
            result[2] += 0.058823529411764705;
            result[3] += 0.2647058823529412;
            result[4] += 0.058823529411764705;
            result[5] += 0.5735294117647058;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18;
            result[3] += 0.68;
            result[4] += 0;
            result[5] += 0.14;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)115.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7611940298507462;
            result[3] += 0.23880597014925373;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)114) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.05;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6307692307692307;
            result[3] += 0.27692307692307694;
            result[4] += 0;
            result[5] += 0.09230769230769231;
          } else {
            result[0] += 0.004545454545454546;
            result[1] += 0;
            result[2] += 0.9318181818181819;
            result[3] += 0.0590909090909091;
            result[4] += 0;
            result[5] += 0.004545454545454546;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)98.5) ) ) {
            result[0] += 0.017578125;
            result[1] += 0;
            result[2] += 0.953125;
            result[3] += 0.029296875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
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
            result[4] += 0.9629629629629629;
            result[5] += 0.037037037037037035;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7058823529411765;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.9615384615384616;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.375;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031791907514450865;
            result[4] += 0.02023121387283237;
            result[5] += 0.9479768786127167;
          } else {
            result[0] += 0.012539184952978056;
            result[1] += 0.018808777429467086;
            result[2] += 0.003134796238244514;
            result[3] += 0.14733542319749215;
            result[4] += 0.13479623824451412;
            result[5] += 0.6833855799373041;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012195121951219513;
            result[3] += 0.4146341463414634;
            result[4] += 0;
            result[5] += 0.573170731707317;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.09090909090909091;
            result[5] += 0.8636363636363636;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8924731182795699;
            result[4] += 0;
            result[5] += 0.10752688172043011;
          } else {
            result[0] += 0.0967741935483871;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25806451612903225;
            result[4] += 0.03225806451612903;
            result[5] += 0.6129032258064516;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0.0379746835443038;
            result[1] += 0.0759493670886076;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8481012658227848;
            result[5] += 0.0379746835443038;
          } else {
            result[0] += 0;
            result[1] += 0.782608695652174;
            result[2] += 0.13043478260869565;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0.043478260869565216;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8214285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17857142857142858;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1411764705882353;
            result[1] += 0.21176470588235294;
            result[2] += 0.03529411764705882;
            result[3] += 0.047058823529411764;
            result[4] += 0.49411764705882355;
            result[5] += 0.07058823529411765;
          } else {
            result[0] += 0.8915223336371924;
            result[1] += 0.0036463081130355514;
            result[2] += 0.004557885141294439;
            result[3] += 0.023701002734731084;
            result[4] += 0.059252506836827715;
            result[5] += 0.01731996353691887;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.018633540372670808;
            result[1] += 0.012422360248447204;
            result[2] += 0.14285714285714285;
            result[3] += 0.33540372670807456;
            result[4] += 0.049689440993788817;
            result[5] += 0.4409937888198758;
          } else {
            result[0] += 0.5980392156862745;
            result[1] += 0.049019607843137254;
            result[2] += 0.12745098039215685;
            result[3] += 0.12745098039215685;
            result[4] += 0.09803921568627451;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            result[0] += 0.0078125;
            result[1] += 0.03125;
            result[2] += 0.0859375;
            result[3] += 0.609375;
            result[4] += 0.0234375;
            result[5] += 0.2421875;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.525;
            result[3] += 0.175;
            result[4] += 0.075;
            result[5] += 0.175;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0.057692307692307696;
            result[1] += 0;
            result[2] += 0.21153846153846154;
            result[3] += 0.019230769230769232;
            result[4] += 0.25;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.03225806451612903;
            result[2] += 0.7419354838709677;
            result[3] += 0.11827956989247312;
            result[4] += 0;
            result[5] += 0.07526881720430108;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.21052631578947367;
            result[4] += 0;
            result[5] += 0.5263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7921146953405018;
            result[3] += 0.18996415770609318;
            result[4] += 0;
            result[5] += 0.017921146953405017;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004310344827586208;
            result[1] += 0;
            result[2] += 0.949712643678161;
            result[3] += 0.04454022988505748;
            result[4] += 0.0014367816091954025;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
            result[0] += 0.004651162790697674;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004651162790697674;
            result[4] += 0.9674418604651163;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3958333333333333;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002531645569620253;
            result[3] += 0.053164556962025315;
            result[4] += 0.02278481012658228;
            result[5] += 0.9215189873417722;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.13157894736842105;
            result[1] += 0.007518796992481203;
            result[2] += 0.0037593984962406013;
            result[3] += 0.16917293233082706;
            result[4] += 0.10526315789473684;
            result[5] += 0.5827067669172933;
          } else {
            result[0] += 0.02247191011235955;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6460674157303371;
            result[4] += 0;
            result[5] += 0.33146067415730335;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41.5) ) ) {
            result[0] += 0.021505376344086023;
            result[1] += 0.946236559139785;
            result[2] += 0.010752688172043012;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          } else {
            result[0] += 0.14150943396226415;
            result[1] += 0.09433962264150944;
            result[2] += 0.018867924528301886;
            result[3] += 0;
            result[4] += 0.6886792452830188;
            result[5] += 0.05660377358490566;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += 0.876040703052729;
            result[1] += 0.0037002775208140612;
            result[2] += 0.0064754856614246065;
            result[3] += 0.028677150786308975;
            result[4] += 0.0545790934320074;
            result[5] += 0.030527289546716005;
          } else {
            result[0] += 0.26097560975609757;
            result[1] += 0.01707317073170732;
            result[2] += 0.16585365853658537;
            result[3] += 0.2634146341463415;
            result[4] += 0.08292682926829269;
            result[5] += 0.2097560975609756;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.9918918918918919;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008108108108108109;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5625;
            result[4] += 0;
            result[5] += 0.4375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.8620689655172413;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.23529411764705882;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37037037037037035;
            result[3] += 0.5925925925925926;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9655172413793104;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8532338308457711;
            result[3] += 0.1318407960199005;
            result[4] += 0;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0.0071174377224199285;
            result[1] += 0;
            result[2] += 0.9359430604982206;
            result[3] += 0.05693950177935943;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9963636363636363;
            result[3] += 0.0036363636363636364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.15789473684210525;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0.3684210526315789;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9213483146067416;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0449438202247191;
            result[5] += 0.033707865168539325;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6547619047619048;
            result[5] += 0.27380952380952384;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.040380047505938245;
            result[4] += 0.048693586698337295;
            result[5] += 0.9109263657957245;
          } else {
            result[0] += 0;
            result[1] += 0.04827586206896552;
            result[2] += 0;
            result[3] += 0.21379310344827587;
            result[4] += 0.2482758620689655;
            result[5] += 0.4896551724137931;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.9130434782608695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0321285140562249;
            result[3] += 0.6546184738955824;
            result[4] += 0.012048192771084338;
            result[5] += 0.30120481927710846;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06542056074766354;
            result[1] += 0.17757009345794392;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7570093457943925;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
            result[0] += 0.4942528735632184;
            result[1] += 0.011494252873563218;
            result[2] += 0.06896551724137931;
            result[3] += 0.13793103448275862;
            result[4] += 0.06896551724137931;
            result[5] += 0.21839080459770116;
          } else {
            result[0] += 0.909510618651893;
            result[1] += 0.012003693444136659;
            result[2] += 0.016620498614958453;
            result[3] += 0.013850415512465375;
            result[4] += 0.04524469067405356;
            result[5] += 0.0027700831024930752;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
            result[0] += 0.03954802259887006;
            result[1] += 0.03389830508474576;
            result[2] += 0.22033898305084745;
            result[3] += 0.3502824858757062;
            result[4] += 0.062146892655367235;
            result[5] += 0.2937853107344633;
          } else {
            result[0] += 0.5866666666666667;
            result[1] += 0;
            result[2] += 0.21333333333333335;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0;
            result[4] += 0.6666666666666667;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0.018518518518518517;
            result[1] += 0.018518518518518517;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0.07407407407407407;
            result[5] += 0.8148148148148148;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.7333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.024390243902439025;
            result[2] += 0.2682926829268293;
            result[3] += 0.5853658536585366;
            result[4] += 0;
            result[5] += 0.12195121951219512;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0.01282051282051282;
            result[2] += 0.717948717948718;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.2564102564102564;
            result[4] += 0;
            result[5] += 0.1282051282051282;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6901408450704225;
            result[3] += 0.28169014084507044;
            result[4] += 0;
            result[5] += 0.028169014084507043;
          } else {
            result[0] += 0.009900990099009901;
            result[1] += 0;
            result[2] += 0.900990099009901;
            result[3] += 0.0891089108910891;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.007662835249042145;
            result[1] += 0;
            result[2] += 0.9003831417624522;
            result[3] += 0.08812260536398467;
            result[4] += 0;
            result[5] += 0.0038314176245210726;
          } else {
            result[0] += 0.0021598272138228943;
            result[1] += 0;
            result[2] += 0.978401727861771;
            result[3] += 0.017278617710583154;
            result[4] += 0;
            result[5] += 0.0021598272138228943;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.970873786407767;
            result[5] += 0.02912621359223301;
          } else {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.34615384615384615;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3157894736842105;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0.10526315789473684;
            result[5] += 0.42105263157894735;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7727272727272727;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0.0035046728971962616;
            result[2] += 0;
            result[3] += 0.035046728971962614;
            result[4] += 0.04205607476635514;
            result[5] += 0.919392523364486;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01;
            result[3] += 0.25;
            result[4] += 0.01;
            result[5] += 0.73;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7832167832167832;
            result[4] += 0.013986013986013986;
            result[5] += 0.20279720279720279;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.11864406779661017;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8813559322033898;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.16176470588235295;
            result[1] += 0.27205882352941174;
            result[2] += 0;
            result[3] += 0.014705882352941176;
            result[4] += 0.5514705882352942;
            result[5] += 0;
          } else {
            result[0] += 0.8850174216027875;
            result[1] += 0.013066202090592336;
            result[2] += 0.0008710801393728224;
            result[3] += 0.013937282229965159;
            result[4] += 0.055749128919860634;
            result[5] += 0.03135888501742161;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0.0326975476839237;
            result[1] += 0.005449591280653951;
            result[2] += 0.2125340599455041;
            result[3] += 0.3978201634877384;
            result[4] += 0.0326975476839237;
            result[5] += 0.3188010899182561;
          } else {
            result[0] += 0.6610169491525424;
            result[1] += 0;
            result[2] += 0.17796610169491525;
            result[3] += 0.00847457627118644;
            result[4] += 0.11016949152542373;
            result[5] += 0.0423728813559322;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0.13636363636363635;
            result[3] += 0.022727272727272728;
            result[4] += 0.06818181818181818;
            result[5] += 0.7272727272727273;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.075;
            result[2] += 0.1;
            result[3] += 0.7;
            result[4] += 0.025;
            result[5] += 0.1;
          } else {
            result[0] += 0.27142857142857146;
            result[1] += 0.014285714285714287;
            result[2] += 0.5285714285714287;
            result[3] += 0.1285714285714286;
            result[4] += 0.014285714285714287;
            result[5] += 0.042857142857142864;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
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
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.013513513513513516;
            result[2] += 0.7770270270270271;
            result[3] += 0.19594594594594597;
            result[4] += 0;
            result[5] += 0.013513513513513516;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9491525423728814;
            result[3] += 0.03389830508474576;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7954545454545454;
            result[3] += 0.20454545454545456;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9111111111111111;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.005555555555555556;
          } else {
            result[0] += 0.0023148148148148147;
            result[1] += 0;
            result[2] += 0.9930555555555556;
            result[3] += 0.004629629629629629;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.125;
          } else {
            result[0] += 0.0026595744680851063;
            result[1] += 0.031914893617021274;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9069148936170213;
            result[5] += 0.05851063829787234;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9047619047619048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58.5) ) ) {
            result[0] += 0.9836065573770492;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01639344262295082;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.0068212824010914054;
            result[2] += 0;
            result[3] += 0.03274215552523874;
            result[4] += 0.03547066848567531;
            result[5] += 0.9249658935879945;
          } else {
            result[0] += 0.03125;
            result[1] += 0.008928571428571428;
            result[2] += 0.022321428571428572;
            result[3] += 0.26339285714285715;
            result[4] += 0.15178571428571427;
            result[5] += 0.5223214285714286;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0.06382978723404255;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0.2553191489361702;
            result[4] += 0;
            result[5] += 0.6595744680851063;
          } else {
            result[0] += 0.8696078431372549;
            result[1] += 0.010784313725490196;
            result[2] += 0;
            result[3] += 0.024509803921568627;
            result[4] += 0.07156862745098039;
            result[5] += 0.023529411764705882;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
            result[0] += 0.010020040080160322;
            result[1] += 0.03206412825651303;
            result[2] += 0.14428857715430865;
            result[3] += 0.42284569138276556;
            result[4] += 0.062124248496993995;
            result[5] += 0.32865731462925857;
          } else {
            result[0] += 0.7148760330578512;
            result[1] += 0.004132231404958678;
            result[2] += 0.1652892561983471;
            result[3] += 0.02066115702479339;
            result[4] += 0.06611570247933884;
            result[5] += 0.028925619834710745;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.90625;
            result[4] += 0;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6063829787234043;
            result[3] += 0.2127659574468085;
            result[4] += 0.010638297872340425;
            result[5] += 0.1702127659574468;
          } else {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4074074074074074;
            result[3] += 0.48148148148148145;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.013761467889908258;
            result[1] += 0;
            result[2] += 0.8623853211009175;
            result[3] += 0.09174311926605505;
            result[4] += 0;
            result[5] += 0.03211009174311927;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9534883720930233;
            result[3] += 0.046511627906976744;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003484320557491289;
            result[1] += 0;
            result[2] += 0.9703832752613241;
            result[3] += 0.02613240418118467;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
            result[0] += 0.0211864406779661;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9745762711864406;
            result[5] += 0.00423728813559322;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.6428571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0.84;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)78.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.2;
          } else {
            result[0] += 0.8085106382978723;
            result[1] += 0.0851063829787234;
            result[2] += 0;
            result[3] += 0.02127659574468085;
            result[4] += 0.06382978723404255;
            result[5] += 0.02127659574468085;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7727272727272727;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.004178272980501393;
            result[2] += 0;
            result[3] += 0.022284122562674095;
            result[4] += 0.026462395543175487;
            result[5] += 0.947075208913649;
          } else {
            result[0] += 0.013392857142857142;
            result[1] += 0.013392857142857142;
            result[2] += 0.013392857142857142;
            result[3] += 0.20535714285714285;
            result[4] += 0.07142857142857142;
            result[5] += 0.6830357142857143;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2765957446808511;
            result[4] += 0.0425531914893617;
            result[5] += 0.6808510638297872;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7513812154696132;
            result[4] += 0.022099447513812154;
            result[5] += 0.2265193370165746;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.1111111111111111;
            result[4] += 0.09523809523809523;
            result[5] += 0.7301587301587301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4761904761904762;
            result[3] += 0.4285714285714286;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)107.5) ) ) {
            result[0] += 0.026785714285714284;
            result[1] += 0.16071428571428573;
            result[2] += 0.017857142857142856;
            result[3] += 0.125;
            result[4] += 0.6607142857142857;
            result[5] += 0.008928571428571428;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            result[0] += 0.3209876543209877;
            result[1] += 0.16049382716049385;
            result[2] += 0;
            result[3] += 0.04938271604938273;
            result[4] += 0.43209876543209885;
            result[5] += 0.03703703703703704;
          } else {
            result[0] += 0.9069539666993144;
            result[1] += 0.002938295788442703;
            result[2] += 0;
            result[3] += 0.012732615083251714;
            result[4] += 0.06366307541625857;
            result[5] += 0.013712047012732615;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
            result[0] += 0.02912621359223301;
            result[1] += 0.05339805825242718;
            result[2] += 0.07281553398058252;
            result[3] += 0.32524271844660196;
            result[4] += 0.16990291262135923;
            result[5] += 0.34951456310679613;
          } else {
            result[0] += 0.6465517241379312;
            result[1] += 0.01724137931034483;
            result[2] += 0.18965517241379312;
            result[3] += 0.060344827586206906;
            result[4] += 0.060344827586206906;
            result[5] += 0.025862068965517244;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16853932584269662;
            result[3] += 0.7640449438202247;
            result[4] += 0;
            result[5] += 0.06741573033707865;
          } else {
            result[0] += 0.0273972602739726;
            result[1] += 0.03424657534246575;
            result[2] += 0.5205479452054794;
            result[3] += 0.19863013698630136;
            result[4] += 0.0547945205479452;
            result[5] += 0.1643835616438356;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.53125;
            result[3] += 0.03125;
            result[4] += 0.0625;
            result[5] += 0;
          } else {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0.9070847851335656;
            result[3] += 0.06736353077816493;
            result[4] += 0;
            result[5] += 0.017421602787456445;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0.01858736059479554;
            result[1] += 0.011152416356877323;
            result[2] += 0.0037174721189591076;
            result[3] += 0.0037174721189591076;
            result[4] += 0.9442379182156134;
            result[5] += 0.01858736059479554;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0.0625;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.5;
            result[5] += 0.30357142857142855;
          } else {
            result[0] += 0.8816568047337278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029585798816568046;
            result[5] += 0.08875739644970414;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.71875;
            result[5] += 0.1875;
          } else {
            result[0] += 0.00125;
            result[1] += 0.00125;
            result[2] += 0;
            result[3] += 0.05125;
            result[4] += 0.03;
            result[5] += 0.91625;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0.018018018018018018;
            result[2] += 0.036036036036036036;
            result[3] += 0.06306306306306306;
            result[4] += 0.6306306306306306;
            result[5] += 0.22522522522522523;
          } else {
            result[0] += 0.06143344709897611;
            result[1] += 0;
            result[2] += 0.010238907849829351;
            result[3] += 0.4709897610921502;
            result[4] += 0.020477815699658702;
            result[5] += 0.43686006825938567;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102) ) ) {
            result[0] += 0.08888888888888889;
            result[1] += 0.13333333333333333;
            result[2] += 0.044444444444444446;
            result[3] += 0.022222222222222223;
            result[4] += 0.6888888888888889;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0;
            result[1] += 0.9545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0.997229916897507;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002770083102493075;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13194444444444445;
            result[2] += 0.013888888888888888;
            result[3] += 0.2847222222222222;
            result[4] += 0.09027777777777778;
            result[5] += 0.4791666666666667;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
            result[0] += 0.8683712121212122;
            result[1] += 0.007575757575757576;
            result[2] += 0.020833333333333332;
            result[3] += 0.03125;
            result[4] += 0.048295454545454544;
            result[5] += 0.023674242424242424;
          } else {
            result[0] += 0.05660377358490566;
            result[1] += 0.9056603773584906;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03773584905660377;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12359550561797752;
            result[3] += 0.651685393258427;
            result[4] += 0;
            result[5] += 0.2247191011235955;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0.48717948717948717;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.56;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.8043478260869565;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0.43478260869565216;
          } else {
            result[0] += 0.022058823529411766;
            result[1] += 0;
            result[2] += 0.7904411764705882;
            result[3] += 0.16176470588235295;
            result[4] += 0.007352941176470588;
            result[5] += 0.01838235294117647;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7205882352941176;
            result[3] += 0.27941176470588236;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9574468085106383;
            result[3] += 0.0425531914893617;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9747572815533981;
            result[3] += 0.021359223300970877;
            result[4] += 0;
            result[5] += 0.0038834951456310682;
          } else {
            result[0] += 0.3125;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.003937007874015748;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9645669291338582;
            result[5] += 0.031496062992125984;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.48543689320388356;
            result[1] += 0.15533980582524273;
            result[2] += 0;
            result[3] += 0.03883495145631068;
            result[4] += 0.21359223300970875;
            result[5] += 0.10679611650485438;
          } else {
            result[0] += 0.0040941658137154556;
            result[1] += 0.009211873080859774;
            result[2] += 0.0010235414534288639;
            result[3] += 0.057318321392016376;
            result[4] += 0.05322415557830092;
            result[5] += 0.8751279426816786;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7551020408163265;
            result[4] += 0;
            result[5] += 0.24489795918367346;
          } else {
            result[0] += 0.09615384615384616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3269230769230769;
            result[4] += 0.038461538461538464;
            result[5] += 0.5384615384615384;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0.018018018018018018;
            result[1] += 0.09009009009009009;
            result[2] += 0.009009009009009009;
            result[3] += 0.0990990990990991;
            result[4] += 0.7207207207207207;
            result[5] += 0.06306306306306306;
          } else {
            result[0] += 0.04761904761904762;
            result[1] += 0.7857142857142858;
            result[2] += 0.02380952380952381;
            result[3] += 0.07142857142857144;
            result[4] += 0.07142857142857144;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.05357142857142857;
            result[1] += 0.39285714285714285;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.5357142857142857;
            result[5] += 0;
          } else {
            result[0] += 0.8876404494382022;
            result[1] += 0.010371650821089023;
            result[2] += 0.003457216940363008;
            result[3] += 0.02592912705272256;
            result[4] += 0.059636992221261884;
            result[5] += 0.01296456352636128;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0.006369426751592357;
            result[1] += 0.028662420382165606;
            result[2] += 0.1624203821656051;
            result[3] += 0.3057324840764331;
            result[4] += 0.08280254777070063;
            result[5] += 0.4140127388535032;
          } else {
            result[0] += 0.5833333333333334;
            result[1] += 0;
            result[2] += 0.2833333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0.03333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0;
            result[2] += 0.13253012048192772;
            result[3] += 0.6746987951807228;
            result[4] += 0.012048192771084338;
            result[5] += 0.1566265060240964;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.5714285714285715;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.025974025974025976;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.1038961038961039;
            result[4] += 0;
            result[5] += 0.05194805194805195;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.5333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.006289308176100629;
            result[1] += 0;
            result[2] += 0.8176100628930818;
            result[3] += 0.1509433962264151;
            result[4] += 0;
            result[5] += 0.025157232704402517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9845626072041166;
            result[3] += 0.015437392795883362;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0.01098901098901099;
            result[1] += 0.005494505494505495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9560439560439561;
            result[5] += 0.027472527472527472;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.35714285714285715;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02364394993045897;
            result[4] += 0.015299026425591099;
            result[5] += 0.96105702364395;
          } else {
            result[0] += 0;
            result[1] += 0.013761467889908258;
            result[2] += 0;
            result[3] += 0.11926605504587157;
            result[4] += 0.1834862385321101;
            result[5] += 0.6834862385321101;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0.0058479532163742695;
            result[1] += 0;
            result[2] += 0.023391812865497078;
            result[3] += 0.7485380116959065;
            result[4] += 0.011695906432748539;
            result[5] += 0.2105263157894737;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975308641975309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024691358024691358;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0.05333333333333334;
            result[4] += 0.8066666666666666;
            result[5] += 0.006666666666666667;
          } else {
            result[0] += 0.0625;
            result[1] += 0.6875;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0.03125;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0.1016949152542373;
            result[1] += 0.05084745762711865;
            result[2] += 0;
            result[3] += 0.22033898305084745;
            result[4] += 0.1016949152542373;
            result[5] += 0.5254237288135594;
          } else {
            result[0] += 0.886443661971831;
            result[1] += 0.02464788732394366;
            result[2] += 0.0044014084507042256;
            result[3] += 0.017605633802816902;
            result[4] += 0.056338028169014086;
            result[5] += 0.01056338028169014;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            result[0] += 0.02109704641350211;
            result[1] += 0.03375527426160337;
            result[2] += 0.0759493670886076;
            result[3] += 0.35864978902953587;
            result[4] += 0.11814345991561181;
            result[5] += 0.3924050632911392;
          } else {
            result[0] += 0.31690140845070425;
            result[1] += 0;
            result[2] += 0.3873239436619718;
            result[3] += 0.09154929577464789;
            result[4] += 0.07746478873239436;
            result[5] += 0.1267605633802817;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03636363636363636;
            result[3] += 0.09090909090909091;
            result[4] += 0.01818181818181818;
            result[5] += 0.8545454545454545;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015873015873015872;
            result[3] += 0.6507936507936508;
            result[4] += 0.015873015873015872;
            result[5] += 0.31746031746031744;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.26666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0.023255813953488372;
            result[2] += 0.18604651162790697;
            result[3] += 0.7209302325581395;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9032258064516129;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.9642857142857143;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.0035587188612099642;
            result[1] += 0;
            result[2] += 0.7295373665480427;
            result[3] += 0.2206405693950178;
            result[4] += 0;
            result[5] += 0.046263345195729534;
          } else {
            result[0] += 0.011477761836441894;
            result[1] += 0;
            result[2] += 0.9426111908177905;
            result[3] += 0.04447632711621234;
            result[4] += 0;
            result[5] += 0.0014347202295552368;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.005988023952095809;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9940119760479041;
            result[5] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.71875;
            result[5] += 0.25;
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.23529411764705882;
            result[5] += 0.7352941176470589;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.25;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02677376171352075;
            result[4] += 0.02677376171352075;
            result[5] += 0.9464524765729585;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.10256410256410256;
            result[1] += 0.05448717948717949;
            result[2] += 0.003205128205128205;
            result[3] += 0.15384615384615385;
            result[4] += 0.08333333333333333;
            result[5] += 0.6025641025641025;
          } else {
            result[0] += 0.015037593984962405;
            result[1] += 0.015037593984962405;
            result[2] += 0;
            result[3] += 0.6917293233082706;
            result[4] += 0.03007518796992481;
            result[5] += 0.24812030075187969;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9615384615384616;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9934782608695653;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006521739130434782;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8953488372093024;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09689922480620156;
            result[5] += 0.007751937984496124;
          } else {
            result[0] += 0.04792332268370607;
            result[1] += 0.07028753993610223;
            result[2] += 0.0670926517571885;
            result[3] += 0.31309904153354634;
            result[4] += 0.16293929712460065;
            result[5] += 0.33865814696485624;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0.1038961038961039;
            result[1] += 0.19480519480519481;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7012987012987013;
            result[5] += 0;
          } else {
            result[0] += 0.937007874015748;
            result[1] += 0;
            result[2] += 0.02249718785151856;
            result[3] += 0.0022497187851518562;
            result[4] += 0.0281214848143982;
            result[5] += 0.010123734533183352;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.7222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06741573033707865;
            result[3] += 0.8202247191011236;
            result[4] += 0;
            result[5] += 0.11235955056179775;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.72;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.15384615384615385;
            result[4] += 0.07692307692307693;
            result[5] += 0.2692307692307692;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.328125;
            result[3] += 0.546875;
            result[4] += 0.03125;
            result[5] += 0.078125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.048387096774193554;
            result[1] += 0;
            result[2] += 0.9193548387096775;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03225806451612904;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)118.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.011764705882352941;
            result[1] += 0;
            result[2] += 0.8352941176470589;
            result[3] += 0.12156862745098039;
            result[4] += 0;
            result[5] += 0.03137254901960784;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)128.5) ) ) {
            result[0] += 0.76;
            result[1] += 0;
            result[2] += 0.24;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8488372093023255;
            result[3] += 0.13953488372093023;
            result[4] += 0;
            result[5] += 0.011627906976744186;
          } else {
            result[0] += 0.00530035335689046;
            result[1] += 0;
            result[2] += 0.9787985865724381;
            result[3] += 0.012367491166077738;
            result[4] += 0;
            result[5] += 0.0035335689045936395;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0;
            result[4] += 0.5000000000000001;
            result[5] += 0.16666666666666669;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031704095112285335;
            result[4] += 0.007926023778071334;
            result[5] += 0.9603698811096433;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.014778325123152709;
            result[1] += 0.014778325123152709;
            result[2] += 0;
            result[3] += 0.10837438423645321;
            result[4] += 0.11330049261083744;
            result[5] += 0.7487684729064039;
          } else {
            result[0] += 0;
            result[1] += 0.013513513513513514;
            result[2] += 0.018018018018018018;
            result[3] += 0.5540540540540541;
            result[4] += 0.03153153153153153;
            result[5] += 0.38288288288288286;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9952267303102625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00477326968973747;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
            result[0] += 0.07317073170731707;
            result[1] += 0.11382113821138211;
            result[2] += 0.024390243902439025;
            result[3] += 0.12195121951219512;
            result[4] += 0.6178861788617886;
            result[5] += 0.04878048780487805;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0.8518518518518519;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.2903225806451613;
            result[1] += 0.1827956989247312;
            result[2] += 0;
            result[3] += 0.010752688172043012;
            result[4] += 0.45161290322580644;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0.8912855910267472;
            result[1] += 0.014667817083692839;
            result[2] += 0.004314063848144953;
            result[3] += 0.025884383088869714;
            result[4] += 0.04831751509922347;
            result[5] += 0.015530629853321829;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.00966183574879227;
            result[1] += 0.03864734299516908;
            result[2] += 0.07246376811594203;
            result[3] += 0.4975845410628019;
            result[4] += 0.00966183574879227;
            result[5] += 0.3719806763285024;
          } else {
            result[0] += 0.7282608695652174;
            result[1] += 0.03260869565217391;
            result[2] += 0.15217391304347827;
            result[3] += 0.010869565217391304;
            result[4] += 0.07608695652173914;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06422018348623854;
            result[3] += 0.3394495412844037;
            result[4] += 0.045871559633027525;
            result[5] += 0.5504587155963303;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.059322033898305086;
            result[2] += 0.6694915254237288;
            result[3] += 0.15254237288135594;
            result[4] += 0.05084745762711865;
            result[5] += 0.06779661016949153;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.37755102040816324;
            result[4] += 0.02040816326530612;
            result[5] += 0.10204081632653061;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
            result[0] += 0.5333333333333333;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0075;
            result[1] += 0;
            result[2] += 0.935;
            result[3] += 0.055;
            result[4] += 0;
            result[5] += 0.0025;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9671361502347418;
            result[5] += 0.03286384976525822;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0.36363636363636365;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.6111111111111112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3055555555555556;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04735062006764374;
            result[4] += 0.03494926719278467;
            result[5] += 0.9177001127395716;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5614035087719298;
            result[1] += 0.22807017543859648;
            result[2] += 0;
            result[3] += 0.03508771929824561;
            result[4] += 0.07017543859649122;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0.0031847133757961785;
            result[1] += 0;
            result[2] += 0.03184713375796178;
            result[3] += 0.4681528662420382;
            result[4] += 0.025477707006369428;
            result[5] += 0.4713375796178344;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.12437810945273632;
            result[1] += 0.2885572139303483;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.572139303482587;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.8694915254237289;
            result[1] += 0.005084745762711865;
            result[2] += 0.023728813559322038;
            result[3] += 0.039830508474576275;
            result[4] += 0.04576271186440679;
            result[5] += 0.01610169491525424;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.0136986301369863;
            result[1] += 0.010958904109589041;
            result[2] += 0.2356164383561644;
            result[3] += 0.35342465753424657;
            result[4] += 0.07945205479452055;
            result[5] += 0.30684931506849317;
          } else {
            result[0] += 0.8783783783783784;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0;
            result[4] += 0.0945945945945946;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109.5) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.08333333333333333;
            result[5] += 0.7916666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20588235294117646;
            result[3] += 0.6764705882352942;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.5595238095238095;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.047619047619047616;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
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
            result[0] += 0;
            result[1] += 0.006172839506172839;
            result[2] += 0.808641975308642;
            result[3] += 0.17901234567901234;
            result[4] += 0;
            result[5] += 0.006172839506172839;
          } else {
            result[0] += 0.0015698587127158557;
            result[1] += 0.004709576138147566;
            result[2] += 0.9623233908948194;
            result[3] += 0.03139717425431711;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0.017605633802816906;
            result[1] += 0.003521126760563381;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9507042253521127;
            result[5] += 0.028169014084507046;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
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
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
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
            result[0] += 0.4651162790697675;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488375;
            result[4] += 0.4651162790697675;
            result[5] += 0.04651162790697675;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.08571428571428572;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019206145966709345;
            result[4] += 0.03713188220230474;
            result[5] += 0.9436619718309859;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.7692307692307693;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008264462809917356;
            result[3] += 0.09917355371900827;
            result[4] += 0.06611570247933884;
            result[5] += 0.8264462809917356;
          } else {
            result[0] += 0.024896265560165973;
            result[1] += 0;
            result[2] += 0.004149377593360996;
            result[3] += 0.35269709543568467;
            result[4] += 0.07053941908713693;
            result[5] += 0.5477178423236515;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.26666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7333333333333333;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.026315789473684213;
            result[1] += 0.9473684210526316;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.026315789473684213;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0072992700729927005;
            result[1] += 0.0072992700729927005;
            result[2] += 0.021897810218978103;
            result[3] += 0.5036496350364964;
            result[4] += 0.08029197080291971;
            result[5] += 0.3795620437956204;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
            result[0] += 0.8278985507246377;
            result[1] += 0.008152173913043478;
            result[2] += 0.03351449275362319;
            result[3] += 0.025362318840579712;
            result[4] += 0.07608695652173914;
            result[5] += 0.028985507246376812;
          } else {
            result[0] += 0;
            result[1] += 0.896551724137931;
            result[2] += 0.017241379310344827;
            result[3] += 0.05172413793103448;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.02702702702702703;
            result[2] += 0.08108108108108109;
            result[3] += 0.24324324324324326;
            result[4] += 0.1891891891891892;
            result[5] += 0.4594594594594595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11377245508982035;
            result[3] += 0.7065868263473054;
            result[4] += 0;
            result[5] += 0.17964071856287425;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.25;
            result[5] += 0.5625;
          } else {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.5864197530864198;
            result[3] += 0.3271604938271605;
            result[4] += 0.006172839506172839;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0.5405405405405406;
            result[1] += 0.21621621621621623;
            result[2] += 0.13513513513513514;
            result[3] += 0.05405405405405406;
            result[4] += 0.05405405405405406;
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0.022670025188916875;
            result[1] += 0.0025188916876574307;
            result[2] += 0.7732997481108312;
            result[3] += 0.12846347607052896;
            result[4] += 0.015113350125944584;
            result[5] += 0.05793450881612091;
          } else {
            result[0] += 0.0018726591760299626;
            result[1] += 0;
            result[2] += 0.9719101123595506;
            result[3] += 0.026217228464419477;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.012448132780082987;
            result[2] += 0;
            result[3] += 0.004149377593360996;
            result[4] += 0.946058091286307;
            result[5] += 0.03734439834024896;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
            result[0] += 0.005611672278338945;
            result[1] += 0.003367003367003367;
            result[2] += 0.002244668911335578;
            result[3] += 0.03254769921436588;
            result[4] += 0.037037037037037035;
            result[5] += 0.9191919191919192;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.023809523809523808;
            result[5] += 0.30952380952380953;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9574468085106383;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0425531914893617;
            result[5] += 0;
          } else {
            result[0] += 0.003937007874015748;
            result[1] += 0.003937007874015748;
            result[2] += 0.01968503937007874;
            result[3] += 0.421259842519685;
            result[4] += 0.13385826771653545;
            result[5] += 0.41732283464566927;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
            result[0] += 0.12272727272727273;
            result[1] += 0.2681818181818182;
            result[2] += 0;
            result[3] += 0.004545454545454545;
            result[4] += 0.5136363636363637;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.8365384615384617;
            result[1] += 0.03321678321678322;
            result[2] += 0.005244755244755246;
            result[3] += 0.013986013986013988;
            result[4] += 0.05681818181818182;
            result[5] += 0.0541958041958042;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            result[0] += 0.004524886877828055;
            result[1] += 0.00904977375565611;
            result[2] += 0.2171945701357466;
            result[3] += 0.4343891402714932;
            result[4] += 0.01809954751131222;
            result[5] += 0.3167420814479638;
          } else {
            result[0] += 0.6190476190476191;
            result[1] += 0;
            result[2] += 0.13095238095238096;
            result[3] += 0;
            result[4] += 0.23809523809523808;
            result[5] += 0.011904761904761904;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.2857142857142857;
            result[2] += 0.42857142857142855;
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0.7804878048780488;
            result[4] += 0;
            result[5] += 0.17073170731707318;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.64;
            result[3] += 0.28;
            result[4] += 0;
            result[5] += 0.08;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4117647058823529;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.6956521739130435;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.6470588235294118;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.36;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.52;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.03768844221105527;
            result[1] += 0;
            result[2] += 0.8241206030150754;
            result[3] += 0.135678391959799;
            result[4] += 0;
            result[5] += 0.002512562814070352;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9690048939641109;
            result[3] += 0.03099510603588907;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
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
            result[4] += 0.8235294117647058;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0.6363636363636364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.003157894736842105;
            result[2] += 0;
            result[3] += 0.06421052631578947;
            result[4] += 0.06736842105263158;
            result[5] += 0.8652631578947368;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.047619047619047616;
            result[4] += 0.21428571428571427;
            result[5] += 0.6904761904761905;
          } else {
            result[0] += 0;
            result[1] += 0.005208333333333333;
            result[2] += 0.020833333333333332;
            result[3] += 0.6875;
            result[4] += 0;
            result[5] += 0.2864583333333333;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0.12903225806451613;
            result[2] += 0.024193548387096774;
            result[3] += 0.008064516129032258;
            result[4] += 0.782258064516129;
            result[5] += 0.024193548387096774;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.24786324786324787;
            result[1] += 0.3076923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37606837606837606;
            result[5] += 0.06837606837606838;
          } else {
            result[0] += 0.8889891696750902;
            result[1] += 0.0018050541516245488;
            result[2] += 0.004512635379061372;
            result[3] += 0.01895306859205776;
            result[4] += 0.06407942238267147;
            result[5] += 0.021660649819494584;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0.04428044280442804;
            result[1] += 0.04797047970479705;
            result[2] += 0.23985239852398524;
            result[3] += 0.34317343173431736;
            result[4] += 0.04059040590405904;
            result[5] += 0.28413284132841327;
          } else {
            result[0] += 0.6940298507462687;
            result[1] += 0.022388059701492536;
            result[2] += 0.20149253731343283;
            result[3] += 0.007462686567164179;
            result[4] += 0.06716417910447761;
            result[5] += 0.007462686567164179;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0.9583333333333334;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.19387755102040816;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0.018518518518518517;
            result[2] += 0.6111111111111112;
            result[3] += 0.09259259259259259;
            result[4] += 0.018518518518518517;
            result[5] += 0.25925925925925924;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.024305555555555556;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.03125;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112.5) ) ) {
            result[0] += 0.4444444444444444;
            result[1] += 0;
            result[2] += 0.5555555555555556;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9447513812154696;
            result[3] += 0.049723756906077346;
            result[4] += 0;
            result[5] += 0.0055248618784530384;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0021551724137931034;
            result[1] += 0;
            result[2] += 0.9913793103448276;
            result[3] += 0.00646551724137931;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0.03374233128834356;
            result[1] += 0.046012269938650305;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8650306748466258;
            result[5] += 0.05521472392638037;
          } else {
            result[0] += 0.026666666666666672;
            result[1] += 0.8266666666666668;
            result[2] += 0.026666666666666672;
            result[3] += 0;
            result[4] += 0.12000000000000001;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.5625;
            result[5] += 0.375;
          } else {
            result[0] += 0.94;
            result[1] += 0.01;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037396121883656507;
            result[4] += 0.019390581717451522;
            result[5] += 0.943213296398892;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0.011049723756906077;
            result[2] += 0.03314917127071823;
            result[3] += 0.35359116022099446;
            result[4] += 0.11049723756906077;
            result[5] += 0.49171270718232046;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101) ) ) {
            result[0] += 0.350597609561753;
            result[1] += 0.055776892430278883;
            result[2] += 0.00796812749003984;
            result[3] += 0.08366533864541832;
            result[4] += 0.35856573705179284;
            result[5] += 0.14342629482071714;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0.8653846153846154;
            result[2] += 0;
            result[3] += 0.057692307692307696;
            result[4] += 0.057692307692307696;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.01990049751243781;
            result[1] += 0.03482587064676617;
            result[2] += 0;
            result[3] += 0.1890547263681592;
            result[4] += 0.14925373134328357;
            result[5] += 0.6069651741293532;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.6041666666666666;
            result[4] += 0.020833333333333332;
            result[5] += 0.2916666666666667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
            result[0] += 0.86;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.12;
            result[5] += 0;
          } else {
            result[0] += 0.995;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0033333333333333335;
            result[4] += 0.0016666666666666668;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8285714285714286;
            result[3] += 0.11428571428571428;
            result[4] += 0.02857142857142857;
            result[5] += 0.02857142857142857;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.75;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3088235294117647;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.22058823529411764;
          } else {
            result[0] += 0.018229166666666668;
            result[1] += 0;
            result[2] += 0.7552083333333334;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.0390625;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.9629629629629629;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9833333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.016666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8214285714285714;
            result[3] += 0.16964285714285715;
            result[4] += 0;
            result[5] += 0.008928571428571428;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.963855421686747;
            result[3] += 0.03614457831325301;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9946949602122016;
            result[3] += 0.005305039787798408;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947643979057592;
            result[5] += 0.005235602094240838;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.06451612903225806;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7096774193548387;
            result[5] += 0.22580645161290322;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014218009478672985;
            result[4] += 0.01263823064770932;
            result[5] += 0.9731437598736177;
          } else {
            result[0] += 0;
            result[1] += 0.025210084033613446;
            result[2] += 0.03361344537815126;
            result[3] += 0.11764705882352941;
            result[4] += 0.09243697478991597;
            result[5] += 0.7310924369747899;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0.008771929824561403;
            result[2] += 0;
            result[3] += 0.21929824561403508;
            result[4] += 0.043859649122807015;
            result[5] += 0.7280701754385965;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010526315789473684;
            result[3] += 0.2736842105263158;
            result[4] += 0.042105263157894736;
            result[5] += 0.6736842105263158;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.2;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.65;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7687074829931972;
            result[4] += 0.013605442176870748;
            result[5] += 0.21768707482993196;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0.7037037037037037;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2962962962962963;
            result[5] += 0;
          } else {
            result[0] += 0.023255813953488372;
            result[1] += 0.05813953488372093;
            result[2] += 0.011627906976744186;
            result[3] += 0.011627906976744186;
            result[4] += 0.8837209302325582;
            result[5] += 0.011627906976744186;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.14545454545454548;
            result[1] += 0.3636363636363637;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48181818181818187;
            result[5] += 0.009090909090909092;
          } else {
            result[0] += 0.8945216680294358;
            result[1] += 0.017988552739165987;
            result[2] += 0.007358953393295176;
            result[3] += 0.016353229762878167;
            result[4] += 0.04987735077677841;
            result[5] += 0.013900245298446443;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
            result[0] += 0.05084745762711865;
            result[1] += 0.02824858757062147;
            result[2] += 0.03954802259887006;
            result[3] += 0.3728813559322034;
            result[4] += 0.07909604519774012;
            result[5] += 0.4293785310734463;
          } else {
            result[0] += 0.9534883720930233;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19444444444444445;
            result[4] += 0;
            result[5] += 0.8055555555555556;
          } else {
            result[0] += 0;
            result[1] += 0.023809523809523808;
            result[2] += 0.1349206349206349;
            result[3] += 0.48412698412698413;
            result[4] += 0.031746031746031744;
            result[5] += 0.3253968253968254;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0.023529411764705882;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.29411764705882354;
            result[4] += 0.011764705882352941;
            result[5] += 0.023529411764705882;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0.021739130434782605;
            result[1] += 0;
            result[2] += 0.5108695652173912;
            result[3] += 0.43478260869565205;
            result[4] += 0.010869565217391302;
            result[5] += 0.021739130434782605;
          } else {
            result[0] += 0.10849056603773585;
            result[1] += 0;
            result[2] += 0.7783018867924528;
            result[3] += 0.08490566037735849;
            result[4] += 0.0047169811320754715;
            result[5] += 0.02358490566037736;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.8488888888888889;
            result[3] += 0.10222222222222223;
            result[4] += 0;
            result[5] += 0.02666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.979381443298969;
            result[3] += 0.016494845360824743;
            result[4] += 0;
            result[5] += 0.004123711340206186;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.004629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9907407407407407;
            result[5] += 0.004629629629629629;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.001455604075691412;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026200873362445413;
            result[4] += 0.00727802037845706;
            result[5] += 0.9650655021834061;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8846153846153847;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307694;
            result[5] += 0.03846153846153847;
          } else {
            result[0] += 0.004987531172069825;
            result[1] += 0.04488778054862843;
            result[2] += 0;
            result[3] += 0.36159600997506236;
            result[4] += 0.04987531172069826;
            result[5] += 0.5386533665835411;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)105.5) ) ) {
            result[0] += 0.8079051383399211;
            result[1] += 0.00948616600790514;
            result[2] += 0;
            result[3] += 0.022924901185770754;
            result[4] += 0.13201581027667986;
            result[5] += 0.027667984189723323;
          } else {
            result[0] += 0.012048192771084338;
            result[1] += 0.8674698795180723;
            result[2] += 0;
            result[3] += 0.0963855421686747;
            result[4] += 0.024096385542168676;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0.009868421052631578;
            result[1] += 0.03289473684210526;
            result[2] += 0.10526315789473684;
            result[3] += 0.3223684210526316;
            result[4] += 0.07894736842105263;
            result[5] += 0.4506578947368421;
          } else {
            result[0] += 0.657142857142857;
            result[1] += 0.019047619047619046;
            result[2] += 0.18095238095238092;
            result[3] += 0.019047619047619046;
            result[4] += 0.11428571428571425;
            result[5] += 0.009523809523809523;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0.0024630541871921183;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5882352941176471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4117647058823529;
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.20689655172413793;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.27586206896551724;
            result[5] += 0.4482758620689655;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.39622641509433965;
            result[4] += 0;
            result[5] += 0.6037735849056604;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1621621621621622;
            result[3] += 0.6891891891891893;
            result[4] += 0.027027027027027032;
            result[5] += 0.12162162162162164;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0.8260869565217391;
          } else {
            result[0] += 0;
            result[1] += 0.021276595744680854;
            result[2] += 0.3829787234042554;
            result[3] += 0.4468085106382979;
            result[4] += 0;
            result[5] += 0.14893617021276598;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117.5) ) ) {
            result[0] += 0.03787878787878789;
            result[1] += 0.030303030303030307;
            result[2] += 0.7727272727272728;
            result[3] += 0.08333333333333334;
            result[4] += 0.03787878787878789;
            result[5] += 0.03787878787878789;
          } else {
            result[0] += 0.47619047619047616;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.11904761904761904;
            result[4] += 0.023809523809523808;
            result[5] += 0.023809523809523808;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.2727272727272727;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8173913043478261;
            result[3] += 0.1782608695652174;
            result[4] += 0;
            result[5] += 0.004347826086956522;
          } else {
            result[0] += 0.008620689655172414;
            result[1] += 0;
            result[2] += 0.9620689655172414;
            result[3] += 0.029310344827586206;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
            result[0] += 0.004694835680751174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9295774647887324;
            result[5] += 0.06572769953051644;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.21739130434782608;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6086956521739131;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0.9318181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06818181818181818;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0440324449594438;
            result[4] += 0.05214368482039398;
            result[5] += 0.9038238702201622;
          } else {
            result[0] += 0.028268551236749116;
            result[1] += 0.038869257950530034;
            result[2] += 0.01060070671378092;
            result[3] += 0.33568904593639576;
            result[4] += 0.08833922261484099;
            result[5] += 0.49823321554770317;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.9908466819221968;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009153318077803204;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7647058823529412;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2058823529411765;
            result[5] += 0.029411764705882356;
          } else {
            result[0] += 0.005714285714285714;
            result[1] += 0.011428571428571429;
            result[2] += 0;
            result[3] += 0.29714285714285715;
            result[4] += 0.10857142857142857;
            result[5] += 0.5771428571428572;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
            result[0] += 0.10256410256410256;
            result[1] += 0.1987179487179487;
            result[2] += 0.02564102564102564;
            result[3] += 0.00641025641025641;
            result[4] += 0.6538461538461539;
            result[5] += 0.01282051282051282;
          } else {
            result[0] += 0.83278955954323;
            result[1] += 0.026101141924959218;
            result[2] += 0.03262642740619902;
            result[3] += 0.0367047308319739;
            result[4] += 0.0432300163132137;
            result[5] += 0.028548123980424143;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06716417910447761;
            result[3] += 0.664179104477612;
            result[4] += 0.022388059701492536;
            result[5] += 0.2462686567164179;
          } else {
            result[0] += 0;
            result[1] += 0.017241379310344827;
            result[2] += 0.3620689655172414;
            result[3] += 0.3103448275862069;
            result[4] += 0.10344827586206896;
            result[5] += 0.20689655172413793;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.12121212121212122;
            result[5] += 0.7878787878787878;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6071428571428572;
            result[3] += 0.3571428571428572;
            result[4] += 0;
            result[5] += 0.03571428571428572;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9000000000000001;
            result[3] += 0.07142857142857144;
            result[4] += 0.014285714285714287;
            result[5] += 0.014285714285714287;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0.034482758620689655;
            result[2] += 0.6896551724137931;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.13793103448275862;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.2;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35;
            result[3] += 0.55;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0.006031363088057902;
            result[1] += 0;
            result[2] += 0.9264173703256937;
            result[3] += 0.06634499396863693;
            result[4] += 0;
            result[5] += 0.0012062726176115804;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84) ) ) {
            result[0] += 0.011834319526627219;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9408284023668639;
            result[5] += 0.047337278106508875;
          } else {
            result[0] += 0.4285714285714286;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0;
            result[4] += 0.14285714285714288;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08571428571428572;
            result[2] += 0;
            result[3] += 0.05714285714285714;
            result[4] += 0.17142857142857143;
            result[5] += 0.6857142857142857;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.925;
            result[5] += 0.075;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03496503496503497;
            result[4] += 0.04195804195804196;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01;
            result[3] += 0.47;
            result[4] += 0.03;
            result[5] += 0.49;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.09666666666666666;
            result[1] += 0.28;
            result[2] += 0;
            result[3] += 0.023333333333333334;
            result[4] += 0.5866666666666667;
            result[5] += 0.013333333333333334;
          } else {
            result[0] += 0.8424437299035371;
            result[1] += 0.012861736334405146;
            result[2] += 0.0032154340836012866;
            result[3] += 0.05385852090032155;
            result[4] += 0.056270096463022515;
            result[5] += 0.031350482315112546;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0.006600660066006601;
            result[1] += 0;
            result[2] += 0.039603960396039604;
            result[3] += 0.43564356435643564;
            result[4] += 0.0297029702970297;
            result[5] += 0.4884488448844885;
          } else {
            result[0] += 0.22764227642276422;
            result[1] += 0.008130081300813009;
            result[2] += 0.4065040650406504;
            result[3] += 0.21544715447154472;
            result[4] += 0.08130081300813008;
            result[5] += 0.06097560975609756;
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.11111111111111112;
            result[4] += 0.33333333333333337;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9047619047619048;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.6;
            result[4] += 0.025;
            result[5] += 0.225;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0.07692307692307693;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5384615384615384;
            result[1] += 0.02564102564102564;
            result[2] += 0.1282051282051282;
            result[3] += 0.02564102564102564;
            result[4] += 0.05128205128205128;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03424657534246575;
            result[1] += 0;
            result[2] += 0.815068493150685;
            result[3] += 0.1095890410958904;
            result[4] += 0;
            result[5] += 0.0410958904109589;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.6875;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6341463414634146;
            result[3] += 0.3170731707317073;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.97;
            result[3] += 0.02;
            result[4] += 0;
            result[5] += 0.01;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8918918918918919;
            result[3] += 0.10810810810810811;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.980544747081712;
            result[3] += 0.019455252918287938;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.004807692307692308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9615384615384616;
            result[5] += 0.03365384615384615;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.28571428571428575;
            result[2] += 0;
            result[3] += 0.4285714285714286;
            result[4] += 0.28571428571428575;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.5692307692307693;
            result[1] += 0.07692307692307694;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32307692307692315;
            result[5] += 0.030769230769230774;
          } else {
            result[0] += 0.004296455424274973;
            result[1] += 0.00644468313641246;
            result[2] += 0;
            result[3] += 0.05800214822771214;
            result[4] += 0.05263157894736842;
            result[5] += 0.878625134264232;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.017094017094017096;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2905982905982906;
            result[4] += 0.008547008547008548;
            result[5] += 0.6837606837606838;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.0078125;
            result[3] += 0.8515625;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            result[0] += 0.11320754716981132;
            result[1] += 0.2893081761006289;
            result[2] += 0;
            result[3] += 0.012578616352201259;
            result[4] += 0.559748427672956;
            result[5] += 0.025157232704402517;
          } else {
            result[0] += 0.8371696504688833;
            result[1] += 0.013640238704177323;
            result[2] += 0.005115089514066497;
            result[3] += 0.0443307757885763;
            result[4] += 0.0792838874680307;
            result[5] += 0.020460358056265986;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.0051813471502590676;
            result[1] += 0.03626943005181347;
            result[2] += 0.09326424870466321;
            result[3] += 0.39378238341968913;
            result[4] += 0.11917098445595854;
            result[5] += 0.35233160621761656;
          } else {
            result[0] += 0.20187793427230047;
            result[1] += 0.014084507042253521;
            result[2] += 0.5352112676056338;
            result[3] += 0.04225352112676056;
            result[4] += 0.10328638497652583;
            result[5] += 0.10328638497652583;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01694915254237288;
            result[4] += 0.01694915254237288;
            result[5] += 0.9661016949152542;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0.2857142857142857;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.05555555555555555;
            result[5] += 0.7222222222222222;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.7586206896551724;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2894736842105263;
            result[3] += 0.6052631578947368;
            result[4] += 0.02631578947368421;
            result[5] += 0.07894736842105263;
          } else {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            result[0] += 0.1917808219178082;
            result[1] += 0;
            result[2] += 0.6438356164383562;
            result[3] += 0.1232876712328767;
            result[4] += 0;
            result[5] += 0.0410958904109589;
          } else {
            result[0] += 0.003537735849056604;
            result[1] += 0;
            result[2] += 0.9339622641509434;
            result[3] += 0.05070754716981132;
            result[4] += 0;
            result[5] += 0.01179245283018868;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0037174721189591076;
            result[1] += 0.022304832713754646;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9368029739776952;
            result[5] += 0.03717472118959108;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0.3333333333333333;
            result[5] += 0.4666666666666667;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8823529411764706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.06818181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4772727272727273;
            result[5] += 0.45454545454545453;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02824858757062147;
            result[4] += 0.026836158192090395;
            result[5] += 0.9449152542372882;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011049723756906077;
            result[3] += 0.0718232044198895;
            result[4] += 0.143646408839779;
            result[5] += 0.7734806629834254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012987012987012988;
            result[3] += 0.5454545454545454;
            result[4] += 0.1038961038961039;
            result[5] += 0.33766233766233766;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.18421052631578946;
            result[2] += 0.02631578947368421;
            result[3] += 0.05263157894736842;
            result[4] += 0.6842105263157895;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
            result[0] += 0.0045871559633027525;
            result[1] += 0.9954128440366973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7096774193548387;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2903225806451613;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8870056497175142;
            result[1] += 0.02824858757062147;
            result[2] += 0;
            result[3] += 0.022598870056497175;
            result[4] += 0.05084745762711865;
            result[5] += 0.011299435028248588;
          } else {
            result[0] += 0.03762376237623762;
            result[1] += 0.0039603960396039604;
            result[2] += 0.08316831683168317;
            result[3] += 0.44554455445544555;
            result[4] += 0.05148514851485148;
            result[5] += 0.3782178217821782;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8612204724409449;
            result[1] += 0.04133858267716536;
            result[2] += 0.005905511811023622;
            result[3] += 0.017716535433070866;
            result[4] += 0.0639763779527559;
            result[5] += 0.00984251968503937;
          } else {
            result[0] += 0.2809917355371901;
            result[1] += 0.008264462809917356;
            result[2] += 0.45454545454545453;
            result[3] += 0.09917355371900827;
            result[4] += 0.05785123966942149;
            result[5] += 0.09917355371900827;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
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
            result[3] += 0.967741935483871;
            result[4] += 0;
            result[5] += 0.03225806451612903;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0.4761904761904762;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.52;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.28;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6567164179104478;
            result[3] += 0.291044776119403;
            result[4] += 0;
            result[5] += 0.05223880597014925;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.9222222222222223;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005722460658082976;
            result[1] += 0;
            result[2] += 0.9484978540772532;
            result[3] += 0.044349070100143065;
            result[4] += 0;
            result[5] += 0.001430615164520744;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
            result[0] += 0.004424778761061947;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9911504424778761;
            result[5] += 0.004424778761061947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363635;
            result[5] += 0.7954545454545454;
          } else {
            result[0] += 0.723404255319149;
            result[1] += 0.010638297872340425;
            result[2] += 0;
            result[3] += 0.031914893617021274;
            result[4] += 0.18085106382978725;
            result[5] += 0.05319148936170213;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05219454329774614;
            result[4] += 0.04389086595492289;
            result[5] += 0.9039145907473309;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0851063829787234;
            result[4] += 0.05319148936170213;
            result[5] += 0.8617021276595744;
          } else {
            result[0] += 0.004484304932735426;
            result[1] += 0.017937219730941704;
            result[2] += 0.004484304932735426;
            result[3] += 0.57847533632287;
            result[4] += 0.06278026905829596;
            result[5] += 0.33183856502242154;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8292682926829269;
            result[2] += 0;
            result[3] += 0.07317073170731708;
            result[4] += 0.09756097560975611;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.18881118881118883;
            result[1] += 0.3286713286713287;
            result[2] += 0;
            result[3] += 0.006993006993006994;
            result[4] += 0.4545454545454546;
            result[5] += 0.020979020979020983;
          } else {
            result[0] += 0.8415124698310539;
            result[1] += 0.008045052292839904;
            result[2] += 0.016894609814963796;
            result[3] += 0.042638777152051485;
            result[4] += 0.06275140788415125;
            result[5] += 0.02815768302493966;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.009615384615384616;
            result[2] += 0.038461538461538464;
            result[3] += 0.375;
            result[4] += 0.0673076923076923;
            result[5] += 0.47115384615384615;
          } else {
            result[0] += 0.049586776859504134;
            result[1] += 0.008264462809917356;
            result[2] += 0.5454545454545454;
            result[3] += 0.19834710743801653;
            result[4] += 0;
            result[5] += 0.19834710743801653;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.625;
            result[4] += 0.0625;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.1;
            result[5] += 0.85;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.009900990099009901;
            result[2] += 0.1485148514851485;
            result[3] += 0.7425742574257426;
            result[4] += 0.019801980198019802;
            result[5] += 0.07920792079207921;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0.6875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.16;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.06;
            result[4] += 0;
            result[5] += 0.04;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.20588235294117646;
            result[2] += 0.08823529411764706;
            result[3] += 0.5294117647058824;
            result[4] += 0.029411764705882353;
            result[5] += 0.14705882352941177;
          } else {
            result[0] += 0.3125;
            result[1] += 0.0625;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0.04477611940298507;
            result[1] += 0;
            result[2] += 0.9104477611940298;
            result[3] += 0.04477611940298507;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8823529411764706;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8129032258064516;
            result[3] += 0.1870967741935484;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8660714285714286;
            result[3] += 0.13392857142857142;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9808795411089866;
            result[3] += 0.019120458891013385;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
            result[0] += 0.0036900369003690036;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.940959409594096;
            result[5] += 0.055350553505535055;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0.8976377952755905;
            result[1] += 0.007874015748031496;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09448818897637795;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0.002277904328018223;
            result[1] += 0;
            result[2] += 0.0011389521640091116;
            result[3] += 0.05466970387243736;
            result[4] += 0.05125284738041002;
            result[5] += 0.8906605922551253;
          } else {
            result[0] += 0.04487179487179487;
            result[1] += 0.0641025641025641;
            result[2] += 0.03205128205128205;
            result[3] += 0.25961538461538464;
            result[4] += 0.11538461538461539;
            result[5] += 0.483974358974359;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011049723756906077;
            result[1] += 0.03314917127071823;
            result[2] += 0.09392265193370165;
            result[3] += 0.44751381215469616;
            result[4] += 0.04419889502762431;
            result[5] += 0.3701657458563536;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
            result[0] += 0.29213483146067415;
            result[1] += 0.06741573033707865;
            result[2] += 0.02247191011235955;
            result[3] += 0.011235955056179775;
            result[4] += 0.5617977528089888;
            result[5] += 0.0449438202247191;
          } else {
            result[0] += 0.8581560283687943;
            result[1] += 0.02127659574468085;
            result[2] += 0.022163120567375887;
            result[3] += 0.0425531914893617;
            result[4] += 0.03900709219858156;
            result[5] += 0.016843971631205674;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.9333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.7428571428571429;
            result[4] += 0.009523809523809525;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.05;
            result[5] += 0.6;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8653846153846154;
            result[3] += 0.038461538461538464;
            result[4] += 0.057692307692307696;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.2222222222222222;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
            result[0] += 0.0975609756097561;
            result[1] += 0.17073170731707318;
            result[2] += 0.2682926829268293;
            result[3] += 0.2682926829268293;
            result[4] += 0.0975609756097561;
            result[5] += 0.0975609756097561;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0.006825938566552901;
            result[1] += 0;
            result[2] += 0.7372013651877133;
            result[3] += 0.2150170648464164;
            result[4] += 0;
            result[5] += 0.040955631399317405;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004511278195488722;
            result[1] += 0;
            result[2] += 0.956390977443609;
            result[3] += 0.039097744360902256;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
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
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.975609756097561;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35294117647058826;
            result[5] += 0.5294117647058824;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011123470522803114;
            result[3] += 0.04338153503893215;
            result[4] += 0.03114571746384872;
            result[5] += 0.9243604004449388;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.675;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.06172839506172839;
            result[5] += 0.6975308641975309;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0.011235955056179777;
            result[1] += 0.016853932584269666;
            result[2] += 0;
            result[3] += 0.752808988764045;
            result[4] += 0.022471910112359553;
            result[5] += 0.1966292134831461;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.057692307692307696;
            result[2] += 0.038461538461538464;
            result[3] += 0.11538461538461539;
            result[4] += 0.019230769230769232;
            result[5] += 0.6923076923076923;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.08888888888888889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0.1111111111111111;
            result[3] += 0.4444444444444444;
            result[4] += 0.1111111111111111;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
            result[0] += 0.00234192037470726;
            result[1] += 0.9953161592505855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00234192037470726;
            result[5] += 0;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0.6444444444444445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0.20634920634920634;
            result[2] += 0;
            result[3] += 0.015873015873015872;
            result[4] += 0.047619047619047616;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.09558823529411764;
            result[2] += 0.022058823529411766;
            result[3] += 0;
            result[4] += 0.7352941176470589;
            result[5] += 0.08823529411764706;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0.24324324324324328;
            result[1] += 0.01801801801801802;
            result[2] += 0.00900900900900901;
            result[3] += 0.3423423423423424;
            result[4] += 0.027027027027027032;
            result[5] += 0.3603603603603604;
          } else {
            result[0] += 0.8625756266205705;
            result[1] += 0.025929127052722562;
            result[2] += 0.01642178046672429;
            result[3] += 0.02852203975799482;
            result[4] += 0.042350907519446854;
            result[5] += 0.024200518582541058;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.8421052631578947;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.68;
            result[4] += 0;
            result[5] += 0.18666666666666668;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285715;
            result[3] += 0.3928571428571429;
            result[4] += 0;
            result[5] += 0.03571428571428572;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
            result[0] += 0.05172413793103448;
            result[1] += 0;
            result[2] += 0.25862068965517243;
            result[3] += 0.43103448275862066;
            result[4] += 0;
            result[5] += 0.25862068965517243;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.05491329479768787;
            result[1] += 0.005780346820809249;
            result[2] += 0.7630057803468209;
            result[3] += 0.1647398843930636;
            result[4] += 0;
            result[5] += 0.011560693641618498;
          } else {
            result[0] += 0.00631911532385466;
            result[1] += 0;
            result[2] += 0.9589257503949447;
            result[3] += 0.030015797788309637;
            result[4] += 0;
            result[5] += 0.004739336492890996;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
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
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0.07407407407407408;
            result[1] += 0.1851851851851852;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666667;
            result[5] += 0.07407407407407408;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.7391304347826086;
            result[5] += 0.2391304347826087;
          } else {
            result[0] += 0.023114355231143552;
            result[1] += 0.0024330900243309003;
            result[2] += 0.0024330900243309003;
            result[3] += 0.040145985401459854;
            result[4] += 0.0267639902676399;
            result[5] += 0.9051094890510949;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0.06321839080459771;
            result[1] += 0.011494252873563218;
            result[2] += 0.005747126436781609;
            result[3] += 0.14367816091954022;
            result[4] += 0.09770114942528736;
            result[5] += 0.6781609195402298;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7009803921568627;
            result[4] += 0.004901960784313725;
            result[5] += 0.29411764705882354;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.995575221238938;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004424778761061947;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.13414634146341464;
            result[1] += 0.12804878048780488;
            result[2] += 0.006097560975609756;
            result[3] += 0.042682926829268296;
            result[4] += 0.6280487804878049;
            result[5] += 0.06097560975609756;
          } else {
            result[0] += 0.540084388185654;
            result[1] += 0.020042194092827006;
            result[2] += 0.06856540084388185;
            result[3] += 0.17827004219409281;
            result[4] += 0.060126582278481014;
            result[5] += 0.13291139240506328;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9543230016313213;
            result[1] += 0;
            result[2] += 0.0032626427406199023;
            result[3] += 0;
            result[4] += 0.03915171288743882;
            result[5] += 0.0032626427406199023;
          } else {
            result[0] += 0.35;
            result[1] += 0;
            result[2] += 0.55;
            result[3] += 0.025;
            result[4] += 0.05;
            result[5] += 0.025;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10714285714285714;
            result[3] += 0.7678571428571429;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.35294117647058826;
            result[2] += 0.6470588235294118;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.25;
            result[1] += 0.4375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0;
          } else {
            result[0] += 0.06896551724137932;
            result[1] += 0.06896551724137932;
            result[2] += 0.34482758620689663;
            result[3] += 0.2758620689655173;
            result[4] += 0.03448275862068966;
            result[5] += 0.20689655172413796;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.8936170212765957;
            result[3] += 0.0851063829787234;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)108) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8726708074534162;
            result[3] += 0.11490683229813664;
            result[4] += 0;
            result[5] += 0.012422360248447204;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9026548672566371;
            result[3] += 0.09734513274336283;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005076142131979695;
            result[1] += 0;
            result[2] += 0.9898477157360406;
            result[3] += 0.005076142131979695;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.10416666666666667;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.7083333333333334;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.6382978723404256;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3617021276595745;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0033632286995515697;
            result[2] += 0;
            result[3] += 0.04820627802690583;
            result[4] += 0.04708520179372197;
            result[5] += 0.9013452914798207;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0.11731843575418995;
            result[1] += 0.0223463687150838;
            result[2] += 0.0111731843575419;
            result[3] += 0.1787709497206704;
            result[4] += 0.19553072625698323;
            result[5] += 0.4748603351955307;
          } else {
            result[0] += 0.019138755980861243;
            result[1] += 0.009569377990430622;
            result[2] += 0.009569377990430622;
            result[3] += 0.6842105263157895;
            result[4] += 0.004784688995215311;
            result[5] += 0.2727272727272727;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9934640522875817;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006535947712418301;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.13953488372093023;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7790697674418605;
            result[5] += 0.08139534883720931;
          } else {
            result[0] += 0.4166666666666667;
            result[1] += 0.041666666666666664;
            result[2] += 0.5416666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.1743119266055046;
            result[1] += 0.41284403669724773;
            result[2] += 0;
            result[3] += 0.03669724770642202;
            result[4] += 0.3669724770642202;
            result[5] += 0.009174311926605505;
          } else {
            result[0] += 0.8990169794459338;
            result[1] += 0.008936550491510277;
            result[2] += 0.00804289544235925;
            result[3] += 0.025022341376228777;
            result[4] += 0.03663985701519214;
            result[5] += 0.022341376228775692;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0.04807692307692308;
            result[1] += 0.019230769230769232;
            result[2] += 0.266025641025641;
            result[3] += 0.28205128205128205;
            result[4] += 0.08653846153846154;
            result[5] += 0.2980769230769231;
          } else {
            result[0] += 0.7457627118644068;
            result[1] += 0.01694915254237288;
            result[2] += 0.15254237288135594;
            result[3] += 0.01694915254237288;
            result[4] += 0.06779661016949153;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.02631578947368421;
            result[4] += 0;
            result[5] += 0.868421052631579;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.029411764705882353;
            result[2] += 0.17647058823529413;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.5588235294117647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22448979591836735;
            result[3] += 0.7346938775510204;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0.7307692307692307;
            result[3] += 0.21794871794871795;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.013745704467353952;
            result[1] += 0;
            result[2] += 0.8006872852233677;
            result[3] += 0.15463917525773196;
            result[4] += 0;
            result[5] += 0.030927835051546393;
          } else {
            result[0] += 0.005376344086021506;
            result[1] += 0;
            result[2] += 0.9623655913978495;
            result[3] += 0.026881720430107527;
            result[4] += 0;
            result[5] += 0.005376344086021506;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.0047169811320754715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9905660377358491;
            result[5] += 0.0047169811320754715;
          } else {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.76;
            result[5] += 0.12;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
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
            result[3] += 0.038461538461538464;
            result[4] += 0.07692307692307693;
            result[5] += 0.8846153846153846;
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
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.16;
            result[3] += 0;
            result[4] += 0.64;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8863636363636364;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.22857142857142856;
            result[5] += 0.7428571428571429;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012853470437017994;
            result[3] += 0.032133676092544985;
            result[4] += 0.02442159383033419;
            result[5] += 0.9421593830334191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25862068965517243;
            result[4] += 0.05172413793103448;
            result[5] += 0.6896551724137931;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 0.11842105263157894;
            result[1] += 0;
            result[2] += 0.039473684210526314;
            result[3] += 0.09210526315789473;
            result[4] += 0.4605263157894737;
            result[5] += 0.2894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07563025210084033;
            result[3] += 0.2773109243697479;
            result[4] += 0.06722689075630252;
            result[5] += 0.5798319327731093;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            result[0] += 0.055944055944055944;
            result[1] += 0.3776223776223776;
            result[2] += 0;
            result[3] += 0.027972027972027972;
            result[4] += 0.4755244755244755;
            result[5] += 0.06293706293706294;
          } else {
            result[0] += 0.8401390095569071;
            result[1] += 0.010425716768027804;
            result[2] += 0.005212858384013902;
            result[3] += 0.0321459600347524;
            result[4] += 0.05125977410947003;
            result[5] += 0.06081668114682885;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.009433962264150943;
            result[1] += 0.018867924528301886;
            result[2] += 0.04245283018867924;
            result[3] += 0.5283018867924528;
            result[4] += 0.014150943396226415;
            result[5] += 0.3867924528301887;
          } else {
            result[0] += 0.5882352941176471;
            result[1] += 0;
            result[2] += 0.28431372549019607;
            result[3] += 0.0392156862745098;
            result[4] += 0.0784313725490196;
            result[5] += 0.00980392156862745;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
            result[0] += 0.005780346820809248;
            result[1] += 0.03468208092485549;
            result[2] += 0.13872832369942195;
            result[3] += 0.5780346820809249;
            result[4] += 0.011560693641618497;
            result[5] += 0.23121387283236994;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6714285714285715;
            result[3] += 0.2571428571428572;
            result[4] += 0;
            result[5] += 0.07142857142857144;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0.2727272727272727;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.028066528066528068;
            result[1] += 0.0010395010395010396;
            result[2] += 0.9022869022869023;
            result[3] += 0.059251559251559255;
            result[4] += 0.006237006237006237;
            result[5] += 0.0031185031185031187;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)59.5) ) ) {
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
            result[3] += 0.12;
            result[4] += 0.76;
            result[5] += 0.12;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013392857142857142;
            result[4] += 0.017857142857142856;
            result[5] += 0.96875;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7076923076923077;
            result[1] += 0.12307692307692308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1076923076923077;
            result[5] += 0.06153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0.03112033195020747;
            result[2] += 0.03112033195020747;
            result[3] += 0.3112033195020747;
            result[4] += 0.07676348547717843;
            result[5] += 0.549792531120332;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015503875968992248;
            result[1] += 0.11627906976744186;
            result[2] += 0;
            result[3] += 0.08527131782945736;
            result[4] += 0.751937984496124;
            result[5] += 0.031007751937984496;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.25000000000000006;
            result[2] += 0;
            result[3] += 0.25000000000000006;
            result[4] += 0.33333333333333337;
            result[5] += 0.16666666666666669;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            result[0] += 0.39378238341968913;
            result[1] += 0;
            result[2] += 0.010362694300518135;
            result[3] += 0.16062176165803108;
            result[4] += 0.2694300518134715;
            result[5] += 0.16580310880829016;
          } else {
            result[0] += 0.9097605893186004;
            result[1] += 0.024861878453038673;
            result[2] += 0.0027624309392265192;
            result[3] += 0.007366482504604052;
            result[4] += 0.0432780847145488;
            result[5] += 0.011970534069981584;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
            result[0] += 0.03314917127071823;
            result[1] += 0.055248618784530384;
            result[2] += 0.08839779005524862;
            result[3] += 0.425414364640884;
            result[4] += 0.11602209944751381;
            result[5] += 0.281767955801105;
          } else {
            result[0] += 0.6444444444444445;
            result[1] += 0.011111111111111112;
            result[2] += 0.2777777777777778;
            result[3] += 0.022222222222222223;
            result[4] += 0;
            result[5] += 0.044444444444444446;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0.3076923076923077;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
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
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0.36363636363636365;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.06976744186046512;
            result[4] += 0;
            result[5] += 0.8837209302325582;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)68.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0.7222222222222222;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.03225806451612904;
            result[1] += 0.03225806451612904;
            result[2] += 0.5483870967741936;
            result[3] += 0.15053763440860218;
            result[4] += 0.021505376344086027;
            result[5] += 0.21505376344086025;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3595505617977528;
            result[3] += 0.5955056179775281;
            result[4] += 0.011235955056179775;
            result[5] += 0.033707865168539325;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.9230769230769231;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8596491228070176;
            result[3] += 0.12280701754385964;
            result[4] += 0;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0.0111731843575419;
            result[1] += 0;
            result[2] += 0.9646182495344506;
            result[3] += 0.024208566108007448;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0.0040650406504065045;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0.02032520325203252;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
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
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.7254901960784313;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0784313725490196;
            result[4] += 0.11764705882352941;
            result[5] += 0.0784313725490196;
          } else {
            result[0] += 0.002012072434607646;
            result[1] += 0.005030181086519115;
            result[2] += 0;
            result[3] += 0.06338028169014084;
            result[4] += 0.05130784708249497;
            result[5] += 0.8782696177062375;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.04477611940298507;
            result[1] += 0;
            result[2] += 0.014925373134328358;
            result[3] += 0.13432835820895522;
            result[4] += 0.07462686567164178;
            result[5] += 0.7313432835820896;
          } else {
            result[0] += 0.0049261083743842365;
            result[1] += 0;
            result[2] += 0.014778325123152709;
            result[3] += 0.6748768472906403;
            result[4] += 0.0049261083743842365;
            result[5] += 0.30049261083743845;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.7894736842105263;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21052631578947367;
            result[5] += 0;
          } else {
            result[0] += 0.00980392156862745;
            result[1] += 0.06862745098039216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9117647058823529;
            result[5] += 0.00980392156862745;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.6851851851851852;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3148148148148148;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.15625;
            result[1] += 0.03125;
            result[2] += 0.10416666666666667;
            result[3] += 0.1875;
            result[4] += 0.22916666666666666;
            result[5] += 0.2916666666666667;
          } else {
            result[0] += 0.8879235447437012;
            result[1] += 0.019113814074717638;
            result[2] += 0.006081668114682885;
            result[3] += 0.013032145960034752;
            result[4] += 0.0634231103388358;
            result[5] += 0.010425716768027803;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
            result[0] += 0.007142857142857143;
            result[1] += 0.017857142857142856;
            result[2] += 0.2571428571428571;
            result[3] += 0.3821428571428571;
            result[4] += 0.04642857142857143;
            result[5] += 0.2892857142857143;
          } else {
            result[0] += 0.6941176470588236;
            result[1] += 0.011764705882352943;
            result[2] += 0.1294117647058824;
            result[3] += 0;
            result[4] += 0.15294117647058827;
            result[5] += 0.011764705882352943;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.8958333333333334;
            result[4] += 0;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
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
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7717391304347826;
            result[3] += 0.13043478260869565;
            result[4] += 0.021739130434782608;
            result[5] += 0.07608695652173914;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7542372881355932;
            result[3] += 0.2457627118644068;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.910958904109589;
            result[3] += 0.0821917808219178;
            result[4] += 0;
            result[5] += 0.00684931506849315;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8727272727272727;
            result[3] += 0.12727272727272726;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005703422053231939;
            result[1] += 0;
            result[2] += 0.9790874524714829;
            result[3] += 0.015209125475285171;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)31.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004761904761904762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9952380952380953;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37777777777777777;
            result[5] += 0.6222222222222222;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.046511627906976744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7209302325581395;
            result[5] += 0.16279069767441862;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.022727272727272728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6590909090909091;
            result[5] += 0.06818181818181818;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0011441647597254005;
            result[1] += 0.0011441647597254005;
            result[2] += 0;
            result[3] += 0.04462242562929062;
            result[4] += 0.06178489702517163;
            result[5] += 0.8913043478260869;
          } else {
            result[0] += 0.013559322033898305;
            result[1] += 0.020338983050847456;
            result[2] += 0.020338983050847456;
            result[3] += 0.3288135593220339;
            result[4] += 0.2033898305084746;
            result[5] += 0.4135593220338983;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8421052631578947;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15789473684210525;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.10476190476190476;
            result[1] += 0.22857142857142856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6476190476190476;
            result[5] += 0.01904761904761905;
          } else {
            result[0] += 0.8973172987974098;
            result[1] += 0.012025901942645698;
            result[2] += 0;
            result[3] += 0.01757631822386679;
            result[4] += 0.05735430157261795;
            result[5] += 0.01572617946345976;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0.0035971223021582736;
            result[1] += 0.02158273381294964;
            result[2] += 0.07194244604316546;
            result[3] += 0.60431654676259;
            result[4] += 0.0035971223021582736;
            result[5] += 0.2949640287769784;
          } else {
            result[0] += 0.3435582822085889;
            result[1] += 0.030674846625766864;
            result[2] += 0.4233128834355827;
            result[3] += 0.0674846625766871;
            result[4] += 0.0674846625766871;
            result[5] += 0.0674846625766871;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.04938271604938271;
            result[5] += 0.8395061728395061;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.04545454545454546;
            result[2] += 0.15909090909090912;
            result[3] += 0.6590909090909092;
            result[4] += 0;
            result[5] += 0.13636363636363638;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.28;
            result[4] += 0;
            result[5] += 0.44;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.010101010101010102;
            result[2] += 0.8080808080808081;
            result[3] += 0.06060606060606061;
            result[4] += 0.020202020202020204;
            result[5] += 0.010101010101010102;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.8;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6810810810810811;
            result[3] += 0.2918918918918919;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9682539682539683;
            result[3] += 0.031746031746031744;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)116) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 0.001834862385321101;
            result[1] += 0;
            result[2] += 0.9706422018348624;
            result[3] += 0.027522935779816515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02092050209205021;
            result[1] += 0.008368200836820083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9372384937238494;
            result[5] += 0.03347280334728033;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.923728813559322;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07627118644067797;
            result[5] += 0;
          } else {
            result[0] += 0.12962962962962962;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.09259259259259259;
            result[4] += 0.2962962962962963;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0220125786163522;
            result[4] += 0.0220125786163522;
            result[5] += 0.9559748427672956;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
            result[0] += 0.004866180048661801;
            result[1] += 0.021897810218978103;
            result[2] += 0.009732360097323601;
            result[3] += 0.1678832116788321;
            result[4] += 0.12895377128953772;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0.07692307692307693;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.5784313725490197;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30392156862745096;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0.00398406374501992;
            result[2] += 0;
            result[3] += 0.6215139442231076;
            result[4] += 0.0199203187250996;
            result[5] += 0.3545816733067729;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.14516129032258066;
            result[1] += 0.3064516129032258;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.016129032258064516;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.003472222222222222;
            result[2] += 0.04774305555555555;
            result[3] += 0.044270833333333336;
            result[4] += 0.04600694444444445;
            result[5] += 0.025173611111111112;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.9285714285714286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.2142857142857143;
            result[2] += 0;
            result[3] += 0.3571428571428572;
            result[4] += 0.14285714285714288;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.90625;
            result[4] += 0;
            result[5] += 0.03125;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.16129032258064518;
            result[2] += 0.09677419354838711;
            result[3] += 0.03225806451612904;
            result[4] += 0.5483870967741936;
            result[5] += 0.16129032258064518;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.22807017543859648;
            result[3] += 0.07017543859649122;
            result[4] += 0.017543859649122806;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.011111111111111112;
            result[1] += 0.03333333333333333;
            result[2] += 0.25555555555555554;
            result[3] += 0.3888888888888889;
            result[4] += 0.022222222222222223;
            result[5] += 0.28888888888888886;
          } else {
            result[0] += 0.07246376811594203;
            result[1] += 0;
            result[2] += 0.7971014492753623;
            result[3] += 0.07246376811594203;
            result[4] += 0;
            result[5] += 0.057971014492753624;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.5;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)122.5) ) ) {
            result[0] += 0.01928374655647383;
            result[1] += 0;
            result[2] += 0.8071625344352618;
            result[3] += 0.15426997245179064;
            result[4] += 0.005509641873278237;
            result[5] += 0.013774104683195593;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9815195071868583;
            result[3] += 0.018480492813141684;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0.01680672268907563;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.957983193277311;
            result[5] += 0.025210084033613446;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.7368421052631579;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0106544901065449;
            result[4] += 0.0350076103500761;
            result[5] += 0.954337899543379;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08928571428571429;
            result[4] += 0.09821428571428571;
            result[5] += 0.8125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.49230769230769234;
            result[4] += 0.046153846153846156;
            result[5] += 0.46153846153846156;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.38095238095238093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04672897196261682;
            result[3] += 0.11214953271028037;
            result[4] += 0.14953271028037382;
            result[5] += 0.6915887850467289;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01327433628318584;
            result[1] += 0.004424778761061947;
            result[2] += 0.08849557522123894;
            result[3] += 0.5929203539823009;
            result[4] += 0;
            result[5] += 0.3008849557522124;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100.5) ) ) {
            result[0] += 0.013333333333333334;
            result[1] += 0.013333333333333334;
            result[2] += 0.013333333333333334;
            result[3] += 0.013333333333333334;
            result[4] += 0.9466666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0.1;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9974358974358974;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002564102564102564;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
            result[0] += 0.01639344262295082;
            result[1] += 0.36065573770491804;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.08196721311475409;
            result[5] += 0.5081967213114754;
          } else {
            result[0] += 0.8772378516624041;
            result[1] += 0.010230179028132993;
            result[2] += 0.0076726342710997444;
            result[3] += 0.015345268542199489;
            result[4] += 0.06734867860187553;
            result[5] += 0.02216538789428815;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
            result[0] += 0.011904761904761904;
            result[1] += 0;
            result[2] += 0.13690476190476192;
            result[3] += 0.5238095238095238;
            result[4] += 0.13095238095238096;
            result[5] += 0.19642857142857142;
          } else {
            result[0] += 0.7424242424242424;
            result[1] += 0;
            result[2] += 0.24242424242424243;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 0.012422360248447204;
            result[1] += 0.006211180124223602;
            result[2] += 0.043478260869565216;
            result[3] += 0.2670807453416149;
            result[4] += 0.06832298136645963;
            result[5] += 0.6024844720496895;
          } else {
            result[0] += 0.015151515151515154;
            result[1] += 0;
            result[2] += 0.5606060606060607;
            result[3] += 0.27272727272727276;
            result[4] += 0;
            result[5] += 0.15151515151515155;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5157894736842106;
            result[3] += 0.3894736842105263;
            result[4] += 0;
            result[5] += 0.09473684210526316;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009554140127388535;
            result[1] += 0;
            result[2] += 0.9087048832271762;
            result[3] += 0.07749469214437367;
            result[4] += 0;
            result[5] += 0.004246284501061571;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9954128440366973;
            result[5] += 0.0045871559633027525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.1875;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5789473684210527;
            result[5] += 0.42105263157894735;
          } else {
            result[0] += 0;
            result[1] += 0.001445086705202312;
            result[2] += 0;
            result[3] += 0.03757225433526012;
            result[4] += 0.01300578034682081;
            result[5] += 0.9479768786127167;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0.03643724696356275;
            result[1] += 0.020242914979757085;
            result[2] += 0;
            result[3] += 0.11740890688259109;
            result[4] += 0.1417004048582996;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0.04522613065326633;
            result[1] += 0.010050251256281407;
            result[2] += 0.020100502512562814;
            result[3] += 0.5276381909547738;
            result[4] += 0.03015075376884422;
            result[5] += 0.36683417085427134;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.8854166666666666;
            result[2] += 0;
            result[3] += 0.020833333333333332;
            result[4] += 0.09375;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.027777777777777776;
            result[4] += 0.8333333333333334;
            result[5] += 0.018518518518518517;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.8767812238055323;
            result[1] += 0.006705783738474434;
            result[2] += 0.0008382229673093043;
            result[3] += 0.025984911986588432;
            result[4] += 0.06370494551550712;
            result[5] += 0.025984911986588432;
          } else {
            result[0] += 0.26744186046511625;
            result[1] += 0.046511627906976744;
            result[2] += 0.12209302325581395;
            result[3] += 0.2761627906976744;
            result[4] += 0.06686046511627906;
            result[5] += 0.22093023255813954;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
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
            result[3] += 0.16666666666666666;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05405405405405406;
            result[3] += 0.9459459459459459;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404255;
            result[3] += 0.0851063829787234;
            result[4] += 0.1276595744680851;
            result[5] += 0.723404255319149;
          } else {
            result[0] += 0.04597701149425287;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.45977011494252873;
            result[4] += 0;
            result[5] += 0.3563218390804598;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.7307692307692307;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9473684210526316;
            result[3] += 0.026315789473684213;
            result[4] += 0;
            result[5] += 0.026315789473684213;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.061224489795918366;
            result[2] += 0.2857142857142857;
            result[3] += 0.3673469387755102;
            result[4] += 0.12244897959183673;
            result[5] += 0.16326530612244897;
          } else {
            result[0] += 0.03529411764705883;
            result[1] += 0;
            result[2] += 0.8176470588235295;
            result[3] += 0.1294117647058824;
            result[4] += 0.0029411764705882357;
            result[5] += 0.014705882352941178;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9600725952813067;
            result[3] += 0.039927404718693285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0.008849557522123894;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9778761061946902;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.6857142857142857;
          } else {
            result[0] += 0.7115384615384616;
            result[1] += 0.1346153846153846;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09615384615384616;
            result[5] += 0.057692307692307696;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
            result[3] += 0.026825633383010434;
            result[4] += 0.014903129657228018;
            result[5] += 0.9582712369597616;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.03103448275862069;
            result[1] += 0.0034482758620689655;
            result[2] += 0.0034482758620689655;
            result[3] += 0.15172413793103448;
            result[4] += 0.1310344827586207;
            result[5] += 0.6793103448275862;
          } else {
            result[0] += 0.025477707006369428;
            result[1] += 0;
            result[2] += 0.044585987261146494;
            result[3] += 0.6878980891719745;
            result[4] += 0;
            result[5] += 0.24203821656050956;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6209150326797386;
            result[1] += 0.006535947712418301;
            result[2] += 0.0196078431372549;
            result[3] += 0;
            result[4] += 0.3202614379084967;
            result[5] += 0.032679738562091505;
          } else {
            result[0] += 0.007633587786259542;
            result[1] += 0.061068702290076333;
            result[2] += 0.022900763358778626;
            result[3] += 0.40458015267175573;
            result[4] += 0.0648854961832061;
            result[5] += 0.4389312977099237;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.12857142857142856;
            result[1] += 0.3142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0.8164915117219078;
            result[1] += 0.016976556184316895;
            result[2] += 0.05982215036378335;
            result[3] += 0.04527081649151172;
            result[4] += 0.04850444624090541;
            result[5] += 0.012934518997574777;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.9629629629629629;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0958904109589041;
            result[3] += 0.6438356164383562;
            result[4] += 0.0273972602739726;
            result[5] += 0.2328767123287671;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0.6129032258064516;
            result[3] += 0.3548387096774194;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.03333333333333333;
            result[2] += 0.5;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.36666666666666664;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.0196078431372549;
            result[2] += 0.47058823529411764;
            result[3] += 0.19607843137254902;
            result[4] += 0;
            result[5] += 0.29411764705882354;
          } else {
            result[0] += 0.03361344537815126;
            result[1] += 0;
            result[2] += 0.7941176470588235;
            result[3] += 0.15126050420168066;
            result[4] += 0.004201680672268907;
            result[5] += 0.01680672268907563;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8862275449101796;
            result[3] += 0.11377245508982035;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004008016032064128;
            result[1] += 0;
            result[2] += 0.9859719438877755;
            result[3] += 0.01002004008016032;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
            result[0] += 0.022988505747126436;
            result[1] += 0.0028735632183908046;
            result[2] += 0;
            result[3] += 0.005747126436781609;
            result[4] += 0.9109195402298851;
            result[5] += 0.05747126436781609;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.004728132387706856;
            result[1] += 0.9929078014184397;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002364066193853428;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13636363636363635;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8636363636363636;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014802631578947368;
            result[4] += 0.019736842105263157;
            result[5] += 0.9654605263157895;
          } else {
            result[0] += 0.06926406926406926;
            result[1] += 0.004329004329004329;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.14285714285714285;
            result[5] += 0.6017316017316018;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
            result[0] += 0.6756756756756757;
            result[1] += 0.04054054054054054;
            result[2] += 0;
            result[3] += 0.17567567567567569;
            result[4] += 0.06756756756756757;
            result[5] += 0.04054054054054054;
          } else {
            result[0] += 0.019830028328611898;
            result[1] += 0;
            result[2] += 0.028328611898016998;
            result[3] += 0.43059490084985835;
            result[4] += 0.09348441926345609;
            result[5] += 0.42776203966005666;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
            result[0] += 0.4010416666666667;
            result[1] += 0.09895833333333333;
            result[2] += 0;
            result[3] += 0.09895833333333333;
            result[4] += 0.041666666666666664;
            result[5] += 0.359375;
          } else {
            result[0] += 0.8805309734513275;
            result[1] += 0.021238938053097345;
            result[2] += 0.017699115044247787;
            result[3] += 0.01592920353982301;
            result[4] += 0.05575221238938053;
            result[5] += 0.008849557522123894;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0.004975124378109453;
            result[1] += 0.01990049751243781;
            result[2] += 0.18407960199004975;
            result[3] += 0.2736318407960199;
            result[4] += 0.11442786069651742;
            result[5] += 0.40298507462686567;
          } else {
            result[0] += 0.625;
            result[1] += 0.017857142857142856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.07142857142857142;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1592920353982301;
            result[3] += 0.6902654867256637;
            result[4] += 0;
            result[5] += 0.1504424778761062;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.40714285714285714;
            result[3] += 0.4142857142857143;
            result[4] += 0;
            result[5] += 0.17857142857142858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.90625;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.923728813559322;
            result[3] += 0.06779661016949153;
            result[4] += 0;
            result[5] += 0.00847457627118644;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.16;
            result[4] += 0.04;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.7889908256880734;
            result[3] += 0.2018348623853211;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007858546168958742;
            result[1] += 0;
            result[2] += 0.9705304518664047;
            result[3] += 0.021611001964636542;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.017241379310344827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9741379310344828;
            result[5] += 0.008620689655172414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.56;
            result[5] += 0.44;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)55.5) ) ) {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.19230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0.0024125452352231603;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06031363088057901;
            result[4] += 0.04221954161640531;
            result[5] += 0.8950542822677925;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0.16145833333333334;
            result[1] += 0.020833333333333332;
            result[2] += 0.03125;
            result[3] += 0.09375;
            result[4] += 0.20833333333333334;
            result[5] += 0.484375;
          } else {
            result[0] += 0;
            result[1] += 0.021897810218978103;
            result[2] += 0.058394160583941604;
            result[3] += 0.5948905109489051;
            result[4] += 0.025547445255474453;
            result[5] += 0.29927007299270075;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72.5) ) ) {
            result[0] += 0.2687224669603524;
            result[1] += 0.14977973568281938;
            result[2] += 0.004405286343612335;
            result[3] += 0.02643171806167401;
            result[4] += 0.4581497797356828;
            result[5] += 0.09251101321585903;
          } else {
            result[0] += 0.8490740740740741;
            result[1] += 0.014814814814814815;
            result[2] += 0.011111111111111112;
            result[3] += 0.02962962962962963;
            result[4] += 0.05555555555555555;
            result[5] += 0.03981481481481482;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.05555555555555555;
            result[2] += 0.1962962962962963;
            result[3] += 0.3333333333333333;
            result[4] += 0.03333333333333333;
            result[5] += 0.34444444444444444;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.19387755102040816;
            result[3] += 0;
            result[4] += 0.09183673469387756;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0.45454545454545453;
            result[2] += 0.2727272727272727;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8823529411764706;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.13333333333333333;
            result[4] += 0.13333333333333333;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0.24242424242424243;
            result[1] += 0;
            result[2] += 0.5757575757575758;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.4298245614035088;
            result[4] += 0;
            result[5] += 0.07017543859649122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7971014492753624;
            result[3] += 0.1884057971014493;
            result[4] += 0;
            result[5] += 0.014492753623188408;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
            result[0] += 0.7894736842105263;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.026515151515151516;
            result[1] += 0;
            result[2] += 0.8863636363636364;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.003787878787878788;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9516129032258065;
            result[3] += 0.04032258064516129;
            result[4] += 0;
            result[5] += 0.008064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9973333333333333;
            result[3] += 0.0026666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)76) ) ) {
            result[0] += 0.004524886877828055;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995475113122172;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.09090909090909091;
            result[5] += 0.8636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.21428571428571427;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7878787878787878;
            result[5] += 0.21212121212121213;
          } else {
            result[0] += 0.0014265335235378032;
            result[1] += 0;
            result[2] += 0.0028530670470756064;
            result[3] += 0.02710413694721826;
            result[4] += 0.012838801711840228;
            result[5] += 0.9557774607703281;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0838150289017341;
            result[1] += 0.005780346820809248;
            result[2] += 0;
            result[3] += 0.1329479768786127;
            result[4] += 0.17052023121387283;
            result[5] += 0.6069364161849711;
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
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9342105263157895;
            result[5] += 0.013157894736842105;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22727272727272727;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
            result[0] += 0.5594405594405596;
            result[1] += 0.06993006993006995;
            result[2] += 0.006993006993006994;
            result[3] += 0.020979020979020983;
            result[4] += 0.3041958041958043;
            result[5] += 0.03846153846153847;
          } else {
            result[0] += 0.9341963322545848;
            result[1] += 0.005393743257820929;
            result[2] += 0.004314994606256743;
            result[3] += 0.014023732470334414;
            result[4] += 0.029126213592233014;
            result[5] += 0.012944983818770229;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0.020833333333333332;
            result[2] += 0.15625;
            result[3] += 0.3784722222222222;
            result[4] += 0.05555555555555555;
            result[5] += 0.375;
          } else {
            result[0] += 0.6122448979591837;
            result[1] += 0.030612244897959183;
            result[2] += 0.15306122448979592;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0.08163265306122448;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.027777777777777776;
            result[4] += 0.08333333333333333;
            result[5] += 0.8611111111111112;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
            result[0] += 0.04232804232804233;
            result[1] += 0.010582010582010583;
            result[2] += 0.20634920634920637;
            result[3] += 0.4761904761904762;
            result[4] += 0.04232804232804233;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8484848484848485;
            result[3] += 0.10606060606060606;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7767857142857143;
            result[3] += 0.20535714285714285;
            result[4] += 0;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0.0125;
            result[1] += 0;
            result[2] += 0.89375;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013157894736842105;
            result[1] += 0;
            result[2] += 0.9680451127819549;
            result[3] += 0.018796992481203006;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0053475935828877;
            result[1] += 0.0106951871657754;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.983957219251337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0.5833333333333334;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.84;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002849002849002849;
            result[3] += 0.03418803418803419;
            result[4] += 0.029914529914529916;
            result[5] += 0.9330484330484331;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8837209302325582;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.06976744186046512;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0;
            result[1] += 0.01991150442477876;
            result[2] += 0.0420353982300885;
            result[3] += 0.3407079646017699;
            result[4] += 0.084070796460177;
            result[5] += 0.5132743362831859;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)81) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.00205761316872428;
            result[1] += 0.9979423868312757;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
            result[0] += 0.35714285714285715;
            result[1] += 0.44642857142857145;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.17857142857142858;
            result[5] += 0;
          } else {
            result[0] += 0.007751937984496125;
            result[1] += 0.062015503875969;
            result[2] += 0.023255813953488375;
            result[3] += 0.062015503875969;
            result[4] += 0.7829457364341086;
            result[5] += 0.062015503875969;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8643507030603803;
            result[1] += 0.014888337468982627;
            result[2] += 0.014061207609594704;
            result[3] += 0.028122415219189408;
            result[4] += 0.06368899917287013;
            result[5] += 0.014888337468982627;
          } else {
            result[0] += 0.24568965517241378;
            result[1] += 0;
            result[2] += 0.16379310344827586;
            result[3] += 0.2543103448275862;
            result[4] += 0.06465517241379311;
            result[5] += 0.27155172413793105;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022222222222222223;
            result[3] += 0.7;
            result[4] += 0.07777777777777778;
            result[5] += 0.2;
          } else {
            result[0] += 0.005681818181818182;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.5113636363636364;
            result[4] += 0.03409090909090909;
            result[5] += 0.07386363636363637;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8478260869565217;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.021739130434782608;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.768595041322314;
            result[3] += 0.1652892561983471;
            result[4] += 0;
            result[5] += 0.06611570247933884;
          } else {
            result[0] += 0.008253094910591471;
            result[1] += 0;
            result[2] += 0.938101788170564;
            result[3] += 0.05089408528198074;
            result[4] += 0;
            result[5] += 0.002751031636863824;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.00423728813559322;
            result[2] += 0.012711864406779662;
            result[3] += 0;
            result[4] += 0.961864406779661;
            result[5] += 0.0211864406779661;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0.5769230769230769;
          } else {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.175;
          } else {
            result[0] += 0.008827238335435058;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02269861286254729;
            result[4] += 0.021437578814627996;
            result[5] += 0.9470365699873896;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.023980815347721823;
            result[1] += 0;
            result[2] += 0.04316546762589928;
            result[3] += 0.41007194244604317;
            result[4] += 0.0815347721822542;
            result[5] += 0.4412470023980815;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.10465116279069768;
            result[1] += 0.37790697674418605;
            result[2] += 0.01744186046511628;
            result[3] += 0.011627906976744186;
            result[4] += 0.4883720930232558;
            result[5] += 0;
          } else {
            result[0] += 0.8833768494342907;
            result[1] += 0.015665796344647518;
            result[2] += 0.0026109660574412533;
            result[3] += 0.020017406440382943;
            result[4] += 0.060922541340295906;
            result[5] += 0.017406440382941687;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0;
            result[2] += 0.08542713567839195;
            result[3] += 0.21105527638190955;
            result[4] += 0.05527638190954774;
            result[5] += 0.6432160804020101;
          } else {
            result[0] += 0.2018927444794953;
            result[1] += 0.041009463722397485;
            result[2] += 0.38801261829653;
            result[3] += 0.2050473186119874;
            result[4] += 0.08517350157728708;
            result[5] += 0.07886435331230285;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.07575757575757576;
            result[3] += 0.25757575757575757;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.06666666666666667;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6950354609929078;
            result[3] += 0.2553191489361702;
            result[4] += 0;
            result[5] += 0.04964539007092199;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7549019607843137;
            result[3] += 0.22549019607843138;
            result[4] += 0;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0.015037593984962405;
            result[1] += 0;
            result[2] += 0.9097744360902256;
            result[3] += 0.03007518796992481;
            result[4] += 0;
            result[5] += 0.045112781954887216;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8775510204081632;
            result[3] += 0.12244897959183673;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.980561555075594;
            result[3] += 0.017278617710583154;
            result[4] += 0;
            result[5] += 0.0021598272138228943;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.01282051282051282;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9700854700854701;
            result[5] += 0.017094017094017096;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25806451612903225;
            result[5] += 0.7419354838709677;
          } else {
            result[0] += 0.14;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.78;
            result[5] += 0.08;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            result[0] += 0.00589622641509434;
            result[1] += 0;
            result[2] += 0.0011792452830188679;
            result[3] += 0.05070754716981132;
            result[4] += 0.05306603773584906;
            result[5] += 0.8891509433962265;
          } else {
            result[0] += 0.02413793103448276;
            result[1] += 0.0034482758620689655;
            result[2] += 0.020689655172413793;
            result[3] += 0.25517241379310346;
            result[4] += 0.2413793103448276;
            result[5] += 0.45517241379310347;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.9907834101382489;
            result[2] += 0;
            result[3] += 0.009216589861751152;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0.030303030303030304;
            result[3] += 0.030303030303030304;
            result[4] += 0.8787878787878788;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
            result[0] += 0.22826086956521738;
            result[1] += 0.2717391304347826;
            result[2] += 0;
            result[3] += 0.06521739130434782;
            result[4] += 0.42391304347826086;
            result[5] += 0.010869565217391304;
          } else {
            result[0] += 0.8761814744801513;
            result[1] += 0.014177693761814745;
            result[2] += 0.022684310018903593;
            result[3] += 0.01984877126654064;
            result[4] += 0.04064272211720227;
            result[5] += 0.026465028355387523;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.009090909090909092;
            result[1] += 0.024242424242424246;
            result[2] += 0.14848484848484853;
            result[3] += 0.5272727272727273;
            result[4] += 0.012121212121212123;
            result[5] += 0.27878787878787886;
          } else {
            result[0] += 0.5956284153005464;
            result[1] += 0.01092896174863388;
            result[2] += 0.31693989071038253;
            result[3] += 0.02185792349726776;
            result[4] += 0.03825136612021858;
            result[5] += 0.01639344262295082;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.9354838709677419;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.58;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.16;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.5384615384615384;
            result[4] += 0.038461538461538464;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.7380952380952381;
            result[3] += 0.16666666666666666;
            result[4] += 0.023809523809523808;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0.0027247956403269754;
            result[1] += 0;
            result[2] += 0.8528610354223434;
            result[3] += 0.14168937329700274;
            result[4] += 0;
            result[5] += 0.0027247956403269754;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9526315789473684;
            result[3] += 0.04736842105263158;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9615384615384616;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9967845659163987;
            result[3] += 0.003215434083601286;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.6521739130434783;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2608695652173913;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0.012875536480686695;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9613733905579399;
            result[5] += 0.02575107296137339;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.85;
            result[1] += 0.025;
            result[2] += 0.075;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0.17073170731707318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2926829268292683;
            result[5] += 0.4878048780487805;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.001177856301531213;
            result[1] += 0.0035335689045936395;
            result[2] += 0.0035335689045936395;
            result[3] += 0.028268551236749116;
            result[4] += 0.03415783274440518;
            result[5] += 0.9293286219081273;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21428571428571427;
            result[4] += 0.11904761904761904;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.01838235294117647;
            result[1] += 0.007352941176470588;
            result[2] += 0.05514705882352941;
            result[3] += 0.6066176470588235;
            result[4] += 0.04044117647058824;
            result[5] += 0.27205882352941174;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.9977827050997783;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022172949002217295;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
            result[0] += 0.19708029197080293;
            result[1] += 0.021897810218978103;
            result[2] += 0.0072992700729927005;
            result[3] += 0.29927007299270075;
            result[4] += 0.13138686131386862;
            result[5] += 0.34306569343065696;
          } else {
            result[0] += 0.5904139433551199;
            result[1] += 0.0392156862745098;
            result[2] += 0.10348583877995643;
            result[3] += 0.09368191721132897;
            result[4] += 0.12418300653594772;
            result[5] += 0.049019607843137254;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.9724264705882354;
            result[1] += 0.0036764705882352945;
            result[2] += 0.01286764705882353;
            result[3] += 0;
            result[4] += 0.011029411764705885;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06;
            result[4] += 0.1;
            result[5] += 0.84;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05084745762711865;
            result[3] += 0.559322033898305;
            result[4] += 0.03389830508474576;
            result[5] += 0.3559322033898305;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5568181818181818;
            result[3] += 0.3409090909090909;
            result[4] += 0;
            result[5] += 0.10227272727272728;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
            result[0] += 0.004484304932735426;
            result[1] += 0;
            result[2] += 0.695067264573991;
            result[3] += 0.2600896860986547;
            result[4] += 0;
            result[5] += 0.04035874439461883;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)112.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8956043956043956;
            result[3] += 0.1043956043956044;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002577319587628866;
            result[1] += 0;
            result[2] += 0.9922680412371134;
            result[3] += 0.005154639175257732;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)120) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
            result[0] += 0.0024449877750611247;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02689486552567237;
            result[4] += 0.04523227383863081;
            result[5] += 0.9254278728606357;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.48148148148148145;
            result[4] += 0.1111111111111111;
            result[5] += 0.4074074074074074;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            result[0] += 0.12130177514792899;
            result[1] += 0.014792899408284023;
            result[2] += 0.0029585798816568047;
            result[3] += 0.22189349112426035;
            result[4] += 0.09171597633136094;
            result[5] += 0.5473372781065089;
          } else {
            result[0] += 0.00746268656716418;
            result[1] += 0.01492537313432836;
            result[2] += 0;
            result[3] += 0.7611940298507464;
            result[4] += 0.02985074626865672;
            result[5] += 0.18656716417910452;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.23809523809523808;
            result[5] += 0;
          } else {
            result[0] += 0.5454545454545454;
            result[1] += 0.09090909090909091;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6482861400894188;
            result[1] += 0.08643815201192251;
            result[2] += 0.0029806259314456036;
            result[3] += 0.02533532041728763;
            result[4] += 0.19821162444113263;
            result[5] += 0.038748137108792845;
          } else {
            result[0] += 0.047493403693931395;
            result[1] += 0.0316622691292876;
            result[2] += 0.19788918205804748;
            result[3] += 0.34564643799472294;
            result[4] += 0.09234828496042216;
            result[5] += 0.2849604221635884;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.8421052631578947;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15789473684210525;
            result[5] += 0;
          } else {
            result[0] += 0.9396170839469808;
            result[1] += 0;
            result[2] += 0.036818851251840944;
            result[3] += 0;
            result[4] += 0.020618556701030927;
            result[5] += 0.0029455081001472753;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008;
            result[1] += 0;
            result[2] += 0.32;
            result[3] += 0.472;
            result[4] += 0;
            result[5] += 0.2;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6590909090909091;
            result[3] += 0.3181818181818182;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0.005434782608695652;
            result[2] += 0.9184782608695652;
            result[3] += 0.07065217391304347;
            result[4] += 0;
            result[5] += 0.005434782608695652;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9808695652173913;
            result[3] += 0.019130434782608695;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0;
          } else {
            result[0] += 0.009523809523809525;
            result[1] += 0.004761904761904762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9380952380952381;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
            result[0] += 0.06153846153846154;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046153846153846156;
            result[4] += 0.49230769230769234;
            result[5] += 0.4;
          } else {
            result[0] += 0.9328358208955224;
            result[1] += 0.014925373134328358;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05223880597014925;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.014285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.0013123359580052493;
            result[2] += 0;
            result[3] += 0.04461942257217848;
            result[4] += 0.03674540682414698;
            result[5] += 0.9173228346456693;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1728395061728395;
            result[1] += 0.2716049382716049;
            result[2] += 0;
            result[3] += 0.06172839506172839;
            result[4] += 0.3950617283950617;
            result[5] += 0.09876543209876543;
          } else {
            result[0] += 0.002352941176470588;
            result[1] += 0.01647058823529412;
            result[2] += 0.02588235294117647;
            result[3] += 0.5105882352941177;
            result[4] += 0.018823529411764704;
            result[5] += 0.4258823529411765;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5853658536585366;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4146341463414634;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
            result[0] += 0.044444444444444446;
            result[1] += 0.08888888888888889;
            result[2] += 0.05555555555555555;
            result[3] += 0.15555555555555556;
            result[4] += 0.16666666666666666;
            result[5] += 0.4888888888888889;
          } else {
            result[0] += 0.8968692449355433;
            result[1] += 0.011970534069981584;
            result[2] += 0.009208103130755065;
            result[3] += 0.009208103130755065;
            result[4] += 0.06537753222836096;
            result[5] += 0.007366482504604052;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
            result[0] += 0.0391304347826087;
            result[1] += 0.05217391304347826;
            result[2] += 0.3826086956521739;
            result[3] += 0.20869565217391303;
            result[4] += 0.0782608695652174;
            result[5] += 0.2391304347826087;
          } else {
            result[0] += 0.826923076923077;
            result[1] += 0;
            result[2] += 0.07692307692307694;
            result[3] += 0;
            result[4] += 0.09615384615384617;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
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
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.9523809523809523;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.16129032258064516;
            result[1] += 0.22580645161290322;
            result[2] += 0.22580645161290322;
            result[3] += 0.0967741935483871;
            result[4] += 0.03225806451612903;
            result[5] += 0.25806451612903225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16216216216216217;
            result[3] += 0.6216216216216216;
            result[4] += 0;
            result[5] += 0.21621621621621623;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78) ) ) {
            result[0] += 0.2;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
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
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)61) ) ) {
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
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.007434944237918215;
            result[1] += 0;
            result[2] += 0.7843866171003717;
            result[3] += 0.1970260223048327;
            result[4] += 0;
            result[5] += 0.011152416356877323;
          } else {
            result[0] += 0.010309278350515464;
            result[1] += 0;
            result[2] += 0.9661266568483063;
            result[3] += 0.023564064801178203;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
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
            result[4] += 0.9791666666666666;
            result[5] += 0.020833333333333332;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.0183585313174946;
            result[2] += 0;
            result[3] += 0.0367170626349892;
            result[4] += 0.04967602591792657;
            result[5] += 0.8952483801295896;
          } else {
            result[0] += 0.009259259259259259;
            result[1] += 0;
            result[2] += 0.009259259259259259;
            result[3] += 0.5;
            result[4] += 0.027777777777777776;
            result[5] += 0.4537037037037037;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.06896551724137931;
            result[2] += 0;
            result[3] += 0.20689655172413793;
            result[4] += 0.06896551724137931;
            result[5] += 0.6551724137931034;
          } else {
            result[0] += 0;
            result[1] += 0.010309278350515464;
            result[2] += 0.010309278350515464;
            result[3] += 0.8350515463917526;
            result[4] += 0;
            result[5] += 0.14432989690721648;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.007751937984496124;
            result[1] += 0.05426356589147287;
            result[2] += 0.031007751937984496;
            result[3] += 0.031007751937984496;
            result[4] += 0.8449612403100775;
            result[5] += 0.031007751937984496;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
            result[0] += 0.2032520325203252;
            result[1] += 0.2926829268292683;
            result[2] += 0.016260162601626018;
            result[3] += 0.0975609756097561;
            result[4] += 0.3252032520325203;
            result[5] += 0.06504065040650407;
          } else {
            result[0] += 0.8769633507853405;
            result[1] += 0.005235602094240839;
            result[2] += 0.004363001745200699;
            result[3] += 0.03577661431064573;
            result[4] += 0.050610820244328114;
            result[5] += 0.027050610820244333;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.020833333333333332;
            result[2] += 0.06944444444444445;
            result[3] += 0.2569444444444444;
            result[4] += 0.034722222222222224;
            result[5] += 0.6180555555555556;
          } else {
            result[0] += 0.19672131147540983;
            result[1] += 0.00546448087431694;
            result[2] += 0.4262295081967213;
            result[3] += 0.12568306010928962;
            result[4] += 0.1092896174863388;
            result[5] += 0.1366120218579235;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0410958904109589;
            result[3] += 0.0821917808219178;
            result[4] += 0;
            result[5] += 0.8767123287671232;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.5;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18;
            result[3] += 0.74;
            result[4] += 0.04;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0.3157894736842105;
            result[2] += 0.5789473684210527;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0.06410256410256411;
            result[1] += 0;
            result[2] += 0.4615384615384616;
            result[3] += 0.35897435897435903;
            result[4] += 0.012820512820512822;
            result[5] += 0.10256410256410257;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.023622047244094495;
            result[1] += 0;
            result[2] += 0.7795275590551183;
            result[3] += 0.18372703412073493;
            result[4] += 0.002624671916010499;
            result[5] += 0.010498687664041996;
          } else {
            result[0] += 0.0036231884057971015;
            result[1] += 0;
            result[2] += 0.9601449275362319;
            result[3] += 0.03260869565217391;
            result[4] += 0;
            result[5] += 0.0036231884057971015;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.2;
            result[4] += 0;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.2702702702702703;
            result[1] += 0.2972972972972973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32432432432432434;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06387921022067364;
            result[4] += 0.016260162601626018;
            result[5] += 0.9198606271777003;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0.2621359223300971;
            result[1] += 0.06796116504854369;
            result[2] += 0;
            result[3] += 0.02912621359223301;
            result[4] += 0.1553398058252427;
            result[5] += 0.4854368932038835;
          } else {
            result[0] += 0.010810810810810811;
            result[1] += 0;
            result[2] += 0.06486486486486487;
            result[3] += 0.6594594594594595;
            result[4] += 0;
            result[5] += 0.2648648648648649;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6556776556776557;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2271062271062271;
            result[5] += 0.02197802197802198;
          } else {
            result[0] += 0.07377049180327869;
            result[1] += 0.004098360655737705;
            result[2] += 0.11885245901639344;
            result[3] += 0.2827868852459016;
            result[4] += 0.16598360655737704;
            result[5] += 0.35450819672131145;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1139240506329114;
            result[1] += 0.32911392405063294;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5316455696202532;
            result[5] += 0.025316455696202535;
          } else {
            result[0] += 0.8347031963470319;
            result[1] += 0.015525114155251141;
            result[2] += 0.05114155251141553;
            result[3] += 0.024657534246575342;
            result[4] += 0.058447488584474884;
            result[5] += 0.015525114155251141;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
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
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0.20512820512820512;
            result[3] += 0.7435897435897436;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.03389830508474576;
            result[2] += 0.6610169491525424;
            result[3] += 0.11864406779661017;
            result[4] += 0;
            result[5] += 0.1864406779661017;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5285714285714287;
            result[3] += 0.4428571428571429;
            result[4] += 0.014285714285714287;
            result[5] += 0.014285714285714287;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9172413793103448;
            result[3] += 0.08275862068965517;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.7021276595744681;
            result[3] += 0.2765957446808511;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005780346820809248;
            result[1] += 0;
            result[2] += 0.9364161849710982;
            result[3] += 0.05202312138728324;
            result[4] += 0;
            result[5] += 0.005780346820809248;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002364066193853428;
            result[1] += 0;
            result[2] += 0.9858156028368794;
            result[3] += 0.01182033096926714;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0.01646090534979424;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9176954732510288;
            result[5] += 0.06584362139917696;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.16666666666666666;
            result[2] += 0.4166666666666667;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4146341463414634;
            result[5] += 0.5365853658536586;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.00273224043715847;
            result[2] += 0;
            result[3] += 0.03961748633879782;
            result[4] += 0.031420765027322405;
            result[5] += 0.9262295081967213;
          } else {
            result[0] += 0;
            result[1] += 0.08737864077669903;
            result[2] += 0;
            result[3] += 0.2815533980582524;
            result[4] += 0.06796116504854369;
            result[5] += 0.5631067961165048;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.01639344262295082;
            result[2] += 0.02459016393442623;
            result[3] += 0.26229508196721313;
            result[4] += 0.08196721311475409;
            result[5] += 0.6147540983606558;
          } else {
            result[0] += 0.006211180124223602;
            result[1] += 0;
            result[2] += 0.012422360248447204;
            result[3] += 0.7204968944099379;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9907192575406032;
            result[2] += 0;
            result[3] += 0.004640371229698376;
            result[4] += 0.004640371229698376;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            result[0] += 0.19594594594594594;
            result[1] += 0.1891891891891892;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5878378378378378;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0.8392999204455052;
            result[1] += 0.015115354017501989;
            result[2] += 0.0007955449482895784;
            result[3] += 0.01909307875894988;
            result[4] += 0.08750994431185362;
            result[5] += 0.03818615751789976;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
            result[0] += 0.06371191135734072;
            result[1] += 0.019390581717451522;
            result[2] += 0.20498614958448755;
            result[3] += 0.3185595567867036;
            result[4] += 0.04709141274238227;
            result[5] += 0.3462603878116344;
          } else {
            result[0] += 0.788235294117647;
            result[1] += 0;
            result[2] += 0.18823529411764706;
            result[3] += 0.023529411764705882;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.052631578947368425;
            result[3] += 0.8421052631578948;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.45;
            result[4] += 0.05;
            result[5] += 0.2;
          } else {
            result[0] += 0.2380952380952381;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.026666666666666672;
            result[1] += 0;
            result[2] += 0.8933333333333334;
            result[3] += 0.06666666666666668;
            result[4] += 0;
            result[5] += 0.013333333333333336;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97.5) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
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
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5789473684210527;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004830917874396135;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0.04830917874396135;
            result[4] += 0;
            result[5] += 0.0024154589371980675;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.9047619047619048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.029535864978902957;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9578059071729959;
            result[5] += 0.012658227848101267;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.9629629629629629;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3958333333333333;
            result[5] += 0.5208333333333334;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.875;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.004790419161676647;
            result[1] += 0.0011976047904191617;
            result[2] += 0;
            result[3] += 0.03473053892215569;
            result[4] += 0.05748502994011976;
            result[5] += 0.9017964071856287;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.010101010101010104;
            result[1] += 0;
            result[2] += 0.01346801346801347;
            result[3] += 0.47811447811447816;
            result[4] += 0.006734006734006735;
            result[5] += 0.4915824915824916;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0.39869281045751637;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5359477124183006;
            result[5] += 0.026143790849673203;
          } else {
            result[0] += 0.833889816360601;
            result[1] += 0.027545909849749584;
            result[2] += 0.015859766277128547;
            result[3] += 0.025041736227045076;
            result[4] += 0.07345575959933222;
            result[5] += 0.024207011686143573;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.012;
            result[1] += 0.02;
            result[2] += 0.176;
            result[3] += 0.368;
            result[4] += 0.032;
            result[5] += 0.392;
          } else {
            result[0] += 0.6911764705882353;
            result[1] += 0;
            result[2] += 0.16176470588235295;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.029411764705882353;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0.07272727272727272;
            result[4] += 0.01818181818181818;
            result[5] += 0.8909090909090909;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.011627906976744186;
            result[2] += 0.11627906976744186;
            result[3] += 0.6627906976744186;
            result[4] += 0.023255813953488372;
            result[5] += 0.18604651162790697;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.4117647058823529;
          } else {
            result[0] += 0.06944444444444445;
            result[1] += 0;
            result[2] += 0.6805555555555556;
            result[3] += 0.2361111111111111;
            result[4] += 0.013888888888888888;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.7096774193548387;
            result[1] += 0.0967741935483871;
            result[2] += 0.1935483870967742;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007751937984496124;
            result[1] += 0;
            result[2] += 0.9258028792912514;
            result[3] += 0.05758582502768549;
            result[4] += 0.0022148394241417496;
            result[5] += 0.006644518272425249;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.005050505050505051;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9848484848484849;
            result[5] += 0.010101010101010102;
          } else {
            result[0] += 0.125;
            result[1] += 0.017857142857142856;
            result[2] += 0.017857142857142856;
            result[3] += 0.07142857142857142;
            result[4] += 0.5178571428571429;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00261437908496732;
            result[2] += 0;
            result[3] += 0.040522875816993466;
            result[4] += 0.027450980392156862;
            result[5] += 0.9294117647058824;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.11538461538461539;
            result[4] += 0.057692307692307696;
            result[5] += 0.7884615384615384;
          } else {
            result[0] += 0.09359605911330049;
            result[1] += 0.04926108374384237;
            result[2] += 0.009852216748768473;
            result[3] += 0.5517241379310345;
            result[4] += 0.04433497536945813;
            result[5] += 0.2512315270935961;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.028901734104046242;
            result[1] += 0.4797687861271676;
            result[2] += 0;
            result[3] += 0.023121387283236993;
            result[4] += 0.42196531791907516;
            result[5] += 0.046242774566473986;
          } else {
            result[0] += 0.781567489114659;
            result[1] += 0.014513788098693761;
            result[2] += 0.015965166908563137;
            result[3] += 0.021770682148040642;
            result[4] += 0.1037735849056604;
            result[5] += 0.06240928882438317;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
            result[0] += 0.017167381974248927;
            result[1] += 0.008583690987124463;
            result[2] += 0.21888412017167383;
            result[3] += 0.3905579399141631;
            result[4] += 0.017167381974248927;
            result[5] += 0.34763948497854075;
          } else {
            result[0] += 0.6301369863013698;
            result[1] += 0;
            result[2] += 0.1506849315068493;
            result[3] += 0.0410958904109589;
            result[4] += 0.1780821917808219;
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
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8636363636363636;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06349206349206349;
            result[3] += 0.07936507936507936;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0.057692307692307696;
            result[2] += 0.038461538461538464;
            result[3] += 0.7884615384615384;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.06666666666666667;
            result[2] += 0.31666666666666665;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.18333333333333332;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6811594202898551;
            result[3] += 0.2608695652173913;
            result[4] += 0;
            result[5] += 0.057971014492753624;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.925;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.019230769230769232;
            result[4] += 0.019230769230769232;
            result[5] += 0.17307692307692307;
          } else {
            result[0] += 0.004464285714285714;
            result[1] += 0;
            result[2] += 0.7723214285714286;
            result[3] += 0.20089285714285715;
            result[4] += 0;
            result[5] += 0.022321428571428572;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9253246753246753;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.003246753246753247;
          } else {
            result[0] += 0.002857142857142857;
            result[1] += 0;
            result[2] += 0.9885714285714285;
            result[3] += 0.008571428571428572;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
            result[0] += 0.015463917525773196;
            result[1] += 0.010309278350515464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9536082474226805;
            result[5] += 0.020618556701030927;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.29411764705882354;
            result[4] += 0.17647058823529413;
            result[5] += 0.4117647058823529;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8260869565217391;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.043478260869565216;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03558718861209965;
            result[4] += 0.0771055753262159;
            result[5] += 0.8873072360616845;
          } else {
            result[0] += 0.35365853658536583;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0.13414634146341464;
            result[4] += 0.1951219512195122;
            result[5] += 0.2926829268292683;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0.7714285714285715;
            result[1] += 0.02857142857142857;
            result[2] += 0.05714285714285714;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.025974025974025976;
            result[2] += 0.045454545454545456;
            result[3] += 0.5097402597402597;
            result[4] += 0.025974025974025976;
            result[5] += 0.39285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102) ) ) {
            result[0] += 0.10734463276836159;
            result[1] += 0.11299435028248589;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7740112994350283;
            result[5] += 0.005649717514124295;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.891398783666377;
            result[1] += 0.011294526498696786;
            result[2] += 0.0034752389226759338;
            result[3] += 0.016507384882710686;
            result[4] += 0.04865334491746308;
            result[5] += 0.028670721112076455;
          } else {
            result[0] += 0.23651452282157676;
            result[1] += 0.04979253112033195;
            result[2] += 0.11203319502074689;
            result[3] += 0.27800829875518673;
            result[4] += 0.12448132780082988;
            result[5] += 0.1991701244813278;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.9285714285714286;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.918918918918919;
            result[4] += 0;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0.015873015873015872;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.3492063492063492;
            result[4] += 0;
            result[5] += 0.5238095238095238;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8250000000000001;
            result[3] += 0.10000000000000002;
            result[4] += 0;
            result[5] += 0.07500000000000001;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18604651162790697;
            result[3] += 0.6744186046511628;
            result[4] += 0;
            result[5] += 0.13953488372093023;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.060317460317460325;
            result[1] += 0;
            result[2] += 0.7492063492063493;
            result[3] += 0.1650793650793651;
            result[4] += 0.0126984126984127;
            result[5] += 0.0126984126984127;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9567039106145251;
            result[3] += 0.040502793296089384;
            result[4] += 0;
            result[5] += 0.002793296089385475;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.02403846153846154;
            result[1] += 0.004807692307692308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9663461538461539;
            result[5] += 0.004807692307692308;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7058823529411765;
            result[5] += 0.29411764705882354;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.5641025641025642;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.33333333333333337;
            result[5] += 0.10256410256410257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06257110352673492;
            result[4] += 0.03185437997724687;
            result[5] += 0.9055745164960182;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.12682926829268293;
            result[1] += 0;
            result[2] += 0.014634146341463415;
            result[3] += 0.1902439024390244;
            result[4] += 0.15609756097560976;
            result[5] += 0.5121951219512195;
          } else {
            result[0] += 0.013422818791946308;
            result[1] += 0;
            result[2] += 0.026845637583892617;
            result[3] += 0.7516778523489933;
            result[4] += 0;
            result[5] += 0.2080536912751678;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.7619047619047619;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7647058823529411;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.4482758620689655;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0;
            result[4] += 0.3793103448275862;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0.0273224043715847;
            result[2] += 0.07103825136612021;
            result[3] += 0.2185792349726776;
            result[4] += 0.07103825136612021;
            result[5] += 0.6120218579234973;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.876424189307625;
            result[1] += 0.0245398773006135;
            result[2] += 0.00876424189307625;
            result[3] += 0.014899211218229624;
            result[4] += 0.05696757230499563;
            result[5] += 0.018404907975460127;
          } else {
            result[0] += 0.21779141104294478;
            result[1] += 0.027607361963190184;
            result[2] += 0.294478527607362;
            result[3] += 0.2852760736196319;
            result[4] += 0.0736196319018405;
            result[5] += 0.10122699386503067;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.9583333333333334;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.85;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6941176470588235;
            result[3] += 0.2235294117647059;
            result[4] += 0;
            result[5] += 0.08235294117647059;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
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
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4666666666666667;
          } else {
            result[0] += 0.009395973154362415;
            result[1] += 0;
            result[2] += 0.9436241610738255;
            result[3] += 0.04429530201342282;
            result[4] += 0.0013422818791946308;
            result[5] += 0.0013422818791946308;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0.009404388714733543;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9435736677115988;
            result[5] += 0.047021943573667714;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.9666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.38461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
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
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17142857142857143;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.9183098591549296;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08169014084507042;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.0037688442211055275;
            result[2] += 0.001256281407035176;
            result[3] += 0.048994974874371856;
            result[4] += 0.04020100502512563;
            result[5] += 0.9057788944723618;
          } else {
            result[0] += 0.0647921760391198;
            result[1] += 0.037897310513447434;
            result[2] += 0.061124694376528114;
            result[3] += 0.3581907090464548;
            result[4] += 0.097799511002445;
            result[5] += 0.3801955990220049;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)114.5) ) ) {
            result[0] += 0.9459459459459459;
            result[1] += 0;
            result[2] += 0.018018018018018018;
            result[3] += 0.001287001287001287;
            result[4] += 0.03474903474903475;
            result[5] += 0;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.5555555555555556;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.16363636363636364;
            result[4] += 0.05454545454545454;
            result[5] += 0.14545454545454545;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.7758620689655172;
            result[4] += 0;
            result[5] += 0.15517241379310345;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8518518518518519;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.942528735632184;
            result[3] += 0.04597701149425288;
            result[4] += 0;
            result[5] += 0.01149425287356322;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.908256880733945;
            result[3] += 0.07339449541284404;
            result[4] += 0;
            result[5] += 0.009174311926605505;
          } else {
            result[0] += 0.0017667844522968198;
            result[1] += 0;
            result[2] += 0.991166077738516;
            result[3] += 0.007067137809187279;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.007380073800738007;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.974169741697417;
            result[5] += 0.01845018450184502;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.9629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
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
          result[4] += 1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7096774193548387;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22580645161290322;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0.006952491309385863;
            result[1] += 0;
            result[2] += 0.0011587485515643105;
            result[3] += 0.03707995365005794;
            result[4] += 0.03592120509849363;
            result[5] += 0.9188876013904983;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8863636363636364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11363636363636363;
            result[5] += 0;
          } else {
            result[0] += 0.01201923076923077;
            result[1] += 0.03125;
            result[2] += 0.01201923076923077;
            result[3] += 0.47115384615384615;
            result[4] += 0.04326923076923077;
            result[5] += 0.43028846153846156;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
            result[0] += 0.8;
            result[1] += 0.037333333333333336;
            result[2] += 0.005333333333333333;
            result[3] += 0.010666666666666666;
            result[4] += 0.09866666666666667;
            result[5] += 0.048;
          } else {
            result[0] += 0.022508038585209004;
            result[1] += 0.04180064308681672;
            result[2] += 0.2604501607717042;
            result[3] += 0.3022508038585209;
            result[4] += 0.10610932475884244;
            result[5] += 0.26688102893890675;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            result[0] += 0.10526315789473684;
            result[1] += 0.38596491228070173;
            result[2] += 0.05263157894736842;
            result[3] += 0.03508771929824561;
            result[4] += 0.40350877192982454;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0.9105882352941175;
            result[1] += 0;
            result[2] += 0.030588235294117642;
            result[3] += 0.019999999999999997;
            result[4] += 0.03647058823529411;
            result[5] += 0.0023529411764705876;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.11111111111111112;
            result[2] += 0.6666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16279069767441862;
            result[3] += 0.6976744186046512;
            result[4] += 0;
            result[5] += 0.13953488372093023;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.21904761904761905;
            result[4] += 0;
            result[5] += 0.01904761904761905;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
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
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0.7391304347826086;
            result[3] += 0;
            result[4] += 0.10869565217391304;
            result[5] += 0.13043478260869565;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8617886178861789;
            result[3] += 0.13821138211382114;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0056925996204933585;
            result[1] += 0;
            result[2] += 0.969639468690702;
            result[3] += 0.024667931688804556;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.30434782608695654;
            result[5] += 0.5652173913043478;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013192612137203166;
            result[3] += 0.027704485488126648;
            result[4] += 0.00395778364116095;
            result[5] += 0.9670184696569921;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4583333333333333;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.005235602094240838;
            result[1] += 0.02617801047120419;
            result[2] += 0;
            result[3] += 0.08376963350785341;
            result[4] += 0.14659685863874344;
            result[5] += 0.7382198952879581;
          } else {
            result[0] += 0.014035087719298246;
            result[1] += 0.028070175438596492;
            result[2] += 0.04912280701754386;
            result[3] += 0.543859649122807;
            result[4] += 0.007017543859649123;
            result[5] += 0.35789473684210527;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
            result[0] += 0.15492957746478872;
            result[1] += 0.04929577464788732;
            result[2] += 0;
            result[3] += 0.035211267605633804;
            result[4] += 0.704225352112676;
            result[5] += 0.056338028169014086;
          } else {
            result[0] += 0;
            result[1] += 0.847457627118644;
            result[2] += 0;
            result[3] += 0.06779661016949153;
            result[4] += 0.06779661016949153;
            result[5] += 0.01694915254237288;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8381849315068491;
            result[1] += 0.005993150684931505;
            result[2] += 0.0034246575342465743;
            result[3] += 0.03167808219178082;
            result[4] += 0.08047945205479451;
            result[5] += 0.040239726027397255;
          } else {
            result[0] += 0.28717948717948716;
            result[1] += 0.041025641025641026;
            result[2] += 0.18461538461538463;
            result[3] += 0.23076923076923078;
            result[4] += 0.09743589743589744;
            result[5] += 0.15897435897435896;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0390625;
            result[1] += 0.03125;
            result[2] += 0.109375;
            result[3] += 0.3515625;
            result[4] += 0.09375;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3037974683544304;
            result[3] += 0.6075949367088608;
            result[4] += 0;
            result[5] += 0.08860759493670886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7551020408163265;
            result[3] += 0.12244897959183673;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.03571428571428572;
            result[1] += 0;
            result[2] += 0.3928571428571429;
            result[3] += 0.46428571428571436;
            result[4] += 0;
            result[5] += 0.10714285714285715;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0.7368421052631579;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
            result[0] += 0.5909090909090909;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013303769401330377;
            result[1] += 0;
            result[2] += 0.9279379157427938;
            result[3] += 0.05543237250554324;
            result[4] += 0;
            result[5] += 0.0033259423503325942;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011869436201780416;
            result[1] += 0.002967359050445104;
            result[2] += 0.008902077151335312;
            result[3] += 0;
            result[4] += 0.9406528189910979;
            result[5] += 0.03560830860534125;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.35294117647058826;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.6071428571428571;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002751031636863824;
            result[3] += 0.04951856946354883;
            result[4] += 0.002751031636863824;
            result[5] += 0.9449793672627235;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8703703703703705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11111111111111112;
            result[5] += 0.01851851851851852;
          } else {
            result[0] += 0;
            result[1] += 0.047244094488188976;
            result[2] += 0.007874015748031496;
            result[3] += 0.3333333333333333;
            result[4] += 0.06036745406824147;
            result[5] += 0.5511811023622047;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0.014084507042253521;
            result[1] += 0.014084507042253521;
            result[2] += 0.028169014084507043;
            result[3] += 0.08450704225352113;
            result[4] += 0.08450704225352113;
            result[5] += 0.7746478873239436;
          } else {
            result[0] += 0.8311475409836065;
            result[1] += 0.02622950819672131;
            result[2] += 0.003278688524590164;
            result[3] += 0.03442622950819672;
            result[4] += 0.09016393442622951;
            result[5] += 0.014754098360655738;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
            result[0] += 0.03067484662576687;
            result[1] += 0.015337423312883436;
            result[2] += 0.20552147239263804;
            result[3] += 0.34049079754601225;
            result[4] += 0.05521472392638037;
            result[5] += 0.35276073619631904;
          } else {
            result[0] += 0.6470588235294118;
            result[1] += 0;
            result[2] += 0.24705882352941178;
            result[3] += 0.047058823529411764;
            result[4] += 0.011764705882352941;
            result[5] += 0.047058823529411764;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.7681159420289855;
            result[4] += 0;
            result[5] += 0.10144927536231885;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.578125;
            result[3] += 0.390625;
            result[4] += 0;
            result[5] += 0.03125;
          } else {
            result[0] += 0.015384615384615385;
            result[1] += 0;
            result[2] += 0.8307692307692308;
            result[3] += 0.13846153846153847;
            result[4] += 0.015384615384615385;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)106) ) ) {
            result[0] += 0.0012531328320802004;
            result[1] += 0;
            result[2] += 0.9448621553884712;
            result[3] += 0.05012531328320802;
            result[4] += 0;
            result[5] += 0.0037593984962406013;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.9736842105263158;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.1;
          } else {
            result[0] += 0.017391304347826087;
            result[1] += 0.013043478260869565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9173913043478261;
            result[5] += 0.05217391304347826;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.9919354838709677;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008064516129032258;
            result[5] += 0;
          } else {
            result[0] += 0.20270270270270271;
            result[1] += 0.013513513513513514;
            result[2] += 0;
            result[3] += 0.013513513513513514;
            result[4] += 0.4189189189189189;
            result[5] += 0.35135135135135137;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8541666666666666;
            result[5] += 0.14583333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0.3125;
            result[4] += 0.3125;
            result[5] += 0.1875;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012224938875305623;
            result[3] += 0.044009779951100246;
            result[4] += 0.05378973105134474;
            result[5] += 0.9009779951100244;
          } else {
            result[0] += 0.018292682926829267;
            result[1] += 0;
            result[2] += 0.003048780487804878;
            result[3] += 0.32621951219512196;
            result[4] += 0.08841463414634146;
            result[5] += 0.5640243902439024;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)43.5) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.9928400954653938;
            result[2] += 0;
            result[3] += 0.007159904534606206;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3125;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.10236220472440945;
            result[1] += 0.4566929133858268;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4330708661417323;
            result[5] += 0.007874015748031496;
          } else {
            result[0] += 0.8917322834645669;
            result[1] += 0.007874015748031496;
            result[2] += 0;
            result[3] += 0.03740157480314961;
            result[4] += 0.03641732283464567;
            result[5] += 0.0265748031496063;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.012345679012345678;
            result[1] += 0.00411522633744856;
            result[2] += 0.09053497942386832;
            result[3] += 0.6008230452674898;
            result[4] += 0.00411522633744856;
            result[5] += 0.2880658436213992;
          } else {
            result[0] += 0.33482142857142855;
            result[1] += 0;
            result[2] += 0.44642857142857145;
            result[3] += 0.11607142857142858;
            result[4] += 0.03125;
            result[5] += 0.07142857142857142;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9565217391304348;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.08333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0.25;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8846153846153846;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.85;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.06756756756756757;
            result[1] += 0;
            result[2] += 0.8243243243243243;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35000000000000003;
            result[3] += 0.5750000000000001;
            result[4] += 0;
            result[5] += 0.07500000000000001;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0;
            result[2] += 0.8421052631578947;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.9310344827586208;
            result[3] += 0.03448275862068966;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.839041095890411;
            result[3] += 0.16095890410958905;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9807321772639692;
            result[3] += 0.019267822736030827;
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
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9846938775510204;
            result[5] += 0.015306122448979591;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
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
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7307692307692307;
            result[5] += 0.2692307692307692;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018439716312056736;
            result[4] += 0.0070921985815602835;
            result[5] += 0.9744680851063829;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.13664596273291926;
            result[1] += 0.059006211180124224;
            result[2] += 0;
            result[3] += 0.13354037267080746;
            result[4] += 0.11180124223602485;
            result[5] += 0.5590062111801242;
          } else {
            result[0] += 0;
            result[1] += 0.029411764705882353;
            result[2] += 0.0058823529411764705;
            result[3] += 0.7235294117647059;
            result[4] += 0;
            result[5] += 0.2411764705882353;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9772727272727273;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.004597701149425287;
            result[1] += 0.9862068965517241;
            result[2] += 0.0022988505747126436;
            result[3] += 0;
            result[4] += 0.006896551724137931;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8554112554112555;
            result[1] += 0.015584415584415586;
            result[2] += 0;
            result[3] += 0.009523809523809526;
            result[4] += 0.10476190476190478;
            result[5] += 0.014718614718614721;
          } else {
            result[0] += 0.3422459893048128;
            result[1] += 0.06951871657754011;
            result[2] += 0.10160427807486631;
            result[3] += 0.18716577540106952;
            result[4] += 0.09090909090909091;
            result[5] += 0.20855614973262032;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
            result[0] += 0.04092071611253197;
            result[1] += 0;
            result[2] += 0.2966751918158568;
            result[3] += 0.3452685421994885;
            result[4] += 0.061381074168797956;
            result[5] += 0.2557544757033248;
          } else {
            result[0] += 0.7375;
            result[1] += 0;
            result[2] += 0.1375;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
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
            result[3] += 0.8076923076923077;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.058823529411764705;
            result[4] += 0.17647058823529413;
            result[5] += 0.6470588235294118;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.1111111111111111;
            result[4] += 0.1111111111111111;
            result[5] += 0.2222222222222222;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)119) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7016129032258065;
            result[3] += 0.20967741935483872;
            result[4] += 0;
            result[5] += 0.08870967741935484;
          } else {
            result[0] += 0;
            result[1] += 0.0024937655860349127;
            result[2] += 0.9438902743142145;
            result[3] += 0.05361596009975062;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.951417004048583;
            result[5] += 0.048582995951417005;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0.046875;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.015625;
            result[4] += 0.65625;
            result[5] += 0.25;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06190476190476191;
            result[4] += 0.02738095238095238;
            result[5] += 0.8857142857142857;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.46236559139784944;
            result[1] += 0.08602150537634409;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3655913978494624;
            result[5] += 0.08602150537634409;
          } else {
            result[0] += 0.01881720430107527;
            result[1] += 0.013440860215053764;
            result[2] += 0.04838709677419355;
            result[3] += 0.46236559139784944;
            result[4] += 0.03763440860215054;
            result[5] += 0.41935483870967744;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9956709956709957;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004329004329004329;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
            result[0] += 0.5791788856304986;
            result[1] += 0.045454545454545456;
            result[2] += 0.010263929618768328;
            result[3] += 0.0718475073313783;
            result[4] += 0.17888563049853373;
            result[5] += 0.11436950146627566;
          } else {
            result[0] += 0.9758620689655172;
            result[1] += 0;
            result[2] += 0.0034482758620689655;
            result[3] += 0;
            result[4] += 0.020689655172413793;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.012345679012345678;
            result[1] += 0.05761316872427984;
            result[2] += 0.2551440329218107;
            result[3] += 0.3374485596707819;
            result[4] += 0.053497942386831275;
            result[5] += 0.2839506172839506;
          } else {
            result[0] += 0.7659574468085106;
            result[1] += 0.02127659574468085;
            result[2] += 0.14893617021276595;
            result[3] += 0;
            result[4] += 0.06382978723404255;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0.6470588235294118;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0.07894736842105263;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.6896551724137931;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006211180124223603;
            result[1] += 0;
            result[2] += 0.8012422360248448;
            result[3] += 0.1614906832298137;
            result[4] += 0;
            result[5] += 0.031055900621118016;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98) ) ) {
            result[0] += 0.004166666666666667;
            result[1] += 0;
            result[2] += 0.8958333333333334;
            result[3] += 0.0875;
            result[4] += 0;
            result[5] += 0.0125;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.0018315018315018315;
            result[1] += 0;
            result[2] += 0.9871794871794872;
            result[3] += 0.01098901098901099;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  
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
