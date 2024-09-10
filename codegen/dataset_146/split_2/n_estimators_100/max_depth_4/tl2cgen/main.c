
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.7857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.004098360655737705;
          result[1] += 0.00819672131147541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9631147540983607;
          result[5] += 0.02459016393442623;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.8181818181818182;
          result[1] += 0.025974025974025976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15584415584415584;
          result[5] += 0;
        } else {
          result[0] += 0.009038619556285949;
          result[1] += 0.004108463434675432;
          result[2] += 0.01314708299096138;
          result[3] += 0.1437962202136401;
          result[4] += 0.07395234182415776;
          result[5] += 0.7559572719802794;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.3888888888888889;
          result[2] += 0.1111111111111111;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.06282722513089005;
          result[1] += 0.36649214659685864;
          result[2] += 0.010471204188481676;
          result[3] += 0.06282722513089005;
          result[4] += 0.44502617801047123;
          result[5] += 0.05235602094240838;
        } else {
          result[0] += 0.76796875;
          result[1] += 0.00625;
          result[2] += 0.03828125;
          result[3] += 0.06953125;
          result[4] += 0.0578125;
          result[5] += 0.06015625;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
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
          result[2] += 0.046511627906976744;
          result[3] += 0.1744186046511628;
          result[4] += 0.03488372093023256;
          result[5] += 0.7441860465116279;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.05;
          result[2] += 0.0625;
          result[3] += 0.6375;
          result[4] += 0.0125;
          result[5] += 0.2375;
        } else {
          result[0] += 0.008064516129032258;
          result[1] += 0.016129032258064516;
          result[2] += 0.3790322580645161;
          result[3] += 0.5161290322580645;
          result[4] += 0;
          result[5] += 0.08064516129032258;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7346938775510204;
          result[1] += 0.061224489795918366;
          result[2] += 0.1836734693877551;
          result[3] += 0;
          result[4] += 0.02040816326530612;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          result[0] += 0.019455252918287938;
          result[1] += 0;
          result[2] += 0.6926070038910506;
          result[3] += 0.22957198443579765;
          result[4] += 0.0038910505836575876;
          result[5] += 0.054474708171206226;
        } else {
          result[0] += 0.001342281879194631;
          result[1] += 0;
          result[2] += 0.9651006711409397;
          result[3] += 0.03221476510067115;
          result[4] += 0;
          result[5] += 0.001342281879194631;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.004347826086956522;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9478260869565217;
          result[5] += 0.04782608695652174;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001321003963011889;
          result[3] += 0.03830911492734478;
          result[4] += 0.05548216644649934;
          result[5] += 0.904887714663144;
        } else {
          result[0] += 0.09403669724770643;
          result[1] += 0.02522935779816514;
          result[2] += 0.006880733944954129;
          result[3] += 0.29357798165137616;
          result[4] += 0.09403669724770643;
          result[5] += 0.48623853211009177;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.5789473684210527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.42105263157894735;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.025806451612903226;
          result[1] += 0.2129032258064516;
          result[2] += 0;
          result[3] += 0.01935483870967742;
          result[4] += 0.7225806451612903;
          result[5] += 0.01935483870967742;
        } else {
          result[0] += 0.7058437294812869;
          result[1] += 0.025607353906762966;
          result[2] += 0.017071569271175313;
          result[3] += 0.08338804990151018;
          result[4] += 0.08470124753775443;
          result[5] += 0.08338804990151018;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021739130434782608;
          result[3] += 0.391304347826087;
          result[4] += 0;
          result[5] += 0.5869565217391305;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12359550561797754;
          result[3] += 0.7303370786516855;
          result[4] += 0.022471910112359553;
          result[5] += 0.12359550561797754;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
          result[0] += 0.03773584905660377;
          result[1] += 0;
          result[2] += 0.3867924528301887;
          result[3] += 0.3867924528301887;
          result[4] += 0;
          result[5] += 0.18867924528301888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.88;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.08;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0.04560260586319218;
          result[1] += 0;
          result[2] += 0.7752442996742671;
          result[3] += 0.1465798045602606;
          result[4] += 0.003257328990228013;
          result[5] += 0.029315960912052116;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.0014084507042253522;
          result[1] += 0;
          result[2] += 0.9436619718309859;
          result[3] += 0.05070422535211268;
          result[4] += 0;
          result[5] += 0.004225352112676056;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.34285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975247524752475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024752475247524753;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.03680981595092025;
          result[1] += 0.1196319018404908;
          result[2] += 0.006134969325153374;
          result[3] += 0;
          result[4] += 0.7883435582822086;
          result[5] += 0.049079754601226995;
        } else {
          result[0] += 0.8770685579196218;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0851063829787234;
          result[5] += 0.037825059101654845;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8461538461538461;
          result[5] += 0.1346153846153846;
        } else {
          result[0] += 0;
          result[1] += 0.0022522522522522522;
          result[2] += 0;
          result[3] += 0.07094594594594594;
          result[4] += 0.04617117117117117;
          result[5] += 0.8806306306306306;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
          result[0] += 0.34594594594594597;
          result[1] += 0.23783783783783785;
          result[2] += 0.005405405405405406;
          result[3] += 0.08108108108108109;
          result[4] += 0.2756756756756757;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.019572953736654804;
          result[1] += 0;
          result[2] += 0.042704626334519574;
          result[3] += 0.45373665480427045;
          result[4] += 0.04092526690391459;
          result[5] += 0.4430604982206406;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0.9901153212520593;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0032948929159802307;
          result[4] += 0.006589785831960461;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0.3611111111111111;
          result[3] += 0.3888888888888889;
          result[4] += 0.16666666666666666;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.1388888888888889;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          result[0] += 0.020100502512562814;
          result[1] += 0.020100502512562814;
          result[2] += 0.33668341708542715;
          result[3] += 0.4321608040201005;
          result[4] += 0.01507537688442211;
          result[5] += 0.17587939698492464;
        } else {
          result[0] += 0.025974025974025976;
          result[1] += 0;
          result[2] += 0.8051948051948052;
          result[3] += 0.15584415584415584;
          result[4] += 0;
          result[5] += 0.012987012987012988;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.42168674698795183;
          result[1] += 0.07228915662650602;
          result[2] += 0.43373493975903615;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07228915662650602;
        } else {
          result[0] += 0.0033039647577092516;
          result[1] += 0;
          result[2] += 0.9174008810572688;
          result[3] += 0.07158590308370046;
          result[4] += 0;
          result[5] += 0.007709251101321587;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9601769911504425;
          result[5] += 0.03982300884955752;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029829545454545456;
          result[4] += 0.032670454545454544;
          result[5] += 0.9375;
        } else {
          result[0] += 0.0676818950930626;
          result[1] += 0.01692047377326565;
          result[2] += 0.015228426395939087;
          result[3] += 0.3536379018612521;
          result[4] += 0.07952622673434856;
          result[5] += 0.467005076142132;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7279253409906676;
          result[1] += 0.0890165111270639;
          result[2] += 0.0007178750897343862;
          result[3] += 0.03015075376884422;
          result[4] += 0.11486001435750179;
          result[5] += 0.03732950466618808;
        } else {
          result[0] += 0.16075650118203308;
          result[1] += 0.01891252955082742;
          result[2] += 0.3238770685579196;
          result[3] += 0.27895981087470445;
          result[4] += 0.07801418439716311;
          result[5] += 0.13947990543735223;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0.9926289926289926;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007371007371007371;
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
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.4444444444444445;
          result[2] += 0.22222222222222224;
          result[3] += 0.11111111111111112;
          result[4] += 0.22222222222222224;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0.3157894736842105;
          result[4] += 0;
          result[5] += 0.5789473684210527;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7045454545454546;
          result[3] += 0.20454545454545456;
          result[4] += 0;
          result[5] += 0.09090909090909091;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
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
          result[2] += 0.45161290322580644;
          result[3] += 0.3548387096774194;
          result[4] += 0;
          result[5] += 0.1935483870967742;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.017595307917888565;
          result[1] += 0;
          result[2] += 0.8387096774193549;
          result[3] += 0.13196480938416422;
          result[4] += 0;
          result[5] += 0.011730205278592375;
        } else {
          result[0] += 0.0017889087656529517;
          result[1] += 0;
          result[2] += 0.9856887298747764;
          result[3] += 0.01073345259391771;
          result[4] += 0;
          result[5] += 0.0017889087656529517;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
          result[0] += 0.006802721088435374;
          result[1] += 0.03741496598639456;
          result[2] += 0.023809523809523808;
          result[3] += 0;
          result[4] += 0.8095238095238095;
          result[5] += 0.12244897959183673;
        } else {
          result[0] += 0.4838709677419355;
          result[1] += 0.053763440860215055;
          result[2] += 0.010752688172043012;
          result[3] += 0;
          result[4] += 0.3763440860215054;
          result[5] += 0.07526881720430108;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011273957158962795;
          result[3] += 0.06200676437429538;
          result[4] += 0.03494926719278467;
          result[5] += 0.9019165727170236;
        } else {
          result[0] += 0.0036101083032490976;
          result[1] += 0.01444043321299639;
          result[2] += 0.021660649819494584;
          result[3] += 0.4332129963898917;
          result[4] += 0.1263537906137184;
          result[5] += 0.4007220216606498;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.1746031746031746;
          result[2] += 0;
          result[3] += 0.12698412698412698;
          result[4] += 0.6825396825396826;
          result[5] += 0.015873015873015872;
        } else {
          result[0] += 0;
          result[1] += 0.9423503325942352;
          result[2] += 0;
          result[3] += 0.00443458980044346;
          result[4] += 0.03325942350332595;
          result[5] += 0.019955654101995568;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8669642857142857;
          result[1] += 0.030357142857142857;
          result[2] += 0.0008928571428571428;
          result[3] += 0.019642857142857142;
          result[4] += 0.06428571428571428;
          result[5] += 0.017857142857142856;
        } else {
          result[0] += 0.21481481481481482;
          result[1] += 0.019753086419753086;
          result[2] += 0.18765432098765433;
          result[3] += 0.20246913580246914;
          result[4] += 0.0962962962962963;
          result[5] += 0.27901234567901234;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.15;
          result[2] += 0.15;
          result[3] += 0;
          result[4] += 0.45;
          result[5] += 0.25;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.021739130434782608;
          result[2] += 0;
          result[3] += 0.10869565217391304;
          result[4] += 0;
          result[5] += 0.8260869565217391;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14388489208633093;
          result[3] += 0.6330935251798561;
          result[4] += 0;
          result[5] += 0.22302158273381295;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6415094339622641;
          result[3] += 0.22641509433962265;
          result[4] += 0;
          result[5] += 0.1320754716981132;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32432432432432434;
          result[3] += 0.13513513513513514;
          result[4] += 0.13513513513513514;
          result[5] += 0.40540540540540543;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
          result[0] += 0.3260869565217392;
          result[1] += 0.04347826086956522;
          result[2] += 0.4130434782608696;
          result[3] += 0.13043478260869568;
          result[4] += 0.02173913043478261;
          result[5] += 0.06521739130434784;
        } else {
          result[0] += 0.001129943502824859;
          result[1] += 0;
          result[2] += 0.9175141242937854;
          result[3] += 0.07118644067796612;
          result[4] += 0.002259887005649718;
          result[5] += 0.007909604519774013;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.0037174721189591076;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9888475836431226;
          result[5] += 0.007434944237918215;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.037037037037037035;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0.18518518518518517;
          result[5] += 0.7407407407407407;
        } else {
          result[0] += 0;
          result[1] += 0.4166666666666667;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.5;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.9038461538461539;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09615384615384616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0.7419354838709677;
          result[5] += 0.16129032258064516;
        } else {
          result[0] += 0.004911591355599214;
          result[1] += 0.0029469548133595285;
          result[2] += 0.003929273084479371;
          result[3] += 0.07858546168958742;
          result[4] += 0.04518664047151277;
          result[5] += 0.8644400785854617;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9574468085106383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0425531914893617;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06896551724137931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9310344827586207;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0.1952;
          result[1] += 0.016;
          result[2] += 0.0848;
          result[3] += 0.3936;
          result[4] += 0.0464;
          result[5] += 0.264;
        } else {
          result[0] += 0.6070234113712375;
          result[1] += 0.038461538461538464;
          result[2] += 0.11036789297658862;
          result[3] += 0.08528428093645485;
          result[4] += 0.07692307692307693;
          result[5] += 0.08193979933110368;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.9001584786053883;
          result[1] += 0.007923930269413631;
          result[2] += 0.03803486529318543;
          result[3] += 0.01743264659270999;
          result[4] += 0.012678288431061809;
          result[5] += 0.023771790808240892;
        } else {
          result[0] += 0.03956478733926805;
          result[1] += 0;
          result[2] += 0.847675568743818;
          result[3] += 0.08803165182987141;
          result[4] += 0;
          result[5] += 0.024727992087042534;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.059113300492610835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9359605911330049;
          result[5] += 0.0049261083743842365;
        } else {
          result[0] += 0.5217391304347826;
          result[1] += 0.004830917874396135;
          result[2] += 0.004830917874396135;
          result[3] += 0.004830917874396135;
          result[4] += 0.30917874396135264;
          result[5] += 0.15458937198067632;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.006417112299465241;
          result[2] += 0.0032085561497326204;
          result[3] += 0.05026737967914439;
          result[4] += 0.06310160427807486;
          result[5] += 0.8770053475935828;
        } else {
          result[0] += 0.008456659619450317;
          result[1] += 0.023255813953488372;
          result[2] += 0.03805496828752643;
          result[3] += 0.4820295983086681;
          result[4] += 0.06553911205073996;
          result[5] += 0.38266384778012685;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
          result[0] += 0.002164502164502165;
          result[1] += 0.9502164502164503;
          result[2] += 0;
          result[3] += 0.006493506493506495;
          result[4] += 0.041125541125541135;
          result[5] += 0;
        } else {
          result[0] += 0.02459016393442623;
          result[1] += 0.23770491803278687;
          result[2] += 0.02459016393442623;
          result[3] += 0.04918032786885246;
          result[4] += 0.5409836065573771;
          result[5] += 0.12295081967213115;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8378607809847198;
          result[1] += 0.019524617996604415;
          result[2] += 0.0050933786078098476;
          result[3] += 0.04159592529711375;
          result[4] += 0.056876061120543296;
          result[5] += 0.03904923599320883;
        } else {
          result[0] += 0.17777777777777778;
          result[1] += 0.05555555555555555;
          result[2] += 0.42777777777777776;
          result[3] += 0.17222222222222222;
          result[4] += 0.022222222222222223;
          result[5] += 0.14444444444444443;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9428571428571428;
          result[4] += 0;
          result[5] += 0.05714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8260869565217391;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
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
          result[3] += 0.28571428571428575;
          result[4] += 0;
          result[5] += 0.28571428571428575;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.007936507936507938;
          result[1] += 0;
          result[2] += 0.761904761904762;
          result[3] += 0.21825396825396828;
          result[4] += 0;
          result[5] += 0.011904761904761906;
        } else {
          result[0] += 0.011126564673157162;
          result[1] += 0;
          result[2] += 0.9415855354659249;
          result[3] += 0.04172461752433936;
          result[4] += 0;
          result[5] += 0.005563282336578581;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.034653465346534656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9504950495049505;
          result[5] += 0.01485148514851485;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          result[0] += 0.0011098779134295228;
          result[1] += 0;
          result[2] += 0.004439511653718091;
          result[3] += 0.06215316315205328;
          result[4] += 0.06326304106548279;
          result[5] += 0.8690344062153164;
        } else {
          result[0] += 0.12903225806451613;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3870967741935484;
          result[4] += 0.13261648745519714;
          result[5] += 0.35125448028673834;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9876237623762376;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012376237623762377;
          result[5] += 0;
        } else {
          result[0] += 0.027777777777777776;
          result[1] += 0.1875;
          result[2] += 0.09722222222222222;
          result[3] += 0.006944444444444444;
          result[4] += 0.5972222222222222;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8193445243804957;
          result[1] += 0.04636290967226219;
          result[2] += 0.002398081534772182;
          result[3] += 0.01838529176658673;
          result[4] += 0.07513988808952837;
          result[5] += 0.03836930455635491;
        } else {
          result[0] += 0.21782178217821782;
          result[1] += 0.0033003300330033004;
          result[2] += 0.16831683168316833;
          result[3] += 0.2871287128712871;
          result[4] += 0.04950495049504951;
          result[5] += 0.2739273927392739;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3111111111111111;
          result[3] += 0.08888888888888889;
          result[4] += 0.08888888888888889;
          result[5] += 0.5111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0.029850746268656716;
          result[2] += 0.03731343283582089;
          result[3] += 0.7014925373134329;
          result[4] += 0.029850746268656716;
          result[5] += 0.20149253731343283;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5971223021582734;
          result[3] += 0.33812949640287776;
          result[4] += 0.007194244604316548;
          result[5] += 0.057553956834532384;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.2916666666666667;
          result[1] += 0;
          result[2] += 0.3958333333333333;
          result[3] += 0.0625;
          result[4] += 0.125;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.013333333333333334;
          result[1] += 0;
          result[2] += 0.7066666666666667;
          result[3] += 0.23333333333333334;
          result[4] += 0;
          result[5] += 0.04666666666666667;
        } else {
          result[0] += 0.010101010101010102;
          result[1] += 0;
          result[2] += 0.9444444444444444;
          result[3] += 0.04040404040404041;
          result[4] += 0;
          result[5] += 0.005050505050505051;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.0044444444444444444;
          result[2] += 0.013333333333333334;
          result[3] += 0;
          result[4] += 0.9688888888888889;
          result[5] += 0.013333333333333334;
        } else {
          result[0] += 0.7261904761904762;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0;
          result[4] += 0.10714285714285714;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.01020408163265306;
          result[2] += 0.002551020408163265;
          result[3] += 0.09183673469387756;
          result[4] += 0.09098639455782313;
          result[5] += 0.8044217687074829;
        } else {
          result[0] += 0.0045871559633027525;
          result[1] += 0;
          result[2] += 0.009174311926605505;
          result[3] += 0.5779816513761468;
          result[4] += 0.01834862385321101;
          result[5] += 0.38990825688073394;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          result[0] += 0.002242152466367713;
          result[1] += 0.9708520179372198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.026905829596412557;
          result[5] += 0;
        } else {
          result[0] += 0.013333333333333334;
          result[1] += 0.41333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5733333333333334;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
          result[0] += 0.4553314121037464;
          result[1] += 0.053314121037463975;
          result[2] += 0.10230547550432277;
          result[3] += 0.1642651296829971;
          result[4] += 0.10230547550432277;
          result[5] += 0.12247838616714697;
        } else {
          result[0] += 0.8593023255813954;
          result[1] += 0.012790697674418606;
          result[2] += 0.045348837209302335;
          result[3] += 0.016279069767441864;
          result[4] += 0.05697674418604652;
          result[5] += 0.00930232558139535;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.90625;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.10256410256410256;
          result[2] += 0.1282051282051282;
          result[3] += 0.358974358974359;
          result[4] += 0.02564102564102564;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0.1;
          result[5] += 0.1;
        } else {
          result[0] += 0.05970149253731343;
          result[1] += 0;
          result[2] += 0.7761194029850746;
          result[3] += 0.08955223880597014;
          result[4] += 0.014925373134328358;
          result[5] += 0.05970149253731343;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5304347826086957;
          result[3] += 0.3565217391304348;
          result[4] += 0;
          result[5] += 0.11304347826086956;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8762886597938144;
          result[3] += 0.12371134020618557;
          result[4] += 0;
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
          result[1] += 0;
          result[2] += 0.9511111111111111;
          result[3] += 0.04888888888888889;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.011278195488721806;
          result[2] += 0.015037593984962407;
          result[3] += 0;
          result[4] += 0.9473684210526316;
          result[5] += 0.026315789473684213;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0316622691292876;
          result[4] += 0.05013192612137203;
          result[5] += 0.9182058047493403;
        } else {
          result[0] += 0.10291595197255575;
          result[1] += 0.00686106346483705;
          result[2] += 0.03773584905660377;
          result[3] += 0.31217838765008576;
          result[4] += 0.13379073756432247;
          result[5] += 0.4065180102915952;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9950124688279302;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004987531172069825;
          result[5] += 0;
        } else {
          result[0] += 0.016;
          result[1] += 0.376;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.008;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8280034572169404;
          result[1] += 0.036300777873811585;
          result[2] += 0.001728608470181504;
          result[3] += 0.02679343128781331;
          result[4] += 0.06741573033707865;
          result[5] += 0.03975799481417459;
        } else {
          result[0] += 0.12267657992565058;
          result[1] += 0;
          result[2] += 0.28624535315985133;
          result[3] += 0.3197026022304833;
          result[4] += 0.06691449814126395;
          result[5] += 0.20446096654275095;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0.15625;
          result[5] += 0.8125;
        } else {
          result[0] += 0.00980392156862745;
          result[1] += 0.0196078431372549;
          result[2] += 0.14705882352941177;
          result[3] += 0.6372549019607843;
          result[4] += 0.0392156862745098;
          result[5] += 0.14705882352941177;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.17777777777777778;
          result[4] += 0;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0.1062992125984252;
          result[1] += 0.027559055118110236;
          result[2] += 0.6811023622047244;
          result[3] += 0.1377952755905512;
          result[4] += 0;
          result[5] += 0.047244094488188976;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.712962962962963;
          result[3] += 0.2685185185185186;
          result[4] += 0;
          result[5] += 0.01851851851851852;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9571428571428572;
          result[3] += 0.04285714285714286;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9843260188087775;
          result[3] += 0.01567398119122257;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.008298755186721992;
          result[1] += 0.029045643153526972;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9087136929460581;
          result[5] += 0.05394190871369295;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0.5733333333333334;
          result[5] += 0.38666666666666666;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05017921146953405;
          result[4] += 0.03106332138590203;
          result[5] += 0.918757467144564;
        } else {
          result[0] += 0.21676300578034682;
          result[1] += 0.023121387283236993;
          result[2] += 0.046242774566473986;
          result[3] += 0.1907514450867052;
          result[4] += 0.15606936416184972;
          result[5] += 0.3670520231213873;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 0.9753694581280788;
          result[2] += 0;
          result[3] += 0.0024630541871921183;
          result[4] += 0.022167487684729065;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.34782608695652173;
          result[2] += 0;
          result[3] += 0.008695652173913044;
          result[4] += 0.591304347826087;
          result[5] += 0.05217391304347826;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8048993875765529;
          result[1] += 0.03499562554680665;
          result[2] += 0.005249343832020997;
          result[3] += 0.04111986001749781;
          result[4] += 0.06561679790026247;
          result[5] += 0.048118985126859144;
        } else {
          result[0] += 0.13653136531365315;
          result[1] += 0.02029520295202952;
          result[2] += 0.15498154981549817;
          result[3] += 0.3671586715867159;
          result[4] += 0.06088560885608856;
          result[5] += 0.26014760147601473;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.696969696969697;
          result[4] += 0;
          result[5] += 0.13636363636363635;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8780487804878049;
          result[3] += 0.12195121951219512;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7266187050359713;
          result[3] += 0.22302158273381295;
          result[4] += 0;
          result[5] += 0.050359712230215826;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.967741935483871;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.007853403141361256;
          result[1] += 0;
          result[2] += 0.9541884816753927;
          result[3] += 0.03664921465968586;
          result[4] += 0;
          result[5] += 0.0013089005235602095;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9902912621359223;
          result[5] += 0.009708737864077669;
        } else {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.26666666666666666;
          result[5] += 0.4666666666666667;
        }
      } else {
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.0034403669724770644;
          result[1] += 0.0034403669724770644;
          result[2] += 0;
          result[3] += 0.03669724770642202;
          result[4] += 0.0779816513761468;
          result[5] += 0.8784403669724771;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09944751381215469;
          result[3] += 0.292817679558011;
          result[4] += 0.0055248618784530384;
          result[5] += 0.6022099447513812;
        } else {
          result[0] += 0.02252252252252252;
          result[1] += 0.018018018018018018;
          result[2] += 0.036036036036036036;
          result[3] += 0.6306306306306306;
          result[4] += 0;
          result[5] += 0.2927927927927928;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.15151515151515152;
          result[2] += 0.010101010101010102;
          result[3] += 0;
          result[4] += 0.8080808080808081;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.004319654427645789;
          result[1] += 0.9568034557235421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.038876889848812095;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8275577557755776;
          result[1] += 0.02392739273927393;
          result[2] += 0.0008250825082508251;
          result[3] += 0.040429042904290426;
          result[4] += 0.08745874587458746;
          result[5] += 0.019801980198019802;
        } else {
          result[0] += 0.3;
          result[1] += 0.02727272727272727;
          result[2] += 0.19545454545454546;
          result[3] += 0.2863636363636364;
          result[4] += 0.05909090909090909;
          result[5] += 0.1318181818181818;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.12222222222222222;
          result[1] += 0.011111111111111112;
          result[2] += 0.044444444444444446;
          result[3] += 0.044444444444444446;
          result[4] += 0.24444444444444444;
          result[5] += 0.5333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.012987012987012988;
          result[2] += 0.29004329004329005;
          result[3] += 0.43722943722943725;
          result[4] += 0;
          result[5] += 0.2597402597402597;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0.025;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.3;
          result[4] += 0.025;
          result[5] += 0.05;
        } else {
          result[0] += 0.01482326111744584;
          result[1] += 0;
          result[2] += 0.9270239452679591;
          result[3] += 0.049030786773090085;
          result[4] += 0;
          result[5] += 0.009122006841505133;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0045871559633027525;
          result[2] += 0.0045871559633027525;
          result[3] += 0;
          result[4] += 0.9770642201834863;
          result[5] += 0.013761467889908258;
        } else {
          result[0] += 0.03896103896103897;
          result[1] += 0.05194805194805196;
          result[2] += 0;
          result[3] += 0.09090909090909093;
          result[4] += 0.5324675324675325;
          result[5] += 0.28571428571428575;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.03905447070914697;
          result[1] += 0.0020554984583761563;
          result[2] += 0.0020554984583761563;
          result[3] += 0.03186022610483042;
          result[4] += 0.065775950668037;
          result[5] += 0.8591983556012333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019933554817275746;
          result[3] += 0.5049833887043189;
          result[4] += 0;
          result[5] += 0.4750830564784053;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7209302325581395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.27906976744186046;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.07407407407407407;
          result[1] += 0.2328042328042328;
          result[2] += 0;
          result[3] += 0.015873015873015872;
          result[4] += 0.6507936507936508;
          result[5] += 0.026455026455026454;
        } else {
          result[0] += 0.6999351911860013;
          result[1] += 0.013609850939727802;
          result[2] += 0.07517822423849643;
          result[3] += 0.101749837977965;
          result[4] += 0.04860661049902787;
          result[5] += 0.0609202851587816;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0.20833333333333334;
          result[2] += 0.16666666666666666;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.5833333333333334;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4864864864864865;
          result[3] += 0.2972972972972973;
          result[4] += 0.04054054054054054;
          result[5] += 0.17567567567567569;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9154929577464789;
          result[3] += 0.028169014084507043;
          result[4] += 0;
          result[5] += 0.056338028169014086;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002421307506053269;
          result[1] += 0;
          result[2] += 0.9334140435835351;
          result[3] += 0.059322033898305086;
          result[4] += 0;
          result[5] += 0.004842615012106538;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011406844106463879;
          result[1] += 0.019011406844106463;
          result[2] += 0;
          result[3] += 0.0038022813688212928;
          result[4] += 0.9125475285171103;
          result[5] += 0.053231939163498096;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.03759398496240601;
          result[1] += 0.013963480128893663;
          result[2] += 0;
          result[3] += 0.027926960257787327;
          result[4] += 0.05477980665950591;
          result[5] += 0.8657357679914071;
        } else {
          result[0] += 0.00974025974025974;
          result[1] += 0;
          result[2] += 0.06168831168831169;
          result[3] += 0.4577922077922078;
          result[4] += 0.003246753246753247;
          result[5] += 0.4675324675324675;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9757174392935982;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.024282560706401765;
          result[5] += 0;
        } else {
          result[0] += 0.006666666666666667;
          result[1] += 0.22;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7733333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8314606741573034;
          result[1] += 0.015248796147672551;
          result[2] += 0.008025682182985553;
          result[3] += 0.028892455858747994;
          result[4] += 0.08186195826645265;
          result[5] += 0.03451043338683788;
        } else {
          result[0] += 0.25609756097560976;
          result[1] += 0.028455284552845527;
          result[2] += 0.17073170731707318;
          result[3] += 0.27235772357723576;
          result[4] += 0.06097560975609756;
          result[5] += 0.21138211382113822;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0.18309859154929578;
          result[4] += 0.09859154929577464;
          result[5] += 0.6901408450704225;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18120805369127516;
          result[3] += 0.6241610738255033;
          result[4] += 0;
          result[5] += 0.19463087248322147;
        } else {
          result[0] += 0;
          result[1] += 0.11594202898550725;
          result[2] += 0.6811594202898551;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.028985507246376812;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.36363636363636365;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          result[0] += 0.009584664536741214;
          result[1] += 0;
          result[2] += 0.8019169329073482;
          result[3] += 0.16613418530351437;
          result[4] += 0;
          result[5] += 0.022364217252396165;
        } else {
          result[0] += 0.0034542314335060447;
          result[1] += 0;
          result[2] += 0.9706390328151986;
          result[3] += 0.024179620034542316;
          result[4] += 0;
          result[5] += 0.0017271157167530224;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
          result[0] += 0.006042296072507553;
          result[1] += 0.0030211480362537764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8761329305135952;
          result[5] += 0.1148036253776435;
        } else {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.8403361344537815;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13445378151260504;
          result[5] += 0.025210084033613446;
        } else {
          result[0] += 0.011187607573149742;
          result[1] += 0.0025817555938037868;
          result[2] += 0.0017211703958691911;
          result[3] += 0.10843373493975904;
          result[4] += 0.06884681583476764;
          result[5] += 0.8072289156626506;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.36363636363636365;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976019184652278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002398081534772182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7446300715990454;
          result[1] += 0.04375497215592681;
          result[2] += 0.015115354017501989;
          result[3] += 0.056483691328560064;
          result[4] += 0.09069212410501193;
          result[5] += 0.049323786793953855;
        } else {
          result[0] += 0.11290322580645161;
          result[1] += 0.002304147465437788;
          result[2] += 0.19815668202764977;
          result[3] += 0.39631336405529954;
          result[4] += 0.06912442396313365;
          result[5] += 0.22119815668202766;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03636363636363636;
          result[3] += 0.8363636363636363;
          result[4] += 0;
          result[5] += 0.12727272727272726;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7037037037037037;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.07407407407407407;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34615384615384615;
          result[3] += 0.2692307692307692;
          result[4] += 0;
          result[5] += 0.38461538461538464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8174603174603174;
          result[3] += 0.15476190476190477;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01430615164520744;
          result[1] += 0;
          result[2] += 0.9427753934191703;
          result[3] += 0.04291845493562232;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          result[0] += 0.012500000000000002;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9750000000000001;
          result[5] += 0.012500000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.76;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24;
          result[5] += 0;
        } else {
          result[0] += 0.0033707865168539327;
          result[1] += 0.0022471910112359553;
          result[2] += 0.0011235955056179776;
          result[3] += 0.03932584269662921;
          result[4] += 0.06404494382022471;
          result[5] += 0.8898876404494382;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.08444444444444445;
          result[1] += 0;
          result[2] += 0.0044444444444444444;
          result[3] += 0.18222222222222223;
          result[4] += 0.06666666666666667;
          result[5] += 0.6622222222222223;
        } else {
          result[0] += 0.01675977653631285;
          result[1] += 0;
          result[2] += 0.00558659217877095;
          result[3] += 0.6927374301675978;
          result[4] += 0.03910614525139665;
          result[5] += 0.24581005586592178;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9892761394101877;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010723860589812333;
          result[5] += 0;
        } else {
          result[0] += 0.06896551724137931;
          result[1] += 0.3310344827586207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5793103448275863;
          result[5] += 0.020689655172413793;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8383128295254834;
          result[1] += 0.05799648506151143;
          result[2] += 0.0070298769771529;
          result[3] += 0.019332161687170477;
          result[4] += 0.06151142355008788;
          result[5] += 0.01581722319859403;
        } else {
          result[0] += 0.29959514170040485;
          result[1] += 0.004048582995951417;
          result[2] += 0.1659919028340081;
          result[3] += 0.24696356275303644;
          result[4] += 0.08502024291497975;
          result[5] += 0.19838056680161945;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.044585987261146494;
          result[2] += 0.01910828025477707;
          result[3] += 0.4840764331210191;
          result[4] += 0.03821656050955414;
          result[5] += 0.4140127388535032;
        } else {
          result[0] += 0.09836065573770492;
          result[1] += 0.04918032786885246;
          result[2] += 0.5409836065573771;
          result[3] += 0.11475409836065574;
          result[4] += 0.06557377049180328;
          result[5] += 0.13114754098360656;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.037142857142857144;
          result[1] += 0.008571428571428572;
          result[2] += 0.6971428571428572;
          result[3] += 0.22;
          result[4] += 0;
          result[5] += 0.037142857142857144;
        } else {
          result[0] += 0.04258064516129032;
          result[1] += 0;
          result[2] += 0.9148387096774193;
          result[3] += 0.03483870967741935;
          result[4] += 0.0012903225806451613;
          result[5] += 0.0064516129032258064;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004975124378109453;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9950248756218906;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.5;
          result[5] += 0.4090909090909091;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002793296089385475;
          result[3] += 0.013966480446927373;
          result[4] += 0.04329608938547486;
          result[5] += 0.9399441340782123;
        } else {
          result[0] += 0.09350649350649351;
          result[1] += 0.007792207792207792;
          result[2] += 0.03116883116883117;
          result[3] += 0.16623376623376623;
          result[4] += 0.12207792207792208;
          result[5] += 0.5792207792207792;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016129032258064516;
          result[3] += 0.22580645161290322;
          result[4] += 0.04838709677419355;
          result[5] += 0.7096774193548387;
        } else {
          result[0] += 0.03208556149732621;
          result[1] += 0.0053475935828877;
          result[2] += 0.08021390374331551;
          result[3] += 0.7433155080213903;
          result[4] += 0;
          result[5] += 0.13903743315508021;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
          result[0] += 0.011111111111111112;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8444444444444444;
          result[5] += 0.011111111111111112;
        } else {
          result[0] += 0;
          result[1] += 0.9552572706935123;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0447427293064877;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
          result[0] += 0.16071428571428573;
          result[1] += 0.03571428571428571;
          result[2] += 0.008928571428571428;
          result[3] += 0.22321428571428573;
          result[4] += 0.16964285714285715;
          result[5] += 0.4017857142857143;
        } else {
          result[0] += 0.8315958299919806;
          result[1] += 0.022453889334402562;
          result[2] += 0.029671210906174812;
          result[3] += 0.03608660785886126;
          result[4] += 0.059342421812349624;
          result[5] += 0.02085004009623095;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.1;
          result[1] += 0.04666666666666667;
          result[2] += 0.12;
          result[3] += 0.18;
          result[4] += 0.14666666666666667;
          result[5] += 0.4066666666666667;
        } else {
          result[0] += 0.009345794392523366;
          result[1] += 0;
          result[2] += 0.5856697819314642;
          result[3] += 0.3208722741433022;
          result[4] += 0;
          result[5] += 0.08411214953271029;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3157894736842105;
          result[3] += 0.15789473684210525;
          result[4] += 0.10526315789473684;
          result[5] += 0.42105263157894735;
        } else {
          result[0] += 0.008254716981132075;
          result[1] += 0;
          result[2] += 0.9209905660377359;
          result[3] += 0.060141509433962265;
          result[4] += 0;
          result[5] += 0.01061320754716981;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.008620689655172414;
          result[1] += 0.1206896551724138;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8577586206896551;
          result[5] += 0.01293103448275862;
        } else {
          result[0] += 0.4724409448818898;
          result[1] += 0.03937007874015749;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2834645669291339;
          result[5] += 0.20472440944881892;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.0081799591002045;
          result[2] += 0;
          result[3] += 0.053169734151329244;
          result[4] += 0.05828220858895705;
          result[5] += 0.8803680981595092;
        } else {
          result[0] += 0.016736401673640166;
          result[1] += 0.0041841004184100415;
          result[2] += 0.03347280334728033;
          result[3] += 0.6485355648535565;
          result[4] += 0.008368200836820083;
          result[5] += 0.28870292887029286;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 0.9874371859296482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01256281407035176;
          result[5] += 0;
        } else {
          result[0] += 0.012048192771084338;
          result[1] += 0.46987951807228917;
          result[2] += 0;
          result[3] += 0.10843373493975904;
          result[4] += 0.39759036144578314;
          result[5] += 0.012048192771084338;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3420074349442379;
          result[1] += 0.011152416356877323;
          result[2] += 0.09851301115241635;
          result[3] += 0.2342007434944238;
          result[4] += 0.11524163568773234;
          result[5] += 0.19888475836431227;
        } else {
          result[0] += 0.7875874125874126;
          result[1] += 0.04632867132867133;
          result[2] += 0.06555944055944056;
          result[3] += 0.013986013986013986;
          result[4] += 0.06818181818181818;
          result[5] += 0.018356643356643356;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0.6730769230769231;
          result[4] += 0;
          result[5] += 0.21153846153846154;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9230769230769231;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0.8666666666666667;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0.3333333333333333;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0.005302226935312832;
          result[1] += 0;
          result[2] += 0.9225874867444327;
          result[3] += 0.0689289501590668;
          result[4] += 0;
          result[5] += 0.003181336161187699;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.008888888888888889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9511111111111111;
          result[5] += 0.04;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.036684782608695655;
          result[4] += 0.03804347826086957;
          result[5] += 0.9252717391304348;
        } else {
          result[0] += 0.04607046070460705;
          result[1] += 0.01084010840108401;
          result[2] += 0.02710027100271003;
          result[3] += 0.22493224932249323;
          result[4] += 0.11653116531165311;
          result[5] += 0.5745257452574526;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9826302729528535;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017369727047146403;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7516728624535316;
          result[1] += 0.0275092936802974;
          result[2] += 0.007434944237918215;
          result[3] += 0.031226765799256505;
          result[4] += 0.15092936802973977;
          result[5] += 0.031226765799256505;
        } else {
          result[0] += 0.2296137339055794;
          result[1] += 0.04291845493562232;
          result[2] += 0.12875536480686695;
          result[3] += 0.3197424892703863;
          result[4] += 0.0536480686695279;
          result[5] += 0.22532188841201717;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021739130434782608;
          result[3] += 0.08695652173913043;
          result[4] += 0.10869565217391304;
          result[5] += 0.782608695652174;
        } else {
          result[0] += 0.08;
          result[1] += 0.01;
          result[2] += 0.1;
          result[3] += 0.6;
          result[4] += 0.02;
          result[5] += 0.19;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.4285714285714286;
          result[1] += 0.1785714285714286;
          result[2] += 0.12500000000000003;
          result[3] += 0.07142857142857144;
          result[4] += 0;
          result[5] += 0.19642857142857145;
        } else {
          result[0] += 0.005555555555555556;
          result[1] += 0;
          result[2] += 0.7194444444444444;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.05277777777777778;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.4666666666666667;
          result[3] += 0.2;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0014771048744460858;
          result[1] += 0;
          result[2] += 0.9689807976366323;
          result[3] += 0.028064992614475627;
          result[4] += 0;
          result[5] += 0.0014771048744460858;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        } else {
          result[0] += 0.02888086642599278;
          result[1] += 0.02888086642599278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.927797833935018;
          result[5] += 0.01444043321299639;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.9830508474576272;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01694915254237288;
          result[5] += 0;
        } else {
          result[0] += 0.128;
          result[1] += 0.024;
          result[2] += 0;
          result[3] += 0.048;
          result[4] += 0.488;
          result[5] += 0.312;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.06060606060606061;
          result[2] += 0;
          result[3] += 0.07575757575757576;
          result[4] += 0.6666666666666666;
          result[5] += 0.19696969696969696;
        } else {
          result[0] += 0.013651877133105802;
          result[1] += 0.0011376564277588168;
          result[2] += 0;
          result[3] += 0.040955631399317405;
          result[4] += 0.053469852104664393;
          result[5] += 0.8907849829351536;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.045317220543806644;
          result[1] += 0.006042296072507553;
          result[2] += 0.01812688821752266;
          result[3] += 0.5196374622356495;
          result[4] += 0.0030211480362537764;
          result[5] += 0.4078549848942598;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0.0945945945945946;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.40540540540540543;
          result[5] += 0;
        } else {
          result[0] += 0.0022271714922048997;
          result[1] += 0.9910913140311804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0066815144766146995;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.9103726082578046;
          result[1] += 0.013091641490433032;
          result[2] += 0.012084592145015106;
          result[3] += 0.01812688821752266;
          result[4] += 0.04028197381671702;
          result[5] += 0.006042296072507553;
        } else {
          result[0] += 0.3631284916201118;
          result[1] += 0.011173184357541902;
          result[2] += 0.12849162011173187;
          result[3] += 0.26815642458100564;
          result[4] += 0.033519553072625705;
          result[5] += 0.19553072625698326;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0.004347826086956522;
          result[1] += 0.008695652173913044;
          result[2] += 0.20869565217391303;
          result[3] += 0.47391304347826085;
          result[4] += 0.06521739130434782;
          result[5] += 0.2391304347826087;
        } else {
          result[0] += 0;
          result[1] += 0.007633587786259542;
          result[2] += 0.6793893129770993;
          result[3] += 0.19083969465648856;
          result[4] += 0.007633587786259542;
          result[5] += 0.11450381679389313;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.06349206349206349;
          result[2] += 0.3492063492063492;
          result[3] += 0.015873015873015872;
          result[4] += 0.015873015873015872;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.018327605956471937;
          result[1] += 0;
          result[2] += 0.8820160366552119;
          result[3] += 0.08934707903780069;
          result[4] += 0.002290950744558992;
          result[5] += 0.008018327605956471;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          result[0] += 0.007380073800738007;
          result[1] += 0.07011070110701106;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8856088560885609;
          result[5] += 0.03690036900369004;
        } else {
          result[0] += 0.6629213483146068;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022471910112359553;
          result[4] += 0.1460674157303371;
          result[5] += 0.16853932584269665;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0.03409090909090909;
          result[3] += 0.011363636363636364;
          result[4] += 0.7613636363636364;
          result[5] += 0.17045454545454544;
        } else {
          result[0] += 0.005628517823639775;
          result[1] += 0.010318949343339587;
          result[2] += 0.013133208255159476;
          result[3] += 0.09380863039399624;
          result[4] += 0.039399624765478425;
          result[5] += 0.8377110694183865;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0.008695652173913044;
          result[1] += 0.33043478260869563;
          result[2] += 0.008695652173913044;
          result[3] += 0.12173913043478261;
          result[4] += 0.4956521739130435;
          result[5] += 0.034782608695652174;
        } else {
          result[0] += 0.0022371364653243847;
          result[1] += 0.9821029082774049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015659955257270694;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0.2612244897959184;
          result[1] += 0.0163265306122449;
          result[2] += 0.05714285714285714;
          result[3] += 0.37142857142857144;
          result[4] += 0.06938775510204082;
          result[5] += 0.22448979591836735;
        } else {
          result[0] += 0.8542246982358404;
          result[1] += 0.018570102135561744;
          result[2] += 0.0510677808727948;
          result[3] += 0.03064066852367688;
          result[4] += 0.039925719591457756;
          result[5] += 0.005571030640668524;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03389830508474576;
          result[3] += 0.11864406779661017;
          result[4] += 0.1016949152542373;
          result[5] += 0.7457627118644068;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.7692307692307693;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0979381443298969;
          result[3] += 0.7164948453608248;
          result[4] += 0;
          result[5] += 0.18556701030927836;
        } else {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0.5538461538461539;
          result[3] += 0.3153846153846154;
          result[4] += 0.023076923076923078;
          result[5] += 0.09230769230769231;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20588235294117646;
          result[3] += 0.20588235294117646;
          result[4] += 0.17647058823529413;
          result[5] += 0.4117647058823529;
        } else {
          result[0] += 0.7692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5365853658536586;
          result[3] += 0.21951219512195122;
          result[4] += 0;
          result[5] += 0.24390243902439024;
        } else {
          result[0] += 0.0023752969121140144;
          result[1] += 0;
          result[2] += 0.9346793349168646;
          result[3] += 0.05463182897862233;
          result[4] += 0;
          result[5] += 0.00831353919239905;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)119) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9696969696969697;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.04166666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666667;
          result[5] += 0.04166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.07317073170731707;
          result[2] += 0;
          result[3] += 0.12195121951219512;
          result[4] += 0.2926829268292683;
          result[5] += 0.5121951219512195;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.043478260869565216;
          result[4] += 0.4782608695652174;
          result[5] += 0.4782608695652174;
        } else {
          result[0] += 0.0014705882352941176;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027941176470588237;
          result[4] += 0.008823529411764706;
          result[5] += 0.961764705882353;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          result[0] += 0.9186046511627907;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08139534883720931;
          result[5] += 0;
        } else {
          result[0] += 0.007473841554559043;
          result[1] += 0.01046337817638266;
          result[2] += 0.01943198804185351;
          result[3] += 0.3572496263079223;
          result[4] += 0.08819133034379671;
          result[5] += 0.5171898355754858;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9630484988452656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03695150115473441;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.03333333333333333;
          result[4] += 0.6333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8671268334771355;
          result[1] += 0.03882657463330457;
          result[2] += 0.007765314926660914;
          result[3] += 0.014667817083692839;
          result[4] += 0.059534081104400345;
          result[5] += 0.012079378774805867;
        } else {
          result[0] += 0.25;
          result[1] += 0.021739130434782608;
          result[2] += 0.07065217391304347;
          result[3] += 0.24456521739130435;
          result[4] += 0.10326086956521739;
          result[5] += 0.30978260869565216;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.03260869565217391;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.5108695652173914;
          result[4] += 0.03260869565217391;
          result[5] += 0.20652173913043478;
        } else {
          result[0] += 0.06388888888888888;
          result[1] += 0;
          result[2] += 0.6944444444444444;
          result[3] += 0.18611111111111112;
          result[4] += 0.002777777777777778;
          result[5] += 0.05277777777777778;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0425531914893617;
          result[1] += 0.02127659574468085;
          result[2] += 0.7021276595744681;
          result[3] += 0.02127659574468085;
          result[4] += 0;
          result[5] += 0.2127659574468085;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9672131147540983;
          result[3] += 0.03278688524590164;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.006600660066006601;
          result[1] += 0.0231023102310231;
          result[2] += 0.013201320132013201;
          result[3] += 0.0462046204620462;
          result[4] += 0.8052805280528053;
          result[5] += 0.10561056105610561;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03183791606367583;
          result[4] += 0.03328509406657019;
          result[5] += 0.934876989869754;
        } else {
          result[0] += 0.11607142857142858;
          result[1] += 0.004464285714285714;
          result[2] += 0.04241071428571429;
          result[3] += 0.28348214285714285;
          result[4] += 0.11160714285714286;
          result[5] += 0.4419642857142857;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          result[0] += 0.05333333333333334;
          result[1] += 0.14666666666666667;
          result[2] += 0.04;
          result[3] += 0;
          result[4] += 0.76;
          result[5] += 0;
        } else {
          result[0] += 0.006329113924050633;
          result[1] += 0.9535864978902954;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04008438818565401;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8435430463576159;
          result[1] += 0.0347682119205298;
          result[2] += 0;
          result[3] += 0.027317880794701987;
          result[4] += 0.052980132450331126;
          result[5] += 0.041390728476821195;
        } else {
          result[0] += 0.24045801526717558;
          result[1] += 0.026717557251908396;
          result[2] += 0.17557251908396945;
          result[3] += 0.2633587786259542;
          result[4] += 0.11450381679389313;
          result[5] += 0.17938931297709923;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030612244897959183;
          result[3] += 0.29591836734693877;
          result[4] += 0.09183673469387756;
          result[5] += 0.5816326530612245;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.6984126984126984;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.01834862385321101;
          result[2] += 0.27522935779816515;
          result[3] += 0.42201834862385323;
          result[4] += 0.01834862385321101;
          result[5] += 0.26605504587155965;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0;
          result[2] += 0.7835820895522388;
          result[3] += 0.11940298507462686;
          result[4] += 0;
          result[5] += 0.06716417910447761;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.07792207792207792;
          result[1] += 0;
          result[2] += 0.5064935064935064;
          result[3] += 0.23376623376623376;
          result[4] += 0.03896103896103896;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.5000000000000001;
          result[1] += 0.10714285714285715;
          result[2] += 0.3571428571428572;
          result[3] += 0;
          result[4] += 0.03571428571428572;
          result[5] += 0;
        } else {
          result[0] += 0.003745318352059925;
          result[1] += 0;
          result[2] += 0.9400749063670412;
          result[3] += 0.05368289637952559;
          result[4] += 0;
          result[5] += 0.0024968789013732834;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.009803921568627453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9803921568627452;
          result[5] += 0.009803921568627453;
        } else {
          result[0] += 0;
          result[1] += 0.03703703703703704;
          result[2] += 0.14814814814814817;
          result[3] += 0.1851851851851852;
          result[4] += 0.40740740740740744;
          result[5] += 0.22222222222222224;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.001218026796589525;
          result[2] += 0.001218026796589525;
          result[3] += 0.05237515225334957;
          result[4] += 0.04506699147381242;
          result[5] += 0.9001218026796589;
        } else {
          result[0] += 0.0851063829787234;
          result[1] += 0.007978723404255319;
          result[2] += 0.007978723404255319;
          result[3] += 0.3324468085106383;
          result[4] += 0.11436170212765957;
          result[5] += 0.4521276595744681;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.16883116883116883;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.012987012987012988;
        } else {
          result[0] += 0.00851063829787234;
          result[1] += 0.9531914893617022;
          result[2] += 0;
          result[3] += 0.00425531914893617;
          result[4] += 0.03404255319148936;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8399053627760253;
          result[1] += 0.03075709779179811;
          result[2] += 0.0055205047318612;
          result[3] += 0.0220820189274448;
          result[4] += 0.07570977917981074;
          result[5] += 0.02602523659305994;
        } else {
          result[0] += 0.20300751879699247;
          result[1] += 0.015037593984962405;
          result[2] += 0.22180451127819548;
          result[3] += 0.2556390977443609;
          result[4] += 0.03383458646616541;
          result[5] += 0.2706766917293233;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015873015873015872;
          result[3] += 0.14285714285714285;
          result[4] += 0.047619047619047616;
          result[5] += 0.7936507936507936;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.041025641025641026;
          result[2] += 0.15384615384615385;
          result[3] += 0.5076923076923077;
          result[4] += 0.035897435897435895;
          result[5] += 0.26153846153846155;
        } else {
          result[0] += 0;
          result[1] += 0.22916666666666666;
          result[2] += 0.6458333333333334;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6794871794871795;
          result[3] += 0.28205128205128205;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.41025641025641024;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0.011507479861910242;
          result[1] += 0;
          result[2] += 0.9148446490218642;
          result[3] += 0.07364787111622555;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.004694835680751174;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9859154929577465;
          result[5] += 0.009389671361502348;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.6190476190476191;
          result[5] += 0.2619047619047619;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.3076923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.5384615384615384;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014044943820224719;
          result[3] += 0.019662921348314606;
          result[4] += 0.016853932584269662;
          result[5] += 0.9620786516853933;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8409090909090909;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13636363636363635;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0.0017605633802816902;
          result[1] += 0.0035211267605633804;
          result[2] += 0.01232394366197183;
          result[3] += 0.31514084507042256;
          result[4] += 0.1056338028169014;
          result[5] += 0.5616197183098591;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0.00516795865633075;
          result[1] += 0.9819121447028424;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012919896640826873;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.78419452887538;
          result[1] += 0.05927051671732523;
          result[2] += 0;
          result[3] += 0.011398176291793313;
          result[4] += 0.12613981762917933;
          result[5] += 0.018996960486322188;
        } else {
          result[0] += 0.2682926829268293;
          result[1] += 0.04878048780487805;
          result[2] += 0.10104529616724739;
          result[3] += 0.2508710801393728;
          result[4] += 0.05574912891986063;
          result[5] += 0.27526132404181186;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.009259259259259259;
          result[2] += 0.25925925925925924;
          result[3] += 0.48148148148148145;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.08000000000000002;
          result[1] += 0;
          result[2] += 0.7018181818181819;
          result[3] += 0.20000000000000004;
          result[4] += 0.003636363636363637;
          result[5] += 0.014545454545454547;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.09523809523809523;
          result[1] += 0;
          result[2] += 0.5238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.38095238095238093;
        } else {
          result[0] += 0.007194244604316547;
          result[1] += 0;
          result[2] += 0.9525179856115108;
          result[3] += 0.03597122302158273;
          result[4] += 0;
          result[5] += 0.004316546762589928;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.012658227848101266;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9409282700421941;
          result[5] += 0.046413502109704644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029411764705882353;
          result[4] += 0.8529411764705882;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.005398110661268556;
          result[1] += 0;
          result[2] += 0.022941970310391364;
          result[3] += 0.02834008097165992;
          result[4] += 0.022941970310391364;
          result[5] += 0.9203778677462888;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          result[0] += 0.9047619047619048;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09523809523809523;
          result[5] += 0;
        } else {
          result[0] += 0.01680672268907563;
          result[1] += 0.02689075630252101;
          result[2] += 0.01680672268907563;
          result[3] += 0.3697478991596639;
          result[4] += 0.12436974789915967;
          result[5] += 0.44537815126050423;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.5555555555555556;
          result[5] += 0;
        } else {
          result[0] += 0.004618937644341801;
          result[1] += 0.976905311778291;
          result[2] += 0;
          result[3] += 0.0023094688221709007;
          result[4] += 0.016166281755196306;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0.1680327868852459;
          result[1] += 0.004098360655737705;
          result[2] += 0.06967213114754098;
          result[3] += 0.19262295081967212;
          result[4] += 0.18442622950819673;
          result[5] += 0.38114754098360654;
        } else {
          result[0] += 0.8190709046454768;
          result[1] += 0.03504482477587612;
          result[2] += 0.027709861450692746;
          result[3] += 0.026079869600651995;
          result[4] += 0.08068459657701711;
          result[5] += 0.011409942950285249;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09375;
          result[3] += 0.6041666666666666;
          result[4] += 0.041666666666666664;
          result[5] += 0.2604166666666667;
        } else {
          result[0] += 0.006172839506172839;
          result[1] += 0.006172839506172839;
          result[2] += 0.5185185185185185;
          result[3] += 0.3148148148148148;
          result[4] += 0.024691358024691357;
          result[5] += 0.12962962962962962;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.6206896551724138;
          result[1] += 0.034482758620689655;
          result[2] += 0.06896551724137931;
          result[3] += 0.034482758620689655;
          result[4] += 0.2413793103448276;
          result[5] += 0;
        } else {
          result[0] += 0.005364806866952789;
          result[1] += 0;
          result[2] += 0.892703862660944;
          result[3] += 0.08905579399141629;
          result[4] += 0.005364806866952789;
          result[5] += 0.007510729613733904;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9823788546255506;
          result[5] += 0.01762114537444934;
        } else {
          result[0] += 0.0684931506849315;
          result[1] += 0;
          result[2] += 0.0684931506849315;
          result[3] += 0.0136986301369863;
          result[4] += 0.3972602739726027;
          result[5] += 0.4520547945205479;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021037868162692847;
          result[4] += 0.033660589060308554;
          result[5] += 0.9453015427769986;
        } else {
          result[0] += 0.0661764705882353;
          result[1] += 0.001838235294117647;
          result[2] += 0.007352941176470588;
          result[3] += 0.31985294117647056;
          result[4] += 0.08455882352941177;
          result[5] += 0.5202205882352942;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9929906542056075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007009345794392523;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7639846743295019;
          result[1] += 0.05363984674329502;
          result[2] += 0;
          result[3] += 0.01992337164750958;
          result[4] += 0.1524904214559387;
          result[5] += 0.00996168582375479;
        } else {
          result[0] += 0.19886363636363635;
          result[1] += 0.019886363636363636;
          result[2] += 0.17613636363636365;
          result[3] += 0.3352272727272727;
          result[4] += 0.028409090909090908;
          result[5] += 0.24147727272727273;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09302325581395349;
          result[3] += 0.6744186046511628;
          result[4] += 0;
          result[5] += 0.23255813953488372;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4230769230769231;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.4230769230769231;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.5227272727272727;
          result[3] += 0.38636363636363635;
          result[4] += 0;
          result[5] += 0.06818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8405797101449276;
          result[3] += 0.11594202898550726;
          result[4] += 0;
          result[5] += 0.04347826086956522;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30000000000000004;
          result[3] += 0.6000000000000001;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.46153846153846156;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0044444444444444444;
          result[1] += 0;
          result[2] += 0.9277777777777778;
          result[3] += 0.05333333333333334;
          result[4] += 0.0011111111111111111;
          result[5] += 0.013333333333333334;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7560975609756098;
          result[5] += 0.1951219512195122;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23529411764705882;
          result[5] += 0.7647058823529411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0.125;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
          result[0] += 0.967741935483871;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03225806451612903;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0011494252873563218;
          result[2] += 0.0022988505747126436;
          result[3] += 0.041379310344827586;
          result[4] += 0.03908045977011494;
          result[5] += 0.9160919540229885;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.053763440860215055;
          result[3] += 0.07526881720430108;
          result[4] += 0.08602150537634409;
          result[5] += 0.7849462365591398;
        } else {
          result[0] += 0.05341246290801187;
          result[1] += 0.002967359050445104;
          result[2] += 0.011869436201780416;
          result[3] += 0.5489614243323442;
          result[4] += 0.04451038575667656;
          result[5] += 0.33827893175074186;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9976905311778291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023094688221709007;
          result[5] += 0;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0.32857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6071428571428571;
          result[5] += 0.007142857142857143;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.07096774193548387;
          result[1] += 0.45161290322580644;
          result[2] += 0;
          result[3] += 0.025806451612903226;
          result[4] += 0.41935483870967744;
          result[5] += 0.03225806451612903;
        } else {
          result[0] += 0.7908396946564885;
          result[1] += 0.0053435114503816794;
          result[2] += 0.022900763358778626;
          result[3] += 0.08549618320610687;
          result[4] += 0.04198473282442748;
          result[5] += 0.05343511450381679;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04838709677419355;
          result[3] += 0.532258064516129;
          result[4] += 0;
          result[5] += 0.41935483870967744;
        } else {
          result[0] += 0.005263157894736842;
          result[1] += 0;
          result[2] += 0.5052631578947369;
          result[3] += 0.3894736842105263;
          result[4] += 0.010526315789473684;
          result[5] += 0.08947368421052632;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.6875;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.01958650707290533;
          result[1] += 0.004352557127312296;
          result[2] += 0.9064200217627857;
          result[3] += 0.0544069640914037;
          result[4] += 0;
          result[5] += 0.015233949945593036;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
          result[0] += 0.009230769230769232;
          result[1] += 0.015384615384615385;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9015384615384615;
          result[5] += 0.07384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0.9473684210526315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.06538049303322616;
          result[1] += 0.006430868167202572;
          result[2] += 0;
          result[3] += 0.03965702036441586;
          result[4] += 0.08467309753483387;
          result[5] += 0.8038585209003215;
        } else {
          result[0] += 0.030690537084398978;
          result[1] += 0.0076726342710997444;
          result[2] += 0.07161125319693094;
          result[3] += 0.5089514066496164;
          result[4] += 0;
          result[5] += 0.38107416879795397;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.15254237288135594;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.847457627118644;
          result[5] += 0;
        } else {
          result[0] += 0.0021834061135371182;
          result[1] += 0.9541484716157206;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04148471615720525;
          result[5] += 0.0021834061135371182;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8380112269446672;
          result[1] += 0.03368083400160385;
          result[2] += 0.012028869286287089;
          result[3] += 0.026463512429831595;
          result[4] += 0.06495589414595028;
          result[5] += 0.024859663191659984;
        } else {
          result[0] += 0.17220543806646524;
          result[1] += 0;
          result[2] += 0.2779456193353474;
          result[3] += 0.27190332326283984;
          result[4] += 0.036253776435045314;
          result[5] += 0.24169184290030207;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021739130434782608;
          result[3] += 0.06521739130434782;
          result[4] += 0.06521739130434782;
          result[5] += 0.8478260869565217;
        } else {
          result[0] += 0;
          result[1] += 0.13043478260869568;
          result[2] += 0.23913043478260873;
          result[3] += 0.26086956521739135;
          result[4] += 0.04347826086956522;
          result[5] += 0.3260869565217392;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.61;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0.11;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.07692307692307693;
          result[2] += 0.5897435897435898;
          result[3] += 0.23076923076923078;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          result[0] += 0.5454545454545454;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007547169811320755;
          result[1] += 0;
          result[2] += 0.9308176100628931;
          result[3] += 0.05911949685534591;
          result[4] += 0;
          result[5] += 0.0025157232704402514;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.005154639175257732;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9845360824742269;
          result[5] += 0.010309278350515464;
        } else {
          result[0] += 0.44366197183098594;
          result[1] += 0.035211267605633804;
          result[2] += 0.007042253521126761;
          result[3] += 0;
          result[4] += 0.4154929577464789;
          result[5] += 0.09859154929577464;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0019249278152069298;
          result[1] += 0.01828681424446583;
          result[2] += 0.0009624639076034649;
          result[3] += 0.06737247353224254;
          result[4] += 0.08180943214629452;
          result[5] += 0.8296438883541867;
        } else {
          result[0] += 0.03793103448275862;
          result[1] += 0;
          result[2] += 0.06206896551724138;
          result[3] += 0.5551724137931034;
          result[4] += 0.006896551724137931;
          result[5] += 0.33793103448275863;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7444698703279939;
          result[1] += 0.06483600305110603;
          result[2] += 0.0007627765064836003;
          result[3] += 0.016781083142639208;
          result[4] += 0.14111365369946605;
          result[5] += 0.032036613272311214;
        } else {
          result[0] += 0.20867208672086723;
          result[1] += 0.00813008130081301;
          result[2] += 0.26829268292682934;
          result[3] += 0.29268292682926833;
          result[4] += 0.03523035230352304;
          result[5] += 0.1869918699186992;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.9858156028368794;
          result[2] += 0.004728132387706856;
          result[3] += 0.002364066193853428;
          result[4] += 0.0070921985815602835;
          result[5] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.33070866141732286;
          result[3] += 0.5039370078740157;
          result[4] += 0;
          result[5] += 0.16535433070866143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7934782608695652;
          result[3] += 0.15217391304347827;
          result[4] += 0;
          result[5] += 0.05434782608695652;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0050062578222778474;
          result[1] += 0;
          result[2] += 0.9249061326658323;
          result[3] += 0.0625782227784731;
          result[4] += 0;
          result[5] += 0.007509386733416771;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
          result[0] += 0.0043859649122807015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9692982456140351;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.15;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0.1;
        } else {
          result[0] += 0.9081632653061225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09183673469387756;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0010471204188481676;
          result[3] += 0.049214659685863874;
          result[4] += 0.06492146596858639;
          result[5] += 0.8848167539267016;
        } else {
          result[0] += 0.01805869074492099;
          result[1] += 0.011286681715575621;
          result[2] += 0.01805869074492099;
          result[3] += 0.42437923250564336;
          result[4] += 0.06320541760722348;
          result[5] += 0.4650112866817156;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7846153846153846;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0.9927184466019418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024271844660194173;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8545135845749343;
          result[1] += 0.016652059596844872;
          result[2] += 0.0035056967572304996;
          result[3] += 0.029798422436459245;
          result[4] += 0.07975460122699386;
          result[5] += 0.015775635407537247;
        } else {
          result[0] += 0.24761904761904763;
          result[1] += 0.22857142857142856;
          result[2] += 0.21904761904761905;
          result[3] += 0.0761904761904762;
          result[4] += 0.11428571428571428;
          result[5] += 0.11428571428571428;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.225;
          result[3] += 0.425;
          result[4] += 0.0125;
          result[5] += 0.3375;
        } else {
          result[0] += 0.039473684210526314;
          result[1] += 0.02631578947368421;
          result[2] += 0.631578947368421;
          result[3] += 0.18421052631578946;
          result[4] += 0.03289473684210526;
          result[5] += 0.08552631578947369;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.23529411764705882;
          result[2] += 0.17647058823529413;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0.03857566765578635;
          result[1] += 0;
          result[2] += 0.8822947576656776;
          result[3] += 0.06923837784371908;
          result[4] += 0;
          result[5] += 0.009891196834817012;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.004166666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9666666666666667;
          result[5] += 0.029166666666666667;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.03610832497492478;
          result[1] += 0.01905717151454363;
          result[2] += 0.003009027081243731;
          result[3] += 0.04613841524573721;
          result[4] += 0.05315947843530592;
          result[5] += 0.8425275827482447;
        } else {
          result[0] += 0.006430868167202572;
          result[1] += 0.003215434083601286;
          result[2] += 0.012861736334405145;
          result[3] += 0.49517684887459806;
          result[4] += 0.00964630225080386;
          result[5] += 0.47266881028938906;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.06635071090047394;
          result[1] += 0.25118483412322273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6777251184834123;
          result[5] += 0.004739336492890996;
        } else {
          result[0] += 0.6904161412358135;
          result[1] += 0.010088272383354352;
          result[2] += 0.05044136191677176;
          result[3] += 0.0844892812105927;
          result[4] += 0.06998738965952082;
          result[5] += 0.09457755359394705;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.004914004914004914;
          result[1] += 0.995085995085995;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20481927710843373;
          result[3] += 0.6867469879518072;
          result[4] += 0;
          result[5] += 0.10843373493975904;
        } else {
          result[0] += 0.17391304347826086;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0.30434782608695654;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7246376811594203;
          result[3] += 0.2246376811594203;
          result[4] += 0;
          result[5] += 0.050724637681159424;
        } else {
          result[0] += 0.02247191011235955;
          result[1] += 0;
          result[2] += 0.9662921348314607;
          result[3] += 0.011235955056179775;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7808219178082192;
          result[3] += 0.1780821917808219;
          result[4] += 0;
          result[5] += 0.0410958904109589;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.025423728813559324;
          result[1] += 0;
          result[2] += 0.864406779661017;
          result[3] += 0.11016949152542373;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0019305019305019305;
          result[1] += 0;
          result[2] += 0.9826254826254827;
          result[3] += 0.015444015444015444;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
          result[0] += 0.02242152466367713;
          result[1] += 0.02242152466367713;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9461883408071748;
          result[5] += 0.008968609865470852;
        } else {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22916666666666666;
          result[5] += 0.14583333333333334;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041666666666666664;
          result[4] += 0.6805555555555556;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0.001899335232668566;
          result[1] += 0.008547008547008548;
          result[2] += 0;
          result[3] += 0.1396011396011396;
          result[4] += 0.03323836657169991;
          result[5] += 0.8167141500474834;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.21333333333333335;
          result[2] += 0;
          result[3] += 0.05333333333333334;
          result[4] += 0.7333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9798206278026906;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.020179372197309416;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8284615384615385;
          result[1] += 0.038461538461538464;
          result[2] += 0.0038461538461538464;
          result[3] += 0.012307692307692308;
          result[4] += 0.10153846153846154;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0.1470588235294118;
          result[1] += 0.009803921568627453;
          result[2] += 0.15686274509803924;
          result[3] += 0.26470588235294124;
          result[4] += 0.04575163398692811;
          result[5] += 0.37581699346405234;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0.038461538461538464;
          result[3] += 0.08974358974358974;
          result[4] += 0.11538461538461539;
          result[5] += 0.7307692307692307;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15517241379310345;
          result[3] += 0.6724137931034483;
          result[4] += 0.011494252873563218;
          result[5] += 0.16091954022988506;
        } else {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.5362318840579711;
          result[3] += 0.34782608695652173;
          result[4] += 0;
          result[5] += 0.028985507246376812;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.4489795918367347;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.12244897959183673;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005524861878453039;
          result[1] += 0;
          result[2] += 0.9038674033149172;
          result[3] += 0.07292817679558013;
          result[4] += 0;
          result[5] += 0.01767955801104973;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.0036496350364963502;
          result[1] += 0.010948905109489052;
          result[2] += 0.0036496350364963502;
          result[3] += 0;
          result[4] += 0.9343065693430657;
          result[5] += 0.04744525547445255;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.003205128205128205;
          result[2] += 0.007478632478632479;
          result[3] += 0.07264957264957266;
          result[4] += 0.057692307692307696;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.09245742092457421;
          result[1] += 0.004866180048661801;
          result[2] += 0.09245742092457421;
          result[3] += 0.44282238442822386;
          result[4] += 0.072992700729927;
          result[5] += 0.2944038929440389;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0.002421307506053269;
          result[1] += 0.9685230024213075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.029055690072639227;
          result[5] += 0;
        } else {
          result[0] += 0.04395604395604396;
          result[1] += 0.24175824175824176;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6923076923076923;
          result[5] += 0.02197802197802198;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8170040485829959;
          result[1] += 0.0340080971659919;
          result[2] += 0.011336032388663968;
          result[3] += 0.034817813765182185;
          result[4] += 0.06477732793522267;
          result[5] += 0.03805668016194332;
        } else {
          result[0] += 0.14052287581699346;
          result[1] += 0.013071895424836602;
          result[2] += 0.28104575163398693;
          result[3] += 0.3137254901960784;
          result[4] += 0.06209150326797386;
          result[5] += 0.1895424836601307;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0.019230769230769232;
          result[4] += 0.057692307692307696;
          result[5] += 0.8846153846153846;
        } else {
          result[0] += 0;
          result[1] += 0.07317073170731707;
          result[2] += 0.2682926829268293;
          result[3] += 0.3902439024390244;
          result[4] += 0;
          result[5] += 0.2682926829268293;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.2711864406779661;
          result[1] += 0.11864406779661017;
          result[2] += 0.4915254237288136;
          result[3] += 0.1016949152542373;
          result[4] += 0;
          result[5] += 0.01694915254237288;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.38461538461538464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7972027972027972;
          result[3] += 0.1258741258741259;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.0013089005235602095;
          result[1] += 0;
          result[2] += 0.9528795811518325;
          result[3] += 0.04581151832460733;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0.02145922746781116;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9570815450643777;
          result[5] += 0.02145922746781116;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.04331087584215592;
          result[1] += 0.007699711260827719;
          result[2] += 0;
          result[3] += 0.0712223291626564;
          result[4] += 0.059672762271414825;
          result[5] += 0.8180943214629451;
        } else {
          result[0] += 0.03468208092485549;
          result[1] += 0;
          result[2] += 0.011560693641618497;
          result[3] += 0.6994219653179191;
          result[4] += 0.017341040462427744;
          result[5] += 0.23699421965317918;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7666916729182297;
          result[1] += 0.04876219054763692;
          result[2] += 0.0060015003750937745;
          result[3] += 0.02100525131282821;
          result[4] += 0.13803450862715683;
          result[5] += 0.019504876219054768;
        } else {
          result[0] += 0.16560509554140126;
          result[1] += 0.006369426751592357;
          result[2] += 0.21019108280254778;
          result[3] += 0.2908704883227176;
          result[4] += 0.09129511677282377;
          result[5] += 0.2356687898089172;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
          result[0] += 0.002444987775061125;
          result[1] += 0.9902200488997556;
          result[2] += 0.007334963325183375;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046153846153846156;
          result[3] += 0.16923076923076924;
          result[4] += 0.1076923076923077;
          result[5] += 0.676923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.5925925925925926;
          result[4] += 0.037037037037037035;
          result[5] += 0.25925925925925924;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5441176470588235;
          result[3] += 0.2867647058823529;
          result[4] += 0;
          result[5] += 0.16911764705882354;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.017421602787456445;
          result[1] += 0;
          result[2] += 0.9175377468060395;
          result[3] += 0.05110336817653891;
          result[4] += 0.0023228803716608595;
          result[5] += 0.011614401858304297;
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01694915254237288;
          result[2] += 0.006779661016949152;
          result[3] += 0;
          result[4] += 0.9694915254237289;
          result[5] += 0.006779661016949152;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.71875;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.21875;
          result[5] += 0;
        } else {
          result[0] += 0.002403846153846154;
          result[1] += 0.9951923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002403846153846154;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
          result[0] += 0.788888888888889;
          result[1] += 0;
          result[2] += 0.022222222222222227;
          result[3] += 0.011111111111111113;
          result[4] += 0.14444444444444446;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0.008729388942774006;
          result[1] += 0.0009699321047526673;
          result[2] += 0.005819592628516004;
          result[3] += 0.08341416100872939;
          result[4] += 0.08535402521823472;
          result[5] += 0.8157129000969933;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8273092369477912;
          result[1] += 0.025702811244979924;
          result[2] += 0.009638554216867472;
          result[3] += 0.031325301204819286;
          result[4] += 0.06827309236947793;
          result[5] += 0.037751004016064266;
        } else {
          result[0] += 0.13036565977742448;
          result[1] += 0.01589825119236884;
          result[2] += 0.17011128775834658;
          result[3] += 0.3275039745627981;
          result[4] += 0.05405405405405406;
          result[5] += 0.302066772655008;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0.1388888888888889;
          result[5] += 0.7222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.288135593220339;
          result[3] += 0.423728813559322;
          result[4] += 0;
          result[5] += 0.288135593220339;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0.9142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05714285714285714;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4117647058823529;
          result[3] += 0.5098039215686274;
          result[4] += 0;
          result[5] += 0.0784313725490196;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8214285714285714;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.003076923076923077;
          result[1] += 0;
          result[2] += 0.8492307692307692;
          result[3] += 0.13230769230769232;
          result[4] += 0;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9814471243042672;
          result[3] += 0.016697588126159554;
          result[4] += 0;
          result[5] += 0.0018552875695732839;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9747899159663865;
          result[5] += 0.025210084033613446;
        } else {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0;
          result[3] += 0.13043478260869565;
          result[4] += 0.08695652173913043;
          result[5] += 0.6521739130434783;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.723404255319149;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23404255319148937;
          result[5] += 0.0425531914893617;
        } else {
          result[0] += 0.003167062549485352;
          result[1] += 0.00395882818685669;
          result[2] += 0.00870942201108472;
          result[3] += 0.14489311163895488;
          result[4] += 0.05938242280285035;
          result[5] += 0.779889152810768;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.017699115044247787;
          result[1] += 0.35398230088495575;
          result[2] += 0;
          result[3] += 0.008849557522123894;
          result[4] += 0.6194690265486725;
          result[5] += 0;
        } else {
          result[0] += 0.002336448598130841;
          result[1] += 0.985981308411215;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011682242990654205;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8597560975609756;
          result[1] += 0.04529616724738676;
          result[2] += 0.004355400696864111;
          result[3] += 0.016550522648083623;
          result[4] += 0.06358885017421603;
          result[5] += 0.010452961672473868;
        } else {
          result[0] += 0.29439252336448596;
          result[1] += 0.02336448598130841;
          result[2] += 0.14953271028037382;
          result[3] += 0.17757009345794392;
          result[4] += 0.07476635514018691;
          result[5] += 0.2803738317757009;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13380281690140844;
          result[3] += 0.6830985915492958;
          result[4] += 0;
          result[5] += 0.18309859154929578;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47058823529411764;
          result[3] += 0.14705882352941177;
          result[4] += 0;
          result[5] += 0.38235294117647056;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.022222222222222223;
          result[4] += 0;
          result[5] += 0.044444444444444446;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.5462962962962963;
          result[3] += 0.3425925925925926;
          result[4] += 0;
          result[5] += 0.10185185185185185;
        } else {
          result[0] += 0.026666666666666672;
          result[1] += 0;
          result[2] += 0.8133333333333335;
          result[3] += 0.13333333333333336;
          result[4] += 0;
          result[5] += 0.026666666666666672;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.23076923076923078;
          result[1] += 0.01282051282051282;
          result[2] += 0.6410256410256411;
          result[3] += 0.05128205128205128;
          result[4] += 0.01282051282051282;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0.0049382716049382715;
          result[1] += 0;
          result[2] += 0.945679012345679;
          result[3] += 0.04691358024691358;
          result[4] += 0;
          result[5] += 0.0024691358024691358;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.03463203463203463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.961038961038961;
          result[5] += 0.004329004329004329;
        } else {
          result[0] += 0.4132231404958678;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024793388429752067;
          result[4] += 0.15702479338842976;
          result[5] += 0.4049586776859504;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0010787486515641855;
          result[1] += 0.005393743257820928;
          result[2] += 0.004314994606256742;
          result[3] += 0.06256742179072276;
          result[4] += 0.05285868392664509;
          result[5] += 0.8737864077669902;
        } else {
          result[0] += 0;
          result[1] += 0.009259259259259259;
          result[2] += 0.004629629629629629;
          result[3] += 0.5370370370370371;
          result[4] += 0.06944444444444445;
          result[5] += 0.37962962962962965;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7545839210155149;
          result[1] += 0.07122708039492243;
          result[2] += 0.0007052186177715092;
          result[3] += 0.02679830747531735;
          result[4] += 0.12976022566995768;
          result[5] += 0.01692524682651622;
        } else {
          result[0] += 0.13271604938271606;
          result[1] += 0.009259259259259259;
          result[2] += 0.2345679012345679;
          result[3] += 0.30246913580246915;
          result[4] += 0.04938271604938271;
          result[5] += 0.2716049382716049;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.2;
          result[1] += 0.2;
          result[2] += 0.2;
          result[3] += 0.2;
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
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.08108108108108109;
          result[4] += 0.05405405405405406;
          result[5] += 0.8108108108108109;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2116788321167883;
          result[3] += 0.5693430656934306;
          result[4] += 0;
          result[5] += 0.21897810218978103;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.7045454545454546;
          result[3] += 0.26515151515151514;
          result[4] += 0;
          result[5] += 0.007575757575757576;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0.4;
          result[2] += 0.5333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.6071428571428571;
          result[1] += 0;
          result[2] += 0.39285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0011520737327188942;
          result[1] += 0;
          result[2] += 0.9377880184331798;
          result[3] += 0.05529953917050692;
          result[4] += 0;
          result[5] += 0.005760368663594471;
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
          result[0] += 0.00390625;
          result[1] += 0.01171875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96484375;
          result[5] += 0.01953125;
        } else {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0196078431372549;
          result[3] += 0;
          result[4] += 0.9215686274509803;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.6927374301675978;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11731843575418995;
          result[5] += 0.18994413407821228;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5357142857142857;
          result[5] += 0.4642857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.0011574074074074073;
          result[2] += 0;
          result[3] += 0.05787037037037037;
          result[4] += 0.04282407407407408;
          result[5] += 0.8981481481481481;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          result[0] += 0.11594202898550725;
          result[1] += 0.18840579710144928;
          result[2] += 0;
          result[3] += 0.13043478260869565;
          result[4] += 0.36231884057971014;
          result[5] += 0.2028985507246377;
        } else {
          result[0] += 0.007352941176470588;
          result[1] += 0;
          result[2] += 0.0661764705882353;
          result[3] += 0.43014705882352944;
          result[4] += 0.04411764705882353;
          result[5] += 0.4522058823529412;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
          result[0] += 0.473972602739726;
          result[1] += 0.038356164383561646;
          result[2] += 0.021917808219178082;
          result[3] += 0.13972602739726028;
          result[4] += 0.16301369863013698;
          result[5] += 0.16301369863013698;
        } else {
          result[0] += 0.9584615384615386;
          result[1] += 0;
          result[2] += 0.01076923076923077;
          result[3] += 0.007692307692307694;
          result[4] += 0.02153846153846154;
          result[5] += 0.0015384615384615387;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.08450704225352113;
          result[2] += 0.06338028169014084;
          result[3] += 0.5774647887323944;
          result[4] += 0;
          result[5] += 0.2746478873239437;
        } else {
          result[0] += 0.07563025210084033;
          result[1] += 0.05042016806722689;
          result[2] += 0.42857142857142855;
          result[3] += 0.3277310924369748;
          result[4] += 0.01680672268907563;
          result[5] += 0.10084033613445378;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0.016260162601626018;
          result[1] += 0;
          result[2] += 0.7154471544715447;
          result[3] += 0.23170731707317074;
          result[4] += 0;
          result[5] += 0.036585365853658534;
        } else {
          result[0] += 0.04563233376792699;
          result[1] += 0;
          result[2] += 0.9191655801825294;
          result[3] += 0.035202086049543675;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01953125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.97265625;
          result[5] += 0.0078125;
        } else {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.375;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.9363636363636364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06363636363636363;
          result[5] += 0;
        } else {
          result[0] += 0.015637860082304528;
          result[1] += 0.00823045267489712;
          result[2] += 0.0024691358024691358;
          result[3] += 0.13333333333333333;
          result[4] += 0.097119341563786;
          result[5] += 0.7432098765432099;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.993006993006993;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004662004662004662;
          result[5] += 0.002331002331002331;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7853962600178095;
          result[1] += 0.04363312555654497;
          result[2] += 0.003561887800534283;
          result[3] += 0.04541406945681211;
          result[4] += 0.08904719501335707;
          result[5] += 0.03294746215494212;
        } else {
          result[0] += 0.13883299798792756;
          result[1] += 0.028169014084507043;
          result[2] += 0.25553319919517103;
          result[3] += 0.34004024144869216;
          result[4] += 0.04024144869215292;
          result[5] += 0.19718309859154928;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.06557377049180328;
          result[1] += 0.13114754098360656;
          result[2] += 0.04918032786885246;
          result[3] += 0.09836065573770492;
          result[4] += 0.19672131147540983;
          result[5] += 0.45901639344262296;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21212121212121213;
          result[3] += 0.6060606060606061;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8367346938775511;
          result[3] += 0.12244897959183673;
          result[4] += 0;
          result[5] += 0.04081632653061224;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4722222222222222;
          result[3] += 0.5277777777777778;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.04255319148936171;
          result[1] += 0;
          result[2] += 0.8510638297872342;
          result[3] += 0.09574468085106384;
          result[4] += 0;
          result[5] += 0.010638297872340427;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          result[0] += 0.0967741935483871;
          result[1] += 0;
          result[2] += 0.7419354838709677;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9742857142857143;
          result[3] += 0.025714285714285714;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008368200836820085;
          result[1] += 0.07949790794979081;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.887029288702929;
          result[5] += 0.025104602510460254;
        } else {
          result[0] += 0.58984375;
          result[1] += 0.015625;
          result[2] += 0.00390625;
          result[3] += 0.02734375;
          result[4] += 0.25;
          result[5] += 0.11328125;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05956471935853379;
          result[4] += 0.07903780068728522;
          result[5] += 0.861397479954181;
        } else {
          result[0] += 0.03862660944206009;
          result[1] += 0.02575107296137339;
          result[2] += 0.06866952789699571;
          result[3] += 0.33905579399141633;
          result[4] += 0.13304721030042918;
          result[5] += 0.3948497854077253;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.13333333333333336;
          result[1] += 0.2833333333333334;
          result[2] += 0;
          result[3] += 0.05000000000000001;
          result[4] += 0.5000000000000001;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8649173955296404;
          result[1] += 0.05344995140913508;
          result[2] += 0.007774538386783284;
          result[3] += 0.023323615160349854;
          result[4] += 0.037900874635568516;
          result[5] += 0.012633624878522837;
        } else {
          result[0] += 0.19841269841269843;
          result[1] += 0.007936507936507938;
          result[2] += 0.2142857142857143;
          result[3] += 0.3015873015873016;
          result[4] += 0.05158730158730159;
          result[5] += 0.22619047619047622;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
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
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.7272727272727273;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.02040816326530612;
          result[2] += 0.02040816326530612;
          result[3] += 0.8367346938775511;
          result[4] += 0;
          result[5] += 0.12244897959183673;
        } else {
          result[0] += 0;
          result[1] += 0.07894736842105261;
          result[2] += 0.5526315789473684;
          result[3] += 0.1929824561403508;
          result[4] += 0.008771929824561401;
          result[5] += 0.16666666666666663;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.7;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.003937007874015748;
          result[1] += 0;
          result[2] += 0.7283464566929134;
          result[3] += 0.24803149606299213;
          result[4] += 0;
          result[5] += 0.01968503937007874;
        } else {
          result[0] += 0.009602194787379973;
          result[1] += 0;
          result[2] += 0.9588477366255144;
          result[3] += 0.03155006858710562;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          result[0] += 0.017045454545454544;
          result[1] += 0.017045454545454544;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9431818181818182;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.47368421052631576;
          result[5] += 0.39473684210526316;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03508771929824561;
          result[4] += 0.8947368421052632;
          result[5] += 0.07017543859649122;
        } else {
          result[0] += 0.019653179190751446;
          result[1] += 0;
          result[2] += 0.005780346820809248;
          result[3] += 0.04508670520231214;
          result[4] += 0.025433526011560695;
          result[5] += 0.9040462427745665;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.12;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.24;
          result[4] += 0.032;
          result[5] += 0.528;
        } else {
          result[0] += 0.017341040462427744;
          result[1] += 0.005780346820809248;
          result[2] += 0.08670520231213873;
          result[3] += 0.6473988439306358;
          result[4] += 0.017341040462427744;
          result[5] += 0.2254335260115607;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.19444444444444445;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.6388888888888888;
          result[5] += 0;
        } else {
          result[0] += 0.0024630541871921183;
          result[1] += 0.9975369458128078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0.019417475728155338;
          result[1] += 0.36893203883495146;
          result[2] += 0.009708737864077669;
          result[3] += 0.04854368932038835;
          result[4] += 0.5485436893203883;
          result[5] += 0.0048543689320388345;
        } else {
          result[0] += 0.7553118574366002;
          result[1] += 0.0027416038382453733;
          result[2] += 0.025359835503769697;
          result[3] += 0.060315284441398206;
          result[4] += 0.06716929403701163;
          result[5] += 0.08910212474297463;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05142857142857143;
          result[1] += 0.10285714285714286;
          result[2] += 0.15428571428571428;
          result[3] += 0.49142857142857144;
          result[4] += 0.04;
          result[5] += 0.16;
        } else {
          result[0] += 0.20833333333333334;
          result[1] += 0;
          result[2] += 0.6607142857142857;
          result[3] += 0.11904761904761904;
          result[4] += 0;
          result[5] += 0.011904761904761904;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7244897959183674;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.061224489795918366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9655172413793104;
          result[3] += 0.034482758620689655;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.004739336492890996;
          result[1] += 0.037914691943127965;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9383886255924171;
          result[5] += 0.018957345971563982;
        } else {
          result[0] += 0;
          result[1] += 0.0136986301369863;
          result[2] += 0;
          result[3] += 0.0273972602739726;
          result[4] += 0.5205479452054794;
          result[5] += 0.4383561643835616;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          result[0] += 0.003537735849056604;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07429245283018868;
          result[4] += 0.03537735849056604;
          result[5] += 0.8867924528301887;
        } else {
          result[0] += 0.14244186046511628;
          result[1] += 0.03197674418604651;
          result[2] += 0.03488372093023256;
          result[3] += 0.3226744186046512;
          result[4] += 0.07848837209302326;
          result[5] += 0.38953488372093026;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333336;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8400000000000001;
          result[5] += 0.026666666666666672;
        } else {
          result[0] += 0;
          result[1] += 0.9840546697038725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015945330296127564;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
          result[0] += 0.5245901639344263;
          result[1] += 0.07728337236533958;
          result[2] += 0.03161592505854801;
          result[3] += 0.11124121779859485;
          result[4] += 0.14168618266978922;
          result[5] += 0.11358313817330211;
        } else {
          result[0] += 0.9243937232524962;
          result[1] += 0;
          result[2] += 0.029957203994293857;
          result[3] += 0.012838801711840224;
          result[4] += 0.022824536376604847;
          result[5] += 0.00998573466476462;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.056;
          result[3] += 0.72;
          result[4] += 0.024;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0.13953488372093023;
          result[2] += 0.5116279069767442;
          result[3] += 0.06976744186046512;
          result[4] += 0;
          result[5] += 0.27906976744186046;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
          result[0] += 0.10144927536231885;
          result[1] += 0;
          result[2] += 0.2463768115942029;
          result[3] += 0.14492753623188406;
          result[4] += 0.15942028985507245;
          result[5] += 0.34782608695652173;
        } else {
          result[0] += 0.0813008130081301;
          result[1] += 0;
          result[2] += 0.7479674796747968;
          result[3] += 0.09756097560975611;
          result[4] += 0.01626016260162602;
          result[5] += 0.05691056910569106;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.29629629629629634;
          result[3] += 0.33333333333333337;
          result[4] += 0;
          result[5] += 0.3703703703703704;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7547169811320755;
          result[3] += 0.20754716981132076;
          result[4] += 0;
          result[5] += 0.03773584905660377;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.0014858841010401188;
          result[1] += 0;
          result[2] += 0.9613670133729569;
          result[3] += 0.03714710252600297;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.028368794326241134;
          result[1] += 0.08156028368794327;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875886524822695;
          result[5] += 0.014184397163120567;
        } else {
          result[0] += 0.705607476635514;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004672897196261682;
          result[4] += 0.17757009345794392;
          result[5] += 0.11214953271028037;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0011933174224343676;
          result[1] += 0.0011933174224343676;
          result[2] += 0;
          result[3] += 0.050119331742243436;
          result[4] += 0.0883054892601432;
          result[5] += 0.8591885441527446;
        } else {
          result[0] += 0.013986013986013986;
          result[1] += 0.03496503496503497;
          result[2] += 0;
          result[3] += 0.34498834498834496;
          result[4] += 0.13053613053613053;
          result[5] += 0.4755244755244755;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
          result[0] += 0.002320185614849188;
          result[1] += 0.9930394431554525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004640371229698376;
          result[5] += 0;
        } else {
          result[0] += 0.09333333333333332;
          result[1] += 0.4133333333333332;
          result[2] += 0.10666666666666665;
          result[3] += 0;
          result[4] += 0.3733333333333333;
          result[5] += 0.01333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8690702087286528;
          result[1] += 0.0521821631878558;
          result[2] += 0.0028462998102466797;
          result[3] += 0.014231499051233398;
          result[4] += 0.05407969639468691;
          result[5] += 0.007590132827324479;
        } else {
          result[0] += 0.19850187265917604;
          result[1] += 0.00749063670411985;
          result[2] += 0.18352059925093633;
          result[3] += 0.2808988764044944;
          result[4] += 0.052434456928838954;
          result[5] += 0.27715355805243447;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21428571428571427;
          result[5] += 0.7857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.061946902654867256;
          result[3] += 0.672566371681416;
          result[4] += 0.008849557522123894;
          result[5] += 0.25663716814159293;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.08108108108108109;
          result[2] += 0.2972972972972973;
          result[3] += 0.2972972972972973;
          result[4] += 0.08108108108108109;
          result[5] += 0.24324324324324326;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0425531914893617;
          result[3] += 0.2978723404255319;
          result[4] += 0;
          result[5] += 0.6595744680851063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7034883720930233;
          result[3] += 0.23837209302325582;
          result[4] += 0.005813953488372093;
          result[5] += 0.05232558139534884;
        } else {
          result[0] += 0.02103960396039604;
          result[1] += 0.006188118811881188;
          result[2] += 0.9207920792079208;
          result[3] += 0.04084158415841584;
          result[4] += 0.006188118811881188;
          result[5] += 0.0049504950495049506;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.005405405405405406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9891891891891892;
          result[5] += 0.005405405405405406;
        } else {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.2857142857142857;
          result[5] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02034587995930824;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.061037639877924724;
          result[4] += 0.0762970498474059;
          result[5] += 0.8423194303153612;
        } else {
          result[0] += 0.05747126436781609;
          result[1] += 0.0028735632183908046;
          result[2] += 0.02586206896551724;
          result[3] += 0.4396551724137931;
          result[4] += 0.06321839080459771;
          result[5] += 0.4109195402298851;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0.0024390243902439024;
          result[1] += 0.975609756097561;
          result[2] += 0.007317073170731708;
          result[3] += 0.004878048780487805;
          result[4] += 0.00975609756097561;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7273954116059379;
          result[1] += 0.053306342780026994;
          result[2] += 0.006072874493927126;
          result[3] += 0.03913630229419703;
          result[4] += 0.12550607287449392;
          result[5] += 0.048582995951417005;
        } else {
          result[0] += 0.16519174041297935;
          result[1] += 0.014749262536873156;
          result[2] += 0.27728613569321536;
          result[3] += 0.3008849557522124;
          result[4] += 0.032448377581120944;
          result[5] += 0.20943952802359883;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18811881188118812;
          result[3] += 0.6732673267326733;
          result[4] += 0;
          result[5] += 0.13861386138613863;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7962962962962963;
          result[3] += 0.12962962962962962;
          result[4] += 0;
          result[5] += 0.07407407407407407;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0.028846153846153848;
          result[1] += 0;
          result[2] += 0.8141025641025641;
          result[3] += 0.14743589743589744;
          result[4] += 0;
          result[5] += 0.009615384615384616;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.963855421686747;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03614457831325301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8666666666666667;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.994750656167979;
          result[3] += 0.005249343832020997;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.92;
          result[3] += 0.08;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0.004784688995215311;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904306220095693;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.023809523809523808;
          result[4] += 0.5238095238095238;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.017964071856287425;
          result[1] += 0.0023952095808383233;
          result[2] += 0.0011976047904191617;
          result[3] += 0.046706586826347304;
          result[4] += 0.058682634730538925;
          result[5] += 0.8730538922155688;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0.07297297297297298;
          result[2] += 0.008108108108108109;
          result[3] += 0.4081081081081081;
          result[4] += 0.03513513513513514;
          result[5] += 0.43513513513513513;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.5333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.009174311926605505;
          result[1] += 0.9747706422018348;
          result[2] += 0.009174311926605505;
          result[3] += 0.0022935779816513763;
          result[4] += 0.0045871559633027525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7722143864598026;
          result[1] += 0.045133991537376586;
          result[2] += 0.0028208744710860366;
          result[3] += 0.02679830747531735;
          result[4] += 0.1311706629055007;
          result[5] += 0.021861777150916785;
        } else {
          result[0] += 0.14782608695652175;
          result[1] += 0.02391304347826087;
          result[2] += 0.1782608695652174;
          result[3] += 0.2391304347826087;
          result[4] += 0.08695652173913043;
          result[5] += 0.3239130434782609;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01851851851851852;
          result[3] += 0.7407407407407408;
          result[4] += 0;
          result[5] += 0.24074074074074076;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.2647058823529412;
          result[4] += 0;
          result[5] += 0.23529411764705882;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.74;
          result[3] += 0.24;
          result[4] += 0;
          result[5] += 0.02;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.7777777777777778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009334889148191364;
          result[1] += 0;
          result[2] += 0.9451575262543758;
          result[3] += 0.044340723453908985;
          result[4] += 0;
          result[5] += 0.0011668611435239206;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.009090909090909092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9500000000000001;
          result[5] += 0.040909090909090916;
        } else {
          result[0] += 0.46;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0;
          result[4] += 0.28;
          result[5] += 0.22;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.004324324324324324;
          result[2] += 0;
          result[3] += 0.05297297297297297;
          result[4] += 0.0681081081081081;
          result[5] += 0.8745945945945945;
        } else {
          result[0] += 0.0028653295128939827;
          result[1] += 0.02005730659025788;
          result[2] += 0.011461318051575931;
          result[3] += 0.47564469914040114;
          result[4] += 0.03724928366762178;
          result[5] += 0.45272206303724927;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 0.9702127659574468;
          result[2] += 0.00425531914893617;
          result[3] += 0;
          result[4] += 0.02553191489361702;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2916666666666667;
          result[2] += 0;
          result[3] += 0.010416666666666666;
          result[4] += 0.6666666666666666;
          result[5] += 0.03125;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.15929203539823006;
          result[1] += 0.27433628318584063;
          result[2] += 0.017699115044247784;
          result[3] += 0.017699115044247784;
          result[4] += 0.46902654867256627;
          result[5] += 0.06194690265486724;
        } else {
          result[0] += 0.8207236842105263;
          result[1] += 0.015625;
          result[2] += 0.022203947368421052;
          result[3] += 0.05756578947368421;
          result[4] += 0.04358552631578947;
          result[5] += 0.04029605263157895;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03333333333333333;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.7;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2512077294685991;
          result[3] += 0.5893719806763286;
          result[4] += 0.014492753623188408;
          result[5] += 0.1449275362318841;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3939393939393939;
          result[3] += 0.5454545454545454;
          result[4] += 0;
          result[5] += 0.06060606060606061;
        } else {
          result[0] += 0.015873015873015872;
          result[1] += 0;
          result[2] += 0.7936507936507936;
          result[3] += 0.15079365079365079;
          result[4] += 0.015873015873015872;
          result[5] += 0.023809523809523808;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010297482837528604;
          result[1] += 0;
          result[2] += 0.937070938215103;
          result[3] += 0.04576659038901602;
          result[4] += 0;
          result[5] += 0.006864988558352402;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.004608294930875576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9907834101382489;
          result[5] += 0.004608294930875576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0;
          result[4] += 0.6086956521739131;
          result[5] += 0.30434782608695654;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004219409282700422;
          result[3] += 0.029535864978902954;
          result[4] += 0.0450070323488045;
          result[5] += 0.9212376933895922;
        } else {
          result[0] += 0.07251908396946564;
          result[1] += 0.04961832061068702;
          result[2] += 0.0057251908396946565;
          result[3] += 0.26908396946564883;
          result[4] += 0.06679389312977099;
          result[5] += 0.5362595419847328;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.016483516483516484;
          result[1] += 0.3076923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6538461538461539;
          result[5] += 0.02197802197802198;
        } else {
          result[0] += 0.6967782691092862;
          result[1] += 0.015792798483891344;
          result[2] += 0.037271004421983576;
          result[3] += 0.07896399241945673;
          result[4] += 0.0739102969046115;
          result[5] += 0.0972836386607707;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06097560975609756;
          result[3] += 0.7804878048780488;
          result[4] += 0;
          result[5] += 0.15853658536585366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.373134328358209;
          result[3] += 0.3880597014925373;
          result[4] += 0;
          result[5] += 0.23880597014925373;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46808510638297873;
          result[3] += 0.23404255319148937;
          result[4] += 0;
          result[5] += 0.2978723404255319;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8387096774193549;
          result[3] += 0.15207373271889402;
          result[4] += 0;
          result[5] += 0.009216589861751152;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0;
          result[2] += 0.6818181818181818;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.22727272727272727;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.13636363636363635;
        } else {
          result[0] += 0.001455604075691412;
          result[1] += 0;
          result[2] += 0.9519650655021834;
          result[3] += 0.046579330422125184;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          result[0] += 0.0037593984962406013;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9398496240601504;
          result[5] += 0.03007518796992481;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0026490066225165563;
          result[3] += 0.019867549668874173;
          result[4] += 0.03576158940397351;
          result[5] += 0.9417218543046357;
        } else {
          result[0] += 0.10950413223140495;
          result[1] += 0.002066115702479339;
          result[2] += 0.006198347107438017;
          result[3] += 0.30991735537190085;
          result[4] += 0.05165289256198347;
          result[5] += 0.5206611570247934;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.06306306306306306;
          result[1] += 0.32882882882882886;
          result[2] += 0.0045045045045045045;
          result[3] += 0.02702702702702703;
          result[4] += 0.5225225225225225;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.7130492676431425;
          result[1] += 0.019973368841544607;
          result[2] += 0.03195739014647137;
          result[3] += 0.08655126498002663;
          result[4] += 0.06857523302263649;
          result[5] += 0.07989347536617843;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
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
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.061855670103092786;
          result[3] += 0.7422680412371134;
          result[4] += 0;
          result[5] += 0.1958762886597938;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.631578947368421;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7959183673469388;
          result[3] += 0.02040816326530612;
          result[4] += 0.04081632653061224;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0.569620253164557;
          result[3] += 0.34177215189873417;
          result[4] += 0;
          result[5] += 0.0759493670886076;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.8541033434650456;
          result[3] += 0.11550151975683891;
          result[4] += 0;
          result[5] += 0.00911854103343465;
        } else {
          result[0] += 0.0034364261168384883;
          result[1] += 0;
          result[2] += 0.9828178694158076;
          result[3] += 0.013745704467353953;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.04326923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9567307692307693;
          result[5] += 0;
        } else {
          result[0] += 0.37662337662337664;
          result[1] += 0.025974025974025976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.44155844155844154;
          result[5] += 0.15584415584415584;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.0010822510822510823;
          result[1] += 0.008658008658008658;
          result[2] += 0.0021645021645021645;
          result[3] += 0.04220779220779221;
          result[4] += 0.07251082251082251;
          result[5] += 0.8733766233766234;
        } else {
          result[0] += 0.011278195488721804;
          result[1] += 0;
          result[2] += 0.041353383458646614;
          result[3] += 0.5601503759398496;
          result[4] += 0.007518796992481203;
          result[5] += 0.37969924812030076;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.1927710843373494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8072289156626506;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9753363228699552;
          result[2] += 0;
          result[3] += 0.008968609865470852;
          result[4] += 0.01569506726457399;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8319935691318329;
          result[1] += 0.036977491961414796;
          result[2] += 0.0016077170418006433;
          result[3] += 0.022508038585209007;
          result[4] += 0.08440514469453378;
          result[5] += 0.022508038585209007;
        } else {
          result[0] += 0.2166172106824926;
          result[1] += 0.03857566765578635;
          result[2] += 0.18694362017804153;
          result[3] += 0.22551928783382788;
          result[4] += 0.06528189910979229;
          result[5] += 0.26706231454005935;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9473684210526315;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.006493506493506494;
          result[2] += 0.12987012987012986;
          result[3] += 0.5454545454545454;
          result[4] += 0.06493506493506493;
          result[5] += 0.2532467532467532;
        } else {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0.5441176470588235;
          result[3] += 0.1323529411764706;
          result[4] += 0.058823529411764705;
          result[5] += 0.20588235294117646;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5263157894736842;
          result[3] += 0.47368421052631576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004784688995215311;
          result[1] += 0;
          result[2] += 0.8277511961722488;
          result[3] += 0.1674641148325359;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6470588235294118;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012328767123287671;
          result[1] += 0;
          result[2] += 0.9602739726027397;
          result[3] += 0.026027397260273973;
          result[4] += 0;
          result[5] += 0.0013698630136986301;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)35.5) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0.020080321285140562;
          result[1] += 0.06827309236947791;
          result[2] += 0;
          result[3] += 0.008032128514056224;
          result[4] += 0.8433734939759037;
          result[5] += 0.060240963855421686;
        } else {
          result[0] += 0.04437643458301454;
          result[1] += 0.00306044376434583;
          result[2] += 0.00306044376434583;
          result[3] += 0.17444529456771232;
          result[4] += 0.05355776587605203;
          result[5] += 0.7214996174445295;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7593984962406015;
          result[1] += 0.04736842105263158;
          result[2] += 0.016541353383458645;
          result[3] += 0.02406015037593985;
          result[4] += 0.12180451127819548;
          result[5] += 0.030827067669172932;
        } else {
          result[0] += 0.1409921671018277;
          result[1] += 0.005221932114882507;
          result[2] += 0.31592689295039167;
          result[3] += 0.2950391644908616;
          result[4] += 0.0835509138381201;
          result[5] += 0.15926892950391644;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0.9166666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          result[0] += 0.02857142857142857;
          result[1] += 0.014285714285714285;
          result[2] += 0.2;
          result[3] += 0.44285714285714284;
          result[4] += 0.05714285714285714;
          result[5] += 0.2571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
          result[0] += 0.07547169811320754;
          result[1] += 0;
          result[2] += 0.41509433962264153;
          result[3] += 0.4528301886792453;
          result[4] += 0;
          result[5] += 0.05660377358490566;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.8131313131313131;
          result[3] += 0.15656565656565657;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8944723618090452;
          result[3] += 0.10552763819095477;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004016064257028112;
          result[1] += 0;
          result[2] += 0.9879518072289156;
          result[3] += 0.008032128514056224;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013215859030837006;
          result[3] += 0.008810572687224672;
          result[4] += 0.9515418502202644;
          result[5] += 0.026431718061674013;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.03394762366634336;
          result[1] += 0.01745877788554801;
          result[2] += 0;
          result[3] += 0.05916585838991271;
          result[4] += 0.05431619786614937;
          result[5] += 0.8351115421920465;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027027027027027032;
          result[3] += 0.6351351351351352;
          result[4] += 0.013513513513513516;
          result[5] += 0.3243243243243244;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0.28032786885245903;
          result[1] += 0.019672131147540985;
          result[2] += 0.05245901639344262;
          result[3] += 0.20163934426229507;
          result[4] += 0.20655737704918034;
          result[5] += 0.23934426229508196;
        } else {
          result[0] += 0.7741420590582602;
          result[1] += 0.047885075818036714;
          result[2] += 0.04948124501197127;
          result[3] += 0.028731045490822026;
          result[4] += 0.08140462889066241;
          result[5] += 0.018355945730247406;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975124378109452;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024875621890547263;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0.02857142857142857;
          result[3] += 0.05714285714285714;
          result[4] += 0.08571428571428572;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0.008403361344537815;
          result[2] += 0.31932773109243695;
          result[3] += 0.4957983193277311;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.0045045045045045045;
          result[1] += 0;
          result[2] += 0.7252252252252253;
          result[3] += 0.24324324324324326;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.8235294117647058;
        } else {
          result[0] += 0.3636363636363636;
          result[1] += 0.0909090909090909;
          result[2] += 0.1818181818181818;
          result[3] += 0.1818181818181818;
          result[4] += 0.1818181818181818;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0.11363636363636363;
          result[1] += 0.045454545454545456;
          result[2] += 0.6136363636363636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9531478770131772;
          result[3] += 0.04685212298682284;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.037914691943127965;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.957345971563981;
          result[5] += 0.004739336492890996;
        } else {
          result[0] += 0.5975609756097561;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24390243902439024;
          result[5] += 0.13414634146341464;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0010193679918450561;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04383282364933741;
          result[4] += 0.07135575942915393;
          result[5] += 0.8837920489296636;
        } else {
          result[0] += 0.011278195488721804;
          result[1] += 0.0037593984962406013;
          result[2] += 0.007518796992481203;
          result[3] += 0.4323308270676692;
          result[4] += 0.05639097744360902;
          result[5] += 0.48872180451127817;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
          result[0] += 0.17105263157894737;
          result[1] += 0.20065789473684212;
          result[2] += 0.01644736842105263;
          result[3] += 0.02631578947368421;
          result[4] += 0.5131578947368421;
          result[5] += 0.07236842105263158;
        } else {
          result[0] += 0.7885360185902399;
          result[1] += 0.025561580170410526;
          result[2] += 0.03020914020139426;
          result[3] += 0.06506584043377225;
          result[4] += 0.04415182029434546;
          result[5] += 0.04647560030983733;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.9878345498783455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009732360097323601;
          result[5] += 0.0024330900243309003;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07874015748031497;
          result[3] += 0.7086614173228347;
          result[4] += 0.015748031496062995;
          result[5] += 0.19685039370078744;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2647058823529412;
          result[3] += 0.38235294117647056;
          result[4] += 0;
          result[5] += 0.35294117647058826;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6935483870967742;
          result[3] += 0.23387096774193547;
          result[4] += 0;
          result[5] += 0.07258064516129033;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04863221884498481;
          result[1] += 0;
          result[2] += 0.8176291793313071;
          result[3] += 0.12462006079027357;
          result[4] += 0.0030395136778115506;
          result[5] += 0.006079027355623101;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9628378378378378;
          result[3] += 0.037162162162162164;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          result[0] += 0.01932367149758454;
          result[1] += 0.036231884057971016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8864734299516909;
          result[5] += 0.057971014492753624;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6190476190476191;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.38095238095238093;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.005925925925925926;
          result[1] += 0.002962962962962963;
          result[2] += 0.002962962962962963;
          result[3] += 0.02074074074074074;
          result[4] += 0.03111111111111111;
          result[5] += 0.9362962962962963;
        } else {
          result[0] += 0.10619469026548672;
          result[1] += 0.0017699115044247787;
          result[2] += 0.02831858407079646;
          result[3] += 0.34690265486725663;
          result[4] += 0.05486725663716814;
          result[5] += 0.46194690265486726;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8362869198312236;
          result[1] += 0.020253164556962026;
          result[2] += 0.002531645569620253;
          result[3] += 0.03291139240506329;
          result[4] += 0.06919831223628692;
          result[5] += 0.038818565400843885;
        } else {
          result[0] += 0.14814814814814814;
          result[1] += 0.02962962962962963;
          result[2] += 0.2222222222222222;
          result[3] += 0.3;
          result[4] += 0.08888888888888889;
          result[5] += 0.2111111111111111;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909091;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02040816326530612;
          result[3] += 0.12244897959183673;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0.006896551724137931;
          result[1] += 0.013793103448275862;
          result[2] += 0.1310344827586207;
          result[3] += 0.6206896551724138;
          result[4] += 0.034482758620689655;
          result[5] += 0.19310344827586207;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.65;
          result[3] += 0.21666666666666667;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.23809523809523808;
          result[2] += 0.38095238095238093;
          result[3] += 0.2857142857142857;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        } else {
          result[0] += 0.6896551724137931;
          result[1] += 0;
          result[2] += 0.29310344827586204;
          result[3] += 0;
          result[4] += 0.017241379310344827;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7403314917127072;
          result[3] += 0.23204419889502761;
          result[4] += 0.0055248618784530384;
          result[5] += 0.022099447513812154;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9619047619047619;
          result[3] += 0.0380952380952381;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010204081632653062;
          result[1] += 0.015306122448979593;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9591836734693878;
          result[5] += 0.015306122448979593;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.04158004158004158;
          result[1] += 0.015592515592515593;
          result[2] += 0;
          result[3] += 0.04261954261954262;
          result[4] += 0.05093555093555094;
          result[5] += 0.8492723492723493;
        } else {
          result[0] += 0.01764705882352941;
          result[1] += 0.0029411764705882353;
          result[2] += 0.011764705882352941;
          result[3] += 0.5;
          result[4] += 0.04411764705882353;
          result[5] += 0.4235294117647059;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.19642857142857142;
          result[2] += 0;
          result[3] += 0.044642857142857144;
          result[4] += 0.7232142857142857;
          result[5] += 0.03571428571428571;
        } else {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9927536231884058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004830917874396135;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7828996282527881;
          result[1] += 0.02453531598513011;
          result[2] += 0.015613382899628252;
          result[3] += 0.031226765799256505;
          result[4] += 0.07137546468401487;
          result[5] += 0.07434944237918216;
        } else {
          result[0] += 0.17151162790697674;
          result[1] += 0.05232558139534884;
          result[2] += 0.24127906976744187;
          result[3] += 0.2616279069767442;
          result[4] += 0.04941860465116279;
          result[5] += 0.2238372093023256;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06153846153846154;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.13846153846153847;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7246376811594203;
          result[3] += 0.2463768115942029;
          result[4] += 0;
          result[5] += 0.028985507246376812;
        } else {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.9636363636363636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.01818181818181818;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
          result[0] += 0.026737967914438505;
          result[1] += 0;
          result[2] += 0.7967914438502675;
          result[3] += 0.16042780748663105;
          result[4] += 0;
          result[5] += 0.016042780748663107;
        } else {
          result[0] += 0.35714285714285715;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9759615384615384;
          result[3] += 0.022435897435897436;
          result[4] += 0;
          result[5] += 0.0016025641025641025;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0273972602739726;
          result[1] += 0.0410958904109589;
          result[2] += 0;
          result[3] += 0.1095890410958904;
          result[4] += 0.5616438356164384;
          result[5] += 0.2602739726027397;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.776595744680851;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22340425531914893;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0040650406504065045;
          result[2] += 0.0016260162601626016;
          result[3] += 0.14634146341463414;
          result[4] += 0.05121951219512195;
          result[5] += 0.7967479674796748;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955156950672646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004484304932735426;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7855402112103981;
          result[1] += 0.054427294882209584;
          result[2] += 0.002437043054427295;
          result[3] += 0.011372867587327376;
          result[4] += 0.13809910641754672;
          result[5] += 0.008123476848090982;
        } else {
          result[0] += 0.14411764705882352;
          result[1] += 0.0058823529411764705;
          result[2] += 0.2676470588235294;
          result[3] += 0.26176470588235295;
          result[4] += 0.03823529411764706;
          result[5] += 0.2823529411764706;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16;
          result[3] += 0;
          result[4] += 0.08;
          result[5] += 0.76;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.38461538461538464;
          result[2] += 0.15384615384615385;
          result[3] += 0.07692307692307693;
          result[4] += 0.07692307692307693;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.9743589743589743;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007874015748031496;
          result[1] += 0.007874015748031496;
          result[2] += 0.3937007874015748;
          result[3] += 0.3779527559055118;
          result[4] += 0.023622047244094488;
          result[5] += 0.1889763779527559;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
          result[0] += 0.019867549668874173;
          result[1] += 0.006622516556291391;
          result[2] += 0.7483443708609272;
          result[3] += 0.152317880794702;
          result[4] += 0.006622516556291391;
          result[5] += 0.06622516556291391;
        } else {
          result[0] += 0.6111111111111112;
          result[1] += 0;
          result[2] += 0.3888888888888889;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.010869565217391302;
          result[1] += 0;
          result[2] += 0.86231884057971;
          result[3] += 0.11231884057971012;
          result[4] += 0;
          result[5] += 0.014492753623188403;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9780621572212066;
          result[3] += 0.021937842778793418;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.004975124378109453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9950248756218906;
          result[5] += 0;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0.013513513513513514;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7162162162162162;
          result[5] += 0.22972972972972974;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8723404255319149;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1276595744680851;
          result[5] += 0;
        } else {
          result[0] += 0.0016638935108153079;
          result[1] += 0.0033277870216306157;
          result[2] += 0.005823627287853577;
          result[3] += 0.14392678868552414;
          result[4] += 0.04908485856905158;
          result[5] += 0.7961730449251248;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
          result[0] += 0.022388059701492536;
          result[1] += 0.22388059701492538;
          result[2] += 0;
          result[3] += 0.022388059701492536;
          result[4] += 0.6567164179104478;
          result[5] += 0.07462686567164178;
        } else {
          result[0] += 0.004576659038901602;
          result[1] += 0.988558352402746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006864988558352402;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0.49872122762148335;
          result[1] += 0.01278772378516624;
          result[2] += 0.030690537084398978;
          result[3] += 0.15601023017902813;
          result[4] += 0.09207161125319693;
          result[5] += 0.20971867007672634;
        } else {
          result[0] += 0.8622350674373797;
          result[1] += 0.021194605009633914;
          result[2] += 0.015414258188824664;
          result[3] += 0.022157996146435457;
          result[4] += 0.07032755298651254;
          result[5] += 0.008670520231213874;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10344827586206896;
          result[3] += 0.6896551724137931;
          result[4] += 0;
          result[5] += 0.20689655172413793;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
          result[0] += 0.06896551724137931;
          result[1] += 0;
          result[2] += 0.3793103448275862;
          result[3] += 0.2413793103448276;
          result[4] += 0.034482758620689655;
          result[5] += 0.27586206896551724;
        } else {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0.8153846153846154;
          result[3] += 0.16923076923076924;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0.013422818791946308;
          result[1] += 0;
          result[2] += 0.6644295302013423;
          result[3] += 0.28187919463087246;
          result[4] += 0;
          result[5] += 0.040268456375838924;
        } else {
          result[0] += 0.04285714285714286;
          result[1] += 0;
          result[2] += 0.8321428571428572;
          result[3] += 0.08571428571428572;
          result[4] += 0.0035714285714285713;
          result[5] += 0.03571428571428571;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
          result[0] += 0.19047619047619047;
          result[1] += 0.047619047619047616;
          result[2] += 0.42857142857142855;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9842381786339756;
          result[3] += 0.01225919439579685;
          result[4] += 0;
          result[5] += 0.003502626970227671;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.03755868544600939;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9342723004694836;
          result[5] += 0.028169014084507043;
        } else {
          result[0] += 0.37267080745341613;
          result[1] += 0.09937888198757763;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.2422360248447205;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0012254901960784314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05514705882352941;
          result[4] += 0.0392156862745098;
          result[5] += 0.9044117647058824;
        } else {
          result[0] += 0.016786570743405275;
          result[1] += 0.007194244604316547;
          result[2] += 0.007194244604316547;
          result[3] += 0.3764988009592326;
          result[4] += 0.04316546762589928;
          result[5] += 0.5491606714628298;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.10909090909090909;
          result[2] += 0;
          result[3] += 0.05454545454545454;
          result[4] += 0.8363636363636363;
          result[5] += 0;
        } else {
          result[0] += 0.002336448598130841;
          result[1] += 0.9485981308411215;
          result[2] += 0.007009345794392523;
          result[3] += 0;
          result[4] += 0.04205607476635514;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.847545219638243;
          result[1] += 0.01981050818260121;
          result[2] += 0.0025839793281653752;
          result[3] += 0.02670111972437554;
          result[4] += 0.09043927648578813;
          result[5] += 0.012919896640826874;
        } else {
          result[0] += 0.31493506493506496;
          result[1] += 0.032467532467532464;
          result[2] += 0.19480519480519481;
          result[3] += 0.16558441558441558;
          result[4] += 0.06168831168831169;
          result[5] += 0.2305194805194805;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11627906976744186;
          result[3] += 0.06976744186046512;
          result[4] += 0;
          result[5] += 0.813953488372093;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17355371900826447;
          result[3] += 0.768595041322314;
          result[4] += 0;
          result[5] += 0.05785123966942149;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2682926829268293;
          result[3] += 0.024390243902439025;
          result[4] += 0.2926829268292683;
          result[5] += 0.4146341463414634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.782608695652174;
          result[3] += 0.13043478260869565;
          result[4] += 0.021739130434782608;
          result[5] += 0.06521739130434782;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.14285714285714285;
          result[2] += 0.38095238095238093;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.8125;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0625;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45652173913043476;
          result[3] += 0.2608695652173913;
          result[4] += 0;
          result[5] += 0.2826086956521739;
        } else {
          result[0] += 0.001071811361200429;
          result[1] += 0;
          result[2] += 0.9335476956055735;
          result[3] += 0.057877813504823156;
          result[4] += 0;
          result[5] += 0.007502679528403002;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007380073800738007;
          result[1] += 0.014760147601476014;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9114391143911439;
          result[5] += 0.06642066420664207;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
          result[0] += 0.05005688282138794;
          result[1] += 0.0011376564277588168;
          result[2] += 0.0022753128555176336;
          result[3] += 0.048919226393629126;
          result[4] += 0.04436860068259386;
          result[5] += 0.8532423208191127;
        } else {
          result[0] += 0.007547169811320755;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47924528301886793;
          result[4] += 0.022641509433962263;
          result[5] += 0.49056603773584906;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7673090649536046;
          result[1] += 0.07708779443254819;
          result[2] += 0;
          result[3] += 0.025695931477516063;
          result[4] += 0.11563169164882228;
          result[5] += 0.014275517487508924;
        } else {
          result[0] += 0.2087227414330218;
          result[1] += 0.009345794392523364;
          result[2] += 0.22741433021806853;
          result[3] += 0.2803738317757009;
          result[4] += 0.1059190031152648;
          result[5] += 0.16822429906542055;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
          result[0] += 0.007712082262210798;
          result[1] += 0.9845758354755785;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007712082262210798;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12195121951219512;
          result[4] += 0.024390243902439025;
          result[5] += 0.8536585365853658;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0.05714285714285714;
          result[3] += 0.6095238095238096;
          result[4] += 0.02857142857142857;
          result[5] += 0.2761904761904762;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.15384615384615385;
          result[4] += 0.057692307692307696;
          result[5] += 0.5192307692307693;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0.023809523809523808;
          result[1] += 0;
          result[2] += 0.4365079365079365;
          result[3] += 0.36507936507936506;
          result[4] += 0;
          result[5] += 0.1746031746031746;
        } else {
          result[0] += 0.08333333333333334;
          result[1] += 0.010000000000000002;
          result[2] += 0.7500000000000001;
          result[3] += 0.14000000000000004;
          result[4] += 0.003333333333333334;
          result[5] += 0.013333333333333336;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0.14285714285714285;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030303030303030303;
          result[1] += 0;
          result[2] += 0.9590909090909091;
          result[3] += 0.03333333333333333;
          result[4] += 0;
          result[5] += 0.004545454545454545;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        } else {
          result[0] += 0.010230179028132993;
          result[1] += 0.017902813299232736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.907928388746803;
          result[5] += 0.0639386189258312;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0015408320493066256;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.026194144838212634;
          result[4] += 0.029275808936825885;
          result[5] += 0.9429892141756548;
        } else {
          result[0] += 0.12559618441971382;
          result[1] += 0.014308426073131956;
          result[2] += 0.030206677265500796;
          result[3] += 0.3004769475357711;
          result[4] += 0.09220985691573927;
          result[5] += 0.43720190779014306;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8602150537634409;
          result[1] += 0.026468155500413565;
          result[2] += 0.011579818031430935;
          result[3] += 0.02481389578163772;
          result[4] += 0.05955334987593052;
          result[5] += 0.017369727047146403;
        } else {
          result[0] += 0.16296296296296298;
          result[1] += 0.012345679012345678;
          result[2] += 0.20987654320987653;
          result[3] += 0.26666666666666666;
          result[4] += 0.056790123456790124;
          result[5] += 0.291358024691358;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0.90625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.4791666666666667;
          result[4] += 0;
          result[5] += 0.2708333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5588235294117647;
          result[3] += 0.4117647058823529;
          result[4] += 0.00980392156862745;
          result[5] += 0.0196078431372549;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8208955223880597;
          result[3] += 0;
          result[4] += 0.04477611940298507;
          result[5] += 0.13432835820895522;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.006361323155216285;
          result[1] += 0;
          result[2] += 0.9478371501272265;
          result[3] += 0.043256997455470736;
          result[4] += 0;
          result[5] += 0.002544529262086514;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)46.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014492753623188406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9758454106280193;
          result[5] += 0.00966183574879227;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          result[0] += 0.868421052631579;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13157894736842105;
          result[5] += 0;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0.2077922077922078;
          result[2] += 0;
          result[3] += 0.05194805194805195;
          result[4] += 0.37662337662337664;
          result[5] += 0.35064935064935066;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.004993757802746567;
          result[2] += 0;
          result[3] += 0.03745318352059925;
          result[4] += 0.039950062421972535;
          result[5] += 0.9176029962546817;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.0051813471502590676;
          result[2] += 0.08808290155440414;
          result[3] += 0.30569948186528495;
          result[4] += 0;
          result[5] += 0.6010362694300518;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007352941176470589;
          result[3] += 0.7647058823529412;
          result[4] += 0;
          result[5] += 0.22794117647058826;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.39285714285714285;
          result[2] += 0;
          result[3] += 0.21428571428571427;
          result[4] += 0.39285714285714285;
          result[5] += 0;
        } else {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9758454106280193;
          result[2] += 0;
          result[3] += 0.00966183574879227;
          result[4] += 0.012077294685990338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.08633093525179858;
          result[1] += 0.2086330935251799;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.683453237410072;
          result[5] += 0.021582733812949645;
        } else {
          result[0] += 0.7317744154057773;
          result[1] += 0.01237964236588721;
          result[2] += 0.03507565337001376;
          result[3] += 0.07290233837689135;
          result[4] += 0.0797799174690509;
          result[5] += 0.06808803301237966;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          result[0] += 0.027522935779816515;
          result[1] += 0.2018348623853211;
          result[2] += 0.11926605504587157;
          result[3] += 0.08256880733944955;
          result[4] += 0.21100917431192662;
          result[5] += 0.3577981651376147;
        } else {
          result[0] += 0.031496062992125984;
          result[1] += 0;
          result[2] += 0.42913385826771655;
          result[3] += 0.40551181102362205;
          result[4] += 0.003937007874015748;
          result[5] += 0.12992125984251968;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.48;
          result[1] += 0;
          result[2] += 0.24;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00772626931567329;
          result[1] += 0;
          result[2] += 0.9039735099337748;
          result[3] += 0.0695364238410596;
          result[4] += 0;
          result[5] += 0.018763796909492272;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.01968503937007874;
          result[1] += 0.007874015748031496;
          result[2] += 0;
          result[3] += 0.007874015748031496;
          result[4] += 0.8779527559055118;
          result[5] += 0.08661417322834646;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0013333333333333333;
          result[1] += 0;
          result[2] += 0.016;
          result[3] += 0.018666666666666668;
          result[4] += 0.044;
          result[5] += 0.92;
        } else {
          result[0] += 0.09887640449438202;
          result[1] += 0.0022471910112359553;
          result[2] += 0.008988764044943821;
          result[3] += 0.31685393258426964;
          result[4] += 0.08314606741573034;
          result[5] += 0.4898876404494382;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.029197080291970802;
          result[1] += 0.19708029197080293;
          result[2] += 0.0072992700729927005;
          result[3] += 0.0072992700729927005;
          result[4] += 0.6861313868613139;
          result[5] += 0.072992700729927;
        } else {
          result[0] += 0.007125890736342043;
          result[1] += 0.9833729216152018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009501187648456057;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          result[0] += 0.08496732026143793;
          result[1] += 0.3529411764705883;
          result[2] += 0.05882352941176471;
          result[3] += 0.07189542483660132;
          result[4] += 0.2679738562091504;
          result[5] += 0.16339869281045755;
        } else {
          result[0] += 0.772020725388601;
          result[1] += 0.007401924500370096;
          result[2] += 0.028127313101406367;
          result[3] += 0.07179866765358993;
          result[4] += 0.05921539600296077;
          result[5] += 0.0614359733530718;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.28125;
          result[2] += 0.03125;
          result[3] += 0.21875;
          result[4] += 0.46875;
          result[5] += 0;
        } else {
          result[0] += 0.037383177570093455;
          result[1] += 0.018691588785046728;
          result[2] += 0.08411214953271028;
          result[3] += 0.102803738317757;
          result[4] += 0.06542056074766354;
          result[5] += 0.6915887850467289;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.049586776859504134;
          result[3] += 0.6942148760330579;
          result[4] += 0;
          result[5] += 0.256198347107438;
        } else {
          result[0] += 0.21428571428571427;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0.10714285714285714;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.5692307692307692;
          result[4] += 0;
          result[5] += 0.03076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0.013245033112582781;
          result[2] += 0.6821192052980133;
          result[3] += 0.25165562913907286;
          result[4] += 0;
          result[5] += 0.052980132450331126;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.7297297297297297;
          result[1] += 0;
          result[2] += 0.2702702702702703;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004032258064516129;
          result[1] += 0;
          result[2] += 0.9422043010752689;
          result[3] += 0.04973118279569892;
          result[4] += 0;
          result[5] += 0.004032258064516129;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
          result[0] += 0.4;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012244897959183673;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0.0163265306122449;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0.9054054054054055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0810810810810811;
          result[5] += 0.013513513513513516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05084745762711865;
          result[4] += 0.2711864406779661;
          result[5] += 0.6779661016949152;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0012077294685990338;
          result[1] += 0.0036231884057971015;
          result[2] += 0.0024154589371980675;
          result[3] += 0.033816425120772944;
          result[4] += 0.04710144927536232;
          result[5] += 0.9118357487922706;
        } else {
          result[0] += 0.044444444444444446;
          result[1] += 0.10666666666666667;
          result[2] += 0.02666666666666667;
          result[3] += 0.21777777777777776;
          result[4] += 0.06222222222222222;
          result[5] += 0.5422222222222223;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0.01646090534979424;
          result[1] += 0.024691358024691357;
          result[2] += 0.00823045267489712;
          result[3] += 0.5596707818930041;
          result[4] += 0.00411522633744856;
          result[5] += 0.3868312757201646;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9781553398058253;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.021844660194174758;
          result[5] += 0;
        } else {
          result[0] += 0.04411764705882353;
          result[1] += 0.15441176470588236;
          result[2] += 0;
          result[3] += 0.08088235294117647;
          result[4] += 0.6764705882352942;
          result[5] += 0.04411764705882353;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
          result[0] += 0.12686567164179105;
          result[1] += 0.3358208955223881;
          result[2] += 0.029850746268656716;
          result[3] += 0.04477611940298507;
          result[4] += 0.44776119402985076;
          result[5] += 0.014925373134328358;
        } else {
          result[0] += 0.83889816360601;
          result[1] += 0.0025041736227045075;
          result[2] += 0.02337228714524207;
          result[3] += 0.055926544240400666;
          result[4] += 0.05008347245409015;
          result[5] += 0.02921535893155259;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          result[0] += 0.02666666666666667;
          result[1] += 0.05333333333333334;
          result[2] += 0.05333333333333334;
          result[3] += 0.04;
          result[4] += 0.18666666666666668;
          result[5] += 0.64;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40588235294117647;
          result[3] += 0.4117647058823529;
          result[4] += 0.011764705882352941;
          result[5] += 0.17058823529411765;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.028077753779697623;
          result[1] += 0;
          result[2] += 0.7861771058315334;
          result[3] += 0.1490280777537797;
          result[4] += 0.0021598272138228943;
          result[5] += 0.03455723542116631;
        } else {
          result[0] += 0.001838235294117647;
          result[1] += 0;
          result[2] += 0.96875;
          result[3] += 0.022058823529411766;
          result[4] += 0;
          result[5] += 0.007352941176470588;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
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
          result[4] += 0.7962962962962963;
          result[5] += 0.2037037037037037;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          result[0] += 0.96875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03125;
          result[5] += 0;
        } else {
          result[0] += 0.006711409395973154;
          result[1] += 0;
          result[2] += 0.0011185682326621924;
          result[3] += 0.049217002237136466;
          result[4] += 0.03691275167785235;
          result[5] += 0.9060402684563759;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          result[0] += 0.028846153846153848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.125;
          result[5] += 0.7692307692307693;
        } else {
          result[0] += 0.03146853146853147;
          result[1] += 0.0034965034965034965;
          result[2] += 0.02097902097902098;
          result[3] += 0.5664335664335665;
          result[4] += 0.017482517482517484;
          result[5] += 0.36013986013986016;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
          result[0] += 0.014457831325301207;
          result[1] += 0.9301204819277109;
          result[2] += 0;
          result[3] += 0.002409638554216868;
          result[4] += 0.050602409638554224;
          result[5] += 0.002409638554216868;
        } else {
          result[0] += 0.12403100775193798;
          result[1] += 0.1937984496124031;
          result[2] += 0;
          result[3] += 0.03875968992248062;
          result[4] += 0.6201550387596899;
          result[5] += 0.023255813953488372;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8596638655462185;
          result[1] += 0.04789915966386555;
          result[2] += 0;
          result[3] += 0.014285714285714285;
          result[4] += 0.06722689075630252;
          result[5] += 0.010924369747899159;
        } else {
          result[0] += 0.26907630522088355;
          result[1] += 0.004016064257028112;
          result[2] += 0.19678714859437751;
          result[3] += 0.285140562248996;
          result[4] += 0.012048192771084338;
          result[5] += 0.23293172690763053;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0.018691588785046728;
          result[1] += 0.08411214953271028;
          result[2] += 0.07476635514018691;
          result[3] += 0.2897196261682243;
          result[4] += 0.16822429906542055;
          result[5] += 0.3644859813084112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4678362573099415;
          result[3] += 0.42105263157894735;
          result[4] += 0.017543859649122806;
          result[5] += 0.0935672514619883;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0.7058823529411765;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0;
        } else {
          result[0] += 0.03121852970795569;
          result[1] += 0;
          result[2] += 0.8962739174219537;
          result[3] += 0.06545820745216516;
          result[4] += 0;
          result[5] += 0.007049345417925478;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        } else {
          result[0] += 0.01486988847583643;
          result[1] += 0.01486988847583643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8921933085501859;
          result[5] += 0.07806691449814127;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          result[0] += 0.04397537379067722;
          result[1] += 0.006156552330694811;
          result[2] += 0.003518029903254178;
          result[3] += 0.0853122251539138;
          result[4] += 0.052770448548812667;
          result[5] += 0.8082673702726473;
        } else {
          result[0] += 0.006535947712418301;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.673202614379085;
          result[4] += 0.006535947712418301;
          result[5] += 0.3137254901960784;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7856609410007468;
          result[1] += 0.04854368932038835;
          result[2] += 0.005227781926811053;
          result[3] += 0.01717699775952203;
          result[4] += 0.128454070201643;
          result[5] += 0.014936519790888723;
        } else {
          result[0] += 0.19273743016759776;
          result[1] += 0.0446927374301676;
          result[2] += 0.1424581005586592;
          result[3] += 0.2346368715083799;
          result[4] += 0.06983240223463687;
          result[5] += 0.31564245810055863;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          result[0] += 0.0025188916876574307;
          result[1] += 0.9924433249370277;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005037783375314861;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17213114754098363;
          result[3] += 0.6557377049180328;
          result[4] += 0;
          result[5] += 0.17213114754098363;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7105263157894737;
          result[3] += 0.10526315789473684;
          result[4] += 0.02631578947368421;
          result[5] += 0.15789473684210525;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6330275229357798;
          result[3] += 0.3302752293577982;
          result[4] += 0;
          result[5] += 0.03669724770642202;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9056603773584906;
          result[3] += 0.07547169811320754;
          result[4] += 0;
          result[5] += 0.018867924528301886;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.7717391304347826;
          result[3] += 0.09782608695652174;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006462035541195475;
          result[1] += 0;
          result[2] += 0.9676898222940225;
          result[3] += 0.021001615508885296;
          result[4] += 0;
          result[5] += 0.004846526655896606;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0036496350364963502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9051094890510949;
          result[5] += 0.09124087591240876;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0070921985815602835;
          result[3] += 0.02127659574468085;
          result[4] += 0.03971631205673759;
          result[5] += 0.9319148936170213;
        } else {
          result[0] += 0.04580152671755725;
          result[1] += 0.007633587786259542;
          result[2] += 0.058524173027989825;
          result[3] += 0.3155216284987277;
          result[4] += 0.089058524173028;
          result[5] += 0.48346055979643765;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.06870229007633588;
          result[1] += 0.09923664122137404;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.816793893129771;
          result[5] += 0.015267175572519083;
        } else {
          result[0] += 0;
          result[1] += 0.9665924276169265;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0334075723830735;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8378164556962026;
          result[1] += 0.01819620253164557;
          result[2] += 0.007911392405063292;
          result[3] += 0.040348101265822785;
          result[4] += 0.05933544303797468;
          result[5] += 0.03639240506329114;
        } else {
          result[0] += 0.1419753086419753;
          result[1] += 0.00823045267489712;
          result[2] += 0.1831275720164609;
          result[3] += 0.29012345679012347;
          result[4] += 0.053497942386831275;
          result[5] += 0.3230452674897119;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0.25;
          result[3] += 0.11538461538461539;
          result[4] += 0.019230769230769232;
          result[5] += 0.5961538461538461;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14473684210526316;
          result[3] += 0.6842105263157895;
          result[4] += 0;
          result[5] += 0.17105263157894737;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0.5;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0.018018018018018018;
          result[1] += 0;
          result[2] += 0.7747747747747747;
          result[3] += 0.1891891891891892;
          result[4] += 0;
          result[5] += 0.018018018018018018;
        } else {
          result[0] += 0.016597510373443983;
          result[1] += 0;
          result[2] += 0.9446749654218534;
          result[3] += 0.03872752420470263;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.44;
          result[2] += 0;
          result[3] += 0.32;
          result[4] += 0.24;
          result[5] += 0;
        } else {
          result[0] += 0.006644518272425249;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006644518272425249;
          result[4] += 0.8704318936877077;
          result[5] += 0.11627906976744186;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.030371203599550055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04611923509561305;
          result[4] += 0.04499437570303712;
          result[5] += 0.8785151856017998;
        } else {
          result[0] += 0.12284069097888675;
          result[1] += 0.009596928982725527;
          result[2] += 0;
          result[3] += 0.3685220729366603;
          result[4] += 0.07677543186180422;
          result[5] += 0.42226487523992323;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.39316239316239315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5982905982905983;
          result[5] += 0.008547008547008548;
        } else {
          result[0] += 0;
          result[1] += 0.9858823529411764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01411764705882353;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8577699736611063;
          result[1] += 0.03424056189640036;
          result[2] += 0.011413520632133451;
          result[3] += 0.01580333625987709;
          result[4] += 0.06321334503950836;
          result[5] += 0.017559262510974543;
        } else {
          result[0] += 0.24317617866004962;
          result[1] += 0.01488833746898263;
          result[2] += 0.25806451612903225;
          result[3] += 0.27543424317617865;
          result[4] += 0.04218362282878412;
          result[5] += 0.1662531017369727;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08955223880597014;
          result[3] += 0.3283582089552239;
          result[4] += 0.04477611940298507;
          result[5] += 0.5373134328358209;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.07894736842105263;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.10526315789473684;
          result[4] += 0.02631578947368421;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7681159420289856;
          result[3] += 0.21376811594202902;
          result[4] += 0;
          result[5] += 0.01811594202898551;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9720767888307156;
          result[3] += 0.02443280977312391;
          result[4] += 0;
          result[5] += 0.0034904013961605585;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)34) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01107011070110701;
          result[1] += 0.02214022140221402;
          result[2] += 0;
          result[3] += 0.02952029520295203;
          result[4] += 0.9040590405904059;
          result[5] += 0.033210332103321034;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0.022702702702702703;
          result[1] += 0;
          result[2] += 0.001081081081081081;
          result[3] += 0.0627027027027027;
          result[4] += 0.07351351351351351;
          result[5] += 0.84;
        } else {
          result[0] += 0.08244680851063829;
          result[1] += 0.034574468085106384;
          result[2] += 0.07712765957446809;
          result[3] += 0.38563829787234044;
          result[4] += 0.09042553191489362;
          result[5] += 0.32978723404255317;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.2184873949579832;
          result[2] += 0;
          result[3] += 0.025210084033613446;
          result[4] += 0.6302521008403361;
          result[5] += 0.12605042016806722;
        } else {
          result[0] += 0;
          result[1] += 0.9576470588235294;
          result[2] += 0.011764705882352941;
          result[3] += 0;
          result[4] += 0.03058823529411765;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8604240282685512;
          result[1] += 0.03356890459363958;
          result[2] += 0.0035335689045936395;
          result[3] += 0.024734982332155476;
          result[4] += 0.061837455830388695;
          result[5] += 0.015901060070671377;
        } else {
          result[0] += 0.19183673469387755;
          result[1] += 0.01020408163265306;
          result[2] += 0.23265306122448978;
          result[3] += 0.32448979591836735;
          result[4] += 0.053061224489795916;
          result[5] += 0.18775510204081633;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.017543859649122806;
          result[2] += 0.20175438596491227;
          result[3] += 0.38596491228070173;
          result[4] += 0.03508771929824561;
          result[5] += 0.35964912280701755;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.17647058823529413;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.9090909090909091;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7951219512195122;
          result[3] += 0.17073170731707318;
          result[4] += 0;
          result[5] += 0.03414634146341464;
        } else {
          result[0] += 0.011494252873563218;
          result[1] += 0;
          result[2] += 0.9626436781609196;
          result[3] += 0.021551724137931036;
          result[4] += 0;
          result[5] += 0.004310344827586207;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.00909090909090909;
          result[1] += 0.004545454545454545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9727272727272728;
          result[5] += 0.013636363636363636;
        } else {
          result[0] += 0.20618556701030927;
          result[1] += 0.18556701030927836;
          result[2] += 0.010309278350515464;
          result[3] += 0.05154639175257732;
          result[4] += 0.21649484536082475;
          result[5] += 0.32989690721649484;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011904761904761906;
          result[2] += 0;
          result[3] += 0.05476190476190476;
          result[4] += 0.055952380952380955;
          result[5] += 0.888095238095238;
        } else {
          result[0] += 0.013100436681222708;
          result[1] += 0;
          result[2] += 0.017467248908296946;
          result[3] += 0.6506550218340612;
          result[4] += 0.03493449781659389;
          result[5] += 0.2838427947598254;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9813333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018666666666666668;
          result[5] += 0;
        } else {
          result[0] += 0.013245033112582783;
          result[1] += 0.19867549668874174;
          result[2] += 0.03973509933774835;
          result[3] += 0;
          result[4] += 0.7350993377483445;
          result[5] += 0.013245033112582783;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8417865253595761;
          result[1] += 0.03255109765329296;
          result[2] += 0.003028009084027252;
          result[3] += 0.023467070401211203;
          result[4] += 0.06888720666161999;
          result[5] += 0.03028009084027252;
        } else {
          result[0] += 0.111358574610245;
          result[1] += 0.013363028953229399;
          result[2] += 0.21603563474387527;
          result[3] += 0.24053452115812918;
          result[4] += 0.066815144766147;
          result[5] += 0.3518930957683742;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0.07692307692307693;
          result[3] += 0.3076923076923077;
          result[4] += 0.46153846153846156;
          result[5] += 0;
        } else {
          result[0] += 0.03896103896103896;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16883116883116883;
          result[4] += 0.012987012987012988;
          result[5] += 0.7792207792207793;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22580645161290322;
          result[3] += 0.6774193548387096;
          result[4] += 0;
          result[5] += 0.0967741935483871;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.7916666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.0625;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9354838709677419;
          result[1] += 0;
          result[2] += 0.06451612903225806;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7153284671532847;
          result[3] += 0.24817518248175183;
          result[4] += 0;
          result[5] += 0.0364963503649635;
        } else {
          result[0] += 0.00904392764857881;
          result[1] += 0;
          result[2] += 0.9341085271317829;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0.0012919896640826874;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.8518518518518519;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14814814814814814;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.020338983050847456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9627118644067797;
          result[5] += 0.01694915254237288;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8837209302325582;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09302325581395349;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0.026772793053545588;
          result[1] += 0.016642547033285094;
          result[2] += 0.01085383502170767;
          result[3] += 0.13965267727930536;
          result[4] += 0.08031837916063676;
          result[5] += 0.7257597684515196;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100) ) ) {
          result[0] += 0.033707865168539325;
          result[1] += 0.43820224719101125;
          result[2] += 0.02247191011235955;
          result[3] += 0.15730337078651685;
          result[4] += 0.34831460674157305;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8876629889669007;
          result[1] += 0.022066198595787363;
          result[2] += 0.006018054162487462;
          result[3] += 0.024072216649949848;
          result[4] += 0.04914744232698094;
          result[5] += 0.011033099297893681;
        } else {
          result[0] += 0.3138075313807532;
          result[1] += 0.004184100418410042;
          result[2] += 0.1882845188284519;
          result[3] += 0.2761506276150628;
          result[4] += 0.037656903765690385;
          result[5] += 0.17991631799163182;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008403361344537816;
          result[2] += 0.1008403361344538;
          result[3] += 0.5378151260504203;
          result[4] += 0.033613445378151266;
          result[5] += 0.319327731092437;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.43333333333333335;
          result[5] += 0.5666666666666667;
        } else {
          result[0] += 0.10714285714285714;
          result[1] += 0;
          result[2] += 0.7053571428571429;
          result[3] += 0.09821428571428571;
          result[4] += 0.008928571428571428;
          result[5] += 0.08035714285714286;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0.6274509803921569;
          result[4] += 0;
          result[5] += 0.13725490196078433;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7397260273972602;
          result[3] += 0.2191780821917808;
          result[4] += 0;
          result[5] += 0.0410958904109589;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28571428571428575;
          result[3] += 0.07142857142857144;
          result[4] += 0.07142857142857144;
          result[5] += 0.5714285714285715;
        } else {
          result[0] += 0.00395778364116095;
          result[1] += 0;
          result[2] += 0.9485488126649076;
          result[3] += 0.040897097625329816;
          result[4] += 0;
          result[5] += 0.006596306068601583;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
          result[0] += 0.004739336492890996;
          result[1] += 0.004739336492890996;
          result[2] += 0;
          result[3] += 0.004739336492890996;
          result[4] += 0.95260663507109;
          result[5] += 0.03317535545023697;
        } else {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.06818181818181818;
          result[5] += 0.4318181818181818;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          result[0] += 0.02142051860202931;
          result[1] += 0;
          result[2] += 0.0011273957158962795;
          result[3] += 0.03269447576099211;
          result[4] += 0.05975197294250282;
          result[5] += 0.8850056369785795;
        } else {
          result[0] += 0.059880239520958084;
          result[1] += 0.023952095808383235;
          result[2] += 0;
          result[3] += 0.47904191616766467;
          result[4] += 0.011976047904191617;
          result[5] += 0.4251497005988024;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.35294117647058826;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6470588235294118;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9950617283950617;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0049382716049382715;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7299270072992702;
          result[1] += 0.04306569343065694;
          result[2] += 0.0007299270072992701;
          result[3] += 0.028467153284671535;
          result[4] += 0.14744525547445259;
          result[5] += 0.05036496350364964;
        } else {
          result[0] += 0.15588235294117647;
          result[1] += 0.01764705882352941;
          result[2] += 0.20588235294117646;
          result[3] += 0.3029411764705882;
          result[4] += 0.029411764705882353;
          result[5] += 0.28823529411764703;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.047058823529411764;
          result[4] += 0.10588235294117647;
          result[5] += 0.8352941176470589;
        } else {
          result[0] += 0.04;
          result[1] += 0.08;
          result[2] += 0.64;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0.09615384615384616;
          result[2] += 0.28846153846153844;
          result[3] += 0.1346153846153846;
          result[4] += 0.11538461538461539;
          result[5] += 0.21153846153846154;
        } else {
          result[0] += 0.007936507936507936;
          result[1] += 0.007936507936507936;
          result[2] += 0.06349206349206349;
          result[3] += 0.8095238095238095;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          result[0] += 0.328125;
          result[1] += 0.03125;
          result[2] += 0.3125;
          result[3] += 0.203125;
          result[4] += 0.015625;
          result[5] += 0.109375;
        } else {
          result[0] += 0.013921113689095127;
          result[1] += 0;
          result[2] += 0.7540603248259861;
          result[3] += 0.20649651972157773;
          result[4] += 0;
          result[5] += 0.025522041763341066;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8674698795180723;
          result[3] += 0.12048192771084337;
          result[4] += 0;
          result[5] += 0.012048192771084338;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9908256880733946;
          result[3] += 0.009174311926605505;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.013157894736842105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.956140350877193;
          result[5] += 0.03070175438596491;
        } else {
          result[0] += 0.4175824175824176;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24175824175824176;
          result[5] += 0.34065934065934067;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.003161222339304531;
          result[2] += 0;
          result[3] += 0.05374077976817703;
          result[4] += 0.05584826132771338;
          result[5] += 0.8872497365648051;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027149321266968326;
          result[3] += 0.5565610859728507;
          result[4] += 0.03167420814479638;
          result[5] += 0.38461538461538464;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.006864988558352403;
          result[1] += 0.9794050343249429;
          result[2] += 0.0022883295194508014;
          result[3] += 0.0022883295194508014;
          result[4] += 0.009153318077803205;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.2966507177033493;
          result[2] += 0;
          result[3] += 0.019138755980861243;
          result[4] += 0.5885167464114832;
          result[5] += 0.004784688995215311;
        } else {
          result[0] += 0.7431457431457432;
          result[1] += 0.006493506493506495;
          result[2] += 0.05266955266955268;
          result[3] += 0.06926406926406928;
          result[4] += 0.05699855699855701;
          result[5] += 0.07142857142857144;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12941176470588237;
          result[3] += 0.2235294117647059;
          result[4] += 0.058823529411764705;
          result[5] += 0.5882352941176471;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14035087719298245;
          result[3] += 0.7192982456140351;
          result[4] += 0.008771929824561403;
          result[5] += 0.13157894736842105;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0.09375;
          result[3] += 0.1875;
          result[4] += 0.34375;
          result[5] += 0.34375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8192771084337349;
          result[3] += 0.13253012048192772;
          result[4] += 0;
          result[5] += 0.04819277108433735;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0.07262569832402235;
          result[1] += 0.0111731843575419;
          result[2] += 0.6312849162011173;
          result[3] += 0.2122905027932961;
          result[4] += 0.00558659217877095;
          result[5] += 0.0670391061452514;
        } else {
          result[0] += 0.0058479532163742695;
          result[1] += 0;
          result[2] += 0.9064327485380118;
          result[3] += 0.0760233918128655;
          result[4] += 0;
          result[5] += 0.011695906432748539;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
          result[0] += 0.2;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.0016;
          result[1] += 0;
          result[2] += 0.9728;
          result[3] += 0.0208;
          result[4] += 0;
          result[5] += 0.0048;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
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
          result[4] += 0.8857142857142857;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015527950310559006;
          result[4] += 0.015527950310559006;
          result[5] += 0.968944099378882;
        } else {
          result[0] += 0.007352941176470588;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21323529411764705;
          result[4] += 0.08823529411764706;
          result[5] += 0.6911764705882353;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
          result[0] += 0.9;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06;
          result[5] += 0;
        } else {
          result[0] += 0.009652509652509652;
          result[1] += 0.0019305019305019305;
          result[2] += 0.013513513513513514;
          result[3] += 0.35135135135135137;
          result[4] += 0.04826254826254826;
          result[5] += 0.5752895752895753;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.06;
          result[1] += 0.2866666666666667;
          result[2] += 0;
          result[3] += 0.02;
          result[4] += 0.6;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.007125890736342043;
          result[1] += 0.9667458432304038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.026128266033254157;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8441558441558441;
          result[1] += 0.03982683982683983;
          result[2] += 0.008658008658008658;
          result[3] += 0.023376623376623377;
          result[4] += 0.0735930735930736;
          result[5] += 0.01038961038961039;
        } else {
          result[0] += 0.25510204081632654;
          result[1] += 0;
          result[2] += 0.09183673469387756;
          result[3] += 0.35714285714285715;
          result[4] += 0.08163265306122448;
          result[5] += 0.21428571428571427;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0.014598540145985401;
          result[1] += 0.0364963503649635;
          result[2] += 0.09854014598540146;
          result[3] += 0.48175182481751827;
          result[4] += 0.06569343065693431;
          result[5] += 0.3029197080291971;
        } else {
          result[0] += 0.006711409395973154;
          result[1] += 0;
          result[2] += 0.6845637583892618;
          result[3] += 0.21476510067114093;
          result[4] += 0;
          result[5] += 0.09395973154362416;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          result[0] += 0.36923076923076925;
          result[1] += 0.046153846153846156;
          result[2] += 0.36153846153846153;
          result[3] += 0.11538461538461539;
          result[4] += 0.015384615384615385;
          result[5] += 0.09230769230769231;
        } else {
          result[0] += 0.007001166861143524;
          result[1] += 0;
          result[2] += 0.8996499416569428;
          result[3] += 0.07934655775962661;
          result[4] += 0.0011668611435239206;
          result[5] += 0.012835472578763127;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.0041841004184100415;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9665271966527197;
          result[5] += 0.029288702928870293;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031420765027322405;
          result[4] += 0.03415300546448088;
          result[5] += 0.9344262295081968;
        } else {
          result[0] += 0.09014675052410902;
          result[1] += 0.027253668763102725;
          result[2] += 0.018867924528301886;
          result[3] += 0.3312368972746331;
          result[4] += 0.06708595387840671;
          result[5] += 0.46540880503144655;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0.9757281553398058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019417475728155338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7385714285714284;
          result[1] += 0.02785714285714285;
          result[2] += 0.0014285714285714284;
          result[3] += 0.026428571428571423;
          result[4] += 0.16499999999999998;
          result[5] += 0.04071428571428571;
        } else {
          result[0] += 0.17586912065439672;
          result[1] += 0.002044989775051125;
          result[2] += 0.2556237218813906;
          result[3] += 0.29243353783231085;
          result[4] += 0.03885480572597137;
          result[5] += 0.23517382413087934;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05454545454545454;
          result[3] += 0.2545454545454545;
          result[4] += 0.01818181818181818;
          result[5] += 0.6727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.18518518518518517;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.016260162601626018;
          result[2] += 0.6666666666666666;
          result[3] += 0.2601626016260163;
          result[4] += 0.008130081300813009;
          result[5] += 0.04878048780487805;
        } else {
          result[0] += 0.01607717041800643;
          result[1] += 0.003215434083601286;
          result[2] += 0.8745980707395499;
          result[3] += 0.10289389067524116;
          result[4] += 0;
          result[5] += 0.003215434083601286;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
          result[0] += 0.007407407407407408;
          result[1] += 0;
          result[2] += 0.9481481481481482;
          result[3] += 0.044444444444444446;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9973753280839895;
          result[3] += 0.0026246719160104987;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01652892561983471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9545454545454546;
          result[5] += 0.028925619834710745;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5348837209302325;
          result[5] += 0.4418604651162791;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0014970059880239522;
          result[1] += 0;
          result[2] += 0.0014970059880239522;
          result[3] += 0.02245508982035928;
          result[4] += 0.023952095808383235;
          result[5] += 0.9505988023952096;
        } else {
          result[0] += 0.08677685950413223;
          result[1] += 0.008264462809917356;
          result[2] += 0;
          result[3] += 0.2768595041322314;
          result[4] += 0.0743801652892562;
          result[5] += 0.5537190082644629;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6296296296296297;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.019753086419753086;
          result[1] += 0.9679012345679012;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012345679012345678;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7823228634039445;
          result[1] += 0.042366691015339665;
          result[2] += 0.002191380569758948;
          result[3] += 0.015339663988312637;
          result[4] += 0.1329437545653762;
          result[5] += 0.02483564645726808;
        } else {
          result[0] += 0.19287833827893175;
          result[1] += 0.005934718100890208;
          result[2] += 0.24925816023738873;
          result[3] += 0.3026706231454006;
          result[4] += 0.017804154302670624;
          result[5] += 0.2314540059347181;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.175;
          result[5] += 0.575;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15957446808510642;
          result[3] += 0.5957446808510639;
          result[4] += 0;
          result[5] += 0.2446808510638298;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.10256410256410256;
          result[2] += 0;
          result[3] += 0.1282051282051282;
          result[4] += 0.46153846153846156;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.10365853658536585;
          result[1] += 0;
          result[2] += 0.6402439024390244;
          result[3] += 0.17073170731707318;
          result[4] += 0.006097560975609756;
          result[5] += 0.07926829268292683;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14814814814814814;
          result[3] += 0.8518518518518519;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.006734006734006734;
          result[1] += 0;
          result[2] += 0.8282828282828283;
          result[3] += 0.13468013468013468;
          result[4] += 0;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9879310344827587;
          result[3] += 0.010344827586206896;
          result[4] += 0;
          result[5] += 0.0017241379310344827;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)32.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01593625498007968;
          result[2] += 0;
          result[3] += 0.01195219123505976;
          result[4] += 0.9083665338645418;
          result[5] += 0.06374501992031872;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.7464788732394366;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2535211267605634;
          result[5] += 0;
        } else {
          result[0] += 0.004314063848144953;
          result[1] += 0.0025884383088869713;
          result[2] += 0.003451251078515962;
          result[3] += 0.16566005176876616;
          result[4] += 0.03968938740293356;
          result[5] += 0.7842968075927523;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0.14634146341463414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8292682926829268;
          result[5] += 0.012195121951219513;
        } else {
          result[0] += 0;
          result[1] += 0.9849462365591398;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015053763440860216;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0.43737166324435317;
          result[1] += 0.008213552361396304;
          result[2] += 0.08624229979466119;
          result[3] += 0.1971252566735113;
          result[4] += 0.1375770020533881;
          result[5] += 0.13347022587268995;
        } else {
          result[0] += 0.8353831598864712;
          result[1] += 0.02554399243140965;
          result[2] += 0.048249763481551564;
          result[3] += 0.014191106906338695;
          result[4] += 0.05392620624408704;
          result[5] += 0.02270577105014191;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.13333333333333333;
          result[4] += 0.5333333333333333;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.011904761904761904;
          result[2] += 0.17857142857142858;
          result[3] += 0.14285714285714285;
          result[4] += 0.023809523809523808;
          result[5] += 0.6428571428571429;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08490566037735849;
          result[3] += 0.6886792452830188;
          result[4] += 0.009433962264150943;
          result[5] += 0.2169811320754717;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8421052631578947;
          result[1] += 0.15789473684210525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.32142857142857145;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.015037593984962405;
          result[1] += 0.007518796992481203;
          result[2] += 0.7744360902255639;
          result[3] += 0.16917293233082706;
          result[4] += 0;
          result[5] += 0.03383458646616541;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9696092619392185;
          result[3] += 0.030390738060781478;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.010256410256410256;
          result[2] += 0.010256410256410256;
          result[3] += 0;
          result[4] += 0.9794871794871794;
          result[5] += 0;
        } else {
          result[0] += 0.013513513513513514;
          result[1] += 0;
          result[2] += 0.013513513513513514;
          result[3] += 0.013513513513513514;
          result[4] += 0.581081081081081;
          result[5] += 0.3783783783783784;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          result[0] += 0.013761467889908258;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.047018348623853214;
          result[4] += 0.05619266055045872;
          result[5] += 0.8830275229357798;
        } else {
          result[0] += 0.04883720930232558;
          result[1] += 0.06279069767441861;
          result[2] += 0.004651162790697674;
          result[3] += 0.37209302325581395;
          result[4] += 0.009302325581395349;
          result[5] += 0.5023255813953489;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8125;
          result[5] += 0;
        } else {
          result[0] += 0.00228310502283105;
          result[1] += 0.9726027397260274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02511415525114155;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.1799163179916318;
          result[1] += 0.11715481171548117;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6778242677824268;
          result[5] += 0.02510460251046025;
        } else {
          result[0] += 0.6950495049504951;
          result[1] += 0.006600660066006602;
          result[2] += 0.05280528052805281;
          result[3] += 0.09504950495049506;
          result[4] += 0.05148514851485149;
          result[5] += 0.09900990099009903;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0784313725490196;
          result[3] += 0.7843137254901961;
          result[4] += 0;
          result[5] += 0.13725490196078433;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.30952380952380953;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8529411764705883;
          result[3] += 0.0735294117647059;
          result[4] += 0;
          result[5] += 0.0735294117647059;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6086956521739131;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8257575757575758;
          result[3] += 0.17424242424242425;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013824884792626729;
          result[1] += 0;
          result[2] += 0.9400921658986175;
          result[3] += 0.039938556067588324;
          result[4] += 0;
          result[5] += 0.006144393241167435;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.009900990099009901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9653465346534653;
          result[5] += 0.024752475247524754;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0.05128205128205128;
          result[2] += 0.10256410256410256;
          result[3] += 0.05128205128205128;
          result[4] += 0.38461538461538464;
          result[5] += 0.38461538461538464;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03315881326352531;
          result[1] += 0.005235602094240838;
          result[2] += 0.0017452006980802793;
          result[3] += 0.07853403141361257;
          result[4] += 0.07155322862129145;
          result[5] += 0.8097731239092496;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6708860759493671;
          result[4] += 0.0189873417721519;
          result[5] += 0.310126582278481;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2708333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7291666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9912087912087912;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008791208791208791;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.81657280772325;
          result[1] += 0.030571198712791625;
          result[2] += 0.004827031375703941;
          result[3] += 0.024135156878519703;
          result[4] += 0.09573612228479482;
          result[5] += 0.028157683024939654;
        } else {
          result[0] += 0.12300683371298406;
          result[1] += 0.0387243735763098;
          result[2] += 0.2938496583143508;
          result[3] += 0.27790432801822323;
          result[4] += 0.0774487471526196;
          result[5] += 0.18906605922551253;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.11538461538461539;
          result[4] += 0.038461538461538464;
          result[5] += 0.7692307692307693;
        } else {
          result[0] += 0.010416666666666666;
          result[1] += 0.010416666666666666;
          result[2] += 0.46875;
          result[3] += 0.2604166666666667;
          result[4] += 0.020833333333333332;
          result[5] += 0.22916666666666666;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6315789473684211;
          result[3] += 0.34736842105263166;
          result[4] += 0;
          result[5] += 0.02105263157894737;
        } else {
          result[0] += 0.04666666666666667;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.11333333333333333;
          result[4] += 0;
          result[5] += 0.006666666666666667;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0014727540500736377;
          result[1] += 0;
          result[2] += 0.9646539027982327;
          result[3] += 0.026509572901325478;
          result[4] += 0;
          result[5] += 0.007363770250368188;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0.008130081300813009;
          result[4] += 0.9065040650406504;
          result[5] += 0.06097560975609756;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02634054562558796;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.060206961429915336;
          result[4] += 0.0761994355597366;
          result[5] += 0.8372530573847601;
        } else {
          result[0] += 0.021352313167259787;
          result[1] += 0.0035587188612099642;
          result[2] += 0.06761565836298933;
          result[3] += 0.5195729537366548;
          result[4] += 0.03558718861209965;
          result[5] += 0.35231316725978645;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8214285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.0025000000000000005;
          result[1] += 0.9650000000000001;
          result[2] += 0;
          result[3] += 0.012500000000000002;
          result[4] += 0.020000000000000004;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.81201248049922;
          result[1] += 0.032761310452418105;
          result[2] += 0.00702028081123245;
          result[3] += 0.017160686427457102;
          result[4] += 0.07878315132605306;
          result[5] += 0.05226209048361935;
        } else {
          result[0] += 0.15873015873015872;
          result[1] += 0.023809523809523808;
          result[2] += 0.17989417989417988;
          result[3] += 0.2698412698412698;
          result[4] += 0.06878306878306878;
          result[5] += 0.29894179894179895;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
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
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30303030303030304;
          result[3] += 0.5151515151515151;
          result[4] += 0;
          result[5] += 0.18181818181818182;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0.011111111111111112;
          result[1] += 0;
          result[2] += 0.7055555555555556;
          result[3] += 0.2388888888888889;
          result[4] += 0;
          result[5] += 0.044444444444444446;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005148005148005148;
          result[1] += 0;
          result[2] += 0.954954954954955;
          result[3] += 0.03861003861003861;
          result[4] += 0;
          result[5] += 0.001287001287001287;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
          result[0] += 0.00974025974025974;
          result[1] += 0.003246753246753247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.948051948051948;
          result[5] += 0.03896103896103896;
        } else {
          result[0] += 0;
          result[1] += 0.7857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21428571428571427;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.0010482180293501049;
          result[1] += 0;
          result[2] += 0.0031446540880503146;
          result[3] += 0.07023060796645703;
          result[4] += 0.09119496855345911;
          result[5] += 0.8343815513626834;
        } else {
          result[0] += 0.3302540415704388;
          result[1] += 0.03233256351039261;
          result[2] += 0.023094688221709007;
          result[3] += 0.19630484988452657;
          result[4] += 0.15011547344110854;
          result[5] += 0.2678983833718245;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0.012987012987012988;
          result[1] += 0.2727272727272727;
          result[2] += 0.012987012987012988;
          result[3] += 0.07792207792207792;
          result[4] += 0.5974025974025974;
          result[5] += 0.025974025974025976;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2847380410022779;
          result[1] += 0.02733485193621868;
          result[2] += 0.04100227790432802;
          result[3] += 0.31662870159453305;
          result[4] += 0.02050113895216401;
          result[5] += 0.3097949886104784;
        } else {
          result[0] += 0.8486590038314177;
          result[1] += 0.038314176245210725;
          result[2] += 0.027777777777777776;
          result[3] += 0.016283524904214558;
          result[4] += 0.06417624521072797;
          result[5] += 0.004789272030651341;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6904761904761905;
          result[4] += 0;
          result[5] += 0.30952380952380953;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.2777777777777778;
          result[4] += 0;
          result[5] += 0.6111111111111112;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3157894736842105;
          result[3] += 0.5131578947368421;
          result[4] += 0;
          result[5] += 0.17105263157894737;
        } else {
          result[0] += 0.020618556701030927;
          result[1] += 0;
          result[2] += 0.7577319587628866;
          result[3] += 0.13402061855670103;
          result[4] += 0;
          result[5] += 0.08762886597938144;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
          result[0] += 0.008720930232558141;
          result[1] += 0;
          result[2] += 0.7877906976744187;
          result[3] += 0.16569767441860467;
          result[4] += 0.002906976744186047;
          result[5] += 0.034883720930232565;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.00196078431372549;
          result[1] += 0;
          result[2] += 0.9882352941176471;
          result[3] += 0.00784313725490196;
          result[4] += 0;
          result[5] += 0.00196078431372549;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.01060070671378092;
          result[1] += 0;
          result[2] += 0.01060070671378092;
          result[3] += 0.0035335689045936395;
          result[4] += 0.9540636042402827;
          result[5] += 0.02120141342756184;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.8181818181818182;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030263157894736843;
          result[4] += 0.03289473684210526;
          result[5] += 0.9368421052631579;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0.7653061224489796;
          result[1] += 0.01020408163265306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22448979591836735;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02037617554858934;
          result[2] += 0.029780564263322883;
          result[3] += 0.35893416927899685;
          result[4] += 0.061128526645768025;
          result[5] += 0.5297805642633229;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.4409937888198758;
          result[2] += 0;
          result[3] += 0.012422360248447204;
          result[4] += 0.5031055900621118;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          result[0] += 0.6781456953642384;
          result[1] += 0.022516556291390728;
          result[2] += 0.06622516556291391;
          result[3] += 0.0728476821192053;
          result[4] += 0.09403973509933775;
          result[5] += 0.06622516556291391;
        } else {
          result[0] += 0.9943714821763602;
          result[1] += 0;
          result[2] += 0.005628517823639775;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          result[0] += 0.06818181818181818;
          result[1] += 0.09090909090909091;
          result[2] += 0.022727272727272728;
          result[3] += 0.11363636363636363;
          result[4] += 0.3181818181818182;
          result[5] += 0.38636363636363635;
        } else {
          result[0] += 0.014705882352941176;
          result[1] += 0;
          result[2] += 0.4950980392156863;
          result[3] += 0.4068627450980392;
          result[4] += 0.004901960784313725;
          result[5] += 0.0784313725490196;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.5;
          result[1] += 0.125;
          result[2] += 0.05;
          result[3] += 0.05;
          result[4] += 0.1;
          result[5] += 0.175;
        } else {
          result[0] += 0.006928406466512702;
          result[1] += 0;
          result[2] += 0.9376443418013857;
          result[3] += 0.046189376443418015;
          result[4] += 0;
          result[5] += 0.009237875288683603;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9800995024875622;
          result[5] += 0.01990049751243781;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.32432432432432434;
          result[5] += 0.6486486486486487;
        } else {
          result[0] += 0.07142857142857144;
          result[1] += 0;
          result[2] += 0.07142857142857144;
          result[3] += 0.2142857142857143;
          result[4] += 0.5357142857142858;
          result[5] += 0.10714285714285715;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02823179791976226;
          result[4] += 0.007429420505200594;
          result[5] += 0.9643387815750372;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.07588075880758807;
          result[1] += 0.013550135501355014;
          result[2] += 0.032520325203252036;
          result[3] += 0.14092140921409213;
          result[4] += 0.11382113821138211;
          result[5] += 0.6233062330623306;
        } else {
          result[0] += 0.017241379310344827;
          result[1] += 0.017241379310344827;
          result[2] += 0.05172413793103448;
          result[3] += 0.5603448275862069;
          result[4] += 0.03879310344827586;
          result[5] += 0.3146551724137931;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          result[0] += 0.07079646017699115;
          result[1] += 0.18584070796460178;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7433628318584071;
          result[5] += 0;
        } else {
          result[0] += 0.011441647597254004;
          result[1] += 0.9565217391304348;
          result[2] += 0;
          result[3] += 0.009153318077803204;
          result[4] += 0.02288329519450801;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          result[0] += 0.14035087719298245;
          result[1] += 0.03508771929824561;
          result[2] += 0.05263157894736842;
          result[3] += 0.2631578947368421;
          result[4] += 0.08187134502923976;
          result[5] += 0.4269005847953216;
        } else {
          result[0] += 0.8304278922345484;
          result[1] += 0.025356576862123614;
          result[2] += 0.01664025356576862;
          result[3] += 0.03328050713153724;
          result[4] += 0.06656101426307448;
          result[5] += 0.0277337559429477;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.00617283950617284;
          result[2] += 0.17901234567901236;
          result[3] += 0.5925925925925927;
          result[4] += 0.02469135802469136;
          result[5] += 0.19753086419753088;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0.05714285714285714;
          result[2] += 0.6142857142857143;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.15714285714285714;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.45454545454545453;
          result[1] += 0.1038961038961039;
          result[2] += 0.35064935064935066;
          result[3] += 0.025974025974025976;
          result[4] += 0.025974025974025976;
          result[5] += 0.03896103896103896;
        } else {
          result[0] += 0.012219959266802444;
          result[1] += 0;
          result[2] += 0.9012219959266803;
          result[3] += 0.07331975560081466;
          result[4] += 0;
          result[5] += 0.013238289205702648;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.004608294930875576;
          result[2] += 0;
          result[3] += 0.018433179723502304;
          result[4] += 0.9539170506912442;
          result[5] += 0.02304147465437788;
        } else {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0784313725490196;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4117647058823529;
          result[5] += 0.5098039215686274;
        } else {
          result[0] += 0.8974358974358975;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.05128205128205128;
          result[5] += 0.02564102564102564;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002797202797202797;
          result[3] += 0.023776223776223775;
          result[4] += 0.022377622377622378;
          result[5] += 0.951048951048951;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010471204188481676;
          result[3] += 0.17801047120418848;
          result[4] += 0.07329842931937172;
          result[5] += 0.7382198952879581;
        } else {
          result[0] += 0.003676470588235294;
          result[1] += 0.014705882352941176;
          result[2] += 0.05514705882352941;
          result[3] += 0.5477941176470589;
          result[4] += 0.05514705882352941;
          result[5] += 0.3235294117647059;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.057692307692307696;
          result[1] += 0.09615384615384616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8461538461538461;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004672897196261683;
          result[1] += 0.9906542056074767;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004672897196261683;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8143525741029641;
          result[1] += 0.02418096723868955;
          result[2] += 0;
          result[3] += 0.01326053042121685;
          result[4] += 0.11466458658346333;
          result[5] += 0.033541341653666144;
        } else {
          result[0] += 0.2711864406779661;
          result[1] += 0.00423728813559322;
          result[2] += 0.09322033898305085;
          result[3] += 0.2796610169491525;
          result[4] += 0.07203389830508475;
          result[5] += 0.2796610169491525;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.00819672131147541;
          result[2] += 0.27459016393442626;
          result[3] += 0.4713114754098361;
          result[4] += 0;
          result[5] += 0.2459016393442623;
        } else {
          result[0] += 0.03886255924170616;
          result[1] += 0.007582938388625593;
          result[2] += 0.8417061611374408;
          result[3] += 0.08056872037914692;
          result[4] += 0.009478672985781991;
          result[5] += 0.021800947867298578;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.013761467889908258;
          result[2] += 0.009174311926605505;
          result[3] += 0.009174311926605505;
          result[4] += 0.9220183486238532;
          result[5] += 0.045871559633027525;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.13333333333333333;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.015906680805938492;
          result[1] += 0.0021208907741251328;
          result[2] += 0.0021208907741251328;
          result[3] += 0.053022269353128315;
          result[4] += 0.07104984093319194;
          result[5] += 0.855779427359491;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0.01282051282051282;
          result[2] += 0.028846153846153848;
          result[3] += 0.4423076923076923;
          result[4] += 0.060897435897435896;
          result[5] += 0.40384615384615385;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.34057971014492755;
          result[2] += 0;
          result[3] += 0.10144927536231885;
          result[4] += 0.5362318840579711;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9897172236503856;
          result[2] += 0;
          result[3] += 0.007712082262210797;
          result[4] += 0.002570694087403599;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8177744585511576;
          result[1] += 0.04480955937266617;
          result[2] += 0.02539208364451083;
          result[3] += 0.018670649738610903;
          result[4] += 0.06721433905899925;
          result[5] += 0.026138909634055265;
        } else {
          result[0] += 0.19117647058823528;
          result[1] += 0.03308823529411765;
          result[2] += 0.17279411764705882;
          result[3] += 0.23161764705882354;
          result[4] += 0.09191176470588236;
          result[5] += 0.27941176470588236;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07575757575757576;
          result[3] += 0.030303030303030304;
          result[4] += 0.06060606060606061;
          result[5] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.34408602150537637;
          result[4] += 0;
          result[5] += 0.3225806451612903;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)89.5) ) ) {
          result[0] += 0.03703703703703704;
          result[1] += 0;
          result[2] += 0.07407407407407408;
          result[3] += 0;
          result[4] += 0.8148148148148149;
          result[5] += 0.07407407407407408;
        } else {
          result[0] += 0.35294117647058826;
          result[1] += 0.029411764705882353;
          result[2] += 0.5;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6908212560386474;
          result[3] += 0.24637681159420294;
          result[4] += 0.014492753623188408;
          result[5] += 0.04830917874396136;
        } else {
          result[0] += 0.0013831258644536656;
          result[1] += 0;
          result[2] += 0.9515905947441218;
          result[3] += 0.038727524204702636;
          result[4] += 0;
          result[5] += 0.008298755186721993;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9690721649484536;
          result[5] += 0.030927835051546393;
        } else {
          result[0] += 0;
          result[1] += 0.8636363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13636363636363635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.03593429158110883;
          result[1] += 0.01026694045174538;
          result[2] += 0.003080082135523614;
          result[3] += 0.050308008213552365;
          result[4] += 0.061601642710472276;
          result[5] += 0.8388090349075975;
        } else {
          result[0] += 0;
          result[1] += 0.0076045627376425855;
          result[2] += 0.0076045627376425855;
          result[3] += 0.5741444866920152;
          result[4] += 0.04182509505703422;
          result[5] += 0.3688212927756654;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7218771566597654;
          result[1] += 0.06694271911663216;
          result[2] += 0.006211180124223602;
          result[3] += 0.022774327122153208;
          result[4] += 0.14423740510697033;
          result[5] += 0.03795721187025535;
        } else {
          result[0] += 0.21495327102803738;
          result[1] += 0.014018691588785047;
          result[2] += 0.18457943925233644;
          result[3] += 0.2780373831775701;
          result[4] += 0.0397196261682243;
          result[5] += 0.26869158878504673;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0.1111111111111111;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.009389671361502346;
          result[1] += 0.9718309859154928;
          result[2] += 0.009389671361502346;
          result[3] += 0.0023474178403755865;
          result[4] += 0.007042253521126759;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1566265060240964;
          result[3] += 0.6265060240963856;
          result[4] += 0;
          result[5] += 0.21686746987951808;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7419354838709677;
          result[3] += 0.22580645161290322;
          result[4] += 0;
          result[5] += 0.03225806451612903;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.922077922077922;
          result[3] += 0.07792207792207792;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0.007220216606498195;
          result[1] += 0;
          result[2] += 0.9229843561973526;
          result[3] += 0.06618531889290012;
          result[4] += 0;
          result[5] += 0.0036101083032490976;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
          result[0] += 0.007246376811594203;
          result[1] += 0.0036231884057971015;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9420289855072463;
          result[5] += 0.04710144927536232;
        } else {
          result[0] += 0;
          result[1] += 0.9354838709677419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06451612903225806;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8571428571428572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12987012987012989;
          result[5] += 0.01298701298701299;
        } else {
          result[0] += 0.0040683482506102524;
          result[1] += 0.005695687550854353;
          result[2] += 0.006509357200976403;
          result[3] += 0.13588283157038242;
          result[4] += 0.07323026851098453;
          result[5] += 0.774613506916192;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0.011467889908256881;
          result[1] += 0.9770642201834863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011467889908256881;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0.16753926701570682;
          result[1] += 0.005235602094240838;
          result[2] += 0.020942408376963352;
          result[3] += 0.18324607329842932;
          result[4] += 0.15706806282722513;
          result[5] += 0.46596858638743455;
        } else {
          result[0] += 0.7541353383458648;
          result[1] += 0.042857142857142864;
          result[2] += 0.046616541353383466;
          result[3] += 0.03834586466165414;
          result[4] += 0.08796992481203009;
          result[5] += 0.030075187969924814;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.013888888888888888;
          result[2] += 0.1527777777777778;
          result[3] += 0.2222222222222222;
          result[4] += 0.08333333333333333;
          result[5] += 0.5277777777777778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17094017094017094;
          result[3] += 0.7008547008547008;
          result[4] += 0;
          result[5] += 0.1282051282051282;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9565217391304348;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.028846153846153848;
          result[1] += 0;
          result[2] += 0.5673076923076923;
          result[3] += 0.3557692307692308;
          result[4] += 0;
          result[5] += 0.04807692307692308;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
          result[0] += 0.07692307692307694;
          result[1] += 0.6923076923076924;
          result[2] += 0.07692307692307694;
          result[3] += 0.07692307692307694;
          result[4] += 0.07692307692307694;
          result[5] += 0;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8171428571428572;
          result[3] += 0.17714285714285713;
          result[4] += 0;
          result[5] += 0.005714285714285714;
        } else {
          result[0] += 0.006915629322268326;
          result[1] += 0;
          result[2] += 0.966804979253112;
          result[3] += 0.022130013831258646;
          result[4] += 0;
          result[5] += 0.004149377593360996;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.00975609756097561;
          result[2] += 0;
          result[3] += 0.004878048780487805;
          result[4] += 0.9658536585365853;
          result[5] += 0.01951219512195122;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.049060542797494784;
          result[1] += 0.030271398747390398;
          result[2] += 0.0010438413361169101;
          result[3] += 0.04175365344467641;
          result[4] += 0.05845511482254697;
          result[5] += 0.8194154488517745;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6570048309178744;
          result[4] += 0;
          result[5] += 0.34299516908212563;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.0065789473684210505;
          result[1] += 0.28947368421052627;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6776315789473684;
          result[5] += 0.026315789473684202;
        } else {
          result[0] += 0;
          result[1] += 0.9948979591836735;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00510204081632653;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8555649957519117;
          result[1] += 0.021240441801189464;
          result[2] += 0.0033984706881903144;
          result[3] += 0.03058623619371283;
          result[4] += 0.07731520815632965;
          result[5] += 0.0118946474086661;
        } else {
          result[0] += 0.17339667458432304;
          result[1] += 0.023752969121140142;
          result[2] += 0.2327790973871734;
          result[3] += 0.22802850356294538;
          result[4] += 0.09738717339667459;
          result[5] += 0.24465558194774348;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012658227848101266;
          result[3] += 0.08860759493670886;
          result[4] += 0.06329113924050633;
          result[5] += 0.8354430379746836;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0.08163265306122448;
          result[3] += 0.6224489795918368;
          result[4] += 0.04081632653061224;
          result[5] += 0.23469387755102042;
        } else {
          result[0] += 0.18;
          result[1] += 0.14;
          result[2] += 0.54;
          result[3] += 0.08;
          result[4] += 0;
          result[5] += 0.06;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.08064516129032258;
          result[1] += 0;
          result[2] += 0.2903225806451613;
          result[3] += 0.4838709677419355;
          result[4] += 0;
          result[5] += 0.14516129032258066;
        } else {
          result[0] += 0.03463203463203463;
          result[1] += 0;
          result[2] += 0.7445887445887446;
          result[3] += 0.19480519480519481;
          result[4] += 0;
          result[5] += 0.025974025974025976;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9694148936170213;
          result[3] += 0.02925531914893617;
          result[4] += 0;
          result[5] += 0.0013297872340425532;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48) ) ) {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.007194244604316547;
          result[1] += 0;
          result[2] += 0.014388489208633094;
          result[3] += 0;
          result[4] += 0.9460431654676259;
          result[5] += 0.03237410071942446;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.07333333333333333;
          result[5] += 0.8488888888888889;
        } else {
          result[0] += 0.0547945205479452;
          result[1] += 0.0273972602739726;
          result[2] += 0.04794520547945205;
          result[3] += 0.4383561643835616;
          result[4] += 0.05136986301369863;
          result[5] += 0.3801369863013699;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.03389830508474577;
          result[1] += 0.14406779661016952;
          result[2] += 0;
          result[3] += 0.008474576271186442;
          result[4] += 0.7542372881355933;
          result[5] += 0.05932203389830509;
        } else {
          result[0] += 0;
          result[1] += 0.9748283752860412;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02517162471395881;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.860802732707088;
          result[1] += 0.03159692570452605;
          result[2] += 0.004269854824935952;
          result[3] += 0.02305721605465414;
          result[4] += 0.04953031596925705;
          result[5] += 0.030742954739538857;
        } else {
          result[0] += 0.2753246753246753;
          result[1] += 0.02077922077922078;
          result[2] += 0.23116883116883116;
          result[3] += 0.21818181818181817;
          result[4] += 0.046753246753246755;
          result[5] += 0.2077922077922078;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08396946564885496;
          result[3] += 0.37404580152671757;
          result[4] += 0.015267175572519083;
          result[5] += 0.5267175572519084;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8055555555555556;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.1388888888888889;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.32608695652173914;
          result[3] += 0.4782608695652174;
          result[4] += 0;
          result[5] += 0.10869565217391304;
        } else {
          result[0] += 0.007700770077007701;
          result[1] += 0;
          result[2] += 0.9152915291529153;
          result[3] += 0.06820682068206821;
          result[4] += 0;
          result[5] += 0.0088008800880088;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0043859649122807015;
          result[2] += 0.0043859649122807015;
          result[3] += 0.0043859649122807015;
          result[4] += 0.9780701754385965;
          result[5] += 0.008771929824561403;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          result[0] += 0.005037783375314861;
          result[1] += 0;
          result[2] += 0.0012594458438287153;
          result[3] += 0.02518891687657431;
          result[4] += 0.055415617128463476;
          result[5] += 0.9130982367758187;
        } else {
          result[0] += 0.06779661016949153;
          result[1] += 0.03954802259887006;
          result[2] += 0.011299435028248588;
          result[3] += 0.327683615819209;
          result[4] += 0.054613935969868174;
          result[5] += 0.4990583804143126;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004807692307692308;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7357630979498861;
          result[1] += 0.03416856492027335;
          result[2] += 0.002277904328018223;
          result[3] += 0.02885345482156416;
          result[4] += 0.13895216400911162;
          result[5] += 0.05998481397114654;
        } else {
          result[0] += 0.22174840085287847;
          result[1] += 0.05543710021321962;
          result[2] += 0.18763326226012794;
          result[3] += 0.2302771855010661;
          result[4] += 0.07889125799573561;
          result[5] += 0.2260127931769723;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.78;
          result[4] += 0;
          result[5] += 0.12;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37037037037037035;
          result[3] += 0.5185185185185185;
          result[4] += 0;
          result[5] += 0.1111111111111111;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
          result[0] += 0.10344827586206896;
          result[1] += 0;
          result[2] += 0.3103448275862069;
          result[3] += 0.41379310344827586;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7483870967741936;
          result[3] += 0.23225806451612904;
          result[4] += 0;
          result[5] += 0.01935483870967742;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5789473684210527;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42105263157894735;
        } else {
          result[0] += 0.006934812760055479;
          result[1] += 0;
          result[2] += 0.9625520110957004;
          result[3] += 0.02912621359223301;
          result[4] += 0;
          result[5] += 0.0013869625520110957;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.004016064257028112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9598393574297188;
          result[5] += 0.03614457831325301;
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
          result[0] += 0.001282051282051282;
          result[1] += 0;
          result[2] += 0.002564102564102564;
          result[3] += 0.03205128205128205;
          result[4] += 0.04487179487179487;
          result[5] += 0.9192307692307692;
        } else {
          result[0] += 0.07662835249042145;
          result[1] += 0.005747126436781609;
          result[2] += 0;
          result[3] += 0.28735632183908044;
          result[4] += 0.07279693486590039;
          result[5] += 0.5574712643678161;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.5454545454545454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.45454545454545453;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.03048780487804878;
          result[1] += 0.2926829268292683;
          result[2] += 0.012195121951219513;
          result[3] += 0.012195121951219513;
          result[4] += 0.6036585365853658;
          result[5] += 0.04878048780487805;
        } else {
          result[0] += 0.7043422733077905;
          result[1] += 0.006385696040868455;
          result[2] += 0.06832694763729247;
          result[3] += 0.08556832694763729;
          result[4] += 0.06321839080459771;
          result[5] += 0.07215836526181353;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0.03125;
          result[3] += 0.8125;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0.13636363636363635;
          result[3] += 0.09090909090909091;
          result[4] += 0.13636363636363635;
          result[5] += 0.45454545454545453;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92.5) ) ) {
          result[0] += 0.028985507246376812;
          result[1] += 0.014492753623188406;
          result[2] += 0.5942028985507246;
          result[3] += 0.2463768115942029;
          result[4] += 0.007246376811594203;
          result[5] += 0.10869565217391304;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0851063829787234;
          result[2] += 0.5319148936170213;
          result[3] += 0.3191489361702128;
          result[4] += 0;
          result[5] += 0.06382978723404255;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8633540372670807;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0.006211180124223602;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          result[0] += 0.4583333333333333;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9618573797678276;
          result[3] += 0.03316749585406303;
          result[4] += 0;
          result[5] += 0.0049751243781094535;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.04833836858006042;
          result[1] += 0.14803625377643503;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7824773413897281;
          result[5] += 0.021148036253776436;
        } else {
          result[0] += 0.7867203219315896;
          result[1] += 0.02414486921529175;
          result[2] += 0.002012072434607646;
          result[3] += 0.002012072434607646;
          result[4] += 0.11066398390342053;
          result[5] += 0.0744466800804829;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
          result[0] += 0.002506265664160401;
          result[1] += 0.9899749373433584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007518796992481203;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.05128205128205128;
          result[2] += 0;
          result[3] += 0.10256410256410256;
          result[4] += 0.5128205128205128;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014044943820224719;
          result[3] += 0.032303370786516857;
          result[4] += 0.008426966292134831;
          result[5] += 0.9578651685393258;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.014492753623188406;
          result[1] += 0;
          result[2] += 0.02318840579710145;
          result[3] += 0.16521739130434782;
          result[4] += 0.17101449275362318;
          result[5] += 0.6260869565217392;
        } else {
          result[0] += 0.134375;
          result[1] += 0.084375;
          result[2] += 0.01875;
          result[3] += 0.40625;
          result[4] += 0.0953125;
          result[5] += 0.2609375;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          result[0] += 0.15;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.9142857142857143;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.014285714285714285;
          result[4] += 0.02142857142857143;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.0136986301369863;
          result[1] += 0;
          result[2] += 0.410958904109589;
          result[3] += 0.4657534246575342;
          result[4] += 0;
          result[5] += 0.1095890410958904;
        } else {
          result[0] += 0.018633540372670804;
          result[1] += 0;
          result[2] += 0.8447204968944098;
          result[3] += 0.10683229813664594;
          result[4] += 0.0024844720496894407;
          result[5] += 0.027329192546583843;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0.9812646370023419;
          result[1] += 0;
          result[2] += 0.01639344262295082;
          result[3] += 0;
          result[4] += 0.00234192037470726;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6363636363636364;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.9487179487179487;
          result[3] += 0.019230769230769232;
          result[4] += 0;
          result[5] += 0.00641025641025641;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006968641114982578;
          result[4] += 0.7735191637630662;
          result[5] += 0.17073170731707318;
        } else {
          result[0] += 0.46774193548387094;
          result[1] += 0.04838709677419355;
          result[2] += 0;
          result[3] += 0.08064516129032258;
          result[4] += 0.3870967741935484;
          result[5] += 0.016129032258064516;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.002232142857142857;
          result[1] += 0.0011160714285714285;
          result[2] += 0.006696428571428571;
          result[3] += 0.060267857142857144;
          result[4] += 0.06473214285714286;
          result[5] += 0.8649553571428571;
        } else {
          result[0] += 0;
          result[1] += 0.013824884792626729;
          result[2] += 0;
          result[3] += 0.5391705069124424;
          result[4] += 0.004608294930875576;
          result[5] += 0.4423963133640553;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9951690821256038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024154589371980675;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.03773584905660377;
          result[1] += 0.16037735849056603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8018867924528302;
          result[5] += 0;
        } else {
          result[0] += 0.7318695941450433;
          result[1] += 0.034597471723220224;
          result[2] += 0.03592814371257485;
          result[3] += 0.06054557551563539;
          result[4] += 0.08516300731869594;
          result[5] += 0.05189620758483034;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.060240963855421686;
          result[3] += 0.08433734939759036;
          result[4] += 0.0963855421686747;
          result[5] += 0.7590361445783133;
        } else {
          result[0] += 0.004901960784313725;
          result[1] += 0;
          result[2] += 0.1323529411764706;
          result[3] += 0.5294117647058824;
          result[4] += 0.004901960784313725;
          result[5] += 0.3284313725490196;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.042735042735042736;
          result[2] += 0.6239316239316239;
          result[3] += 0.1794871794871795;
          result[4] += 0.017094017094017096;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.4883720930232558;
          result[1] += 0.23255813953488372;
          result[2] += 0.11627906976744186;
          result[3] += 0;
          result[4] += 0.13953488372093023;
          result[5] += 0.023255813953488372;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.425;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.1375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.918918918918919;
          result[3] += 0.08108108108108109;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.007947019867549669;
          result[1] += 0;
          result[2] += 0.9483443708609272;
          result[3] += 0.04105960264900662;
          result[4] += 0;
          result[5] += 0.0026490066225165563;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.004347826086956522;
          result[2] += 0;
          result[3] += 0.004347826086956522;
          result[4] += 0.9565217391304348;
          result[5] += 0.034782608695652174;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01639344262295082;
          result[4] += 0.028688524590163935;
          result[5] += 0.9549180327868853;
        } else {
          result[0] += 0.11699779249448124;
          result[1] += 0.004415011037527594;
          result[2] += 0.03090507726269316;
          result[3] += 0.2958057395143488;
          result[4] += 0.11920529801324503;
          result[5] += 0.4326710816777042;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.42592592592592593;
          result[2] += 0;
          result[3] += 0.14814814814814814;
          result[4] += 0.35185185185185186;
          result[5] += 0.07407407407407407;
        } else {
          result[0] += 0.002583979328165375;
          result[1] += 0.979328165374677;
          result[2] += 0;
          result[3] += 0.002583979328165375;
          result[4] += 0.015503875968992248;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
          result[0] += 0.4520367936925099;
          result[1] += 0.02890932982917214;
          result[2] += 0.06438896189224705;
          result[3] += 0.09724047306176084;
          result[4] += 0.15505913272010513;
          result[5] += 0.202365308804205;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.02662037037037037;
          result[2] += 0.01273148148148148;
          result[3] += 0.005787037037037037;
          result[4] += 0.05439814814814815;
          result[5] += 0.011574074074074073;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.045871559633027525;
          result[1] += 0.009174311926605505;
          result[2] += 0.07339449541284404;
          result[3] += 0.11009174311926606;
          result[4] += 0.14678899082568808;
          result[5] += 0.6146788990825688;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1728395061728395;
          result[3] += 0.7037037037037037;
          result[4] += 0;
          result[5] += 0.12345679012345678;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8142857142857143;
          result[3] += 0.15714285714285714;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8846153846153846;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.3888888888888889;
          result[1] += 0.3888888888888889;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        } else {
          result[0] += 0.006451612903225807;
          result[1] += 0;
          result[2] += 0.9193548387096775;
          result[3] += 0.06451612903225808;
          result[4] += 0;
          result[5] += 0.009677419354838712;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.004694835680751175;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9812206572769954;
          result[5] += 0.014084507042253523;
        } else {
          result[0] += 0;
          result[1] += 0.8666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011695906432748537;
          result[4] += 0.03070175438596491;
          result[5] += 0.9576023391812866;
        } else {
          result[0] += 0.07660455486542443;
          result[1] += 0.035196687370600416;
          result[2] += 0.002070393374741201;
          result[3] += 0.2898550724637681;
          result[4] += 0.07039337474120083;
          result[5] += 0.525879917184265;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9130434782608695;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9952830188679245;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0047169811320754715;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.1780821917808219;
          result[1] += 0.1004566210045662;
          result[2] += 0.0182648401826484;
          result[3] += 0;
          result[4] += 0.634703196347032;
          result[5] += 0.0684931506849315;
        } else {
          result[0] += 0.7230014025245441;
          result[1] += 0.01332398316970547;
          result[2] += 0.04628330995792426;
          result[3] += 0.06661991584852735;
          result[4] += 0.06311360448807854;
          result[5] += 0.0876577840112202;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0;
          result[3] += 0.1746031746031746;
          result[4] += 0.15873015873015872;
          result[5] += 0.6190476190476191;
        } else {
          result[0] += 0.013071895424836602;
          result[1] += 0;
          result[2] += 0.1503267973856209;
          result[3] += 0.6535947712418301;
          result[4] += 0.006535947712418301;
          result[5] += 0.17647058823529413;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
          result[0] += 0.016483516483516484;
          result[1] += 0.02197802197802198;
          result[2] += 0.6153846153846154;
          result[3] += 0.1813186813186813;
          result[4] += 0.01098901098901099;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0.5942028985507247;
          result[1] += 0.014492753623188408;
          result[2] += 0.27536231884057977;
          result[3] += 0.07246376811594205;
          result[4] += 0.028985507246376815;
          result[5] += 0.014492753623188408;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7829457364341085;
          result[3] += 0.1937984496124031;
          result[4] += 0;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9311740890688259;
          result[3] += 0.06882591093117409;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.994413407821229;
          result[3] += 0.00558659217877095;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.010362694300518135;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9896373056994818;
          result[5] += 0;
        } else {
          result[0] += 0.024096385542168676;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5903614457831325;
          result[5] += 0.3855421686746988;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.004037685060565276;
          result[2] += 0.008075370121130552;
          result[3] += 0.04845222072678331;
          result[4] += 0.021534320323014805;
          result[5] += 0.917900403768506;
        } else {
          result[0] += 0.10905730129390019;
          result[1] += 0.027726432532347505;
          result[2] += 0.0036968576709796672;
          result[3] += 0.30868761552680224;
          result[4] += 0.08502772643253234;
          result[5] += 0.4658040665434381;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954954954954955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045045045045045045;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.778794813119756;
          result[1] += 0.03737604881769641;
          result[2] += 0.007627765064836003;
          result[3] += 0.03279938977879481;
          result[4] += 0.12585812356979406;
          result[5] += 0.017543859649122806;
        } else {
          result[0] += 0.11682242990654206;
          result[1] += 0.004672897196261682;
          result[2] += 0.19158878504672897;
          result[3] += 0.26401869158878505;
          result[4] += 0.10514018691588785;
          result[5] += 0.3177570093457944;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06756756756756757;
          result[3] += 0.7297297297297297;
          result[4] += 0;
          result[5] += 0.20270270270270271;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5116279069767442;
          result[3] += 0.4883720930232558;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)107.5) ) ) {
          result[0] += 0.013986013986013988;
          result[1] += 0;
          result[2] += 0.7762237762237764;
          result[3] += 0.18881118881118883;
          result[4] += 0;
          result[5] += 0.020979020979020983;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3103448275862069;
          result[3] += 0.5517241379310345;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.896551724137931;
          result[3] += 0.10344827586206896;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8765432098765432;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0.0030911901081916537;
          result[1] += 0;
          result[2] += 0.9752704791344667;
          result[3] += 0.015455950540958269;
          result[4] += 0;
          result[5] += 0.0061823802163833074;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0.018518518518518517;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9185185185185185;
          result[5] += 0.040740740740740744;
        } else {
          result[0] += 0.575;
          result[1] += 0.075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20625;
          result[5] += 0.14375;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037371134020618556;
          result[4] += 0.04252577319587629;
          result[5] += 0.9201030927835051;
        } else {
          result[0] += 0.028391167192429023;
          result[1] += 0.031545741324921134;
          result[2] += 0.056782334384858045;
          result[3] += 0.2082018927444795;
          result[4] += 0.12618296529968454;
          result[5] += 0.5488958990536278;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9900249376558603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00997506234413965;
          result[5] += 0;
        } else {
          result[0] += 0.13157894736842105;
          result[1] += 0.3684210526315789;
          result[2] += 0.15789473684210525;
          result[3] += 0.05263157894736842;
          result[4] += 0.23684210526315788;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.805;
          result[1] += 0.03333333333333333;
          result[2] += 0.0025;
          result[3] += 0.035833333333333335;
          result[4] += 0.09;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.2254901960784314;
          result[1] += 0.026960784313725495;
          result[2] += 0.13235294117647062;
          result[3] += 0.32352941176470595;
          result[4] += 0.04411764705882354;
          result[5] += 0.24754901960784317;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909093;
          result[2] += 0.05454545454545455;
          result[3] += 0.07272727272727274;
          result[4] += 0.27272727272727276;
          result[5] += 0.5090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07920792079207922;
          result[3] += 0.702970297029703;
          result[4] += 0;
          result[5] += 0.21782178217821785;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.725;
          result[3] += 0.1;
          result[4] += 0.025;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.625;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.015384615384615385;
          result[2] += 0.12307692307692308;
          result[3] += 0.6307692307692307;
          result[4] += 0.06153846153846154;
          result[5] += 0.16923076923076924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6224489795918368;
          result[3] += 0.22448979591836735;
          result[4] += 0;
          result[5] += 0.15306122448979592;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004651162790697674;
          result[1] += 0;
          result[2] += 0.9162790697674419;
          result[3] += 0.07325581395348837;
          result[4] += 0.002325581395348837;
          result[5] += 0.0034883720930232558;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0.03463203463203463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8831168831168831;
          result[5] += 0.05194805194805195;
        } else {
          result[0] += 0.6090909090909091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24545454545454545;
          result[5] += 0.14545454545454545;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0021929824561403508;
          result[1] += 0.008771929824561403;
          result[2] += 0.01644736842105263;
          result[3] += 0.06907894736842106;
          result[4] += 0.07675438596491228;
          result[5] += 0.8267543859649122;
        } else {
          result[0] += 0.016556291390728478;
          result[1] += 0.052980132450331126;
          result[2] += 0.013245033112582781;
          result[3] += 0.45364238410596025;
          result[4] += 0.0728476821192053;
          result[5] += 0.39072847682119205;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0.022857142857142857;
          result[1] += 0.35428571428571426;
          result[2] += 0.02857142857142857;
          result[3] += 0.02857142857142857;
          result[4] += 0.52;
          result[5] += 0.045714285714285714;
        } else {
          result[0] += 0.7571644042232277;
          result[1] += 0.017345399698340876;
          result[2] += 0.029411764705882353;
          result[3] += 0.07692307692307693;
          result[4] += 0.06636500754147813;
          result[5] += 0.05279034690799397;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
          result[0] += 0.2727272727272727;
          result[1] += 0.5636363636363636;
          result[2] += 0.03636363636363636;
          result[3] += 0;
          result[4] += 0.12727272727272726;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.5384615384615384;
          result[2] += 0.23076923076923078;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031746031746031744;
          result[3] += 0.25396825396825395;
          result[4] += 0.06349206349206349;
          result[5] += 0.6507936507936508;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4000000000000001;
          result[3] += 0.4882352941176471;
          result[4] += 0.011764705882352943;
          result[5] += 0.10000000000000002;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04797047970479705;
          result[1] += 0;
          result[2] += 0.7822878228782287;
          result[3] += 0.13653136531365315;
          result[4] += 0;
          result[5] += 0.033210332103321034;
        } else {
          result[0] += 0.002793296089385475;
          result[1] += 0;
          result[2] += 0.9581005586592178;
          result[3] += 0.03770949720670391;
          result[4] += 0;
          result[5] += 0.0013966480446927375;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)108) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0.1951219512195122;
          result[1] += 0;
          result[2] += 0.8048780487804879;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0.10817307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8028846153846154;
          result[5] += 0.05048076923076923;
        } else {
          result[0] += 0;
          result[1] += 0.9900990099009901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009900990099009901;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0.9425287356321839;
          result[1] += 0.004597701149425287;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04367816091954023;
          result[5] += 0.009195402298850575;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025;
          result[4] += 0.65;
          result[5] += 0.325;
        } else {
          result[0] += 0.003115264797507788;
          result[1] += 0.0020768431983385254;
          result[2] += 0.0010384215991692627;
          result[3] += 0.0695742471443406;
          result[4] += 0.04776739356178609;
          result[5] += 0.8764278296988577;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          result[0] += 0.02872531418312388;
          result[1] += 0.03770197486535009;
          result[2] += 0.04129263913824058;
          result[3] += 0.4398563734290844;
          result[4] += 0.05206463195691203;
          result[5] += 0.400359066427289;
        } else {
          result[0] += 0.3449477351916377;
          result[1] += 0.06271777003484322;
          result[2] += 0.1358885017421603;
          result[3] += 0.12543554006968644;
          result[4] += 0.21951219512195125;
          result[5] += 0.11149825783972127;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9890710382513661;
          result[1] += 0;
          result[2] += 0.00546448087431694;
          result[3] += 0;
          result[4] += 0.00546448087431694;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7209302325581395;
          result[3] += 0.18604651162790697;
          result[4] += 0;
          result[5] += 0.09302325581395349;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6229508196721312;
          result[3] += 0.36065573770491804;
          result[4] += 0;
          result[5] += 0.01639344262295082;
        } else {
          result[0] += 0.851063829787234;
          result[1] += 0;
          result[2] += 0.14893617021276595;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03900709219858157;
          result[1] += 0;
          result[2] += 0.822695035460993;
          result[3] += 0.12056737588652483;
          result[4] += 0;
          result[5] += 0.017730496453900714;
        } else {
          result[0] += 0.0015479876160990713;
          result[1] += 0;
          result[2] += 0.9628482972136223;
          result[3] += 0.032507739938080496;
          result[4] += 0;
          result[5] += 0.0030959752321981426;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.10661764705882353;
          result[1] += 0.003676470588235294;
          result[2] += 0;
          result[3] += 0.022058823529411766;
          result[4] += 0.7536764705882353;
          result[5] += 0.11397058823529412;
        } else {
          result[0] += 0.20967741935483872;
          result[1] += 0.7580645161290323;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03225806451612903;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.0022371364653243847;
          result[2] += 0;
          result[3] += 0.06040268456375839;
          result[4] += 0.05145413870246085;
          result[5] += 0.8859060402684564;
        } else {
          result[0] += 0.01282051282051282;
          result[1] += 0.021367521367521368;
          result[2] += 0.03418803418803419;
          result[3] += 0.47863247863247865;
          result[4] += 0.04700854700854701;
          result[5] += 0.405982905982906;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0.9871134020618557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01288659793814433;
          result[5] += 0;
        } else {
          result[0] += 0.007462686567164179;
          result[1] += 0.291044776119403;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7014925373134329;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8312020460358056;
          result[1] += 0.011082693947144074;
          result[2] += 0;
          result[3] += 0.029838022165387893;
          result[4] += 0.09121909633418585;
          result[5] += 0.03665814151747655;
        } else {
          result[0] += 0.18518518518518517;
          result[1] += 0.030864197530864196;
          result[2] += 0.16358024691358025;
          result[3] += 0.22839506172839505;
          result[4] += 0.06172839506172839;
          result[5] += 0.33024691358024694;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06711409395973154;
          result[3] += 0.44966442953020136;
          result[4] += 0.020134228187919462;
          result[5] += 0.46308724832214765;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636365;
          result[3] += 0.04545454545454546;
          result[4] += 0.04545454545454546;
          result[5] += 0.27272727272727276;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          result[0] += 0.043010752688172046;
          result[1] += 0.10215053763440861;
          result[2] += 0.5967741935483871;
          result[3] += 0.16666666666666666;
          result[4] += 0.010752688172043012;
          result[5] += 0.08064516129032258;
        } else {
          result[0] += 0.95;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08333333333333334;
          result[1] += 0;
          result[2] += 0.37500000000000006;
          result[3] += 0.37500000000000006;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.21153846153846154;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0.007722007722007722;
          result[1] += 0;
          result[2] += 0.954954954954955;
          result[3] += 0.036036036036036036;
          result[4] += 0;
          result[5] += 0.001287001287001287;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.004201680672268907;
          result[2] += 0;
          result[3] += 0.008403361344537815;
          result[4] += 0.9705882352941176;
          result[5] += 0.01680672268907563;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.016789087093389297;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030430220356768102;
          result[4] += 0.0912906610703043;
          result[5] += 0.8614900314795383;
        } else {
          result[0] += 0.04918032786885246;
          result[1] += 0.006557377049180328;
          result[2] += 0;
          result[3] += 0.43278688524590164;
          result[4] += 0.036065573770491806;
          result[5] += 0.47540983606557374;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.12;
          result[2] += 0;
          result[3] += 0.08;
          result[4] += 0.76;
          result[5] += 0.04;
        } else {
          result[0] += 0;
          result[1] += 0.9846153846153847;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015384615384615385;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7770114942528737;
          result[1] += 0.05134099616858239;
          result[2] += 0.004597701149425288;
          result[3] += 0.02758620689655173;
          result[4] += 0.11187739463601536;
          result[5] += 0.02758620689655173;
        } else {
          result[0] += 0.11979166666666667;
          result[1] += 0.013020833333333334;
          result[2] += 0.2708333333333333;
          result[3] += 0.2552083333333333;
          result[4] += 0.12239583333333333;
          result[5] += 0.21875;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.546875;
          result[4] += 0.03125;
          result[5] += 0.359375;
        } else {
          result[0] += 0.017241379310344827;
          result[1] += 0.034482758620689655;
          result[2] += 0.46551724137931033;
          result[3] += 0.3448275862068966;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7669172932330827;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.022556390977443608;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0.6666666666666666;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)106.5) ) ) {
          result[0] += 0.009269988412514484;
          result[1] += 0;
          result[2] += 0.9548088064889919;
          result[3] += 0.03592120509849363;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
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
