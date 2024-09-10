
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13207547169811323;
        result[1] += 0.02515723270440252;
        result[2] += 0;
        result[3] += 0.022012578616352203;
        result[4] += 0.6572327044025158;
        result[5] += 0.16352201257861637;
      } else {
        result[0] += 0.0009000900090009;
        result[1] += 0.0072007200720072;
        result[2] += 0;
        result[3] += 0.1395139513951395;
        result[4] += 0.0594059405940594;
        result[5] += 0.7929792979297929;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.016949152542372885;
        result[1] += 0.8152542372881357;
        result[2] += 0;
        result[3] += 0.008474576271186442;
        result[4] += 0.15593220338983055;
        result[5] += 0.0033898305084745766;
      } else {
        result[0] += 0.6601941747572816;
        result[1] += 0.03312392918332382;
        result[2] += 0.05996573386636208;
        result[3] += 0.10908052541404911;
        result[4] += 0.07938320959451742;
        result[5] += 0.05825242718446602;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.23076923076923078;
        result[4] += 0.03076923076923077;
        result[5] += 0.5384615384615384;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7049180327868853;
        result[3] += 0.21311475409836064;
        result[4] += 0;
        result[5] += 0.08196721311475409;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.12;
        result[2] += 0.2;
        result[3] += 0.36;
        result[4] += 0;
        result[5] += 0.32;
      } else {
        result[0] += 0.012154696132596685;
        result[1] += 0;
        result[2] += 0.912707182320442;
        result[3] += 0.06961325966850829;
        result[4] += 0;
        result[5] += 0.0055248618784530384;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1574074074074074;
        result[1] += 0.033950617283950615;
        result[2] += 0;
        result[3] += 0.015432098765432098;
        result[4] += 0.6327160493827161;
        result[5] += 0.16049382716049382;
      } else {
        result[0] += 0.002529510961214165;
        result[1] += 0.0008431703204047217;
        result[2] += 0.00927487352445194;
        result[3] += 0.1897133220910624;
        result[4] += 0.08094435075885328;
        result[5] += 0.7166947723440135;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9849137931034483;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015086206896551725;
        result[5] += 0;
      } else {
        result[0] += 0.616685456595265;
        result[1] += 0.02987598647125141;
        result[2] += 0.06764374295377677;
        result[3] += 0.08004509582863585;
        result[4] += 0.12514092446448705;
        result[5] += 0.080608793686584;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.041666666666666664;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.041666666666666664;
        result[5] += 0.9166666666666666;
      } else {
        result[0] += 0;
        result[1] += 0.13043478260869565;
        result[2] += 0.2753623188405797;
        result[3] += 0.4057971014492754;
        result[4] += 0;
        result[5] += 0.18840579710144928;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
        result[0] += 0.08823529411764706;
        result[1] += 0;
        result[2] += 0.4411764705882353;
        result[3] += 0;
        result[4] += 0.11764705882352941;
        result[5] += 0.35294117647058826;
      } else {
        result[0] += 0.0010515247108307045;
        result[1] += 0;
        result[2] += 0.9053627760252366;
        result[3] += 0.08832807570977919;
        result[4] += 0;
        result[5] += 0.005257623554153523;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.008670520231213872;
        result[1] += 0.08959537572254335;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.846820809248555;
        result[5] += 0.05491329479768786;
      } else {
        result[0] += 0.09079365079365079;
        result[1] += 0.008253968253968255;
        result[2] += 0.006984126984126984;
        result[3] += 0.18349206349206348;
        result[4] += 0.057777777777777775;
        result[5] += 0.6526984126984127;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6597653554175293;
        result[1] += 0.07108350586611456;
        result[2] += 0.07522429261559696;
        result[3] += 0.04485852311939269;
        result[4] += 0.09109730848861283;
        result[5] += 0.057971014492753624;
      } else {
        result[0] += 0.005235602094240839;
        result[1] += 0.9816753926701571;
        result[2] += 0.010471204188481678;
        result[3] += 0.0026178010471204194;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
        result[0] += 0.029411764705882353;
        result[1] += 0.029411764705882353;
        result[2] += 0.29411764705882354;
        result[3] += 0.08823529411764706;
        result[4] += 0.16176470588235295;
        result[5] += 0.39705882352941174;
      } else {
        result[0] += 0.014705882352941176;
        result[1] += 0;
        result[2] += 0.5220588235294118;
        result[3] += 0.40441176470588236;
        result[4] += 0;
        result[5] += 0.058823529411764705;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0.875;
        result[2] += 0;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.018561484918793503;
        result[1] += 0.002320185614849188;
        result[2] += 0.9129930394431555;
        result[3] += 0.05336426914153132;
        result[4] += 0.001160092807424594;
        result[5] += 0.01160092807424594;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.004484304932735426;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.905829596412556;
        result[5] += 0.08968609865470852;
      } else {
        result[0] += 0.0429042904290429;
        result[1] += 0.006600660066006601;
        result[2] += 0.004125412541254125;
        result[3] += 0.15264026402640263;
        result[4] += 0.04372937293729373;
        result[5] += 0.75;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.015845070422535208;
        result[1] += 0.845070422535211;
        result[2] += 0.0017605633802816897;
        result[3] += 0.0017605633802816897;
        result[4] += 0.13556338028169013;
        result[5] += 0;
      } else {
        result[0] += 0.6926920674578388;
        result[1] += 0.03247970018738289;
        result[2] += 0.05496564647095565;
        result[3] += 0.07620237351655215;
        result[4] += 0.07432854465958776;
        result[5] += 0.0693316677076827;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.038461538461538464;
        result[2] += 0.03076923076923077;
        result[3] += 0.43846153846153846;
        result[4] += 0.07692307692307693;
        result[5] += 0.4153846153846154;
      } else {
        result[0] += 0.19387755102040816;
        result[1] += 0.030612244897959183;
        result[2] += 0.5204081632653061;
        result[3] += 0.07142857142857142;
        result[4] += 0.04081632653061224;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        result[0] += 0.6086956521739131;
        result[1] += 0;
        result[2] += 0.391304347826087;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0042194092827004225;
        result[1] += 0;
        result[2] += 0.8797468354430381;
        result[3] += 0.10021097046413503;
        result[4] += 0;
        result[5] += 0.015822784810126587;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.06451612903225806;
        result[1] += 0.05734767025089606;
        result[2] += 0.010752688172043012;
        result[3] += 0.007168458781362007;
        result[4] += 0.7168458781362007;
        result[5] += 0.14336917562724014;
      } else {
        result[0] += 0;
        result[1] += 0.008482563619227144;
        result[2] += 0.003770028275212064;
        result[3] += 0.12535344015080113;
        result[4] += 0.0706880301602262;
        result[5] += 0.7917059377945335;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9696356275303644;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.030364372469635626;
        result[5] += 0;
      } else {
        result[0] += 0.6288716814159292;
        result[1] += 0.035398230088495575;
        result[2] += 0.024889380530973452;
        result[3] += 0.08960176991150443;
        result[4] += 0.12057522123893805;
        result[5] += 0.1006637168141593;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.264;
        result[3] += 0.48;
        result[4] += 0;
        result[5] += 0.256;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6176470588235294;
        result[3] += 0.11764705882352941;
        result[4] += 0;
        result[5] += 0.2647058823529412;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.046511627906976744;
        result[1] += 0;
        result[2] += 0.7930232558139535;
        result[3] += 0.12790697674418605;
        result[4] += 0.004651162790697674;
        result[5] += 0.027906976744186046;
      } else {
        result[0] += 0.0035650623885918;
        result[1] += 0;
        result[2] += 0.9679144385026738;
        result[3] += 0.026737967914438502;
        result[4] += 0;
        result[5] += 0.0017825311942959;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.017699115044247787;
        result[2] += 0.004424778761061947;
        result[3] += 0.030973451327433628;
        result[4] += 0.8893805309734514;
        result[5] += 0.05752212389380531;
      } else {
        result[0] += 0.039611964430072755;
        result[1] += 0.004042037186742118;
        result[2] += 0.0032336297493936943;
        result[3] += 0.12853678253839934;
        result[4] += 0.09215844785772029;
        result[5] += 0.7324171382376717;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6585081585081586;
        result[1] += 0.06585081585081587;
        result[2] += 0.036130536130536135;
        result[3] += 0.0716783216783217;
        result[4] += 0.11480186480186481;
        result[5] += 0.05303030303030304;
      } else {
        result[0] += 0.002398081534772182;
        result[1] += 0.9952038369304557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002398081534772182;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11926605504587157;
        result[3] += 0.13761467889908258;
        result[4] += 0.11009174311926606;
        result[5] += 0.6330275229357798;
      } else {
        result[0] += 0;
        result[1] += 0.010309278350515464;
        result[2] += 0.32989690721649484;
        result[3] += 0.5154639175257731;
        result[4] += 0;
        result[5] += 0.14432989690721648;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.358974358974359;
        result[1] += 0;
        result[2] += 0.20512820512820512;
        result[3] += 0.15384615384615385;
        result[4] += 0.15384615384615385;
        result[5] += 0.1282051282051282;
      } else {
        result[0] += 0.009137055837563452;
        result[1] += 0;
        result[2] += 0.899492385786802;
        result[3] += 0.07614213197969544;
        result[4] += 0.0020304568527918783;
        result[5] += 0.013197969543147208;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        result[0] += 0.006802721088435374;
        result[1] += 0.006802721088435374;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9047619047619048;
        result[5] += 0.08163265306122448;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
        result[0] += 0.0481335952848723;
        result[1] += 0.003929273084479371;
        result[2] += 0.0019646365422396855;
        result[3] += 0.06777996070726916;
        result[4] += 0.04223968565815324;
        result[5] += 0.8359528487229863;
      } else {
        result[0] += 0;
        result[1] += 0.00816326530612245;
        result[2] += 0.004081632653061225;
        result[3] += 0.5551020408163265;
        result[4] += 0.0163265306122449;
        result[5] += 0.4163265306122449;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
        result[0] += 0.003738317757009346;
        result[1] += 0.9233644859813084;
        result[2] += 0.003738317757009346;
        result[3] += 0.001869158878504673;
        result[4] += 0.06728971962616823;
        result[5] += 0;
      } else {
        result[0] += 0.7272727272727273;
        result[1] += 0.02558922558922559;
        result[2] += 0.02154882154882155;
        result[3] += 0.07205387205387205;
        result[4] += 0.10505050505050505;
        result[5] += 0.048484848484848485;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3632286995515695;
        result[3] += 0.42152466367713004;
        result[4] += 0.017937219730941704;
        result[5] += 0.19730941704035873;
      } else {
        result[0] += 0.02848722986247544;
        result[1] += 0.012770137524557957;
        result[2] += 0.8467583497053045;
        result[3] += 0.07072691552062868;
        result[4] += 0.0068762278978389;
        result[5] += 0.0343811394891945;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13529411764705881;
        result[1] += 0.0058823529411764705;
        result[2] += 0.008823529411764706;
        result[3] += 0.03529411764705882;
        result[4] += 0.6882352941176471;
        result[5] += 0.1264705882352941;
      } else {
        result[0] += 0;
        result[1] += 0.00423728813559322;
        result[2] += 0.00423728813559322;
        result[3] += 0.17288135593220338;
        result[4] += 0.05254237288135593;
        result[5] += 0.7661016949152543;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0.0037593984962406013;
        result[1] += 0.9398496240601504;
        result[2] += 0.0037593984962406013;
        result[3] += 0;
        result[4] += 0.05263157894736842;
        result[5] += 0;
      } else {
        result[0] += 0.6363095238095238;
        result[1] += 0.036904761904761905;
        result[2] += 0.052976190476190475;
        result[3] += 0.09523809523809523;
        result[4] += 0.10119047619047619;
        result[5] += 0.07738095238095238;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14516129032258066;
        result[3] += 0.6451612903225806;
        result[4] += 0;
        result[5] += 0.20967741935483872;
      } else {
        result[0] += 0.05042016806722689;
        result[1] += 0;
        result[2] += 0.7142857142857143;
        result[3] += 0.19327731092436976;
        result[4] += 0.008403361344537815;
        result[5] += 0.03361344537815126;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        result[0] += 0.02318840579710145;
        result[1] += 0;
        result[2] += 0.8376811594202899;
        result[3] += 0.1072463768115942;
        result[4] += 0;
        result[5] += 0.03188405797101449;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9753521126760564;
        result[3] += 0.022887323943661973;
        result[4] += 0;
        result[5] += 0.0017605633802816902;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003401360544217687;
        result[1] += 0.061224489795918366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.891156462585034;
        result[5] += 0.04421768707482993;
      } else {
        result[0] += 0.04240882103477523;
        result[1] += 0.01272264631043257;
        result[2] += 0.005089058524173028;
        result[3] += 0.13994910941475827;
        result[4] += 0.03986429177268872;
        result[5] += 0.7599660729431722;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)57.5) ) ) {
        result[0] += 0.008247422680412373;
        result[1] += 0.9051546391752578;
        result[2] += 0.006185567010309279;
        result[3] += 0;
        result[4] += 0.07010309278350517;
        result[5] += 0.010309278350515465;
      } else {
        result[0] += 0.6450719822812847;
        result[1] += 0.03433001107419713;
        result[2] += 0.04263565891472869;
        result[3] += 0.07862679955703213;
        result[4] += 0.10520487264673313;
        result[5] += 0.09413067552602437;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2543859649122807;
        result[3] += 0.4824561403508772;
        result[4] += 0.017543859649122806;
        result[5] += 0.24561403508771928;
      } else {
        result[0] += 0.04;
        result[1] += 0;
        result[2] += 0.8;
        result[3] += 0.12;
        result[4] += 0;
        result[5] += 0.04;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
        result[0] += 0.01483679525222552;
        result[1] += 0;
        result[2] += 0.8308605341246291;
        result[3] += 0.11572700296735905;
        result[4] += 0;
        result[5] += 0.03857566765578635;
      } else {
        result[0] += 0.0035650623885918;
        result[1] += 0;
        result[2] += 0.9679144385026738;
        result[3] += 0.0285204991087344;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12994350282485875;
        result[1] += 0.01694915254237288;
        result[2] += 0.01694915254237288;
        result[3] += 0;
        result[4] += 0.7457627118644068;
        result[5] += 0.0903954802259887;
      } else {
        result[0] += 0.000881057268722467;
        result[1] += 0.009691629955947136;
        result[2] += 0.004405286343612335;
        result[3] += 0.19911894273127753;
        result[4] += 0.053744493392070485;
        result[5] += 0.73215859030837;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9847161572052402;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015283842794759825;
        result[5] += 0;
      } else {
        result[0] += 0.6220302375809935;
        result[1] += 0.03401727861771058;
        result[2] += 0.07235421166306695;
        result[3] += 0.07667386609071274;
        result[4] += 0.12095032397408208;
        result[5] += 0.07397408207343413;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.045454545454545456;
        result[3] += 0.045454545454545456;
        result[4] += 0;
        result[5] += 0.9090909090909091;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.3618421052631579;
        result[4] += 0;
        result[5] += 0.13815789473684212;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.4;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4;
        result[5] += 0.2;
      } else {
        result[0] += 0.004744958481613286;
        result[1] += 0;
        result[2] += 0.9276393831553974;
        result[3] += 0.05575326215895611;
        result[4] += 0;
        result[5] += 0.011862396204033215;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.015209125475285171;
        result[2] += 0;
        result[3] += 0.0076045627376425855;
        result[4] += 0.8859315589353612;
        result[5] += 0.09125475285171103;
      } else {
        result[0] += 0.040706605222734255;
        result[1] += 0.013056835637480798;
        result[2] += 0.013056835637480798;
        result[3] += 0.1490015360983103;
        result[4] += 0.060675883256528416;
        result[5] += 0.7235023041474654;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.010989010989010992;
        result[1] += 0.8406593406593408;
        result[2] += 0.0018315018315018317;
        result[3] += 0.00915750915750916;
        result[4] += 0.13553113553113555;
        result[5] += 0.0018315018315018317;
      } else {
        result[0] += 0.7080828323313293;
        result[1] += 0.036072144288577156;
        result[2] += 0.04809619238476954;
        result[3] += 0.07014028056112225;
        result[4] += 0.07214428857715431;
        result[5] += 0.06546426185704743;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05714285714285714;
        result[3] += 0;
        result[4] += 0.08571428571428572;
        result[5] += 0.8571428571428571;
      } else {
        result[0] += 0;
        result[1] += 0.0136986301369863;
        result[2] += 0.15753424657534246;
        result[3] += 0.4726027397260274;
        result[4] += 0.06164383561643835;
        result[5] += 0.2945205479452055;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0.0375;
        result[1] += 0.0375;
        result[2] += 0.325;
        result[3] += 0.275;
        result[4] += 0.05;
        result[5] += 0.275;
      } else {
        result[0] += 0.011494252873563218;
        result[1] += 0;
        result[2] += 0.9174503657262278;
        result[3] += 0.05956112852664577;
        result[4] += 0.00522466039707419;
        result[5] += 0.006269592476489028;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.26981132075471703;
        result[1] += 0.08301886792452831;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5811320754716982;
        result[5] += 0.06603773584905662;
      } else {
        result[0] += 0.016420361247947456;
        result[1] += 0.004105090311986864;
        result[2] += 0.034482758620689655;
        result[3] += 0.1354679802955665;
        result[4] += 0.08949096880131363;
        result[5] += 0.7200328407224958;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.0043956043956043965;
        result[1] += 0.8835164835164836;
        result[2] += 0.006593406593406594;
        result[3] += 0.0021978021978021982;
        result[4] += 0.09890109890109891;
        result[5] += 0.0043956043956043965;
      } else {
        result[0] += 0.6664464993394981;
        result[1] += 0.04095112285336856;
        result[2] += 0.06010568031704095;
        result[3] += 0.11889035667107001;
        result[4] += 0.05548216644649934;
        result[5] += 0.05812417437252312;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.021505376344086023;
        result[3] += 0.3118279569892473;
        result[4] += 0.043010752688172046;
        result[5] += 0.6236559139784946;
      } else {
        result[0] += 0.04255319148936171;
        result[1] += 0.01595744680851064;
        result[2] += 0.5265957446808511;
        result[3] += 0.20744680851063832;
        result[4] += 0.06914893617021278;
        result[5] += 0.13829787234042556;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7358490566037735;
        result[3] += 0.23270440251572327;
        result[4] += 0;
        result[5] += 0.031446540880503145;
      } else {
        result[0] += 0.01195814648729447;
        result[1] += 0;
        result[2] += 0.9506726457399103;
        result[3] += 0.0343796711509716;
        result[4] += 0;
        result[5] += 0.0029895366218236174;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.011538461538461539;
        result[1] += 0.023076923076923078;
        result[2] += 0;
        result[3] += 0.015384615384615385;
        result[4] += 0.8961538461538462;
        result[5] += 0.05384615384615385;
      } else {
        result[0] += 0.050149700598802395;
        result[1] += 0.025449101796407185;
        result[2] += 0.014970059880239521;
        result[3] += 0.1497005988023952;
        result[4] += 0.04116766467065868;
        result[5] += 0.718562874251497;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004819277108433735;
        result[1] += 0.9518072289156626;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.043373493975903614;
        result[5] += 0;
      } else {
        result[0] += 0.631079478054567;
        result[1] += 0.021352313167259787;
        result[2] += 0.066429418742586;
        result[3] += 0.08422301304863583;
        result[4] += 0.134638196915777;
        result[5] += 0.06227758007117438;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05063291139240506;
        result[3] += 0.4050632911392405;
        result[4] += 0.06329113924050633;
        result[5] += 0.4810126582278481;
      } else {
        result[0] += 0.03125;
        result[1] += 0.03125;
        result[2] += 0.515625;
        result[3] += 0.171875;
        result[4] += 0.015625;
        result[5] += 0.234375;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0.03488372093023256;
        result[1] += 0.06976744186046512;
        result[2] += 0.45348837209302323;
        result[3] += 0.19767441860465115;
        result[4] += 0.046511627906976744;
        result[5] += 0.19767441860465115;
      } else {
        result[0] += 0.011111111111111112;
        result[1] += 0;
        result[2] += 0.9288888888888889;
        result[3] += 0.057777777777777775;
        result[4] += 0;
        result[5] += 0.0022222222222222222;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
        result[0] += 0.011655011655011656;
        result[1] += 0.07459207459207459;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8344988344988346;
        result[5] += 0.07925407925407925;
      } else {
        result[0] += 0;
        result[1] += 0.9825708061002179;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.017429193899782137;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        result[0] += 0.03837118245888802;
        result[1] += 0.004698512137823023;
        result[2] += 0.0007830853563038371;
        result[3] += 0.1707126076742365;
        result[4] += 0.042286609240407204;
        result[5] += 0.7431480031323414;
      } else {
        result[0] += 0.6573426573426573;
        result[1] += 0.024793388429752067;
        result[2] += 0.06547997457088366;
        result[3] += 0.09345200254291164;
        result[4] += 0.07374443738080101;
        result[5] += 0.08518753973299428;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10526315789473684;
        result[3] += 0.631578947368421;
        result[4] += 0;
        result[5] += 0.2631578947368421;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6145833333333334;
        result[3] += 0.19791666666666666;
        result[4] += 0.010416666666666666;
        result[5] += 0.17708333333333334;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        result[0] += 0.01838235294117647;
        result[1] += 0;
        result[2] += 0.8161764705882353;
        result[3] += 0.14338235294117646;
        result[4] += 0;
        result[5] += 0.022058823529411766;
      } else {
        result[0] += 0.010558069381598794;
        result[1] += 0;
        result[2] += 0.9396681749622926;
        result[3] += 0.048265460030165915;
        result[4] += 0;
        result[5] += 0.0015082956259426848;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.036585365853658534;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9390243902439024;
        result[5] += 0.024390243902439025;
      } else {
        result[0] += 0.024247491638795988;
        result[1] += 0.00919732441471572;
        result[2] += 0.007525083612040134;
        result[3] += 0.16304347826086957;
        result[4] += 0.07274247491638795;
        result[5] += 0.7232441471571907;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9558823529411765;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04411764705882353;
        result[5] += 0;
      } else {
        result[0] += 0.676628810520024;
        result[1] += 0.023909145248057387;
        result[2] += 0.03227734608487747;
        result[3] += 0.06634787806335925;
        result[4] += 0.12372982665869696;
        result[5] += 0.07710699342498507;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04878048780487805;
        result[3] += 0.024390243902439025;
        result[4] += 0.14634146341463414;
        result[5] += 0.7804878048780488;
      } else {
        result[0] += 0;
        result[1] += 0.012931034482758617;
        result[2] += 0.271551724137931;
        result[3] += 0.46982758620689646;
        result[4] += 0.017241379310344824;
        result[5] += 0.22844827586206892;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.3888888888888889;
        result[1] += 0.16666666666666666;
        result[2] += 0.16666666666666666;
        result[3] += 0.05555555555555555;
        result[4] += 0.1111111111111111;
        result[5] += 0.1111111111111111;
      } else {
        result[0] += 0.01059322033898305;
        result[1] += 0;
        result[2] += 0.923728813559322;
        result[3] += 0.04978813559322034;
        result[4] += 0.001059322033898305;
        result[5] += 0.014830508474576272;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1182108626198083;
        result[1] += 0.003194888178913738;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7795527156549521;
        result[5] += 0.09904153354632587;
      } else {
        result[0] += 0;
        result[1] += 0.005176876617773943;
        result[2] += 0.0060396893874029335;
        result[3] += 0.15789473684210525;
        result[4] += 0.06557377049180328;
        result[5] += 0.7653149266609146;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5918708240534521;
        result[1] += 0.05512249443207127;
        result[2] += 0.06904231625835189;
        result[3] += 0.09632516703786191;
        result[4] += 0.11414253897550111;
        result[5] += 0.07349665924276169;
      } else {
        result[0] += 0.00683371298405467;
        result[1] += 0.9863325740318907;
        result[2] += 0;
        result[3] += 0.002277904328018223;
        result[4] += 0.004555808656036446;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2631578947368421;
        result[3] += 0.10526315789473684;
        result[4] += 0.05263157894736842;
        result[5] += 0.5789473684210527;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03703703703703704;
        result[3] += 0.888888888888889;
        result[4] += 0;
        result[5] += 0.07407407407407408;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.5757575757575758;
        result[1] += 0.06060606060606061;
        result[2] += 0.24242424242424243;
        result[3] += 0.030303030303030304;
        result[4] += 0;
        result[5] += 0.09090909090909091;
      } else {
        result[0] += 0.00998003992015968;
        result[1] += 0.007984031936127744;
        result[2] += 0.8952095808383234;
        result[3] += 0.06986027944111776;
        result[4] += 0;
        result[5] += 0.016966067864271458;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004149377593360997;
        result[1] += 0.03734439834024897;
        result[2] += 0;
        result[3] += 0.033195020746887974;
        result[4] += 0.8879668049792532;
        result[5] += 0.03734439834024897;
      } else {
        result[0] += 0.05492851768246802;
        result[1] += 0.015048908954100828;
        result[2] += 0.025583145221971408;
        result[3] += 0.1655379984951091;
        result[4] += 0.07750188111361926;
        result[5] += 0.6613995485327314;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9479768786127167;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05202312138728324;
        result[5] += 0;
      } else {
        result[0] += 0.6604708798017349;
        result[1] += 0.026641883519206943;
        result[2] += 0.05204460966542752;
        result[3] += 0.06753407682775714;
        result[4] += 0.0935563816604709;
        result[5] += 0.09975216852540274;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02702702702702703;
        result[3] += 0;
        result[4] += 0.16216216216216217;
        result[5] += 0.8108108108108109;
      } else {
        result[0] += 0;
        result[1] += 0.14925373134328357;
        result[2] += 0.14925373134328357;
        result[3] += 0.3880597014925373;
        result[4] += 0;
        result[5] += 0.31343283582089554;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0;
        result[2] += 0.47959183673469385;
        result[3] += 0.3979591836734694;
        result[4] += 0.01020408163265306;
        result[5] += 0.09183673469387756;
      } else {
        result[0] += 0.02062975027144408;
        result[1] += 0;
        result[2] += 0.9033659066232356;
        result[3] += 0.06514657980456026;
        result[4] += 0;
        result[5] += 0.010857763300760043;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012244897959183673;
        result[1] += 0.0326530612244898;
        result[2] += 0.00816326530612245;
        result[3] += 0.00816326530612245;
        result[4] += 0.8693877551020408;
        result[5] += 0.06938775510204082;
      } else {
        result[0] += 0.043209876543209874;
        result[1] += 0.015432098765432098;
        result[2] += 0.0038580246913580245;
        result[3] += 0.14969135802469136;
        result[4] += 0.043209876543209874;
        result[5] += 0.7445987654320988;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.61188228761799;
        result[1] += 0.04441976679622432;
        result[2] += 0.04830649639089395;
        result[3] += 0.08051082731815658;
        result[4] += 0.13381454747362576;
        result[5] += 0.08106607440310938;
      } else {
        result[0] += 0.0021786492374727675;
        result[1] += 0.9803921568627452;
        result[2] += 0.006535947712418302;
        result[3] += 0.004357298474945535;
        result[4] += 0.006535947712418302;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09523809523809523;
        result[3] += 0.6190476190476191;
        result[4] += 0;
        result[5] += 0.2857142857142857;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5970149253731344;
        result[3] += 0.20895522388059704;
        result[4] += 0;
        result[5] += 0.1940298507462687;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03896103896103896;
        result[1] += 0;
        result[2] += 0.8246753246753247;
        result[3] += 0.11038961038961038;
        result[4] += 0;
        result[5] += 0.025974025974025976;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.975328947368421;
        result[3] += 0.023026315789473683;
        result[4] += 0;
        result[5] += 0.001644736842105263;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.18208092485549135;
        result[1] += 0.052023121387283246;
        result[2] += 0;
        result[3] += 0.017341040462427747;
        result[4] += 0.6531791907514451;
        result[5] += 0.09537572254335261;
      } else {
        result[0] += 0.006222222222222222;
        result[1] += 0.0008888888888888889;
        result[2] += 0.008888888888888889;
        result[3] += 0.1368888888888889;
        result[4] += 0.05422222222222222;
        result[5] += 0.7928888888888889;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9658848614072495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03411513859275053;
        result[5] += 0;
      } else {
        result[0] += 0.649514008004574;
        result[1] += 0.022870211549456832;
        result[2] += 0.052601486563750716;
        result[3] += 0.08404802744425385;
        result[4] += 0.13093196112064037;
        result[5] += 0.060034305317324184;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        result[0] += 0.015625;
        result[1] += 0.078125;
        result[2] += 0.03125;
        result[3] += 0.625;
        result[4] += 0.015625;
        result[5] += 0.234375;
      } else {
        result[0] += 0;
        result[1] += 0.017699115044247787;
        result[2] += 0.40707964601769914;
        result[3] += 0.1504424778761062;
        result[4] += 0.04424778761061947;
        result[5] += 0.3805309734513274;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        result[0] += 0.011811023622047244;
        result[1] += 0;
        result[2] += 0.7519685039370079;
        result[3] += 0.19291338582677164;
        result[4] += 0.007874015748031496;
        result[5] += 0.03543307086614173;
      } else {
        result[0] += 0.014164305949008499;
        result[1] += 0.007082152974504249;
        result[2] += 0.9405099150141643;
        result[3] += 0.025495750708215296;
        result[4] += 0.0028328611898017;
        result[5] += 0.009915014164305949;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007380073800738007;
        result[1] += 0.03690036900369004;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8745387453874539;
        result[5] += 0.08118081180811808;
      } else {
        result[0] += 0.04066390041493776;
        result[1] += 0.008298755186721992;
        result[2] += 0.0008298755186721991;
        result[3] += 0.14688796680497926;
        result[4] += 0.07219917012448132;
        result[5] += 0.7311203319502074;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6166666666666667;
        result[1] += 0.06488095238095239;
        result[2] += 0.055357142857142855;
        result[3] += 0.06845238095238096;
        result[4] += 0.1386904761904762;
        result[5] += 0.055952380952380955;
      } else {
        result[0] += 0.005076142131979695;
        result[1] += 0.9720812182741116;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01015228426395939;
        result[5] += 0.012690355329949238;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.01875;
        result[2] += 0.075;
        result[3] += 0.34375;
        result[4] += 0.075;
        result[5] += 0.4875;
      } else {
        result[0] += 0.31914893617021284;
        result[1] += 0.06382978723404256;
        result[2] += 0.4184397163120568;
        result[3] += 0.1418439716312057;
        result[4] += 0.007092198581560284;
        result[5] += 0.049645390070921995;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5757575757575758;
        result[3] += 0.2727272727272727;
        result[4] += 0;
        result[5] += 0.15151515151515152;
      } else {
        result[0] += 0.0033003300330033004;
        result[1] += 0;
        result[2] += 0.9284928492849285;
        result[3] += 0.0627062706270627;
        result[4] += 0;
        result[5] += 0.005500550055005501;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.010452961672473868;
        result[1] += 0.024390243902439025;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8710801393728222;
        result[5] += 0.09407665505226481;
      } else {
        result[0] += 0.04225352112676056;
        result[1] += 0.004142502071251036;
        result[2] += 0.020712510356255178;
        result[3] += 0.15658657829328915;
        result[4] += 0.048053024026512015;
        result[5] += 0.728251864125932;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9956427015250545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004357298474945534;
        result[5] += 0;
      } else {
        result[0] += 0.6186681844052363;
        result[1] += 0.025611838360842347;
        result[2] += 0.06431417188389302;
        result[3] += 0.0910643141718839;
        result[4] += 0.11496869664200343;
        result[5] += 0.08537279453614116;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19148936170212766;
        result[3] += 0.02127659574468085;
        result[4] += 0.1276595744680851;
        result[5] += 0.6595744680851063;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1206896551724138;
        result[3] += 0.7241379310344828;
        result[4] += 0.017241379310344827;
        result[5] += 0.13793103448275862;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        result[0] += 0.08045977011494253;
        result[1] += 0.04597701149425287;
        result[2] += 0.5344827586206896;
        result[3] += 0.22988505747126436;
        result[4] += 0.005747126436781609;
        result[5] += 0.10344827586206896;
      } else {
        result[0] += 0.007168458781362007;
        result[1] += 0;
        result[2] += 0.94026284348865;
        result[3] += 0.04778972520908005;
        result[4] += 0;
        result[5] += 0.0047789725209080045;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.004291845493562232;
        result[2] += 0.008583690987124463;
        result[3] += 0;
        result[4] += 0.9141630901287554;
        result[5] += 0.07296137339055794;
      } else {
        result[0] += 0.0422102839600921;
        result[1] += 0.022256331542594012;
        result[2] += 0.009976976208749041;
        result[3] += 0.148119723714505;
        result[4] += 0.047582501918649274;
        result[5] += 0.7298541826554106;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9681274900398407;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03187250996015936;
        result[5] += 0;
      } else {
        result[0] += 0.6131090487238979;
        result[1] += 0.031902552204176336;
        result[2] += 0.060904872389791184;
        result[3] += 0.08468677494199536;
        result[4] += 0.13109048723897912;
        result[5] += 0.07830626450116009;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06451612903225806;
        result[3] += 0.03225806451612903;
        result[4] += 0.22580645161290322;
        result[5] += 0.6774193548387096;
      } else {
        result[0] += 0.017094017094017096;
        result[1] += 0.008547008547008548;
        result[2] += 0.46153846153846156;
        result[3] += 0.4017094017094017;
        result[4] += 0;
        result[5] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        result[0] += 0.020833333333333332;
        result[1] += 0;
        result[2] += 0.8203125;
        result[3] += 0.140625;
        result[4] += 0.0026041666666666665;
        result[5] += 0.015625;
      } else {
        result[0] += 0.005639097744360902;
        result[1] += 0;
        result[2] += 0.9699248120300752;
        result[3] += 0.022556390977443608;
        result[4] += 0;
        result[5] += 0.0018796992481203006;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        result[0] += 0.0136986301369863;
        result[1] += 0.0045662100456621;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8995433789954338;
        result[5] += 0.0821917808219178;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.06451612903225806;
        result[4] += 0.6129032258064516;
        result[5] += 0.3225806451612903;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0.007267441860465116;
        result[1] += 0;
        result[2] += 0.0029069767441860465;
        result[3] += 0.02180232558139535;
        result[4] += 0.059593023255813955;
        result[5] += 0.9084302325581395;
      } else {
        result[0] += 0.08679245283018867;
        result[1] += 0.01509433962264151;
        result[2] += 0.009433962264150943;
        result[3] += 0.32264150943396225;
        result[4] += 0.07547169811320754;
        result[5] += 0.49056603773584906;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0018796992481203009;
        result[1] += 0.906015037593985;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09210526315789475;
        result[5] += 0;
      } else {
        result[0] += 0.7580213903743316;
        result[1] += 0.026737967914438502;
        result[2] += 0.0213903743315508;
        result[3] += 0.05481283422459893;
        result[4] += 0.0962566844919786;
        result[5] += 0.0427807486631016;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.03146853146853147;
        result[2] += 0.3111888111888112;
        result[3] += 0.32867132867132864;
        result[4] += 0.027972027972027972;
        result[5] += 0.3006993006993007;
      } else {
        result[0] += 0.020366598778004074;
        result[1] += 0.004073319755600814;
        result[2] += 0.8879837067209776;
        result[3] += 0.05702647657841141;
        result[4] += 0.007128309572301426;
        result[5] += 0.023421588594704685;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
        result[0] += 0.021806853582554516;
        result[1] += 0.006230529595015576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9065420560747663;
        result[5] += 0.06542056074766354;
      } else {
        result[0] += 0;
        result[1] += 0.06451612903225806;
        result[2] += 0.16129032258064516;
        result[3] += 0.16129032258064516;
        result[4] += 0.16129032258064516;
        result[5] += 0.45161290322580644;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0.002849002849002849;
        result[1] += 0;
        result[2] += 0.005698005698005698;
        result[3] += 0.018518518518518517;
        result[4] += 0.018518518518518517;
        result[5] += 0.9544159544159544;
      } else {
        result[0] += 0.1070840197693575;
        result[1] += 0.011532125205930808;
        result[2] += 0.009884678747940691;
        result[3] += 0.31795716639209226;
        result[4] += 0.0757825370675453;
        result[5] += 0.47775947281713343;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        result[0] += 0.009578544061302681;
        result[1] += 0.896551724137931;
        result[2] += 0;
        result[3] += 0.0019157088122605363;
        result[4] += 0.08620689655172414;
        result[5] += 0.005747126436781609;
      } else {
        result[0] += 0.7425320056899004;
        result[1] += 0.0476529160739687;
        result[2] += 0.033428165007112376;
        result[3] += 0.05832147937411095;
        result[4] += 0.09103840682788052;
        result[5] += 0.02702702702702703;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.023148148148148147;
        result[1] += 0.06018518518518518;
        result[2] += 0.30092592592592593;
        result[3] += 0.36574074074074076;
        result[4] += 0.004629629629629629;
        result[5] += 0.24537037037037038;
      } else {
        result[0] += 0.05288932419196866;
        result[1] += 0;
        result[2] += 0.8677766895200784;
        result[3] += 0.06660137120470128;
        result[4] += 0.0019588638589618022;
        result[5] += 0.010773751224289911;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0031948881789137383;
        result[1] += 0.04472843450479234;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8594249201277956;
        result[5] += 0.09265175718849841;
      } else {
        result[0] += 0.036514522821576766;
        result[1] += 0.006639004149377593;
        result[2] += 0.014937759336099586;
        result[3] += 0.16182572614107885;
        result[4] += 0.03734439834024896;
        result[5] += 0.7427385892116183;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9565217391304348;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.043478260869565216;
        result[5] += 0;
      } else {
        result[0] += 0.6206896551724138;
        result[1] += 0.032144944476914086;
        result[2] += 0.06312098188194039;
        result[3] += 0.07481005260081823;
        result[4] += 0.13325540619520748;
        result[5] += 0.07597895967270601;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.043478260869565216;
        result[1] += 0.18840579710144928;
        result[2] += 0.057971014492753624;
        result[3] += 0.10144927536231885;
        result[4] += 0.14492753623188406;
        result[5] += 0.463768115942029;
      } else {
        result[0] += 0.017699115044247787;
        result[1] += 0.008849557522123894;
        result[2] += 0.4778761061946903;
        result[3] += 0.3495575221238938;
        result[4] += 0;
        result[5] += 0.14601769911504425;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2222222222222222;
        result[3] += 0.1111111111111111;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.006002400960384154;
        result[1] += 0;
        result[2] += 0.9303721488595438;
        result[3] += 0.061224489795918366;
        result[4] += 0;
        result[5] += 0.0024009603841536613;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0035335689045936395;
        result[1] += 0.038869257950530034;
        result[2] += 0;
        result[3] += 0.0176678445229682;
        result[4] += 0.872791519434629;
        result[5] += 0.06713780918727916;
      } else {
        result[0] += 0.043029259896729774;
        result[1] += 0.0034423407917383822;
        result[2] += 0;
        result[3] += 0.14543889845094665;
        result[4] += 0.06110154905335628;
        result[5] += 0.7469879518072289;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9317343173431735;
        result[2] += 0;
        result[3] += 0.0036900369003690036;
        result[4] += 0.06273062730627306;
        result[5] += 0.0018450184501845018;
      } else {
        result[0] += 0.6840764331210192;
        result[1] += 0.03630573248407644;
        result[2] += 0.03312101910828026;
        result[3] += 0.07707006369426753;
        result[4] += 0.11337579617834397;
        result[5] += 0.05605095541401275;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.043478260869565216;
        result[3] += 0.3652173913043478;
        result[4] += 0.034782608695652174;
        result[5] += 0.5565217391304348;
      } else {
        result[0] += 0;
        result[1] += 0.03529411764705883;
        result[2] += 0.6058823529411765;
        result[3] += 0.2058823529411765;
        result[4] += 0.005882352941176471;
        result[5] += 0.1470588235294118;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.034557235421166316;
        result[1] += 0.0021598272138228947;
        result[2] += 0.7883369330453565;
        result[3] += 0.14254859611231105;
        result[4] += 0.0021598272138228947;
        result[5] += 0.030237580993520523;
      } else {
        result[0] += 0.005758157389635316;
        result[1] += 0;
        result[2] += 0.9731285988483683;
        result[3] += 0.017274472168905947;
        result[4] += 0;
        result[5] += 0.00383877159309021;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.006734006734006735;
        result[1] += 0.006734006734006735;
        result[2] += 0;
        result[3] += 0.023569023569023573;
        result[4] += 0.8114478114478115;
        result[5] += 0.15151515151515155;
      } else {
        result[0] += 0.03679476696647588;
        result[1] += 0.006541291905151268;
        result[2] += 0.0024529844644317253;
        result[3] += 0.15126737530662307;
        result[4] += 0.058871627146361405;
        result[5] += 0.7440719542109566;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9858870967741935;
        result[2] += 0;
        result[3] += 0.0020161290322580645;
        result[4] += 0.012096774193548387;
        result[5] += 0;
      } else {
        result[0] += 0.6349115801483172;
        result[1] += 0.047347404449515115;
        result[2] += 0.06217912150598973;
        result[3] += 0.08613804905875641;
        result[4] += 0.10724472333143183;
        result[5] += 0.06217912150598973;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21666666666666667;
        result[3] += 0.48333333333333334;
        result[4] += 0;
        result[5] += 0.3;
      } else {
        result[0] += 0.06896551724137931;
        result[1] += 0.027586206896551724;
        result[2] += 0.6896551724137931;
        result[3] += 0.06896551724137931;
        result[4] += 0;
        result[5] += 0.14482758620689656;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.38095238095238093;
        result[3] += 0.2857142857142857;
        result[4] += 0.14285714285714285;
        result[5] += 0.19047619047619047;
      } else {
        result[0] += 0.002406738868832732;
        result[1] += 0;
        result[2] += 0.9362214199759327;
        result[3] += 0.05415162454873647;
        result[4] += 0;
        result[5] += 0.007220216606498196;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.004016064257028112;
        result[3] += 0.020080321285140562;
        result[4] += 0.8995983935742972;
        result[5] += 0.07630522088353414;
      } else {
        result[0] += 0.013930348258706468;
        result[1] += 0.0009950248756218905;
        result[2] += 0.003980099502487562;
        result[3] += 0.09651741293532339;
        result[4] += 0.06467661691542288;
        result[5] += 0.8199004975124378;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9543478260869566;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04565217391304348;
        result[5] += 0;
      } else {
        result[0] += 0.6198132780082988;
        result[1] += 0.025933609958506226;
        result[2] += 0.037863070539419084;
        result[3] += 0.1037344398340249;
        result[4] += 0.12033195020746888;
        result[5] += 0.09232365145228216;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        result[0] += 0.00558659217877095;
        result[1] += 0.05027932960893855;
        result[2] += 0.12290502793296089;
        result[3] += 0.5251396648044693;
        result[4] += 0.0335195530726257;
        result[5] += 0.26256983240223464;
      } else {
        result[0] += 0.04411764705882354;
        result[1] += 0;
        result[2] += 0.6323529411764707;
        result[3] += 0.1470588235294118;
        result[4] += 0.04411764705882354;
        result[5] += 0.13235294117647062;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        result[0] += 0.049586776859504134;
        result[1] += 0.0027548209366391185;
        result[2] += 0.7796143250688705;
        result[3] += 0.14325068870523416;
        result[4] += 0.0027548209366391185;
        result[5] += 0.02203856749311295;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9738675958188153;
        result[3] += 0.02613240418118467;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15142857142857144;
        result[1] += 0.008571428571428572;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7771428571428571;
        result[5] += 0.06285714285714286;
      } else {
        result[0] += 0.0017167381974248926;
        result[1] += 0.004291845493562232;
        result[2] += 0.0034334763948497852;
        result[3] += 0.16223175965665235;
        result[4] += 0.055793991416309016;
        result[5] += 0.7725321888412017;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.005917159763313609;
        result[1] += 0.9664694280078896;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.027613412228796843;
        result[5] += 0;
      } else {
        result[0] += 0.6326899879372739;
        result[1] += 0.03980699638118215;
        result[2] += 0.05850422195416165;
        result[3] += 0.08202653799758747;
        result[4] += 0.12002412545235225;
        result[5] += 0.06694813027744272;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.047619047619047616;
        result[4] += 0;
        result[5] += 0.9523809523809523;
      } else {
        result[0] += 0;
        result[1] += 0.022988505747126436;
        result[2] += 0.1839080459770115;
        result[3] += 0.4942528735632184;
        result[4] += 0;
        result[5] += 0.2988505747126437;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0.004405286343612335;
        result[1] += 0.030837004405286344;
        result[2] += 0.5859030837004405;
        result[3] += 0.20704845814977973;
        result[4] += 0.04405286343612335;
        result[5] += 0.1277533039647577;
      } else {
        result[0] += 0.011097410604192354;
        result[1] += 0;
        result[2] += 0.93711467324291;
        result[3] += 0.04932182490752158;
        result[4] += 0;
        result[5] += 0.002466091245376079;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10897435897435898;
        result[1] += 0.03205128205128205;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7435897435897436;
        result[5] += 0.11538461538461539;
      } else {
        result[0] += 0.0009354536950420954;
        result[1] += 0.004677268475210477;
        result[2] += 0.006548175865294668;
        result[3] += 0.11786716557530402;
        result[4] += 0.0608044901777362;
        result[5] += 0.8091674462114126;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021321961620469083;
        result[1] += 0.9744136460554371;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.023454157782515993;
        result[5] += 0;
      } else {
        result[0] += 0.5774210253754531;
        result[1] += 0.03780424650440187;
        result[2] += 0.053340238218539615;
        result[3] += 0.11134127395132055;
        result[4] += 0.11341273951320559;
        result[5] += 0.10668047643707923;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.14814814814814814;
        result[2] += 0.12345679012345678;
        result[3] += 0.25925925925925924;
        result[4] += 0.012345679012345678;
        result[5] += 0.4567901234567901;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0;
        result[2] += 0.7619047619047619;
        result[3] += 0.14285714285714285;
        result[4] += 0;
        result[5] += 0.047619047619047616;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.007518796992481203;
        result[1] += 0;
        result[2] += 0.7781954887218046;
        result[3] += 0.19548872180451127;
        result[4] += 0;
        result[5] += 0.018796992481203006;
      } else {
        result[0] += 0.003048780487804878;
        result[1] += 0;
        result[2] += 0.9557926829268293;
        result[3] += 0.038109756097560975;
        result[4] += 0;
        result[5] += 0.003048780487804878;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.034482758620689655;
        result[2] += 0;
        result[3] += 0.017241379310344827;
        result[4] += 0.8758620689655172;
        result[5] += 0.07241379310344828;
      } else {
        result[0] += 0.04034134988363072;
        result[1] += 0.0015515903801396431;
        result[2] += 0.0015515903801396431;
        result[3] += 0.14817688130333592;
        result[4] += 0.047323506594259115;
        result[5] += 0.761055081458495;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9314516129032258;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06854838709677419;
        result[5] += 0;
      } else {
        result[0] += 0.6174016686531586;
        result[1] += 0.030989272943980933;
        result[2] += 0.06138259833134685;
        result[3] += 0.09833134684147797;
        result[4] += 0.12455303933253875;
        result[5] += 0.06734207389749704;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.390625;
        result[3] += 0.453125;
        result[4] += 0;
        result[5] += 0.15625;
      } else {
        result[0] += 0.0625;
        result[1] += 0;
        result[2] += 0.703125;
        result[3] += 0.140625;
        result[4] += 0.03125;
        result[5] += 0.0625;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.010262257696693273;
        result[1] += 0;
        result[2] += 0.9315849486887116;
        result[3] += 0.04446978335233751;
        result[4] += 0;
        result[5] += 0.013683010262257697;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.014705882352941176;
        result[1] += 0.025735294117647058;
        result[2] += 0.007352941176470588;
        result[3] += 0;
        result[4] += 0.9007352941176471;
        result[5] += 0.051470588235294115;
      } else {
        result[0] += 0.03680501174628034;
        result[1] += 0.007830853563038372;
        result[2] += 0.018010963194988253;
        result[3] += 0.16601409553641347;
        result[4] += 0.06812842599843383;
        result[5] += 0.7032106499608457;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.010452961672473868;
        result[1] += 0.8292682926829268;
        result[2] += 0;
        result[3] += 0.006968641114982578;
        result[4] += 0.15331010452961671;
        result[5] += 0;
      } else {
        result[0] += 0.6640811455847255;
        result[1] += 0.02386634844868735;
        result[2] += 0.06324582338902147;
        result[3] += 0.08293556085918855;
        result[4] += 0.0805489260143198;
        result[5] += 0.08532219570405727;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        result[0] += 0.011764705882352943;
        result[1] += 0.10588235294117648;
        result[2] += 0.11764705882352942;
        result[3] += 0.411764705882353;
        result[4] += 0.011764705882352943;
        result[5] += 0.34117647058823536;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.875;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.697986577181208;
        result[3] += 0.2483221476510067;
        result[4] += 0;
        result[5] += 0.053691275167785234;
      } else {
        result[0] += 0.011583011583011584;
        result[1] += 0;
        result[2] += 0.9498069498069499;
        result[3] += 0.03217503217503218;
        result[4] += 0;
        result[5] += 0.0064350064350064354;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01556420233463035;
        result[1] += 0.011673151750972763;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8988326848249028;
        result[5] += 0.07392996108949416;
      } else {
        result[0] += 0.05574043261231281;
        result[1] += 0.021630615640599003;
        result[2] += 0.011647254575707155;
        result[3] += 0.1464226289517471;
        result[4] += 0.04658901830282862;
        result[5] += 0.7179700499168054;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        result[0] += 0.0022471910112359557;
        result[1] += 0.9752808988764046;
        result[2] += 0;
        result[3] += 0.006741573033707866;
        result[4] += 0.01573033707865169;
        result[5] += 0;
      } else {
        result[0] += 0.6286742651469706;
        result[1] += 0.047390521895620874;
        result[2] += 0.047390521895620874;
        result[3] += 0.07378524295140972;
        result[4] += 0.14277144571085784;
        result[5] += 0.059988002399520096;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03225806451612903;
        result[3] += 0.41935483870967744;
        result[4] += 0.09032258064516129;
        result[5] += 0.45806451612903226;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6046511627906976;
        result[3] += 0.23255813953488372;
        result[4] += 0;
        result[5] += 0.16279069767441862;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.06106870229007634;
        result[1] += 0.0076335877862595426;
        result[2] += 0.5190839694656489;
        result[3] += 0.24427480916030536;
        result[4] += 0.0534351145038168;
        result[5] += 0.11450381679389314;
      } else {
        result[0] += 0.009719222462203024;
        result[1] += 0.0010799136069114472;
        result[2] += 0.9233261339092873;
        result[3] += 0.06479481641468683;
        result[4] += 0;
        result[5] += 0.0010799136069114472;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.19505494505494506;
        result[1] += 0.0027472527472527475;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6923076923076923;
        result[5] += 0.10989010989010989;
      } else {
        result[0] += 0;
        result[1] += 0.0040192926045016075;
        result[2] += 0.007234726688102894;
        result[3] += 0.18167202572347266;
        result[4] += 0.05305466237942122;
        result[5] += 0.7540192926045016;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6658114175753689;
        result[1] += 0.062219371391917896;
        result[2] += 0.04361770365618987;
        result[3] += 0.07119948685054522;
        result[4] += 0.10904425914047466;
        result[5] += 0.04810776138550353;
      } else {
        result[0] += 0;
        result[1] += 0.9977876106194691;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0022123893805309734;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.023809523809523808;
        result[3] += 0.023809523809523808;
        result[4] += 0.21428571428571427;
        result[5] += 0.7380952380952381;
      } else {
        result[0] += 0;
        result[1] += 0.014705882352941176;
        result[2] += 0.3235294117647059;
        result[3] += 0.4852941176470588;
        result[4] += 0;
        result[5] += 0.17647058823529413;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        result[0] += 0.3902439024390244;
        result[1] += 0.07317073170731707;
        result[2] += 0.4146341463414634;
        result[3] += 0;
        result[4] += 0.036585365853658534;
        result[5] += 0.08536585365853659;
      } else {
        result[0] += 0.003412969283276451;
        result[1] += 0.001137656427758817;
        result[2] += 0.9146757679180888;
        result[3] += 0.07167235494880547;
        result[4] += 0;
        result[5] += 0.009101251422070536;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00411522633744856;
        result[1] += 0.053497942386831275;
        result[2] += 0.00823045267489712;
        result[3] += 0.00823045267489712;
        result[4] += 0.8641975308641975;
        result[5] += 0.06172839506172839;
      } else {
        result[0] += 0.042677824267782424;
        result[1] += 0.013389121338912133;
        result[2] += 0.0033472803347280333;
        result[3] += 0.13556485355648534;
        result[4] += 0.058577405857740586;
        result[5] += 0.7464435146443514;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006097560975609756;
        result[1] += 0.9573170731707317;
        result[2] += 0.006097560975609756;
        result[3] += 0.01016260162601626;
        result[4] += 0.02032520325203252;
        result[5] += 0;
      } else {
        result[0] += 0.6841484973482617;
        result[1] += 0.037124337065409546;
        result[2] += 0.020624631703005304;
        result[3] += 0.05480259281084266;
        result[4] += 0.13965822038892162;
        result[5] += 0.06364172068355922;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.08974358974358974;
        result[2] += 0.0641025641025641;
        result[3] += 0.2948717948717949;
        result[4] += 0.01282051282051282;
        result[5] += 0.5384615384615384;
      } else {
        result[0] += 0.019801980198019802;
        result[1] += 0;
        result[2] += 0.504950495049505;
        result[3] += 0.36633663366336633;
        result[4] += 0.0297029702970297;
        result[5] += 0.07920792079207921;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03783783783783785;
        result[1] += 0;
        result[2] += 0.7972972972972974;
        result[3] += 0.13243243243243247;
        result[4] += 0;
        result[5] += 0.03243243243243244;
      } else {
        result[0] += 0.0017482517482517483;
        result[1] += 0;
        result[2] += 0.9702797202797203;
        result[3] += 0.024475524475524476;
        result[4] += 0;
        result[5] += 0.0034965034965034965;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007547169811320755;
        result[1] += 0.0037735849056603774;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.909433962264151;
        result[5] += 0.07924528301886792;
      } else {
        result[0] += 0.0395882818685669;
        result[1] += 0.015043547110055424;
        result[2] += 0.006334125098970704;
        result[3] += 0.16785431512272367;
        result[4] += 0.04513064133016627;
        result[5] += 0.7260490894695171;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.0017953321364452427;
        result[1] += 0.8456014362657093;
        result[2] += 0;
        result[3] += 0.0035906642728904853;
        result[4] += 0.14362657091561942;
        result[5] += 0.005385996409335728;
      } else {
        result[0] += 0.6407995296884186;
        result[1] += 0.02821869488536155;
        result[2] += 0.06055261610817166;
        result[3] += 0.08759553203997648;
        result[4] += 0.10934744268077601;
        result[5] += 0.07348618459729571;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06451612903225806;
        result[3] += 0.16129032258064516;
        result[4] += 0.03225806451612903;
        result[5] += 0.7419354838709677;
      } else {
        result[0] += 0.015873015873015876;
        result[1] += 0.11111111111111112;
        result[2] += 0.46031746031746035;
        result[3] += 0.22222222222222224;
        result[4] += 0;
        result[5] += 0.1904761904761905;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.46938775510204084;
        result[3] += 0.5306122448979592;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.01783723522853958;
        result[1] += 0;
        result[2] += 0.899665551839465;
        result[3] += 0.06688963210702342;
        result[4] += 0;
        result[5] += 0.015607580824972132;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14492753623188406;
        result[1] += 0.002898550724637681;
        result[2] += 0;
        result[3] += 0.04057971014492753;
        result[4] += 0.7101449275362319;
        result[5] += 0.10144927536231885;
      } else {
        result[0] += 0;
        result[1] += 0.0018034265103697023;
        result[2] += 0.0009017132551848512;
        result[3] += 0.1478809738503156;
        result[4] += 0.046889089269612265;
        result[5] += 0.8025247971145176;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6187814421464506;
        result[1] += 0.059809949692565686;
        result[2] += 0.06148686416992734;
        result[3] += 0.08105086640581331;
        result[4] += 0.11179429849077699;
        result[5] += 0.0670765790944662;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.09722222222222222;
        result[2] += 0.1111111111111111;
        result[3] += 0.027777777777777776;
        result[4] += 0.125;
        result[5] += 0.6388888888888888;
      } else {
        result[0] += 0.004784688995215311;
        result[1] += 0;
        result[2] += 0.35406698564593303;
        result[3] += 0.44019138755980863;
        result[4] += 0.023923444976076555;
        result[5] += 0.17703349282296652;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.02267573696145125;
        result[1] += 0;
        result[2] += 0.9104308390022677;
        result[3] += 0.06462585034013607;
        result[4] += 0.0011337868480725626;
        result[5] += 0.0011337868480725626;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2916666666666667;
        result[1] += 0.00946969696969697;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6098484848484849;
        result[5] += 0.08901515151515152;
      } else {
        result[0] += 0.007352941176470588;
        result[1] += 0.0024509803921568627;
        result[2] += 0.004084967320261438;
        result[3] += 0.11437908496732026;
        result[4] += 0.08251633986928104;
        result[5] += 0.7892156862745098;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9958677685950413;
        result[2] += 0;
        result[3] += 0.002066115702479339;
        result[4] += 0.002066115702479339;
        result[5] += 0;
      } else {
        result[0] += 0.6385616862988222;
        result[1] += 0.021698698078115315;
        result[2] += 0.07501549907005581;
        result[3] += 0.12523248605083698;
        result[4] += 0.06943583384996901;
        result[5] += 0.07005579665220088;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.0547945205479452;
        result[2] += 0.1917808219178082;
        result[3] += 0.1917808219178082;
        result[4] += 0.0136986301369863;
        result[5] += 0.547945205479452;
      } else {
        result[0] += 0.08823529411764706;
        result[1] += 0.029411764705882353;
        result[2] += 0.6764705882352942;
        result[3] += 0.08823529411764706;
        result[4] += 0;
        result[5] += 0.11764705882352941;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2692307692307692;
        result[3] += 0.38461538461538464;
        result[4] += 0;
        result[5] += 0.34615384615384615;
      } else {
        result[0] += 0.0047393364928909965;
        result[1] += 0;
        result[2] += 0.9229857819905214;
        result[3] += 0.06398104265402844;
        result[4] += 0;
        result[5] += 0.008293838862559244;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.003194888178913738;
        result[2] += 0;
        result[3] += 0.04792332268370607;
        result[4] += 0.8753993610223643;
        result[5] += 0.07348242811501597;
      } else {
        result[0] += 0.057971014492753624;
        result[1] += 0.0038138825324180014;
        result[2] += 0.004576659038901602;
        result[3] += 0.16704805491990846;
        result[4] += 0.06636155606407322;
        result[5] += 0.700228832951945;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
        result[0] += 0.006185567010309278;
        result[1] += 0.931958762886598;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.061855670103092786;
        result[5] += 0;
      } else {
        result[0] += 0.6757105943152455;
        result[1] += 0.029715762273901807;
        result[2] += 0.06718346253229975;
        result[3] += 0.0665374677002584;
        result[4] += 0.09366925064599484;
        result[5] += 0.06718346253229975;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0.023255813953488372;
        result[2] += 0;
        result[3] += 0.20930232558139536;
        result[4] += 0.023255813953488372;
        result[5] += 0.7441860465116279;
      } else {
        result[0] += 0.10714285714285715;
        result[1] += 0.13571428571428573;
        result[2] += 0.35000000000000003;
        result[3] += 0.10714285714285715;
        result[4] += 0.15000000000000002;
        result[5] += 0.15000000000000002;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.546218487394958;
        result[3] += 0.3025210084033614;
        result[4] += 0;
        result[5] += 0.1512605042016807;
      } else {
        result[0] += 0.011534025374855825;
        result[1] += 0;
        result[2] += 0.9215686274509803;
        result[3] += 0.06343713956170703;
        result[4] += 0;
        result[5] += 0.0034602076124567475;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.29723502304147464;
        result[1] += 0.004608294930875576;
        result[2] += 0;
        result[3] += 0.004608294930875576;
        result[4] += 0.6082949308755761;
        result[5] += 0.08525345622119816;
      } else {
        result[0] += 0.003341687552213868;
        result[1] += 0.005847953216374269;
        result[2] += 0.004177109440267335;
        result[3] += 0.10693400167084377;
        result[4] += 0.09690893901420217;
        result[5] += 0.7827903091060986;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
        result[0] += 0;
        result[1] += 0.9875259875259875;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012474012474012475;
        result[5] += 0;
      } else {
        result[0] += 0.6057347670250897;
        result[1] += 0.03643966547192354;
        result[2] += 0.08900836320191159;
        result[3] += 0.13321385902031063;
        result[4] += 0.05734767025089606;
        result[5] += 0.07825567502986858;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0967741935483871;
        result[4] += 0.16129032258064516;
        result[5] += 0.7419354838709677;
      } else {
        result[0] += 0.026785714285714288;
        result[1] += 0.0892857142857143;
        result[2] += 0.4285714285714286;
        result[3] += 0.23214285714285718;
        result[4] += 0.026785714285714288;
        result[5] += 0.19642857142857145;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.02617801047120419;
        result[1] += 0;
        result[2] += 0.7905759162303665;
        result[3] += 0.1518324607329843;
        result[4] += 0;
        result[5] += 0.031413612565445025;
      } else {
        result[0] += 0.012747875354107648;
        result[1] += 0;
        result[2] += 0.9617563739376771;
        result[3] += 0.025495750708215296;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9578059071729957;
        result[5] += 0.04219409282700422;
      } else {
        result[0] += 0;
        result[1] += 0.058823529411764705;
        result[2] += 0;
        result[3] += 0.4117647058823529;
        result[4] += 0;
        result[5] += 0.5294117647058824;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.0027359781121751026;
        result[2] += 0.0027359781121751026;
        result[3] += 0.03419972640218878;
        result[4] += 0.04377564979480164;
        result[5] += 0.9165526675786594;
      } else {
        result[0] += 0.08617594254937164;
        result[1] += 0.00718132854578097;
        result[2] += 0.003590664272890485;
        result[3] += 0.3590664272890485;
        result[4] += 0.08976660682226212;
        result[5] += 0.4542190305206463;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.47619047619047616;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5238095238095238;
        result[5] += 0;
      } else {
        result[0] += 0.002183406113537118;
        result[1] += 0.9978165938864629;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.7052845528455286;
        result[1] += 0.047425474254742556;
        result[2] += 0.022357723577235776;
        result[3] += 0.05149051490514906;
        result[4] += 0.12872628726287266;
        result[5] += 0.04471544715447155;
      } else {
        result[0] += 0.03310759969902183;
        result[1] += 0.003009781790820166;
        result[2] += 0.7494356659142213;
        result[3] += 0.12264860797592175;
        result[4] += 0.017306245297215955;
        result[5] += 0.07449209932279911;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003745318352059925;
        result[1] += 0.003745318352059925;
        result[2] += 0.0149812734082397;
        result[3] += 0.0299625468164794;
        result[4] += 0.8801498127340824;
        result[5] += 0.06741573033707865;
      } else {
        result[0] += 0.04754358161648178;
        result[1] += 0.005546751188589541;
        result[2] += 0.003961965134706815;
        result[3] += 0.15134706814580032;
        result[4] += 0.058637083993660855;
        result[5] += 0.7329635499207607;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.8789144050104385;
        result[2] += 0.004175365344467641;
        result[3] += 0;
        result[4] += 0.11691022964509395;
        result[5] += 0;
      } else {
        result[0] += 0.6583236321303841;
        result[1] += 0.02910360884749709;
        result[2] += 0.07625145518044238;
        result[3] += 0.0890570430733411;
        result[4] += 0.07974388824214203;
        result[5] += 0.06752037252619325;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06521739130434782;
        result[3] += 0.17391304347826086;
        result[4] += 0.08695652173913043;
        result[5] += 0.6739130434782609;
      } else {
        result[0] += 0.015151515151515152;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.4015151515151515;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.2;
        result[2] += 0.3333333333333333;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.26666666666666666;
      } else {
        result[0] += 0.0033076074972436605;
        result[1] += 0;
        result[2] += 0.9338478500551268;
        result[3] += 0.05181918412348401;
        result[4] += 0.0033076074972436605;
        result[5] += 0.007717750826901874;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003076923076923077;
        result[1] += 0.046153846153846156;
        result[2] += 0;
        result[3] += 0.015384615384615385;
        result[4] += 0.8707692307692307;
        result[5] += 0.06461538461538462;
      } else {
        result[0] += 0.7033492822966508;
        result[1] += 0.014354066985645935;
        result[2] += 0;
        result[3] += 0.019138755980861247;
        result[4] += 0.14354066985645936;
        result[5] += 0.11961722488038279;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
        result[0] += 0.003157894736842105;
        result[1] += 0;
        result[2] += 0.004210526315789474;
        result[3] += 0.07684210526315789;
        result[4] += 0.045263157894736845;
        result[5] += 0.8705263157894737;
      } else {
        result[0] += 0.08483290488431877;
        result[1] += 0.02313624678663239;
        result[2] += 0.005141388174807198;
        result[3] += 0.33676092544987146;
        result[4] += 0.17480719794344474;
        result[5] += 0.37532133676092544;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
        result[0] += 0.00998003992015968;
        result[1] += 0.8942115768463074;
        result[2] += 0.01996007984031936;
        result[3] += 0.005988023952095809;
        result[4] += 0.06187624750499002;
        result[5] += 0.007984031936127744;
      } else {
        result[0] += 0.822841726618705;
        result[1] += 0.03147482014388489;
        result[2] += 0.015287769784172662;
        result[3] += 0.05485611510791367;
        result[4] += 0.047661870503597124;
        result[5] += 0.02787769784172662;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.04219409282700422;
        result[1] += 0.05063291139240506;
        result[2] += 0.22362869198312235;
        result[3] += 0.4050632911392405;
        result[4] += 0.0759493670886076;
        result[5] += 0.20253164556962025;
      } else {
        result[0] += 0.030825022665457842;
        result[1] += 0;
        result[2] += 0.8640072529465095;
        result[3] += 0.07978241160471441;
        result[4] += 0;
        result[5] += 0.025385312783318223;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17994100294985252;
        result[1] += 0.0029498525073746312;
        result[2] += 0;
        result[3] += 0.017699115044247787;
        result[4] += 0.6873156342182891;
        result[5] += 0.11209439528023599;
      } else {
        result[0] += 0;
        result[1] += 0.004258943781942078;
        result[2] += 0.002555366269165247;
        result[3] += 0.15843270868824533;
        result[4] += 0.065587734241908;
        result[5] += 0.7691652470187393;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9503968253968254;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0496031746031746;
        result[5] += 0;
      } else {
        result[0] += 0.6236247828604516;
        result[1] += 0.038795599305153444;
        result[2] += 0.04806022003474233;
        result[3] += 0.09322524609148813;
        result[4] += 0.11754487550665894;
        result[5] += 0.0787492762015055;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04395604395604396;
        result[1] += 0;
        result[2] += 0.26373626373626374;
        result[3] += 0.5824175824175825;
        result[4] += 0;
        result[5] += 0.10989010989010989;
      } else {
        result[0] += 0.030927835051546393;
        result[1] += 0;
        result[2] += 0.7422680412371134;
        result[3] += 0.12371134020618557;
        result[4] += 0;
        result[5] += 0.10309278350515463;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9115250291036089;
        result[3] += 0.07217694994179279;
        result[4] += 0;
        result[5] += 0.01629802095459837;
      } else {
        result[0] += 0.37142857142857144;
        result[1] += 0;
        result[2] += 0.6285714285714286;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1360759493670886;
        result[1] += 0.015822784810126583;
        result[2] += 0.006329113924050633;
        result[3] += 0.0379746835443038;
        result[4] += 0.7531645569620253;
        result[5] += 0.05063291139240506;
      } else {
        result[0] += 0.00333889816360601;
        result[1] += 0.011686143572621035;
        result[2] += 0.009181969949916527;
        result[3] += 0.17278797996661102;
        result[4] += 0.08263772954924875;
        result[5] += 0.7203672787979967;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0050335570469798654;
        result[1] += 0.7969798657718121;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1912751677852349;
        result[5] += 0.006711409395973154;
      } else {
        result[0] += 0.6741098370549184;
        result[1] += 0.019312009656004825;
        result[2] += 0.041641520820760405;
        result[3] += 0.10380205190102593;
        result[4] += 0.06035003017501507;
        result[5] += 0.10078455039227517;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07547169811320754;
        result[3] += 0.6981132075471698;
        result[4] += 0;
        result[5] += 0.22641509433962265;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8571428571428571;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.033802816901408454;
        result[1] += 0;
        result[2] += 0.7830985915492958;
        result[3] += 0.13521126760563382;
        result[4] += 0;
        result[5] += 0.04788732394366198;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9658385093167702;
        result[3] += 0.03260869565217391;
        result[4] += 0;
        result[5] += 0.0015527950310559005;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0038314176245210726;
        result[1] += 0.06130268199233716;
        result[2] += 0;
        result[3] += 0.022988505747126436;
        result[4] += 0.8352490421455939;
        result[5] += 0.07662835249042145;
      } else {
        result[0] += 0.047860768672951415;
        result[1] += 0.005076142131979695;
        result[2] += 0.011602610587382161;
        result[3] += 0.18201595358955766;
        result[4] += 0.07179115300942712;
        result[5] += 0.6816533720087019;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6137266023823029;
        result[1] += 0.06239364719228588;
        result[2] += 0.06239364719228588;
        result[3] += 0.06296086216676121;
        result[4] += 0.11117413499716393;
        result[5] += 0.08735110606920023;
      } else {
        result[0] += 0.0049504950495049506;
        result[1] += 0.9702970297029703;
        result[2] += 0;
        result[3] += 0.0049504950495049506;
        result[4] += 0.019801980198019802;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.013157894736842105;
        result[2] += 0.10526315789473684;
        result[3] += 0.5;
        result[4] += 0.013157894736842105;
        result[5] += 0.3684210526315789;
      } else {
        result[0] += 0;
        result[1] += 0.07017543859649122;
        result[2] += 0.7543859649122807;
        result[3] += 0.07017543859649122;
        result[4] += 0.017543859649122806;
        result[5] += 0.08771929824561403;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0.05;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.45;
        result[4] += 0.05;
        result[5] += 0.25;
      } else {
        result[0] += 0.009237875288683603;
        result[1] += 0;
        result[2] += 0.9203233256351039;
        result[3] += 0.06351039260969978;
        result[4] += 0;
        result[5] += 0.006928406466512702;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.006622516556291392;
        result[2] += 0;
        result[3] += 0.026490066225165566;
        result[4] += 0.9072847682119206;
        result[5] += 0.05960264900662252;
      } else {
        result[0] += 0.053973013493253376;
        result[1] += 0.0037481259370314842;
        result[2] += 0.005247376311844078;
        result[3] += 0.15442278860569716;
        result[4] += 0.06971514242878561;
        result[5] += 0.7128935532233883;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6539877300613497;
        result[1] += 0.0687116564417178;
        result[2] += 0.05828220858895705;
        result[3] += 0.06441717791411043;
        result[4] += 0.0950920245398773;
        result[5] += 0.05950920245398773;
      } else {
        result[0] += 0.002347417840375587;
        result[1] += 0.9859154929577465;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011737089201877934;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.07692307692307693;
        result[2] += 0.04807692307692308;
        result[3] += 0.4326923076923077;
        result[4] += 0.0673076923076923;
        result[5] += 0.375;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6861313868613139;
        result[3] += 0.1897810218978102;
        result[4] += 0;
        result[5] += 0.12408759124087591;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0.019230769230769232;
        result[1] += 0;
        result[2] += 0.6602564102564102;
        result[3] += 0.21794871794871795;
        result[4] += 0.01282051282051282;
        result[5] += 0.08974358974358974;
      } else {
        result[0] += 0.00949796472184532;
        result[1] += 0;
        result[2] += 0.9321573948439621;
        result[3] += 0.05563093622795116;
        result[4] += 0;
        result[5] += 0.00271370420624152;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.002232142857142857;
        result[1] += 0.9821428571428571;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015625;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
        result[0] += 0.015625;
        result[1] += 0.0046875;
        result[2] += 0.00546875;
        result[3] += 0.1171875;
        result[4] += 0.20390625;
        result[5] += 0.653125;
      } else {
        result[0] += 0.5772934617334009;
        result[1] += 0.048656867714140906;
        result[2] += 0.039026862645717184;
        result[3] += 0.10390268626457172;
        result[4] += 0.12164216928535225;
        result[5] += 0.10947795235681702;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24050632911392406;
        result[3] += 0.5949367088607594;
        result[4] += 0.012658227848101266;
        result[5] += 0.1518987341772152;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.76;
        result[3] += 0.16;
        result[4] += 0;
        result[5] += 0.08;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        result[0] += 0.020050125313283207;
        result[1] += 0;
        result[2] += 0.8295739348370927;
        result[3] += 0.14035087719298245;
        result[4] += 0;
        result[5] += 0.010025062656641603;
      } else {
        result[0] += 0.003367003367003367;
        result[1] += 0;
        result[2] += 0.9848484848484849;
        result[3] += 0.008417508417508417;
        result[4] += 0;
        result[5] += 0.003367003367003367;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003816793893129771;
        result[1] += 0.061068702290076333;
        result[2] += 0;
        result[3] += 0.011450381679389313;
        result[4] += 0.8320610687022901;
        result[5] += 0.0916030534351145;
      } else {
        result[0] += 0.02912621359223301;
        result[1] += 0.006472491909385114;
        result[2] += 0.016181229773462782;
        result[3] += 0.1529126213592233;
        result[4] += 0.09466019417475728;
        result[5] += 0.7006472491909385;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.0022371364653243847;
        result[1] += 0.959731543624161;
        result[2] += 0;
        result[3] += 0.006711409395973154;
        result[4] += 0.03131991051454139;
        result[5] += 0;
      } else {
        result[0] += 0.6793275217932753;
        result[1] += 0.039850560398505604;
        result[2] += 0.04420921544209216;
        result[3] += 0.0647571606475716;
        result[4] += 0.11519302615193026;
        result[5] += 0.05666251556662515;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
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
        result[2] += 0.16990291262135923;
        result[3] += 0.4320388349514563;
        result[4] += 0.04854368932038835;
        result[5] += 0.34951456310679613;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0.004672897196261683;
        result[1] += 0.01869158878504673;
        result[2] += 0.6401869158878506;
        result[3] += 0.2476635514018692;
        result[4] += 0.03738317757009346;
        result[5] += 0.05140186915887851;
      } else {
        result[0] += 0.02176541717049577;
        result[1] += 0;
        result[2] += 0.9310761789600968;
        result[3] += 0.03990326481257558;
        result[4] += 0.0048367593712212815;
        result[5] += 0.0024183796856106408;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.007633587786259542;
        result[2] += 0;
        result[3] += 0.007633587786259542;
        result[4] += 0.9236641221374046;
        result[5] += 0.061068702290076333;
      } else {
        result[0] += 0.038431372549019606;
        result[1] += 0.002352941176470588;
        result[2] += 0.009411764705882352;
        result[3] += 0.14980392156862746;
        result[4] += 0.0815686274509804;
        result[5] += 0.7184313725490196;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        result[0] += 0.024574669187145556;
        result[1] += 0.8241965973534972;
        result[2] += 0.001890359168241966;
        result[3] += 0.011342155009451797;
        result[4] += 0.13799621928166353;
        result[5] += 0;
      } else {
        result[0] += 0.6701816051552432;
        result[1] += 0.029876977152899824;
        result[2] += 0.06444053895723492;
        result[3] += 0.09958992384299942;
        result[4] += 0.06795547744581136;
        result[5] += 0.06795547744581136;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.14285714285714285;
        result[2] += 0.10714285714285714;
        result[3] += 0.21428571428571427;
        result[4] += 0;
        result[5] += 0.5357142857142857;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6602870813397129;
        result[3] += 0.23923444976076555;
        result[4] += 0;
        result[5] += 0.10047846889952153;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0.375;
        result[4] += 0;
        result[5] += 0.375;
      } else {
        result[0] += 0.013750000000000002;
        result[1] += 0.0025000000000000005;
        result[2] += 0.9400000000000001;
        result[3] += 0.04250000000000001;
        result[4] += 0;
        result[5] += 0.0012500000000000002;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.012875536480686695;
        result[1] += 0.02145922746781116;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9098712446351931;
        result[5] += 0.055793991416309016;
      } else {
        result[0] += 0.011310084825636193;
        result[1] += 0.008482563619227144;
        result[2] += 0.001885014137606032;
        result[3] += 0.13289349670122527;
        result[4] += 0.046182846371347785;
        result[5] += 0.7992459943449576;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5749496981891349;
        result[1] += 0.05030181086519116;
        result[2] += 0.06388329979879277;
        result[3] += 0.09708249496981892;
        result[4] += 0.12575452716297789;
        result[5] += 0.08802816901408451;
      } else {
        result[0] += 0.004319654427645789;
        result[1] += 0.9935205183585313;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0021598272138228943;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
        result[0] += 0.09090909090909091;
        result[1] += 0.21212121212121213;
        result[2] += 0.18181818181818182;
        result[3] += 0;
        result[4] += 0.18181818181818182;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.0106951871657754;
        result[1] += 0;
        result[2] += 0.39037433155080214;
        result[3] += 0.43315508021390375;
        result[4] += 0.0106951871657754;
        result[5] += 0.15508021390374332;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0.21739130434782608;
        result[1] += 0;
        result[2] += 0.2608695652173913;
        result[3] += 0.17391304347826086;
        result[4] += 0;
        result[5] += 0.34782608695652173;
      } else {
        result[0] += 0.002484472049689441;
        result[1] += 0;
        result[2] += 0.9391304347826087;
        result[3] += 0.0546583850931677;
        result[4] += 0;
        result[5] += 0.0037267080745341614;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.00819672131147541;
        result[4] += 0.9344262295081968;
        result[5] += 0.05737704918032787;
      } else {
        result[0] += 0.10810810810810811;
        result[1] += 0.1891891891891892;
        result[2] += 0;
        result[3] += 0.24324324324324326;
        result[4] += 0.32432432432432434;
        result[5] += 0.13513513513513514;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        result[0] += 0.053022269353128315;
        result[1] += 0;
        result[2] += 0.003181336161187699;
        result[3] += 0.05832449628844114;
        result[4] += 0.06256627783669141;
        result[5] += 0.8229056203605515;
      } else {
        result[0] += 0;
        result[1] += 0.014285714285714285;
        result[2] += 0.007142857142857143;
        result[3] += 0.5142857142857142;
        result[4] += 0.02142857142857143;
        result[5] += 0.44285714285714284;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004123711340206186;
        result[1] += 0.9608247422680413;
        result[2] += 0.008247422680412371;
        result[3] += 0.006185567010309278;
        result[4] += 0.020618556701030927;
        result[5] += 0;
      } else {
        result[0] += 0.6924471299093655;
        result[1] += 0.053172205438066465;
        result[2] += 0.03262839879154079;
        result[3] += 0.06042296072507553;
        result[4] += 0.113595166163142;
        result[5] += 0.04773413897280967;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0.010714285714285714;
        result[1] += 0.017857142857142856;
        result[2] += 0.3142857142857143;
        result[3] += 0.3607142857142857;
        result[4] += 0.06428571428571428;
        result[5] += 0.23214285714285715;
      } else {
        result[0] += 0.019955654101995568;
        result[1] += 0.00443458980044346;
        result[2] += 0.8968957871396896;
        result[3] += 0.06097560975609757;
        result[4] += 0.006651884700665189;
        result[5] += 0.01108647450110865;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.012658227848101267;
        result[1] += 0.003164556962025317;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9082278481012659;
        result[5] += 0.07594936708860761;
      } else {
        result[0] += 0.04344262295081967;
        result[1] += 0.002459016393442623;
        result[2] += 0.004098360655737705;
        result[3] += 0.15737704918032788;
        result[4] += 0.04344262295081967;
        result[5] += 0.7491803278688525;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.0055762081784386614;
        result[1] += 0.8401486988847584;
        result[2] += 0.0037174721189591076;
        result[3] += 0.0037174721189591076;
        result[4] += 0.14684014869888476;
        result[5] += 0;
      } else {
        result[0] += 0.6640625000000001;
        result[1] += 0.03125000000000001;
        result[2] += 0.07992788461538462;
        result[3] += 0.08533653846153848;
        result[4] += 0.06971153846153848;
        result[5] += 0.06971153846153848;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0.041666666666666664;
        result[2] += 0.041666666666666664;
        result[3] += 0;
        result[4] += 0.16666666666666666;
        result[5] += 0.75;
      } else {
        result[0] += 0.032520325203252036;
        result[1] += 0.024390243902439025;
        result[2] += 0.4959349593495935;
        result[3] += 0.2926829268292683;
        result[4] += 0;
        result[5] += 0.15447154471544716;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.015810276679841896;
        result[1] += 0;
        result[2] += 0.7905138339920948;
        result[3] += 0.15810276679841898;
        result[4] += 0;
        result[5] += 0.03557312252964427;
      } else {
        result[0] += 0.0015060240963855422;
        result[1] += 0;
        result[2] += 0.9698795180722891;
        result[3] += 0.02710843373493976;
        result[4] += 0;
        result[5] += 0.0015060240963855422;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01818181818181818;
        result[1] += 0.01818181818181818;
        result[2] += 0;
        result[3] += 0.014545454545454545;
        result[4] += 0.8472727272727273;
        result[5] += 0.10181818181818182;
      } else {
        result[0] += 0.05332302936630603;
        result[1] += 0.0015455950540958269;
        result[2] += 0.005409582689335394;
        result[3] += 0.15301391035548687;
        result[4] += 0.080370942812983;
        result[5] += 0.7063369397217929;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6275939427930455;
        result[1] += 0.056646102075154234;
        result[2] += 0.07683679192372406;
        result[3] += 0.07010656197420079;
        result[4] += 0.10263600673022995;
        result[5] += 0.06618059450364554;
      } else {
        result[0] += 0.004784688995215311;
        result[1] += 0.9952153110047847;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.046511627906976744;
        result[2] += 0.13953488372093023;
        result[3] += 0.3372093023255814;
        result[4] += 0.046511627906976744;
        result[5] += 0.43023255813953487;
      } else {
        result[0] += 0.04878048780487805;
        result[1] += 0.0975609756097561;
        result[2] += 0.5;
        result[3] += 0.17073170731707318;
        result[4] += 0.04878048780487805;
        result[5] += 0.13414634146341464;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6808510638297872;
        result[3] += 0.2907801418439716;
        result[4] += 0;
        result[5] += 0.028368794326241134;
      } else {
        result[0] += 0.013386880856760375;
        result[1] += 0;
        result[2] += 0.9464524765729585;
        result[3] += 0.03748326639892905;
        result[4] += 0;
        result[5] += 0.002677376171352075;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0.034482758620689655;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9655172413793104;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9913793103448276;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.008620689655172414;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
        result[0] += 0.04169611307420495;
        result[1] += 0.012720848056537103;
        result[2] += 0.008480565371024734;
        result[3] += 0.10530035335689046;
        result[4] += 0.19363957597173145;
        result[5] += 0.6381625441696113;
      } else {
        result[0] += 0.6010666666666667;
        result[1] += 0.027200000000000002;
        result[2] += 0.05973333333333334;
        result[3] += 0.10080000000000001;
        result[4] += 0.1274666666666667;
        result[5] += 0.08373333333333335;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.08695652173913043;
        result[4] += 0;
        result[5] += 0.9130434782608695;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2631578947368421;
        result[3] += 0.34210526315789475;
        result[4] += 0;
        result[5] += 0.39473684210526316;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.30952380952380953;
        result[2] += 0.19047619047619047;
        result[3] += 0.23809523809523808;
        result[4] += 0.023809523809523808;
        result[5] += 0.23809523809523808;
      } else {
        result[0] += 0.013829787234042552;
        result[1] += 0;
        result[2] += 0.9;
        result[3] += 0.07553191489361702;
        result[4] += 0;
        result[5] += 0.010638297872340425;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0038022813688212928;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9771863117870723;
        result[5] += 0.019011406844106463;
      } else {
        result[0] += 0.07918710581639804;
        result[1] += 0.006306937631394534;
        result[2] += 0.007708479327259986;
        result[3] += 0.18920812894183603;
        result[4] += 0.0756832515767344;
        result[5] += 0.641906096706377;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.005671077504725897;
        result[1] += 0.8865784499054818;
        result[2] += 0.003780718336483931;
        result[3] += 0.003780718336483931;
        result[4] += 0.10018903591682417;
        result[5] += 0;
      } else {
        result[0] += 0.6990679094540613;
        result[1] += 0.03595206391478029;
        result[2] += 0.07190412782956059;
        result[3] += 0.06125166444740346;
        result[4] += 0.07256990679094541;
        result[5] += 0.059254327563249;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        result[0] += 0.061224489795918366;
        result[1] += 0.061224489795918366;
        result[2] += 0.14285714285714285;
        result[3] += 0.061224489795918366;
        result[4] += 0.14285714285714285;
        result[5] += 0.5306122448979592;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.42592592592592593;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.07407407407407407;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0;
        result[4] += 0.2857142857142857;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.006376195536663124;
        result[1] += 0;
        result[2] += 0.9426142401700319;
        result[3] += 0.048884165781083955;
        result[4] += 0;
        result[5] += 0.0021253985122210413;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003937007874015748;
        result[1] += 0.007874015748031496;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9330708661417323;
        result[5] += 0.05511811023622047;
      } else {
        result[0] += 0.042163882259347654;
        result[1] += 0.003977724741447892;
        result[2] += 0.005568814638027049;
        result[3] += 0.14797136038186157;
        result[4] += 0.06284805091487669;
        result[5] += 0.7374701670644391;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6670731707317074;
        result[1] += 0.05975609756097561;
        result[2] += 0.03231707317073171;
        result[3] += 0.07378048780487804;
        result[4] += 0.12073170731707317;
        result[5] += 0.046341463414634146;
      } else {
        result[0] += 0.004434589800443459;
        result[1] += 0.9955654101995566;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0859375;
        result[3] += 0.53125;
        result[4] += 0.0078125;
        result[5] += 0.375;
      } else {
        result[0] += 0.03703703703703704;
        result[1] += 0.01851851851851852;
        result[2] += 0.5925925925925927;
        result[3] += 0.13888888888888892;
        result[4] += 0.03703703703703704;
        result[5] += 0.17592592592592596;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        result[0] += 0.006060606060606061;
        result[1] += 0.024242424242424242;
        result[2] += 0.6242424242424243;
        result[3] += 0.24848484848484848;
        result[4] += 0;
        result[5] += 0.09696969696969697;
      } else {
        result[0] += 0.01701093560145808;
        result[1] += 0;
        result[2] += 0.9258809234507898;
        result[3] += 0.05224787363304982;
        result[4] += 0;
        result[5] += 0.004860267314702308;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
        result[0] += 0;
        result[1] += 0.988558352402746;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011441647597254004;
        result[5] += 0;
      } else {
        result[0] += 0.015317286652078774;
        result[1] += 0.09190371991247265;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8205689277899344;
        result[5] += 0.07221006564551423;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        result[0] += 0.032541776605101144;
        result[1] += 0.008795074758135445;
        result[2] += 0.008795074758135445;
        result[3] += 0.1662269129287599;
        result[4] += 0.022867194371152155;
        result[5] += 0.7607739665787159;
      } else {
        result[0] += 0.6395280235988201;
        result[1] += 0.01415929203539823;
        result[2] += 0.08200589970501475;
        result[3] += 0.09144542772861357;
        result[4] += 0.06843657817109144;
        result[5] += 0.10442477876106195;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.08333333333333333;
        result[2] += 0.06944444444444445;
        result[3] += 0.2361111111111111;
        result[4] += 0.06944444444444445;
        result[5] += 0.5416666666666666;
      } else {
        result[0] += 0.031746031746031744;
        result[1] += 0;
        result[2] += 0.656084656084656;
        result[3] += 0.2275132275132275;
        result[4] += 0.010582010582010581;
        result[5] += 0.07407407407407407;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
        result[0] += 0.5238095238095238;
        result[1] += 0.14285714285714285;
        result[2] += 0.23809523809523808;
        result[3] += 0.09523809523809523;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.007334963325183374;
        result[1] += 0.0012224938875305623;
        result[2] += 0.9327628361858191;
        result[3] += 0.05134474327628362;
        result[4] += 0;
        result[5] += 0.007334963325183374;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2475633528265107;
        result[1] += 0.005847953216374269;
        result[2] += 0.009746588693957114;
        result[3] += 0.023391812865497075;
        result[4] += 0.5984405458089669;
        result[5] += 0.11500974658869395;
      } else {
        result[0] += 0.01581395348837209;
        result[1] += 0.005581395348837209;
        result[2] += 0.004651162790697674;
        result[3] += 0.10511627906976745;
        result[4] += 0.0641860465116279;
        result[5] += 0.8046511627906977;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9978858350951374;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0021141649048625794;
        result[5] += 0;
      } else {
        result[0] += 0.6570080862533693;
        result[1] += 0.04716981132075472;
        result[2] += 0.057951482479784364;
        result[3] += 0.11118598382749326;
        result[4] += 0.07277628032345014;
        result[5] += 0.05390835579514825;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.012552301255230125;
        result[1] += 0.0041841004184100415;
        result[2] += 0.1799163179916318;
        result[3] += 0.4435146443514644;
        result[4] += 0.058577405857740586;
        result[5] += 0.301255230125523;
      } else {
        result[0] += 0.0196078431372549;
        result[1] += 0;
        result[2] += 0.7941176470588235;
        result[3] += 0.10784313725490197;
        result[4] += 0.0392156862745098;
        result[5] += 0.0392156862745098;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        result[0] += 0.20512820512820512;
        result[1] += 0.05128205128205128;
        result[2] += 0.3076923076923077;
        result[3] += 0.02564102564102564;
        result[4] += 0.10256410256410256;
        result[5] += 0.3076923076923077;
      } else {
        result[0] += 0.0055493895671476145;
        result[1] += 0.002219755826859046;
        result[2] += 0.9322974472807992;
        result[3] += 0.044395116537180916;
        result[4] += 0;
        result[5] += 0.015538290788013321;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0040650406504065045;
        result[1] += 0.024390243902439025;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9186991869918699;
        result[5] += 0.052845528455284556;
      } else {
        result[0] += 0.0393574297188755;
        result[1] += 0.0008032128514056225;
        result[2] += 0.0024096385542168677;
        result[3] += 0.17349397590361446;
        result[4] += 0.06506024096385542;
        result[5] += 0.7188755020080321;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.01669195751138088;
        result[1] += 0.7981790591805766;
        result[2] += 0;
        result[3] += 0.0015174506828528073;
        result[4] += 0.18361153262518967;
        result[5] += 0;
      } else {
        result[0] += 0.6904276985743381;
        result[1] += 0.015614392396469789;
        result[2] += 0.07128309572301425;
        result[3] += 0.07807196198234895;
        result[4] += 0.06449422946367957;
        result[5] += 0.08010862186014936;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0.017543859649122806;
        result[1] += 0.14035087719298245;
        result[2] += 0.03508771929824561;
        result[3] += 0.11403508771929824;
        result[4] += 0.11403508771929824;
        result[5] += 0.5789473684210527;
      } else {
        result[0] += 0.05699481865284974;
        result[1] += 0;
        result[2] += 0.40932642487046633;
        result[3] += 0.41450777202072536;
        result[4] += 0;
        result[5] += 0.11917098445595854;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008027522935779819;
        result[1] += 0;
        result[2] += 0.9094036697247707;
        result[3] += 0.07454128440366974;
        result[4] += 0;
        result[5] += 0.008027522935779819;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
        result[0] += 0;
        result[1] += 0.25;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9976580796252927;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00234192037470726;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0.12990790111488124;
        result[1] += 0.02035870092098885;
        result[2] += 0.00290838584585555;
        result[3] += 0.13184682501211828;
        result[4] += 0.21134270479883666;
        result[5] += 0.5036354823073195;
      } else {
        result[0] += 0.7285342584562011;
        result[1] += 0.03382480485689505;
        result[2] += 0.10147441457068514;
        result[3] += 0.04683434518647007;
        result[4] += 0.061578490893321756;
        result[5] += 0.027753686036426705;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        result[0] += 0.011363636363636364;
        result[1] += 0.13636363636363635;
        result[2] += 0.10227272727272728;
        result[3] += 0.07954545454545454;
        result[4] += 0.17045454545454544;
        result[5] += 0.5;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.41262135922330095;
        result[3] += 0.39805825242718446;
        result[4] += 0.014563106796116505;
        result[5] += 0.17475728155339806;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.5384615384615384;
        result[1] += 0.11538461538461539;
        result[2] += 0.3076923076923077;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.038461538461538464;
      } else {
        result[0] += 0.010477299185098952;
        result[1] += 0;
        result[2] += 0.9313154831199069;
        result[3] += 0.05238649592549476;
        result[4] += 0;
        result[5] += 0.005820721769499418;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007518796992481203;
        result[1] += 0.03383458646616541;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9398496240601504;
        result[5] += 0.018796992481203006;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5333333333333333;
        result[5] += 0.43333333333333335;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.025411061285500747;
        result[4] += 0.03587443946188341;
        result[5] += 0.9387144992526159;
      } else {
        result[0] += 0.1187214611872146;
        result[1] += 0.0289193302891933;
        result[2] += 0.0121765601217656;
        result[3] += 0.3363774733637747;
        result[4] += 0.0654490106544901;
        result[5] += 0.4383561643835616;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        result[0] += 0.006147540983606557;
        result[1] += 0.9118852459016393;
        result[2] += 0.006147540983606557;
        result[3] += 0;
        result[4] += 0.07581967213114754;
        result[5] += 0;
      } else {
        result[0] += 0.7386286490156144;
        result[1] += 0.01697216564833673;
        result[2] += 0.02987101154107264;
        result[3] += 0.06177868295994569;
        result[4] += 0.10726408689748812;
        result[5] += 0.04548540393754243;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
        result[0] += 0.021645021645021644;
        result[1] += 0.017316017316017316;
        result[2] += 0.47186147186147187;
        result[3] += 0.2683982683982684;
        result[4] += 0.03463203463203463;
        result[5] += 0.18614718614718614;
      } else {
        result[0] += 0.013238289205702648;
        result[1] += 0.0050916496945010185;
        result[2] += 0.9012219959266803;
        result[3] += 0.06924643584521385;
        result[4] += 0;
        result[5] += 0.01120162932790224;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.044444444444444446;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.92;
        result[5] += 0.035555555555555556;
      } else {
        result[0] += 0.038492381716118684;
        result[1] += 0.01603849238171612;
        result[2] += 0;
        result[3] += 0.1507618283881315;
        result[4] += 0.040096230954290296;
        result[5] += 0.7546110665597434;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9659863945578231;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.034013605442176874;
        result[5] += 0;
      } else {
        result[0] += 0.5910596026490066;
        result[1] += 0.02704194260485651;
        result[2] += 0.08940397350993377;
        result[3] += 0.09050772626931568;
        result[4] += 0.1346578366445916;
        result[5] += 0.0673289183222958;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08653846153846154;
        result[3] += 0.28846153846153844;
        result[4] += 0.028846153846153848;
        result[5] += 0.5961538461538461;
      } else {
        result[0] += 0;
        result[1] += 0.06666666666666667;
        result[2] += 0.6266666666666667;
        result[3] += 0.14666666666666667;
        result[4] += 0.013333333333333334;
        result[5] += 0.14666666666666667;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.12041884816753928;
        result[1] += 0;
        result[2] += 0.6701570680628274;
        result[3] += 0.1884816753926702;
        result[4] += 0.005235602094240839;
        result[5] += 0.015706806282722516;
      } else {
        result[0] += 0.005471956224350205;
        result[1] += 0;
        result[2] += 0.9411764705882353;
        result[3] += 0.05198358413132695;
        result[4] += 0;
        result[5] += 0.0013679890560875513;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2968197879858657;
        result[1] += 0.04770318021201413;
        result[2] += 0.00530035335689046;
        result[3] += 0.028268551236749116;
        result[4] += 0.5353356890459364;
        result[5] += 0.08657243816254417;
      } else {
        result[0] += 0.025436046511627907;
        result[1] += 0.0029069767441860465;
        result[2] += 0.02616279069767442;
        result[3] += 0.20857558139534885;
        result[4] += 0.08212209302325581;
        result[5] += 0.654796511627907;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9244060475161987;
        result[2] += 0;
        result[3] += 0.008639308855291577;
        result[4] += 0.058315334773218146;
        result[5] += 0.008639308855291577;
      } else {
        result[0] += 0.717546362339515;
        result[1] += 0.056348074179743225;
        result[2] += 0.0442225392296719;
        result[3] += 0.043509272467902996;
        result[4] += 0.07703281027104136;
        result[5] += 0.06134094151212553;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05660377358490566;
        result[3] += 0.37735849056603776;
        result[4] += 0;
        result[5] += 0.5660377358490566;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6666666666666666;
        result[3] += 0.14814814814814814;
        result[4] += 0;
        result[5] += 0.18518518518518517;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.07692307692307694;
        result[2] += 0.33333333333333337;
        result[3] += 0.4871794871794872;
        result[4] += 0;
        result[5] += 0.10256410256410257;
      } else {
        result[0] += 0.005555555555555556;
        result[1] += 0.0077777777777777776;
        result[2] += 0.9277777777777778;
        result[3] += 0.04666666666666667;
        result[4] += 0.0044444444444444444;
        result[5] += 0.0077777777777777776;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.008130081300813009;
        result[2] += 0.0040650406504065045;
        result[3] += 0;
        result[4] += 0.9146341463414634;
        result[5] += 0.07317073170731707;
      } else {
        result[0] += 0.046420141620771044;
        result[1] += 0.016522423288749016;
        result[2] += 0.011801730920535013;
        result[3] += 0.13139260424862312;
        result[4] += 0.044059795436664044;
        result[5] += 0.7498033044846577;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0033840947546531306;
        result[1] += 0.8087986463620982;
        result[2] += 0;
        result[3] += 0.02538071065989848;
        result[4] += 0.14890016920473775;
        result[5] += 0.013536379018612522;
      } else {
        result[0] += 0.7194480946123522;
        result[1] += 0.02956636005256242;
        result[2] += 0.03876478318002628;
        result[3] += 0.07424441524310119;
        result[4] += 0.08081471747700394;
        result[5] += 0.05716162943495401;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.02564102564102564;
        result[2] += 0.07692307692307693;
        result[3] += 0.41025641025641024;
        result[4] += 0.05128205128205128;
        result[5] += 0.4358974358974359;
      } else {
        result[0] += 0.13333333333333333;
        result[1] += 0.05333333333333334;
        result[2] += 0.37333333333333335;
        result[3] += 0.013333333333333334;
        result[4] += 0.2;
        result[5] += 0.22666666666666666;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3;
        result[3] += 0.44;
        result[4] += 0;
        result[5] += 0.26;
      } else {
        result[0] += 0.006289308176100629;
        result[1] += 0.0010482180293501049;
        result[2] += 0.8857442348008385;
        result[3] += 0.08909853249475891;
        result[4] += 0.0020964360587002098;
        result[5] += 0.015723270440251572;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        result[0] += 0.01282051282051282;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8504273504273504;
        result[5] += 0.13675213675213677;
      } else {
        result[0] += 0.5;
        result[1] += 0.012195121951219513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4878048780487805;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05456570155902005;
        result[4] += 0.06570155902004454;
        result[5] += 0.8797327394209354;
      } else {
        result[0] += 0;
        result[1] += 0.0057306590257879654;
        result[2] += 0.008595988538681949;
        result[3] += 0.4383954154727794;
        result[4] += 0.0659025787965616;
        result[5] += 0.4813753581661891;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9759519038076152;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02404809619238477;
        result[5] += 0;
      } else {
        result[0] += 0.7114624505928854;
        result[1] += 0.024374176548089592;
        result[2] += 0.028985507246376812;
        result[3] += 0.07312252964426877;
        result[4] += 0.116600790513834;
        result[5] += 0.045454545454545456;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0.00816326530612245;
        result[1] += 0.00816326530612245;
        result[2] += 0.363265306122449;
        result[3] += 0.3020408163265306;
        result[4] += 0.00816326530612245;
        result[5] += 0.31020408163265306;
      } else {
        result[0] += 0.025974025974025976;
        result[1] += 0.015984015984015984;
        result[2] += 0.8691308691308691;
        result[3] += 0.06293706293706294;
        result[4] += 0.008991008991008992;
        result[5] += 0.016983016983016984;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14511873350923482;
        result[1] += 0.026385224274406333;
        result[2] += 0;
        result[3] += 0.010554089709762533;
        result[4] += 0.7229551451187335;
        result[5] += 0.09498680738786279;
      } else {
        result[0] += 0.0025466893039049238;
        result[1] += 0.008488964346349746;
        result[2] += 0.0008488964346349745;
        result[3] += 0.13837011884550085;
        result[4] += 0.07215619694397284;
        result[5] += 0.7775891341256367;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.01415929203539823;
        result[1] += 0.8353982300884956;
        result[2] += 0.0035398230088495575;
        result[3] += 0.007079646017699115;
        result[4] += 0.13628318584070798;
        result[5] += 0.0035398230088495575;
      } else {
        result[0] += 0.649358582773366;
        result[1] += 0.040317654245571176;
        result[2] += 0.05497861942577887;
        result[3] += 0.09590714722052536;
        result[4] += 0.08918753817959683;
        result[5] += 0.0702504581551619;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.06410256410256411;
        result[2] += 0.21794871794871798;
        result[3] += 0.6025641025641026;
        result[4] += 0.012820512820512822;
        result[5] += 0.10256410256410257;
      } else {
        result[0] += 0.02962962962962963;
        result[1] += 0.022222222222222223;
        result[2] += 0.6962962962962963;
        result[3] += 0.13333333333333333;
        result[4] += 0.007407407407407408;
        result[5] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.18518518518518517;
        result[1] += 0;
        result[2] += 0.37037037037037035;
        result[3] += 0.07407407407407407;
        result[4] += 0;
        result[5] += 0.37037037037037035;
      } else {
        result[0] += 0.007255139056831921;
        result[1] += 0;
        result[2] += 0.92503022974607;
        result[3] += 0.05441354292623941;
        result[4] += 0;
        result[5] += 0.01330108827085852;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008298755186721992;
        result[1] += 0.008298755186721992;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9336099585062241;
        result[5] += 0.04979253112033195;
      } else {
        result[0] += 0.03980099502487562;
        result[1] += 0.005804311774461028;
        result[2] += 0.0024875621890547263;
        result[3] += 0.14344941956882257;
        result[4] += 0.04809286898839138;
        result[5] += 0.7603648424543947;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.01422764227642276;
        result[1] += 0.9674796747967478;
        result[2] += 0;
        result[3] += 0.002032520325203252;
        result[4] += 0.016260162601626015;
        result[5] += 0;
      } else {
        result[0] += 0.6317030053034767;
        result[1] += 0.05185621685327048;
        result[2] += 0.047731290512669416;
        result[3] += 0.07248084855627578;
        result[4] += 0.1278727165586329;
        result[5] += 0.06835592221567471;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.011363636363636364;
        result[2] += 0.06818181818181818;
        result[3] += 0.09090909090909091;
        result[4] += 0.14772727272727273;
        result[5] += 0.6818181818181818;
      } else {
        result[0] += 0;
        result[1] += 0.04081632653061224;
        result[2] += 0.24489795918367346;
        result[3] += 0.5510204081632653;
        result[4] += 0.01020408163265306;
        result[5] += 0.15306122448979592;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.01234567901234568;
        result[2] += 0.580246913580247;
        result[3] += 0.28395061728395066;
        result[4] += 0.07407407407407408;
        result[5] += 0.04938271604938272;
      } else {
        result[0] += 0.03791982665222102;
        result[1] += 0.00866738894907909;
        result[2] += 0.886240520043337;
        result[3] += 0.05417118093174431;
        result[4] += 0;
        result[5] += 0.013001083423618635;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
        result[0] += 0.0038910505836575876;
        result[1] += 0.007782101167315175;
        result[2] += 0;
        result[3] += 0.011673151750972763;
        result[4] += 0.9455252918287937;
        result[5] += 0.0311284046692607;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.0463768115942029;
        result[1] += 0.000966183574879227;
        result[2] += 0;
        result[3] += 0.06183574879227053;
        result[4] += 0.0647342995169082;
        result[5] += 0.8260869565217391;
      } else {
        result[0] += 0.004405286343612335;
        result[1] += 0.004405286343612335;
        result[2] += 0.00881057268722467;
        result[3] += 0.6211453744493393;
        result[4] += 0.004405286343612335;
        result[5] += 0.3568281938325991;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.01511879049676026;
        result[1] += 0.9416846652267818;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04319654427645788;
        result[5] += 0;
      } else {
        result[0] += 0.7049071618037136;
        result[1] += 0.04774535809018568;
        result[2] += 0.014588859416445625;
        result[3] += 0.04310344827586208;
        result[4] += 0.14588859416445626;
        result[5] += 0.04376657824933688;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        result[0] += 0.03361344537815126;
        result[1] += 0.03081232492997199;
        result[2] += 0.3277310924369748;
        result[3] += 0.30532212885154064;
        result[4] += 0.0700280112044818;
        result[5] += 0.23249299719887956;
      } else {
        result[0] += 0.04815573770491803;
        result[1] += 0.0020491803278688526;
        result[2] += 0.8586065573770492;
        result[3] += 0.07479508196721311;
        result[4] += 0;
        result[5] += 0.01639344262295082;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0038461538461538464;
        result[1] += 0.0038461538461538464;
        result[2] += 0.007692307692307693;
        result[3] += 0.0038461538461538464;
        result[4] += 0.9307692307692308;
        result[5] += 0.05;
      } else {
        result[0] += 0.04265791632485644;
        result[1] += 0.006562756357670222;
        result[2] += 0.002461033634126333;
        result[3] += 0.1509433962264151;
        result[4] += 0.05004101722723544;
        result[5] += 0.7473338802296965;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.00646551724137931;
        result[1] += 0.9719827586206896;
        result[2] += 0;
        result[3] += 0.0021551724137931034;
        result[4] += 0.01939655172413793;
        result[5] += 0;
      } else {
        result[0] += 0.6444444444444445;
        result[1] += 0.054385964912280704;
        result[2] += 0.03508771929824561;
        result[3] += 0.07309941520467836;
        result[4] += 0.12280701754385964;
        result[5] += 0.07017543859649122;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
        result[0] += 0.014598540145985401;
        result[1] += 0.0364963503649635;
        result[2] += 0.13138686131386862;
        result[3] += 0.48175182481751827;
        result[4] += 0.072992700729927;
        result[5] += 0.26277372262773724;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7878787878787878;
        result[3] += 0.09090909090909091;
        result[4] += 0;
        result[5] += 0.12121212121212122;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.35;
        result[1] += 0.45;
        result[2] += 0.05;
        result[3] += 0;
        result[4] += 0.15;
        result[5] += 0;
      } else {
        result[0] += 0.014242115971515769;
        result[1] += 0;
        result[2] += 0.9114954221770092;
        result[3] += 0.056968463886063074;
        result[4] += 0.002034587995930824;
        result[5] += 0.015259409969481181;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.09315068493150686;
        result[1] += 0.08767123287671233;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7315068493150685;
        result[5] += 0.08767123287671233;
      } else {
        result[0] += 0.0019286403085824494;
        result[1] += 0.0009643201542912247;
        result[2] += 0.0009643201542912247;
        result[3] += 0.1600771456123433;
        result[4] += 0.07232401157184185;
        result[5] += 0.76374156219865;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9329268292682927;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06707317073170732;
        result[5] += 0;
      } else {
        result[0] += 0.6208791208791209;
        result[1] += 0.02142857142857143;
        result[2] += 0.07087912087912088;
        result[3] += 0.10494505494505495;
        result[4] += 0.08186813186813187;
        result[5] += 0.1;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.07407407407407407;
        result[2] += 0;
        result[3] += 0.07407407407407407;
        result[4] += 0.14814814814814814;
        result[5] += 0.7037037037037037;
      } else {
        result[0] += 0;
        result[1] += 0.018072289156626505;
        result[2] += 0.45180722891566266;
        result[3] += 0.4036144578313253;
        result[4] += 0.024096385542168676;
        result[5] += 0.10240963855421686;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.7368421052631579;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.2631578947368421;
      } else {
        result[0] += 0.011111111111111113;
        result[1] += 0;
        result[2] += 0.9211111111111112;
        result[3] += 0.05777777777777778;
        result[4] += 0.0011111111111111113;
        result[5] += 0.00888888888888889;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.020512820512820513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9794871794871794;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.013086150490730643;
        result[1] += 0.017448200654307525;
        result[2] += 0;
        result[3] += 0.04580152671755725;
        result[4] += 0.04798255179934569;
        result[5] += 0.8756815703380589;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06403940886699508;
        result[3] += 0.541871921182266;
        result[4] += 0.024630541871921183;
        result[5] += 0.3694581280788177;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6030320044918586;
        result[1] += 0.06007860752386301;
        result[2] += 0.021897810218978107;
        result[3] += 0.08983717012914094;
        result[4] += 0.1454239191465469;
        result[5] += 0.07973048848961259;
      } else {
        result[0] += 0.007633587786259542;
        result[1] += 0.9720101781170484;
        result[2] += 0;
        result[3] += 0.015267175572519083;
        result[4] += 0.005089058524173028;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.059490084985835696;
        result[1] += 0.04815864022662889;
        result[2] += 0.3626062322946176;
        result[3] += 0.31728045325779036;
        result[4] += 0.039660056657223795;
        result[5] += 0.17280453257790368;
      } else {
        result[0] += 0.027950310559006212;
        result[1] += 0;
        result[2] += 0.8954451345755694;
        result[3] += 0.07142857142857142;
        result[4] += 0;
        result[5] += 0.005175983436853002;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.096514745308311;
        result[1] += 0.0026809651474530836;
        result[2] += 0;
        result[3] += 0.016085790884718502;
        result[4] += 0.7694369973190349;
        result[5] += 0.11528150134048258;
      } else {
        result[0] += 0;
        result[1] += 0.00272975432211101;
        result[2] += 0.007279344858962694;
        result[3] += 0.14194722474977253;
        result[4] += 0.06005459508644222;
        result[5] += 0.7879890809827116;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
        result[0] += 0.03307888040712468;
        result[1] += 0.9516539440203562;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015267175572519083;
        result[5] += 0;
      } else {
        result[0] += 0.6330383480825958;
        result[1] += 0.08908554572271386;
        result[2] += 0.05014749262536873;
        result[3] += 0.06725663716814159;
        result[4] += 0.10324483775811209;
        result[5] += 0.057227138643067846;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03636363636363636;
        result[3] += 0.09090909090909091;
        result[4] += 0.07272727272727272;
        result[5] += 0.8;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21768707482993196;
        result[3] += 0.4965986394557823;
        result[4] += 0;
        result[5] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.008333333333333333;
        result[1] += 0.008333333333333333;
        result[2] += 0.4583333333333333;
        result[3] += 0.4;
        result[4] += 0.016666666666666666;
        result[5] += 0.10833333333333334;
      } else {
        result[0] += 0.006355932203389831;
        result[1] += 0.001059322033898305;
        result[2] += 0.9110169491525424;
        result[3] += 0.05508474576271186;
        result[4] += 0.01059322033898305;
        result[5] += 0.015889830508474576;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17052023121387283;
        result[1] += 0.017341040462427744;
        result[2] += 0.008670520231213872;
        result[3] += 0;
        result[4] += 0.7023121387283237;
        result[5] += 0.10115606936416185;
      } else {
        result[0] += 0.0033140016570008283;
        result[1] += 0.009942004971002486;
        result[2] += 0.01739850869925435;
        result[3] += 0.1855840927920464;
        result[4] += 0.048053024026512015;
        result[5] += 0.7357083678541839;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.9242105263157895;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07578947368421053;
        result[5] += 0;
      } else {
        result[0] += 0.6331187829139848;
        result[1] += 0.04154476301930954;
        result[2] += 0.053832650672908135;
        result[3] += 0.09479227618490345;
        result[4] += 0.10825043885313049;
        result[5] += 0.0684610883557636;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06451612903225806;
        result[3] += 0.22580645161290322;
        result[4] += 0;
        result[5] += 0.7096774193548387;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5510204081632653;
        result[3] += 0.20408163265306123;
        result[4] += 0;
        result[5] += 0.24489795918367346;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        result[0] += 0.03225806451612903;
        result[1] += 0.020737327188940093;
        result[2] += 0.7972350230414746;
        result[3] += 0.11981566820276497;
        result[4] += 0.004608294930875576;
        result[5] += 0.02534562211981567;
      } else {
        result[0] += 0.0034782608695652175;
        result[1] += 0;
        result[2] += 0.9773913043478261;
        result[3] += 0.017391304347826087;
        result[4] += 0;
        result[5] += 0.0017391304347826088;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004132231404958678;
        result[1] += 0.004132231404958678;
        result[2] += 0.012396694214876033;
        result[3] += 0;
        result[4] += 0.9256198347107438;
        result[5] += 0.05371900826446281;
      } else {
        result[0] += 0.024166666666666666;
        result[1] += 0.03;
        result[2] += 0.015833333333333335;
        result[3] += 0.14083333333333334;
        result[4] += 0.0525;
        result[5] += 0.7366666666666667;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9685393258426966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03146067415730337;
        result[5] += 0;
      } else {
        result[0] += 0.618490967056323;
        result[1] += 0.02656748140276301;
        result[2] += 0.03825717321997874;
        result[3] += 0.09298618490967055;
        result[4] += 0.13655685441020188;
        result[5] += 0.08714133900106269;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.8;
        result[2] += 0.2;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.265625;
        result[4] += 0;
        result[5] += 0.609375;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03982300884955752;
        result[1] += 0;
        result[2] += 0.6769911504424779;
        result[3] += 0.22123893805309736;
        result[4] += 0;
        result[5] += 0.061946902654867256;
      } else {
        result[0] += 0.009247027741083224;
        result[1] += 0;
        result[2] += 0.9498018494055482;
        result[3] += 0.035667107001321;
        result[4] += 0;
        result[5] += 0.005284015852047556;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0.14285714285714285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.42857142857142855;
        result[5] += 0.42857142857142855;
      } else {
        result[0] += 0.0044742729306487695;
        result[1] += 0.9955257270693513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        result[0] += 0.03827751196172249;
        result[1] += 0.007518796992481203;
        result[2] += 0.002050580997949419;
        result[3] += 0.14354066985645933;
        result[4] += 0.17293233082706766;
        result[5] += 0.6356801093643198;
      } else {
        result[0] += 0.6267441860465115;
        result[1] += 0.04709302325581394;
        result[2] += 0.04593023255813953;
        result[3] += 0.06802325581395348;
        result[4] += 0.13604651162790696;
        result[5] += 0.0761627906976744;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        result[0] += 0.018867924528301886;
        result[1] += 0.05660377358490566;
        result[2] += 0.11320754716981132;
        result[3] += 0.33962264150943394;
        result[4] += 0.09433962264150944;
        result[5] += 0.37735849056603776;
      } else {
        result[0] += 0.13750000000000004;
        result[1] += 0.025000000000000005;
        result[2] += 0.5375000000000001;
        result[3] += 0.20000000000000004;
        result[4] += 0.006250000000000001;
        result[5] += 0.09375000000000001;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4358974358974359;
        result[3] += 0.38461538461538464;
        result[4] += 0;
        result[5] += 0.1794871794871795;
      } else {
        result[0] += 0.010180995475113122;
        result[1] += 0;
        result[2] += 0.9298642533936652;
        result[3] += 0.057692307692307696;
        result[4] += 0;
        result[5] += 0.0022624434389140274;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0053475935828877;
        result[1] += 0.0855614973262032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8502673796791443;
        result[5] += 0.058823529411764705;
      } else {
        result[0] += 0.1353737492642731;
        result[1] += 0.002354326074161271;
        result[2] += 0.025897586815773983;
        result[3] += 0.19894055326662743;
        result[4] += 0.062978222483814;
        result[5] += 0.5744555620953502;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
        result[0] += 0.05761316872427984;
        result[1] += 0.9176954732510288;
        result[2] += 0;
        result[3] += 0.00205761316872428;
        result[4] += 0.02263374485596708;
        result[5] += 0;
      } else {
        result[0] += 0.7386731391585761;
        result[1] += 0.046925566343042076;
        result[2] += 0.06310679611650487;
        result[3] += 0.03721682847896441;
        result[4] += 0.0800970873786408;
        result[5] += 0.03398058252427185;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
        result[0] += 0.03076923076923077;
        result[1] += 0.03076923076923077;
        result[2] += 0.23076923076923078;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.5076923076923077;
      } else {
        result[0] += 0.03278688524590164;
        result[1] += 0.08196721311475409;
        result[2] += 0.7377049180327869;
        result[3] += 0.09836065573770492;
        result[4] += 0;
        result[5] += 0.04918032786885246;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0027855153203342623;
        result[1] += 0;
        result[2] += 0.818941504178273;
        result[3] += 0.14484679665738165;
        result[4] += 0.0027855153203342623;
        result[5] += 0.030640668523676882;
      } else {
        result[0] += 0.007326007326007327;
        result[1] += 0;
        result[2] += 0.9761904761904763;
        result[3] += 0.014652014652014654;
        result[4] += 0;
        result[5] += 0.0018315018315018317;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.032520325203252036;
        result[2] += 0.0040650406504065045;
        result[3] += 0.028455284552845527;
        result[4] += 0.8983739837398373;
        result[5] += 0.036585365853658534;
      } else {
        result[0] += 0.038461538461538464;
        result[1] += 0.01098901098901099;
        result[2] += 0.016483516483516484;
        result[3] += 0.1695447409733124;
        result[4] += 0.07378335949764521;
        result[5] += 0.6907378335949764;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9327731092436975;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06722689075630252;
        result[5] += 0;
      } else {
        result[0] += 0.6256323777403036;
        result[1] += 0.023608768971332208;
        result[2] += 0.06464305789769534;
        result[3] += 0.08038223721191681;
        result[4] += 0.12478920741989882;
        result[5] += 0.08094435075885328;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06896551724137931;
        result[3] += 0;
        result[4] += 0.034482758620689655;
        result[5] += 0.896551724137931;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2714285714285714;
        result[3] += 0.38571428571428573;
        result[4] += 0.04285714285714286;
        result[5] += 0.3;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.023809523809523808;
        result[1] += 0.17857142857142858;
        result[2] += 0.40476190476190477;
        result[3] += 0.21428571428571427;
        result[4] += 0.023809523809523808;
        result[5] += 0.15476190476190477;
      } else {
        result[0] += 0.020737327188940093;
        result[1] += 0;
        result[2] += 0.9147465437788018;
        result[3] += 0.06221198156682028;
        result[4] += 0;
        result[5] += 0.002304147465437788;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00398406374501992;
        result[1] += 0.00398406374501992;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9641434262948207;
        result[5] += 0.027888446215139442;
      } else {
        result[0] += 0.04595744680851064;
        result[1] += 0.00425531914893617;
        result[2] += 0.006808510638297872;
        result[3] += 0.15148936170212765;
        result[4] += 0.05617021276595745;
        result[5] += 0.7353191489361702;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.954183266932271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.045816733067729085;
        result[5] += 0;
      } else {
        result[0] += 0.7035670356703568;
        result[1] += 0.02644526445264453;
        result[2] += 0.041205412054120545;
        result[3] += 0.06826568265682659;
        result[4] += 0.10947109471094713;
        result[5] += 0.05104551045510456;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        result[0] += 0.014492753623188406;
        result[1] += 0;
        result[2] += 0.043478260869565216;
        result[3] += 0.14492753623188406;
        result[4] += 0.11594202898550725;
        result[5] += 0.6811594202898551;
      } else {
        result[0] += 0.013824884792626729;
        result[1] += 0.041474654377880185;
        result[2] += 0.30414746543778803;
        result[3] += 0.47465437788018433;
        result[4] += 0.009216589861751152;
        result[5] += 0.15668202764976957;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.04745762711864407;
        result[1] += 0;
        result[2] += 0.7796610169491526;
        result[3] += 0.15593220338983052;
        result[4] += 0;
        result[5] += 0.01694915254237288;
      } else {
        result[0] += 0.008683068017366137;
        result[1] += 0;
        result[2] += 0.9421128798842258;
        result[3] += 0.04341534008683068;
        result[4] += 0;
        result[5] += 0.005788712011577424;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9572649572649573;
        result[5] += 0.042735042735042736;
      } else {
        result[0] += 0.041666666666666664;
        result[1] += 0.018790849673202614;
        result[2] += 0.014705882352941176;
        result[3] += 0.14787581699346405;
        result[4] += 0.04738562091503268;
        result[5] += 0.7295751633986928;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6198668146503884;
        result[1] += 0.06270810210876802;
        result[2] += 0.04772475027746947;
        result[3] += 0.0715871254162042;
        result[4] += 0.1276359600443951;
        result[5] += 0.07047724750277468;
      } else {
        result[0] += 0.0075;
        result[1] += 0.9825;
        result[2] += 0;
        result[3] += 0.01;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.13513513513513514;
        result[2] += 0.11711711711711711;
        result[3] += 0.3153153153153153;
        result[4] += 0.10810810810810811;
        result[5] += 0.32432432432432434;
      } else {
        result[0] += 0.11538461538461539;
        result[1] += 0.05128205128205128;
        result[2] += 0.47435897435897434;
        result[3] += 0.01282051282051282;
        result[4] += 0.02564102564102564;
        result[5] += 0.32051282051282054;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.025;
        result[2] += 0.325;
        result[3] += 0.475;
        result[4] += 0;
        result[5] += 0.175;
      } else {
        result[0] += 0.010672358591248666;
        result[1] += 0;
        result[2] += 0.9178228388473852;
        result[3] += 0.06616862326574173;
        result[4] += 0;
        result[5] += 0.005336179295624333;
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
