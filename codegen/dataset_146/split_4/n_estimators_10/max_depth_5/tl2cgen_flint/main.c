
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
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.049079754601226995;
            result[1] += 0.03067484662576687;
            result[2] += 0.003067484662576687;
            result[3] += 0;
            result[4] += 0.8865030674846626;
            result[5] += 0.03067484662576687;
          } else {
            result[0] += 0.04347826086956522;
            result[1] += 0.891304347826087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06521739130434784;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.05;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.15;
          } else {
            result[0] += 0.918918918918919;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04864864864864865;
            result[5] += 0.032432432432432434;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.010804321728691477;
            result[1] += 0;
            result[2] += 0.003601440576230492;
            result[3] += 0.06962785114045618;
            result[4] += 0.03841536614645858;
            result[5] += 0.8775510204081632;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.01348747591522158;
            result[1] += 0.023121387283236993;
            result[2] += 0.015414258188824663;
            result[3] += 0.5028901734104047;
            result[4] += 0.08863198458574181;
            result[5] += 0.35645472061657035;
          } else {
            result[0] += 0.5000000000000001;
            result[1] += 0.020161290322580648;
            result[2] += 0.14516129032258068;
            result[3] += 0.05645161290322581;
            result[4] += 0.1491935483870968;
            result[5] += 0.12903225806451615;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
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
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0.9812792511700468;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0078003120124804995;
            result[4] += 0.0109204368174727;
            result[5] += 0;
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0.19047619047619047;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.3333333333333333;
            result[4] += 0.19047619047619047;
            result[5] += 0.19047619047619047;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0.05;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0.05434782608695652;
            result[2] += 0.13043478260869565;
            result[3] += 0.43478260869565216;
            result[4] += 0.010869565217391304;
            result[5] += 0.3695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612904;
            result[2] += 0.6774193548387097;
            result[3] += 0.16129032258064518;
            result[4] += 0;
            result[5] += 0.12903225806451615;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.5;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0;
          } else {
            result[0] += 0.045112781954887216;
            result[1] += 0;
            result[2] += 0.6240601503759399;
            result[3] += 0.2706766917293233;
            result[4] += 0;
            result[5] += 0.06015037593984962;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013259668508287293;
            result[1] += 0;
            result[2] += 0.9116022099447514;
            result[3] += 0.06850828729281767;
            result[4] += 0;
            result[5] += 0.0066298342541436465;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.8571428571428572;
            result[1] += 0;
            result[2] += 0.07142857142857144;
            result[3] += 0.07142857142857144;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42f60000))) ) ) {
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.1622418879056047;
            result[1] += 0.008849557522123892;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.71976401179941;
            result[5] += 0.10914454277286133;
          } else {
            result[0] += 0.8251748251748252;
            result[1] += 0.006993006993006993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14685314685314685;
            result[5] += 0.02097902097902098;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06466512702078522;
            result[4] += 0.057736720554272515;
            result[5] += 0.8775981524249422;
          } else {
            result[0] += 0.05175292153589316;
            result[1] += 0.011686143572621035;
            result[2] += 0.06343906510851419;
            result[3] += 0.38898163606010017;
            result[4] += 0.11018363939899833;
            result[5] += 0.3739565943238731;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.10256410256410253;
            result[1] += 0.23931623931623927;
            result[2] += 0;
            result[3] += 0.008547008547008546;
            result[4] += 0.6153846153846153;
            result[5] += 0.034188034188034185;
          } else {
            result[0] += 0.1;
            result[1] += 0.7666666666666667;
            result[2] += 0.03333333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.9130850047755492;
            result[1] += 0.01623686723973257;
            result[2] += 0.0009551098376313276;
            result[3] += 0.027698185291308502;
            result[4] += 0.03247373447946514;
            result[5] += 0.009551098376313277;
          } else {
            result[0] += 0.18421052631578946;
            result[1] += 0.06578947368421052;
            result[2] += 0.17105263157894737;
            result[3] += 0.15350877192982457;
            result[4] += 0.03070175438596491;
            result[5] += 0.39473684210526316;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ee0000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.4090909090909091;
            result[4] += 0;
            result[5] += 0.3181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6216216216216216;
            result[3] += 0.32432432432432434;
            result[4] += 0;
            result[5] += 0.05405405405405406;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.918918918918919;
            result[3] += 0.08108108108108109;
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
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.0076045627376425855;
            result[1] += 0;
            result[2] += 0.8631178707224335;
            result[3] += 0.10266159695817491;
            result[4] += 0;
            result[5] += 0.026615969581749048;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429f0000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9567307692307693;
            result[3] += 0.04326923076923077;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9943342776203966;
            result[3] += 0.0056657223796034;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.5666666666666667;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0.782608695652174;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0.0012626262626262627;
            result[2] += 0.0025252525252525255;
            result[3] += 0.036616161616161616;
            result[4] += 0.03535353535353535;
            result[5] += 0.9242424242424242;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0.018518518518518517;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9537037037037037;
            result[5] += 0;
          } else {
            result[0] += 0.7681159420289855;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.007246376811594203;
            result[4] += 0.17391304347826086;
            result[5] += 0.050724637681159424;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.008849557522123894;
            result[1] += 0.02654867256637168;
            result[2] += 0.008849557522123894;
            result[3] += 0.1504424778761062;
            result[4] += 0.5132743362831859;
            result[5] += 0.2920353982300885;
          } else {
            result[0] += 0.011235955056179775;
            result[1] += 0;
            result[2] += 0.016853932584269662;
            result[3] += 0.21348314606741572;
            result[4] += 0.0898876404494382;
            result[5] += 0.6685393258426966;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.0748663101604278;
            result[1] += 0.5828877005347594;
            result[2] += 0;
            result[3] += 0.016042780748663103;
            result[4] += 0.3155080213903743;
            result[5] += 0.0106951871657754;
          } else {
            result[0] += 0.8539325842696629;
            result[1] += 0.001728608470181504;
            result[2] += 0.016421780466724288;
            result[3] += 0.05185825410544512;
            result[4] += 0.049265341400172864;
            result[5] += 0.02679343128781331;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0.016091954022988506;
            result[1] += 0.013793103448275862;
            result[2] += 0.18850574712643678;
            result[3] += 0.41379310344827586;
            result[4] += 0.034482758620689655;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.8125;
            result[1] += 0;
            result[2] += 0.015625;
            result[3] += 0;
            result[4] += 0.171875;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.5;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9411764705882353;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3888888888888889;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.05555555555555555;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0;
            result[2] += 0.5581395348837209;
            result[3] += 0.32558139534883723;
            result[4] += 0.023255813953488372;
            result[5] += 0.046511627906976744;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
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
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.016556291390728478;
            result[1] += 0;
            result[2] += 0.8642384105960265;
            result[3] += 0.10927152317880795;
            result[4] += 0;
            result[5] += 0.009933774834437087;
          } else {
            result[0] += 0.001841620626151013;
            result[1] += 0;
            result[2] += 0.9852670349907919;
            result[3] += 0.01289134438305709;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00398406374501992;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.00398406374501992;
            result[4] += 0.9880478087649402;
            result[5] += 0.00398406374501992;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.03125;
            result[5] += 0.9375;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.15517241379310345;
            result[1] += 0.022988505747126436;
            result[2] += 0.008620689655172414;
            result[3] += 0.15804597701149425;
            result[4] += 0.15229885057471265;
            result[5] += 0.5028735632183908;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01020408163265306;
            result[3] += 0.6173469387755102;
            result[4] += 0.03571428571428571;
            result[5] += 0.336734693877551;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.07017543859649122;
            result[1] += 0.24561403508771928;
            result[2] += 0;
            result[3] += 0.008771929824561403;
            result[4] += 0.6578947368421053;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0.8571428571428572;
            result[1] += 0.015037593984962407;
            result[2] += 0.024227234753550545;
            result[3] += 0.02589807852965748;
            result[4] += 0.05597326649958229;
            result[5] += 0.021720969089390144;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.0136986301369863;
            result[1] += 0.045662100456621;
            result[2] += 0.1324200913242009;
            result[3] += 0.4977168949771689;
            result[4] += 0.0319634703196347;
            result[5] += 0.2785388127853881;
          } else {
            result[0] += 0.28651685393258425;
            result[1] += 0;
            result[2] += 0.37640449438202245;
            result[3] += 0.06179775280898876;
            result[4] += 0.15730337078651685;
            result[5] += 0.11797752808988764;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
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
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0;
            result[2] += 0.8604651162790697;
            result[3] += 0.06976744186046512;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.4583333333333333;
            result[4] += 0;
            result[5] += 0.20833333333333334;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.025157232704402517;
            result[1] += 0.0031446540880503146;
            result[2] += 0.8427672955974843;
            result[3] += 0.11949685534591195;
            result[4] += 0;
            result[5] += 0.009433962264150943;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.985663082437276;
            result[3] += 0.014336917562724014;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f60000))) ) ) {
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0.10344827586206896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7586206896551724;
            result[5] += 0.13793103448275862;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x427e0000))) ) ) {
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
            result[3] += 0.026170798898071626;
            result[4] += 0.0440771349862259;
            result[5] += 0.9297520661157025;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.13274336283185842;
            result[1] += 0.07964601769911504;
            result[2] += 0.014749262536873156;
            result[3] += 0.1415929203539823;
            result[4] += 0.10619469026548672;
            result[5] += 0.5250737463126843;
          } else {
            result[0] += 0.01744186046511628;
            result[1] += 0;
            result[2] += 0.01744186046511628;
            result[3] += 0.7558139534883721;
            result[4] += 0;
            result[5] += 0.20930232558139536;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.13664596273291926;
            result[1] += 0.12422360248447205;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.024844720496894408;
          } else {
            result[0] += 0.88830255057168;
            result[1] += 0.005277044854881267;
            result[2] += 0.012313104661389624;
            result[3] += 0.03869832893579596;
            result[4] += 0.04837291116974495;
            result[5] += 0.0070360598065083565;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.03272727272727273;
            result[1] += 0.04;
            result[2] += 0.22181818181818183;
            result[3] += 0.26181818181818184;
            result[4] += 0.11272727272727273;
            result[5] += 0.33090909090909093;
          } else {
            result[0] += 0.8701298701298701;
            result[1] += 0.03896103896103896;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16129032258064516;
            result[3] += 0.03225806451612903;
            result[4] += 0.03225806451612903;
            result[5] += 0.7741935483870968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0.075;
            result[5] += 0.55;
          } else {
            result[0] += 0.015625;
            result[1] += 0.0625;
            result[2] += 0.328125;
            result[3] += 0.5234375;
            result[4] += 0.0078125;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.19047619047619047;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0.09523809523809523;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0.025;
            result[1] += 0.025;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0.025;
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.65;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5675675675675675;
            result[3] += 0.2972972972972973;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          } else {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0.859375;
            result[3] += 0.109375;
            result[4] += 0;
            result[5] += 0.0234375;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9122807017543859;
            result[3] += 0.08771929824561403;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005309734513274337;
            result[1] += 0;
            result[2] += 0.9787610619469027;
            result[3] += 0.015929203539823012;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0.015151515151515152;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0.04040404040404041;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          } else {
            result[0] += 0.9692307692307692;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03076923076923077;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7407407407407407;
            result[5] += 0.25925925925925924;
          } else {
            result[0] += 0;
            result[1] += 0.0012165450121654502;
            result[2] += 0;
            result[3] += 0.04744525547445255;
            result[4] += 0.049878345498783457;
            result[5] += 0.9014598540145985;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0.05303030303030303;
            result[2] += 0.007575757575757576;
            result[3] += 0.25757575757575757;
            result[4] += 0.05303030303030303;
            result[5] += 0.6287878787878788;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0.005747126436781609;
            result[2] += 0.06321839080459771;
            result[3] += 0.603448275862069;
            result[4] += 0.017241379310344827;
            result[5] += 0.29310344827586204;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.06870229007633588;
            result[1] += 0.05343511450381679;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8473282442748091;
            result[5] += 0.030534351145038167;
          } else {
            result[0] += 0.11578947368421053;
            result[1] += 0.6947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18947368421052632;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8678260869565219;
            result[1] += 0.004347826086956523;
            result[2] += 0.0026086956521739137;
            result[3] += 0.031304347826086966;
            result[4] += 0.06782608695652176;
            result[5] += 0.026086956521739132;
          } else {
            result[0] += 0.24727272727272728;
            result[1] += 0.007272727272727273;
            result[2] += 0.14545454545454545;
            result[3] += 0.31272727272727274;
            result[4] += 0.07272727272727272;
            result[5] += 0.21454545454545454;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.0024570024570024574;
            result[1] += 0.9950859950859952;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0024570024570024574;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.5;
            result[3] += 0.4166666666666667;
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0.9032258064516129;
          } else {
            result[0] += 0.020618556701030927;
            result[1] += 0.041237113402061855;
            result[2] += 0.061855670103092786;
            result[3] += 0.422680412371134;
            result[4] += 0.17525773195876287;
            result[5] += 0.27835051546391754;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.8636363636363636;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0.5882352941176471;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0.06481481481481481;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8095238095238095;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.3333333333333333;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.028846153846153848;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.20192307692307693;
            result[4] += 0;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0.014925373134328358;
            result[1] += 0.0037313432835820895;
            result[2] += 0.9029850746268657;
            result[3] += 0.07462686567164178;
            result[4] += 0;
            result[5] += 0.0037313432835820895;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006085192697768763;
            result[1] += 0;
            result[2] += 0.9695740365111561;
            result[3] += 0.02434077079107505;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.005813953488372093;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9941860465116279;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.86;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06;
            result[5] += 0.06;
          } else {
            result[0] += 0;
            result[1] += 0.15492957746478872;
            result[2] += 0;
            result[3] += 0.056338028169014086;
            result[4] += 0.30985915492957744;
            result[5] += 0.4788732394366197;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9032258064516129;
            result[5] += 0.0967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0.006105006105006105;
            result[2] += 0;
            result[3] += 0.04395604395604396;
            result[4] += 0.030525030525030524;
            result[5] += 0.9194139194139194;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.015267175572519083;
            result[1] += 0;
            result[2] += 0.05343511450381679;
            result[3] += 0.183206106870229;
            result[4] += 0.07633587786259542;
            result[5] += 0.6717557251908397;
          } else {
            result[0] += 0.012121212121212121;
            result[1] += 0.006060606060606061;
            result[2] += 0.01818181818181818;
            result[3] += 0.6727272727272727;
            result[4] += 0;
            result[5] += 0.2909090909090909;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9950372208436724;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004962779156327543;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0.02197802197802198;
            result[1] += 0.03296703296703297;
            result[2] += 0.02197802197802198;
            result[3] += 0.04395604395604396;
            result[4] += 0.8131868131868132;
            result[5] += 0.06593406593406594;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.5795148247978437;
            result[1] += 0.008086253369272238;
            result[2] += 0.005390835579514825;
            result[3] += 0.07547169811320754;
            result[4] += 0.18059299191374664;
            result[5] += 0.1509433962264151;
          } else {
            result[0] += 0.21508379888268156;
            result[1] += 0;
            result[2] += 0.16201117318435754;
            result[3] += 0.36312849162011174;
            result[4] += 0.03910614525139665;
            result[5] += 0.2206703910614525;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.8706563706563707;
            result[1] += 0.01447876447876448;
            result[2] += 0.03571428571428571;
            result[3] += 0.007722007722007722;
            result[4] += 0.0637065637065637;
            result[5] += 0.007722007722007722;
          } else {
            result[0] += 0.04;
            result[1] += 0.96;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7391304347826086;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5813953488372093;
            result[3] += 0.37209302325581395;
            result[4] += 0;
            result[5] += 0.046511627906976744;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0.21052631578947367;
            result[2] += 0.3157894736842105;
            result[3] += 0.3157894736842105;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0.015151515151515152;
            result[2] += 0.8181818181818182;
            result[3] += 0.1590909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.03424657534246575;
            result[1] += 0;
            result[2] += 0.8356164383561644;
            result[3] += 0.1232876712328767;
            result[4] += 0;
            result[5] += 0.00684931506849315;
          } else {
            result[0] += 0.0017857142857142857;
            result[1] += 0;
            result[2] += 0.9857142857142858;
            result[3] += 0.0125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
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
            result[4] += 0.8518518518518519;
            result[5] += 0.14814814814814814;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.05660377358490566;
            result[1] += 0.03773584905660377;
            result[2] += 0.018867924528301886;
            result[3] += 0.07547169811320754;
            result[4] += 0.6226415094339622;
            result[5] += 0.18867924528301888;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.12;
            result[1] += 0.05333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5866666666666667;
            result[5] += 0.24;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04148148148148148;
            result[4] += 0.025185185185185185;
            result[5] += 0.9333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.0044943820224719105;
            result[2] += 0.017977528089887642;
            result[3] += 0.3393258426966292;
            result[4] += 0.11910112359550562;
            result[5] += 0.5191011235955056;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0.9978813559322034;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00211864406779661;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.0975609756097561;
            result[1] += 0.08943089430894309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7967479674796748;
            result[5] += 0.016260162601626018;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8833181403828622;
            result[1] += 0.010938924339106653;
            result[2] += 0.0018231540565177753;
            result[3] += 0.031905195989061066;
            result[4] += 0.048313582497721046;
            result[5] += 0.023701002734731077;
          } else {
            result[0] += 0.3132530120481928;
            result[1] += 0.030120481927710843;
            result[2] += 0.1927710843373494;
            result[3] += 0.2289156626506024;
            result[4] += 0.04819277108433735;
            result[5] += 0.18674698795180722;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09836065573770492;
            result[3] += 0.08196721311475409;
            result[4] += 0.01639344262295082;
            result[5] += 0.8032786885245902;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.056818181818181816;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.2159090909090909;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0.09523809523809523;
            result[5] += 0.5714285714285714;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0.3670886075949367;
            result[3] += 0.3924050632911392;
            result[4] += 0.02531645569620253;
            result[5] += 0.20253164556962025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8928571428571429;
            result[3] += 0.08928571428571429;
            result[4] += 0.017857142857142856;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428e0000))) ) ) {
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
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.1875;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007220216606498196;
            result[1] += 0;
            result[2] += 0.8592057761732853;
            result[3] += 0.09747292418772564;
            result[4] += 0;
            result[5] += 0.03610108303249098;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.005128205128205128;
            result[1] += 0;
            result[2] += 0.9179487179487179;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0049504950495049506;
            result[1] += 0;
            result[2] += 0.9826732673267327;
            result[3] += 0.012376237623762377;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.003663003663003663;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.989010989010989;
            result[5] += 0.007326007326007326;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.008706467661691543;
            result[1] += 0.0024875621890547263;
            result[2] += 0;
            result[3] += 0.03980099502487562;
            result[4] += 0.05845771144278607;
            result[5] += 0.8905472636815921;
          } else {
            result[0] += 0.24723247232472326;
            result[1] += 0.04428044280442804;
            result[2] += 0;
            result[3] += 0.13653136531365315;
            result[4] += 0.0996309963099631;
            result[5] += 0.47232472324723246;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20454545454545456;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.01990049751243781;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6567164179104478;
            result[4] += 0.029850746268656716;
            result[5] += 0.2935323383084577;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06329113924050633;
            result[1] += 0.06329113924050633;
            result[2] += 0.012658227848101266;
            result[3] += 0;
            result[4] += 0.7848101265822784;
            result[5] += 0.0759493670886076;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0022026431718061676;
            result[1] += 0.9823788546255506;
            result[2] += 0.0022026431718061676;
            result[3] += 0;
            result[4] += 0.013215859030837005;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.17708333333333334;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.010416666666666666;
            result[4] += 0.4791666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.8862007168458782;
            result[1] += 0.012544802867383515;
            result[2] += 0.007168458781362008;
            result[3] += 0.037634408602150546;
            result[4] += 0.039426523297491044;
            result[5] += 0.01702508960573477;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.030120481927710843;
            result[1] += 0.018072289156626505;
            result[2] += 0.2891566265060241;
            result[3] += 0.28313253012048195;
            result[4] += 0.0783132530120482;
            result[5] += 0.30120481927710846;
          } else {
            result[0] += 0.7032967032967032;
            result[1] += 0.021978021978021976;
            result[2] += 0.1758241758241758;
            result[3] += 0;
            result[4] += 0.09890109890109887;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0.015873015873015872;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.06349206349206349;
            result[5] += 0.8095238095238095;
          } else {
            result[0] += 0;
            result[1] += 0.21052631578947367;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.5263157894736842;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1504424778761062;
            result[3] += 0.6637168141592921;
            result[4] += 0;
            result[5] += 0.18584070796460178;
          } else {
            result[0] += 0.06172839506172839;
            result[1] += 0;
            result[2] += 0.5802469135802469;
            result[3] += 0.20987654320987653;
            result[4] += 0;
            result[5] += 0.14814814814814814;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d40000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.6;
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
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39473684210526316;
            result[3] += 0.5263157894736842;
            result[4] += 0;
            result[5] += 0.07894736842105263;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.011235955056179775;
            result[1] += 0;
            result[2] += 0.8314606741573034;
            result[3] += 0.02247191011235955;
            result[4] += 0;
            result[5] += 0.1348314606741573;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.6756756756756757;
            result[3] += 0.3108108108108108;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9421487603305785;
            result[3] += 0.05785123966942149;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001869158878504673;
            result[1] += 0;
            result[2] += 0.9869158878504672;
            result[3] += 0.011214953271028037;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.004201680672268907;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
            result[5] += 0.06722689075630252;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.04004106776180698;
            result[1] += 0.004106776180698152;
            result[2] += 0.00513347022587269;
            result[3] += 0.0513347022587269;
            result[4] += 0.0811088295687885;
            result[5] += 0.8182751540041068;
          } else {
            result[0] += 0.07213930348258707;
            result[1] += 0.02736318407960199;
            result[2] += 0.03731343283582089;
            result[3] += 0.48009950248756217;
            result[4] += 0.06716417910447761;
            result[5] += 0.31592039800995025;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.03773584905660377;
            result[1] += 0.33962264150943394;
            result[2] += 0;
            result[3] += 0.018867924528301886;
            result[4] += 0.5849056603773585;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0.487152034261242;
            result[1] += 0.031049250535331904;
            result[2] += 0.11777301927194861;
            result[3] += 0.12740899357601712;
            result[4] += 0.09314775160599571;
            result[5] += 0.14346895074946467;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.39285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.9415584415584414;
            result[1] += 0.001623376623376623;
            result[2] += 0.029220779220779213;
            result[3] += 0.003246753246753246;
            result[4] += 0.024350649350649345;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.018867924528301886;
            result[2] += 0.11320754716981132;
            result[3] += 0.03773584905660377;
            result[4] += 0.07547169811320754;
            result[5] += 0.7547169811320755;
          } else {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0.26666666666666666;
            result[3] += 0.4666666666666667;
            result[4] += 0.06666666666666667;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17307692307692307;
            result[3] += 0.5576923076923077;
            result[4] += 0.057692307692307696;
            result[5] += 0.21153846153846154;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0.11538461538461539;
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
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
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
            result[2] += 0.25;
            result[3] += 0.75;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.003401360544217687;
            result[1] += 0.006802721088435374;
            result[2] += 0.8367346938775511;
            result[3] += 0.14625850340136054;
            result[4] += 0;
            result[5] += 0.006802721088435374;
          } else {
            result[0] += 0.0054249547920434;
            result[1] += 0;
            result[2] += 0.972875226039783;
            result[3] += 0.0216998191681736;
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
