
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004405286343612335;
          result[1] += 0.03524229074889868;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9295154185022027;
          result[5] += 0.030837004405286344;
        } else {
          result[0] += 0.44642857142857145;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0.08928571428571429;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0010787486515641855;
          result[2] += 0;
          result[3] += 0.04746494066882417;
          result[4] += 0.0668824163969795;
          result[5] += 0.8845738942826321;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007936507936507936;
          result[3] += 0.4722222222222222;
          result[4] += 0.09126984126984126;
          result[5] += 0.42857142857142855;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0.004329004329004329;
          result[1] += 0.9935064935064936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021645021645021645;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6944444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3055555555555556;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7762345679012346;
          result[1] += 0.02546296296296296;
          result[2] += 0.010030864197530864;
          result[3] += 0.038580246913580245;
          result[4] += 0.12731481481481483;
          result[5] += 0.022376543209876542;
        } else {
          result[0] += 0.1762208067940552;
          result[1] += 0.040339702760084924;
          result[2] += 0.22717622080679406;
          result[3] += 0.28662420382165604;
          result[4] += 0.05307855626326964;
          result[5] += 0.21656050955414013;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0;
          result[4] += 0.04;
          result[5] += 0.92;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15942028985507245;
          result[3] += 0.6376811594202898;
          result[4] += 0.028985507246376812;
          result[5] += 0.17391304347826086;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04444444444444445;
          result[1] += 0;
          result[2] += 0.5777777777777778;
          result[3] += 0.2888888888888889;
          result[4] += 0;
          result[5] += 0.0888888888888889;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0.3055555555555556;
          result[3] += 0.3611111111111111;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.10000000000000002;
          result[1] += 0.025000000000000005;
          result[2] += 0.7250000000000001;
          result[3] += 0.10833333333333335;
          result[4] += 0;
          result[5] += 0.04166666666666667;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8791208791208791;
          result[3] += 0.10989010989010989;
          result[4] += 0;
          result[5] += 0.01098901098901099;
        } else {
          result[0] += 0.0016501650165016504;
          result[1] += 0;
          result[2] += 0.9702970297029704;
          result[3] += 0.028052805280528056;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.8507462686567164;
          result[2] += 0;
          result[3] += 0.029850746268656716;
          result[4] += 0.11940298507462686;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.03125000000000001;
          result[1] += 0.10625000000000001;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8250000000000001;
          result[5] += 0.037500000000000006;
        } else {
          result[0] += 0.8212669683257919;
          result[1] += 0.009049773755656111;
          result[2] += 0.002262443438914028;
          result[3] += 0.013574660633484165;
          result[4] += 0.09276018099547513;
          result[5] += 0.06108597285067874;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.005733944954128441;
          result[1] += 0.0011467889908256881;
          result[2] += 0.0034403669724770644;
          result[3] += 0.03784403669724771;
          result[4] += 0.12614678899082568;
          result[5] += 0.8256880733944955;
        } else {
          result[0] += 0.11942098914354644;
          result[1] += 0.04945717732207479;
          result[2] += 0.032569360675512665;
          result[3] += 0.34620024125452353;
          result[4] += 0.09650180940892641;
          result[5] += 0.3558504221954162;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.9726027397260274;
          result[1] += 0;
          result[2] += 0.0106544901065449;
          result[3] += 0.0030441400304414;
          result[4] += 0.0136986301369863;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.03036876355748373;
          result[1] += 0;
          result[2] += 0.6268980477223427;
          result[3] += 0.27765726681127983;
          result[4] += 0;
          result[5] += 0.0650759219088937;
        } else {
          result[0] += 0.6129032258064516;
          result[1] += 0;
          result[2] += 0.27419354838709675;
          result[3] += 0;
          result[4] += 0.11290322580645161;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002793296089385475;
          result[1] += 0;
          result[2] += 0.9581005586592178;
          result[3] += 0.034916201117318434;
          result[4] += 0;
          result[5] += 0.004189944134078212;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.07327586206896551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9008620689655172;
          result[5] += 0.02586206896551724;
        } else {
          result[0] += 0.45977011494252873;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05747126436781609;
          result[4] += 0.19540229885057472;
          result[5] += 0.28735632183908044;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0069605568445475635;
          result[2] += 0.001160092807424594;
          result[3] += 0.04408352668213457;
          result[4] += 0.07192575406032482;
          result[5] += 0.8758700696055685;
        } else {
          result[0] += 0.0030211480362537764;
          result[1] += 0;
          result[2] += 0.06646525679758308;
          result[3] += 0.4652567975830816;
          result[4] += 0.006042296072507553;
          result[5] += 0.459214501510574;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.45;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.55;
          result[5] += 0;
        } else {
          result[0] += 0.002347417840375587;
          result[1] += 0.9976525821596244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7648351648351648;
          result[1] += 0.04835164835164835;
          result[2] += 0.004395604395604396;
          result[3] += 0.01611721611721612;
          result[4] += 0.14652014652014653;
          result[5] += 0.01978021978021978;
        } else {
          result[0] += 0.12085308056872038;
          result[1] += 0.011848341232227487;
          result[2] += 0.21800947867298578;
          result[3] += 0.31516587677725116;
          result[4] += 0.07109004739336493;
          result[5] += 0.26303317535545023;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.08695652173913043;
          result[4] += 0.08695652173913043;
          result[5] += 0.6086956521739131;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.6274509803921569;
          result[4] += 0;
          result[5] += 0.2549019607843137;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6206896551724138;
          result[3] += 0.1724137931034483;
          result[4] += 0.034482758620689655;
          result[5] += 0.1724137931034483;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5625;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0;
          result[2] += 0.920995670995671;
          result[3] += 0.05519480519480519;
          result[4] += 0.003246753246753247;
          result[5] += 0.012987012987012988;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.008264462809917356;
          result[1] += 0.08677685950413223;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8925619834710744;
          result[5] += 0.012396694214876033;
        } else {
          result[0] += 0.7065217391304348;
          result[1] += 0.010869565217391304;
          result[2] += 0.05434782608695652;
          result[3] += 0;
          result[4] += 0.17391304347826086;
          result[5] += 0.05434782608695652;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0036199095022624436;
          result[1] += 0.0027149321266968325;
          result[2] += 0.0027149321266968325;
          result[3] += 0.08597285067873303;
          result[4] += 0.08868778280542987;
          result[5] += 0.816289592760181;
        } else {
          result[0] += 0.0076045627376425855;
          result[1] += 0.0076045627376425855;
          result[2] += 0.049429657794676805;
          result[3] += 0.596958174904943;
          result[4] += 0.022813688212927757;
          result[5] += 0.3155893536121673;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.77947932618683;
          result[1] += 0.043644716692189896;
          result[2] += 0.0015313935681470138;
          result[3] += 0.022970903522205207;
          result[4] += 0.11791730474732007;
          result[5] += 0.03445635528330781;
        } else {
          result[0] += 0.22666666666666666;
          result[1] += 0.032;
          result[2] += 0.208;
          result[3] += 0.2613333333333333;
          result[4] += 0.029333333333333333;
          result[5] += 0.24266666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5079365079365079;
          result[3] += 0.36507936507936506;
          result[4] += 0;
          result[5] += 0.12698412698412698;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7258064516129032;
          result[3] += 0.27419354838709675;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8169014084507042;
          result[3] += 0.16901408450704225;
          result[4] += 0;
          result[5] += 0.014084507042253521;
        } else {
          result[0] += 0.011661807580174929;
          result[1] += 0;
          result[2] += 0.9562682215743441;
          result[3] += 0.032069970845481056;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.028985507246376812;
          result[2] += 0;
          result[3] += 0.0036231884057971015;
          result[4] += 0.9311594202898551;
          result[5] += 0.036231884057971016;
        } else {
          result[0] += 0.022222222222222223;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0.5333333333333333;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0030257186081694403;
          result[2] += 0;
          result[3] += 0.037821482602118005;
          result[4] += 0.015128593040847202;
          result[5] += 0.9440242057488654;
        } else {
          result[0] += 0.09981167608286252;
          result[1] += 0.032015065913371;
          result[2] += 0.02071563088512241;
          result[3] += 0.2523540489642185;
          result[4] += 0.06591337099811675;
          result[5] += 0.5291902071563088;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0.02247191011235955;
          result[1] += 0.07865168539325842;
          result[2] += 0;
          result[3] += 0.011235955056179775;
          result[4] += 0.8314606741573034;
          result[5] += 0.056179775280898875;
        } else {
          result[0] += 0.0020833333333333333;
          result[1] += 0.9541666666666667;
          result[2] += 0.004166666666666667;
          result[3] += 0.0125;
          result[4] += 0.027083333333333334;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7978635990139689;
          result[1] += 0.03122432210353328;
          result[2] += 0.017255546425636814;
          result[3] += 0.03697617091207889;
          result[4] += 0.0723089564502876;
          result[5] += 0.044371405094494665;
        } else {
          result[0] += 0.2147887323943662;
          result[1] += 0.0035211267605633804;
          result[2] += 0.2640845070422535;
          result[3] += 0.30633802816901406;
          result[4] += 0.04929577464788732;
          result[5] += 0.1619718309859155;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.015873015873015872;
          result[2] += 0.015873015873015872;
          result[3] += 0.15873015873015872;
          result[4] += 0.23809523809523808;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.010050251256281407;
          result[1] += 0;
          result[2] += 0.2613065326633166;
          result[3] += 0.5628140703517588;
          result[4] += 0.020100502512562814;
          result[5] += 0.1457286432160804;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6875;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0.33333333333333337;
          result[1] += 0;
          result[2] += 0.4444444444444445;
          result[3] += 0;
          result[4] += 0.22222222222222224;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.02272727272727273;
          result[1] += 0;
          result[2] += 0.5454545454545455;
          result[3] += 0.2954545454545455;
          result[4] += 0;
          result[5] += 0.13636363636363638;
        } else {
          result[0] += 0.009708737864077669;
          result[1] += 0;
          result[2] += 0.9393203883495146;
          result[3] += 0.04975728155339806;
          result[4] += 0;
          result[5] += 0.0012135922330097086;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.005434782608695652;
          result[2] += 0;
          result[3] += 0.005434782608695652;
          result[4] += 0.9565217391304348;
          result[5] += 0.03260869565217391;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010526315789473684;
          result[4] += 0.43157894736842106;
          result[5] += 0.5578947368421052;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0023752969121140144;
          result[1] += 0.0023752969121140144;
          result[2] += 0.004750593824228029;
          result[3] += 0.06769596199524941;
          result[4] += 0.052256532066508314;
          result[5] += 0.8705463182897862;
        } else {
          result[0] += 0.09497206703910614;
          result[1] += 0.00558659217877095;
          result[2] += 0;
          result[3] += 0.3687150837988827;
          result[4] += 0.09217877094972067;
          result[5] += 0.43854748603351956;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9971751412429378;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002824858757062147;
          result[5] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8023346303501946;
          result[1] += 0.04046692607003891;
          result[2] += 0.0023346303501945525;
          result[3] += 0.02801556420233463;
          result[4] += 0.1198443579766537;
          result[5] += 0.007003891050583658;
        } else {
          result[0] += 0.1823529411764706;
          result[1] += 0.0911764705882353;
          result[2] += 0.1911764705882353;
          result[3] += 0.24411764705882355;
          result[4] += 0.07647058823529414;
          result[5] += 0.2147058823529412;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0.19047619047619047;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08620689655172414;
          result[3] += 0.034482758620689655;
          result[4] += 0.15517241379310345;
          result[5] += 0.7241379310344828;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.012875536480686695;
          result[1] += 0.012875536480686695;
          result[2] += 0.18025751072961374;
          result[3] += 0.5622317596566524;
          result[4] += 0.02575107296137339;
          result[5] += 0.20600858369098712;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7027027027027027;
          result[3] += 0.2702702702702703;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.6818181818181819;
          result[1] += 0.18181818181818185;
          result[2] += 0.13636363636363638;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8253275109170306;
          result[3] += 0.1572052401746725;
          result[4] += 0;
          result[5] += 0.017467248908296942;
        } else {
          result[0] += 0.019345238095238096;
          result[1] += 0;
          result[2] += 0.9494047619047619;
          result[3] += 0.02976190476190476;
          result[4] += 0;
          result[5] += 0.001488095238095238;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)34.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007782101167315175;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0038910505836575876;
          result[4] += 0.9610894941634242;
          result[5] += 0.027237354085603113;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0.02385496183206107;
          result[1] += 0.0057251908396946565;
          result[2] += 0;
          result[3] += 0.05534351145038168;
          result[4] += 0.06679389312977099;
          result[5] += 0.8482824427480916;
        } else {
          result[0] += 0.05825242718446602;
          result[1] += 0.0048543689320388345;
          result[2] += 0.009708737864077669;
          result[3] += 0.5436893203883495;
          result[4] += 0.03398058252427184;
          result[5] += 0.34951456310679613;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0.17346938775510204;
          result[2] += 0;
          result[3] += 0.01020408163265306;
          result[4] += 0.7857142857142857;
          result[5] += 0.01020408163265306;
        } else {
          result[0] += 0.0041753653444676405;
          result[1] += 0.9707724425887265;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.025052192066805846;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5025337837837838;
          result[1] += 0.04814189189189189;
          result[2] += 0.07939189189189189;
          result[3] += 0.13935810810810811;
          result[4] += 0.11064189189189189;
          result[5] += 0.11993243243243243;
        } else {
          result[0] += 0.9582542694497154;
          result[1] += 0;
          result[2] += 0.022770398481973434;
          result[3] += 0.018975332068311195;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0.05263157894736842;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0.6842105263157895;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4112903225806452;
          result[3] += 0.5241935483870968;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.04819277108433734;
          result[1] += 0.036144578313253004;
          result[2] += 0.795180722891566;
          result[3] += 0.04819277108433734;
          result[4] += 0.012048192771084335;
          result[5] += 0.06024096385542167;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.76;
          result[3] += 0.20666666666666667;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.945054945054945;
          result[3] += 0.054945054945054944;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9577464788732394;
          result[3] += 0.04225352112676056;
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0.004098360655737705;
          result[1] += 0.03278688524590164;
          result[2] += 0;
          result[3] += 0.00819672131147541;
          result[4] += 0.9098360655737705;
          result[5] += 0.045081967213114756;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.4166666666666667;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.014606741573033709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0449438202247191;
          result[4] += 0.07078651685393259;
          result[5] += 0.8696629213483146;
        } else {
          result[0] += 0.08415841584158416;
          result[1] += 0.027227722772277228;
          result[2] += 0.05198019801980198;
          result[3] += 0.37623762376237624;
          result[4] += 0.10396039603960396;
          result[5] += 0.3564356435643564;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.011111111111111112;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9759825327510917;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.024017467248908297;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7973186119873815;
          result[1] += 0.015772870662460563;
          result[2] += 0.0031545741324921126;
          result[3] += 0.04652996845425867;
          result[4] += 0.06466876971608831;
          result[5] += 0.0725552050473186;
        } else {
          result[0] += 0.2275;
          result[1] += 0.0375;
          result[2] += 0.2575;
          result[3] += 0.2675;
          result[4] += 0.0625;
          result[5] += 0.1475;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22807017543859648;
          result[3] += 0.543859649122807;
          result[4] += 0;
          result[5] += 0.22807017543859648;
        } else {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.42857142857142855;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8529411764705882;
          result[3] += 0.14705882352941177;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.8125;
        } else {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.6774193548387096;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2903225806451613;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0.14705882352941177;
          result[1] += 0;
          result[2] += 0.6470588235294118;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        } else {
          result[0] += 0.001175088131609871;
          result[1] += 0;
          result[2] += 0.937720329024677;
          result[3] += 0.061104582843713284;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.031818181818181815;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9409090909090909;
          result[5] += 0.02727272727272727;
        } else {
          result[0] += 0.3233082706766917;
          result[1] += 0;
          result[2] += 0.03759398496240601;
          result[3] += 0.09774436090225563;
          result[4] += 0.23308270676691728;
          result[5] += 0.3082706766917293;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0010683760683760685;
          result[1] += 0.009615384615384616;
          result[2] += 0.004273504273504274;
          result[3] += 0.045940170940170943;
          result[4] += 0.06837606837606838;
          result[5] += 0.8707264957264957;
        } else {
          result[0] += 0.006734006734006734;
          result[1] += 0.013468013468013467;
          result[2] += 0.04713804713804714;
          result[3] += 0.48148148148148145;
          result[4] += 0.030303030303030304;
          result[5] += 0.4208754208754209;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9375;
          result[5] += 0;
        } else {
          result[0] += 0.0024271844660194173;
          result[1] += 0.9854368932038835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012135922330097087;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7587230883444693;
          result[1] += 0.03711952487008167;
          result[2] += 0.0022271714922049;
          result[3] += 0.023756495916852267;
          result[4] += 0.13734224201930217;
          result[5] += 0.040831477357089835;
        } else {
          result[0] += 0.18110236220472442;
          result[1] += 0.0026246719160104987;
          result[2] += 0.2204724409448819;
          result[3] += 0.3359580052493438;
          result[4] += 0.026246719160104987;
          result[5] += 0.2335958005249344;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.21212121212121213;
          result[4] += 0.030303030303030304;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.16666666666666666;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.056338028169014086;
          result[2] += 0.5633802816901409;
          result[3] += 0.2535211267605634;
          result[4] += 0.08450704225352113;
          result[5] += 0.04225352112676056;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.004608294930875577;
          result[1] += 0;
          result[2] += 0.8294930875576038;
          result[3] += 0.13364055299539174;
          result[4] += 0;
          result[5] += 0.03225806451612904;
        } else {
          result[0] += 0.004273504273504274;
          result[1] += 0;
          result[2] += 0.9658119658119658;
          result[3] += 0.029914529914529916;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00411522633744856;
          result[1] += 0.08641975308641975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.897119341563786;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0.4470588235294118;
          result[1] += 0.0058823529411764705;
          result[2] += 0;
          result[3] += 0.03529411764705882;
          result[4] += 0.24705882352941178;
          result[5] += 0.2647058823529412;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0038860103626943004;
          result[3] += 0.04145077720207254;
          result[4] += 0.06476683937823834;
          result[5] += 0.8898963730569949;
        } else {
          result[0] += 0.026217228464419477;
          result[1] += 0.0299625468164794;
          result[2] += 0.011235955056179775;
          result[3] += 0.30337078651685395;
          result[4] += 0.16104868913857678;
          result[5] += 0.4681647940074906;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          result[0] += 0.05813953488372093;
          result[1] += 0.3953488372093023;
          result[2] += 0;
          result[3] += 0.09302325581395349;
          result[4] += 0.43023255813953487;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0.010025062656641603;
          result[1] += 0.9899749373433584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0.2365038560411311;
          result[1] += 0.03598971722365039;
          result[2] += 0;
          result[3] += 0.32390745501285345;
          result[4] += 0.043701799485861184;
          result[5] += 0.35989717223650386;
        } else {
          result[0] += 0.790468364831553;
          result[1] += 0.03204601479046836;
          result[2] += 0.04272801972062449;
          result[3] += 0.02629416598192276;
          result[4] += 0.05834018077239113;
          result[5] += 0.05012325390304026;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0.15789473684210525;
          result[3] += 0;
          result[4] += 0.7368421052631579;
          result[5] += 0;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0.010869565217391304;
          result[2] += 0.14130434782608695;
          result[3] += 0.17391304347826086;
          result[4] += 0.07608695652173914;
          result[5] += 0.5869565217391305;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0.8214285714285714;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.024193548387096774;
          result[1] += 0;
          result[2] += 0.4112903225806452;
          result[3] += 0.3629032258064516;
          result[4] += 0;
          result[5] += 0.20161290322580644;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
          result[0] += 0.011673151750972763;
          result[1] += 0;
          result[2] += 0.7509727626459144;
          result[3] += 0.2140077821011673;
          result[4] += 0;
          result[5] += 0.023346303501945526;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
          result[2] += 0.956140350877193;
          result[3] += 0.043859649122807015;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004464285714285715;
          result[1] += 0.00892857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9776785714285715;
          result[5] += 0.00892857142857143;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          result[0] += 0.1206896551724138;
          result[1] += 0.05172413793103448;
          result[2] += 0;
          result[3] += 0.11206896551724138;
          result[4] += 0.4051724137931034;
          result[5] += 0.3103448275862069;
        } else {
          result[0] += 0.9545454545454546;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7368421052631579;
          result[5] += 0.2631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003436426116838488;
          result[3] += 0.052691867124856816;
          result[4] += 0.025200458190148912;
          result[5] += 0.9186712485681557;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.31578947368421056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.052631578947368425;
          result[4] += 0.5263157894736843;
          result[5] += 0.10526315789473685;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0.01699029126213592;
          result[2] += 0.024271844660194174;
          result[3] += 0.47815533980582525;
          result[4] += 0.02912621359223301;
          result[5] += 0.44660194174757284;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          result[0] += 0.06060606060606061;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0.06060606060606061;
        } else {
          result[0] += 0.004889975550122249;
          result[1] += 0.9853300733496333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009779951100244499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.050505050505050504;
          result[1] += 0.3939393939393939;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0;
        } else {
          result[0] += 0.7680180180180181;
          result[1] += 0.021021021021021023;
          result[2] += 0.04804804804804805;
          result[3] += 0.0472972972972973;
          result[4] += 0.07282282282282282;
          result[5] += 0.04279279279279279;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
          result[0] += 0.022099447513812157;
          result[1] += 0.027624309392265196;
          result[2] += 0.37569060773480667;
          result[3] += 0.33149171270718236;
          result[4] += 0.01657458563535912;
          result[5] += 0.22651933701657462;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.6756756756756757;
          result[1] += 0;
          result[2] += 0.32432432432432434;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005319148936170213;
          result[1] += 0;
          result[2] += 0.8946808510638298;
          result[3] += 0.08829787234042553;
          result[4] += 0;
          result[5] += 0.011702127659574468;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6071428571428571;
          result[5] += 0.32142857142857145;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.5573770491803279;
          result[1] += 0.1475409836065574;
          result[2] += 0;
          result[3] += 0.03278688524590165;
          result[4] += 0.0819672131147541;
          result[5] += 0.18032786885245905;
        } else {
          result[0] += 0.005787037037037037;
          result[1] += 0.004629629629629629;
          result[2] += 0.003472222222222222;
          result[3] += 0.03125;
          result[4] += 0.05555555555555555;
          result[5] += 0.8993055555555556;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.022598870056497175;
          result[1] += 0.01694915254237288;
          result[2] += 0.011299435028248588;
          result[3] += 0.288135593220339;
          result[4] += 0.02824858757062147;
          result[5] += 0.632768361581921;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09142857142857143;
          result[3] += 0.6342857142857142;
          result[4] += 0;
          result[5] += 0.2742857142857143;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9830917874396136;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014492753623188406;
          result[5] += 0;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0.3116883116883117;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.577922077922078;
          result[5] += 0.025974025974025976;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.87468671679198;
          result[1] += 0.020885547201336674;
          result[2] += 0.003341687552213868;
          result[3] += 0.017543859649122806;
          result[4] += 0.07435254803675856;
          result[5] += 0.009189640768588136;
        } else {
          result[0] += 0.23026315789473684;
          result[1] += 0.019736842105263157;
          result[2] += 0.11842105263157894;
          result[3] += 0.23355263157894737;
          result[4] += 0.09868421052631579;
          result[5] += 0.2993421052631579;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.16666666666666666;
          result[4] += 0.020833333333333332;
          result[5] += 0.7291666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.5353535353535354;
          result[4] += 0;
          result[5] += 0.24242424242424243;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0.04642857142857143;
          result[1] += 0.03571428571428571;
          result[2] += 0.6;
          result[3] += 0.2571428571428571;
          result[4] += 0.02142857142857143;
          result[5] += 0.039285714285714285;
        } else {
          result[0] += 0.00639386189258312;
          result[1] += 0.0025575447570332483;
          result[2] += 0.9386189258312021;
          result[3] += 0.03836317135549872;
          result[4] += 0.0038363171355498722;
          result[5] += 0.010230179028132993;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.014760147601476014;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.948339483394834;
          result[5] += 0.03690036900369004;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4166666666666667;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8620689655172413;
          result[5] += 0.13793103448275862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03282828282828283;
          result[4] += 0.026515151515151516;
          result[5] += 0.9406565656565656;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.09482758620689655;
          result[1] += 0.09482758620689655;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.0603448275862069;
          result[5] += 0.6810344827586207;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.5285714285714286;
          result[4] += 0.004761904761904762;
          result[5] += 0.35714285714285715;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.02;
          result[1] += 0.07;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.89;
          result[5] += 0.02;
        } else {
          result[0] += 0;
          result[1] += 0.9681528662420382;
          result[2] += 0;
          result[3] += 0.004246284501061571;
          result[4] += 0.027600849256900213;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
          result[0] += 0.8409638554216867;
          result[1] += 0.01927710843373494;
          result[2] += 0.004016064257028112;
          result[3] += 0.033734939759036145;
          result[4] += 0.060240963855421686;
          result[5] += 0.04176706827309237;
        } else {
          result[0] += 0.25352112676056343;
          result[1] += 0.014084507042253523;
          result[2] += 0.5774647887323945;
          result[3] += 0.014084507042253523;
          result[4] += 0.028169014084507046;
          result[5] += 0.11267605633802819;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.0035460992907801418;
          result[1] += 0.024822695035460994;
          result[2] += 0.06028368794326241;
          result[3] += 0.5177304964539007;
          result[4] += 0.05319148936170213;
          result[5] += 0.3404255319148936;
        } else {
          result[0] += 0.20087336244541484;
          result[1] += 0.004366812227074236;
          result[2] += 0.37554585152838427;
          result[3] += 0.08733624454148471;
          result[4] += 0.17467248908296942;
          result[5] += 0.1572052401746725;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6617647058823529;
          result[3] += 0.2757352941176471;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.0041666666666666675;
          result[1] += 0;
          result[2] += 0.9500000000000001;
          result[3] += 0.04444444444444445;
          result[4] += 0;
          result[5] += 0.0013888888888888892;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0.008620689655172414;
          result[1] += 0.008620689655172414;
          result[2] += 0;
          result[3] += 0.021551724137931036;
          result[4] += 0.8922413793103449;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.6862745098039216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09803921568627451;
          result[5] += 0.21568627450980393;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0021231422505307855;
          result[1] += 0.0010615711252653928;
          result[2] += 0;
          result[3] += 0.0732484076433121;
          result[4] += 0.05201698513800425;
          result[5] += 0.8715498938428875;
        } else {
          result[0] += 0.006622516556291391;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6357615894039735;
          result[4] += 0;
          result[5] += 0.3576158940397351;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.8461538461538461;
          result[5] += 0;
        } else {
          result[0] += 0.002164502164502165;
          result[1] += 0.9783549783549784;
          result[2] += 0;
          result[3] += 0.00432900432900433;
          result[4] += 0.015151515151515154;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7686246418338109;
          result[1] += 0.032234957020057305;
          result[2] += 0.014326647564469915;
          result[3] += 0.025071633237822348;
          result[4] += 0.11962750716332378;
          result[5] += 0.04011461318051576;
        } else {
          result[0] += 0.12578616352201258;
          result[1] += 0.0031446540880503146;
          result[2] += 0.25157232704402516;
          result[3] += 0.3333333333333333;
          result[4] += 0.07861635220125786;
          result[5] += 0.20754716981132076;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014184397163120567;
          result[2] += 0.07801418439716312;
          result[3] += 0.45390070921985815;
          result[4] += 0.014184397163120567;
          result[5] += 0.4397163120567376;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8448275862068966;
          result[3] += 0.08620689655172414;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.14285714285714285;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        } else {
          result[0] += 0.04819277108433735;
          result[1] += 0;
          result[2] += 0.6867469879518072;
          result[3] += 0.26506024096385544;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0.0045662100456621;
          result[1] += 0;
          result[2] += 0.9406392694063926;
          result[3] += 0.0502283105022831;
          result[4] += 0;
          result[5] += 0.0045662100456621;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.03783783783783784;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9621621621621622;
          result[5] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.07272727272727272;
          result[2] += 0.03636363636363636;
          result[3] += 0;
          result[4] += 0.42727272727272725;
          result[5] += 0.2818181818181818;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02601156069364162;
          result[4] += 0.02023121387283237;
          result[5] += 0.953757225433526;
        } else {
          result[0] += 0;
          result[1] += 0.011695906432748537;
          result[2] += 0.017543859649122806;
          result[3] += 0.34210526315789475;
          result[4] += 0.0935672514619883;
          result[5] += 0.5350877192982456;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
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
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
          result[0] += 0.09226190476190477;
          result[1] += 0.08630952380952381;
          result[2] += 0.002976190476190476;
          result[3] += 0.22916666666666666;
          result[4] += 0.19345238095238096;
          result[5] += 0.3958333333333333;
        } else {
          result[0] += 0.7198192382182053;
          result[1] += 0.023240800516462233;
          result[2] += 0.030342156229825695;
          result[3] += 0.07295029051000645;
          result[4] += 0.1013557133634603;
          result[5] += 0.052291801162040026;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14414414414414414;
          result[3] += 0.6306306306306306;
          result[4] += 0;
          result[5] += 0.22522522522522523;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5851063829787234;
          result[3] += 0.2765957446808511;
          result[4] += 0;
          result[5] += 0.13829787234042554;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02487562189054727;
          result[1] += 0;
          result[2] += 0.8109452736318409;
          result[3] += 0.1293532338308458;
          result[4] += 0.0049751243781094535;
          result[5] += 0.02985074626865672;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.68;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.02;
        } else {
          result[0] += 0.023529411764705882;
          result[1] += 0;
          result[2] += 0.9058823529411765;
          result[3] += 0.07058823529411765;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.23529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9853658536585366;
          result[3] += 0.013008130081300813;
          result[4] += 0;
          result[5] += 0.0016260162601626016;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.004201680672268907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9663865546218487;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0;
          result[1] += 0.35714285714285715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6428571428571429;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18333333333333332;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0.0025817555938037868;
          result[1] += 0.0025817555938037868;
          result[2] += 0.0025817555938037868;
          result[3] += 0.13855421686746988;
          result[4] += 0.043029259896729774;
          result[5] += 0.810671256454389;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9849246231155779;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01507537688442211;
          result[5] += 0;
        } else {
          result[0] += 0.009174311926605505;
          result[1] += 0.3761467889908257;
          result[2] += 0.009174311926605505;
          result[3] += 0;
          result[4] += 0.6055045871559633;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8336025848142165;
          result[1] += 0.02665589660743134;
          result[2] += 0.004846526655896607;
          result[3] += 0.025848142164781908;
          result[4] += 0.08239095315024232;
          result[5] += 0.02665589660743134;
        } else {
          result[0] += 0.18450184501845018;
          result[1] += 0.02214022140221402;
          result[2] += 0.24354243542435425;
          result[3] += 0.2066420664206642;
          result[4] += 0.11439114391143912;
          result[5] += 0.22878228782287824;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14864864864864866;
          result[4] += 0.0945945945945946;
          result[5] += 0.7567567567567568;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1564625850340136;
          result[3] += 0.6258503401360545;
          result[4] += 0.013605442176870748;
          result[5] += 0.20408163265306123;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8125;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0.09375;
          result[2] += 0.5;
          result[3] += 0.15625;
          result[4] += 0.03125;
          result[5] += 0.15625;
        } else {
          result[0] += 0.7307692307692307;
          result[1] += 0;
          result[2] += 0.21153846153846154;
          result[3] += 0;
          result[4] += 0.057692307692307696;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.008714596949891068;
          result[1] += 0;
          result[2] += 0.8061002178649237;
          result[3] += 0.16775599128540306;
          result[4] += 0;
          result[5] += 0.017429193899782137;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9902912621359223;
          result[3] += 0.009708737864077669;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
          result[0] += 0.010282776349614395;
          result[1] += 0.028277634961439587;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9048843187660668;
          result[5] += 0.056555269922879174;
        } else {
          result[0] += 0;
          result[1] += 0.7407407407407407;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25925925925925924;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.8035714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19642857142857142;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02359550561797753;
          result[1] += 0.0011235955056179776;
          result[2] += 0;
          result[3] += 0.052808988764044947;
          result[4] += 0.06292134831460675;
          result[5] += 0.8595505617977528;
        } else {
          result[0] += 0.07094594594594594;
          result[1] += 0.02364864864864865;
          result[2] += 0.04054054054054054;
          result[3] += 0.4189189189189189;
          result[4] += 0.07432432432432433;
          result[5] += 0.3716216216216216;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8548123980424145;
          result[1] += 0.022022838499184343;
          result[2] += 0.00570962479608483;
          result[3] += 0.029363784665579123;
          result[4] += 0.053017944535073414;
          result[5] += 0.03507340946166396;
        } else {
          result[0] += 0.18814432989690724;
          result[1] += 0.007731958762886599;
          result[2] += 0.1829896907216495;
          result[3] += 0.2628865979381444;
          result[4] += 0.0695876288659794;
          result[5] += 0.288659793814433;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0379746835443038;
          result[3] += 0.189873417721519;
          result[4] += 0.0379746835443038;
          result[5] += 0.7341772151898734;
        } else {
          result[0] += 0;
          result[1] += 0.23076923076923078;
          result[2] += 0.46153846153846156;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0.5119047619047619;
          result[4] += 0;
          result[5] += 0.13095238095238096;
        } else {
          result[0] += 0.010752688172043012;
          result[1] += 0;
          result[2] += 0.8387096774193549;
          result[3] += 0.10752688172043011;
          result[4] += 0;
          result[5] += 0.043010752688172046;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.7894736842105263;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02875399361022364;
          result[1] += 0.009584664536741214;
          result[2] += 0.7667731629392971;
          result[3] += 0.16932907348242812;
          result[4] += 0;
          result[5] += 0.025559105431309903;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7714285714285715;
          result[3] += 0.22857142857142856;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9890310786106032;
          result[3] += 0.010968921389396709;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.02766798418972332;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9525691699604744;
          result[5] += 0.019762845849802372;
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
          result[0] += 0.0011037527593818985;
          result[1] += 0;
          result[2] += 0.0011037527593818985;
          result[3] += 0.05518763796909492;
          result[4] += 0.03863134657836645;
          result[5] += 0.9039735099337748;
        } else {
          result[0] += 0.10377358490566038;
          result[1] += 0.013207547169811321;
          result[2] += 0.0509433962264151;
          result[3] += 0.3283018867924528;
          result[4] += 0.12264150943396226;
          result[5] += 0.38113207547169814;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0.013574660633484165;
          result[1] += 0.9683257918552037;
          result[2] += 0;
          result[3] += 0.009049773755656111;
          result[4] += 0.009049773755656111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7810331534309946;
          result[1] += 0.04317656129529684;
          result[2] += 0.01233616037008481;
          result[3] += 0.027756360832690823;
          result[4] += 0.09175019275250579;
          result[5] += 0.04394757131842714;
        } else {
          result[0] += 0.20679012345679013;
          result[1] += 0.006172839506172839;
          result[2] += 0.26851851851851855;
          result[3] += 0.24691358024691357;
          result[4] += 0.040123456790123455;
          result[5] += 0.23148148148148148;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.011363636363636364;
          result[2] += 0.03409090909090909;
          result[3] += 0.25;
          result[4] += 0.045454545454545456;
          result[5] += 0.6590909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.19230769230769232;
          result[2] += 0.46153846153846156;
          result[3] += 0.038461538461538464;
          result[4] += 0.07692307692307693;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32432432432432434;
          result[3] += 0.43243243243243246;
          result[4] += 0;
          result[5] += 0.24324324324324326;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8360655737704918;
          result[3] += 0.14754098360655737;
          result[4] += 0;
          result[5] += 0.01639344262295082;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.34375;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.15625;
        } else {
          result[0] += 0.07262569832402235;
          result[1] += 0;
          result[2] += 0.8379888268156425;
          result[3] += 0.0893854748603352;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7941176470588235;
          result[3] += 0.20588235294117646;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005076142131979695;
          result[1] += 0;
          result[2] += 0.9661590524534687;
          result[3] += 0.028764805414551606;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0.0321285140562249;
          result[2] += 0;
          result[3] += 0.0321285140562249;
          result[4] += 0.8795180722891566;
          result[5] += 0.05622489959839357;
        } else {
          result[0] += 0;
          result[1] += 0.9583333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.041666666666666664;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.03934740882917467;
          result[1] += 0.0047984644913627635;
          result[2] += 0.0019193857965451055;
          result[3] += 0.07581573896353166;
          result[4] += 0.06621880998080615;
          result[5] += 0.8119001919385797;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.020202020202020204;
          result[3] += 0.5909090909090909;
          result[4] += 0.03535353535353535;
          result[5] += 0.32323232323232326;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.16;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.84;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9929411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007058823529411765;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7842822774659183;
          result[1] += 0.019246190858059346;
          result[2] += 0.002405773857257418;
          result[3] += 0.033680834001603856;
          result[4] += 0.1299117882919006;
          result[5] += 0.03047313552526063;
        } else {
          result[0] += 0.18942731277533034;
          result[1] += 0.04625550660792951;
          result[2] += 0.1674008810572687;
          result[3] += 0.25110132158590304;
          result[4] += 0.09251101321585901;
          result[5] += 0.2533039647577092;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2638888888888889;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.29166666666666674;
          result[3] += 0.5416666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.011904761904761906;
          result[1] += 0;
          result[2] += 0.8214285714285715;
          result[3] += 0.16071428571428575;
          result[4] += 0;
          result[5] += 0.005952380952380953;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)109.5) ) ) {
          result[0] += 0.07407407407407407;
          result[1] += 0;
          result[2] += 0.6296296296296297;
          result[3] += 0.18518518518518517;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0023640661938534283;
          result[1] += 0;
          result[2] += 0.946808510638298;
          result[3] += 0.049645390070921995;
          result[4] += 0;
          result[5] += 0.0011820330969267141;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92.5) ) ) {
          result[0] += 0.0030395136778115506;
          result[1] += 0.024316109422492405;
          result[2] += 0;
          result[3] += 0.027355623100303955;
          result[4] += 0.905775075987842;
          result[5] += 0.03951367781155016;
        } else {
          result[0] += 0;
          result[1] += 0.9629629629629629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.037037037037037035;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.6086956521739131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.30434782608695654;
          result[5] += 0.06521739130434782;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.032091097308488616;
          result[1] += 0;
          result[2] += 0.003105590062111801;
          result[3] += 0.052795031055900624;
          result[4] += 0.06832298136645963;
          result[5] += 0.8436853002070394;
        } else {
          result[0] += 0.05454545454545454;
          result[1] += 0.0036363636363636364;
          result[2] += 0.014545454545454545;
          result[3] += 0.44363636363636366;
          result[4] += 0.04363636363636364;
          result[5] += 0.44;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8147268408551069;
          result[1] += 0.03721298495645289;
          result[2] += 0.00395882818685669;
          result[3] += 0.026920031670625493;
          result[4] += 0.08471892319873317;
          result[5] += 0.03246239113222486;
        } else {
          result[0] += 0.20711974110032363;
          result[1] += 0.009708737864077669;
          result[2] += 0.13592233009708737;
          result[3] += 0.3042071197411003;
          result[4] += 0.05825242718446602;
          result[5] += 0.284789644012945;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.3181818181818182;
          result[4] += 0;
          result[5] += 0.5909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1592920353982301;
          result[3] += 0.7433628318584071;
          result[4] += 0;
          result[5] += 0.09734513274336283;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8620689655172413;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
          result[0] += 0.015822784810126583;
          result[1] += 0;
          result[2] += 0.7310126582278481;
          result[3] += 0.1930379746835443;
          result[4] += 0;
          result[5] += 0.060126582278481014;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.2777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.011695906432748537;
          result[1] += 0;
          result[2] += 0.8596491228070176;
          result[3] += 0.11695906432748537;
          result[4] += 0;
          result[5] += 0.011695906432748537;
        } else {
          result[0] += 0.001851851851851852;
          result[1] += 0;
          result[2] += 0.987037037037037;
          result[3] += 0.009259259259259259;
          result[4] += 0;
          result[5] += 0.001851851851851852;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.11857707509881424;
          result[1] += 0.003952569169960475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8300395256916997;
          result[5] += 0.047430830039525695;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.014973262032085561;
          result[2] += 0.0021390374331550803;
          result[3] += 0.06310160427807486;
          result[4] += 0.059893048128342244;
          result[5] += 0.8598930481283422;
        } else {
          result[0] += 0.0037593984962406017;
          result[1] += 0.04135338345864662;
          result[2] += 0.07142857142857144;
          result[3] += 0.4210526315789474;
          result[4] += 0.06766917293233084;
          result[5] += 0.3947368421052632;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9897435897435898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010256410256410256;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2711864406779661;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7288135593220338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
          result[0] += 0.8325991189427313;
          result[1] += 0.013215859030837005;
          result[2] += 0.000881057268722467;
          result[3] += 0.013215859030837005;
          result[4] += 0.0986784140969163;
          result[5] += 0.04140969162995595;
        } else {
          result[0] += 0.35714285714285715;
          result[1] += 0.024553571428571428;
          result[2] += 0.11160714285714286;
          result[3] += 0.21875;
          result[4] += 0.05803571428571429;
          result[5] += 0.22991071428571427;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.125;
          result[4] += 0.1;
          result[5] += 0.675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1346153846153846;
          result[3] += 0.6410256410256411;
          result[4] += 0.00641025641025641;
          result[5] += 0.21794871794871795;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.03571428571428571;
          result[2] += 0.23214285714285715;
          result[3] += 0.07142857142857142;
          result[4] += 0.23214285714285715;
          result[5] += 0.39285714285714285;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0;
          result[2] += 0.9104477611940298;
          result[3] += 0.04477611940298507;
          result[4] += 0;
          result[5] += 0.014925373134328358;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0.025069637883008356;
          result[1] += 0;
          result[2] += 0.7994428969359332;
          result[3] += 0.1671309192200557;
          result[4] += 0.002785515320334262;
          result[5] += 0.005571030640668524;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9931662870159453;
          result[3] += 0.00683371298405467;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.004016064257028112;
          result[2] += 0;
          result[3] += 0.008032128514056224;
          result[4] += 0.9116465863453815;
          result[5] += 0.07630522088353414;
        } else {
          result[0] += 0;
          result[1] += 0.6153846153846154;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.11538461538461539;
          result[5] += 0.19230769230769232;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          result[0] += 0.03731343283582089;
          result[1] += 0.0021321961620469083;
          result[2] += 0;
          result[3] += 0.04371002132196162;
          result[4] += 0.06396588486140725;
          result[5] += 0.8528784648187633;
        } else {
          result[0] += 0.021148036253776436;
          result[1] += 0;
          result[2] += 0.0634441087613293;
          result[3] += 0.3987915407854985;
          result[4] += 0.04833836858006042;
          result[5] += 0.46827794561933533;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9975062344139651;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024937655860349127;
          result[5] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.3181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0.14163090128755365;
          result[1] += 0.26609442060085836;
          result[2] += 0.008583690987124463;
          result[3] += 0.004291845493562232;
          result[4] += 0.5493562231759657;
          result[5] += 0.030042918454935622;
        } else {
          result[0] += 0.7636621717530163;
          result[1] += 0.015613910574875798;
          result[2] += 0.031227821149751596;
          result[3] += 0.06458481192334989;
          result[4] += 0.07310149041873669;
          result[5] += 0.051809794180269694;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.16666666666666666;
          result[5] += 0.7222222222222222;
        } else {
          result[0] += 0.00641025641025641;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0.6666666666666666;
          result[4] += 0.02564102564102564;
          result[5] += 0.1858974358974359;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0.020833333333333332;
          result[2] += 0.020833333333333332;
          result[3] += 0.020833333333333332;
          result[4] += 0.22916666666666666;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.014084507042253523;
          result[1] += 0;
          result[2] += 0.6901408450704226;
          result[3] += 0.1971830985915493;
          result[4] += 0.028169014084507046;
          result[5] += 0.07042253521126762;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6796875;
          result[3] += 0.3046875;
          result[4] += 0;
          result[5] += 0.015625;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
          result[0] += 0.007722007722007722;
          result[1] += 0;
          result[2] += 0.8494208494208494;
          result[3] += 0.13513513513513514;
          result[4] += 0;
          result[5] += 0.007722007722007722;
        } else {
          result[0] += 0.01876172607879925;
          result[1] += 0;
          result[2] += 0.9606003752345216;
          result[3] += 0.020637898686679174;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0036231884057971015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9601449275362319;
          result[5] += 0.036231884057971016;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.07142857142857142;
          result[4] += 0.2857142857142857;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666667;
          result[2] += 0;
          result[3] += 0.16666666666666669;
          result[4] += 0.16666666666666669;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
          result[0] += 0.15789473684210525;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.5263157894736842;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017595307917888565;
          result[4] += 0.01906158357771261;
          result[5] += 0.9633431085043989;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.6923076923076923;
          result[1] += 0.02097902097902098;
          result[2] += 0;
          result[3] += 0.027972027972027972;
          result[4] += 0.1958041958041958;
          result[5] += 0.06293706293706294;
        } else {
          result[0] += 0.008103727714748784;
          result[1] += 0.0032414910858995136;
          result[2] += 0.02593192868719611;
          result[3] += 0.36142625607779577;
          result[4] += 0.11183144246353323;
          result[5] += 0.48946515397082657;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)70.5) ) ) {
          result[0] += 0.13756613756613756;
          result[1] += 0.3492063492063492;
          result[2] += 0.06878306878306878;
          result[3] += 0.021164021164021163;
          result[4] += 0.3968253968253968;
          result[5] += 0.026455026455026454;
        } else {
          result[0] += 0.8190871369294606;
          result[1] += 0.028215767634854772;
          result[2] += 0.028215767634854772;
          result[3] += 0.04232365145228216;
          result[4] += 0.058091286307053944;
          result[5] += 0.024066390041493777;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0.009615384615384616;
          result[1] += 0.052884615384615384;
          result[2] += 0.21153846153846154;
          result[3] += 0.3557692307692308;
          result[4] += 0.08173076923076923;
          result[5] += 0.28846153846153844;
        } else {
          result[0] += 0.18777292576419213;
          result[1] += 0.026200873362445413;
          result[2] += 0.6244541484716157;
          result[3] += 0.14410480349344978;
          result[4] += 0;
          result[5] += 0.017467248908296942;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6777777777777778;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.0028011204481792717;
          result[1] += 0;
          result[2] += 0.957983193277311;
          result[3] += 0.03221288515406162;
          result[4] += 0.0014005602240896359;
          result[5] += 0.0056022408963585435;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.0211864406779661;
          result[1] += 0.00847457627118644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9322033898305084;
          result[5] += 0.038135593220338986;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          result[0] += 0.5084745762711864;
          result[1] += 0.0847457627118644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3305084745762712;
          result[5] += 0.07627118644067797;
        } else {
          result[0] += 0.007680491551459293;
          result[1] += 0.002304147465437788;
          result[2] += 0.002304147465437788;
          result[3] += 0.1827956989247312;
          result[4] += 0.041474654377880185;
          result[5] += 0.7634408602150538;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.6333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954545454545455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004545454545454545;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7937710437710438;
          result[1] += 0.046296296296296294;
          result[2] += 0.0025252525252525255;
          result[3] += 0.015151515151515152;
          result[4] += 0.132996632996633;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0.2711864406779661;
          result[1] += 0.00847457627118644;
          result[2] += 0.17231638418079095;
          result[3] += 0.23163841807909605;
          result[4] += 0.07627118644067797;
          result[5] += 0.2401129943502825;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17567567567567569;
          result[3] += 0.6351351351351351;
          result[4] += 0.006756756756756757;
          result[5] += 0.18243243243243243;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8260869565217391;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8382352941176471;
          result[3] += 0.16176470588235295;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)119.5) ) ) {
          result[0] += 0.01587301587301587;
          result[1] += 0;
          result[2] += 0.7698412698412697;
          result[3] += 0.11111111111111108;
          result[4] += 0;
          result[5] += 0.10317460317460314;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9530638852672751;
          result[3] += 0.04432855280312908;
          result[4] += 0;
          result[5] += 0.002607561929595828;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0.003787878787878788;
          result[1] += 0.01893939393939394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.946969696969697;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.6142131979695431;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01015228426395939;
          result[4] += 0.18781725888324874;
          result[5] += 0.18781725888324874;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.3536585365853659;
          result[2] += 0;
          result[3] += 0.03658536585365854;
          result[4] += 0.5000000000000001;
          result[5] += 0.10975609756097562;
        } else {
          result[0] += 0.001998001998001998;
          result[1] += 0.004995004995004995;
          result[2] += 0.003996003996003996;
          result[3] += 0.1008991008991009;
          result[4] += 0.030969030969030968;
          result[5] += 0.8571428571428571;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0.9972144846796658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002785515320334262;
          result[5] += 0;
        } else {
          result[0] += 0.21428571428571427;
          result[1] += 0.5357142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7413793103448277;
          result[1] += 0.06818181818181819;
          result[2] += 0.0007836990595611286;
          result[3] += 0.033699059561128536;
          result[4] += 0.11128526645768026;
          result[5] += 0.04467084639498433;
        } else {
          result[0] += 0.17411764705882352;
          result[1] += 0.004705882352941176;
          result[2] += 0.18352941176470589;
          result[3] += 0.37176470588235294;
          result[4] += 0.02588235294117647;
          result[5] += 0.24;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.017241379310344827;
          result[2] += 0.10344827586206896;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0.6724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031746031746031744;
          result[3] += 0.6984126984126984;
          result[4] += 0;
          result[5] += 0.2698412698412698;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
          result[0] += 0.06481481481481481;
          result[1] += 0;
          result[2] += 0.5092592592592593;
          result[3] += 0.3333333333333333;
          result[4] += 0.018518518518518517;
          result[5] += 0.07407407407407407;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008021390374331552;
          result[1] += 0;
          result[2] += 0.8155080213903744;
          result[3] += 0.17379679144385027;
          result[4] += 0;
          result[5] += 0.00267379679144385;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.923728813559322;
          result[3] += 0.06779661016949153;
          result[4] += 0;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0.0022727272727272726;
          result[1] += 0;
          result[2] += 0.9931818181818182;
          result[3] += 0.004545454545454545;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          result[0] += 0.003937007874015748;
          result[1] += 0.003937007874015748;
          result[2] += 0.015748031496062992;
          result[3] += 0;
          result[4] += 0.9291338582677166;
          result[5] += 0.047244094488188976;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.044444444444444446;
          result[4] += 0.019444444444444445;
          result[5] += 0.9361111111111111;
        } else {
          result[0] += 0.09507042253521127;
          result[1] += 0.03345070422535211;
          result[2] += 0.017605633802816902;
          result[3] += 0.30985915492957744;
          result[4] += 0.09683098591549295;
          result[5] += 0.4471830985915493;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7001404494382022;
          result[1] += 0.07514044943820225;
          result[2] += 0;
          result[3] += 0.023174157303370788;
          result[4] += 0.15168539325842698;
          result[5] += 0.04985955056179775;
        } else {
          result[0] += 0.18502202643171806;
          result[1] += 0.015418502202643172;
          result[2] += 0.2092511013215859;
          result[3] += 0.3436123348017621;
          result[4] += 0.039647577092511016;
          result[5] += 0.20704845814977973;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0;
        } else {
          result[0] += 0.005865102639296188;
          result[1] += 0.9941348973607038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0.034482758620689655;
          result[3] += 0.13793103448275862;
          result[4] += 0;
          result[5] += 0.7931034482758621;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.041237113402061855;
          result[2] += 0.5876288659793815;
          result[3] += 0.09278350515463918;
          result[4] += 0.020618556701030927;
          result[5] += 0.25773195876288657;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
          result[0] += 0.011494252873563218;
          result[1] += 0;
          result[2] += 0.5172413793103449;
          result[3] += 0.45977011494252873;
          result[4] += 0;
          result[5] += 0.011494252873563218;
        } else {
          result[0] += 0.012345679012345678;
          result[1] += 0;
          result[2] += 0.8395061728395061;
          result[3] += 0.12345679012345678;
          result[4] += 0;
          result[5] += 0.024691358024691357;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.3157894736842105;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004862236628849271;
          result[1] += 0;
          result[2] += 0.965964343598055;
          result[3] += 0.022690437601296597;
          result[4] += 0;
          result[5] += 0.006482982171799027;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0.06569343065693431;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010948905109489052;
          result[4] += 0.7956204379562044;
          result[5] += 0.12773722627737227;
        } else {
          result[0] += 0.6607142857142858;
          result[1] += 0.10714285714285715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19642857142857145;
          result[5] += 0.03571428571428572;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0037267080745341614;
          result[2] += 0;
          result[3] += 0.03975155279503106;
          result[4] += 0.034782608695652174;
          result[5] += 0.9217391304347826;
        } else {
          result[0] += 0.014534883720930232;
          result[1] += 0.055232558139534885;
          result[2] += 0.00872093023255814;
          result[3] += 0.4738372093023256;
          result[4] += 0.0436046511627907;
          result[5] += 0.40406976744186046;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.720619282195637;
          result[1] += 0.07107670654468685;
          result[2] += 0.010555946516537651;
          result[3] += 0.03659394792399719;
          result[4] += 0.13511611541168195;
          result[5] += 0.02603800140745954;
        } else {
          result[0] += 0.15441176470588236;
          result[1] += 0.004901960784313725;
          result[2] += 0.22303921568627452;
          result[3] += 0.3014705882352941;
          result[4] += 0.10294117647058823;
          result[5] += 0.21323529411764705;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0.986737400530504;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013262599469496022;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.7692307692307693;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0.0125;
          result[2] += 0.0375;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.575;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5225225225225225;
          result[3] += 0.42342342342342343;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.961038961038961;
          result[3] += 0.03896103896103896;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.25;
          result[2] += 0.5833333333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8461538461538461;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010309278350515464;
          result[1] += 0;
          result[2] += 0.7989690721649485;
          result[3] += 0.16494845360824742;
          result[4] += 0;
          result[5] += 0.02577319587628866;
        } else {
          result[0] += 0.0109717868338558;
          result[1] += 0;
          result[2] += 0.9749216300940439;
          result[3] += 0.014106583072100314;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99.5) ) ) {
          result[0] += 0.013333333333333334;
          result[1] += 0.01;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.91;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.03355704697986577;
          result[1] += 0.017897091722595078;
          result[2] += 0.0011185682326621924;
          result[3] += 0.04138702460850112;
          result[4] += 0.04586129753914989;
          result[5] += 0.860178970917226;
        } else {
          result[0] += 0.021806853582554516;
          result[1] += 0;
          result[2] += 0.04672897196261682;
          result[3] += 0.5420560747663551;
          result[4] += 0.006230529595015576;
          result[5] += 0.38317757009345793;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.37433155080213903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5668449197860963;
          result[5] += 0;
        } else {
          result[0] += 0.740662438336857;
          result[1] += 0.013389711064129669;
          result[2] += 0.05637773079633545;
          result[3] += 0.06272022551092318;
          result[4] += 0.057787174066243834;
          result[5] += 0.06906272022551092;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
          result[0] += 0.007125890736342043;
          result[1] += 0.9904988123515439;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023752969121140144;
          result[5] += 0;
        } else {
          result[0] += 0.23076923076923078;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027777777777777776;
          result[4] += 0.2222222222222222;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8076923076923077;
          result[5] += 0.15384615384615385;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0.8846153846153846;
        } else {
          result[0] += 0.004310344827586207;
          result[1] += 0.004310344827586207;
          result[2] += 0.2413793103448276;
          result[3] += 0.5258620689655172;
          result[4] += 0.004310344827586207;
          result[5] += 0.21982758620689655;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.026455026455026454;
          result[1] += 0;
          result[2] += 0.6931216931216931;
          result[3] += 0.25396825396825395;
          result[4] += 0.005291005291005291;
          result[5] += 0.021164021164021163;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9368932038834952;
          result[3] += 0.05825242718446602;
          result[4] += 0;
          result[5] += 0.0048543689320388345;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.016728624535315987;
          result[1] += 0;
          result[2] += 0.9591078066914499;
          result[3] += 0.02230483271375465;
          result[4] += 0;
          result[5] += 0.001858736059479554;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.004166666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9708333333333333;
          result[5] += 0.025;
        } else {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014992503748125937;
          result[3] += 0.020989505247376312;
          result[4] += 0.026986506746626688;
          result[5] += 0.9505247376311844;
        } else {
          result[0] += 0.06543624161073826;
          result[1] += 0.028523489932885907;
          result[2] += 0.013422818791946308;
          result[3] += 0.26174496644295303;
          result[4] += 0.0738255033557047;
          result[5] += 0.5570469798657718;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 0.9974811083123426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025188916876574307;
          result[5] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.6904761904761905;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2619047619047619;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0.03048780487804878;
          result[1] += 0.18292682926829268;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.7378048780487805;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0.7315010570824524;
          result[1] += 0.030303030303030304;
          result[2] += 0.012684989429175475;
          result[3] += 0.06412966878083157;
          result[4] += 0.06976744186046512;
          result[5] += 0.0916138125440451;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10948905109489052;
          result[3] += 0.7007299270072993;
          result[4] += 0;
          result[5] += 0.1897810218978102;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0.014705882352941176;
          result[1] += 0;
          result[2] += 0.45588235294117646;
          result[3] += 0.35294117647058826;
          result[4] += 0.029411764705882353;
          result[5] += 0.14705882352941177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8421052631578947;
          result[3] += 0.14035087719298245;
          result[4] += 0;
          result[5] += 0.017543859649122806;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          result[0] += 0.02491103202846975;
          result[1] += 0.0035587188612099642;
          result[2] += 0.7615658362989324;
          result[3] += 0.1494661921708185;
          result[4] += 0.0035587188612099642;
          result[5] += 0.05693950177935943;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.026595744680851064;
          result[1] += 0;
          result[2] += 0.8404255319148937;
          result[3] += 0.11702127659574468;
          result[4] += 0;
          result[5] += 0.015957446808510637;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9776536312849162;
          result[3] += 0.0223463687150838;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.008264462809917356;
          result[1] += 0.004132231404958678;
          result[2] += 0;
          result[3] += 0.012396694214876033;
          result[4] += 0.9214876033057852;
          result[5] += 0.05371900826446281;
        } else {
          result[0] += 0;
          result[1] += 1;
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
          result[3] += 0.03910614525139665;
          result[4] += 0.03212290502793296;
          result[5] += 0.9287709497206704;
        } else {
          result[0] += 0.0781563126252505;
          result[1] += 0.008016032064128256;
          result[2] += 0.008016032064128256;
          result[3] += 0.2685370741482966;
          result[4] += 0.09418837675350701;
          result[5] += 0.5430861723446894;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
          result[0] += 0.002531645569620253;
          result[1] += 0.9772151898734177;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.020253164556962026;
          result[5] += 0;
        } else {
          result[0] += 0.023668639053254437;
          result[1] += 0.378698224852071;
          result[2] += 0.023668639053254437;
          result[3] += 0.01775147928994083;
          result[4] += 0.514792899408284;
          result[5] += 0.04142011834319527;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          result[0] += 0.26903553299492383;
          result[1] += 0.025380710659898477;
          result[2] += 0.06598984771573604;
          result[3] += 0.233502538071066;
          result[4] += 0.2182741116751269;
          result[5] += 0.18781725888324874;
        } else {
          result[0] += 0.8216756341275941;
          result[1] += 0.02843966179861645;
          result[2] += 0.035357417371252885;
          result[3] += 0.034588777863182166;
          result[4] += 0.05226748654880861;
          result[5] += 0.027671022290545733;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0.1346153846153846;
          result[5] += 0.7115384615384616;
        } else {
          result[0] += 0;
          result[1] += 0.031746031746031744;
          result[2] += 0.18253968253968253;
          result[3] += 0.6587301587301587;
          result[4] += 0;
          result[5] += 0.12698412698412698;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.14285714285714285;
          result[4] += 0.17857142857142858;
          result[5] += 0.6071428571428571;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0.012987012987012988;
          result[2] += 0.7792207792207793;
          result[3] += 0.12987012987012986;
          result[4] += 0;
          result[5] += 0.06493506493506493;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)85.5) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0.14285714285714285;
          result[2] += 0.35714285714285715;
          result[3] += 0.21428571428571427;
          result[4] += 0.14285714285714285;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.011904761904761904;
          result[2] += 0.5476190476190477;
          result[3] += 0.17857142857142858;
          result[4] += 0.023809523809523808;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0.019101123595505618;
          result[1] += 0;
          result[2] += 0.9112359550561798;
          result[3] += 0.0651685393258427;
          result[4] += 0;
          result[5] += 0.0044943820224719105;
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
