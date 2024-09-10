
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
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
          result[0] += 0.036585365853658534;
          result[1] += 0.008130081300813009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.926829268292683;
          result[5] += 0.028455284552845527;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2926829268292683;
          result[5] += 0.7073170731707317;
        } else {
          result[0] += 0.7790697674418605;
          result[1] += 0.029069767441860465;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18604651162790697;
          result[5] += 0.005813953488372093;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9333333333333333;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.0028011204481792717;
          result[2] += 0.0056022408963585435;
          result[3] += 0.037815126050420166;
          result[4] += 0.04481792717086835;
          result[5] += 0.9089635854341737;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0.0079155672823219;
          result[1] += 0.0079155672823219;
          result[2] += 0.010554089709762533;
          result[3] += 0.18733509234828497;
          result[4] += 0.12137203166226913;
          result[5] += 0.6649076517150396;
        } else {
          result[0] += 0.07746478873239436;
          result[1] += 0.02112676056338028;
          result[2] += 0.028169014084507043;
          result[3] += 0.4859154929577465;
          result[4] += 0.1267605633802817;
          result[5] += 0.2605633802816901;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 0.997624703087886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023752969121140144;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0.23452157598499063;
          result[1] += 0.06566604127579738;
          result[2] += 0.11632270168855535;
          result[3] += 0.35647279549718575;
          result[4] += 0.02626641651031895;
          result[5] += 0.20075046904315197;
        } else {
          result[0] += 0.5579999999999999;
          result[1] += 0.053999999999999986;
          result[2] += 0.14399999999999996;
          result[3] += 0.04999999999999999;
          result[4] += 0.15799999999999997;
          result[5] += 0.03599999999999999;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.9368258859784284;
          result[1] += 0;
          result[2] += 0.027734976887519264;
          result[3] += 0.0015408320493066258;
          result[4] += 0.012326656394453007;
          result[5] += 0.021571648690292763;
        } else {
          result[0] += 0.021105527638190954;
          result[1] += 0;
          result[2] += 0.8582914572864322;
          result[3] += 0.10050251256281408;
          result[4] += 0;
          result[5] += 0.020100502512562814;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.013888888888888888;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.06944444444444445;
          result[4] += 0.4861111111111111;
          result[5] += 0.3472222222222222;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          result[0] += 0.7543859649122807;
          result[1] += 0.013157894736842105;
          result[2] += 0;
          result[3] += 0.008771929824561403;
          result[4] += 0.13596491228070176;
          result[5] += 0.08771929824561403;
        } else {
          result[0] += 0.015060240963855422;
          result[1] += 0.006024096385542169;
          result[2] += 0.005271084337349397;
          result[3] += 0.13102409638554216;
          result[4] += 0.0858433734939759;
          result[5] += 0.7567771084337349;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0.4824561403508772;
          result[2] += 0;
          result[3] += 0.008771929824561403;
          result[4] += 0.4298245614035088;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0.9973544973544973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0026455026455026454;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.900507614213198;
          result[1] += 0.022335025380710662;
          result[2] += 0.010152284263959392;
          result[3] += 0.02538071065989848;
          result[4] += 0.033502538071066;
          result[5] += 0.008121827411167515;
        } else {
          result[0] += 0.21787709497206703;
          result[1] += 0.0446927374301676;
          result[2] += 0.09497206703910614;
          result[3] += 0.31843575418994413;
          result[4] += 0.055865921787709494;
          result[5] += 0.2681564245810056;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10135135135135136;
          result[3] += 0.5743243243243243;
          result[4] += 0;
          result[5] += 0.32432432432432434;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.11904761904761904;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5636363636363636;
          result[3] += 0.32727272727272727;
          result[4] += 0;
          result[5] += 0.10909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.03896103896103896;
          result[4] += 0;
          result[5] += 0.05194805194805195;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34210526315789475;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0;
          result[2] += 0.7833333333333333;
          result[3] += 0.1;
          result[4] += 0.05;
          result[5] += 0.05;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006009615384615385;
          result[1] += 0;
          result[2] += 0.9471153846153846;
          result[3] += 0.042067307692307696;
          result[4] += 0.001201923076923077;
          result[5] += 0.003605769230769231;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.014084507042253521;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9765258215962441;
          result[5] += 0.009389671361502348;
        } else {
          result[0] += 0.3541666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3958333333333333;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.42857142857142855;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0037313432835820895;
          result[3] += 0.026119402985074626;
          result[4] += 0.03482587064676617;
          result[5] += 0.9353233830845771;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.04854368932038835;
          result[2] += 0;
          result[3] += 0.07281553398058252;
          result[4] += 0.22815533980582525;
          result[5] += 0.6504854368932039;
        } else {
          result[0] += 0.019230769230769235;
          result[1] += 0.002747252747252748;
          result[2] += 0.05219780219780221;
          result[3] += 0.5412087912087913;
          result[4] += 0.010989010989010992;
          result[5] += 0.3736263736263737;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9828009828009828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0171990171990172;
          result[5] += 0;
        } else {
          result[0] += 0.08403361344537816;
          result[1] += 0.24369747899159663;
          result[2] += 0;
          result[3] += 0.04201680672268908;
          result[4] += 0.6302521008403361;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0.22424242424242424;
          result[1] += 0.03636363636363636;
          result[2] += 0;
          result[3] += 0.17575757575757575;
          result[4] += 0.11515151515151516;
          result[5] += 0.4484848484848485;
        } else {
          result[0] += 0.8214876033057852;
          result[1] += 0.029752066115702483;
          result[2] += 0.027272727272727275;
          result[3] += 0.030578512396694218;
          result[4] += 0.07355371900826448;
          result[5] += 0.01735537190082645;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
          result[0] += 0.0049504950495049506;
          result[1] += 0.01485148514851485;
          result[2] += 0.22277227722772278;
          result[3] += 0.504950495049505;
          result[4] += 0.054455445544554455;
          result[5] += 0.19801980198019803;
        } else {
          result[0] += 0.27586206896551724;
          result[1] += 0.034482758620689655;
          result[2] += 0.6896551724137931;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.3225806451612903;
          result[1] += 0.043010752688172046;
          result[2] += 0.3763440860215054;
          result[3] += 0.11827956989247312;
          result[4] += 0.010752688172043012;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0.004343105320304018;
          result[1] += 0;
          result[2] += 0.9185667752442996;
          result[3] += 0.06188925081433225;
          result[4] += 0;
          result[5] += 0.01520086862106406;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.984375;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5777777777777777;
          result[5] += 0.4222222222222222;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          result[0] += 0.851063829787234;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0851063829787234;
          result[5] += 0.06382978723404255;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08571428571428572;
          result[4] += 0.2571428571428571;
          result[5] += 0.6285714285714286;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6111111111111112;
          result[5] += 0.3888888888888889;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014903129657228018;
          result[3] += 0.028315946348733235;
          result[4] += 0.020864381520119227;
          result[5] += 0.9493293591654247;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0043859649122807015;
          result[2] += 0;
          result[3] += 0.13596491228070176;
          result[4] += 0.13596491228070176;
          result[5] += 0.7236842105263158;
        } else {
          result[0] += 0.002824858757062147;
          result[1] += 0.09887005649717515;
          result[2] += 0.06779661016949153;
          result[3] += 0.4661016949152542;
          result[4] += 0.022598870056497175;
          result[5] += 0.3418079096045198;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9812646370023419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01873536299765808;
          result[5] += 0;
        } else {
          result[0] += 0.023622047244094488;
          result[1] += 0.28346456692913385;
          result[2] += 0;
          result[3] += 0.12598425196850394;
          result[4] += 0.5118110236220472;
          result[5] += 0.05511811023622047;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8553299492385787;
          result[1] += 0.01607445008460237;
          result[2] += 0.0016920473773265653;
          result[3] += 0.020304568527918784;
          result[4] += 0.08037225042301185;
          result[5] += 0.026226734348561764;
        } else {
          result[0] += 0.33739837398373984;
          result[1] += 0.02032520325203252;
          result[2] += 0.17073170731707318;
          result[3] += 0.1951219512195122;
          result[4] += 0.07317073170731707;
          result[5] += 0.2032520325203252;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0.01282051282051282;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10256410256410256;
          result[4] += 0.3717948717948718;
          result[5] += 0.5128205128205128;
        } else {
          result[0] += 0.004149377593360996;
          result[1] += 0;
          result[2] += 0.44813278008298757;
          result[3] += 0.4066390041493776;
          result[4] += 0.02074688796680498;
          result[5] += 0.12033195020746888;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          result[0] += 0.1518987341772152;
          result[1] += 0.012658227848101266;
          result[2] += 0.4810126582278481;
          result[3] += 0.1518987341772152;
          result[4] += 0.012658227848101266;
          result[5] += 0.189873417721519;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9240654205607477;
          result[3] += 0.056074766355140186;
          result[4] += 0;
          result[5] += 0.01985981308411215;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.02985074626865672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9353233830845772;
          result[5] += 0.03482587064676618;
        } else {
          result[0] += 0.611111111111111;
          result[1] += 0.08333333333333331;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13888888888888887;
          result[5] += 0.16666666666666663;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.007125890736342043;
          result[2] += 0;
          result[3] += 0.04631828978622328;
          result[4] += 0.057007125890736345;
          result[5] += 0.8895486935866983;
        } else {
          result[0] += 0.0091324200913242;
          result[1] += 0;
          result[2] += 0.0502283105022831;
          result[3] += 0.4018264840182648;
          result[4] += 0.0684931506849315;
          result[5] += 0.4703196347031963;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.2345679012345679;
          result[2] += 0;
          result[3] += 0.024691358024691357;
          result[4] += 0.7407407407407407;
          result[5] += 0;
        } else {
          result[0] += 0.008403361344537816;
          result[1] += 0.9516806722689076;
          result[2] += 0;
          result[3] += 0.006302521008403362;
          result[4] += 0.033613445378151266;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8203921568627451;
          result[1] += 0.02666666666666667;
          result[2] += 0;
          result[3] += 0.014901960784313726;
          result[4] += 0.10745098039215686;
          result[5] += 0.03058823529411765;
        } else {
          result[0] += 0.1095890410958904;
          result[1] += 0.0273972602739726;
          result[2] += 0.1506849315068493;
          result[3] += 0.2821917808219178;
          result[4] += 0.057534246575342465;
          result[5] += 0.3726027397260274;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0.07142857142857142;
          result[2] += 0.061224489795918366;
          result[3] += 0.05102040816326531;
          result[4] += 0.14285714285714285;
          result[5] += 0.6632653061224489;
        } else {
          result[0] += 0;
          result[1] += 0.030303030303030304;
          result[2] += 0.10606060606060606;
          result[3] += 0.5606060606060606;
          result[4] += 0;
          result[5] += 0.30303030303030304;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0821917808219178;
          result[3] += 0.7397260273972602;
          result[4] += 0.0273972602739726;
          result[5] += 0.1506849315068493;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.549618320610687;
          result[3] += 0.37404580152671757;
          result[4] += 0;
          result[5] += 0.07633587786259542;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)108) ) ) {
          result[0] += 0.10344827586206896;
          result[1] += 0.13793103448275862;
          result[2] += 0.41379310344827586;
          result[3] += 0.2413793103448276;
          result[4] += 0.10344827586206896;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111.5) ) ) {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0.851685393258427;
          result[3] += 0.1258426966292135;
          result[4] += 0;
          result[5] += 0.011235955056179775;
        } else {
          result[0] += 0.006437768240343348;
          result[1] += 0;
          result[2] += 0.9742489270386266;
          result[3] += 0.019313304721030045;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)34.5) ) ) {
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
          result[4] += 0.983739837398374;
          result[5] += 0.016260162601626018;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.4;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03763440860215054;
          result[4] += 0.024193548387096774;
          result[5] += 0.9381720430107527;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          result[0] += 0.75;
          result[1] += 0.0234375;
          result[2] += 0;
          result[3] += 0.0078125;
          result[4] += 0.1796875;
          result[5] += 0.0390625;
        } else {
          result[0] += 0.00482315112540193;
          result[1] += 0.008038585209003215;
          result[2] += 0.014469453376205787;
          result[3] += 0.3745980707395498;
          result[4] += 0.0707395498392283;
          result[5] += 0.5273311897106109;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.19626168224299065;
          result[2] += 0;
          result[3] += 0.037383177570093455;
          result[4] += 0.7663551401869159;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9836829836829837;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016317016317016316;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.08235294117647059;
          result[1] += 0.5882352941176471;
          result[2] += 0;
          result[3] += 0.011764705882352941;
          result[4] += 0.3176470588235294;
          result[5] += 0;
        } else {
          result[0] += 0.8464765100671141;
          result[1] += 0.007550335570469799;
          result[2] += 0.027684563758389263;
          result[3] += 0.03104026845637584;
          result[4] += 0.0662751677852349;
          result[5] += 0.02097315436241611;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12371134020618557;
          result[3] += 0.32989690721649484;
          result[4] += 0.061855670103092786;
          result[5] += 0.4845360824742268;
        } else {
          result[0] += 0;
          result[1] += 0.019736842105263157;
          result[2] += 0.5263157894736842;
          result[3] += 0.3355263157894737;
          result[4] += 0;
          result[5] += 0.11842105263157894;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.15942028985507245;
          result[1] += 0.06521739130434782;
          result[2] += 0.5869565217391305;
          result[3] += 0.06521739130434782;
          result[4] += 0.021739130434782608;
          result[5] += 0.10144927536231885;
        } else {
          result[0] += 0.004634994206257242;
          result[1] += 0;
          result[2] += 0.936268829663963;
          result[3] += 0.05214368482039398;
          result[4] += 0;
          result[5] += 0.006952491309385863;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0.009852216748768473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9605911330049262;
          result[5] += 0.029556650246305417;
        } else {
          result[0] += 0.4176470588235294;
          result[1] += 0.0058823529411764705;
          result[2] += 0;
          result[3] += 0.052941176470588235;
          result[4] += 0.32941176470588235;
          result[5] += 0.19411764705882353;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.007782101167315175;
          result[2] += 0.0048638132295719845;
          result[3] += 0.08268482490272373;
          result[4] += 0.06906614785992218;
          result[5] += 0.835603112840467;
        } else {
          result[0] += 0.01509433962264151;
          result[1] += 0;
          result[2] += 0.007547169811320755;
          result[3] += 0.6;
          result[4] += 0.0037735849056603774;
          result[5] += 0.37358490566037733;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.3620689655172414;
          result[2] += 0;
          result[3] += 0.034482758620689655;
          result[4] += 0.603448275862069;
          result[5] += 0;
        } else {
          result[0] += 0.00468384074941452;
          result[1] += 0.9812646370023419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01405152224824356;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8257328990228013;
          result[1] += 0.03175895765472313;
          result[2] += 0;
          result[3] += 0.010586319218241042;
          result[4] += 0.11644951140065146;
          result[5] += 0.015472312703583062;
        } else {
          result[0] += 0.1421188630490956;
          result[1] += 0.002583979328165375;
          result[2] += 0.32299741602067183;
          result[3] += 0.2868217054263566;
          result[4] += 0.03617571059431524;
          result[5] += 0.20930232558139536;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0.015384615384615385;
          result[2] += 0.25384615384615383;
          result[3] += 0.36923076923076925;
          result[4] += 0.015384615384615385;
          result[5] += 0.33076923076923076;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6956521739130436;
          result[3] += 0.28260869565217395;
          result[4] += 0;
          result[5] += 0.02173913043478261;
        } else {
          result[0] += 0.14814814814814814;
          result[1] += 0;
          result[2] += 0.8518518518518519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8409090909090909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1590909090909091;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8672985781990521;
          result[3] += 0.10900473933649289;
          result[4] += 0;
          result[5] += 0.023696682464454975;
        } else {
          result[0] += 0.008264462809917356;
          result[1] += 0;
          result[2] += 0.9731404958677686;
          result[3] += 0.012396694214876033;
          result[4] += 0;
          result[5] += 0.006198347107438017;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
          result[0] += 0.012048192771084338;
          result[1] += 0;
          result[2] += 0.004016064257028112;
          result[3] += 0.008032128514056224;
          result[4] += 0.8955823293172691;
          result[5] += 0.08032128514056225;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001282051282051282;
          result[3] += 0.03076923076923077;
          result[4] += 0.02564102564102564;
          result[5] += 0.9423076923076923;
        } else {
          result[0] += 0.11808669656203288;
          result[1] += 0.0343796711509716;
          result[2] += 0.013452914798206279;
          result[3] += 0.3094170403587444;
          result[4] += 0.07025411061285501;
          result[5] += 0.45440956651718983;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09178743961352658;
          result[1] += 0.1932367149758454;
          result[2] += 0.004830917874396135;
          result[3] += 0.028985507246376812;
          result[4] += 0.6376811594202898;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0.6981132075471698;
          result[1] += 0.02830188679245283;
          result[2] += 0.09164420485175202;
          result[3] += 0.07749326145552561;
          result[4] += 0.05256064690026954;
          result[5] += 0.05188679245283019;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
          result[0] += 0.36363636363636365;
          result[1] += 0.6363636363636364;
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
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.9230769230769231;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3191489361702128;
          result[3] += 0.5851063829787234;
          result[4] += 0;
          result[5] += 0.09574468085106383;
        } else {
          result[0] += 0;
          result[1] += 0.0196078431372549;
          result[2] += 0.7647058823529411;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.0392156862745098;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.006944444444444445;
          result[1] += 0;
          result[2] += 0.8750000000000001;
          result[3] += 0.10416666666666669;
          result[4] += 0;
          result[5] += 0.01388888888888889;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0045662100456621;
          result[1] += 0;
          result[2] += 0.9604261796042618;
          result[3] += 0.0273972602739726;
          result[4] += 0;
          result[5] += 0.0076103500761035;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
          result[0] += 0.004;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004;
          result[4] += 0.928;
          result[5] += 0.064;
        } else {
          result[0] += 0;
          result[1] += 0.6923076923076923;
          result[2] += 0;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.03866809881847476;
          result[1] += 0.004296455424274973;
          result[2] += 0;
          result[3] += 0.03007518796992481;
          result[4] += 0.08055853920515575;
          result[5] += 0.8464017185821697;
        } else {
          result[0] += 0.025559105431309903;
          result[1] += 0;
          result[2] += 0.012779552715654952;
          result[3] += 0.5015974440894568;
          result[4] += 0;
          result[5] += 0.46006389776357826;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7640532544378696;
          result[1] += 0.05769230769230768;
          result[2] += 0.002958579881656804;
          result[3] += 0.027366863905325438;
          result[4] += 0.12647928994082838;
          result[5] += 0.02144970414201183;
        } else {
          result[0] += 0.12121212121212122;
          result[1] += 0.05844155844155844;
          result[2] += 0.24025974025974026;
          result[3] += 0.2683982683982684;
          result[4] += 0.11255411255411256;
          result[5] += 0.19913419913419914;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.9905437352245863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009456264775413711;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14084507042253522;
          result[3] += 0.6619718309859155;
          result[4] += 0;
          result[5] += 0.19718309859154928;
        } else {
          result[0] += 0.17391304347826086;
          result[1] += 0;
          result[2] += 0.6086956521739131;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6637931034482759;
          result[3] += 0.2672413793103448;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.04201680672268908;
          result[1] += 0;
          result[2] += 0.8907563025210085;
          result[3] += 0.06722689075630252;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8771929824561404;
          result[3] += 0.08771929824561404;
          result[4] += 0;
          result[5] += 0.03508771929824562;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9020979020979021;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.006993006993006993;
        } else {
          result[0] += 0.0020833333333333337;
          result[1] += 0;
          result[2] += 0.9833333333333334;
          result[3] += 0.014583333333333335;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.00423728813559322;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9745762711864406;
          result[5] += 0.0211864406779661;
        } else {
          result[0] += 0.03076923076923077;
          result[1] += 0.03076923076923077;
          result[2] += 0;
          result[3] += 0.1076923076923077;
          result[4] += 0.5384615384615384;
          result[5] += 0.2923076923076923;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013440860215053765;
          result[3] += 0.043010752688172046;
          result[4] += 0.025537634408602152;
          result[5] += 0.9301075268817204;
        } else {
          result[0] += 0.11869918699186992;
          result[1] += 0.008130081300813009;
          result[2] += 0.004878048780487805;
          result[3] += 0.34308943089430893;
          result[4] += 0.055284552845528454;
          result[5] += 0.46991869918699186;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.07079646017699115;
          result[1] += 0.3008849557522124;
          result[2] += 0;
          result[3] += 0.008849557522123894;
          result[4] += 0.6017699115044248;
          result[5] += 0.017699115044247787;
        } else {
          result[0] += 0.002398081534772182;
          result[1] += 0.9808153477218226;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016786570743405275;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8601516427969671;
          result[1] += 0.03622577927548441;
          result[2] += 0.013479359730412805;
          result[3] += 0.017691659646166806;
          result[4] += 0.05728727885425442;
          result[5] += 0.015164279696714406;
        } else {
          result[0] += 0.15567282321899736;
          result[1] += 0;
          result[2] += 0.3087071240105541;
          result[3] += 0.30606860158311344;
          result[4] += 0.0633245382585752;
          result[5] += 0.1662269129287599;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.16666666666666666;
          result[4] += 0.06666666666666667;
          result[5] += 0.7;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34285714285714286;
          result[3] += 0.5428571428571428;
          result[4] += 0;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.08823529411764706;
          result[2] += 0.29411764705882354;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0.20588235294117646;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.041666666666666664;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.0273972602739726;
          result[2] += 0.7945205479452054;
          result[3] += 0.136986301369863;
          result[4] += 0;
          result[5] += 0.0410958904109589;
        } else {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0.42857142857142855;
          result[3] += 0.5357142857142857;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.012987012987012988;
          result[1] += 0.004329004329004329;
          result[2] += 0.8398268398268398;
          result[3] += 0.10822510822510822;
          result[4] += 0;
          result[5] += 0.03463203463203463;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9796954314720813;
          result[3] += 0.02030456852791878;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.03669724770642202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9495412844036697;
          result[5] += 0.013761467889908258;
        } else {
          result[0] += 0.525;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3625;
          result[5] += 0.1125;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0010256410256410256;
          result[2] += 0.0020512820512820513;
          result[3] += 0.057435897435897436;
          result[4] += 0.08;
          result[5] += 0.8594871794871795;
        } else {
          result[0] += 0.03125;
          result[1] += 0.052083333333333336;
          result[2] += 0;
          result[3] += 0.5625;
          result[4] += 0.020833333333333332;
          result[5] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7216713881019831;
          result[1] += 0.04886685552407932;
          result[2] += 0.009206798866855524;
          result[3] += 0.023371104815864022;
          result[4] += 0.14305949008498584;
          result[5] += 0.053824362606232294;
        } else {
          result[0] += 0.21485411140583555;
          result[1] += 0.0636604774535809;
          result[2] += 0.1909814323607427;
          result[3] += 0.26525198938992045;
          result[4] += 0.023872679045092837;
          result[5] += 0.2413793103448276;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0.9764397905759162;
          result[2] += 0;
          result[3] += 0.007853403141361256;
          result[4] += 0.015706806282722512;
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0.1935483870967742;
          result[4] += 0.04838709677419355;
          result[5] += 0.7258064516129032;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1134020618556701;
          result[3] += 0.7525773195876289;
          result[4] += 0;
          result[5] += 0.13402061855670103;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0.6724137931034483;
          result[3] += 0.1896551724137931;
          result[4] += 0;
          result[5] += 0.10344827586206896;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7329192546583851;
          result[3] += 0.2236024844720497;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.45;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010457516339869282;
          result[1] += 0;
          result[2] += 0.9437908496732027;
          result[3] += 0.04575163398692811;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.013157894736842105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008771929824561403;
          result[4] += 0.9429824561403509;
          result[5] += 0.03508771929824561;
        } else {
          result[0] += 0;
          result[1] += 0.782608695652174;
          result[2] += 0;
          result[3] += 0.043478260869565216;
          result[4] += 0.17391304347826086;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0.025717111770524232;
          result[1] += 0.018793273986152326;
          result[2] += 0.0019782393669634025;
          result[3] += 0.06429277942631058;
          result[4] += 0.04945598417408507;
          result[5] += 0.8397626112759644;
        } else {
          result[0] += 0.03361344537815126;
          result[1] += 0.02100840336134454;
          result[2] += 0;
          result[3] += 0.5294117647058824;
          result[4] += 0.04201680672268908;
          result[5] += 0.3739495798319328;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004576659038901602;
          result[1] += 0.9588100686498856;
          result[2] += 0.004576659038901602;
          result[3] += 0.006864988558352402;
          result[4] += 0.02517162471395881;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7308845577211395;
          result[1] += 0.04272863568215892;
          result[2] += 0.0022488755622188904;
          result[3] += 0.026986506746626688;
          result[4] += 0.15667166416791603;
          result[5] += 0.04047976011994003;
        } else {
          result[0] += 0.175054704595186;
          result[1] += 0.0175054704595186;
          result[2] += 0.1925601750547046;
          result[3] += 0.31291028446389496;
          result[4] += 0.04157549234135667;
          result[5] += 0.2603938730853392;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0.15151515151515152;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.462962962962963;
          result[3] += 0.5185185185185186;
          result[4] += 0;
          result[5] += 0.01851851851851852;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.32967032967032966;
          result[4] += 0;
          result[5] += 0.054945054945054944;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8253968253968255;
          result[3] += 0.1216931216931217;
          result[4] += 0;
          result[5] += 0.052910052910052914;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.030534351145038167;
          result[1] += 0;
          result[2] += 0.8015267175572519;
          result[3] += 0.15267175572519084;
          result[4] += 0;
          result[5] += 0.015267175572519083;
        } else {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0.9623931623931624;
          result[3] += 0.022222222222222223;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012345679012345678;
          result[2] += 0.00411522633744856;
          result[3] += 0.00823045267489712;
          result[4] += 0.9506172839506173;
          result[5] += 0.024691358024691357;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.01795142555438226;
          result[1] += 0.0021119324181626186;
          result[2] += 0.004223864836325237;
          result[3] += 0.04118268215417107;
          result[4] += 0.07391763463569166;
          result[5] += 0.8606124604012672;
        } else {
          result[0] += 0.052924791086350974;
          result[1] += 0.05013927576601671;
          result[2] += 0.002785515320334262;
          result[3] += 0.4233983286908078;
          result[4] += 0.036211699164345405;
          result[5] += 0.43454038997214484;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9858823529411764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01411764705882353;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7588424437299035;
          result[1] += 0.04581993569131833;
          result[2] += 0.018488745980707395;
          result[3] += 0.03054662379421222;
          result[4] += 0.12379421221864952;
          result[5] += 0.022508038585209004;
        } else {
          result[0] += 0.14772727272727273;
          result[1] += 0.008522727272727272;
          result[2] += 0.14488636363636365;
          result[3] += 0.2784090909090909;
          result[4] += 0.12215909090909091;
          result[5] += 0.29829545454545453;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.6896551724137931;
          result[4] += 0;
          result[5] += 0.25862068965517243;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.391304347826087;
          result[4] += 0;
          result[5] += 0.10869565217391304;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.5405405405405406;
          result[4] += 0;
          result[5] += 0.43243243243243246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7831325301204819;
          result[3] += 0.18072289156626506;
          result[4] += 0;
          result[5] += 0.03614457831325301;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0.3888888888888889;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.3888888888888889;
        } else {
          result[0] += 0.010504201680672271;
          result[1] += 0;
          result[2] += 0.9159663865546219;
          result[3] += 0.06617647058823531;
          result[4] += 0;
          result[5] += 0.007352941176470589;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
          result[0] += 0.015384615384615387;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9487179487179488;
          result[5] += 0.0358974358974359;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          result[0] += 0.9295774647887324;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07042253521126761;
          result[5] += 0;
        } else {
          result[0] += 0.12037037037037036;
          result[1] += 0;
          result[2] += 0.018518518518518517;
          result[3] += 0;
          result[4] += 0.5370370370370371;
          result[5] += 0.32407407407407407;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0.06153846153846154;
          result[4] += 0.4;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0;
          result[1] += 0.004672897196261682;
          result[2] += 0;
          result[3] += 0.04439252336448598;
          result[4] += 0.0455607476635514;
          result[5] += 0.905373831775701;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005747126436781609;
          result[3] += 0.26436781609195403;
          result[4] += 0.034482758620689655;
          result[5] += 0.6954022988505747;
        } else {
          result[0] += 0.003663003663003663;
          result[1] += 0;
          result[2] += 0.05860805860805861;
          result[3] += 0.6410256410256411;
          result[4] += 0.007326007326007326;
          result[5] += 0.2893772893772894;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.9354838709677419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06451612903225806;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9974937343358395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002506265664160401;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.626641651031895;
          result[1] += 0.10881801125703565;
          result[2] += 0.0075046904315197;
          result[3] += 0.0150093808630394;
          result[4] += 0.2326454033771107;
          result[5] += 0.009380863039399626;
        } else {
          result[0] += 0.04040404040404041;
          result[1] += 0.005050505050505051;
          result[2] += 0.14646464646464646;
          result[3] += 0.2676767676767677;
          result[4] += 0.15656565656565657;
          result[5] += 0.3838383838383838;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          result[0] += 0.8528347406513873;
          result[1] += 0.0024125452352231607;
          result[2] += 0.06272617611580218;
          result[3] += 0.03860072376357057;
          result[4] += 0.02533172496984319;
          result[5] += 0.018094089264173708;
        } else {
          result[0] += 0.010338345864661654;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.10338345864661654;
          result[4] += 0;
          result[5] += 0.011278195488721804;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0.0078125;
          result[1] += 0.046875;
          result[2] += 0;
          result[3] += 0.00390625;
          result[4] += 0.89453125;
          result[5] += 0.046875;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03206997084548105;
          result[1] += 0.0009718172983479105;
          result[2] += 0;
          result[3] += 0.061224489795918366;
          result[4] += 0.056365403304178816;
          result[5] += 0.8493683187560739;
        } else {
          result[0] += 0.0684931506849315;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.541095890410959;
          result[4] += 0.023972602739726026;
          result[5] += 0.3664383561643836;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951690821256038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004830917874396135;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7444444444444445;
          result[1] += 0.0362962962962963;
          result[2] += 0.018518518518518517;
          result[3] += 0.028888888888888888;
          result[4] += 0.13185185185185186;
          result[5] += 0.04;
        } else {
          result[0] += 0.1567164179104478;
          result[1] += 0.01492537313432836;
          result[2] += 0.2960199004975125;
          result[3] += 0.2985074626865672;
          result[4] += 0.05472636815920399;
          result[5] += 0.17910447761194032;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6551724137931034;
          result[4] += 0;
          result[5] += 0.3448275862068966;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.27586206896551724;
          result[3] += 0.10344827586206896;
          result[4] += 0;
          result[5] += 0.6206896551724138;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8695652173913043;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.125;
          result[2] += 0.6458333333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.10416666666666667;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.789029535864979;
          result[3] += 0.19409282700421943;
          result[4] += 0.0042194092827004225;
          result[5] += 0.012658227848101267;
        } else {
          result[0] += 0.0043541364296081275;
          result[1] += 0;
          result[2] += 0.9622641509433962;
          result[3] += 0.030478955007256895;
          result[4] += 0.001451378809869376;
          result[5] += 0.001451378809869376;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.01845018450184502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.933579335793358;
          result[5] += 0.04797047970479705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5625;
          result[4] += 0.0625;
          result[5] += 0.375;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0.024193548387096774;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.056451612903225805;
          result[4] += 0.0715725806451613;
          result[5] += 0.8477822580645161;
        } else {
          result[0] += 0.03529411764705882;
          result[1] += 0.00392156862745098;
          result[2] += 0.01568627450980392;
          result[3] += 0.4666666666666667;
          result[4] += 0.054901960784313725;
          result[5] += 0.4235294117647059;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.29411764705882354;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7058823529411765;
          result[5] += 0;
        } else {
          result[0] += 0.004739336492890996;
          result[1] += 0.981042654028436;
          result[2] += 0;
          result[3] += 0.009478672985781991;
          result[4] += 0.004739336492890996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7890938251804331;
          result[1] += 0.05212510024057739;
          result[2] += 0.001603849238171612;
          result[3] += 0.019246190858059346;
          result[4] += 0.12429831595829993;
          result[5] += 0.013632718524458702;
        } else {
          result[0] += 0.2090032154340836;
          result[1] += 0.02572347266881029;
          result[2] += 0.19614147909967847;
          result[3] += 0.2572347266881029;
          result[4] += 0.06752411575562701;
          result[5] += 0.24437299035369775;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1791044776119403;
          result[4] += 0.13432835820895522;
          result[5] += 0.6865671641791045;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07476635514018691;
          result[3] += 0.7383177570093458;
          result[4] += 0.009345794392523364;
          result[5] += 0.17757009345794392;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.4666666666666667;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.16;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8857142857142857;
          result[3] += 0.11428571428571428;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0.125;
        } else {
          result[0] += 0.07462686567164178;
          result[1] += 0.029850746268656716;
          result[2] += 0.5522388059701493;
          result[3] += 0.014925373134328358;
          result[4] += 0;
          result[5] += 0.3283582089552239;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.011827956989247311;
          result[1] += 0;
          result[2] += 0.9225806451612903;
          result[3] += 0.06129032258064516;
          result[4] += 0.002150537634408602;
          result[5] += 0.002150537634408602;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9829545454545454;
          result[5] += 0.017045454545454544;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.010262257696693273;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03420752565564424;
          result[4] += 0.06727480045610035;
          result[5] += 0.8882554161915621;
        } else {
          result[0] += 0.054945054945054944;
          result[1] += 0.06043956043956044;
          result[2] += 0;
          result[3] += 0.46153846153846156;
          result[4] += 0.005494505494505495;
          result[5] += 0.4175824175824176;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9930715935334873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006928406466512702;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7651515151515152;
          result[1] += 0.030303030303030307;
          result[2] += 0.004545454545454546;
          result[3] += 0.02651515151515152;
          result[4] += 0.1416666666666667;
          result[5] += 0.03181818181818182;
        } else {
          result[0] += 0.1425531914893617;
          result[1] += 0.02127659574468085;
          result[2] += 0.11063829787234042;
          result[3] += 0.23829787234042554;
          result[4] += 0.1148936170212766;
          result[5] += 0.3723404255319149;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0.05;
          result[2] += 0.2;
          result[3] += 0.1;
          result[4] += 0.55;
          result[5] += 0.1;
        } else {
          result[0] += 0.0273972602739726;
          result[1] += 0;
          result[2] += 0.0821917808219178;
          result[3] += 0.2328767123287671;
          result[4] += 0.0273972602739726;
          result[5] += 0.6301369863013698;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0.8641975308641975;
          result[4] += 0;
          result[5] += 0.09876543209876543;
        } else {
          result[0] += 0.013698630136986302;
          result[1] += 0;
          result[2] += 0.4657534246575343;
          result[3] += 0.32876712328767127;
          result[4] += 0;
          result[5] += 0.19178082191780824;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19047619047619047;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.23809523809523808;
        } else {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0.65625;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.0625;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.14285714285714285;
          result[2] += 0.4;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012;
          result[1] += 0;
          result[2] += 0.909;
          result[3] += 0.071;
          result[4] += 0;
          result[5] += 0.008;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.005917159763313609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9881656804733728;
          result[5] += 0.005917159763313609;
        } else {
          result[0] += 0.04225352112676056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.647887323943662;
          result[5] += 0.30985915492957744;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
          result[0] += 0.256198347107438;
          result[1] += 0.2066115702479339;
          result[2] += 0;
          result[3] += 0.0743801652892562;
          result[4] += 0.3305785123966942;
          result[5] += 0.1322314049586777;
        } else {
          result[0] += 0.006194690265486726;
          result[1] += 0.002654867256637168;
          result[2] += 0.007964601769911504;
          result[3] += 0.14690265486725665;
          result[4] += 0.04070796460176991;
          result[5] += 0.7955752212389381;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          result[0] += 0.08835341365461848;
          result[1] += 0.27309236947791166;
          result[2] += 0.024096385542168676;
          result[3] += 0.05220883534136546;
          result[4] += 0.5341365461847389;
          result[5] += 0.028112449799196786;
        } else {
          result[0] += 0.7581560283687944;
          result[1] += 0.010638297872340425;
          result[2] += 0.024113475177304965;
          result[3] += 0.06879432624113475;
          result[4] += 0.06382978723404255;
          result[5] += 0.07446808510638298;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101.5) ) ) {
          result[0] += 0.004830917874396135;
          result[1] += 0.9951690821256038;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.03773584905660377;
          result[2] += 0;
          result[3] += 0.11320754716981132;
          result[4] += 0.16981132075471697;
          result[5] += 0.6792452830188679;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09574468085106383;
          result[3] += 0.6914893617021277;
          result[4] += 0.010638297872340425;
          result[5] += 0.20212765957446807;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4444444444444444;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.5;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.03448275862068965;
          result[1] += 0.008620689655172412;
          result[2] += 0.6249999999999999;
          result[3] += 0.24137931034482754;
          result[4] += 0.012931034482758617;
          result[5] += 0.07758620689655171;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8138686131386861;
          result[3] += 0.16058394160583941;
          result[4] += 0.0072992700729927005;
          result[5] += 0.01824817518248175;
        } else {
          result[0] += 0.0017605633802816902;
          result[1] += 0;
          result[2] += 0.9841549295774648;
          result[3] += 0.01232394366197183;
          result[4] += 0;
          result[5] += 0.0017605633802816902;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.004629629629629629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953703703703703;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.07352941176470588;
          result[2] += 0;
          result[3] += 0.07352941176470588;
          result[4] += 0.5441176470588235;
          result[5] += 0.3088235294117647;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.044651162790697675;
          result[1] += 0.0009302325581395349;
          result[2] += 0;
          result[3] += 0.07069767441860465;
          result[4] += 0.07627906976744186;
          result[5] += 0.8074418604651162;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026905829596412557;
          result[3] += 0.57847533632287;
          result[4] += 0.017937219730941704;
          result[5] += 0.37668161434977576;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0.006637168141592921;
          result[1] += 0.9911504424778762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002212389380530974;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
          result[0] += 0.47778785131459645;
          result[1] += 0.04533091568449682;
          result[2] += 0.07524932003626472;
          result[3] += 0.13055303717135083;
          result[4] += 0.15321849501359924;
          result[5] += 0.11786038077969173;
        } else {
          result[0] += 0.899159663865546;
          result[1] += 0.028571428571428564;
          result[2] += 0.020168067226890754;
          result[3] += 0.01848739495798319;
          result[4] += 0.02521008403361344;
          result[5] += 0.008403361344537813;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16091954022988506;
          result[3] += 0.5977011494252874;
          result[4] += 0;
          result[5] += 0.2413793103448276;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.07142857142857142;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.01652892561983471;
          result[1] += 0;
          result[2] += 0.7851239669421488;
          result[3] += 0.17355371900826447;
          result[4] += 0;
          result[5] += 0.024793388429752067;
        } else {
          result[0] += 0.012857142857142857;
          result[1] += 0;
          result[2] += 0.96;
          result[3] += 0.025714285714285714;
          result[4] += 0;
          result[5] += 0.0014285714285714286;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.004310344827586208;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9612068965517242;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0.00903954802259887;
          result[2] += 0;
          result[3] += 0.03954802259887006;
          result[4] += 0.05536723163841808;
          result[5] += 0.8621468926553673;
        } else {
          result[0] += 0.0076726342710997444;
          result[1] += 0.005115089514066497;
          result[2] += 0.03836317135549872;
          result[3] += 0.4424552429667519;
          result[4] += 0.056265984654731455;
          result[5] += 0.45012787723785164;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9411764705882353;
          result[5] += 0;
        } else {
          result[0] += 0.005025125628140704;
          result[1] += 0.9798994974874372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01507537688442211;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7831957989497375;
          result[1] += 0.03375843960990248;
          result[2] += 0.024006001500375095;
          result[3] += 0.021005251312828207;
          result[4] += 0.1072768192048012;
          result[5] += 0.03075768942235559;
        } else {
          result[0] += 0.1359447004608295;
          result[1] += 0.004608294930875576;
          result[2] += 0.19815668202764977;
          result[3] += 0.3433179723502304;
          result[4] += 0.10599078341013825;
          result[5] += 0.2119815668202765;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.96;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36752136752136755;
          result[3] += 0.36752136752136755;
          result[4] += 0.008547008547008548;
          result[5] += 0.2564102564102564;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8277511961722488;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0.014354066985645933;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0079155672823219;
          result[1] += 0;
          result[2] += 0.9630606860158312;
          result[3] += 0.026385224274406333;
          result[4] += 0;
          result[5] += 0.002638522427440633;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0.008547008547008548;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9700854700854701;
          result[5] += 0.021367521367521368;
        } else {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.041666666666666664;
          result[3] += 0.3333333333333333;
          result[4] += 0.16666666666666666;
          result[5] += 0.4166666666666667;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.030204962243797196;
          result[1] += 0.0010787486515641855;
          result[2] += 0.0010787486515641855;
          result[3] += 0.037756202804746494;
          result[4] += 0.0744336569579288;
          result[5] += 0.8554476806903991;
        } else {
          result[0] += 0.046575342465753435;
          result[1] += 0.008219178082191782;
          result[2] += 0.0054794520547945215;
          result[3] += 0.4657534246575343;
          result[4] += 0.03835616438356165;
          result[5] += 0.4356164383561644;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0.004395604395604396;
          result[1] += 0.9846153846153847;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01098901098901099;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7872340425531915;
          result[1] += 0.04331306990881459;
          result[2] += 0.012917933130699088;
          result[3] += 0.0243161094224924;
          result[4] += 0.10866261398176291;
          result[5] += 0.023556231003039513;
        } else {
          result[0] += 0.16389548693586697;
          result[1] += 0.023752969121140142;
          result[2] += 0.27790973871733965;
          result[3] += 0.28028503562945367;
          result[4] += 0.09026128266033254;
          result[5] += 0.16389548693586697;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11538461538461539;
          result[4] += 0.23076923076923078;
          result[5] += 0.6538461538461539;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.029850746268656716;
          result[2] += 0.3656716417910448;
          result[3] += 0.5;
          result[4] += 0.014925373134328358;
          result[5] += 0.08955223880597014;
        } else {
          result[0] += 0.17073170731707318;
          result[1] += 0.024390243902439025;
          result[2] += 0.7804878048780488;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.024390243902439025;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0.8786407766990292;
          result[3] += 0.10436893203883495;
          result[4] += 0;
          result[5] += 0.012135922330097087;
        } else {
          result[0] += 0.004597701149425287;
          result[1] += 0;
          result[2] += 0.9747126436781609;
          result[3] += 0.020689655172413793;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0.003861003861003861;
          result[1] += 0.10038610038610038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8764478764478765;
          result[5] += 0.019305019305019305;
        } else {
          result[0] += 0.5131578947368421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.039473684210526314;
          result[4] += 0.18421052631578946;
          result[5] += 0.2631578947368421;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.0021668472372697724;
          result[1] += 0.0010834236186348862;
          result[2] += 0.0032502708559046588;
          result[3] += 0.044420368364030335;
          result[4] += 0.08775731310942579;
          result[5] += 0.8613217768147345;
        } else {
          result[0] += 0.0223463687150838;
          result[1] += 0;
          result[2] += 0.0670391061452514;
          result[3] += 0.42178770949720673;
          result[4] += 0.013966480446927373;
          result[5] += 0.4748603351955307;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0196078431372549;
          result[1] += 0.058823529411764705;
          result[2] += 0.0196078431372549;
          result[3] += 0.0196078431372549;
          result[4] += 0.7647058823529411;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.0024096385542168677;
          result[1] += 0.9855421686746988;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012048192771084338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.05917159763313609;
          result[1] += 0.40236686390532544;
          result[2] += 0.04142011834319527;
          result[3] += 0.09467455621301775;
          result[4] += 0.28402366863905326;
          result[5] += 0.11834319526627218;
        } else {
          result[0] += 0.7757951900698216;
          result[1] += 0.007757951900698216;
          result[2] += 0.04965089216446858;
          result[3] += 0.06516679596586501;
          result[4] += 0.04654771140418929;
          result[5] += 0.05508145849495733;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0297029702970297;
          result[3] += 0.15841584158415842;
          result[4] += 0.19801980198019803;
          result[5] += 0.6138613861386139;
        } else {
          result[0] += 0;
          result[1] += 0.0425531914893617;
          result[2] += 0.13829787234042554;
          result[3] += 0.6276595744680851;
          result[4] += 0;
          result[5] += 0.19148936170212766;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5333333333333333;
          result[4] += 0.06666666666666667;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0.10714285714285714;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)114.5) ) ) {
          result[0] += 0.47368421052631576;
          result[1] += 0.07894736842105263;
          result[2] += 0.3684210526315789;
          result[3] += 0;
          result[4] += 0.07894736842105263;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7579617834394905;
          result[3] += 0.21019108280254778;
          result[4] += 0.012738853503184714;
          result[5] += 0.01910828025477707;
        } else {
          result[0] += 0.007112375533428166;
          result[1] += 0;
          result[2] += 0.9530583214793742;
          result[3] += 0.0384068278805121;
          result[4] += 0;
          result[5] += 0.0014224751066856333;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9846743295019157;
          result[5] += 0.01532567049808429;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0049504950495049506;
          result[1] += 0.0009900990099009901;
          result[2] += 0.0009900990099009901;
          result[3] += 0.06930693069306931;
          result[4] += 0.05148514851485148;
          result[5] += 0.8722772277227723;
        } else {
          result[0] += 0.02546296296296296;
          result[1] += 0.03009259259259259;
          result[2] += 0.011574074074074073;
          result[3] += 0.43287037037037035;
          result[4] += 0.10416666666666667;
          result[5] += 0.3958333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0.30612244897959184;
          result[2] += 0.02040816326530612;
          result[3] += 0.02040816326530612;
          result[4] += 0.5918367346938775;
          result[5] += 0.04081632653061224;
        } else {
          result[0] += 0.006896551724137931;
          result[1] += 0.9839080459770115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009195402298850575;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8425681618293756;
          result[1] += 0.032541776605101144;
          result[2] += 0.0008795074758135445;
          result[3] += 0.023746701846965697;
          result[4] += 0.0853122251539138;
          result[5] += 0.014951627088830254;
        } else {
          result[0] += 0.296875;
          result[1] += 0.015625;
          result[2] += 0.18229166666666666;
          result[3] += 0.1875;
          result[4] += 0.046875;
          result[5] += 0.2708333333333333;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0.23214285714285715;
          result[3] += 0.5267857142857143;
          result[4] += 0.017857142857142856;
          result[5] += 0.1875;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.018018018018018018;
          result[2] += 0.6216216216216216;
          result[3] += 0.1981981981981982;
          result[4] += 0.06306306306306306;
          result[5] += 0.07207207207207207;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0.058823529411764705;
          result[2] += 0.4117647058823529;
          result[3] += 0.14705882352941177;
          result[4] += 0;
          result[5] += 0.35294117647058826;
        } else {
          result[0] += 0.019148936170212766;
          result[1] += 0;
          result[2] += 0.9202127659574468;
          result[3] += 0.05531914893617021;
          result[4] += 0;
          result[5] += 0.005319148936170213;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.029535864978902954;
          result[2] += 0;
          result[3] += 0.004219409282700422;
          result[4] += 0.9324894514767933;
          result[5] += 0.03375527426160337;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19230769230769232;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0028776978417266188;
          result[3] += 0.025899280575539568;
          result[4] += 0.01870503597122302;
          result[5] += 0.9525179856115108;
        } else {
          result[0] += 0.014625228519195612;
          result[1] += 0.04021937842778794;
          result[2] += 0.005484460694698354;
          result[3] += 0.360146252285192;
          result[4] += 0.06398537477148081;
          result[5] += 0.5155393053016454;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7140845070422536;
          result[1] += 0.06619718309859154;
          result[2] += 0.014788732394366197;
          result[3] += 0.035211267605633804;
          result[4] += 0.13732394366197184;
          result[5] += 0.0323943661971831;
        } else {
          result[0] += 0.1462140992167102;
          result[1] += 0.013054830287206266;
          result[2] += 0.1671018276762402;
          result[3] += 0.2584856396866841;
          result[4] += 0.13577023498694518;
          result[5] += 0.2793733681462141;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.9946524064171123;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0053475935828877;
          result[5] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13846153846153847;
          result[3] += 0.6923076923076923;
          result[4] += 0;
          result[5] += 0.16923076923076924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)118.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.746268656716418;
          result[3] += 0.16417910447761194;
          result[4] += 0;
          result[5] += 0.08955223880597014;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.01098901098901099;
          result[1] += 0;
          result[2] += 0.8131868131868132;
          result[3] += 0.14560439560439561;
          result[4] += 0;
          result[5] += 0.03021978021978022;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037735849056603774;
          result[1] += 0;
          result[2] += 0.9735849056603774;
          result[3] += 0.020754716981132074;
          result[4] += 0;
          result[5] += 0.0018867924528301887;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0.00796812749003984;
          result[1] += 0.00398406374501992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9601593625498008;
          result[5] += 0.027888446215139442;
        } else {
          result[0] += 0.3162393162393162;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017094017094017096;
          result[4] += 0.28205128205128205;
          result[5] += 0.38461538461538464;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001218026796589525;
          result[3] += 0.03654080389768575;
          result[4] += 0.04628501827040195;
          result[5] += 0.9159561510353228;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0.0893854748603352;
          result[2] += 0.019553072625698324;
          result[3] += 0.3715083798882682;
          result[4] += 0.03910614525139665;
          result[5] += 0.4748603351955307;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          result[0] += 0.22082018927444794;
          result[1] += 0.03470031545741325;
          result[2] += 0.01892744479495268;
          result[3] += 0.2302839116719243;
          result[4] += 0.19242902208201892;
          result[5] += 0.3028391167192429;
        } else {
          result[0] += 0.737984496124031;
          result[1] += 0.01937984496124031;
          result[2] += 0.06589147286821706;
          result[3] += 0.05891472868217054;
          result[4] += 0.09767441860465116;
          result[5] += 0.020155038759689922;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05660377358490566;
          result[3] += 0;
          result[4] += 0.32075471698113206;
          result[5] += 0.6226415094339622;
        } else {
          result[0] += 0;
          result[1] += 0.012658227848101266;
          result[2] += 0.0379746835443038;
          result[3] += 0.7974683544303798;
          result[4] += 0;
          result[5] += 0.1518987341772152;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.12121212121212122;
          result[2] += 0.030303030303030304;
          result[3] += 0.06060606060606061;
          result[4] += 0.24242424242424243;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0;
          result[1] += 0.007936507936507936;
          result[2] += 0.6587301587301587;
          result[3] += 0.2777777777777778;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.2777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.842911877394636;
          result[3] += 0.13793103448275862;
          result[4] += 0;
          result[5] += 0.019157088122605363;
        } else {
          result[0] += 0.012364760432766615;
          result[1] += 0;
          result[2] += 0.9613601236476044;
          result[3] += 0.021638330757341576;
          result[4] += 0;
          result[5] += 0.00463678516228748;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037735849056603774;
          result[1] += 0.007547169811320755;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8981132075471698;
          result[5] += 0.09056603773584905;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.05938494167550371;
          result[1] += 0.008483563096500531;
          result[2] += 0;
          result[3] += 0.033934252386002124;
          result[4] += 0.04665959703075292;
          result[5] += 0.8515376458112407;
        } else {
          result[0] += 0.03209876543209877;
          result[1] += 0;
          result[2] += 0.05432098765432099;
          result[3] += 0.4765432098765432;
          result[4] += 0;
          result[5] += 0.43703703703703706;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.7083333333333334;
          result[2] += 0;
          result[3] += 0.041666666666666664;
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
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7665903890160184;
          result[1] += 0.06254767353165525;
          result[2] += 0.010678871090770406;
          result[3] += 0.027459954233409613;
          result[4] += 0.11975591151792526;
          result[5] += 0.012967200610221207;
        } else {
          result[0] += 0.15529411764705883;
          result[1] += 0.018823529411764704;
          result[2] += 0.24;
          result[3] += 0.25176470588235295;
          result[4] += 0.07764705882352942;
          result[5] += 0.2564705882352941;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.3076923076923077;
          result[2] += 0.02564102564102564;
          result[3] += 0;
          result[4] += 0.48717948717948717;
          result[5] += 0.1794871794871795;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0.08823529411764706;
          result[2] += 0.029411764705882353;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0.7647058823529411;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.05714285714285715;
          result[1] += 0;
          result[2] += 0.4285714285714286;
          result[3] += 0.28571428571428575;
          result[4] += 0;
          result[5] += 0.2285714285714286;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22222222222222224;
          result[3] += 0.5000000000000001;
          result[4] += 0.11111111111111112;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6888888888888889;
          result[3] += 0.2777777777777778;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.016025641025641028;
          result[1] += 0;
          result[2] += 0.8717948717948719;
          result[3] += 0.09935897435897437;
          result[4] += 0;
          result[5] += 0.012820512820512822;
        } else {
          result[0] += 0.006289308176100629;
          result[1] += 0;
          result[2] += 0.9727463312368972;
          result[3] += 0.014675052410901468;
          result[4] += 0;
          result[5] += 0.006289308176100629;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.015564202334630352;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9416342412451363;
          result[5] += 0.04280155642023347;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02176278563656148;
          result[1] += 0.004352557127312296;
          result[2] += 0.001088139281828074;
          result[3] += 0.04570184983677911;
          result[4] += 0.06311207834602829;
          result[5] += 0.8639825897714908;
        } else {
          result[0] += 0.07859078590785908;
          result[1] += 0.04607046070460705;
          result[2] += 0.032520325203252036;
          result[3] += 0.4146341463414634;
          result[4] += 0.05420054200542006;
          result[5] += 0.37398373983739835;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.9734939759036144;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.021686746987951807;
          result[5] += 0.004819277108433735;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7477744807121661;
          result[1] += 0.04154302670623145;
          result[2] += 0;
          result[3] += 0.021513353115727003;
          result[4] += 0.1298219584569733;
          result[5] += 0.05934718100890208;
        } else {
          result[0] += 0.1760204081632653;
          result[1] += 0.007653061224489796;
          result[2] += 0.25255102040816324;
          result[3] += 0.33418367346938777;
          result[4] += 0.03571428571428571;
          result[5] += 0.19387755102040816;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.16;
          result[3] += 0.14;
          result[4] += 0.08;
          result[5] += 0.58;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1095890410958904;
          result[3] += 0.7671232876712328;
          result[4] += 0;
          result[5] += 0.1232876712328767;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.10344827586206896;
          result[2] += 0.41379310344827586;
          result[3] += 0.41379310344827586;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9459459459459459;
          result[3] += 0.02702702702702703;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4186046511627908;
          result[3] += 0.5348837209302326;
          result[4] += 0;
          result[5] += 0.04651162790697675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9444444444444444;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01764705882352941;
          result[1] += 0;
          result[2] += 0.9188235294117647;
          result[3] += 0.05647058823529412;
          result[4] += 0;
          result[5] += 0.007058823529411765;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010238907849829351;
          result[1] += 0.013651877133105802;
          result[2] += 0.023890784982935155;
          result[3] += 0.027303754266211604;
          result[4] += 0.8737201365187713;
          result[5] += 0.051194539249146756;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0.07784431137724551;
          result[1] += 0.009409751924721984;
          result[2] += 0.00855431993156544;
          result[3] += 0.06843455945252352;
          result[4] += 0.09923011120615911;
          result[5] += 0.7365269461077845;
        } else {
          result[0] += 0.0043668122270742364;
          result[1] += 0.02183406113537118;
          result[2] += 0.008733624454148473;
          result[3] += 0.6986899563318778;
          result[4] += 0.030567685589519653;
          result[5] += 0.23580786026200876;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.021505376344086023;
          result[1] += 0.23655913978494625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7311827956989247;
          result[5] += 0.010752688172043012;
        } else {
          result[0] += 0;
          result[1] += 0.9707317073170731;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02926829268292683;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8006509357200978;
          result[1] += 0.021155410903173313;
          result[2] += 0.015459723352318962;
          result[3] += 0.030919446704637924;
          result[4] += 0.0659072416598861;
          result[5] += 0.0659072416598861;
        } else {
          result[0] += 0.156794425087108;
          result[1] += 0.020905923344947737;
          result[2] += 0.25435540069686413;
          result[3] += 0.24390243902439024;
          result[4] += 0.08013937282229965;
          result[5] += 0.24390243902439024;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.061224489795918366;
          result[3] += 0.8163265306122449;
          result[4] += 0;
          result[5] += 0.12244897959183673;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47368421052631576;
          result[3] += 0.3684210526315789;
          result[4] += 0;
          result[5] += 0.15789473684210525;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          result[0] += 0.046153846153846156;
          result[1] += 0;
          result[2] += 0.47692307692307695;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.00641025641025641;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.00641025641025641;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037688442211055275;
          result[1] += 0;
          result[2] += 0.9535175879396985;
          result[3] += 0.04020100502512563;
          result[4] += 0;
          result[5] += 0.002512562814070352;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995;
          result[5] += 0.005;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12;
          result[4] += 0.56;
          result[5] += 0.32;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0.84375;
          result[5] += 0.0625;
        } else {
          result[0] += 0.04807692307692308;
          result[1] += 0.0017482517482517483;
          result[2] += 0.0026223776223776225;
          result[3] += 0.07604895104895106;
          result[4] += 0.04283216783216783;
          result[5] += 0.8286713286713286;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015463917525773196;
          result[3] += 0.7371134020618557;
          result[4] += 0;
          result[5] += 0.24742268041237114;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0.725;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.4910714285714286;
          result[2] += 0;
          result[3] += 0.026785714285714288;
          result[4] += 0.47321428571428575;
          result[5] += 0.00892857142857143;
        } else {
          result[0] += 0.0069605568445475635;
          result[1] += 0.9860788863109049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0069605568445475635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.05681818181818182;
          result[1] += 0.5113636363636365;
          result[2] += 0.02272727272727273;
          result[3] += 0.034090909090909095;
          result[4] += 0.35227272727272735;
          result[5] += 0.02272727272727273;
        } else {
          result[0] += 0.8193146417445485;
          result[1] += 0.0015576323987538945;
          result[2] += 0.03582554517133957;
          result[3] += 0.0560747663551402;
          result[4] += 0.057632398753894094;
          result[5] += 0.029595015576323994;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0.04109589041095891;
          result[1] += 0.006849315068493151;
          result[2] += 0.08904109589041097;
          result[3] += 0.3972602739726028;
          result[4] += 0.15753424657534248;
          result[5] += 0.30821917808219185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5658914728682171;
          result[3] += 0.31007751937984496;
          result[4] += 0;
          result[5] += 0.12403100775193798;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.22;
          result[1] += 0.04;
          result[2] += 0.28;
          result[3] += 0.16;
          result[4] += 0.12;
          result[5] += 0.18;
        } else {
          result[0] += 0.006578947368421052;
          result[1] += 0;
          result[2] += 0.9144736842105263;
          result[3] += 0.07017543859649122;
          result[4] += 0;
          result[5] += 0.008771929824561403;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.017391304347826087;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9434782608695652;
          result[5] += 0.0391304347826087;
        } else {
          result[0] += 0.30357142857142855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19642857142857142;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.7961165048543689;
          result[1] += 0.009708737864077669;
          result[2] += 0;
          result[3] += 0.038834951456310676;
          result[4] += 0.11650485436893204;
          result[5] += 0.038834951456310676;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01884057971014493;
          result[4] += 0.030434782608695653;
          result[5] += 0.9507246376811594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.017191977077363897;
          result[1] += 0.02005730659025788;
          result[2] += 0;
          result[3] += 0.17765042979942694;
          result[4] += 0.1489971346704871;
          result[5] += 0.6361031518624641;
        } else {
          result[0] += 0.003236245954692557;
          result[1] += 0.006472491909385114;
          result[2] += 0.05177993527508091;
          result[3] += 0.6245954692556634;
          result[4] += 0.025889967637540454;
          result[5] += 0.28802588996763756;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.007692307692307693;
          result[1] += 0.3923076923076923;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9137931034482759;
          result[1] += 0.009578544061302681;
          result[2] += 0.0019157088122605363;
          result[3] += 0.01053639846743295;
          result[4] += 0.05842911877394636;
          result[5] += 0.005747126436781609;
        } else {
          result[0] += 0.25;
          result[1] += 0.020833333333333332;
          result[2] += 0.12083333333333333;
          result[3] += 0.2125;
          result[4] += 0.12916666666666668;
          result[5] += 0.26666666666666666;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22950819672131148;
          result[3] += 0.5573770491803278;
          result[4] += 0.01639344262295082;
          result[5] += 0.19672131147540983;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6341463414634146;
          result[3] += 0.1951219512195122;
          result[4] += 0;
          result[5] += 0.17073170731707318;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6097560975609756;
          result[1] += 0.12195121951219512;
          result[2] += 0.1951219512195122;
          result[3] += 0.04878048780487805;
          result[4] += 0.024390243902439025;
          result[5] += 0;
        } else {
          result[0] += 0.013618677042801557;
          result[1] += 0.007782101167315175;
          result[2] += 0.8832684824902723;
          result[3] += 0.07976653696498054;
          result[4] += 0.0019455252918287938;
          result[5] += 0.013618677042801557;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9752066115702479;
          result[5] += 0.024793388429752067;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02264600715137068;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03814064362336114;
          result[4] += 0.057210965435041714;
          result[5] += 0.8820023837902264;
        } else {
          result[0] += 0.06631299734748013;
          result[1] += 0.10875331564986739;
          result[2] += 0.061007957559681705;
          result[3] += 0.34482758620689663;
          result[4] += 0.03978779840848807;
          result[5] += 0.37931034482758624;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.22900763358778625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7709923664122137;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9724137931034482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027586206896551724;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0.3448773448773449;
          result[1] += 0.024531024531024532;
          result[2] += 0.06637806637806638;
          result[3] += 0.21645021645021645;
          result[4] += 0.09956709956709957;
          result[5] += 0.2481962481962482;
        } else {
          result[0] += 0.8352601156069362;
          result[1] += 0.003853564547206165;
          result[2] += 0.06069364161849709;
          result[3] += 0.028901734104046235;
          result[4] += 0.0655105973025048;
          result[5] += 0.005780346820809247;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.05128205128205128;
          result[4] += 0.10256410256410256;
          result[5] += 0.8205128205128205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24528301886792453;
          result[3] += 0.4339622641509434;
          result[4] += 0.03773584905660377;
          result[5] += 0.2830188679245283;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9130434782608696;
          result[3] += 0.04347826086956522;
          result[4] += 0;
          result[5] += 0.04347826086956522;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8888888888888888;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0.014223194748358862;
          result[1] += 0.002188183807439825;
          result[2] += 0.9080962800875274;
          result[3] += 0.06892778993435449;
          result[4] += 0;
          result[5] += 0.006564551422319475;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.00819672131147541;
          result[1] += 0.00819672131147541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9221311475409836;
          result[5] += 0.06147540983606557;
        } else {
          result[0] += 0.39316239316239315;
          result[1] += 0;
          result[2] += 0.008547008547008548;
          result[3] += 0.10256410256410256;
          result[4] += 0.28205128205128205;
          result[5] += 0.21367521367521367;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.003218884120171674;
          result[2] += 0.002145922746781116;
          result[3] += 0.048283261802575105;
          result[4] += 0.09763948497854077;
          result[5] += 0.8487124463519313;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029850746268656716;
          result[3] += 0.458955223880597;
          result[4] += 0.014925373134328358;
          result[5] += 0.4962686567164179;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
          result[0] += 0.007194244604316547;
          result[1] += 0.973621103117506;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019184652278177457;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.20967741935483872;
          result[2] += 0;
          result[3] += 0.008064516129032258;
          result[4] += 0.7580645161290323;
          result[5] += 0.024193548387096774;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8283828382838284;
          result[1] += 0.05115511551155116;
          result[2] += 0.0024752475247524753;
          result[3] += 0.017326732673267328;
          result[4] += 0.08415841584158416;
          result[5] += 0.0165016501650165;
        } else {
          result[0] += 0.24666666666666667;
          result[1] += 0.013333333333333334;
          result[2] += 0.16333333333333333;
          result[3] += 0.23333333333333334;
          result[4] += 0.043333333333333335;
          result[5] += 0.3;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1320754716981132;
          result[3] += 0.7547169811320755;
          result[4] += 0;
          result[5] += 0.11320754716981132;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8709677419354839;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
          result[0] += 0.027972027972027972;
          result[1] += 0;
          result[2] += 0.5734265734265734;
          result[3] += 0.26573426573426573;
          result[4] += 0;
          result[5] += 0.13286713286713286;
        } else {
          result[0] += 0.031088082901554404;
          result[1] += 0;
          result[2] += 0.8549222797927462;
          result[3] += 0.10362694300518134;
          result[4] += 0;
          result[5] += 0.010362694300518135;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.09523809523809523;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9597701149425287;
          result[3] += 0.040229885057471264;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.006269592476489028;
          result[1] += 0.018808777429467086;
          result[2] += 0.003134796238244514;
          result[3] += 0.025078369905956112;
          result[4] += 0.8652037617554859;
          result[5] += 0.08150470219435736;
        } else {
          result[0] += 0.7819905213270143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009478672985781993;
          result[4] += 0.1137440758293839;
          result[5] += 0.09478672985781991;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0010362694300518134;
          result[1] += 0.0010362694300518134;
          result[2] += 0.0031088082901554403;
          result[3] += 0.058031088082901555;
          result[4] += 0.07253886010362694;
          result[5] += 0.8642487046632125;
        } else {
          result[0] += 0.008;
          result[1] += 0.022;
          result[2] += 0.03;
          result[3] += 0.476;
          result[4] += 0.058;
          result[5] += 0.406;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9923469387755102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007653061224489796;
          result[5] += 0;
        } else {
          result[0] += 0.015151515151515152;
          result[1] += 0.4318181818181818;
          result[2] += 0.015151515151515152;
          result[3] += 0;
          result[4] += 0.5303030303030303;
          result[5] += 0.007575757575757576;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.5243553008595988;
          result[1] += 0.017191977077363897;
          result[2] += 0.13753581661891118;
          result[3] += 0.16045845272206305;
          result[4] += 0.05730659025787966;
          result[5] += 0.10315186246418338;
        } else {
          result[0] += 0.8904109589041097;
          result[1] += 0.020547945205479454;
          result[2] += 0.02853881278538813;
          result[3] += 0.004566210045662101;
          result[4] += 0.053652968036529684;
          result[5] += 0.0022831050228310505;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.61139896373057;
          result[3] += 0.305699481865285;
          result[4] += 0;
          result[5] += 0.0829015544041451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.90625;
          result[3] += 0.0859375;
          result[4] += 0;
          result[5] += 0.0078125;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.005865102639296188;
          result[1] += 0;
          result[2] += 0.9501466275659824;
          result[3] += 0.039589442815249266;
          result[4] += 0;
          result[5] += 0.004398826979472141;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)118.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.0044444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9866666666666667;
          result[5] += 0.008888888888888889;
        } else {
          result[0] += 0.7205882352941176;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0.10294117647058823;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.004026845637583893;
          result[2] += 0.0026845637583892616;
          result[3] += 0.0348993288590604;
          result[4] += 0.06174496644295302;
          result[5] += 0.8966442953020134;
        } else {
          result[0] += 0;
          result[1] += 0.008528784648187633;
          result[2] += 0.010660980810234541;
          result[3] += 0.32409381663113007;
          result[4] += 0.08955223880597014;
          result[5] += 0.5671641791044776;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.23404255319148937;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7659574468085106;
          result[5] += 0;
        } else {
          result[0] += 0.011848341232227487;
          result[1] += 0.9739336492890995;
          result[2] += 0;
          result[3] += 0.004739336492890996;
          result[4] += 0.009478672985781991;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.07092198581560286;
          result[1] += 0.4468085106382979;
          result[2] += 0;
          result[3] += 0.007092198581560284;
          result[4] += 0.4326241134751774;
          result[5] += 0.04255319148936171;
        } else {
          result[0] += 0.7634560906515581;
          result[1] += 0.012747875354107648;
          result[2] += 0.036827195467422094;
          result[3] += 0.07294617563739376;
          result[4] += 0.058781869688385266;
          result[5] += 0.05524079320113314;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.028985507246376812;
          result[1] += 0.057971014492753624;
          result[2] += 0.07246376811594203;
          result[3] += 0.17391304347826086;
          result[4] += 0.07246376811594203;
          result[5] += 0.5942028985507246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.049019607843137254;
          result[3] += 0.6764705882352942;
          result[4] += 0.0196078431372549;
          result[5] += 0.2549019607843137;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.0032362459546925572;
          result[1] += 0;
          result[2] += 0.6957928802588997;
          result[3] += 0.24271844660194178;
          result[4] += 0;
          result[5] += 0.05825242718446603;
        } else {
          result[0] += 0.5846153846153846;
          result[1] += 0.046153846153846156;
          result[2] += 0.27692307692307694;
          result[3] += 0.07692307692307693;
          result[4] += 0.015384615384615385;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8616352201257862;
          result[3] += 0.1320754716981132;
          result[4] += 0;
          result[5] += 0.006289308176100629;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9778911564625851;
          result[3] += 0.017006802721088437;
          result[4] += 0;
          result[5] += 0.00510204081632653;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.043478260869565216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9468599033816425;
          result[5] += 0.00966183574879227;
        } else {
          result[0] += 0.576923076923077;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03846153846153847;
          result[4] += 0.29487179487179493;
          result[5] += 0.08974358974358976;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0029469548133595285;
          result[1] += 0.03339882121807466;
          result[2] += 0;
          result[3] += 0.05304518664047151;
          result[4] += 0.06385068762278978;
          result[5] += 0.8467583497053045;
        } else {
          result[0] += 0.014705882352941176;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6617647058823529;
          result[4] += 0;
          result[5] += 0.3235294117647059;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 0.9787234042553191;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02127659574468085;
          result[5] += 0;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0.2564102564102564;
          result[2] += 0.017094017094017096;
          result[3] += 0.05128205128205128;
          result[4] += 0.6495726495726496;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8257261410788381;
          result[1] += 0.030705394190871368;
          result[2] += 0;
          result[3] += 0.02074688796680498;
          result[4] += 0.11120331950207468;
          result[5] += 0.011618257261410789;
        } else {
          result[0] += 0.20630372492836677;
          result[1] += 0.008595988538681949;
          result[2] += 0.18624641833810887;
          result[3] += 0.20916905444126074;
          result[4] += 0.05730659025787966;
          result[5] += 0.332378223495702;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.06;
          result[1] += 0.12;
          result[2] += 0;
          result[3] += 0.12;
          result[4] += 0.08;
          result[5] += 0.62;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14084507042253522;
          result[3] += 0.6408450704225352;
          result[4] += 0.014084507042253521;
          result[5] += 0.20422535211267606;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0.25;
          result[2] += 0.14583333333333334;
          result[3] += 0.16666666666666666;
          result[4] += 0.0625;
          result[5] += 0.3125;
        } else {
          result[0] += 0.0546875;
          result[1] += 0.015625;
          result[2] += 0.71875;
          result[3] += 0.046875;
          result[4] += 0.0078125;
          result[5] += 0.15625;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.6666666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.7407407407407407;
          result[1] += 0;
          result[2] += 0.25925925925925924;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0022935779816513763;
          result[1] += 0;
          result[2] += 0.911697247706422;
          result[3] += 0.07454128440366972;
          result[4] += 0;
          result[5] += 0.011467889908256881;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
          result[0] += 0.011320754716981131;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9320754716981132;
          result[5] += 0.05660377358490566;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.04231166150670795;
          result[1] += 0.0030959752321981426;
          result[2] += 0;
          result[3] += 0.0412796697626419;
          result[4] += 0.06501547987616099;
          result[5] += 0.848297213622291;
        } else {
          result[0] += 0.007853403141361256;
          result[1] += 0.002617801047120419;
          result[2] += 0.007853403141361256;
          result[3] += 0.4895287958115183;
          result[4] += 0.02617801047120419;
          result[5] += 0.46596858638743455;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.16216216216216217;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8378378378378378;
          result[5] += 0;
        } else {
          result[0] += 0.0022271714922048997;
          result[1] += 0.9621380846325167;
          result[2] += 0.004454342984409799;
          result[3] += 0.0022271714922048997;
          result[4] += 0.028953229398663696;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7715231788079471;
          result[1] += 0.06788079470198675;
          result[2] += 0.0016556291390728477;
          result[3] += 0.02566225165562914;
          result[4] += 0.11258278145695365;
          result[5] += 0.020695364238410598;
        } else {
          result[0] += 0.13766233766233765;
          result[1] += 0.02077922077922078;
          result[2] += 0.22597402597402597;
          result[3] += 0.3194805194805195;
          result[4] += 0.033766233766233764;
          result[5] += 0.2623376623376623;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.30952380952380953;
          result[4] += 0;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8248175182481752;
          result[3] += 0.15693430656934307;
          result[4] += 0;
          result[5] += 0.01824817518248175;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0851063829787234;
          result[1] += 0;
          result[2] += 0.7872340425531915;
          result[3] += 0.1276595744680851;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0015527950310559007;
          result[1] += 0;
          result[2] += 0.9720496894409939;
          result[3] += 0.02329192546583851;
          result[4] += 0;
          result[5] += 0.0031055900621118015;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)31.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.015503875968992248;
          result[1] += 0.015503875968992248;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9198966408268734;
          result[5] += 0.04909560723514212;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5671641791044776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.43283582089552236;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.6470588235294117;
          result[1] += 0;
          result[2] += 0.05042016806722688;
          result[3] += 0;
          result[4] += 0.2016806722689075;
          result[5] += 0.10084033613445376;
        } else {
          result[0] += 0.0028790786948176585;
          result[1] += 0.0019193857965451055;
          result[2] += 0.003838771593090211;
          result[3] += 0.11612284069097889;
          result[4] += 0.052783109404990404;
          result[5] += 0.8224568138195777;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8477112676056339;
          result[1] += 0.02552816901408451;
          result[2] += 0;
          result[3] += 0.036091549295774655;
          result[4] += 0.05721830985915494;
          result[5] += 0.03345070422535212;
        } else {
          result[0] += 0.1488294314381271;
          result[1] += 0.013377926421404682;
          result[2] += 0.1605351170568562;
          result[3] += 0.3595317725752508;
          result[4] += 0.0451505016722408;
          result[5] += 0.2725752508361204;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1590909090909091;
          result[3] += 0.5909090909090909;
          result[4] += 0.022727272727272728;
          result[5] += 0.22727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.29629629629629634;
          result[3] += 0.29629629629629634;
          result[4] += 0.03703703703703704;
          result[5] += 0.3703703703703704;
        } else {
          result[0] += 0.018691588785046728;
          result[1] += 0.04672897196261682;
          result[2] += 0.794392523364486;
          result[3] += 0.102803738317757;
          result[4] += 0;
          result[5] += 0.037383177570093455;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9255319148936171;
          result[3] += 0.06382978723404256;
          result[4] += 0;
          result[5] += 0.010638297872340427;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0.8980582524271845;
          result[3] += 0.09223300970873786;
          result[4] += 0;
          result[5] += 0.0048543689320388345;
        } else {
          result[0] += 0.0021008403361344537;
          result[1] += 0;
          result[2] += 0.976890756302521;
          result[3] += 0.01680672268907563;
          result[4] += 0;
          result[5] += 0.004201680672268907;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
          result[0] += 0.004;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.956;
          result[5] += 0.04;
        } else {
          result[0] += 0;
          result[1] += 0.6538461538461539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.34615384615384615;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029769959404600813;
          result[4] += 0.02706359945872801;
          result[5] += 0.9431664411366711;
        } else {
          result[0] += 0.12406947890818859;
          result[1] += 0.02729528535980149;
          result[2] += 0.004962779156327543;
          result[3] += 0.2878411910669975;
          result[4] += 0.07692307692307693;
          result[5] += 0.47890818858560796;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9949874686716792;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005012531328320802;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3014705882352941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6985294117647058;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8259783513738551;
          result[1] += 0.02164862614487927;
          result[2] += 0.004163197335553705;
          result[3] += 0.029142381348875937;
          result[4] += 0.07826810990840966;
          result[5] += 0.04079933388842631;
        } else {
          result[0] += 0.17325227963525835;
          result[1] += 0.0121580547112462;
          result[2] += 0.20972644376899696;
          result[3] += 0.2948328267477204;
          result[4] += 0.06382978723404255;
          result[5] += 0.24620060790273557;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.05063291139240506;
          result[2] += 0.012658227848101266;
          result[3] += 0.11392405063291139;
          result[4] += 0.08860759493670886;
          result[5] += 0.7341772151898734;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.15384615384615385;
          result[2] += 0.6153846153846154;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.061855670103092786;
          result[3] += 0.7422680412371134;
          result[4] += 0.020618556701030927;
          result[5] += 0.17525773195876287;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6585365853658537;
          result[3] += 0.34146341463414637;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.044444444444444446;
          result[1] += 0.07407407407407407;
          result[2] += 0.2740740740740741;
          result[3] += 0.4074074074074074;
          result[4] += 0.02962962962962963;
          result[5] += 0.17037037037037037;
        } else {
          result[0] += 0.07563025210084033;
          result[1] += 0;
          result[2] += 0.8025210084033614;
          result[3] += 0.1092436974789916;
          result[4] += 0;
          result[5] += 0.012605042016806723;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.887434554973822;
          result[3] += 0.09947643979057591;
          result[4] += 0;
          result[5] += 0.013089005235602094;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9888268156424581;
          result[3] += 0.0111731843575419;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0.008264462809917356;
          result[1] += 0;
          result[2] += 0.012396694214876033;
          result[3] += 0;
          result[4] += 0.9462809917355371;
          result[5] += 0.03305785123966942;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03980099502487562;
          result[4] += 0.01990049751243781;
          result[5] += 0.9402985074626866;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.6041666666666666;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.020833333333333332;
          result[5] += 0;
        } else {
          result[0] += 0.0026246719160104987;
          result[1] += 0.028871391076115485;
          result[2] += 0.049868766404199474;
          result[3] += 0.3464566929133858;
          result[4] += 0.03674540682414698;
          result[5] += 0.5354330708661418;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9904076738609112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009592326139088728;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.052980132450331126;
          result[1] += 0.11258278145695365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7682119205298014;
          result[5] += 0.06622516556291391;
        } else {
          result[0] += 0.7245308310991957;
          result[1] += 0.00938337801608579;
          result[2] += 0.039544235924932974;
          result[3] += 0.09316353887399464;
          result[4] += 0.0596514745308311;
          result[5] += 0.07372654155495978;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
          result[0] += 0.019867549668874173;
          result[1] += 0.11258278145695365;
          result[2] += 0.26490066225165565;
          result[3] += 0.052980132450331126;
          result[4] += 0.2185430463576159;
          result[5] += 0.33112582781456956;
        } else {
          result[0] += 0.06363636363636364;
          result[1] += 0;
          result[2] += 0.29090909090909095;
          result[3] += 0.5818181818181819;
          result[4] += 0;
          result[5] += 0.06363636363636364;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.33;
          result[4] += 0;
          result[5] += 0.12;
        } else {
          result[0] += 0.014722536806342015;
          result[1] += 0;
          result[2] += 0.9377123442808607;
          result[3] += 0.045300113250283124;
          result[4] += 0;
          result[5] += 0.0022650056625141564;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)114.5) ) ) {
          result[0] += 0.0036496350364963502;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9854014598540146;
          result[5] += 0.010948905109489052;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0039603960396039604;
          result[1] += 0.0029702970297029703;
          result[2] += 0.0019801980198019802;
          result[3] += 0.06534653465346535;
          result[4] += 0.04455445544554455;
          result[5] += 0.8811881188118812;
        } else {
          result[0] += 0.00816326530612245;
          result[1] += 0.014285714285714285;
          result[2] += 0.05510204081632653;
          result[3] += 0.44693877551020406;
          result[4] += 0.07755102040816327;
          result[5] += 0.3979591836734694;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.40816326530612246;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5918367346938775;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9824945295404814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0175054704595186;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.03508771929824561;
          result[1] += 0.631578947368421;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.2807017543859649;
          result[5] += 0;
        } else {
          result[0] += 0.8767730496453902;
          result[1] += 0.01595744680851064;
          result[2] += 0.019503546099290784;
          result[3] += 0.016843971631205677;
          result[4] += 0.05407801418439717;
          result[5] += 0.016843971631205677;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.07246376811594203;
          result[2] += 0.10144927536231885;
          result[3] += 0.3333333333333333;
          result[4] += 0.10144927536231885;
          result[5] += 0.391304347826087;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5116279069767442;
          result[3] += 0.3875968992248062;
          result[4] += 0;
          result[5] += 0.10077519379844961;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.2830188679245283;
          result[1] += 0.09433962264150944;
          result[2] += 0.39622641509433965;
          result[3] += 0.09433962264150944;
          result[4] += 0.05660377358490566;
          result[5] += 0.07547169811320754;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0.9199561403508771;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.008771929824561403;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0091324200913242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9406392694063926;
          result[5] += 0.0502283105022831;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.35;
          result[4] += 0.1;
          result[5] += 0.15;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.036619718309859155;
          result[4] += 0.01971830985915493;
          result[5] += 0.9436619718309859;
        } else {
          result[0] += 0.06642728904847396;
          result[1] += 0.003590664272890485;
          result[2] += 0.00718132854578097;
          result[3] += 0.25493716337522443;
          result[4] += 0.118491921005386;
          result[5] += 0.5493716337522442;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.007042253521126761;
          result[1] += 0.16901408450704225;
          result[2] += 0;
          result[3] += 0.035211267605633804;
          result[4] += 0.7464788732394366;
          result[5] += 0.04225352112676056;
        } else {
          result[0] += 0;
          result[1] += 0.9777227722772277;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022277227722772276;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8318725099601594;
          result[1] += 0.03187250996015936;
          result[2] += 0.008764940239043825;
          result[3] += 0.024701195219123506;
          result[4] += 0.07649402390438247;
          result[5] += 0.026294820717131476;
        } else {
          result[0] += 0.23809523809523808;
          result[1] += 0.04081632653061224;
          result[2] += 0.14625850340136054;
          result[3] += 0.2687074829931973;
          result[4] += 0.06462585034013606;
          result[5] += 0.24149659863945577;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.7777777777777778;
          result[4] += 0;
          result[5] += 0.15555555555555556;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0.5294117647058824;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6352941176470588;
          result[3] += 0.23529411764705882;
          result[4] += 0.023529411764705882;
          result[5] += 0.10588235294117647;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6230769230769231;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0.03076923076923077;
        } else {
          result[0] += 0.02962962962962963;
          result[1] += 0;
          result[2] += 0.8518518518518519;
          result[3] += 0.0962962962962963;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0.47368421052631576;
          result[1] += 0;
          result[2] += 0.5263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010767160161507403;
          result[1] += 0;
          result[2] += 0.9421265141318977;
          result[3] += 0.047106325706594884;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0037174721189591076;
          result[1] += 0.08178438661710037;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9033457249070632;
          result[5] += 0.011152416356877323;
        } else {
          result[0] += 0.6327683615819211;
          result[1] += 0.028248587570621472;
          result[2] += 0;
          result[3] += 0.028248587570621472;
          result[4] += 0.09039548022598871;
          result[5] += 0.22033898305084748;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027127003699136867;
          result[4] += 0.07644882860665844;
          result[5] += 0.8964241676942046;
        } else {
          result[0] += 0.0625;
          result[1] += 0.003472222222222222;
          result[2] += 0.010416666666666666;
          result[3] += 0.3020833333333333;
          result[4] += 0.05555555555555555;
          result[5] += 0.5659722222222222;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.5625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4375;
          result[5] += 0;
        } else {
          result[0] += 0.004987531172069826;
          result[1] += 0.9875311720698255;
          result[2] += 0.002493765586034913;
          result[3] += 0;
          result[4] += 0.002493765586034913;
          result[5] += 0.002493765586034913;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0.18083182640144665;
          result[1] += 0.05786618444846293;
          result[2] += 0.08860759493670886;
          result[3] += 0.3345388788426763;
          result[4] += 0.08318264014466546;
          result[5] += 0.2549728752260398;
        } else {
          result[0] += 0.7694214876033059;
          result[1] += 0.03305785123966943;
          result[2] += 0.07768595041322315;
          result[3] += 0.0347107438016529;
          result[4] += 0.07851239669421489;
          result[5] += 0.006611570247933885;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0.18421052631578946;
          result[3] += 0.4605263157894737;
          result[4] += 0.013157894736842105;
          result[5] += 0.23684210526315788;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.17910447761194032;
          result[1] += 0.02985074626865672;
          result[2] += 0.701492537313433;
          result[3] += 0.02985074626865672;
          result[4] += 0;
          result[5] += 0.05970149253731344;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0.3235294117647059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7966804979253111;
          result[3] += 0.18672199170124482;
          result[4] += 0;
          result[5] += 0.016597510373443983;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9595015576323987;
          result[3] += 0.03115264797507788;
          result[4] += 0;
          result[5] += 0.009345794392523364;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9863636363636363;
          result[5] += 0.013636363636363636;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.05660377358490566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7358490566037735;
          result[5] += 0.20754716981132076;
        } else {
          result[0] += 0.7009345794392523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.056074766355140186;
          result[5] += 0.24299065420560748;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.1875;
        } else {
          result[0] += 0;
          result[1] += 0.001968503937007874;
          result[2] += 0;
          result[3] += 0.07283464566929133;
          result[4] += 0.05216535433070866;
          result[5] += 0.8730314960629921;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09900990099009903;
          result[3] += 0.23762376237623764;
          result[4] += 0.08910891089108912;
          result[5] += 0.5742574257425743;
        } else {
          result[0] += 0.008298755186721992;
          result[1] += 0.012448132780082987;
          result[2] += 0.03319502074688797;
          result[3] += 0.6846473029045643;
          result[4] += 0.029045643153526972;
          result[5] += 0.23236514522821577;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.03669724770642202;
          result[1] += 0.3486238532110092;
          result[2] += 0;
          result[3] += 0.027522935779816515;
          result[4] += 0.5779816513761468;
          result[5] += 0.009174311926605505;
        } else {
          result[0] += 0.0022371364653243847;
          result[1] += 0.9843400447427293;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013422818791946308;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8916299559471367;
          result[1] += 0.02731277533039648;
          result[2] += 0.002643171806167401;
          result[3] += 0.007048458149779737;
          result[4] += 0.06343612334801764;
          result[5] += 0.007929515418502205;
        } else {
          result[0] += 0.28169014084507044;
          result[1] += 0;
          result[2] += 0.20422535211267606;
          result[3] += 0.18309859154929578;
          result[4] += 0.18309859154929578;
          result[5] += 0.14788732394366197;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          result[0] += 0.0072992700729927005;
          result[1] += 0.0364963503649635;
          result[2] += 0.2773722627737226;
          result[3] += 0.19708029197080293;
          result[4] += 0.08029197080291971;
          result[5] += 0.40145985401459855;
        } else {
          result[0] += 0.06349206349206349;
          result[1] += 0.005291005291005291;
          result[2] += 0.6243386243386243;
          result[3] += 0.25396825396825395;
          result[4] += 0.005291005291005291;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7985611510791367;
          result[3] += 0.17985611510791366;
          result[4] += 0;
          result[5] += 0.02158273381294964;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0.9741100323624595;
          result[3] += 0.021035598705501618;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.01556420233463035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9727626459143969;
          result[5] += 0.011673151750972763;
        } else {
          result[0] += 0;
          result[1] += 0.4090909090909091;
          result[2] += 0;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03128258602711158;
          result[1] += 0.0010427528675703858;
          result[2] += 0.0010427528675703858;
          result[3] += 0.054223149113660066;
          result[4] += 0.08967674661105318;
          result[5] += 0.8227320125130344;
        } else {
          result[0] += 0.1078167115902965;
          result[1] += 0.03773584905660377;
          result[2] += 0.0215633423180593;
          result[3] += 0.4474393530997305;
          result[4] += 0.0646900269541779;
          result[5] += 0.32075471698113206;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7801476620180475;
          result[1] += 0.05988515176374077;
          result[2] += 0;
          result[3] += 0.026251025430680888;
          result[4] += 0.11484823625922888;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0.13682092555331993;
          result[1] += 0.026156941649899398;
          result[2] += 0.23541247484909456;
          result[3] += 0.2595573440643863;
          result[4] += 0.0482897384305835;
          result[5] += 0.2937625754527163;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.265625;
          result[3] += 0.0625;
          result[4] += 0.234375;
          result[5] += 0.421875;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.013698630136986302;
          result[1] += 0;
          result[2] += 0.3972602739726028;
          result[3] += 0.3972602739726028;
          result[4] += 0;
          result[5] += 0.19178082191780824;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.868421052631579;
          result[3] += 0.13157894736842105;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5581395348837209;
          result[3] += 0.36046511627906974;
          result[4] += 0;
          result[5] += 0.08139534883720931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.138996138996139;
          result[4] += 0;
          result[5] += 0.003861003861003861;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9715302491103203;
          result[3] += 0.028469750889679714;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02347417840375587;
          result[3] += 0.004694835680751175;
          result[4] += 0.9577464788732395;
          result[5] += 0.014084507042253523;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.023662551440329218;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.047325102880658436;
          result[4] += 0.0668724279835391;
          result[5] += 0.8621399176954733;
        } else {
          result[0] += 0.04533333333333334;
          result[1] += 0.064;
          result[2] += 0.034666666666666665;
          result[3] += 0.472;
          result[4] += 0.034666666666666665;
          result[5] += 0.34933333333333333;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9784688995215312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0215311004784689;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7725290697674418;
          result[1] += 0.042877906976744186;
          result[2] += 0.00944767441860465;
          result[3] += 0.024709302325581394;
          result[4] += 0.10610465116279069;
          result[5] += 0.04433139534883721;
        } else {
          result[0] += 0.19436619718309858;
          result[1] += 0;
          result[2] += 0.15774647887323945;
          result[3] += 0.3267605633802817;
          result[4] += 0.09295774647887324;
          result[5] += 0.22816901408450704;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09859154929577464;
          result[3] += 0.7464788732394366;
          result[4] += 0;
          result[5] += 0.15492957746478872;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.15254237288135594;
          result[2] += 0.13559322033898305;
          result[3] += 0.1694915254237288;
          result[4] += 0.05084745762711865;
          result[5] += 0.4915254237288136;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6935483870967742;
          result[3] += 0.16129032258064516;
          result[4] += 0.04838709677419355;
          result[5] += 0.0967741935483871;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
          result[0] += 0.010638297872340425;
          result[1] += 0;
          result[2] += 0.7836879432624113;
          result[3] += 0.1773049645390071;
          result[4] += 0;
          result[5] += 0.028368794326241134;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9737704918032787;
          result[3] += 0.022950819672131147;
          result[4] += 0;
          result[5] += 0.003278688524590164;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0.005649717514124295;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9887005649717515;
          result[5] += 0.005649717514124295;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.6896551724137931;
          result[5] += 0.20689655172413793;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0.125;
        } else {
          result[0] += 0.8936170212765957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10638297872340426;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.868421052631579;
          result[5] += 0.13157894736842105;
        } else {
          result[0] += 0.001184834123222749;
          result[1] += 0.001184834123222749;
          result[2] += 0.0035545023696682463;
          result[3] += 0.04265402843601896;
          result[4] += 0.04976303317535545;
          result[5] += 0.9016587677725119;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0228310502283105;
          result[3] += 0.182648401826484;
          result[4] += 0.1004566210045662;
          result[5] += 0.6940639269406392;
        } else {
          result[0] += 0;
          result[1] += 0.015463917525773196;
          result[2] += 0.02577319587628866;
          result[3] += 0.7268041237113402;
          result[4] += 0;
          result[5] += 0.23195876288659795;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9937238493723849;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006276150627615063;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.15827338129496404;
          result[1] += 0.12230215827338131;
          result[2] += 0;
          result[3] += 0.007194244604316548;
          result[4] += 0.7050359712230216;
          result[5] += 0.007194244604316548;
        } else {
          result[0] += 0.7737068965517242;
          result[1] += 0.01580459770114943;
          result[2] += 0.04094827586206897;
          result[3] += 0.0581896551724138;
          result[4] += 0.04454022988505748;
          result[5] += 0.06681034482758622;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.018604651162790697;
          result[1] += 0.08837209302325581;
          result[2] += 0.14883720930232558;
          result[3] += 0.4558139534883721;
          result[4] += 0.06976744186046512;
          result[5] += 0.2186046511627907;
        } else {
          result[0] += 0.1098901098901099;
          result[1] += 0;
          result[2] += 0.7802197802197803;
          result[3] += 0.07692307692307694;
          result[4] += 0;
          result[5] += 0.032967032967032975;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.35714285714285715;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0.006741573033707866;
          result[1] += 0;
          result[2] += 0.9168539325842697;
          result[3] += 0.07191011235955058;
          result[4] += 0;
          result[5] += 0.004494382022471911;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0.009259259259259259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9814814814814815;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0;
          result[4] += 0.5813953488372093;
          result[5] += 0.3953488372093023;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          result[0] += 0.01437908496732026;
          result[1] += 0.00261437908496732;
          result[2] += 0.00130718954248366;
          result[3] += 0.027450980392156862;
          result[4] += 0.0392156862745098;
          result[5] += 0.9150326797385621;
        } else {
          result[0] += 0.051923076923076926;
          result[1] += 0.04230769230769231;
          result[2] += 0.028846153846153848;
          result[3] += 0.3269230769230769;
          result[4] += 0.03653846153846154;
          result[5] += 0.5134615384615384;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.01639344262295082;
          result[1] += 0.2540983606557377;
          result[2] += 0.00819672131147541;
          result[3] += 0.03278688524590164;
          result[4] += 0.6885245901639344;
          result[5] += 0;
        } else {
          result[0] += 0.0022935779816513763;
          result[1] += 0.9747706422018348;
          result[2] += 0.006880733944954129;
          result[3] += 0;
          result[4] += 0.016055045871559634;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8427249789739277;
          result[1] += 0.020185029436501266;
          result[2] += 0.006728343145500421;
          result[3] += 0.02270815811606392;
          result[4] += 0.08578637510513037;
          result[5] += 0.02186711522287637;
        } else {
          result[0] += 0.21348314606741572;
          result[1] += 0.03745318352059925;
          result[2] += 0.15730337078651685;
          result[3] += 0.2397003745318352;
          result[4] += 0.07865168539325842;
          result[5] += 0.27340823970037453;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0.046511627906976744;
          result[2] += 0.10852713178294573;
          result[3] += 0.6356589147286822;
          result[4] += 0.03875968992248062;
          result[5] += 0.14728682170542637;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.06521739130434782;
          result[2] += 0.06521739130434782;
          result[3] += 0;
          result[4] += 0.34782608695652173;
          result[5] += 0.5217391304347826;
        } else {
          result[0] += 0.05357142857142857;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.08928571428571429;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2926829268292683;
          result[3] += 0.3902439024390244;
          result[4] += 0;
          result[5] += 0.3170731707317073;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7228915662650603;
          result[3] += 0.2530120481927711;
          result[4] += 0;
          result[5] += 0.02409638554216868;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010089686098654708;
          result[1] += 0;
          result[2] += 0.9114349775784754;
          result[3] += 0.07062780269058296;
          result[4] += 0;
          result[5] += 0.007847533632286996;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0091324200913242;
          result[1] += 0.0182648401826484;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9680365296803652;
          result[5] += 0.0045662100456621;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4714285714285714;
          result[5] += 0.45714285714285713;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015432098765432098;
          result[3] += 0.020061728395061727;
          result[4] += 0.032407407407407406;
          result[5] += 0.9459876543209876;
        } else {
          result[0] += 0.07830342577487764;
          result[1] += 0.04404567699836868;
          result[2] += 0.02773246329526917;
          result[3] += 0.28548123980424145;
          result[4] += 0.04730831973898858;
          result[5] += 0.5171288743882545;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0.03333333333333333;
          result[1] += 0.08888888888888889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0.011111111111111112;
        } else {
          result[0] += 0;
          result[1] += 0.9394618834080718;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06053811659192825;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8383128295254834;
          result[1] += 0.01581722319859403;
          result[2] += 0.0070298769771529;
          result[3] += 0.028998242530755714;
          result[4] += 0.0764499121265378;
          result[5] += 0.03339191564147628;
        } else {
          result[0] += 0.24652777777777782;
          result[1] += 0.05208333333333334;
          result[2] += 0.15972222222222224;
          result[3] += 0.2569444444444445;
          result[4] += 0.07638888888888891;
          result[5] += 0.20833333333333337;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0.01904761904761905;
          result[2] += 0.13333333333333333;
          result[3] += 0.6095238095238096;
          result[4] += 0.047619047619047616;
          result[5] += 0.18095238095238095;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.06349206349206349;
          result[1] += 0.031746031746031744;
          result[2] += 0.1746031746031746;
          result[3] += 0.1111111111111111;
          result[4] += 0.1111111111111111;
          result[5] += 0.5079365079365079;
        } else {
          result[0] += 0.04255319148936171;
          result[1] += 0;
          result[2] += 0.8510638297872342;
          result[3] += 0.04255319148936171;
          result[4] += 0;
          result[5] += 0.06382978723404256;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2647058823529412;
          result[3] += 0.7058823529411765;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6826923076923077;
          result[3] += 0.27884615384615385;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.25;
        } else {
          result[0] += 0.007228915662650603;
          result[1] += 0;
          result[2] += 0.9421686746987952;
          result[3] += 0.05060240963855422;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.02415458937198068;
          result[2] += 0;
          result[3] += 0.014492753623188408;
          result[4] += 0.9468599033816426;
          result[5] += 0.014492753623188408;
        } else {
          result[0] += 0.4024390243902439;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.35365853658536583;
          result[5] += 0.24390243902439024;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037921348314606744;
          result[4] += 0.04353932584269663;
          result[5] += 0.9185393258426966;
        } else {
          result[0] += 0;
          result[1] += 0.014613778705636743;
          result[2] += 0.031315240083507306;
          result[3] += 0.31315240083507306;
          result[4] += 0.14613778705636743;
          result[5] += 0.49478079331941544;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.25274725274725274;
          result[2] += 0;
          result[3] += 0.08791208791208792;
          result[4] += 0.6153846153846154;
          result[5] += 0.04395604395604396;
        } else {
          result[0] += 0;
          result[1] += 0.988479262672811;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01152073732718894;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7986003110419907;
          result[1] += 0.04510108864696734;
          result[2] += 0.0038880248833592537;
          result[3] += 0.015552099533437015;
          result[4] += 0.11430793157076205;
          result[5] += 0.02255054432348367;
        } else {
          result[0] += 0.15864022662889518;
          result[1] += 0.014164305949008499;
          result[2] += 0.10198300283286119;
          result[3] += 0.32577903682719545;
          result[4] += 0.06515580736543909;
          result[5] += 0.3342776203966006;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.9333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20149253731343283;
          result[3] += 0.6940298507462687;
          result[4] += 0.014925373134328358;
          result[5] += 0.08955223880597014;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.4166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7837837837837838;
          result[3] += 0.21621621621621623;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0.8656126482213439;
          result[3] += 0.07905138339920949;
          result[4] += 0;
          result[5] += 0.011857707509881422;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9859437751004017;
          result[3] += 0.012048192771084338;
          result[4] += 0;
          result[5] += 0.002008032128514056;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008658008658008658;
          result[1] += 0.008658008658008658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9567099567099567;
          result[5] += 0.025974025974025976;
        } else {
          result[0] += 0.6621621621621622;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06756756756756757;
          result[4] += 0.13513513513513514;
          result[5] += 0.13513513513513514;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0009832841691248771;
          result[2] += 0;
          result[3] += 0.05309734513274336;
          result[4] += 0.08357915437561456;
          result[5] += 0.8623402163225172;
        } else {
          result[0] += 0.021834061135371178;
          result[1] += 0.021834061135371178;
          result[2] += 0;
          result[3] += 0.5109170305676856;
          result[4] += 0.07860262008733625;
          result[5] += 0.36681222707423583;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.9857549857549858;
          result[2] += 0;
          result[3] += 0.002849002849002849;
          result[4] += 0.011396011396011397;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
          result[0] += 0.6809364548494983;
          result[1] += 0.028093645484949834;
          result[2] += 0.0294314381270903;
          result[3] += 0.06287625418060201;
          result[4] += 0.1351170568561873;
          result[5] += 0.06354515050167224;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0.9428571428571428;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20930232558139536;
          result[3] += 0;
          result[4] += 0.023255813953488372;
          result[5] += 0.7674418604651163;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.15934065934065933;
          result[3] += 0.6263736263736264;
          result[4] += 0.02197802197802198;
          result[5] += 0.15384615384615385;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.14545454545454548;
          result[1] += 0.06363636363636364;
          result[2] += 0.3727272727272728;
          result[3] += 0.31818181818181823;
          result[4] += 0.018181818181818184;
          result[5] += 0.08181818181818183;
        } else {
          result[0] += 0.07065217391304349;
          result[1] += 0;
          result[2] += 0.7445652173913044;
          result[3] += 0.1630434782608696;
          result[4] += 0.0027173913043478264;
          result[5] += 0.019021739130434787;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428572;
          result[3] += 0.10714285714285715;
          result[4] += 0;
          result[5] += 0.03571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9638009049773756;
          result[3] += 0.03619909502262444;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002849002849002849;
          result[1] += 0;
          result[2] += 0.9971509971509972;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.04487179487179488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9134615384615385;
          result[5] += 0.04166666666666667;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0.06349206349206349;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9978308026030369;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021691973969631237;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          result[0] += 0.0023584905660377358;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07547169811320754;
          result[4] += 0.0294811320754717;
          result[5] += 0.8926886792452831;
        } else {
          result[0] += 0.13527851458885942;
          result[1] += 0.015915119363395226;
          result[2] += 0.026525198938992044;
          result[3] += 0.32625994694960214;
          result[4] += 0.08753315649867374;
          result[5] += 0.40848806366047746;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8719931271477663;
          result[1] += 0.013745704467353952;
          result[2] += 0.002577319587628866;
          result[3] += 0.027491408934707903;
          result[4] += 0.05584192439862543;
          result[5] += 0.028350515463917526;
        } else {
          result[0] += 0.24660633484162897;
          result[1] += 0.006787330316742082;
          result[2] += 0.12217194570135746;
          result[3] += 0.2895927601809955;
          result[4] += 0.07013574660633484;
          result[5] += 0.2647058823529412;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.020833333333333332;
          result[3] += 0.10416666666666667;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2765957446808511;
          result[3] += 0.3191489361702128;
          result[4] += 0.06382978723404255;
          result[5] += 0.3404255319148936;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.05714285714285715;
          result[2] += 0.7000000000000001;
          result[3] += 0.1285714285714286;
          result[4] += 0.014285714285714287;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4067796610169492;
          result[3] += 0.5423728813559322;
          result[4] += 0;
          result[5] += 0.05084745762711865;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7706422018348624;
          result[3] += 0.1743119266055046;
          result[4] += 0;
          result[5] += 0.05504587155963303;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          result[0] += 0.03529411764705882;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.023529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9646539027982327;
          result[3] += 0.027982326951399118;
          result[4] += 0;
          result[5] += 0.007363770250368188;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0.06976744186046513;
          result[1] += 0.0038759689922480624;
          result[2] += 0;
          result[3] += 0.011627906976744188;
          result[4] += 0.8759689922480621;
          result[5] += 0.03875968992248063;
        } else {
          result[0] += 0.41025641025641024;
          result[1] += 0.38461538461538464;
          result[2] += 0;
          result[3] += 0.10256410256410256;
          result[4] += 0.05128205128205128;
          result[5] += 0.05128205128205128;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.001091703056768559;
          result[1] += 0.0054585152838427945;
          result[2] += 0;
          result[3] += 0.043668122270742356;
          result[4] += 0.08187772925764192;
          result[5] += 0.8679039301310044;
        } else {
          result[0] += 0;
          result[1] += 0.007194244604316547;
          result[2] += 0.02877697841726619;
          result[3] += 0.45323741007194246;
          result[4] += 0.06115107913669065;
          result[5] += 0.44964028776978415;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.986046511627907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013953488372093023;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3448275862068966;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6551724137931034;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8710232158211522;
          result[1] += 0.010318142734307825;
          result[2] += 0.0008598452278589854;
          result[3] += 0.018916595012897677;
          result[4] += 0.06792777300085985;
          result[5] += 0.030954428202923472;
        } else {
          result[0] += 0.2882882882882883;
          result[1] += 0.024024024024024024;
          result[2] += 0.14414414414414414;
          result[3] += 0.2552552552552553;
          result[4] += 0.07807807807807808;
          result[5] += 0.21021021021021022;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0.9473684210526315;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11971830985915492;
          result[3] += 0.5845070422535211;
          result[4] += 0;
          result[5] += 0.29577464788732394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
          result[0] += 0.16;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.76;
          result[5] += 0.08;
        } else {
          result[0] += 0.3469387755102041;
          result[1] += 0;
          result[2] += 0.3673469387755102;
          result[3] += 0.1836734693877551;
          result[4] += 0;
          result[5] += 0.10204081632653061;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6214285714285714;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.09285714285714286;
        } else {
          result[0] += 0.0058072009291521495;
          result[1] += 0;
          result[2] += 0.9221835075493613;
          result[3] += 0.05923344947735192;
          result[4] += 0;
          result[5] += 0.01277584204413473;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
          result[0] += 0.003436426116838488;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8969072164948454;
          result[5] += 0.09965635738831616;
        } else {
          result[0] += 0;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0.15;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.6825396825396826;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.31746031746031744;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006167400881057269;
          result[2] += 0;
          result[3] += 0.1277533039647577;
          result[4] += 0.03788546255506608;
          result[5] += 0.8281938325991189;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.03763440860215054;
          result[1] += 0.43010752688172044;
          result[2] += 0.005376344086021506;
          result[3] += 0.016129032258064516;
          result[4] += 0.5053763440860215;
          result[5] += 0.005376344086021506;
        } else {
          result[0] += 0.7231903485254693;
          result[1] += 0.010053619302949063;
          result[2] += 0.032841823056300276;
          result[3] += 0.06903485254691691;
          result[4] += 0.06300268096514747;
          result[5] += 0.10187667560321717;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0051813471502590676;
          result[1] += 0.9922279792746114;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025906735751295338;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0851063829787234;
          result[3] += 0.10638297872340426;
          result[4] += 0.0851063829787234;
          result[5] += 0.723404255319149;
        } else {
          result[0] += 0;
          result[1] += 0.006756756756756758;
          result[2] += 0.1621621621621622;
          result[3] += 0.6824324324324326;
          result[4] += 0.027027027027027032;
          result[5] += 0.12162162162162164;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.14285714285714285;
          result[2] += 0.14285714285714285;
          result[3] += 0.5714285714285714;
          result[4] += 0.047619047619047616;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0;
          result[1] += 0.08823529411764706;
          result[2] += 0.6764705882352942;
          result[3] += 0.14705882352941177;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0.8571428571428572;
          result[2] += 0;
          result[3] += 0.07142857142857144;
          result[4] += 0.07142857142857144;
          result[5] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.03333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7464788732394366;
          result[3] += 0.2112676056338028;
          result[4] += 0;
          result[5] += 0.04225352112676056;
        } else {
          result[0] += 0.008951406649616368;
          result[1] += 0;
          result[2] += 0.948849104859335;
          result[3] += 0.03836317135549872;
          result[4] += 0;
          result[5] += 0.0038363171355498722;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
          result[0] += 0.011194029850746268;
          result[1] += 0.0037313432835820895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9067164179104478;
          result[5] += 0.07835820895522388;
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
          result[0] += 0.020047169811320754;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03419811320754717;
          result[4] += 0.03419811320754717;
          result[5] += 0.9115566037735849;
        } else {
          result[0] += 0.0730478589420655;
          result[1] += 0.05541561712846348;
          result[2] += 0.015113350125944586;
          result[3] += 0.40806045340050384;
          result[4] += 0.03022670025188917;
          result[5] += 0.41813602015113355;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.59375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.40625;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          result[0] += 0.1434108527131783;
          result[1] += 0.031007751937984496;
          result[2] += 0.031007751937984496;
          result[3] += 0.20155038759689922;
          result[4] += 0.22868217054263565;
          result[5] += 0.3643410852713178;
        } else {
          result[0] += 0.7901234567901234;
          result[1] += 0.020061728395061727;
          result[2] += 0.012345679012345678;
          result[3] += 0.04243827160493827;
          result[4] += 0.10802469135802469;
          result[5] += 0.02700617283950617;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12878787878787878;
          result[3] += 0.6742424242424242;
          result[4] += 0;
          result[5] += 0.19696969696969696;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.011764705882352941;
          result[2] += 0.6470588235294118;
          result[3] += 0.21176470588235294;
          result[4] += 0;
          result[5] += 0.12941176470588237;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5060240963855422;
          result[3] += 0.4337349397590362;
          result[4] += 0;
          result[5] += 0.06024096385542169;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.782608695652174;
          result[3] += 0.043478260869565216;
          result[4] += 0.043478260869565216;
          result[5] += 0.13043478260869565;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.5384615384615384;
          result[1] += 0;
          result[2] += 0.41025641025641024;
          result[3] += 0.02564102564102564;
          result[4] += 0.02564102564102564;
          result[5] += 0;
        } else {
          result[0] += 0.005494505494505496;
          result[1] += 0;
          result[2] += 0.9406593406593408;
          result[3] += 0.042857142857142864;
          result[4] += 0;
          result[5] += 0.010989010989010992;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0.012244897959183673;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9551020408163265;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0.5083333333333334;
          result[1] += 0.008333333333333335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2583333333333334;
          result[5] += 0.22500000000000003;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0022346368715083797;
          result[2] += 0;
          result[3] += 0.053631284916201116;
          result[4] += 0.03910614525139665;
          result[5] += 0.9050279329608939;
        } else {
          result[0] += 0.006944444444444444;
          result[1] += 0.017361111111111112;
          result[2] += 0.003472222222222222;
          result[3] += 0.5243055555555556;
          result[4] += 0.020833333333333332;
          result[5] += 0.4270833333333333;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9933333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.02608695652173913;
          result[1] += 0.3565217391304348;
          result[2] += 0.034782608695652174;
          result[3] += 0.02608695652173913;
          result[4] += 0.5478260869565217;
          result[5] += 0.008695652173913044;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0.42431761786600497;
          result[1] += 0.026054590570719603;
          result[2] += 0.1228287841191067;
          result[3] += 0.20471464019851116;
          result[4] += 0.07444168734491315;
          result[5] += 0.14764267990074442;
        } else {
          result[0] += 0.8363228699551569;
          result[1] += 0.0257847533632287;
          result[2] += 0.053811659192825115;
          result[3] += 0.006726457399103139;
          result[4] += 0.07062780269058296;
          result[5] += 0.006726457399103139;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.85;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0.5217391304347826;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4838709677419355;
          result[3] += 0.45161290322580644;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.12244897959183673;
          result[1] += 0.02040816326530612;
          result[2] += 0.3469387755102041;
          result[3] += 0.24489795918367346;
          result[4] += 0;
          result[5] += 0.2653061224489796;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.3958333333333333;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.010922330097087377;
          result[1] += 0;
          result[2] += 0.9320388349514561;
          result[3] += 0.04975728155339804;
          result[4] += 0;
          result[5] += 0.007281553398058251;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0.012658227848101266;
          result[2] += 0;
          result[3] += 0.004219409282700422;
          result[4] += 0.9451476793248945;
          result[5] += 0.0379746835443038;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.3076923076923077;
          result[4] += 0.15384615384615385;
          result[5] += 0.38461538461538464;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.9404761904761905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0.011904761904761904;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.001962708537782139;
          result[1] += 0.02453385672227674;
          result[2] += 0.002944062806673209;
          result[3] += 0.05986261040235525;
          result[4] += 0.05103042198233562;
          result[5] += 0.8596663395485771;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0.017857142857142856;
          result[2] += 0.026785714285714284;
          result[3] += 0.45535714285714285;
          result[4] += 0.02976190476190476;
          result[5] += 0.43452380952380953;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.078125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0.046875;
        } else {
          result[0] += 0.008658008658008658;
          result[1] += 0.9112554112554112;
          result[2] += 0.025974025974025976;
          result[3] += 0.0021645021645021645;
          result[4] += 0.05194805194805195;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
          result[0] += 0.1987179487179487;
          result[1] += 0;
          result[2] += 0.04487179487179487;
          result[3] += 0.33974358974358976;
          result[4] += 0.2564102564102564;
          result[5] += 0.16025641025641027;
        } else {
          result[0] += 0.8367875647668394;
          result[1] += 0.024179620034542316;
          result[2] += 0.02072538860103627;
          result[3] += 0.022452504317789293;
          result[4] += 0.07512953367875648;
          result[5] += 0.02072538860103627;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03773584905660377;
          result[3] += 0.4056603773584906;
          result[4] += 0.04716981132075472;
          result[5] += 0.5094339622641509;
        } else {
          result[0] += 0.013452914798206279;
          result[1] += 0.017937219730941704;
          result[2] += 0.5426008968609866;
          result[3] += 0.3183856502242152;
          result[4] += 0.013452914798206279;
          result[5] += 0.09417040358744394;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          result[0] += 0.3380281690140845;
          result[1] += 0.04225352112676056;
          result[2] += 0.4507042253521127;
          result[3] += 0.014084507042253521;
          result[4] += 0.07042253521126761;
          result[5] += 0.08450704225352113;
        } else {
          result[0] += 0.0022675736961451248;
          result[1] += 0;
          result[2] += 0.9308390022675737;
          result[3] += 0.048752834467120185;
          result[4] += 0;
          result[5] += 0.018140589569160998;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.06405693950177936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9252669039145908;
          result[5] += 0.010676156583629894;
        } else {
          result[0] += 0.5099009900990099;
          result[1] += 0.0049504950495049506;
          result[2] += 0;
          result[3] += 0.019801980198019802;
          result[4] += 0.2524752475247525;
          result[5] += 0.21287128712871287;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023121387283236993;
          result[4] += 0.01878612716763006;
          result[5] += 0.958092485549133;
        } else {
          result[0] += 0.020887728459530026;
          result[1] += 0.013054830287206266;
          result[2] += 0;
          result[3] += 0.20887728459530025;
          result[4] += 0.17232375979112272;
          result[5] += 0.5848563968668408;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.4666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5333333333333333;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7639802631578947;
          result[1] += 0.027138157894736843;
          result[2] += 0.012335526315789474;
          result[3] += 0.04358552631578947;
          result[4] += 0.09292763157894737;
          result[5] += 0.060032894736842105;
        } else {
          result[0] += 0.13786764705882354;
          result[1] += 0.02389705882352941;
          result[2] += 0.21691176470588236;
          result[3] += 0.3952205882352941;
          result[4] += 0.05514705882352941;
          result[5] += 0.17095588235294118;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.10810810810810811;
          result[2] += 0.10810810810810811;
          result[3] += 0.02702702702702703;
          result[4] += 0.08108108108108109;
          result[5] += 0.6756756756756757;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23255813953488372;
          result[3] += 0.46511627906976744;
          result[4] += 0.046511627906976744;
          result[5] += 0.2558139534883721;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.10526315789473684;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0.07894736842105263;
          result[4] += 0;
          result[5] += 0.07894736842105263;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2962962962962963;
          result[3] += 0.6111111111111112;
          result[4] += 0;
          result[5] += 0.09259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8904109589041096;
          result[3] += 0.1095890410958904;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8214285714285714;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004672897196261683;
          result[1] += 0;
          result[2] += 0.9672897196261684;
          result[3] += 0.023364485981308414;
          result[4] += 0;
          result[5] += 0.004672897196261683;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9655172413793104;
          result[5] += 0;
        } else {
          result[0] += 0.654320987654321;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25925925925925924;
          result[5] += 0.08641975308641975;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04664391353811149;
          result[4] += 0.06257110352673492;
          result[5] += 0.8907849829351536;
        } else {
          result[0] += 0.0076726342710997444;
          result[1] += 0.017902813299232736;
          result[2] += 0.01278772378516624;
          result[3] += 0.4296675191815857;
          result[4] += 0.058823529411764705;
          result[5] += 0.4731457800511509;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975669099756691;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024330900243309003;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7838038632986628;
          result[1] += 0.040861812778603276;
          result[2] += 0.007429420505200595;
          result[3] += 0.032689450222882624;
          result[4] += 0.10326894502228827;
          result[5] += 0.03194650817236256;
        } else {
          result[0] += 0.14325068870523416;
          result[1] += 0.005509641873278237;
          result[2] += 0.2644628099173554;
          result[3] += 0.2865013774104683;
          result[4] += 0.09641873278236915;
          result[5] += 0.20385674931129477;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.07692307692307693;
          result[3] += 0.6923076923076923;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10714285714285714;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.8214285714285714;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0.3595505617977528;
          result[3] += 0.4943820224719101;
          result[4] += 0;
          result[5] += 0.1348314606741573;
        } else {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.9230769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5660377358490567;
          result[3] += 0.2924528301886793;
          result[4] += 0;
          result[5] += 0.14150943396226418;
        } else {
          result[0] += 0.08173076923076923;
          result[1] += 0;
          result[2] += 0.8221153846153846;
          result[3] += 0.09615384615384616;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8840579710144928;
          result[3] += 0.11594202898550725;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9865384615384616;
          result[3] += 0.013461538461538462;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9703389830508474;
          result[5] += 0.029661016949152543;
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
          result[0] += 0.03218390804597701;
          result[1] += 0.005747126436781609;
          result[2] += 0.004597701149425287;
          result[3] += 0.03908045977011494;
          result[4] += 0.06321839080459771;
          result[5] += 0.8551724137931035;
        } else {
          result[0] += 0;
          result[1] += 0.006920415224913495;
          result[2] += 0.0034602076124567475;
          result[3] += 0.5224913494809689;
          result[4] += 0.020761245674740483;
          result[5] += 0.4463667820069204;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.44666666666666666;
          result[2] += 0;
          result[3] += 0.02666666666666667;
          result[4] += 0.48;
          result[5] += 0.04666666666666667;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8379228953579858;
          result[1] += 0.02753737214791503;
          result[2] += 0.00944138473642801;
          result[3] += 0.025177025963808025;
          result[4] += 0.08261211644374508;
          result[5] += 0.01730920535011802;
        } else {
          result[0] += 0.17647058823529413;
          result[1] += 0.015180265654648957;
          result[2] += 0.269449715370019;
          result[3] += 0.2523719165085389;
          result[4] += 0.03795066413662239;
          result[5] += 0.24857685009487665;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0;
          result[4] += 0.03225806451612903;
          result[5] += 0.9354838709677419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.6153846153846154;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0.30303030303030304;
          result[3] += 0.5757575757575758;
          result[4] += 0;
          result[5] += 0.10606060606060606;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0;
          result[2] += 0.6417910447761194;
          result[3] += 0.23880597014925373;
          result[4] += 0;
          result[5] += 0.08955223880597014;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.5333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.815668202764977;
          result[3] += 0.17511520737327188;
          result[4] += 0;
          result[5] += 0.009216589861751152;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.8805970149253731;
          result[3] += 0.1044776119402985;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005376344086021506;
          result[1] += 0;
          result[2] += 0.982078853046595;
          result[3] += 0.008960573476702509;
          result[4] += 0;
          result[5] += 0.0035842293906810036;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.009174311926605505;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9724770642201835;
          result[5] += 0.01834862385321101;
        } else {
          result[0] += 0.04597701149425287;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5977011494252874;
          result[5] += 0.3563218390804598;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0.022610483042137718;
          result[1] += 0.015416238437821172;
          result[2] += 0.006166495375128468;
          result[3] += 0.065775950668037;
          result[4] += 0.04316546762589928;
          result[5] += 0.8468653648509764;
        } else {
          result[0] += 0.09929078014184398;
          result[1] += 0.03546099290780142;
          result[2] += 0.04964539007092199;
          result[3] += 0.4219858156028369;
          result[4] += 0.03900709219858156;
          result[5] += 0.3546099290780142;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9817767653758542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018223234624145785;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.060810810810810814;
          result[1] += 0.3108108108108108;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5878378378378378;
          result[5] += 0.04054054054054054;
        } else {
          result[0] += 0.7480592801693718;
          result[1] += 0.00494001411432604;
          result[2] += 0.05504587155963302;
          result[3] += 0.07692307692307691;
          result[4] += 0.060691601976005635;
          result[5] += 0.05434015525758644;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.043478260869565216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13043478260869565;
          result[5] += 0.7608695652173914;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.00909090909090909;
          result[1] += 0;
          result[2] += 0.02727272727272727;
          result[3] += 0.5818181818181818;
          result[4] += 0;
          result[5] += 0.38181818181818183;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.38095238095238093;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6296296296296297;
          result[3] += 0.037037037037037035;
          result[4] += 0;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0034965034965034965;
          result[1] += 0;
          result[2] += 0.7867132867132867;
          result[3] += 0.18181818181818182;
          result[4] += 0.01048951048951049;
          result[5] += 0.017482517482517484;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9568452380952381;
          result[3] += 0.043154761904761904;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0.006802721088435374;
          result[1] += 0.006802721088435374;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8775510204081632;
          result[5] += 0.10884353741496598;
        } else {
          result[0] += 0;
          result[1] += 0.8947368421052632;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10526315789473684;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.04240282685512368;
          result[1] += 0;
          result[2] += 0.001177856301531213;
          result[3] += 0.045936395759717315;
          result[4] += 0.050647820965842166;
          result[5] += 0.8598351001177856;
        } else {
          result[0] += 0.11422845691382767;
          result[1] += 0.010020040080160322;
          result[2] += 0.05410821643286574;
          result[3] += 0.41883767535070143;
          result[4] += 0.08016032064128258;
          result[5] += 0.32264529058116237;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0.021582733812949645;
          result[1] += 0.9712230215827339;
          result[2] += 0;
          result[3] += 0.0023980815347721825;
          result[4] += 0.004796163069544365;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8302828618968386;
          result[1] += 0.026622296173044926;
          result[2] += 0.009151414309484194;
          result[3] += 0.01913477537437604;
          result[4] += 0.09400998336106489;
          result[5] += 0.020798668885191347;
        } else {
          result[0] += 0.1773049645390071;
          result[1] += 0.0070921985815602835;
          result[2] += 0.2789598108747045;
          result[3] += 0.2624113475177305;
          result[4] += 0.0425531914893617;
          result[5] += 0.23167848699763594;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.14;
          result[4] += 0;
          result[5] += 0.76;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.018518518518518517;
          result[1] += 0;
          result[2] += 0.18518518518518517;
          result[3] += 0.5740740740740741;
          result[4] += 0.018518518518518517;
          result[5] += 0.2037037037037037;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
          result[0] += 0.014336917562724014;
          result[1] += 0;
          result[2] += 0.7670250896057348;
          result[3] += 0.17921146953405018;
          result[4] += 0;
          result[5] += 0.03942652329749104;
        } else {
          result[0] += 0.004573170731707318;
          result[1] += 0;
          result[2] += 0.9603658536585367;
          result[3] += 0.030487804878048783;
          result[4] += 0;
          result[5] += 0.004573170731707318;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004273504273504274;
          result[1] += 0.017094017094017096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9658119658119658;
          result[5] += 0.01282051282051282;
        } else {
          result[0] += 0;
          result[1] += 0.27941176470588236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4264705882352941;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.034858387799564274;
          result[1] += 0.007625272331154684;
          result[2] += 0;
          result[3] += 0.046840958605664486;
          result[4] += 0.054466230936819175;
          result[5] += 0.8562091503267973;
        } else {
          result[0] += 0.016181229773462782;
          result[1] += 0.009708737864077669;
          result[2] += 0.06472491909385113;
          result[3] += 0.4563106796116505;
          result[4] += 0.003236245954692557;
          result[5] += 0.44983818770226536;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.01807228915662651;
          result[1] += 0.16867469879518074;
          result[2] += 0;
          result[3] += 0.15662650602409642;
          result[4] += 0.6144578313253013;
          result[5] += 0.042168674698795185;
        } else {
          result[0] += 0.009009009009009009;
          result[1] += 0.9774774774774775;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013513513513513514;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.01639344262295082;
          result[1] += 0.3114754098360656;
          result[2] += 0;
          result[3] += 0.08196721311475409;
          result[4] += 0.5573770491803278;
          result[5] += 0.03278688524590164;
        } else {
          result[0] += 0.7814871016691958;
          result[1] += 0.005311077389984826;
          result[2] += 0.028072837632776935;
          result[3] += 0.06069802731411229;
          result[4] += 0.06828528072837632;
          result[5] += 0.05614567526555387;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20833333333333334;
          result[5] += 0.7916666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12418300653594772;
          result[3] += 0.6339869281045751;
          result[4] += 0;
          result[5] += 0.24183006535947713;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.13043478260869565;
          result[2] += 0.17391304347826086;
          result[3] += 0.2608695652173913;
          result[4] += 0.10869565217391304;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.704225352112676;
          result[3] += 0.15492957746478872;
          result[4] += 0;
          result[5] += 0.14084507042253522;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0.34782608695652173;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0.4782608695652174;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.010638297872340427;
          result[1] += 0;
          result[2] += 0.7801418439716313;
          result[3] += 0.1843971631205674;
          result[4] += 0.003546099290780142;
          result[5] += 0.021276595744680854;
        } else {
          result[0] += 0.010130246020260492;
          result[1] += 0;
          result[2] += 0.9638205499276411;
          result[3] += 0.02170767004341534;
          result[4] += 0;
          result[5] += 0.004341534008683068;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.009523809523809525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9857142857142858;
          result[5] += 0.004761904761904762;
        } else {
          result[0] += 0.1917808219178082;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4383561643835616;
          result[5] += 0.3698630136986301;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03365384615384615;
          result[1] += 0.019230769230769232;
          result[2] += 0.0028846153846153848;
          result[3] += 0.075;
          result[4] += 0.02403846153846154;
          result[5] += 0.8451923076923077;
        } else {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0;
          result[3] += 0.6824324324324325;
          result[4] += 0.02702702702702703;
          result[5] += 0.27702702702702703;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9890350877192983;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010964912280701754;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7599399849962492;
          result[1] += 0.024006001500375098;
          result[2] += 0.0030007501875468873;
          result[3] += 0.018754688672168045;
          result[4] += 0.14928732183045765;
          result[5] += 0.045011252813203305;
        } else {
          result[0] += 0.16766467065868262;
          result[1] += 0.007984031936127744;
          result[2] += 0.27944111776447106;
          result[3] += 0.2934131736526946;
          result[4] += 0.02594810379241517;
          result[5] += 0.22554890219560877;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0.06818181818181818;
          result[4] += 0.09090909090909091;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.43478260869565216;
          result[3] += 0.391304347826087;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.018633540372670808;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.16770186335403728;
          result[4] += 0;
          result[5] += 0.027950310559006212;
        } else {
          result[0] += 0.0035842293906810036;
          result[1] += 0;
          result[2] += 0.9713261648745519;
          result[3] += 0.023297491039426525;
          result[4] += 0;
          result[5] += 0.0017921146953405018;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81.5) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0.006779661016949152;
          result[1] += 0.013559322033898305;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9457627118644067;
          result[5] += 0.03389830508474576;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.9243697478991597;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03361344537815126;
          result[5] += 0.04201680672268908;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0019305019305019305;
          result[1] += 0.004826254826254826;
          result[2] += 0.005791505791505791;
          result[3] += 0.07528957528957529;
          result[4] += 0.0694980694980695;
          result[5] += 0.8426640926640927;
        } else {
          result[0] += 0.0627062706270627;
          result[1] += 0.019801980198019802;
          result[2] += 0.056105610561056105;
          result[3] += 0.4141914191419142;
          result[4] += 0.11716171617161716;
          result[5] += 0.33003300330033003;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0.9946949602122016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005305039787798408;
          result[5] += 0;
        } else {
          result[0] += 0.0784313725490196;
          result[1] += 0.5490196078431373;
          result[2] += 0.0196078431372549;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.0196078431372549;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.926829268292683;
          result[1] += 0.02771618625277162;
          result[2] += 0.007760532150776054;
          result[3] += 0.004434589800443459;
          result[4] += 0.028824833702882482;
          result[5] += 0.004434589800443459;
        } else {
          result[0] += 0.22018348623853212;
          result[1] += 0;
          result[2] += 0.3853211009174312;
          result[3] += 0.1743119266055046;
          result[4] += 0.03669724770642202;
          result[5] += 0.1834862385321101;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116) ) ) {
          result[0] += 0.03680981595092025;
          result[1] += 0;
          result[2] += 0.5030674846625767;
          result[3] += 0.22699386503067484;
          result[4] += 0.018404907975460124;
          result[5] += 0.2147239263803681;
        } else {
          result[0] += 0.7666666666666667;
          result[1] += 0;
          result[2] += 0.23333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.01485148514851485;
          result[1] += 0;
          result[2] += 0.6633663366336634;
          result[3] += 0.28217821782178215;
          result[4] += 0;
          result[5] += 0.039603960396039604;
        } else {
          result[0] += 0.003875968992248061;
          result[1] += 0;
          result[2] += 0.9470284237726097;
          result[3] += 0.04134366925064599;
          result[4] += 0.0012919896640826872;
          result[5] += 0.006459948320413435;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9907407407407407;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7368421052631579;
          result[5] += 0.2631578947368421;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0.018038331454340473;
          result[1] += 0.0011273957158962795;
          result[2] += 0;
          result[3] += 0.04509582863585118;
          result[4] += 0.05975197294250282;
          result[5] += 0.8759864712514093;
        } else {
          result[0] += 0.07871720116618076;
          result[1] += 0.008746355685131196;
          result[2] += 0.014577259475218658;
          result[3] += 0.40524781341107874;
          result[4] += 0.0728862973760933;
          result[5] += 0.4198250728862974;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9824561403508771;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017543859649122806;
          result[5] += 0;
        } else {
          result[0] += 0.017699115044247787;
          result[1] += 0.21238938053097345;
          result[2] += 0;
          result[3] += 0.008849557522123894;
          result[4] += 0.7522123893805309;
          result[5] += 0.008849557522123894;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.863013698630137;
          result[1] += 0.028253424657534245;
          result[2] += 0;
          result[3] += 0.016267123287671232;
          result[4] += 0.07363013698630137;
          result[5] += 0.018835616438356163;
        } else {
          result[0] += 0.19528619528619529;
          result[1] += 0.030303030303030304;
          result[2] += 0.21548821548821548;
          result[3] += 0.24579124579124578;
          result[4] += 0.07744107744107744;
          result[5] += 0.2356902356902357;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0;
          result[4] += 0.35714285714285715;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.9166666666666666;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0.25;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.11666666666666667;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
          result[0] += 0.07407407407407407;
          result[1] += 0.3333333333333333;
          result[2] += 0.25925925925925924;
          result[3] += 0.14814814814814814;
          result[4] += 0.07407407407407407;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.03508771929824562;
          result[1] += 0.052631578947368425;
          result[2] += 0.368421052631579;
          result[3] += 0.4385964912280702;
          result[4] += 0;
          result[5] += 0.10526315789473685;
        } else {
          result[0] += 0.005970149253731343;
          result[1] += 0;
          result[2] += 0.9014925373134328;
          result[3] += 0.07263681592039802;
          result[4] += 0;
          result[5] += 0.01990049751243781;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.01773049645390071;
          result[1] += 0.024822695035460994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9113475177304965;
          result[5] += 0.04609929078014184;
        } else {
          result[0] += 0.5474452554744526;
          result[1] += 0.014598540145985401;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25547445255474455;
          result[5] += 0.18248175182481752;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03571428571428572;
          result[4] += 0.8571428571428572;
          result[5] += 0.10714285714285715;
        } else {
          result[0] += 0.0009182736455463728;
          result[1] += 0.0027548209366391185;
          result[2] += 0;
          result[3] += 0.08999081726354453;
          result[4] += 0.050505050505050504;
          result[5] += 0.8558310376492194;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7551963048498845;
          result[1] += 0.07236335642802155;
          result[2] += 0.007698229407236336;
          result[3] += 0.049268668206312545;
          result[4] += 0.07621247113163972;
          result[5] += 0.03926096997690531;
        } else {
          result[0] += 0.10392156862745099;
          result[1] += 0.0196078431372549;
          result[2] += 0.19019607843137254;
          result[3] += 0.3607843137254902;
          result[4] += 0.06862745098039216;
          result[5] += 0.2568627450980392;
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.12727272727272726;
          result[3] += 0.2545454545454545;
          result[4] += 0.01818181818181818;
          result[5] += 0.5818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.27906976744186046;
          result[3] += 0.6046511627906976;
          result[4] += 0;
          result[5] += 0.11627906976744186;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5217391304347826;
          result[3] += 0.4782608695652174;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8852459016393442;
          result[3] += 0.11475409836065574;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0.4444444444444444;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.3888888888888889;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3157894736842105;
          result[3] += 0.631578947368421;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0.07954545454545454;
          result[1] += 0.03409090909090909;
          result[2] += 0.6363636363636364;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0.009308510638297872;
          result[1] += 0;
          result[2] += 0.9521276595744681;
          result[3] += 0.03590425531914894;
          result[4] += 0;
          result[5] += 0.0026595744680851063;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004310344827586207;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9568965517241379;
          result[5] += 0.03879310344827586;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04037558685446009;
          result[1] += 0.004694835680751174;
          result[2] += 0.0018779342723004694;
          result[3] += 0.0647887323943662;
          result[4] += 0.06009389671361502;
          result[5] += 0.828169014084507;
        } else {
          result[0] += 0.004032258064516129;
          result[1] += 0;
          result[2] += 0.004032258064516129;
          result[3] += 0.532258064516129;
          result[4] += 0.04032258064516129;
          result[5] += 0.41935483870967744;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7066202090592334;
          result[1] += 0.0808362369337979;
          result[2] += 0.016724738675958188;
          result[3] += 0.0397212543554007;
          result[4] += 0.11777003484320557;
          result[5] += 0.03832752613240418;
        } else {
          result[0] += 0.10966057441253262;
          result[1] += 0.007832898172323757;
          result[2] += 0.22193211488250647;
          result[3] += 0.3211488250652741;
          result[4] += 0.12010443864229763;
          result[5] += 0.21932114882506523;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          result[0] += 0.004878048780487805;
          result[1] += 0.9878048780487805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007317073170731708;
          result[5] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.125;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6166666666666667;
          result[4] += 0;
          result[5] += 0.18333333333333332;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8409090909090909;
          result[3] += 0.06818181818181818;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.017341040462427744;
          result[1] += 0;
          result[2] += 0.8554913294797688;
          result[3] += 0.12138728323699421;
          result[4] += 0;
          result[5] += 0.005780346820809248;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8805031446540881;
          result[3] += 0.11949685534591195;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0020449897750511254;
          result[1] += 0;
          result[2] += 0.9918200408997956;
          result[3] += 0.0020449897750511254;
          result[4] += 0;
          result[5] += 0.004089979550102251;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96) ) ) {
          result[0] += 0.023474178403755867;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9107981220657277;
          result[5] += 0.06572769953051644;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
          result[0] += 0.9107142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05357142857142857;
          result[5] += 0.03571428571428571;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.08247422680412371;
          result[2] += 0;
          result[3] += 0.07216494845360824;
          result[4] += 0.422680412371134;
          result[5] += 0.422680412371134;
        } else {
          result[0] += 0.002036659877800407;
          result[1] += 0.006109979633401222;
          result[2] += 0.002036659877800407;
          result[3] += 0.059063136456211814;
          result[4] += 0.03665987780040733;
          result[5] += 0.8940936863543788;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.02040816326530612;
          result[2] += 0;
          result[3] += 0.10204081632653061;
          result[4] += 0.14285714285714285;
          result[5] += 0.7346938775510204;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.005376344086021506;
          result[3] += 0.7258064516129032;
          result[4] += 0;
          result[5] += 0.25268817204301075;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.3008849557522124;
          result[2] += 0.008849557522123894;
          result[3] += 0.02654867256637168;
          result[4] += 0.6283185840707964;
          result[5] += 0.035398230088495575;
        } else {
          result[0] += 0;
          result[1] += 0.9891067538126361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010893246187363835;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8643171806167401;
          result[1] += 0.03171806167400881;
          result[2] += 0;
          result[3] += 0.019383259911894272;
          result[4] += 0.07577092511013216;
          result[5] += 0.00881057268722467;
        } else {
          result[0] += 0.23229461756373937;
          result[1] += 0.04815864022662889;
          result[2] += 0.20679886685552407;
          result[3] += 0.21246458923512748;
          result[4] += 0.06232294617563739;
          result[5] += 0.23796033994334279;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0.005681818181818182;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.4943181818181818;
          result[4] += 0.03977272727272727;
          result[5] += 0.23295454545454544;
        } else {
          result[0] += 0;
          result[1] += 0.02127659574468085;
          result[2] += 0.6382978723404256;
          result[3] += 0.2872340425531915;
          result[4] += 0;
          result[5] += 0.05319148936170213;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.056818181818181816;
          result[2] += 0.3522727272727273;
          result[3] += 0.056818181818181816;
          result[4] += 0.1590909090909091;
          result[5] += 0.19318181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9469135802469136;
          result[3] += 0.04814814814814815;
          result[4] += 0;
          result[5] += 0.0049382716049382715;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.003875968992248062;
          result[1] += 0.003875968992248062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9883720930232558;
          result[5] += 0.003875968992248062;
        } else {
          result[0] += 0.06382978723404255;
          result[1] += 0.0425531914893617;
          result[2] += 0;
          result[3] += 0.1702127659574468;
          result[4] += 0.425531914893617;
          result[5] += 0.2978723404255319;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
          result[0] += 0.967032967032967;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03296703296703297;
          result[5] += 0;
        } else {
          result[0] += 0.17460317460317462;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03174603174603175;
          result[4] += 0.4444444444444445;
          result[5] += 0.34920634920634924;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0024330900243309003;
          result[3] += 0.032846715328467155;
          result[4] += 0.05596107055961071;
          result[5] += 0.9087591240875912;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025;
          result[3] += 0.525;
          result[4] += 0;
          result[5] += 0.45;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0.0297029702970297;
          result[1] += 0.04950495049504951;
          result[2] += 0;
          result[3] += 0.06930693069306931;
          result[4] += 0.3564356435643564;
          result[5] += 0.49504950495049505;
        } else {
          result[0] += 0.005434782608695652;
          result[1] += 0.008152173913043478;
          result[2] += 0.02717391304347826;
          result[3] += 0.529891304347826;
          result[4] += 0.002717391304347826;
          result[5] += 0.4266304347826087;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98.5) ) ) {
          result[0] += 0.05454545454545454;
          result[1] += 0.2909090909090909;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6454545454545455;
          result[5] += 0.00909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0.9975369458128078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024630541871921183;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.07954545454545454;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.375;
          result[5] += 0;
        } else {
          result[0] += 0.8559804719283972;
          result[1] += 0.007323026851098455;
          result[2] += 0.03173311635475998;
          result[3] += 0.04231082180634663;
          result[4] += 0.04231082180634663;
          result[5] += 0.020341741253051264;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0.022988505747126436;
          result[1] += 0.09195402298850575;
          result[2] += 0.08045977011494253;
          result[3] += 0.40229885057471265;
          result[4] += 0.08045977011494253;
          result[5] += 0.3218390804597701;
        } else {
          result[0] += 0.081447963800905;
          result[1] += 0;
          result[2] += 0.6018099547511313;
          result[3] += 0.2714932126696833;
          result[4] += 0.009049773755656111;
          result[5] += 0.036199095022624445;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0.04938271604938273;
          result[1] += 0.03703703703703704;
          result[2] += 0.49382716049382724;
          result[3] += 0.14814814814814817;
          result[4] += 0.03703703703703704;
          result[5] += 0.23456790123456794;
        } else {
          result[0] += 0.0036855036855036856;
          result[1] += 0;
          result[2] += 0.9287469287469288;
          result[3] += 0.05896805896805897;
          result[4] += 0;
          result[5] += 0.0085995085995086;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.003937007874015748;
          result[1] += 0.01968503937007874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9448818897637795;
          result[5] += 0.031496062992125984;
        } else {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01991465149359886;
          result[4] += 0.02844950213371266;
          result[5] += 0.9516358463726885;
        } else {
          result[0] += 0.11302211302211303;
          result[1] += 0.029484029484029485;
          result[2] += 0.007371007371007371;
          result[3] += 0.28501228501228504;
          result[4] += 0.07125307125307126;
          result[5] += 0.49385749385749383;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
          result[0] += 0.0045045045045045045;
          result[1] += 0.963963963963964;
          result[2] += 0;
          result[3] += 0.01126126126126126;
          result[4] += 0.02027027027027027;
          result[5] += 0;
        } else {
          result[0] += 0.055172413793103454;
          result[1] += 0.22068965517241382;
          result[2] += 0.013793103448275864;
          result[3] += 0.027586206896551727;
          result[4] += 0.6482758620689656;
          result[5] += 0.03448275862068966;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8225283630470016;
          result[1] += 0.03241491085899514;
          result[2] += 0.0016207455429497568;
          result[3] += 0.02674230145867099;
          result[4] += 0.08833063209076175;
          result[5] += 0.028363047001620744;
        } else {
          result[0] += 0.2534246575342466;
          result[1] += 0.003424657534246575;
          result[2] += 0.1815068493150685;
          result[3] += 0.2636986301369863;
          result[4] += 0.03767123287671233;
          result[5] += 0.2602739726027397;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25925925925925924;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0.18518518518518517;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.7733333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.7058823529411765;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7058823529411765;
          result[3] += 0.21568627450980393;
          result[4] += 0;
          result[5] += 0.0784313725490196;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.5882352941176471;
          result[2] += 0.058823529411764705;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0;
        } else {
          result[0] += 0.85;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03436426116838488;
          result[1] += 0.003436426116838488;
          result[2] += 0.738831615120275;
          result[3] += 0.1958762886597938;
          result[4] += 0.010309278350515464;
          result[5] += 0.01718213058419244;
        } else {
          result[0] += 0.0014388489208633094;
          result[1] += 0;
          result[2] += 0.9482014388489208;
          result[3] += 0.041726618705035974;
          result[4] += 0;
          result[5] += 0.008633093525179856;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
          result[0] += 0.011811023622047244;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03543307086614173;
          result[4] += 0.8779527559055118;
          result[5] += 0.07480314960629922;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23529411764705882;
          result[5] += 0.7647058823529411;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
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
          result[3] += 0.04572098475967175;
          result[4] += 0.031652989449003514;
          result[5] += 0.9226260257913247;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0.005208333333333333;
          result[2] += 0.005208333333333333;
          result[3] += 0.23958333333333334;
          result[4] += 0.078125;
          result[5] += 0.6510416666666666;
        } else {
          result[0] += 0;
          result[1] += 0.005747126436781609;
          result[2] += 0.022988505747126436;
          result[3] += 0.6666666666666666;
          result[4] += 0.022988505747126436;
          result[5] += 0.28160919540229884;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.1618705035971223;
          result[1] += 0.3345323741007194;
          result[2] += 0;
          result[3] += 0.007194244604316547;
          result[4] += 0.4784172661870504;
          result[5] += 0.017985611510791366;
        } else {
          result[0] += 0.8490408673894912;
          result[1] += 0.010008340283569641;
          result[2] += 0.011676396997497914;
          result[3] += 0.042535446205170975;
          result[4] += 0.04837364470391994;
          result[5] += 0.03836530442035029;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.003389830508474576;
          result[1] += 0.003389830508474576;
          result[2] += 0.2745762711864407;
          result[3] += 0.42033898305084744;
          result[4] += 0.003389830508474576;
          result[5] += 0.29491525423728815;
        } else {
          result[0] += 0.0421455938697318;
          result[1] += 0;
          result[2] += 0.8726053639846744;
          result[3] += 0.07279693486590039;
          result[4] += 0.0009578544061302681;
          result[5] += 0.011494252873563218;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8918918918918919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10810810810810811;
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
          result[0] += 0.0078125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01171875;
          result[4] += 0.9296875;
          result[5] += 0.05078125;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.020060180541624874;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06318956870611836;
          result[4] += 0.06920762286860582;
          result[5] += 0.847542627883651;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.04498269896193772;
          result[2] += 0.02422145328719723;
          result[3] += 0.47058823529411764;
          result[4] += 0.01730103806228374;
          result[5] += 0.38408304498269896;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.01990049751243781;
          result[1] += 0.4427860696517413;
          result[2] += 0.014925373134328358;
          result[3] += 0.004975124378109453;
          result[4] += 0.4975124378109453;
          result[5] += 0.01990049751243781;
        } else {
          result[0] += 0.6696859903381642;
          result[1] += 0.019927536231884056;
          result[2] += 0.0821256038647343;
          result[3] += 0.09601449275362318;
          result[4] += 0.059782608695652176;
          result[5] += 0.07246376811594203;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9949494949494949;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005050505050505051;
          result[5] += 0;
        } else {
          result[0] += 0.20588235294117646;
          result[1] += 0.5882352941176471;
          result[2] += 0;
          result[3] += 0.029411764705882353;
          result[4] += 0.17647058823529413;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.4166666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06818181818181818;
          result[3] += 0.13636363636363635;
          result[4] += 0.09090909090909091;
          result[5] += 0.7045454545454546;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.05714285714285714;
          result[2] += 0;
          result[3] += 0.6285714285714286;
          result[4] += 0.02857142857142857;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.014705882352941178;
          result[1] += 0;
          result[2] += 0.6323529411764707;
          result[3] += 0.33823529411764713;
          result[4] += 0;
          result[5] += 0.014705882352941178;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          result[0] += 0.08571428571428573;
          result[1] += 0.05714285714285715;
          result[2] += 0.1142857142857143;
          result[3] += 0.4571428571428572;
          result[4] += 0;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.8260869565217391;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001321003963011889;
          result[1] += 0;
          result[2] += 0.9431968295904888;
          result[3] += 0.05416116248348745;
          result[4] += 0;
          result[5] += 0.001321003963011889;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004016064257028112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9196787148594378;
          result[5] += 0.07630522088353414;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0189520624303233;
          result[1] += 0;
          result[2] += 0.0033444816053511705;
          result[3] += 0.04793756967670011;
          result[4] += 0.08472686733556299;
          result[5] += 0.8450390189520625;
        } else {
          result[0] += 0.1347305389221557;
          result[1] += 0.017964071856287425;
          result[2] += 0.05389221556886228;
          result[3] += 0.4041916167664671;
          result[4] += 0.08083832335329341;
          result[5] += 0.3083832335329341;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0.09523809523809523;
          result[4] += 0.5952380952380952;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.0023584905660377358;
          result[1] += 0.9481132075471698;
          result[2] += 0;
          result[3] += 0.0023584905660377358;
          result[4] += 0.04009433962264151;
          result[5] += 0.007075471698113208;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7878086419753086;
          result[1] += 0.030864197530864196;
          result[2] += 0.0030864197530864196;
          result[3] += 0.017746913580246913;
          result[4] += 0.10108024691358025;
          result[5] += 0.05941358024691358;
        } else {
          result[0] += 0.25333333333333335;
          result[1] += 0.0033333333333333335;
          result[2] += 0.26666666666666666;
          result[3] += 0.25666666666666665;
          result[4] += 0.02;
          result[5] += 0.2;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023809523809523808;
          result[4] += 0.35714285714285715;
          result[5] += 0.6190476190476191;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2788104089219331;
          result[3] += 0.49814126394052044;
          result[4] += 0;
          result[5] += 0.22304832713754646;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9137931034482759;
          result[3] += 0.017241379310344827;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.7857142857142857;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.52;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004756242568370986;
          result[1] += 0;
          result[2] += 0.9322235434007132;
          result[3] += 0.05350772889417359;
          result[4] += 0.0011890606420927464;
          result[5] += 0.008323424494649225;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.016304347826086956;
          result[1] += 0.005434782608695652;
          result[2] += 0.005434782608695652;
          result[3] += 0;
          result[4] += 0.967391304347826;
          result[5] += 0.005434782608695652;
        } else {
          result[0] += 0;
          result[1] += 0.36666666666666664;
          result[2] += 0.18333333333333332;
          result[3] += 0.016666666666666666;
          result[4] += 0.23333333333333334;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.022900763358778626;
          result[1] += 0.0010905125408942203;
          result[2] += 0;
          result[3] += 0.030534351145038167;
          result[4] += 0.08505997818974918;
          result[5] += 0.8604143947655398;
        } else {
          result[0] += 0.05448717948717949;
          result[1] += 0.022435897435897436;
          result[2] += 0.022435897435897436;
          result[3] += 0.4551282051282051;
          result[4] += 0.03205128205128205;
          result[5] += 0.41346153846153844;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3120759837177748;
          result[1] += 0.033921302578018994;
          result[2] += 0.06512890094979647;
          result[3] += 0.17774762550881953;
          result[4] += 0.1451831750339213;
          result[5] += 0.26594301221166894;
        } else {
          result[0] += 0.775692582663092;
          result[1] += 0.049151027703306524;
          result[2] += 0.04647006255585344;
          result[3] += 0.021447721179624665;
          result[4] += 0.0902591599642538;
          result[5] += 0.016979445933869526;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.0024570024570024574;
          result[1] += 0.9950859950859952;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024570024570024574;
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
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13793103448275862;
          result[3] += 0.735632183908046;
          result[4] += 0;
          result[5] += 0.12643678160919541;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5873015873015873;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8991596638655462;
          result[3] += 0.09243697478991597;
          result[4] += 0;
          result[5] += 0.008403361344537815;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.6666666666666667;
          result[1] += 0;
          result[2] += 0.11111111111111112;
          result[3] += 0.22222222222222224;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002544529262086514;
          result[1] += 0;
          result[2] += 0.9516539440203562;
          result[3] += 0.039440203562340966;
          result[4] += 0;
          result[5] += 0.006361323155216285;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0.009569377990430622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9665071770334929;
          result[5] += 0.019138755980861243;
        } else {
          result[0] += 0.4347826086956522;
          result[1] += 0;
          result[2] += 0.01863354037267081;
          result[3] += 0;
          result[4] += 0.329192546583851;
          result[5] += 0.2173913043478261;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0010460251046025104;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05753138075313807;
          result[4] += 0.04811715481171548;
          result[5] += 0.893305439330544;
        } else {
          result[0] += 0.002777777777777778;
          result[1] += 0.016666666666666666;
          result[2] += 0.030555555555555555;
          result[3] += 0.4527777777777778;
          result[4] += 0.03333333333333333;
          result[5] += 0.4638888888888889;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8130016051364366;
          result[1] += 0.0377207062600321;
          result[2] += 0.006420545746388443;
          result[3] += 0.020064205457463884;
          result[4] += 0.10593900481540931;
          result[5] += 0.016853932584269662;
        } else {
          result[0] += 0.19414893617021275;
          result[1] += 0.007978723404255319;
          result[2] += 0.2393617021276596;
          result[3] += 0.300531914893617;
          result[4] += 0.05851063829787234;
          result[5] += 0.19946808510638298;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08064516129032258;
          result[3] += 0.7580645161290323;
          result[4] += 0;
          result[5] += 0.16129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.7857142857142857;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0.19230769230769232;
          result[2] += 0.7115384615384616;
          result[3] += 0.038461538461538464;
          result[4] += 0.019230769230769232;
          result[5] += 0.038461538461538464;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)123) ) ) {
          result[0] += 0.002881844380403458;
          result[1] += 0;
          result[2] += 0.7752161383285303;
          result[3] += 0.207492795389049;
          result[4] += 0;
          result[5] += 0.01440922190201729;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0036166365280289334;
          result[1] += 0;
          result[2] += 0.9746835443037976;
          result[3] += 0.01808318264014467;
          result[4] += 0;
          result[5] += 0.0036166365280289334;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.046875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9270833333333334;
          result[5] += 0.026041666666666668;
        } else {
          result[0] += 0;
          result[1] += 0.02040816326530612;
          result[2] += 0;
          result[3] += 0.08163265306122448;
          result[4] += 0.42857142857142855;
          result[5] += 0.46938775510204084;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.032036613272311214;
          result[1] += 0.0011441647597254005;
          result[2] += 0;
          result[3] += 0.028604118993135013;
          result[4] += 0.06407322654462243;
          result[5] += 0.8741418764302059;
        } else {
          result[0] += 0.03439153439153439;
          result[1] += 0.0026455026455026454;
          result[2] += 0;
          result[3] += 0.4417989417989418;
          result[4] += 0.042328042328042326;
          result[5] += 0.47883597883597884;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
        } else {
          result[0] += 0.004454342984409799;
          result[1] += 0.977728285077951;
          result[2] += 0;
          result[3] += 0.004454342984409799;
          result[4] += 0.011135857461024499;
          result[5] += 0.0022271714922048997;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7294197031039136;
          result[1] += 0.04520917678812416;
          result[2] += 0.03576248313090418;
          result[3] += 0.03441295546558704;
          result[4] += 0.11605937921727395;
          result[5] += 0.03913630229419703;
        } else {
          result[0] += 0.1346704871060172;
          result[1] += 0.0057306590257879654;
          result[2] += 0.22063037249283668;
          result[3] += 0.3667621776504298;
          result[4] += 0.1174785100286533;
          result[5] += 0.15472779369627507;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.3409090909090909;
          result[4] += 0.045454545454545456;
          result[5] += 0.5227272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7209302325581396;
          result[3] += 0.2093023255813954;
          result[4] += 0.034883720930232565;
          result[5] += 0.034883720930232565;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0.34615384615384615;
          result[1] += 0.038461538461538464;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0.11538461538461539;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9492140266021766;
          result[3] += 0.0471584038694075;
          result[4] += 0;
          result[5] += 0.0036275695284159614;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.013953488372093025;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9767441860465117;
          result[5] += 0.00930232558139535;
        } else {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0.42857142857142855;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.04589114194236926;
          result[1] += 0.0021344717182497333;
          result[2] += 0;
          result[3] += 0.04589114194236926;
          result[4] += 0.07577374599786553;
          result[5] += 0.8303094983991463;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0547945205479452;
          result[3] += 0.5251141552511416;
          result[4] += 0;
          result[5] += 0.4200913242009132;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0.23404255319148937;
          result[2] += 0.04964539007092199;
          result[3] += 0.03546099290780142;
          result[4] += 0.6524822695035462;
          result[5] += 0.0070921985815602835;
        } else {
          result[0] += 0;
          result[1] += 0.9929577464788732;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007042253521126761;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8247011952191236;
          result[1] += 0.036653386454183264;
          result[2] += 0.012749003984063745;
          result[3] += 0.02390438247011952;
          result[4] += 0.07410358565737052;
          result[5] += 0.027888446215139442;
        } else {
          result[0] += 0.2887700534759358;
          result[1] += 0.026737967914438502;
          result[2] += 0.10160427807486631;
          result[3] += 0.32085561497326204;
          result[4] += 0.058823529411764705;
          result[5] += 0.20320855614973263;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09859154929577464;
          result[3] += 0.09859154929577464;
          result[4] += 0.04225352112676056;
          result[5] += 0.7605633802816901;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.004608294930875576;
          result[2] += 0.08294930875576037;
          result[3] += 0.6543778801843319;
          result[4] += 0.009216589861751152;
          result[5] += 0.2488479262672811;
        } else {
          result[0] += 0.0684931506849315;
          result[1] += 0.0273972602739726;
          result[2] += 0.6301369863013698;
          result[3] += 0.2328767123287671;
          result[4] += 0;
          result[5] += 0.0410958904109589;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0.26315789473684215;
          result[2] += 0.44736842105263164;
          result[3] += 0.13157894736842107;
          result[4] += 0.026315789473684213;
          result[5] += 0.13157894736842107;
        } else {
          result[0] += 0.8387096774193549;
          result[1] += 0;
          result[2] += 0.06451612903225806;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0.22777777777777777;
          result[4] += 0;
          result[5] += 0.16111111111111112;
        } else {
          result[0] += 0.009950248756218905;
          result[1] += 0.0024875621890547263;
          result[2] += 0.9440298507462687;
          result[3] += 0.036069651741293535;
          result[4] += 0.0012437810945273632;
          result[5] += 0.006218905472636816;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.014354066985645933;
          result[2] += 0.014354066985645933;
          result[3] += 0;
          result[4] += 0.9425837320574163;
          result[5] += 0.028708133971291867;
        } else {
          result[0] += 0.4680851063829788;
          result[1] += 0;
          result[2] += 0.021276595744680854;
          result[3] += 0;
          result[4] += 0.3297872340425532;
          result[5] += 0.18085106382978727;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.007042253521126761;
          result[2] += 0;
          result[3] += 0.056338028169014086;
          result[4] += 0.07847082494969819;
          result[5] += 0.858148893360161;
        } else {
          result[0] += 0.007142857142857143;
          result[1] += 0.04285714285714286;
          result[2] += 0.05357142857142857;
          result[3] += 0.5571428571428572;
          result[4] += 0.017857142857142856;
          result[5] += 0.32142857142857145;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.14893617021276595;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8297872340425532;
          result[5] += 0.02127659574468085;
        } else {
          result[0] += 0.009456264775413711;
          result[1] += 0.933806146572104;
          result[2] += 0.004728132387706856;
          result[3] += 0;
          result[4] += 0.05200945626477541;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8197492163009404;
          result[1] += 0.05642633228840126;
          result[2] += 0.0023510971786833857;
          result[3] += 0.019592476489028215;
          result[4] += 0.08620689655172414;
          result[5] += 0.01567398119122257;
        } else {
          result[0] += 0.16279069767441862;
          result[1] += 0.0033222591362126247;
          result[2] += 0.23920265780730898;
          result[3] += 0.26245847176079734;
          result[4] += 0.059800664451827246;
          result[5] += 0.2724252491694352;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.023255813953488372;
          result[4] += 0.046511627906976744;
          result[5] += 0.9069767441860465;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0.3055555555555556;
          result[5] += 0.4722222222222222;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.5966386554621849;
          result[4] += 0;
          result[5] += 0.2605042016806723;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6779661016949153;
          result[3] += 0.22033898305084748;
          result[4] += 0.016949152542372885;
          result[5] += 0.08474576271186442;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0.017857142857142856;
          result[2] += 0.4642857142857143;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.017857142857142856;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.009433962264150945;
          result[2] += 0.7452830188679246;
          result[3] += 0.19811320754716985;
          result[4] += 0.009433962264150945;
          result[5] += 0.03773584905660378;
        } else {
          result[0] += 0.020645161290322584;
          result[1] += 0;
          result[2] += 0.9251612903225808;
          result[3] += 0.04129032258064517;
          result[4] += 0.007741935483870969;
          result[5] += 0.005161290322580646;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.00749063670411985;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9662921348314607;
          result[5] += 0.026217228464419477;
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
          result[0] += 0.014806378132118452;
          result[1] += 0.004555808656036446;
          result[2] += 0;
          result[3] += 0.05808656036446469;
          result[4] += 0.06036446469248292;
          result[5] += 0.8621867881548975;
        } else {
          result[0] += 0.07901234567901234;
          result[1] += 0.022222222222222223;
          result[2] += 0.044444444444444446;
          result[3] += 0.37530864197530867;
          result[4] += 0.12098765432098765;
          result[5] += 0.35802469135802467;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6933523945675483;
          result[1] += 0.07505360972122944;
          result[2] += 0.01501072194424589;
          result[3] += 0.03859899928520372;
          result[4] += 0.10650464617583988;
          result[5] += 0.07147962830593281;
        } else {
          result[0] += 0.14925373134328357;
          result[1] += 0.012437810945273632;
          result[2] += 0.2835820895522388;
          result[3] += 0.23383084577114427;
          result[4] += 0.06218905472636816;
          result[5] += 0.25870646766169153;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.981081081081081;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01891891891891892;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.02702702702702703;
          result[4] += 0.1891891891891892;
          result[5] += 0.7567567567567568;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0.0784313725490196;
          result[1] += 0;
          result[2] += 0.0392156862745098;
          result[3] += 0.8235294117647058;
          result[4] += 0.0196078431372549;
          result[5] += 0.0392156862745098;
        } else {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0.5714285714285714;
          result[3] += 0.2619047619047619;
          result[4] += 0;
          result[5] += 0.11904761904761904;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.2916666666666667;
          result[1] += 0.125;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6860465116279071;
          result[3] += 0.2674418604651163;
          result[4] += 0;
          result[5] += 0.04651162790697675;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03482587064676618;
          result[1] += 0;
          result[2] += 0.8159203980099503;
          result[3] += 0.1393034825870647;
          result[4] += 0;
          result[5] += 0.009950248756218907;
        } else {
          result[0] += 0.001584786053882726;
          result[1] += 0.001584786053882726;
          result[2] += 0.9698890649762282;
          result[3] += 0.02694136291600634;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
          result[0] += 0.010050251256281407;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9597989949748744;
          result[5] += 0.03015075376884422;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.9042553191489362;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.0425531914893617;
          result[5] += 0.031914893617021274;
        } else {
          result[0] += 0.01;
          result[1] += 0.01;
          result[2] += 0.11;
          result[3] += 0.02;
          result[4] += 0.44;
          result[5] += 0.41;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8529411764705882;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.010332950631458095;
          result[1] += 0.002296211251435132;
          result[2] += 0;
          result[3] += 0.05970149253731343;
          result[4] += 0.05855338691159587;
          result[5] += 0.8691159586681975;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.005649717514124294;
          result[2] += 0.01694915254237288;
          result[3] += 0.3050847457627119;
          result[4] += 0.011299435028248588;
          result[5] += 0.6610169491525424;
        } else {
          result[0] += 0.007662835249042145;
          result[1] += 0;
          result[2] += 0.019157088122605363;
          result[3] += 0.685823754789272;
          result[4] += 0.007662835249042145;
          result[5] += 0.2796934865900383;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9863945578231292;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013605442176870748;
          result[5] += 0;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.27205882352941174;
          result[2] += 0;
          result[3] += 0.007352941176470588;
          result[4] += 0.6617647058823529;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
          result[0] += 0.22413793103448276;
          result[1] += 0.008620689655172414;
          result[2] += 0.2672413793103448;
          result[3] += 0.1810344827586207;
          result[4] += 0.05172413793103448;
          result[5] += 0.2672413793103448;
        } else {
          result[0] += 0.8763736263736265;
          result[1] += 0.011904761904761906;
          result[2] += 0.013736263736263738;
          result[3] += 0.03113553113553114;
          result[4] += 0.05494505494505495;
          result[5] += 0.011904761904761906;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.037037037037037035;
          result[1] += 0.8148148148148148;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14814814814814814;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02380952380952381;
          result[2] += 0.261904761904762;
          result[3] += 0.2936507936507937;
          result[4] += 0.015873015873015876;
          result[5] += 0.4047619047619048;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.3230769230769231;
          result[3] += 0.5076923076923077;
          result[4] += 0;
          result[5] += 0.13846153846153847;
        } else {
          result[0] += 0.03151065801668211;
          result[1] += 0.0009267840593141798;
          result[2] += 0.8637627432808156;
          result[3] += 0.082483781278962;
          result[4] += 0.006487488415199258;
          result[5] += 0.014828544949026877;
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
