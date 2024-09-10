
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0.023715415019762844;
          result[1] += 0;
          result[2] += 0.007905138339920948;
          result[3] += 0;
          result[4] += 0.9367588932806324;
          result[5] += 0.03162055335968379;
        } else {
          result[0] += 0.3695652173913043;
          result[1] += 0.06521739130434782;
          result[2] += 0.021739130434782608;
          result[3] += 0.05434782608695652;
          result[4] += 0.22826086956521738;
          result[5] += 0.2608695652173913;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.002157497303128371;
          result[1] += 0.004314994606256742;
          result[2] += 0;
          result[3] += 0.03344120819848975;
          result[4] += 0.09924487594390508;
          result[5] += 0.86084142394822;
        } else {
          result[0] += 0;
          result[1] += 0.005633802816901409;
          result[2] += 0;
          result[3] += 0.476056338028169;
          result[4] += 0.02535211267605634;
          result[5] += 0.49295774647887325;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
          result[0] += 0.009900990099009901;
          result[1] += 0.297029702970297;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6831683168316832;
          result[5] += 0.009900990099009901;
        } else {
          result[0] += 0;
          result[1] += 0.9883177570093458;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011682242990654205;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8591033851784081;
          result[1] += 0.02744739249771272;
          result[2] += 0.002744739249771272;
          result[3] += 0.021043000914913085;
          result[4] += 0.07959743824336689;
          result[5] += 0.010064043915827998;
        } else {
          result[0] += 0.1738197424892704;
          result[1] += 0.02789699570815451;
          result[2] += 0.2253218884120172;
          result[3] += 0.3433476394849786;
          result[4] += 0.03648068669527898;
          result[5] += 0.19313304721030045;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0.056818181818181816;
          result[2] += 0.6363636363636364;
          result[3] += 0.07954545454545454;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0.018018018018018018;
          result[1] += 0;
          result[2] += 0.8243243243243243;
          result[3] += 0.14414414414414414;
          result[4] += 0;
          result[5] += 0.013513513513513514;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.0013869625520110957;
          result[1] += 0;
          result[2] += 0.9597780859916782;
          result[3] += 0.03467406380027739;
          result[4] += 0;
          result[5] += 0.004160887656033287;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.0048543689320388345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9951456310679612;
          result[5] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7428571428571429;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08;
          result[1] += 0;
          result[2] += 0.013333333333333334;
          result[3] += 0;
          result[4] += 0.44;
          result[5] += 0.4666666666666667;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.001388888888888889;
          result[2] += 0;
          result[3] += 0.02361111111111111;
          result[4] += 0.02638888888888889;
          result[5] += 0.9486111111111111;
        } else {
          result[0] += 0.01680672268907563;
          result[1] += 0.008403361344537815;
          result[2] += 0;
          result[3] += 0.1722689075630252;
          result[4] += 0.18907563025210083;
          result[5] += 0.6134453781512605;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.05825242718446602;
          result[2] += 0;
          result[3] += 0.17475728155339806;
          result[4] += 0.13592233009708737;
          result[5] += 0.6310679611650486;
        } else {
          result[0] += 0;
          result[1] += 0.018050541516245487;
          result[2] += 0.007220216606498195;
          result[3] += 0.6714801444043321;
          result[4] += 0.039711191335740074;
          result[5] += 0.26353790613718414;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8936170212765957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10638297872340426;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          result[0] += 0.3753424657534247;
          result[1] += 0.027397260273972605;
          result[2] += 0.09315068493150687;
          result[3] += 0.1041095890410959;
          result[4] += 0.28767123287671237;
          result[5] += 0.11232876712328768;
        } else {
          result[0] += 0.8205374280230326;
          result[1] += 0.04030710172744722;
          result[2] += 0.016314779270633396;
          result[3] += 0.02111324376199616;
          result[4] += 0.08157389635316699;
          result[5] += 0.02015355086372361;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0.010638297872340427;
          result[1] += 0.06382978723404256;
          result[2] += 0.08510638297872342;
          result[3] += 0.6702127659574469;
          result[4] += 0.04255319148936171;
          result[5] += 0.12765957446808512;
        } else {
          result[0] += 0.04433497536945813;
          result[1] += 0.009852216748768473;
          result[2] += 0.4975369458128079;
          result[3] += 0.2512315270935961;
          result[4] += 0.024630541871921183;
          result[5] += 0.1724137931034483;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0.11594202898550725;
          result[1] += 0.15942028985507245;
          result[2] += 0.43478260869565216;
          result[3] += 0.2028985507246377;
          result[4] += 0.043478260869565216;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0.04333694474539545;
          result[1] += 0.0021668472372697724;
          result[2] += 0.9024918743228603;
          result[3] += 0.050920910075839654;
          result[4] += 0;
          result[5] += 0.0010834236186348862;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0.004081632653061225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0;
          result[1] += 0.05;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0.45;
          result[5] += 0.35;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.5384615384615384;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.7407407407407407;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2037037037037037;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002068252326783868;
          result[2] += 0;
          result[3] += 0.047569803516028956;
          result[4] += 0.07135470527404343;
          result[5] += 0.8790072388831437;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
          result[0] += 0.007246376811594203;
          result[1] += 0;
          result[2] += 0.018115942028985508;
          result[3] += 0.5869565217391305;
          result[4] += 0.025362318840579712;
          result[5] += 0.36231884057971014;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.22727272727272727;
          result[2] += 0.6818181818181818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.16279069767441862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8372093023255814;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9928909952606635;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0071090047393364926;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          result[0] += 0.1320754716981132;
          result[1] += 0.22169811320754718;
          result[2] += 0.02358490566037736;
          result[3] += 0.10849056603773585;
          result[4] += 0.45754716981132076;
          result[5] += 0.05660377358490566;
        } else {
          result[0] += 0.7940503432494279;
          result[1] += 0.014492753623188406;
          result[2] += 0.018306636155606407;
          result[3] += 0.06178489702517163;
          result[4] += 0.05644546147978642;
          result[5] += 0.05491990846681922;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.09230769230769231;
          result[4] += 0.09230769230769231;
          result[5] += 0.7384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3008849557522124;
          result[3] += 0.4778761061946903;
          result[4] += 0;
          result[5] += 0.22123893805309736;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0.027522935779816515;
          result[1] += 0.01834862385321101;
          result[2] += 0.3394495412844037;
          result[3] += 0.45871559633027525;
          result[4] += 0.05504587155963303;
          result[5] += 0.10091743119266056;
        } else {
          result[0] += 0.02436440677966101;
          result[1] += 0.0031779661016949146;
          result[2] += 0.8983050847457625;
          result[3] += 0.062499999999999986;
          result[4] += 0.0031779661016949146;
          result[5] += 0.008474576271186439;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.015209125475285171;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9391634980988594;
          result[5] += 0.045627376425855515;
        } else {
          result[0] += 0;
          result[1] += 0.9565217391304348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045020463847203276;
          result[4] += 0.023192360163710776;
          result[5] += 0.931787175989086;
        } else {
          result[0] += 0.10922787193973635;
          result[1] += 0.0018832391713747645;
          result[2] += 0.0018832391713747645;
          result[3] += 0.3107344632768362;
          result[4] += 0.08851224105461393;
          result[5] += 0.487758945386064;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.0024390243902439024;
          result[1] += 0.9878048780487805;
          result[2] += 0.0024390243902439024;
          result[3] += 0;
          result[4] += 0.007317073170731708;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.715312724658519;
          result[1] += 0.04672897196261682;
          result[2] += 0.014378145219266714;
          result[3] += 0.029475197699496764;
          result[4] += 0.12580877066858376;
          result[5] += 0.0682961897915169;
        } else {
          result[0] += 0.128125;
          result[1] += 0.046875;
          result[2] += 0.18125;
          result[3] += 0.346875;
          result[4] += 0.078125;
          result[5] += 0.21875;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26136363636363635;
          result[3] += 0.6363636363636364;
          result[4] += 0.011363636363636364;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.7333333333333333;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.4222222222222222;
          result[4] += 0;
          result[5] += 0.17777777777777778;
        } else {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.8358974358974359;
          result[3] += 0.11282051282051282;
          result[4] += 0;
          result[5] += 0.020512820512820513;
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
          result[0] += 0.005517241379310344;
          result[1] += 0;
          result[2] += 0.9572413793103448;
          result[3] += 0.03310344827586207;
          result[4] += 0;
          result[5] += 0.004137931034482759;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.004878048780487805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9951219512195122;
          result[5] += 0;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7058823529411765;
          result[5] += 0.2647058823529412;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.027611044417767107;
          result[1] += 0;
          result[2] += 0.0024009603841536613;
          result[3] += 0.030012004801920768;
          result[4] += 0.060024009603841535;
          result[5] += 0.879951980792317;
        } else {
          result[0] += 0.051111111111111114;
          result[1] += 0.03777777777777778;
          result[2] += 0.06;
          result[3] += 0.4;
          result[4] += 0.013333333333333334;
          result[5] += 0.43777777777777777;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.03571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0.9957537154989384;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004246284501061571;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7942689199118296;
          result[1] += 0.028655400440852314;
          result[2] += 0.010286554004408524;
          result[3] += 0.020573108008817047;
          result[4] += 0.12417340191036003;
          result[5] += 0.02204261572373255;
        } else {
          result[0] += 0.15217391304347827;
          result[1] += 0.02717391304347826;
          result[2] += 0.23097826086956522;
          result[3] += 0.296195652173913;
          result[4] += 0.07608695652173914;
          result[5] += 0.21739130434782608;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.06122448979591837;
          result[2] += 0.0816326530612245;
          result[3] += 0.7551020408163266;
          result[4] += 0;
          result[5] += 0.10204081632653063;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          result[0] += 0.056338028169014086;
          result[1] += 0.07042253521126761;
          result[2] += 0.36619718309859156;
          result[3] += 0.43661971830985913;
          result[4] += 0.014084507042253521;
          result[5] += 0.056338028169014086;
        } else {
          result[0] += 0.04166666666666667;
          result[1] += 0;
          result[2] += 0.8055555555555557;
          result[3] += 0.01388888888888889;
          result[4] += 0.06944444444444446;
          result[5] += 0.06944444444444446;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7209302325581396;
          result[3] += 0.23255813953488375;
          result[4] += 0;
          result[5] += 0.04651162790697675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9478260869565217;
          result[3] += 0.05217391304347826;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8208955223880597;
          result[3] += 0.13432835820895522;
          result[4] += 0;
          result[5] += 0.04477611940298507;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9862745098039216;
          result[3] += 0.013725490196078431;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.007352941176470588;
          result[1] += 0.025735294117647058;
          result[2] += 0.003676470588235294;
          result[3] += 0;
          result[4] += 0.9411764705882353;
          result[5] += 0.022058823529411766;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04177545691906005;
          result[4] += 0.033942558746736295;
          result[5] += 0.9242819843342036;
        } else {
          result[0] += 0.07114624505928854;
          result[1] += 0.029644268774703556;
          result[2] += 0.029644268774703556;
          result[3] += 0.35375494071146246;
          result[4] += 0.1007905138339921;
          result[5] += 0.4150197628458498;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0.12195121951219512;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8414634146341463;
          result[5] += 0.012195121951219513;
        } else {
          result[0] += 0.00211864406779661;
          result[1] += 0.9555084745762712;
          result[2] += 0.00423728813559322;
          result[3] += 0.006355932203389831;
          result[4] += 0.03177966101694915;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8131776480400333;
          result[1] += 0.03669724770642202;
          result[2] += 0.025020850708924104;
          result[3] += 0.02835696413678065;
          result[4] += 0.060050041701417846;
          result[5] += 0.03669724770642202;
        } else {
          result[0] += 0.13829787234042554;
          result[1] += 0.029787234042553193;
          result[2] += 0.2553191489361702;
          result[3] += 0.2574468085106383;
          result[4] += 0.05531914893617021;
          result[5] += 0.26382978723404255;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.07692307692307693;
          result[5] += 0.8461538461538461;
        } else {
          result[0] += 0;
          result[1] += 0.020833333333333332;
          result[2] += 0.2604166666666667;
          result[3] += 0.3020833333333333;
          result[4] += 0.15625;
          result[5] += 0.2604166666666667;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)114) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.08;
          result[4] += 0.013333333333333334;
          result[5] += 0.10666666666666667;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0.46875;
          result[4] += 0;
          result[5] += 0.09375;
        } else {
          result[0] += 0;
          result[1] += 0.005154639175257732;
          result[2] += 0.8298969072164949;
          result[3] += 0.15979381443298968;
          result[4] += 0;
          result[5] += 0.005154639175257732;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8108108108108109;
          result[3] += 0.1891891891891892;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9825783972125436;
          result[3] += 0.017421602787456445;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0044444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9777777777777777;
          result[5] += 0.017777777777777778;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11538461538461539;
          result[4] += 0.3076923076923077;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05565371024734982;
          result[1] += 0.0035335689045936395;
          result[2] += 0;
          result[3] += 0.05830388692579505;
          result[4] += 0.0812720848056537;
          result[5] += 0.8012367491166078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011111111111111112;
          result[3] += 0.6444444444444445;
          result[4] += 0;
          result[5] += 0.34444444444444444;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.2246376811594203;
          result[2] += 0.021739130434782608;
          result[3] += 0.007246376811594203;
          result[4] += 0.717391304347826;
          result[5] += 0.007246376811594203;
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
          result[0] += 0.8671808054841474;
          result[1] += 0.042844901456726654;
          result[2] += 0.009425878320479865;
          result[3] += 0.01628106255355613;
          result[4] += 0.059982862039417315;
          result[5] += 0.004284490145672666;
        } else {
          result[0] += 0.17595307917888564;
          result[1] += 0.01466275659824047;
          result[2] += 0.21700879765395895;
          result[3] += 0.26099706744868034;
          result[4] += 0.07917888563049853;
          result[5] += 0.25219941348973607;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8518518518518519;
          result[4] += 0;
          result[5] += 0.14814814814814814;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4634146341463415;
          result[3] += 0.4878048780487805;
          result[4] += 0;
          result[5] += 0.04878048780487805;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05714285714285714;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.34285714285714286;
          result[4] += 0.02857142857142857;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.03773584905660377;
          result[1] += 0;
          result[2] += 0.8490566037735849;
          result[3] += 0.07547169811320754;
          result[4] += 0;
          result[5] += 0.03773584905660377;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8833333333333333;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0.004678362573099415;
          result[1] += 0;
          result[2] += 0.9450292397660819;
          result[3] += 0.047953216374269005;
          result[4] += 0;
          result[5] += 0.0023391812865497076;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.01809954751131222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9592760180995475;
          result[5] += 0.02262443438914027;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03027027027027027;
          result[1] += 0;
          result[2] += 0.002162162162162162;
          result[3] += 0.04972972972972973;
          result[4] += 0.04972972972972973;
          result[5] += 0.8681081081081081;
        } else {
          result[0] += 0.05;
          result[1] += 0.0975;
          result[2] += 0.0325;
          result[3] += 0.41;
          result[4] += 0.0225;
          result[5] += 0.3875;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          result[0] += 0.4638671875;
          result[1] += 0.046875;
          result[2] += 0.0498046875;
          result[3] += 0.1298828125;
          result[4] += 0.181640625;
          result[5] += 0.1279296875;
        } else {
          result[0] += 0.9347471451876019;
          result[1] += 0.0032626427406199023;
          result[2] += 0.03099510603588907;
          result[3] += 0;
          result[4] += 0.02936378466557912;
          result[5] += 0.0016313213703099511;
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
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
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
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          result[0] += 0.031914893617021274;
          result[1] += 0.02127659574468085;
          result[2] += 0.06382978723404255;
          result[3] += 0.07446808510638298;
          result[4] += 0.18085106382978725;
          result[5] += 0.6276595744680851;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21621621621621623;
          result[3] += 0.5135135135135135;
          result[4] += 0.013513513513513514;
          result[5] += 0.25675675675675674;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0.03508771929824562;
          result[1] += 0;
          result[2] += 0.4035087719298246;
          result[3] += 0.5263157894736843;
          result[4] += 0;
          result[5] += 0.03508771929824562;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.07017543859649122;
          result[4] += 0;
          result[5] += 0.043859649122807015;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          result[0] += 0.017482517482517484;
          result[1] += 0;
          result[2] += 0.8496503496503497;
          result[3] += 0.12937062937062938;
          result[4] += 0;
          result[5] += 0.0034965034965034965;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9795158286778398;
          result[3] += 0.020484171322160148;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.01282051282051282;
          result[2] += 0;
          result[3] += 0.017094017094017096;
          result[4] += 0.9487179487179487;
          result[5] += 0.021367521367521368;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.06666666666666667;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006112469437652812;
          result[3] += 0.03667481662591687;
          result[4] += 0.05378973105134474;
          result[5] += 0.9034229828850856;
        } else {
          result[0] += 0.07741935483870968;
          result[1] += 0.012903225806451613;
          result[2] += 0.03870967741935484;
          result[3] += 0.34408602150537637;
          result[4] += 0.06236559139784946;
          result[5] += 0.4645161290322581;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9925742574257426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007425742574257425;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7399425287356322;
          result[1] += 0.041666666666666664;
          result[2] += 0.0021551724137931034;
          result[3] += 0.02442528735632184;
          result[4] += 0.15445402298850575;
          result[5] += 0.03735632183908046;
        } else {
          result[0] += 0.1743119266055046;
          result[1] += 0.009174311926605505;
          result[2] += 0.2775229357798165;
          result[3] += 0.2591743119266055;
          result[4] += 0.0389908256880734;
          result[5] += 0.2408256880733945;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07407407407407407;
          result[5] += 0.9259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.20833333333333334;
          result[3] += 0.5972222222222222;
          result[4] += 0.027777777777777776;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0;
          result[2] += 0.8363636363636363;
          result[3] += 0.03636363636363636;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.8235294117647058;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0.7192982456140351;
          result[3] += 0.23684210526315788;
          result[4] += 0;
          result[5] += 0.03508771929824561;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0026666666666666666;
          result[1] += 0;
          result[2] += 0.9573333333333334;
          result[3] += 0.03333333333333333;
          result[4] += 0;
          result[5] += 0.006666666666666667;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.021505376344086027;
          result[1] += 0.03225806451612904;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.924731182795699;
          result[5] += 0.021505376344086027;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3181818181818182;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.15942028985507248;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6231884057971016;
          result[5] += 0.2173913043478261;
        } else {
          result[0] += 0.004282655246252677;
          result[1] += 0.0032119914346895075;
          result[2] += 0.008565310492505354;
          result[3] += 0.08137044967880086;
          result[4] += 0.03640256959314775;
          result[5] += 0.8661670235546038;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0.004962779156327543;
          result[1] += 0.9925558312655087;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024813895781637717;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7136958017894013;
          result[1] += 0.04611149346180317;
          result[2] += 0.007570543702684102;
          result[3] += 0.04679972470750172;
          result[4] += 0.13695801789401238;
          result[5] += 0.048864418444597386;
        } else {
          result[0] += 0.11055276381909548;
          result[1] += 0.010050251256281407;
          result[2] += 0.18257956448911222;
          result[3] += 0.35510887772194305;
          result[4] += 0.06365159128978225;
          result[5] += 0.2780569514237856;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.9444444444444444;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0.11764705882352941;
          result[2] += 0.029411764705882353;
          result[3] += 0.38235294117647056;
          result[4] += 0.058823529411764705;
          result[5] += 0.38235294117647056;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0.7894736842105263;
          result[4] += 0;
          result[5] += 0.10526315789473684;
        } else {
          result[0] += 0.022222222222222223;
          result[1] += 0;
          result[2] += 0.7555555555555555;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6230769230769231;
          result[3] += 0.3076923076923077;
          result[4] += 0.023076923076923078;
          result[5] += 0.046153846153846156;
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
          result[0] += 0.4444444444444444;
          result[1] += 0.037037037037037035;
          result[2] += 0.5185185185185185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004778972520908005;
          result[1] += 0;
          result[2] += 0.943847072879331;
          result[3] += 0.03823178016726404;
          result[4] += 0;
          result[5] += 0.013142174432497015;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0.004081632653061225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9510204081632653;
          result[5] += 0.04081632653061224;
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
          result[0] += 0.03402061855670103;
          result[1] += 0.0010309278350515464;
          result[2] += 0;
          result[3] += 0.04329896907216495;
          result[4] += 0.07525773195876288;
          result[5] += 0.8463917525773196;
        } else {
          result[0] += 0.0779510022271715;
          result[1] += 0.008908685968819599;
          result[2] += 0.008908685968819599;
          result[3] += 0.46325167037861914;
          result[4] += 0.08240534521158129;
          result[5] += 0.3585746102449889;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.02631578947368421;
          result[3] += 0.008771929824561403;
          result[4] += 0.6228070175438597;
          result[5] += 0.008771929824561403;
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
          result[0] += 0.8434704830053668;
          result[1] += 0.03756708407871199;
          result[2] += 0.0026833631484794273;
          result[3] += 0.0259391771019678;
          result[4] += 0.07513416815742398;
          result[5] += 0.01520572450805009;
        } else {
          result[0] += 0.2074074074074074;
          result[1] += 0.06296296296296296;
          result[2] += 0.1259259259259259;
          result[3] += 0.2962962962962963;
          result[4] += 0.08148148148148149;
          result[5] += 0.22592592592592592;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2605042016806723;
          result[3] += 0.6554621848739496;
          result[4] += 0;
          result[5] += 0.08403361344537816;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17391304347826086;
          result[3] += 0.5652173913043478;
          result[4] += 0;
          result[5] += 0.2608695652173913;
        } else {
          result[0] += 0.025423728813559324;
          result[1] += 0;
          result[2] += 0.7542372881355932;
          result[3] += 0.13559322033898305;
          result[4] += 0;
          result[5] += 0.0847457627118644;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          result[0] += 0.5652173913043479;
          result[1] += 0;
          result[2] += 0.3478260869565218;
          result[3] += 0;
          result[4] += 0.04347826086956522;
          result[5] += 0.04347826086956522;
        } else {
          result[0] += 0.005494505494505495;
          result[1] += 0;
          result[2] += 0.9384615384615385;
          result[3] += 0.05274725274725275;
          result[4] += 0;
          result[5] += 0.0032967032967032967;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.03349282296650718;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9665071770334929;
          result[5] += 0;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0.18085106382978725;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.44680851063829785;
          result[5] += 0.32978723404255317;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.7474747474747475;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08080808080808081;
          result[4] += 0.04040404040404041;
          result[5] += 0.13131313131313133;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.04444444444444445;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8222222222222223;
          result[5] += 0.13333333333333336;
        } else {
          result[0] += 0.005905511811023622;
          result[1] += 0;
          result[2] += 0.000984251968503937;
          result[3] += 0.08169291338582677;
          result[4] += 0.0531496062992126;
          result[5] += 0.8582677165354331;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0.00851063829787234;
          result[1] += 0;
          result[2] += 0.01702127659574468;
          result[3] += 0.6851063829787234;
          result[4] += 0.02553191489361702;
          result[5] += 0.26382978723404255;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0.16071428571428573;
          result[4] += 0;
          result[5] += 0.4107142857142857;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9484029484029484;
          result[2] += 0;
          result[3] += 0.012285012285012284;
          result[4] += 0.02457002457002457;
          result[5] += 0.014742014742014743;
        } else {
          result[0] += 0;
          result[1] += 0.2403846153846154;
          result[2] += 0.028846153846153848;
          result[3] += 0;
          result[4] += 0.6538461538461539;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8933074684772067;
          result[1] += 0.021338506304558684;
          result[2] += 0;
          result[3] += 0.015518913676042679;
          result[4] += 0.06110572259941805;
          result[5] += 0.008729388942774008;
        } else {
          result[0] += 0.2985074626865672;
          result[1] += 0.02985074626865672;
          result[2] += 0.09950248756218907;
          result[3] += 0.22885572139303487;
          result[4] += 0.06965174129353235;
          result[5] += 0.27363184079601993;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0.0379746835443038;
          result[1] += 0.1518987341772152;
          result[2] += 0.0379746835443038;
          result[3] += 0.10126582278481013;
          result[4] += 0.10126582278481013;
          result[5] += 0.569620253164557;
        } else {
          result[0] += 0.09053497942386832;
          result[1] += 0;
          result[2] += 0.35802469135802467;
          result[3] += 0.4279835390946502;
          result[4] += 0.012345679012345678;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          result[0] += 0.296875;
          result[1] += 0;
          result[2] += 0.578125;
          result[3] += 0.046875;
          result[4] += 0;
          result[5] += 0.078125;
        } else {
          result[0] += 0.008130081300813009;
          result[1] += 0;
          result[2] += 0.9349593495934959;
          result[3] += 0.05226480836236934;
          result[4] += 0;
          result[5] += 0.004645760743321719;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0.01090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9527272727272728;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.5403225806451613;
          result[1] += 0.016129032258064516;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1532258064516129;
          result[5] += 0.2903225806451613;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.003468208092485549;
          result[2] += 0;
          result[3] += 0.04277456647398844;
          result[4] += 0.046242774566473986;
          result[5] += 0.9075144508670521;
        } else {
          result[0] += 0;
          result[1] += 0.03549060542797495;
          result[2] += 0.06263048016701461;
          result[3] += 0.4551148225469729;
          result[4] += 0.05219206680584551;
          result[5] += 0.3945720250521921;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0.022988505747126436;
          result[1] += 0.19540229885057472;
          result[2] += 0;
          result[3] += 0.011494252873563218;
          result[4] += 0.7701149425287356;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.983132530120482;
          result[2] += 0.004819277108433735;
          result[3] += 0;
          result[4] += 0.012048192771084338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8180272108843538;
          result[1] += 0.028061224489795922;
          result[2] += 0;
          result[3] += 0.024659863945578234;
          result[4] += 0.08503401360544219;
          result[5] += 0.04421768707482994;
        } else {
          result[0] += 0.23513513513513515;
          result[1] += 0.04594594594594595;
          result[2] += 0.25405405405405407;
          result[3] += 0.21891891891891893;
          result[4] += 0.062162162162162166;
          result[5] += 0.1837837837837838;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.06451612903225806;
          result[2] += 0.1935483870967742;
          result[3] += 0.0967741935483871;
          result[4] += 0.06451612903225806;
          result[5] += 0.5806451612903226;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3783783783783784;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.12162162162162163;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8023255813953488;
          result[3] += 0.1744186046511628;
          result[4] += 0;
          result[5] += 0.023255813953488372;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.004825090470446321;
          result[1] += 0;
          result[2] += 0.9445114595898674;
          result[3] += 0.042219541616405315;
          result[4] += 0;
          result[5] += 0.008443908323281063;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004132231404958679;
          result[1] += 0.004132231404958679;
          result[2] += 0.008264462809917357;
          result[3] += 0;
          result[4] += 0.9421487603305786;
          result[5] += 0.041322314049586785;
        } else {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0.08333333333333333;
          result[3] += 0.05555555555555555;
          result[4] += 0.16666666666666666;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.009269988412514484;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04519119351100811;
          result[4] += 0.08227114716106605;
          result[5] += 0.8632676709154113;
        } else {
          result[0] += 0.054404145077720206;
          result[1] += 0.007772020725388601;
          result[2] += 0.02072538860103627;
          result[3] += 0.44041450777202074;
          result[4] += 0.05699481865284974;
          result[5] += 0.41968911917098445;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9825;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0175;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7306325515280739;
          result[1] += 0.06041222459132907;
          result[2] += 0.021321961620469083;
          result[3] += 0.031982942430703626;
          result[4] += 0.12366737739872068;
          result[5] += 0.031982942430703626;
        } else {
          result[0] += 0.18295739348370926;
          result[1] += 0.017543859649122806;
          result[2] += 0.24060150375939848;
          result[3] += 0.2932330827067669;
          result[4] += 0.047619047619047616;
          result[5] += 0.21804511278195488;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0;
          result[4] += 0.038461538461538464;
          result[5] += 0.9230769230769231;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.5833333333333334;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28070175438596495;
          result[3] += 0.4035087719298246;
          result[4] += 0.03508771929824562;
          result[5] += 0.28070175438596495;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03767123287671233;
          result[1] += 0.00684931506849315;
          result[2] += 0.7328767123287672;
          result[3] += 0.15753424657534246;
          result[4] += 0;
          result[5] += 0.06506849315068493;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8776978417266187;
          result[3] += 0.1223021582733813;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9944341372912802;
          result[3] += 0.0037105751391465678;
          result[4] += 0;
          result[5] += 0.0018552875695732839;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
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
          result[4] += 0.9765258215962441;
          result[5] += 0.023474178403755867;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6875;
          result[5] += 0.3125;
        } else {
          result[0] += 0;
          result[1] += 0.8620689655172414;
          result[2] += 0;
          result[3] += 0.03448275862068966;
          result[4] += 0.03448275862068966;
          result[5] += 0.06896551724137932;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.78125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21875;
          result[5] += 0;
        } else {
          result[0] += 0.00644468313641246;
          result[1] += 0.0010741138560687433;
          result[2] += 0.0010741138560687433;
          result[3] += 0.031149301825993556;
          result[4] += 0.05477980665950591;
          result[5] += 0.9054779806659506;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0.020100502512562814;
          result[1] += 0.005025125628140704;
          result[2] += 0.08040201005025126;
          result[3] += 0.3165829145728643;
          result[4] += 0.020100502512562814;
          result[5] += 0.5577889447236181;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014184397163120567;
          result[3] += 0.7163120567375887;
          result[4] += 0.0070921985815602835;
          result[5] += 0.2624113475177305;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9894179894179894;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010582010582010581;
          result[5] += 0;
        } else {
          result[0] += 0.19607843137254902;
          result[1] += 0.6470588235294118;
          result[2] += 0;
          result[3] += 0.0196078431372549;
          result[4] += 0.13725490196078433;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0.33516483516483514;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5934065934065934;
          result[5] += 0.03296703296703297;
        } else {
          result[0] += 0.7522679692951849;
          result[1] += 0.013956734124214934;
          result[2] += 0.034193998604326585;
          result[3] += 0.07397069085833916;
          result[4] += 0.07048150732728542;
          result[5] += 0.05512909979064899;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.02857142857142857;
          result[1] += 0.04285714285714286;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.17142857142857143;
          result[5] += 0.6571428571428571;
        } else {
          result[0] += 0.004651162790697674;
          result[1] += 0;
          result[2] += 0.3674418604651163;
          result[3] += 0.5023255813953489;
          result[4] += 0.013953488372093023;
          result[5] += 0.11162790697674418;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.052631578947368425;
          result[2] += 0.33333333333333337;
          result[3] += 0.01754385964912281;
          result[4] += 0.2105263157894737;
          result[5] += 0.3859649122807018;
        } else {
          result[0] += 0.009512485136741973;
          result[1] += 0;
          result[2] += 0.9405469678953626;
          result[3] += 0.04518430439952437;
          result[4] += 0;
          result[5] += 0.0047562425683709865;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
