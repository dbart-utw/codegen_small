
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.008368200836820083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9832635983263598;
            result[5] += 0.008368200836820083;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8157894736842105;
            result[5] += 0.18421052631578946;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9600000000000001;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013333333333333336;
            result[5] += 0.026666666666666672;
          } else {
            result[0] += 0.12195121951219512;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0.07317073170731707;
            result[4] += 0.4634146341463415;
            result[5] += 0.3170731707317073;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.08333333333333334;
            result[1] += 0;
            result[2] += 0.05555555555555556;
            result[3] += 0;
            result[4] += 0.638888888888889;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0.001984126984126984;
            result[1] += 0;
            result[2] += 0.003968253968253968;
            result[3] += 0.08035714285714286;
            result[4] += 0.05257936507936508;
            result[5] += 0.8611111111111112;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
            result[0] += 0.0625;
            result[1] += 0.8958333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.12;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.88;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.08;
            result[2] += 0.02;
            result[3] += 0.33;
            result[4] += 0.07;
            result[5] += 0.45;
          } else {
            result[0] += 0.8981981981981982;
            result[1] += 0.014414414414414415;
            result[2] += 0.011711711711711712;
            result[3] += 0.021621621621621623;
            result[4] += 0.032432432432432434;
            result[5] += 0.021621621621621623;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.015706806282722512;
            result[1] += 0.010471204188481676;
            result[2] += 0.05235602094240838;
            result[3] += 0.5;
            result[4] += 0.04450261780104712;
            result[5] += 0.3769633507853403;
          } else {
            result[0] += 0.35964912280701755;
            result[1] += 0.008771929824561403;
            result[2] += 0.37719298245614036;
            result[3] += 0.12280701754385964;
            result[4] += 0.07894736842105263;
            result[5] += 0.05263157894736842;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023809523809523808;
            result[3] += 0.9047619047619048;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.7368421052631579;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.3181818181818182;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.4090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)120) ) ) {
            result[0] += 0.006097560975609756;
            result[1] += 0;
            result[2] += 0.8353658536585366;
            result[3] += 0.12804878048780488;
            result[4] += 0;
            result[5] += 0.03048780487804878;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.873015873015873;
            result[3] += 0.12698412698412698;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9901380670611439;
            result[3] += 0.009861932938856016;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004608294930875576;
            result[3] += 0;
            result[4] += 0.967741935483871;
            result[5] += 0.027649769585253458;
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
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32857142857142857;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0.4838709677419355;
            result[1] += 0.2903225806451613;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1935483870967742;
            result[5] += 0.03225806451612903;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.00865051903114187;
            result[4] += 0.015570934256055362;
            result[5] += 0.9757785467128027;
          } else {
            result[0] += 0;
            result[1] += 0.028;
            result[2] += 0.008;
            result[3] += 0.148;
            result[4] += 0.08;
            result[5] += 0.736;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14634146341463414;
            result[4] += 0.08130081300813008;
            result[5] += 0.7642276422764228;
          } else {
            result[0] += 0;
            result[1] += 0.04812834224598931;
            result[2] += 0.032085561497326213;
            result[3] += 0.6898395721925135;
            result[4] += 0.016042780748663107;
            result[5] += 0.21390374331550804;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0.009009009009009009;
            result[1] += 0.9819819819819819;
            result[2] += 0.0022522522522522522;
            result[3] += 0;
            result[4] += 0.006756756756756757;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.03669724770642202;
            result[2] += 0;
            result[3] += 0.11926605504587157;
            result[4] += 0.8256880733944955;
            result[5] += 0.01834862385321101;
          } else {
            result[0] += 0.014084507042253523;
            result[1] += 0.8450704225352114;
            result[2] += 0;
            result[3] += 0.028169014084507046;
            result[4] += 0.11267605633802819;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8691666666666666;
            result[1] += 0;
            result[2] += 0.0025;
            result[3] += 0.02;
            result[4] += 0.08666666666666667;
            result[5] += 0.021666666666666667;
          } else {
            result[0] += 0.1461864406779661;
            result[1] += 0.012711864406779662;
            result[2] += 0.21610169491525424;
            result[3] += 0.2754237288135593;
            result[4] += 0.0847457627118644;
            result[5] += 0.2648305084745763;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0.8285714285714286;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0.45;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285715;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.28571428571428575;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47474747474747475;
            result[3] += 0.40404040404040403;
            result[4] += 0.020202020202020204;
            result[5] += 0.10101010101010101;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9130434782608696;
            result[3] += 0.04347826086956522;
            result[4] += 0;
            result[5] += 0.04347826086956522;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.855;
            result[3] += 0.105;
            result[4] += 0;
            result[5] += 0.02;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.001697792869269949;
            result[1] += 0;
            result[2] += 0.9745331069609507;
            result[3] += 0.023769100169779286;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9858490566037735;
            result[5] += 0.014150943396226415;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)80.5) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)66.5) ) ) {
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
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011655011655011655;
            result[3] += 0.05827505827505827;
            result[4] += 0.03496503496503497;
            result[5] += 0.9055944055944056;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.6470588235294118;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.23529411764705882;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015625;
            result[3] += 0.1015625;
            result[4] += 0.1484375;
            result[5] += 0.734375;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0.031413612565445025;
            result[1] += 0;
            result[2] += 0.015706806282722512;
            result[3] += 0.6492146596858639;
            result[4] += 0.031413612565445025;
            result[5] += 0.27225130890052357;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0021276595744680856;
            result[1] += 0.9872340425531916;
            result[2] += 0.0021276595744680856;
            result[3] += 0;
            result[4] += 0.008510638297872342;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.16996047430830039;
            result[1] += 0.25296442687747034;
            result[2] += 0;
            result[3] += 0.003952569169960474;
            result[4] += 0.5731225296442688;
            result[5] += 0;
          } else {
            result[0] += 0.933534743202417;
            result[1] += 0.007049345417925479;
            result[2] += 0;
            result[3] += 0.015105740181268885;
            result[4] += 0.034239677744209475;
            result[5] += 0.010070493454179257;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
            result[0] += 0.04225352112676056;
            result[1] += 0.009389671361502348;
            result[2] += 0.1267605633802817;
            result[3] += 0.36619718309859156;
            result[4] += 0.03755868544600939;
            result[5] += 0.41784037558685444;
          } else {
            result[0] += 0.6301369863013699;
            result[1] += 0;
            result[2] += 0.05479452054794521;
            result[3] += 0;
            result[4] += 0.23287671232876714;
            result[5] += 0.08219178082191782;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)111.5) ) ) {
            result[0] += 0.05701754385964912;
            result[1] += 0;
            result[2] += 0.2543859649122807;
            result[3] += 0.39473684210526316;
            result[4] += 0.05263157894736842;
            result[5] += 0.2412280701754386;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.9166666666666666;
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
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.17857142857142858;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.012562814070351761;
            result[1] += 0;
            result[2] += 0.9522613065326634;
            result[3] += 0.03266331658291458;
            result[4] += 0;
            result[5] += 0.0025125628140703522;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)125.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0.8235294117647058;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0.045454545454545456;
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88) ) ) {
            result[0] += 0.06382978723404255;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0425531914893617;
            result[4] += 0.5319148936170213;
            result[5] += 0.3617021276595745;
          } else {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015804597701149427;
            result[4] += 0.008620689655172414;
            result[5] += 0.9755747126436781;
          } else {
            result[0] += 0.053811659192825115;
            result[1] += 0.008968609865470852;
            result[2] += 0.004484304932735426;
            result[3] += 0.23318385650224216;
            result[4] += 0.06278026905829596;
            result[5] += 0.6367713004484304;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
            result[4] += 0.7083333333333334;
            result[5] += 0.2916666666666667;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025;
            result[3] += 0.075;
            result[4] += 0.0375;
            result[5] += 0.8625;
          } else {
            result[0] += 0.018450184501845022;
            result[1] += 0.03321033210332104;
            result[2] += 0.018450184501845022;
            result[3] += 0.5940959409594097;
            result[4] += 0.018450184501845022;
            result[5] += 0.31734317343173435;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
            result[0] += 0.0896551724137931;
            result[1] += 0.05517241379310345;
            result[2] += 0;
            result[3] += 0.041379310344827586;
            result[4] += 0.7793103448275862;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.0847457627118644;
            result[1] += 0.4067796610169492;
            result[2] += 0.11864406779661017;
            result[3] += 0;
            result[4] += 0.3050847457627119;
            result[5] += 0.0847457627118644;
          } else {
            result[0] += 0.8745874587458746;
            result[1] += 0.006600660066006601;
            result[2] += 0.010726072607260726;
            result[3] += 0.040429042904290426;
            result[4] += 0.04372937293729373;
            result[5] += 0.02392739273927393;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0.011049723756906077;
            result[1] += 0.016574585635359115;
            result[2] += 0;
            result[3] += 0.3812154696132597;
            result[4] += 0.13259668508287292;
            result[5] += 0.4585635359116022;
          } else {
            result[0] += 0.032467532467532464;
            result[1] += 0.01948051948051948;
            result[2] += 0.35714285714285715;
            result[3] += 0.42857142857142855;
            result[4] += 0.01948051948051948;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)117.5) ) ) {
            result[0] += 0.03496503496503497;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.16083916083916083;
            result[4] += 0;
            result[5] += 0.03496503496503497;
          } else {
            result[0] += 0.5833333333333334;
            result[1] += 0;
            result[2] += 0.22916666666666666;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.02512562814070352;
            result[1] += 0;
            result[2] += 0.6683417085427136;
            result[3] += 0.23618090452261306;
            result[4] += 0.005025125628140704;
            result[5] += 0.06532663316582915;
          } else {
            result[0] += 0.010309278350515465;
            result[1] += 0;
            result[2] += 0.9072164948453609;
            result[3] += 0.04123711340206186;
            result[4] += 0;
            result[5] += 0.04123711340206186;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8048780487804879;
            result[3] += 0.14634146341463414;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9903288201160542;
            result[3] += 0.009671179883945842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.0053475935828877;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.983957219251337;
            result[5] += 0.0106951871657754;
          } else {
            result[0] += 0.08333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02777777777777778;
            result[4] += 0.7222222222222223;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.761904761904762;
            result[2] += 0;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.6271186440677966;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3559322033898305;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0;
            result[1] += 0.0034403669724770644;
            result[2] += 0.0011467889908256881;
            result[3] += 0.03555045871559633;
            result[4] += 0.058486238532110095;
            result[5] += 0.9013761467889908;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.24761904761904763;
            result[4] += 0;
            result[5] += 0.7047619047619048;
          } else {
            result[0] += 0.03067484662576687;
            result[1] += 0;
            result[2] += 0.03680981595092025;
            result[3] += 0.6380368098159509;
            result[4] += 0.012269938650306749;
            result[5] += 0.2822085889570552;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 0.8400000000000001;
            result[2] += 0;
            result[3] += 0.08000000000000002;
            result[4] += 0.08000000000000002;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.05357142857142857;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.8392857142857143;
            result[5] += 0.026785714285714284;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.84;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
            result[0] += 0.03076923076923077;
            result[1] += 0;
            result[2] += 0.03076923076923077;
            result[3] += 0.26153846153846155;
            result[4] += 0.15384615384615385;
            result[5] += 0.5230769230769231;
          } else {
            result[0] += 0.4975124378109452;
            result[1] += 0.051409618573797666;
            result[2] += 0.024875621890547258;
            result[3] += 0.11774461028192369;
            result[4] += 0.13266998341625205;
            result[5] += 0.17578772802653397;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.4473684210526316;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.9522673031026254;
            result[1] += 0;
            result[2] += 0.010739856801909309;
            result[3] += 0.005966587112171838;
            result[4] += 0.027446300715990458;
            result[5] += 0.0035799522673031032;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.020618556701030927;
            result[3] += 0.8247422680412371;
            result[4] += 0;
            result[5] += 0.15463917525773196;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5217391304347826;
            result[4] += 0;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.2222222222222222;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.803921568627451;
            result[3] += 0.1568627450980392;
            result[4] += 0;
            result[5] += 0.0392156862745098;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
            result[0] += 0.015625;
            result[1] += 0.00390625;
            result[2] += 0.76953125;
            result[3] += 0.171875;
            result[4] += 0;
            result[5] += 0.0390625;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0029629629629629632;
            result[1] += 0;
            result[2] += 0.9703703703703704;
            result[3] += 0.023703703703703706;
            result[4] += 0;
            result[5] += 0.0029629629629629632;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004405286343612335;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.973568281938326;
            result[5] += 0.022026431718061675;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.030303030303030304;
            result[3] += 0.09090909090909091;
            result[4] += 0.5454545454545454;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
            result[0] += 0.8181818181818182;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363635;
            result[5] += 0;
          } else {
            result[0] += 0.002157497303128371;
            result[1] += 0.02696871628910464;
            result[2] += 0;
            result[3] += 0.0593311758360302;
            result[4] += 0.04422869471413161;
            result[5] += 0.8673139158576052;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.023391812865497075;
            result[3] += 0.6783625730994152;
            result[4] += 0;
            result[5] += 0.2807017543859649;
          } else {
            result[0] += 0.046153846153846156;
            result[1] += 0;
            result[2] += 0.046153846153846156;
            result[3] += 0.26153846153846155;
            result[4] += 0.015384615384615385;
            result[5] += 0.6307692307692307;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41.5) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.5384615384615384;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9393939393939394;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.9974093264248705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0025906735751295338;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.019417475728155338;
            result[1] += 0.32038834951456313;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6601941747572816;
            result[5] += 0;
          } else {
            result[0] += 0.8716623600344532;
            result[1] += 0.007751937984496125;
            result[2] += 0.006890611541774333;
            result[3] += 0.02670111972437554;
            result[4] += 0.07407407407407408;
            result[5] += 0.012919896640826874;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
            result[0] += 0.024793388429752067;
            result[1] += 0.06198347107438017;
            result[2] += 0.05785123966942149;
            result[3] += 0.2768595041322314;
            result[4] += 0.1652892561983471;
            result[5] += 0.4132231404958678;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0;
            result[2] += 0.10144927536231886;
            result[3] += 0.05797101449275363;
            result[4] += 0.15942028985507248;
            result[5] += 0.014492753623188408;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8400000000000001;
            result[3] += 0.08000000000000002;
            result[4] += 0;
            result[5] += 0.08000000000000002;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.035398230088495575;
            result[3] += 0.7433628318584071;
            result[4] += 0;
            result[5] += 0.22123893805309736;
          } else {
            result[0] += 0.027932960893854747;
            result[1] += 0;
            result[2] += 0.45251396648044695;
            result[3] += 0.46368715083798884;
            result[4] += 0.00558659217877095;
            result[5] += 0.05027932960893855;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.98;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428572;
            result[3] += 0.13636363636363638;
            result[4] += 0;
            result[5] += 0.006493506493506495;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001451378809869376;
            result[1] += 0;
            result[2] += 0.9608127721335269;
            result[3] += 0.030478955007256895;
            result[4] += 0;
            result[5] += 0.00725689404934688;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51.5) ) ) {
            result[0] += 0.21052631578947367;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6842105263157895;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9841269841269841;
            result[5] += 0.015873015873015872;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9583333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.75;
            result[5] += 0.21428571428571427;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.6206896551724138;
            result[5] += 0.3448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.044543429844097995;
            result[4] += 0.022271714922048998;
            result[5] += 0.933184855233853;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
            result[0] += 0.3055555555555556;
            result[1] += 0.5277777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.023622047244094488;
            result[1] += 0.007874015748031496;
            result[2] += 0.05511811023622047;
            result[3] += 0.2755905511811024;
            result[4] += 0.023622047244094488;
            result[5] += 0.6141732283464567;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0.12698412698412698;
            result[1] += 0;
            result[2] += 0.15873015873015872;
            result[3] += 0.2698412698412698;
            result[4] += 0.12698412698412698;
            result[5] += 0.31746031746031744;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023076923076923078;
            result[3] += 0.7769230769230769;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975961538461539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002403846153846154;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0.030927835051546393;
            result[1] += 0.07216494845360824;
            result[2] += 0;
            result[3] += 0.020618556701030927;
            result[4] += 0.8762886597938144;
            result[5] += 0;
          } else {
            result[0] += 0.05660377358490566;
            result[1] += 0.8867924528301887;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05660377358490566;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8603256212510711;
            result[1] += 0.017994858611825194;
            result[2] += 0.002570694087403599;
            result[3] += 0.02056555269922879;
            result[4] += 0.07197943444730077;
            result[5] += 0.026563838903170524;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.008875739644970414;
            result[2] += 0.17455621301775148;
            result[3] += 0.22485207100591717;
            result[4] += 0.13313609467455623;
            result[5] += 0.3047337278106509;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0.21428571428571427;
            result[4] += 0.10714285714285714;
            result[5] += 0.6071428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07547169811320754;
            result[3] += 0.7358490566037735;
            result[4] += 0;
            result[5] += 0.18867924528301888;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
            result[0] += 0.05454545454545454;
            result[1] += 0;
            result[2] += 0.3090909090909091;
            result[3] += 0.5818181818181818;
            result[4] += 0.01818181818181818;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7244094488188977;
            result[3] += 0.2283464566929134;
            result[4] += 0;
            result[5] += 0.047244094488188976;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84.5) ) ) {
            result[0] += 0.125;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7543859649122807;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0;
            result[4] += 0.03508771929824561;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.0012077294685990338;
            result[2] += 0.9444444444444444;
            result[3] += 0.049516908212560384;
            result[4] += 0;
            result[5] += 0.004830917874396135;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
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
            result[2] += 0;
            result[3] += 0.08064516129032258;
            result[4] += 0.6774193548387096;
            result[5] += 0.24193548387096775;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.8709677419354839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12903225806451613;
            result[5] += 0;
          } else {
            result[0] += 0.10227272727272728;
            result[1] += 0.011363636363636364;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.5113636363636364;
            result[5] += 0.32954545454545453;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.001026694045174538;
            result[1] += 0.002053388090349076;
            result[2] += 0;
            result[3] += 0.059548254620123205;
            result[4] += 0.07084188911704312;
            result[5] += 0.86652977412731;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0182648401826484;
            result[3] += 0.5205479452054794;
            result[4] += 0.0182648401826484;
            result[5] += 0.4429223744292237;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
            result[0] += 0.05128205128205128;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1794871794871795;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.03333333333333333;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.5652173913043478;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.21739130434782608;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976019184652278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002398081534772182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            result[0] += 0.05813953488372093;
            result[1] += 0.43023255813953487;
            result[2] += 0.023255813953488372;
            result[3] += 0.03488372093023256;
            result[4] += 0.43023255813953487;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.9274661508704062;
            result[1] += 0.0019342359767891683;
            result[2] += 0.0038684719535783366;
            result[3] += 0.0183752417794971;
            result[4] += 0.041586073500967116;
            result[5] += 0.006769825918762089;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0.06912442396313365;
            result[1] += 0.027649769585253458;
            result[2] += 0.24423963133640553;
            result[3] += 0.3317972350230415;
            result[4] += 0.09216589861751152;
            result[5] += 0.2350230414746544;
          } else {
            result[0] += 0.7857142857142857;
            result[1] += 0;
            result[2] += 0.12244897959183673;
            result[3] += 0;
            result[4] += 0.09183673469387756;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17857142857142858;
            result[4] += 0.05357142857142857;
            result[5] += 0.7678571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.6923076923076923;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.017857142857142856;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.21428571428571427;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0.07142857142857142;
            result[5] += 0.35714285714285715;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2375;
            result[3] += 0.575;
            result[4] += 0.0125;
            result[5] += 0.175;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6164383561643836;
            result[3] += 0.3287671232876712;
            result[4] += 0;
            result[5] += 0.0547945205479452;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
            result[0] += 0.06172839506172839;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0.07407407407407407;
            result[4] += 0.037037037037037035;
            result[5] += 0.012345679012345678;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
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
            result[4] += 0.08333333333333333;
            result[5] += 0.9166666666666666;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8214285714285714;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9512195121951219;
            result[3] += 0.04878048780487805;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6833333333333333;
            result[3] += 0.2833333333333333;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9058823529411765;
            result[3] += 0.09411764705882353;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9914529914529915;
            result[3] += 0.00641025641025641;
            result[4] += 0;
            result[5] += 0.002136752136752137;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.01680672268907563;
            result[1] += 0.01680672268907563;
            result[2] += 0.008403361344537815;
            result[3] += 0;
            result[4] += 0.9369747899159664;
            result[5] += 0.02100840336134454;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023448275862068966;
            result[4] += 0.04827586206896552;
            result[5] += 0.9282758620689655;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0.008241758241758242;
            result[2] += 0;
            result[3] += 0.2032967032967033;
            result[4] += 0.1813186813186813;
            result[5] += 0.5686813186813187;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.25806451612903225;
            result[4] += 0.06451612903225806;
            result[5] += 0.6451612903225806;
          } else {
            result[0] += 0.015873015873015872;
            result[1] += 0.021164021164021163;
            result[2] += 0;
            result[3] += 0.6878306878306878;
            result[4] += 0.021164021164021163;
            result[5] += 0.25396825396825395;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            result[0] += 0.136986301369863;
            result[1] += 0.11643835616438356;
            result[2] += 0;
            result[3] += 0.03424657534246575;
            result[4] += 0.6232876712328768;
            result[5] += 0.08904109589041095;
          } else {
            result[0] += 0.8765432098765432;
            result[1] += 0.01899335232668566;
            result[2] += 0.005698005698005698;
            result[3] += 0.022792022792022793;
            result[4] += 0.05128205128205128;
            result[5] += 0.024691358024691357;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91.5) ) ) {
            result[0] += 0.0231023102310231;
            result[1] += 0.052805280528052806;
            result[2] += 0.35973597359735976;
            result[3] += 0.31353135313531355;
            result[4] += 0.066006600660066;
            result[5] += 0.1848184818481848;
          } else {
            result[0] += 0.6875;
            result[1] += 0;
            result[2] += 0.16964285714285715;
            result[3] += 0.017857142857142856;
            result[4] += 0.125;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79) ) ) {
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
            result[4] += 0;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.6136363636363636;
            result[4] += 0;
            result[5] += 0.3409090909090909;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.027777777777777776;
            result[2] += 0.7222222222222222;
            result[3] += 0.19444444444444445;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8414634146341463;
            result[3] += 0.1524390243902439;
            result[4] += 0;
            result[5] += 0.006097560975609756;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008253094910591471;
            result[1] += 0;
            result[2] += 0.9587345254470426;
            result[3] += 0.024759284731774415;
            result[4] += 0;
            result[5] += 0.008253094910591471;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)113.5) ) ) {
            result[0] += 0.007692307692307693;
            result[1] += 0.015384615384615385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9615384615384616;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            result[0] += 0.0013175230566534915;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03689064558629776;
            result[4] += 0.034255599472990776;
            result[5] += 0.927536231884058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.1476510067114094;
            result[1] += 0.013422818791946308;
            result[2] += 0;
            result[3] += 0.15100671140939598;
            result[4] += 0.1040268456375839;
            result[5] += 0.5838926174496645;
          } else {
            result[0] += 0.0223463687150838;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6312849162011173;
            result[4] += 0.01675977653631285;
            result[5] += 0.329608938547486;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.6923076923076923;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13736263736263737;
            result[1] += 0.19230769230769232;
            result[2] += 0;
            result[3] += 0.005494505494505495;
            result[4] += 0.6538461538461539;
            result[5] += 0.01098901098901099;
          } else {
            result[0] += 0.8740554156171283;
            result[1] += 0.019311502938706964;
            result[2] += 0.0016792611251049533;
            result[3] += 0.016792611251049534;
            result[4] += 0.06381192275398823;
            result[5] += 0.024349286314021824;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.005714285714285714;
            result[1] += 0.014285714285714285;
            result[2] += 0.2914285714285714;
            result[3] += 0.38571428571428573;
            result[4] += 0.017142857142857144;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0.7373737373737373;
            result[1] += 0;
            result[2] += 0.16161616161616163;
            result[3] += 0;
            result[4] += 0.10101010101010101;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
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
            result[2] += 0.11764705882352941;
            result[3] += 0.8235294117647058;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0.03125;
            result[5] += 0.71875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5483870967741935;
            result[3] += 0.3870967741935484;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0.8202247191011236;
            result[3] += 0.11235955056179775;
            result[4] += 0.011235955056179775;
            result[5] += 0.0449438202247191;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.3333333333333333;
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
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.030303030303030304;
            result[4] += 0;
            result[5] += 0.15151515151515152;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8582375478927203;
            result[3] += 0.13409961685823754;
            result[4] += 0;
            result[5] += 0.007662835249042145;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9806949806949807;
            result[3] += 0.019305019305019305;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)130.5) ) ) {
            result[0] += 0;
            result[1] += 0.004132231404958678;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9834710743801653;
            result[5] += 0.012396694214876033;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.6875;
            result[5] += 0.0625;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.29411764705882354;
            result[4] += 0.058823529411764705;
            result[5] += 0.5882352941176471;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8813559322033898;
            result[1] += 0.05084745762711865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06779661016949153;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0.0013698630136986301;
            result[1] += 0;
            result[2] += 0.005479452054794521;
            result[3] += 0.03424657534246575;
            result[4] += 0.049315068493150684;
            result[5] += 0.9095890410958904;
          } else {
            result[0] += 0.020134228187919462;
            result[1] += 0;
            result[2] += 0.0022371364653243847;
            result[3] += 0.3691275167785235;
            result[4] += 0.06711409395973154;
            result[5] += 0.5413870246085011;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
            result[0] += 0.04;
            result[1] += 0.96;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.056768558951965066;
            result[1] += 0.4366812227074236;
            result[2] += 0;
            result[3] += 0.017467248908296942;
            result[4] += 0.4890829694323144;
            result[5] += 0;
          } else {
            result[0] += 0.8937664618086041;
            result[1] += 0.019315188762071993;
            result[2] += 0.006145741878841089;
            result[3] += 0.014925373134328358;
            result[4] += 0.056189640035118525;
            result[5] += 0.009657594381035996;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02512562814070352;
            result[1] += 0.020100502512562814;
            result[2] += 0.07537688442211055;
            result[3] += 0.38190954773869346;
            result[4] += 0.08542713567839195;
            result[5] += 0.4120603015075377;
          } else {
            result[0] += 0.5102040816326531;
            result[1] += 0;
            result[2] += 0.38095238095238093;
            result[3] += 0.04081632653061224;
            result[4] += 0.034013605442176874;
            result[5] += 0.034013605442176874;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.5555555555555556;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
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
            result[3] += 0.29411764705882354;
            result[4] += 0;
            result[5] += 0.7058823529411765;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14018691588785046;
            result[3] += 0.719626168224299;
            result[4] += 0;
            result[5] += 0.14018691588785046;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24324324324324326;
            result[3] += 0.24324324324324326;
            result[4] += 0.08108108108108109;
            result[5] += 0.43243243243243246;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6911764705882353;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.19117647058823528;
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4883720930232558;
            result[3] += 0.4418604651162791;
            result[4] += 0;
            result[5] += 0.06976744186046512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.26136363636363635;
            result[4] += 0;
            result[5] += 0.011363636363636364;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9175257731958762;
            result[3] += 0.08247422680412371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
            result[0] += 0.11904761904761904;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9117647058823529;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9813084112149533;
            result[3] += 0.018691588785046728;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9754901960784313;
            result[5] += 0.004901960784313725;
          } else {
            result[0] += 0.2702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16216216216216217;
            result[5] += 0.5675675675675675;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0.44186046511627897;
            result[1] += 0.0697674418604651;
            result[2] += 0.02325581395348837;
            result[3] += 0;
            result[4] += 0.4186046511627906;
            result[5] += 0.04651162790697674;
          } else {
            result[0] += 0;
            result[1] += 0.6382978723404256;
            result[2] += 0;
            result[3] += 0.1276595744680851;
            result[4] += 0;
            result[5] += 0.23404255319148937;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.8285714285714286;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.002577319587628866;
            result[2] += 0.002577319587628866;
            result[3] += 0.04381443298969072;
            result[4] += 0.03479381443298969;
            result[5] += 0.9162371134020618;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.020833333333333332;
            result[2] += 0.020833333333333332;
            result[3] += 0.25;
            result[4] += 0.025;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.018018018018018018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8558558558558559;
            result[4] += 0;
            result[5] += 0.12612612612612611;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.09565217391304348;
            result[1] += 0.22608695652173913;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6391304347826087;
            result[5] += 0.0391304347826087;
          } else {
            result[0] += 0.8456539398862714;
            result[1] += 0.011372867587327376;
            result[2] += 0.00487408610885459;
            result[3] += 0.04955320877335499;
            result[4] += 0.06011372867587327;
            result[5] += 0.02843216896831844;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0.010471204188481676;
            result[1] += 0.015706806282722512;
            result[2] += 0.09424083769633508;
            result[3] += 0.4397905759162304;
            result[4] += 0.041884816753926704;
            result[5] += 0.39790575916230364;
          } else {
            result[0] += 0.2149532710280374;
            result[1] += 0.05140186915887851;
            result[2] += 0.4579439252336449;
            result[3] += 0.09813084112149534;
            result[4] += 0.07943925233644861;
            result[5] += 0.09813084112149534;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0.058823529411764705;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0.8372093023255814;
          } else {
            result[0] += 0.4090909090909091;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23728813559322035;
            result[3] += 0.711864406779661;
            result[4] += 0;
            result[5] += 0.05084745762711865;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7000000000000001;
            result[3] += 0.20000000000000004;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.256198347107438;
            result[4] += 0;
            result[5] += 0.008264462809917356;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.9382716049382716;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9135802469135802;
            result[3] += 0.08641975308641975;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8676470588235294;
            result[3] += 0.1323529411764706;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9977876106194691;
            result[3] += 0.0022123893805309734;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9829059829059829;
            result[5] += 0.017094017094017096;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.08571428571428572;
            result[4] += 0.6;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.5675675675675675;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43243243243243246;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0010799136069114472;
            result[3] += 0.056155507559395246;
            result[4] += 0.05075593952483801;
            result[5] += 0.8920086393088553;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.061224489795918366;
            result[3] += 0.21428571428571427;
            result[4] += 0.061224489795918366;
            result[5] += 0.6224489795918368;
          } else {
            result[0] += 0.055900621118012424;
            result[1] += 0.09316770186335403;
            result[2] += 0.043478260869565216;
            result[3] += 0.6211180124223602;
            result[4] += 0.006211180124223602;
            result[5] += 0.18012422360248448;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += 0.057692307692307696;
            result[1] += 0.7884615384615384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.07777777777777778;
            result[2] += 0;
            result[3] += 0.011111111111111112;
            result[4] += 0.8777777777777778;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.16666666666666669;
            result[1] += 0.28125000000000006;
            result[2] += 0.020833333333333336;
            result[3] += 0.020833333333333336;
            result[4] += 0.42708333333333337;
            result[5] += 0.08333333333333334;
          } else {
            result[0] += 0.9194570135746607;
            result[1] += 0.005429864253393666;
            result[2] += 0.001809954751131222;
            result[3] += 0.013574660633484165;
            result[4] += 0.04253393665158372;
            result[5] += 0.01719457013574661;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0.03278688524590164;
            result[1] += 0;
            result[2] += 0.03825136612021858;
            result[3] += 0.4808743169398907;
            result[4] += 0.04371584699453552;
            result[5] += 0.40437158469945356;
          } else {
            result[0] += 0.2696629213483146;
            result[1] += 0.05056179775280899;
            result[2] += 0.34831460674157305;
            result[3] += 0.15168539325842698;
            result[4] += 0.10112359550561797;
            result[5] += 0.07865168539325842;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023809523809523808;
            result[4] += 0.023809523809523808;
            result[5] += 0.9523809523809523;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.12307692307692308;
            result[2] += 0.2076923076923077;
            result[3] += 0.5230769230769231;
            result[4] += 0.007692307692307693;
            result[5] += 0.13846153846153847;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
            result[0] += 0.14285714285714288;
            result[1] += 0;
            result[2] += 0.5714285714285715;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8048780487804879;
            result[1] += 0;
            result[2] += 0.1951219512195122;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3181818181818182;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.011560693641618497;
            result[1] += 0;
            result[2] += 0.8265895953757225;
            result[3] += 0.14450867052023122;
            result[4] += 0;
            result[5] += 0.017341040462427744;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0136986301369863;
            result[1] += 0;
            result[2] += 0.8424657534246576;
            result[3] += 0.14383561643835616;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9702276707530648;
            result[3] += 0.02626970227670753;
            result[4] += 0;
            result[5] += 0.0035026269702276708;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.004672897196261683;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9813084112149534;
            result[5] += 0.014018691588785048;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.25;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.41304347826086957;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43478260869565216;
            result[5] += 0.15217391304347827;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004678362573099415;
            result[3] += 0.05380116959064327;
            result[4] += 0.05146198830409357;
            result[5] += 0.8900584795321638;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0.0992063492063492;
            result[1] += 0.01984126984126984;
            result[2] += 0.09126984126984126;
            result[3] += 0.20634920634920634;
            result[4] += 0.11507936507936507;
            result[5] += 0.46825396825396826;
          } else {
            result[0] += 0.03968253968253968;
            result[1] += 0.015873015873015872;
            result[2] += 0.007936507936507936;
            result[3] += 0.7380952380952381;
            result[4] += 0;
            result[5] += 0.1984126984126984;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.002538071065989848;
            result[1] += 0.9949238578680204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002538071065989848;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.8846153846153846;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          } else {
            result[0] += 0.061224489795918366;
            result[1] += 0.05102040816326531;
            result[2] += 0.01020408163265306;
            result[3] += 0.030612244897959183;
            result[4] += 0.826530612244898;
            result[5] += 0.02040816326530612;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
            result[0] += 0.958904109589041;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0410958904109589;
            result[5] += 0;
          } else {
            result[0] += 0.06220095693779904;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3492822966507177;
            result[4] += 0.07177033492822966;
            result[5] += 0.5167464114832536;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
            result[0] += 0.9010989010989011;
            result[1] += 0.03196803196803197;
            result[2] += 0;
            result[3] += 0.007992007992007992;
            result[4] += 0.054945054945054944;
            result[5] += 0.003996003996003996;
          } else {
            result[0] += 0.38202247191011235;
            result[1] += 0.011235955056179775;
            result[2] += 0.25842696629213485;
            result[3] += 0.17415730337078653;
            result[4] += 0.08426966292134831;
            result[5] += 0.0898876404494382;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.22857142857142856;
            result[4] += 0.11428571428571428;
            result[5] += 0.6285714285714286;
          } else {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07547169811320754;
            result[3] += 0.9056603773584906;
            result[4] += 0;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0.5277777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20833333333333334;
            result[3] += 0.7916666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7864077669902912;
            result[3] += 0.1650485436893204;
            result[4] += 0;
            result[5] += 0.04854368932038835;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8620689655172413;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.005934718100890209;
            result[1] += 0;
            result[2] += 0.8575667655786351;
            result[3] += 0.1275964391691395;
            result[4] += 0;
            result[5] += 0.008902077151335314;
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
            result[0] += 0.0035026269702276708;
            result[1] += 0;
            result[2] += 0.968476357267951;
            result[3] += 0.02626970227670753;
            result[4] += 0;
            result[5] += 0.0017513134851138354;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.007518796992481203;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9849624060150376;
            result[5] += 0.007518796992481203;
          } else {
            result[0] += 0.1388888888888889;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.19444444444444445;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8907563025210085;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10084033613445378;
            result[5] += 0.008403361344537815;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0.05454545454545454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.004219409282700422;
            result[2] += 0.004219409282700422;
            result[3] += 0.0379746835443038;
            result[4] += 0.029535864978902954;
            result[5] += 0.9240506329113924;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.03174603174603175;
            result[2] += 0;
            result[3] += 0.07936507936507937;
            result[4] += 0.5396825396825398;
            result[5] += 0.34920634920634924;
          } else {
            result[0] += 0.004705882352941176;
            result[1] += 0.002352941176470588;
            result[2] += 0.011764705882352941;
            result[3] += 0.2564705882352941;
            result[4] += 0.07294117647058823;
            result[5] += 0.6517647058823529;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.23255813953488372;
            result[2] += 0.023255813953488372;
            result[3] += 0.09302325581395349;
            result[4] += 0.6511627906976745;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8636363636363636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363635;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.5813953488372093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4186046511627907;
            result[5] += 0;
          } else {
            result[0] += 0.8720379146919433;
            result[1] += 0.008530805687203793;
            result[2] += 0.008530805687203793;
            result[3] += 0.03886255924170617;
            result[4] += 0.04265402843601897;
            result[5] += 0.029383886255924176;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0.013623978201634879;
            result[1] += 0.021798365122615806;
            result[2] += 0.19618528610354227;
            result[3] += 0.5231607629427794;
            result[4] += 0.027247956403269758;
            result[5] += 0.21798365122615806;
          } else {
            result[0] += 0.5572519083969466;
            result[1] += 0.03816793893129771;
            result[2] += 0.2748091603053435;
            result[3] += 0.022900763358778626;
            result[4] += 0.061068702290076333;
            result[5] += 0.04580152671755725;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0.8947368421052632;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.014184397163120567;
            result[2] += 0.5035460992907801;
            result[3] += 0.375886524822695;
            result[4] += 0;
            result[5] += 0.10638297872340426;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.16666666666666666;
            result[4] += 0.08333333333333333;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.05384615384615385;
            result[4] += 0;
            result[5] += 0.023076923076923078;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7959183673469388;
            result[3] += 0.20408163265306123;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9576271186440678;
            result[3] += 0.03389830508474576;
            result[4] += 0;
            result[5] += 0.00847457627118644;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9878787878787879;
            result[3] += 0.012121212121212121;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
