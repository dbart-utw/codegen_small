
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.0047169811320754715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9952830188679245;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013003901170351106;
          result[2] += 0;
          result[3] += 0.03901170351105332;
          result[4] += 0.053315994798439535;
          result[5] += 0.9063719115734721;
        } else {
          result[0] += 0.0903954802259887;
          result[1] += 0.011299435028248588;
          result[2] += 0.022598870056497175;
          result[3] += 0.3239171374764595;
          result[4] += 0.09792843691148775;
          result[5] += 0.4538606403013183;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.325;
          result[2] += 0;
          result[3] += 0.0375;
          result[4] += 0.6375;
          result[5] += 0;
        } else {
          result[0] += 0.004175365344467641;
          result[1] += 0.9791231732776619;
          result[2] += 0.004175365344467641;
          result[3] += 0.004175365344467641;
          result[4] += 0.008350730688935283;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8181818181818182;
          result[1] += 0.03194103194103194;
          result[2] += 0;
          result[3] += 0.036855036855036855;
          result[4] += 0.08845208845208845;
          result[5] += 0.02457002457002457;
        } else {
          result[0] += 0.1897810218978102;
          result[1] += 0.014598540145985401;
          result[2] += 0.2725060827250608;
          result[3] += 0.25060827250608275;
          result[4] += 0.06082725060827251;
          result[5] += 0.2116788321167883;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
          result[0] += 0.044444444444444446;
          result[1] += 0;
          result[2] += 0.24444444444444444;
          result[3] += 0.044444444444444446;
          result[4] += 0.13333333333333333;
          result[5] += 0.5333333333333333;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0;
          result[2] += 0.05454545454545454;
          result[3] += 0.6545454545454545;
          result[4] += 0.09090909090909091;
          result[5] += 0.16363636363636364;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0.17105263157894737;
          result[1] += 0.039473684210526314;
          result[2] += 0.3684210526315789;
          result[3] += 0.23684210526315788;
          result[4] += 0;
          result[5] += 0.18421052631578946;
        } else {
          result[0] += 0.09174311926605505;
          result[1] += 0;
          result[2] += 0.8532110091743119;
          result[3] += 0.05504587155963303;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0.005376344086021506;
          result[1] += 0;
          result[2] += 0.7849462365591398;
          result[3] += 0.20967741935483872;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9834983498349835;
          result[3] += 0.0165016501650165;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.14227642276422764;
        } else {
          result[0] += 0.5063291139240507;
          result[1] += 0.012658227848101266;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4810126582278481;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0033783783783783786;
          result[2] += 0;
          result[3] += 0.06306306306306306;
          result[4] += 0.05855855855855856;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0.0078125;
          result[2] += 0;
          result[3] += 0.5234375;
          result[4] += 0.03125;
          result[5] += 0.4375;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978768577494692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021231422505307855;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09696969696969697;
          result[1] += 0.20606060606060606;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6909090909090909;
          result[5] += 0.006060606060606061;
        } else {
          result[0] += 0.7332887700534759;
          result[1] += 0.0066844919786096255;
          result[2] += 0.046122994652406414;
          result[3] += 0.07954545454545454;
          result[4] += 0.058823529411764705;
          result[5] += 0.07553475935828877;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
          result[0] += 0.046153846153846156;
          result[1] += 0.03076923076923077;
          result[2] += 0.03076923076923077;
          result[3] += 0.13846153846153847;
          result[4] += 0.09230769230769231;
          result[5] += 0.6615384615384615;
        } else {
          result[0] += 0.05223880597014925;
          result[1] += 0.05223880597014925;
          result[2] += 0.26865671641791045;
          result[3] += 0.4552238805970149;
          result[4] += 0.05223880597014925;
          result[5] += 0.11940298507462686;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
          result[0] += 0.030534351145038167;
          result[1] += 0;
          result[2] += 0.8473282442748091;
          result[3] += 0.12213740458015267;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7647058823529411;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7333333333333333;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8962655601659751;
          result[3] += 0.0995850622406639;
          result[4] += 0;
          result[5] += 0.004149377593360996;
        } else {
          result[0] += 0.005190311418685121;
          result[1] += 0;
          result[2] += 0.9757785467128027;
          result[3] += 0.01730103806228374;
          result[4] += 0;
          result[5] += 0.0017301038062283738;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
          result[0] += 0.020080321285140566;
          result[1] += 0;
          result[2] += 0.020080321285140566;
          result[3] += 0;
          result[4] += 0.8112449799196788;
          result[5] += 0.14859437751004018;
        } else {
          result[0] += 0.5066666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.44;
          result[5] += 0.05333333333333334;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0032822757111597373;
          result[2] += 0;
          result[3] += 0.05032822757111598;
          result[4] += 0.05689277899343545;
          result[5] += 0.8894967177242888;
        } else {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0.010135135135135136;
          result[3] += 0.5304054054054054;
          result[4] += 0.010135135135135136;
          result[5] += 0.4358108108108108;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0.029411764705882353;
          result[4] += 0.7352941176470589;
          result[5] += 0;
        } else {
          result[0] += 0.0018656716417910447;
          result[1] += 0.9869402985074627;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011194029850746268;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.787758346581876;
          result[1] += 0.028616852146263912;
          result[2] += 0.010333863275039745;
          result[3] += 0.02384737678855326;
          result[4] += 0.1359300476947536;
          result[5] += 0.013513513513513514;
        } else {
          result[0] += 0.15306122448979595;
          result[1] += 0.012755102040816329;
          result[2] += 0.22448979591836737;
          result[3] += 0.3290816326530613;
          result[4] += 0.0739795918367347;
          result[5] += 0.20663265306122452;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08823529411764706;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.7352941176470589;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)117.5) ) ) {
          result[0] += 0.07228915662650602;
          result[1] += 0.024096385542168676;
          result[2] += 0.6506024096385542;
          result[3] += 0.14457831325301204;
          result[4] += 0;
          result[5] += 0.10843373493975904;
        } else {
          result[0] += 0.33333333333333337;
          result[1] += 0.5000000000000001;
          result[2] += 0.16666666666666669;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5952380952380952;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.11904761904761904;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.0034522439585730727;
          result[1] += 0;
          result[2] += 0.9424626006904488;
          result[3] += 0.05063291139240507;
          result[4] += 0;
          result[5] += 0.0034522439585730727;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8697478991596639;
          result[5] += 0.10084033613445378;
        } else {
          result[0] += 0;
          result[1] += 0.0010799136069114472;
          result[2] += 0;
          result[3] += 0.1079913606911447;
          result[4] += 0.047516198704103674;
          result[5] += 0.8434125269978402;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          result[0] += 0.11496746203904555;
          result[1] += 0.026030368763557483;
          result[2] += 0.010845986984815618;
          result[3] += 0.3362255965292842;
          result[4] += 0.1735357917570499;
          result[5] += 0.3383947939262473;
        } else {
          result[0] += 0.523590333716916;
          result[1] += 0.10126582278481013;
          result[2] += 0.014959723820483314;
          result[3] += 0.09666283084004602;
          result[4] += 0.17491369390103567;
          result[5] += 0.08860759493670886;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
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
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
          result[0] += 0.9751166407465008;
          result[1] += 0;
          result[2] += 0.0046656298600311055;
          result[3] += 0.0062208398133748065;
          result[4] += 0.013996889580093314;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.225;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.175;
        } else {
          result[0] += 0.05673758865248227;
          result[1] += 0;
          result[2] += 0.6312056737588653;
          result[3] += 0.16312056737588654;
          result[4] += 0.06382978723404255;
          result[5] += 0.0851063829787234;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.12857142857142856;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        } else {
          result[0] += 0.01142263759086189;
          result[1] += 0;
          result[2] += 0.936656282450675;
          result[3] += 0.04672897196261682;
          result[4] += 0;
          result[5] += 0.005192107995846314;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004739336492890996;
          result[1] += 0.04265402843601896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.933649289099526;
          result[5] += 0.018957345971563982;
        } else {
          result[0] += 0.5256410256410257;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14102564102564102;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          result[0] += 0.007194244604316547;
          result[1] += 0.011305241521068859;
          result[2] += 0.003083247687564234;
          result[3] += 0.07913669064748201;
          result[4] += 0.04933196300102775;
          result[5] += 0.8499486125385406;
        } else {
          result[0] += 0.010152284263959392;
          result[1] += 0.005076142131979696;
          result[2] += 0.005076142131979696;
          result[3] += 0.5431472081218275;
          result[4] += 0.020304568527918784;
          result[5] += 0.4162436548223351;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.037037037037037035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9629629629629629;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9937106918238994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006289308176100629;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7848970251716247;
          result[1] += 0.02669717772692601;
          result[2] += 0.0007627765064836003;
          result[3] += 0.02364607170099161;
          result[4] += 0.13729977116704806;
          result[5] += 0.02669717772692601;
        } else {
          result[0] += 0.17057569296375266;
          result[1] += 0.053304904051172705;
          result[2] += 0.19616204690831557;
          result[3] += 0.21321961620469082;
          result[4] += 0.09594882729211088;
          result[5] += 0.27078891257995735;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.6666666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.9375;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36;
          result[3] += 0.44;
          result[4] += 0;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.5625;
          result[4] += 0;
          result[5] += 0.3125;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0;
          result[2] += 0.6794871794871795;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03954802259887006;
          result[1] += 0;
          result[2] += 0.8022598870056498;
          result[3] += 0.15254237288135594;
          result[4] += 0;
          result[5] += 0.005649717514124294;
        } else {
          result[0] += 0.010738255033557045;
          result[1] += 0;
          result[2] += 0.9476510067114092;
          result[3] += 0.03489932885906039;
          result[4] += 0;
          result[5] += 0.0067114093959731525;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.1377049180327869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8459016393442623;
          result[5] += 0.01639344262295082;
        } else {
          result[0] += 0.6407766990291263;
          result[1] += 0.009708737864077669;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17475728155339806;
          result[5] += 0.17475728155339806;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027439024390243903;
          result[4] += 0.03201219512195122;
          result[5] += 0.9405487804878049;
        } else {
          result[0] += 0.03958333333333333;
          result[1] += 0;
          result[2] += 0.008333333333333333;
          result[3] += 0.32708333333333334;
          result[4] += 0.14166666666666666;
          result[5] += 0.48333333333333334;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0;
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          result[0] += 0.08035714285714286;
          result[1] += 0.33482142857142855;
          result[2] += 0.026785714285714284;
          result[3] += 0.04017857142857143;
          result[4] += 0.4375;
          result[5] += 0.08035714285714286;
        } else {
          result[0] += 0.7391304347826086;
          result[1] += 0.012228260869565218;
          result[2] += 0.034646739130434784;
          result[3] += 0.07540760869565218;
          result[4] += 0.059103260869565216;
          result[5] += 0.07948369565217392;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0.08695652173913043;
          result[4] += 0.08695652173913043;
          result[5] += 0.6956521739130435;
        } else {
          result[0] += 0;
          result[1] += 0.03488372093023256;
          result[2] += 0.26744186046511625;
          result[3] += 0.38372093023255816;
          result[4] += 0;
          result[5] += 0.313953488372093;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7333333333333334;
          result[1] += 0.06666666666666668;
          result[2] += 0;
          result[3] += 0.06666666666666668;
          result[4] += 0.06666666666666668;
          result[5] += 0.06666666666666668;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.704225352112676;
          result[3] += 0.23943661971830985;
          result[4] += 0.007042253521126761;
          result[5] += 0.04929577464788732;
        } else {
          result[0] += 0.02304147465437788;
          result[1] += 0;
          result[2] += 0.9170506912442397;
          result[3] += 0.05414746543778802;
          result[4] += 0;
          result[5] += 0.00576036866359447;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005263157894736842;
          result[1] += 0.005263157894736842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9736842105263158;
          result[5] += 0.015789473684210527;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.9285714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023809523809523808;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0.056818181818181816;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5340909090909091;
          result[5] += 0.4090909090909091;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9777777777777777;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0.32142857142857145;
          result[4] += 0.2857142857142857;
          result[5] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0033444816053511705;
          result[2] += 0;
          result[3] += 0.05239687848383501;
          result[4] += 0.03901895206243032;
          result[5] += 0.9052396878483835;
        } else {
          result[0] += 0.007905138339920948;
          result[1] += 0;
          result[2] += 0.007905138339920948;
          result[3] += 0.4743083003952569;
          result[4] += 0;
          result[5] += 0.5098814229249012;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0.006493506493506494;
          result[1] += 0.2987012987012987;
          result[2] += 0;
          result[3] += 0.03896103896103896;
          result[4] += 0.6103896103896104;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0;
          result[1] += 0.9912280701754386;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008771929824561403;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8637961335676626;
          result[1] += 0.026362038664323375;
          result[2] += 0.0026362038664323375;
          result[3] += 0.015817223198594025;
          result[4] += 0.07908611599297012;
          result[5] += 0.012302284710017574;
        } else {
          result[0] += 0.34146341463414637;
          result[1] += 0.04573170731707317;
          result[2] += 0.16158536585365854;
          result[3] += 0.21036585365853658;
          result[4] += 0.07317073170731707;
          result[5] += 0.1676829268292683;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.057971014492753624;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0.17391304347826086;
          result[4] += 0.15942028985507245;
          result[5] += 0.4782608695652174;
        } else {
          result[0] += 0;
          result[1] += 0.004878048780487806;
          result[2] += 0.40975609756097564;
          result[3] += 0.4829268292682927;
          result[4] += 0;
          result[5] += 0.10243902439024391;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0.21978021978021978;
          result[1] += 0.10989010989010989;
          result[2] += 0.4065934065934066;
          result[3] += 0.054945054945054944;
          result[4] += 0.054945054945054944;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0.004767580452920144;
          result[1] += 0;
          result[2] += 0.9201430274135877;
          result[3] += 0.05482717520858165;
          result[4] += 0;
          result[5] += 0.020262216924910613;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
          result[0] += 0.023972602739726026;
          result[1] += 0.00684931506849315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8801369863013698;
          result[5] += 0.08904109589041095;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8356164383561644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.136986301369863;
          result[5] += 0.0273972602739726;
        } else {
          result[0] += 0.0044444444444444444;
          result[1] += 0.008888888888888889;
          result[2] += 0.016888888888888887;
          result[3] += 0.13866666666666666;
          result[4] += 0.044444444444444446;
          result[5] += 0.7866666666666666;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0.24107142857142858;
          result[2] += 0;
          result[3] += 0.03571428571428571;
          result[4] += 0.6964285714285714;
          result[5] += 0.008928571428571428;
        } else {
          result[0] += 0.002053388090349076;
          result[1] += 0.9691991786447639;
          result[2] += 0.006160164271047228;
          result[3] += 0.004106776180698152;
          result[4] += 0.01642710472279261;
          result[5] += 0.002053388090349076;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.06504065040650407;
          result[1] += 0.3252032520325203;
          result[2] += 0.032520325203252036;
          result[3] += 0.11382113821138211;
          result[4] += 0.37398373983739835;
          result[5] += 0.08943089430894309;
        } else {
          result[0] += 0.7879448075526507;
          result[1] += 0.0014524328249818446;
          result[2] += 0.042846768336964415;
          result[3] += 0.07116920842411038;
          result[4] += 0.0457516339869281;
          result[5] += 0.050835148874364564;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
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
          result[3] += 0.12698412698412698;
          result[4] += 0.06349206349206349;
          result[5] += 0.8095238095238095;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0.006060606060606061;
          result[2] += 0.15151515151515152;
          result[3] += 0.5212121212121212;
          result[4] += 0.030303030303030304;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0.03636363636363636;
          result[2] += 0.5636363636363636;
          result[3] += 0.12727272727272726;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.016;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.352;
          result[4] += 0.016;
          result[5] += 0.016;
        } else {
          result[0] += 0.06735751295336788;
          result[1] += 0;
          result[2] += 0.844559585492228;
          result[3] += 0.06735751295336788;
          result[4] += 0;
          result[5] += 0.02072538860103627;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9766277128547579;
          result[3] += 0.02337228714524207;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          result[0] += 0.004032258064516129;
          result[1] += 0.004032258064516129;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8830645161290323;
          result[5] += 0.10887096774193548;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.027777777777777776;
          result[4] += 0;
          result[5] += 0.1388888888888889;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02085747392815759;
          result[1] += 0.002317497103128621;
          result[2] += 0.0011587485515643105;
          result[3] += 0.03476245654692932;
          result[4] += 0.09385863267670916;
          result[5] += 0.847045191193511;
        } else {
          result[0] += 0.13626373626373628;
          result[1] += 0.0021978021978021982;
          result[2] += 0.021978021978021983;
          result[3] += 0.36703296703296706;
          result[4] += 0.07912087912087913;
          result[5] += 0.3934065934065935;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9936974789915967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0063025210084033615;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.108843537414966;
          result[1] += 0.17006802721088438;
          result[2] += 0.020408163265306124;
          result[3] += 0.04761904761904762;
          result[4] += 0.5850340136054423;
          result[5] += 0.06802721088435376;
        } else {
          result[0] += 0.7485632183908046;
          result[1] += 0.009339080459770116;
          result[2] += 0.04454022988505747;
          result[3] += 0.05962643678160919;
          result[4] += 0.05028735632183908;
          result[5] += 0.08764367816091954;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0.1;
          result[5] += 0.85;
        } else {
          result[0] += 0;
          result[1] += 0.015873015873015872;
          result[2] += 0.1349206349206349;
          result[3] += 0.6984126984126984;
          result[4] += 0.007936507936507936;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0.011363636363636364;
          result[2] += 0.09090909090909091;
          result[3] += 0.10227272727272728;
          result[4] += 0.17045454545454544;
          result[5] += 0.6022727272727273;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          result[0] += 0.02197802197802198;
          result[1] += 0;
          result[2] += 0.7582417582417582;
          result[3] += 0.10989010989010989;
          result[4] += 0;
          result[5] += 0.10989010989010989;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0015337423312883436;
          result[1] += 0;
          result[2] += 0.9723926380368099;
          result[3] += 0.02147239263803681;
          result[4] += 0.004601226993865031;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004878048780487805;
          result[1] += 0.02926829268292683;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9414634146341463;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.34210526315789475;
          result[5] += 0.6052631578947368;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.25766871165644173;
          result[1] += 0.15337423312883436;
          result[2] += 0;
          result[3] += 0.04294478527607362;
          result[4] += 0.3128834355828221;
          result[5] += 0.2331288343558282;
        } else {
          result[0] += 0;
          result[1] += 0.0035746201966041107;
          result[2] += 0.022341376228775692;
          result[3] += 0.1224307417336908;
          result[4] += 0.02770330652368186;
          result[5] += 0.8239499553172476;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0.024793388429752067;
          result[1] += 0.12396694214876033;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8347107438016529;
          result[5] += 0.01652892561983471;
        } else {
          result[0] += 0;
          result[1] += 0.9804347826086957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01956521739130435;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8336120401337793;
          result[1] += 0.016722408026755852;
          result[2] += 0.0016722408026755853;
          result[3] += 0.030936454849498328;
          result[4] += 0.0802675585284281;
          result[5] += 0.03678929765886288;
        } else {
          result[0] += 0.24471299093655588;
          result[1] += 0.021148036253776436;
          result[2] += 0.18429003021148035;
          result[3] += 0.2719033232628399;
          result[4] += 0.08459214501510574;
          result[5] += 0.1933534743202417;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.06521739130434782;
          result[2] += 0;
          result[3] += 0.021739130434782608;
          result[4] += 0.34782608695652173;
          result[5] += 0.5434782608695652;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19786096256684493;
          result[3] += 0.44919786096256686;
          result[4] += 0;
          result[5] += 0.35294117647058826;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5652173913043478;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9117647058823529;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.17307692307692307;
          result[4] += 0;
          result[5] += 0.21153846153846154;
        } else {
          result[0] += 0.8461538461538461;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02512562814070352;
          result[1] += 0;
          result[2] += 0.8241206030150754;
          result[3] += 0.1306532663316583;
          result[4] += 0;
          result[5] += 0.020100502512562814;
        } else {
          result[0] += 0.003129890453834116;
          result[1] += 0;
          result[2] += 0.9624413145539906;
          result[3] += 0.03442879499217527;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.988950276243094;
          result[5] += 0.011049723756906077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6842105263157895;
          result[5] += 0.3157894736842105;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.23809523809523808;
          result[2] += 0;
          result[3] += 0.047619047619047616;
          result[4] += 0.2857142857142857;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0.96;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.21428571428571427;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6428571428571429;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.9824561403508771;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017543859649122806;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.005313496280552604;
          result[1] += 0.0021253985122210413;
          result[2] += 0;
          result[3] += 0.04782146652497343;
          result[4] += 0.08076514346439957;
          result[5] += 0.8639744952178533;
        } else {
          result[0] += 0;
          result[1] += 0.004587155963302753;
          result[2] += 0.10550458715596332;
          result[3] += 0.5275229357798166;
          result[4] += 0.02752293577981652;
          result[5] += 0.33486238532110096;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.09803921568627451;
          result[1] += 0.7254901960784313;
          result[2] += 0.0392156862745098;
          result[3] += 0.11764705882352941;
          result[4] += 0.0196078431372549;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.10330578512396695;
          result[1] += 0.2396694214876033;
          result[2] += 0;
          result[3] += 0.008264462809917356;
          result[4] += 0.628099173553719;
          result[5] += 0.02066115702479339;
        } else {
          result[0] += 0.772596843615495;
          result[1] += 0.010760401721664276;
          result[2] += 0.021520803443328552;
          result[3] += 0.08393113342898136;
          result[4] += 0.06312769010043041;
          result[5] += 0.04806312769010043;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0.066006600660066;
          result[1] += 0.0033003300330033004;
          result[2] += 0.2838283828382838;
          result[3] += 0.30363036303630364;
          result[4] += 0.052805280528052806;
          result[5] += 0.29042904290429045;
        } else {
          result[0] += 0.0065005417118093175;
          result[1] += 0;
          result[2] += 0.8916576381365113;
          result[3] += 0.08234019501625135;
          result[4] += 0;
          result[5] += 0.01950162513542795;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.18904109589041096;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6876712328767123;
          result[5] += 0.1232876712328767;
        } else {
          result[0] += 0.0016542597187758478;
          result[1] += 0.006617038875103391;
          result[2] += 0.0041356492969396195;
          result[3] += 0.16046319272125723;
          result[4] += 0.07278742762613731;
          result[5] += 0.7543424317617866;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7962662337662337;
          result[1] += 0.049512987012987016;
          result[2] += 0.002435064935064935;
          result[3] += 0.01461038961038961;
          result[4] += 0.13230519480519481;
          result[5] += 0.00487012987012987;
        } else {
          result[0] += 0.21862348178137653;
          result[1] += 0.022267206477732792;
          result[2] += 0.26720647773279355;
          result[3] += 0.2388663967611336;
          result[4] += 0.03643724696356275;
          result[5] += 0.2165991902834008;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.07142857142857142;
          result[4] += 0.03571428571428571;
          result[5] += 0.75;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.5;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.04878048780487805;
          result[1] += 0.04878048780487805;
          result[2] += 0.0975609756097561;
          result[3] += 0.6585365853658537;
          result[4] += 0;
          result[5] += 0.14634146341463414;
        } else {
          result[0] += 0.0049504950495049506;
          result[1] += 0;
          result[2] += 0.7079207920792079;
          result[3] += 0.2524752475247525;
          result[4] += 0;
          result[5] += 0.034653465346534656;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8737864077669902;
          result[3] += 0.1262135922330097;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
          result[0] += 0.030612244897959183;
          result[1] += 0;
          result[2] += 0.8775510204081632;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0.002197802197802198;
          result[1] += 0;
          result[2] += 0.9868131868131869;
          result[3] += 0.01098901098901099;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.012552301255230125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9707112970711297;
          result[5] += 0.016736401673640166;
        } else {
          result[0] += 0.5190839694656488;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2748091603053435;
          result[5] += 0.20610687022900764;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.005241090146750524;
          result[2] += 0.008385744234800839;
          result[3] += 0.0660377358490566;
          result[4] += 0.06813417190775681;
          result[5] += 0.8522012578616353;
        } else {
          result[0] += 0.0029154518950437317;
          result[1] += 0.014577259475218658;
          result[2] += 0.011661807580174927;
          result[3] += 0.5160349854227405;
          result[4] += 0.03206997084548105;
          result[5] += 0.4227405247813411;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9886363636363636;
          result[2] += 0;
          result[3] += 0.0022727272727272726;
          result[4] += 0.00909090909090909;
          result[5] += 0;
        } else {
          result[0] += 0.04040404040404041;
          result[1] += 0.32323232323232326;
          result[2] += 0;
          result[3] += 0.010101010101010102;
          result[4] += 0.6262626262626263;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8289585097375106;
          result[1] += 0.03895004233700254;
          result[2] += 0.012701100762066046;
          result[3] += 0.024555461473327687;
          result[4] += 0.07281964436917866;
          result[5] += 0.02201524132091448;
        } else {
          result[0] += 0.17575757575757575;
          result[1] += 0.024242424242424242;
          result[2] += 0.22727272727272727;
          result[3] += 0.25757575757575757;
          result[4] += 0.07272727272727272;
          result[5] += 0.24242424242424243;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          result[0] += 0.036585365853658534;
          result[1] += 0;
          result[2] += 0.15853658536585366;
          result[3] += 0.5609756097560976;
          result[4] += 0;
          result[5] += 0.24390243902439024;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8095238095238095;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.925;
          result[3] += 0.025;
          result[4] += 0;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8067796610169492;
          result[3] += 0.17627118644067796;
          result[4] += 0;
          result[5] += 0.01694915254237288;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0;
          result[4] += 0.038461538461538464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00315955766192733;
          result[1] += 0;
          result[2] += 0.985781990521327;
          result[3] += 0.011058451816745656;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.01593625498007968;
          result[1] += 0.01195219123505976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9043824701195219;
          result[5] += 0.06772908366533864;
        } else {
          result[0] += 0.6578947368421053;
          result[1] += 0.006578947368421052;
          result[2] += 0;
          result[3] += 0.013157894736842105;
          result[4] += 0.1118421052631579;
          result[5] += 0.21052631578947367;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.07246376811594203;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7971014492753623;
          result[5] += 0.13043478260869565;
        } else {
          result[0] += 0.005076142131979695;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10050761421319797;
          result[4] += 0.06294416243654823;
          result[5] += 0.8314720812182741;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.6;
          result[2] += 0.03333333333333333;
          result[3] += 0.1;
          result[4] += 0.18333333333333332;
          result[5] += 0;
        } else {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9975845410628019;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0.13258426966292136;
          result[1] += 0.024719101123595506;
          result[2] += 0.08089887640449438;
          result[3] += 0.39101123595505616;
          result[4] += 0.09662921348314607;
          result[5] += 0.27415730337078653;
        } else {
          result[0] += 0.7387258410880458;
          result[1] += 0.04008589835361489;
          result[2] += 0.05869720830350752;
          result[3] += 0.04151753758052971;
          result[4] += 0.08661417322834646;
          result[5] += 0.03435934144595562;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03773584905660377;
          result[3] += 0.3584905660377358;
          result[4] += 0;
          result[5] += 0.6037735849056604;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)109) ) ) {
          result[0] += 0;
          result[1] += 0.07575757575757576;
          result[2] += 0.7272727272727273;
          result[3] += 0.045454545454545456;
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28260869565217395;
          result[3] += 0.5434782608695653;
          result[4] += 0;
          result[5] += 0.1739130434782609;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)72.5) ) ) {
          result[0] += 0.3;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005945303210463734;
          result[1] += 0;
          result[2] += 0.9405469678953626;
          result[3] += 0.04994054696789536;
          result[4] += 0;
          result[5] += 0.0035671819262782403;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.14332247557003258;
          result[1] += 0.006514657980456026;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7328990228013029;
          result[5] += 0.11726384364820847;
        } else {
          result[0] += 0.0016038492381716118;
          result[1] += 0.009623095429029671;
          result[2] += 0.020048115477145148;
          result[3] += 0.18444266238973536;
          result[4] += 0.06255012028869286;
          result[5] += 0.7217321571772254;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.06382978723404255;
          result[1] += 0.2393617021276596;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.675531914893617;
          result[5] += 0.02127659574468085;
        } else {
          result[0] += 0.6904161412358134;
          result[1] += 0.015132408575031526;
          result[2] += 0.0605296343001261;
          result[3] += 0.09773013871374527;
          result[4] += 0.05737704918032787;
          result[5] += 0.07881462799495587;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25263157894736843;
          result[3] += 0.5052631578947369;
          result[4] += 0;
          result[5] += 0.24210526315789474;
        } else {
          result[0] += 0;
          result[1] += 0.10909090909090909;
          result[2] += 0.5272727272727272;
          result[3] += 0.05454545454545454;
          result[4] += 0;
          result[5] += 0.3090909090909091;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.75;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
          result[0] += 0.008092485549132947;
          result[1] += 0.0011560693641618498;
          result[2] += 0.9329479768786128;
          result[3] += 0.05202312138728324;
          result[4] += 0;
          result[5] += 0.005780346820809248;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003367003367003367;
          result[2] += 0.016835016835016835;
          result[3] += 0.003367003367003367;
          result[4] += 0.9528619528619529;
          result[5] += 0.02356902356902357;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          result[0] += 0.031840796019900496;
          result[1] += 0.003980099502487562;
          result[2] += 0;
          result[3] += 0.06965174129353234;
          result[4] += 0.09353233830845771;
          result[5] += 0.8009950248756219;
        } else {
          result[0] += 0.026455026455026457;
          result[1] += 0;
          result[2] += 0.1375661375661376;
          result[3] += 0.5502645502645503;
          result[4] += 0;
          result[5] += 0.28571428571428575;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.2037037037037037;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7962962962962963;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976133651551312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002386634844868735;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0.2556962025316456;
          result[1] += 0.03037974683544304;
          result[2] += 0.00759493670886076;
          result[3] += 0.2329113924050633;
          result[4] += 0.07594936708860761;
          result[5] += 0.3974683544303798;
        } else {
          result[0] += 0.7431328878990349;
          result[1] += 0.020786933927245732;
          result[2] += 0.07720861172976985;
          result[3] += 0.042316258351893093;
          result[4] += 0.09502598366740905;
          result[5] += 0.021529324424647365;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.7222222222222222;
        } else {
          result[0] += 0.125;
          result[1] += 0.056818181818181816;
          result[2] += 0.20454545454545456;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.23863636363636365;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.6666666666666666;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8136363636363636;
          result[3] += 0.17272727272727273;
          result[4] += 0;
          result[5] += 0.013636363636363636;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.5625;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0043859649122807015;
          result[1] += 0.0014619883040935672;
          result[2] += 0.9473684210526315;
          result[3] += 0.04532163742690058;
          result[4] += 0;
          result[5] += 0.0014619883040935672;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004975124378109453;
          result[1] += 0;
          result[2] += 0.014925373134328358;
          result[3] += 0;
          result[4] += 0.9601990049751243;
          result[5] += 0.01990049751243781;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0;
          result[4] += 0.6451612903225806;
          result[5] += 0.3225806451612903;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028346456692913385;
          result[4] += 0.023622047244094488;
          result[5] += 0.9480314960629921;
        } else {
          result[0] += 0.04631578947368421;
          result[1] += 0.056842105263157895;
          result[2] += 0.029473684210526315;
          result[3] += 0.3389473684210526;
          result[4] += 0.08421052631578947;
          result[5] += 0.4442105263157895;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.6721311475409836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.32786885245901637;
          result[5] += 0;
        } else {
          result[0] += 0.002469135802469136;
          result[1] += 0.9950617283950618;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002469135802469136;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.720217835262083;
          result[1] += 0.019741320626276378;
          result[2] += 0.0013614703880190605;
          result[3] += 0.039482641252552755;
          result[4] += 0.146358066712049;
          result[5] += 0.07283866575901975;
        } else {
          result[0] += 0.20281124497991967;
          result[1] += 0.018072289156626505;
          result[2] += 0.20682730923694778;
          result[3] += 0.3393574297188755;
          result[4] += 0.04819277108433735;
          result[5] += 0.18473895582329317;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0.4473684210526316;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.0196078431372549;
          result[1] += 0.0392156862745098;
          result[2] += 0.5098039215686274;
          result[3] += 0.1568627450980392;
          result[4] += 0;
          result[5] += 0.27450980392156865;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6106194690265486;
          result[3] += 0.3008849557522124;
          result[4] += 0;
          result[5] += 0.08849557522123894;
        } else {
          result[0] += 0.042105263157894736;
          result[1] += 0;
          result[2] += 0.868421052631579;
          result[3] += 0.08947368421052632;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8780487804878049;
          result[3] += 0.11707317073170732;
          result[4] += 0;
          result[5] += 0.004878048780487805;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0045662100456621;
          result[1] += 0.0228310502283105;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.954337899543379;
          result[5] += 0.0182648401826484;
        } else {
          result[0] += 0.4823529411764706;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03529411764705882;
          result[4] += 0.2235294117647059;
          result[5] += 0.25882352941176473;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.007945516458569807;
          result[1] += 0.00681044267877412;
          result[2] += 0;
          result[3] += 0.04540295119182747;
          result[4] += 0.06583427922814983;
          result[5] += 0.8740068104426788;
        } else {
          result[0] += 0;
          result[1] += 0.01932367149758454;
          result[2] += 0;
          result[3] += 0.5265700483091788;
          result[4] += 0.01932367149758454;
          result[5] += 0.43478260869565216;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.38144329896907214;
          result[2] += 0;
          result[3] += 0.030927835051546393;
          result[4] += 0.5567010309278351;
          result[5] += 0.030927835051546393;
        } else {
          result[0] += 0;
          result[1] += 0.9664429530201343;
          result[2] += 0;
          result[3] += 0.0044742729306487695;
          result[4] += 0.026845637583892617;
          result[5] += 0.0022371364653243847;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8234362628661916;
          result[1] += 0.038796516231195566;
          result[2] += 0.0023752969121140144;
          result[3] += 0.0166270783847981;
          result[4] += 0.10372129849564529;
          result[5] += 0.015043547110055424;
        } else {
          result[0] += 0.1956989247311828;
          result[1] += 0.030107526881720432;
          result[2] += 0.24301075268817204;
          result[3] += 0.2989247311827957;
          result[4] += 0.04086021505376344;
          result[5] += 0.1913978494623656;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0.7857142857142857;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0.008695652173913044;
          result[2] += 0.1391304347826087;
          result[3] += 0.4608695652173913;
          result[4] += 0.008695652173913044;
          result[5] += 0.3826086956521739;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.09375;
          result[2] += 0.1875;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.46875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0.08396946564885496;
          result[1] += 0;
          result[2] += 0.6412213740458015;
          result[3] += 0.21374045801526717;
          result[4] += 0.030534351145038167;
          result[5] += 0.030534351145038167;
        } else {
          result[0] += 0.006031363088057901;
          result[1] += 0;
          result[2] += 0.9336550060313631;
          result[3] += 0.05548854041013269;
          result[4] += 0;
          result[5] += 0.0048250904704463205;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90) ) ) {
          result[0] += 0.0033222591362126247;
          result[1] += 0.006644518272425249;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9003322259136213;
          result[5] += 0.08970099667774087;
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
          result[0] += 0.013613861386138614;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027227722772277228;
          result[4] += 0.043316831683168314;
          result[5] += 0.9158415841584159;
        } else {
          result[0] += 0.05982905982905983;
          result[1] += 0.019943019943019943;
          result[2] += 0.037037037037037035;
          result[3] += 0.4301994301994302;
          result[4] += 0.06837606837606838;
          result[5] += 0.38461538461538464;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978768577494692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021231422505307855;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7599431818181819;
          result[1] += 0.026278409090909095;
          result[2] += 0.017755681818181823;
          result[3] += 0.017045454545454548;
          result[4] += 0.13281250000000003;
          result[5] += 0.046164772727272735;
        } else {
          result[0] += 0.22572815533980584;
          result[1] += 0.019417475728155338;
          result[2] += 0.21359223300970873;
          result[3] += 0.2524271844660194;
          result[4] += 0.04611650485436893;
          result[5] += 0.24271844660194175;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)69.5) ) ) {
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
          result[3] += 0.05128205128205128;
          result[4] += 0.02564102564102564;
          result[5] += 0.8461538461538461;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.13333333333333333;
          result[5] += 0.8;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.44144144144144143;
          result[3] += 0.40540540540540543;
          result[4] += 0;
          result[5] += 0.12612612612612611;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.6;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0.9333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
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
          result[0] += 0.011778563015312134;
          result[1] += 0;
          result[2] += 0.9305064782096585;
          result[3] += 0.05653710247349824;
          result[4] += 0;
          result[5] += 0.0011778563015312133;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.88;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12;
          result[5] += 0;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0;
          result[2] += 0.006493506493506494;
          result[3] += 0.00974025974025974;
          result[4] += 0.8538961038961039;
          result[5] += 0.11688311688311688;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015384615384615385;
          result[3] += 0.010769230769230769;
          result[4] += 0.02923076923076923;
          result[5] += 0.9584615384615385;
        } else {
          result[0] += 0.0914179104477612;
          result[1] += 0.011194029850746268;
          result[2] += 0.011194029850746268;
          result[3] += 0.33955223880597013;
          result[4] += 0.11380597014925373;
          result[5] += 0.43283582089552236;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
          result[0] += 0.8148148148148149;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.07407407407407408;
        } else {
          result[0] += 0;
          result[1] += 0.9919354838709677;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008064516129032258;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.09132420091324202;
          result[1] += 0.42465753424657543;
          result[2] += 0.004566210045662101;
          result[3] += 0.018264840182648404;
          result[4] += 0.40182648401826493;
          result[5] += 0.059360730593607317;
        } else {
          result[0] += 0.7140939597315435;
          result[1] += 0.028859060402684558;
          result[2] += 0.02550335570469798;
          result[3] += 0.07181208053691274;
          result[4] += 0.05973154362416106;
          result[5] += 0.09999999999999998;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18018018018018017;
          result[3] += 0.6396396396396397;
          result[4] += 0;
          result[5] += 0.18018018018018017;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8225806451612904;
          result[3] += 0.11290322580645161;
          result[4] += 0.016129032258064516;
          result[5] += 0.04838709677419355;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6142857142857143;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.18571428571428572;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0.11428571428571425;
          result[1] += 0;
          result[2] += 0.6142857142857142;
          result[3] += 0.1714285714285714;
          result[4] += 0;
          result[5] += 0.09999999999999998;
        } else {
          result[0] += 0.01273148148148148;
          result[1] += 0;
          result[2] += 0.9386574074074074;
          result[3] += 0.047453703703703706;
          result[4] += 0;
          result[5] += 0.0011574074074074073;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
          result[0] += 0.054474708171206226;
          result[1] += 0.0038910505836575876;
          result[2] += 0;
          result[3] += 0.019455252918287938;
          result[4] += 0.8054474708171206;
          result[5] += 0.11673151750972763;
        } else {
          result[0] += 0.6842105263157895;
          result[1] += 0.028708133971291867;
          result[2] += 0.009569377990430622;
          result[3] += 0.019138755980861243;
          result[4] += 0.24880382775119617;
          result[5] += 0.009569377990430622;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0.002157497303128371;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07119741100323625;
          result[4] += 0.06364617044228695;
          result[5] += 0.8629989212513485;
        } else {
          result[0] += 0.01545253863134658;
          result[1] += 0.013245033112582781;
          result[2] += 0.03532008830022075;
          result[3] += 0.44370860927152317;
          result[4] += 0.08830022075055188;
          result[5] += 0.40397350993377484;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.4375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5625;
          result[5] += 0;
        } else {
          result[0] += 0.0019723865877712033;
          result[1] += 0.9881656804733728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009861932938856016;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.844954128440367;
          result[1] += 0.03577981651376147;
          result[2] += 0.003669724770642202;
          result[3] += 0.013761467889908258;
          result[4] += 0.0944954128440367;
          result[5] += 0.007339449541284404;
        } else {
          result[0] += 0.12875536480686695;
          result[1] += 0.055793991416309016;
          result[2] += 0.45493562231759654;
          result[3] += 0.19313304721030042;
          result[4] += 0.02145922746781116;
          result[5] += 0.1459227467811159;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.3157894736842105;
          result[2] += 0.05263157894736842;
          result[3] += 0.10526315789473684;
          result[4] += 0.47368421052631576;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.029850746268656716;
          result[3] += 0.05970149253731343;
          result[4] += 0.04477611940298507;
          result[5] += 0.8507462686567164;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0.7096774193548387;
          result[4] += 0.016129032258064516;
          result[5] += 0.11290322580645161;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0.030303030303030304;
          result[2] += 0.7878787878787878;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.06060606060606061;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74) ) ) {
          result[0] += 0.95;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05649717514124294;
          result[1] += 0;
          result[2] += 0.7344632768361582;
          result[3] += 0.1864406779661017;
          result[4] += 0;
          result[5] += 0.022598870056497175;
        } else {
          result[0] += 0.0013477088948787063;
          result[1] += 0;
          result[2] += 0.9622641509433962;
          result[3] += 0.03638814016172507;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.014184397163120567;
          result[1] += 0;
          result[2] += 0.014184397163120567;
          result[3] += 0.014184397163120567;
          result[4] += 0.8971631205673759;
          result[5] += 0.06028368794326241;
        } else {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0014814814814814814;
          result[1] += 0;
          result[2] += 0.0014814814814814814;
          result[3] += 0.035555555555555556;
          result[4] += 0.03851851851851852;
          result[5] += 0.922962962962963;
        } else {
          result[0] += 0.11274509803921569;
          result[1] += 0.024509803921568627;
          result[2] += 0.0024509803921568627;
          result[3] += 0.34558823529411764;
          result[4] += 0.049019607843137254;
          result[5] += 0.46568627450980393;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.004210526315789474;
          result[1] += 0.9747368421052631;
          result[2] += 0.002105263157894737;
          result[3] += 0.010526315789473684;
          result[4] += 0.008421052631578947;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.14814814814814814;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.003703703703703704;
          result[4] += 0.6111111111111112;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.6879256965944273;
          result[1] += 0.009287925696594427;
          result[2] += 0.060061919504643964;
          result[3] += 0.09969040247678018;
          result[4] += 0.05015479876160991;
          result[5] += 0.09287925696594428;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1797752808988764;
          result[3] += 0.5842696629213483;
          result[4] += 0;
          result[5] += 0.23595505617977527;
        } else {
          result[0] += 0.15;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.05;
          result[4] += 0.025;
          result[5] += 0.275;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)120.5) ) ) {
          result[0] += 0.011428571428571429;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.12;
          result[4] += 0;
          result[5] += 0.011428571428571429;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80) ) ) {
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
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.1;
        } else {
          result[0] += 0.0014245014245014246;
          result[1] += 0;
          result[2] += 0.9700854700854701;
          result[3] += 0.027065527065527065;
          result[4] += 0;
          result[5] += 0.0014245014245014246;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.918918918918919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08108108108108109;
          result[5] += 0;
        } else {
          result[0] += 0.013812154696132598;
          result[1] += 0.00828729281767956;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8839779005524863;
          result[5] += 0.09392265193370167;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 0.9977220956719818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002277904328018223;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6923076923076923;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.008333333333333333;
          result[3] += 0.008333333333333333;
          result[4] += 0.14166666666666666;
          result[5] += 0.175;
        } else {
          result[0] += 0.009080590238365494;
          result[1] += 0.0011350737797956867;
          result[2] += 0.004540295119182747;
          result[3] += 0.08172531214528944;
          result[4] += 0.04880817253121453;
          result[5] += 0.8547105561861521;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.8097199341021417;
          result[1] += 0.016474464579901153;
          result[2] += 0.002471169686985173;
          result[3] += 0.047775947281713346;
          result[4] += 0.06754530477759473;
          result[5] += 0.05601317957166392;
        } else {
          result[0] += 0.13650793650793652;
          result[1] += 0.041269841269841276;
          result[2] += 0.12222222222222223;
          result[3] += 0.33809523809523817;
          result[4] += 0.042857142857142864;
          result[5] += 0.3190476190476191;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.35;
          result[4] += 0.05;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20408163265306123;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.08163265306122448;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4482758620689655;
          result[3] += 0.41379310344827586;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.20833333333333334;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011853448275862068;
          result[1] += 0;
          result[2] += 0.9245689655172413;
          result[3] += 0.057112068965517244;
          result[4] += 0;
          result[5] += 0.00646551724137931;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.015810276679841896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9841897233201581;
          result[5] += 0;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.02702702702702703;
          result[4] += 0.5945945945945946;
          result[5] += 0.2972972972972973;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.8524590163934426;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14754098360655737;
          result[5] += 0;
        } else {
          result[0] += 0.006789524733268671;
          result[1] += 0.0038797284190106693;
          result[2] += 0;
          result[3] += 0.07080504364694472;
          result[4] += 0.07759456838021339;
          result[5] += 0.8409311348205626;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7417417417417418;
          result[1] += 0.08333333333333333;
          result[2] += 0.006006006006006006;
          result[3] += 0.03753753753753754;
          result[4] += 0.09384384384384384;
          result[5] += 0.03753753753753754;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.053497942386831275;
          result[2] += 0.12139917695473251;
          result[3] += 0.3148148148148148;
          result[4] += 0.0411522633744856;
          result[5] += 0.30246913580246915;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.9951338199513382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004866180048661801;
          result[5] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.075;
          result[3] += 0.05;
          result[4] += 0.15;
          result[5] += 0.725;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0.13414634146341464;
          result[2] += 0.06097560975609756;
          result[3] += 0.4878048780487805;
          result[4] += 0.07317073170731707;
          result[5] += 0.1951219512195122;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1276595744680851;
          result[3] += 0.6808510638297872;
          result[4] += 0;
          result[5] += 0.19148936170212766;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.7666666666666667;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)120) ) ) {
          result[0] += 0.028037383177570093;
          result[1] += 0;
          result[2] += 0.8255451713395638;
          result[3] += 0.1277258566978193;
          result[4] += 0;
          result[5] += 0.018691588785046728;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0.05128205128205128;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.2564102564102564;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006666666666666667;
          result[1] += 0;
          result[2] += 0.9666666666666667;
          result[3] += 0.023333333333333334;
          result[4] += 0;
          result[5] += 0.0033333333333333335;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004219409282700422;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957805907172996;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.04161979752530934;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.043869516310461196;
          result[4] += 0.06524184476940383;
          result[5] += 0.8492688413948256;
        } else {
          result[0] += 0.06515580736543909;
          result[1] += 0.0056657223796034;
          result[2] += 0.0028328611898017;
          result[3] += 0.47875354107648727;
          result[4] += 0.04815864022662889;
          result[5] += 0.39943342776203966;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.6153846153846154;
          result[2] += 0;
          result[3] += 0.1282051282051282;
          result[4] += 0.2564102564102564;
          result[5] += 0;
        } else {
          result[0] += 0.004629629629629629;
          result[1] += 0.9907407407407407;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004629629629629629;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.12222222222222222;
          result[1] += 0.21666666666666667;
          result[2] += 0;
          result[3] += 0.011111111111111112;
          result[4] += 0.6222222222222222;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.6798298906439854;
          result[1] += 0.029161603888213844;
          result[2] += 0.08383961117861481;
          result[3] += 0.07715674362089914;
          result[4] += 0.05953827460510327;
          result[5] += 0.07047387606318346;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.16071428571428573;
          result[2] += 0.08928571428571429;
          result[3] += 0.07142857142857142;
          result[4] += 0.08928571428571429;
          result[5] += 0.5535714285714286;
        } else {
          result[0] += 0.02;
          result[1] += 0;
          result[2] += 0.12;
          result[3] += 0.72;
          result[4] += 0;
          result[5] += 0.14;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0.11538461538461539;
          result[3] += 0.11538461538461539;
          result[4] += 0.07692307692307693;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.64;
          result[3] += 0.32;
          result[4] += 0.01;
          result[5] += 0.03;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.005221932114882507;
          result[1] += 0;
          result[2] += 0.9543080939947781;
          result[3] += 0.04046997389033943;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
          result[0] += 0.006968641114982578;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9303135888501742;
          result[5] += 0.0627177700348432;
        } else {
          result[0] += 0;
          result[1] += 0.6190476190476191;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001358695652173913;
          result[3] += 0.025815217391304348;
          result[4] += 0.029891304347826088;
          result[5] += 0.9429347826086957;
        } else {
          result[0] += 0.14243759177679882;
          result[1] += 0.004405286343612335;
          result[2] += 0.00881057268722467;
          result[3] += 0.28193832599118945;
          result[4] += 0.09251101321585903;
          result[5] += 0.4698972099853157;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9712389380530974;
          result[2] += 0;
          result[3] += 0.0022123893805309734;
          result[4] += 0.02654867256637168;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.30208333333333337;
          result[2] += 0.03125000000000001;
          result[3] += 0;
          result[4] += 0.5937500000000001;
          result[5] += 0.07291666666666669;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8443478260869566;
          result[1] += 0.03217391304347826;
          result[2] += 0.014782608695652174;
          result[3] += 0.025217391304347827;
          result[4] += 0.06869565217391305;
          result[5] += 0.014782608695652174;
        } else {
          result[0] += 0.27235772357723576;
          result[1] += 0.044715447154471545;
          result[2] += 0.1991869918699187;
          result[3] += 0.1991869918699187;
          result[4] += 0.15447154471544716;
          result[5] += 0.13008130081300814;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.046511627906976744;
          result[2] += 0.13953488372093023;
          result[3] += 0.09302325581395349;
          result[4] += 0.09302325581395349;
          result[5] += 0.627906976744186;
        } else {
          result[0] += 0.05185185185185185;
          result[1] += 0.02962962962962963;
          result[2] += 0.1925925925925926;
          result[3] += 0.48148148148148145;
          result[4] += 0.05925925925925926;
          result[5] += 0.18518518518518517;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          result[0] += 0.03139013452914798;
          result[1] += 0;
          result[2] += 0.7982062780269058;
          result[3] += 0.15695067264573992;
          result[4] += 0;
          result[5] += 0.013452914798206279;
        } else {
          result[0] += 0.9375;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7244094488188977;
          result[3] += 0.2440944881889764;
          result[4] += 0;
          result[5] += 0.031496062992125984;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9102564102564102;
          result[3] += 0.05128205128205128;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.109375;
          result[4] += 0;
          result[5] += 0.015625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9926289926289926;
          result[3] += 0.007371007371007371;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.004098360655737705;
          result[1] += 0.00819672131147541;
          result[2] += 0;
          result[3] += 0.004098360655737705;
          result[4] += 0.9098360655737705;
          result[5] += 0.07377049180327869;
        } else {
          result[0] += 0;
          result[1] += 0.5666666666666667;
          result[2] += 0;
          result[3] += 0.23333333333333334;
          result[4] += 0.16666666666666666;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06188118811881188;
          result[4] += 0.04702970297029703;
          result[5] += 0.8910891089108911;
        } else {
          result[0] += 0.09583333333333334;
          result[1] += 0.014583333333333334;
          result[2] += 0.03333333333333333;
          result[3] += 0.32083333333333336;
          result[4] += 0.09791666666666667;
          result[5] += 0.4375;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.6385542168674698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3614457831325301;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7899096385542169;
          result[1] += 0.029367469879518073;
          result[2] += 0.012801204819277108;
          result[3] += 0.038403614457831324;
          result[4] += 0.10240963855421686;
          result[5] += 0.02710843373493976;
        } else {
          result[0] += 0.11576354679802955;
          result[1] += 0.03201970443349754;
          result[2] += 0.15763546798029557;
          result[3] += 0.270935960591133;
          result[4] += 0.09359605911330049;
          result[5] += 0.33004926108374383;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.95;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.5185185185185185;
          result[4] += 0;
          result[5] += 0.25925925925925924;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0;
          result[2] += 0.6216216216216216;
          result[3] += 0.16216216216216217;
          result[4] += 0;
          result[5] += 0.17567567567567569;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20000000000000004;
          result[3] += 0.7000000000000001;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0.004651162790697675;
          result[1] += 0;
          result[2] += 0.8325581395348838;
          result[3] += 0.12558139534883725;
          result[4] += 0;
          result[5] += 0.0372093023255814;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010115606936416185;
          result[1] += 0;
          result[2] += 0.953757225433526;
          result[3] += 0.031791907514450865;
          result[4] += 0;
          result[5] += 0.004335260115606936;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.00847457627118644;
          result[2] += 0.00423728813559322;
          result[3] += 0;
          result[4] += 0.9661016949152542;
          result[5] += 0.0211864406779661;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.56;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.025274725274725275;
          result[1] += 0.002197802197802198;
          result[2] += 0;
          result[3] += 0.03406593406593406;
          result[4] += 0.07032967032967033;
          result[5] += 0.8681318681318682;
        } else {
          result[0] += 0.06191950464396285;
          result[1] += 0.009287925696594427;
          result[2] += 0.006191950464396285;
          result[3] += 0.4520123839009288;
          result[4] += 0.04024767801857585;
          result[5] += 0.43034055727554177;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.10344827586206896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.896551724137931;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956331877729258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004366812227074236;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7863436123348018;
          result[1] += 0.03450807635829662;
          result[2] += 0.010279001468428781;
          result[3] += 0.0315712187958884;
          result[4] += 0.1130690161527166;
          result[5] += 0.024229074889867842;
        } else {
          result[0] += 0.17747440273037543;
          result[1] += 0.006825938566552901;
          result[2] += 0.17064846416382254;
          result[3] += 0.24914675767918087;
          result[4] += 0.08873720136518772;
          result[5] += 0.30716723549488056;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.06329113924050633;
          result[2] += 0.0379746835443038;
          result[3] += 0.6962025316455697;
          result[4] += 0.06329113924050633;
          result[5] += 0.13924050632911392;
        } else {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0.24390243902439024;
          result[3] += 0.3048780487804878;
          result[4] += 0.024390243902439025;
          result[5] += 0.4024390243902439;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0.13333333333333333;
          result[1] += 0.5333333333333333;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.125;
          result[4] += 0.08928571428571429;
          result[5] += 0.26785714285714285;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.85;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.035830618892508145;
          result[1] += 0;
          result[2] += 0.7882736156351792;
          result[3] += 0.1498371335504886;
          result[4] += 0;
          result[5] += 0.026058631921824105;
        } else {
          result[0] += 0.004792332268370607;
          result[1] += 0;
          result[2] += 0.963258785942492;
          result[3] += 0.03194888178913738;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009900990099009901;
          result[1] += 0.9207920792079208;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06930693069306931;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01327433628318584;
          result[2] += 0;
          result[3] += 0.01327433628318584;
          result[4] += 0.915929203539823;
          result[5] += 0.05752212389380531;
        } else {
          result[0] += 0.035175879396984924;
          result[1] += 0.005025125628140704;
          result[2] += 0.010050251256281407;
          result[3] += 0.16666666666666666;
          result[4] += 0.06532663316582915;
          result[5] += 0.7177554438860971;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0.33211678832116787;
          result[1] += 0.031630170316301706;
          result[2] += 0.052311435523114354;
          result[3] += 0.17761557177615572;
          result[4] += 0.170316301703163;
          result[5] += 0.2360097323600973;
        } else {
          result[0] += 0.7945205479452054;
          result[1] += 0.06262230919765166;
          result[2] += 0.049902152641878667;
          result[3] += 0.014677103718199608;
          result[4] += 0.07338551859099804;
          result[5] += 0.004892367906066536;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22666666666666666;
          result[3] += 0.6133333333333333;
          result[4] += 0;
          result[5] += 0.16;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9047619047619048;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
          result[0] += 0.015151515151515154;
          result[1] += 0;
          result[2] += 0.7651515151515152;
          result[3] += 0.17045454545454547;
          result[4] += 0;
          result[5] += 0.04924242424242425;
        } else {
          result[0] += 0.45;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0.15;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6818181818181819;
          result[3] += 0.27272727272727276;
          result[4] += 0;
          result[5] += 0.04545454545454546;
        } else {
          result[0] += 0.010362694300518135;
          result[1] += 0;
          result[2] += 0.9430051813471503;
          result[3] += 0.046632124352331605;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0022624434389140274;
          result[1] += 0;
          result[2] += 0.997737556561086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
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
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004219409282700422;
          result[1] += 0.03375527426160337;
          result[2] += 0;
          result[3] += 0.012658227848101266;
          result[4] += 0.8734177215189873;
          result[5] += 0.0759493670886076;
        } else {
          result[0] += 0.0475396163469558;
          result[1] += 0.012510425354462052;
          result[2] += 0.0025020850708924102;
          result[3] += 0.15929941618015012;
          result[4] += 0.03919933277731443;
          result[5] += 0.7389491242702252;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          result[0] += 0.3386034255599473;
          result[1] += 0.019762845849802372;
          result[2] += 0.10276679841897234;
          result[3] += 0.19499341238471674;
          result[4] += 0.19367588932806323;
          result[5] += 0.15019762845849802;
        } else {
          result[0] += 0.8106841611996252;
          result[1] += 0.041237113402061855;
          result[2] += 0.05060918462980318;
          result[3] += 0.01218369259606373;
          result[4] += 0.08059981255857544;
          result[5] += 0.004686035613870665;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
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
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.8636363636363636;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.15094339622641512;
          result[1] += 0;
          result[2] += 0.5849056603773586;
          result[3] += 0.09433962264150945;
          result[4] += 0.01886792452830189;
          result[5] += 0.15094339622641512;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0.6875;
        } else {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0.5882352941176471;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.20588235294117646;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.015873015873015872;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0.9296116504854369;
          result[3] += 0.06310679611650485;
          result[4] += 0;
          result[5] += 0.0024271844660194173;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.022935779816513763;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9587155963302753;
          result[5] += 0.01834862385321101;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03636363636363636;
          result[4] += 0.4909090909090909;
          result[5] += 0.43636363636363634;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021447721179624665;
          result[4] += 0.05361930294906166;
          result[5] += 0.9249329758713136;
        } else {
          result[0] += 0.08453608247422681;
          result[1] += 0.010309278350515464;
          result[2] += 0.008247422680412371;
          result[3] += 0.26804123711340205;
          result[4] += 0.10103092783505155;
          result[5] += 0.5278350515463918;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.0021691973969631237;
          result[1] += 0.9804772234273319;
          result[2] += 0.004338394793926247;
          result[3] += 0.006507592190889371;
          result[4] += 0.006507592190889371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09142857142857144;
          result[1] += 0.24000000000000002;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6628571428571429;
          result[5] += 0.005714285714285715;
        } else {
          result[0] += 0.7361842105263158;
          result[1] += 0.014473684210526316;
          result[2] += 0.025;
          result[3] += 0.08157894736842106;
          result[4] += 0.057236842105263155;
          result[5] += 0.08552631578947369;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07042253521126761;
          result[3] += 0.6901408450704225;
          result[4] += 0.07042253521126761;
          result[5] += 0.16901408450704225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3684210526315789;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0.47368421052631576;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1794871794871795;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.28205128205128205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7875;
          result[3] += 0.18125;
          result[4] += 0.0125;
          result[5] += 0.01875;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.7948717948717948;
          result[3] += 0.11217948717948718;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0.003780718336483932;
          result[1] += 0;
          result[2] += 0.9697542533081286;
          result[3] += 0.026465028355387523;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.013100436681222707;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9737991266375546;
          result[5] += 0.013100436681222707;
        } else {
          result[0] += 0.0641025641025641;
          result[1] += 0.05128205128205128;
          result[2] += 0;
          result[3] += 0.01282051282051282;
          result[4] += 0.5;
          result[5] += 0.3717948717948718;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.043259557344064385;
          result[1] += 0.0030181086519114686;
          result[2] += 0;
          result[3] += 0.05835010060362173;
          result[4] += 0.0482897384305835;
          result[5] += 0.8470824949698189;
        } else {
          result[0] += 0.0091324200913242;
          result[1] += 0.0045662100456621;
          result[2] += 0;
          result[3] += 0.6712328767123288;
          result[4] += 0;
          result[5] += 0.3150684931506849;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.042105263157894736;
          result[1] += 0.3631578947368421;
          result[2] += 0.031578947368421054;
          result[3] += 0.005263157894736842;
          result[4] += 0.5157894736842106;
          result[5] += 0.042105263157894736;
        } else {
          result[0] += 0.684144030322173;
          result[1] += 0.012634238787113073;
          result[2] += 0.08085912823752367;
          result[3] += 0.08843967150979153;
          result[4] += 0.07075173720783322;
          result[5] += 0.06317119393556536;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0.9891540130151844;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010845986984815618;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.057692307692307696;
          result[3] += 0.11538461538461539;
          result[4] += 0.019230769230769232;
          result[5] += 0.8076923076923077;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          result[0] += 0.04597701149425287;
          result[1] += 0.05747126436781609;
          result[2] += 0.4942528735632184;
          result[3] += 0.22988505747126436;
          result[4] += 0.011494252873563218;
          result[5] += 0.16091954022988506;
        } else {
          result[0] += 0.8048780487804879;
          result[1] += 0;
          result[2] += 0.12195121951219512;
          result[3] += 0.07317073170731707;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5630252100840336;
          result[3] += 0.3865546218487395;
          result[4] += 0;
          result[5] += 0.05042016806722689;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8493975903614458;
          result[3] += 0.1144578313253012;
          result[4] += 0;
          result[5] += 0.03614457831325301;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0017301038062283738;
          result[1] += 0;
          result[2] += 0.9653979238754326;
          result[3] += 0.0328719723183391;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06312292358803986;
          result[1] += 0.009966777408637873;
          result[2] += 0.006644518272425249;
          result[3] += 0;
          result[4] += 0.8538205980066446;
          result[5] += 0.0664451827242525;
        } else {
          result[0] += 0.6514285714285714;
          result[1] += 0.022857142857142854;
          result[2] += 0.011428571428571427;
          result[3] += 0;
          result[4] += 0.29142857142857137;
          result[5] += 0.022857142857142854;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
          result[0] += 0.002472187886279357;
          result[1] += 0.0012360939431396785;
          result[2] += 0.002472187886279357;
          result[3] += 0.048207663782447466;
          result[4] += 0.04697156983930779;
          result[5] += 0.8986402966625463;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0.016666666666666666;
          result[2] += 0;
          result[3] += 0.2966666666666667;
          result[4] += 0.18666666666666668;
          result[5] += 0.48333333333333334;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8076923076923077;
          result[2] += 0.019230769230769232;
          result[3] += 0;
          result[4] += 0.17307692307692307;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8157439446366782;
          result[1] += 0.03546712802768166;
          result[2] += 0.0034602076124567475;
          result[3] += 0.0328719723183391;
          result[4] += 0.08131487889273356;
          result[5] += 0.031141868512110725;
        } else {
          result[0] += 0.18823529411764706;
          result[1] += 0.043137254901960784;
          result[2] += 0.15294117647058825;
          result[3] += 0.34509803921568627;
          result[4] += 0.03725490196078431;
          result[5] += 0.23333333333333334;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04477611940298507;
          result[3] += 0.7761194029850746;
          result[4] += 0;
          result[5] += 0.1791044776119403;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40625;
          result[3] += 0.3125;
          result[4] += 0.0625;
          result[5] += 0.21875;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6774193548387097;
          result[3] += 0.19354838709677422;
          result[4] += 0;
          result[5] += 0.12903225806451615;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
          result[0] += 0.008356545961002786;
          result[1] += 0;
          result[2] += 0.8467966573816156;
          result[3] += 0.13370473537604458;
          result[4] += 0;
          result[5] += 0.011142061281337047;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9787581699346405;
          result[3] += 0.021241830065359478;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.00881057268722467;
          result[1] += 0.022026431718061675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.933920704845815;
          result[5] += 0.03524229074889868;
        } else {
          result[0] += 0.45045045045045046;
          result[1] += 0;
          result[2] += 0.07207207207207207;
          result[3] += 0.009009009009009009;
          result[4] += 0.1981981981981982;
          result[5] += 0.2702702702702703;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.03910614525139665;
          result[2] += 0;
          result[3] += 0.049162011173184354;
          result[4] += 0.05251396648044693;
          result[5] += 0.8592178770949721;
        } else {
          result[0] += 0.00684931506849315;
          result[1] += 0.00684931506849315;
          result[2] += 0.02054794520547945;
          result[3] += 0.5342465753424658;
          result[4] += 0.017123287671232876;
          result[5] += 0.4143835616438356;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9444444444444444;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0.9633620689655172;
          result[2] += 0;
          result[3] += 0.023706896551724137;
          result[4] += 0.01293103448275862;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7529673590504451;
          result[1] += 0.034866468842729974;
          result[2] += 0.002967359050445104;
          result[3] += 0.026706231454005934;
          result[4] += 0.14391691394658754;
          result[5] += 0.03857566765578635;
        } else {
          result[0] += 0.09535452322738386;
          result[1] += 0.019559902200488997;
          result[2] += 0.17603911980440098;
          result[3] += 0.3154034229828851;
          result[4] += 0.06845965770171149;
          result[5] += 0.3251833740831296;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046875;
          result[3] += 0.828125;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.625;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.86;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)122.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8679775280898876;
          result[3] += 0.12078651685393259;
          result[4] += 0;
          result[5] += 0.011235955056179775;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002036659877800407;
          result[1] += 0;
          result[2] += 0.9898167006109979;
          result[3] += 0.006109979633401222;
          result[4] += 0;
          result[5] += 0.002036659877800407;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.021897810218978103;
          result[1] += 0.0036496350364963502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9233576642335767;
          result[5] += 0.051094890510948905;
        } else {
          result[0] += 0.49238578680203043;
          result[1] += 0.005076142131979695;
          result[2] += 0.015228426395939087;
          result[3] += 0.03553299492385787;
          result[4] += 0.233502538071066;
          result[5] += 0.2182741116751269;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011148272017837235;
          result[2] += 0;
          result[3] += 0.054626532887402456;
          result[4] += 0.04905239687848383;
          result[5] += 0.89520624303233;
        } else {
          result[0] += 0.03804347826086957;
          result[1] += 0.03804347826086957;
          result[2] += 0;
          result[3] += 0.358695652173913;
          result[4] += 0.23369565217391305;
          result[5] += 0.33152173913043476;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.44871794871794873;
          result[2] += 0;
          result[3] += 0.01282051282051282;
          result[4] += 0.47435897435897434;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8305383936451898;
          result[1] += 0.05030891438658429;
          result[2] += 0.00264783759929391;
          result[3] += 0.02118270079435128;
          result[4] += 0.07149161518093557;
          result[5] += 0.02383053839364519;
        } else {
          result[0] += 0.15120274914089346;
          result[1] += 0.024054982817869417;
          result[2] += 0.211340206185567;
          result[3] += 0.3745704467353952;
          result[4] += 0.03436426116838488;
          result[5] += 0.20446735395189003;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.04081632653061224;
          result[4] += 0.10204081632653061;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0.11764705882352941;
          result[3] += 0.47058823529411764;
          result[4] += 0.058823529411764705;
          result[5] += 0.11764705882352941;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0.024691358024691357;
          result[2] += 0.5802469135802469;
          result[3] += 0.32098765432098764;
          result[4] += 0;
          result[5] += 0.07407407407407407;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.030054644808743168;
          result[1] += 0;
          result[2] += 0.7978142076502732;
          result[3] += 0.15027322404371585;
          result[4] += 0;
          result[5] += 0.02185792349726776;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005825242718446602;
          result[1] += 0;
          result[2] += 0.974757281553398;
          result[3] += 0.019417475728155338;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0042194092827004225;
          result[4] += 0.9578059071729959;
          result[5] += 0.037974683544303806;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04673807205452775;
          result[1] += 0.0038948393378773127;
          result[2] += 0;
          result[3] += 0.053554040895813046;
          result[4] += 0.07108081791626096;
          result[5] += 0.824732229795521;
        } else {
          result[0] += 0.004608294930875576;
          result[1] += 0.009216589861751152;
          result[2] += 0;
          result[3] += 0.6175115207373272;
          result[4] += 0.03686635944700461;
          result[5] += 0.3317972350230415;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0.002150537634408602;
          result[1] += 0.989247311827957;
          result[2] += 0;
          result[3] += 0.004301075268817204;
          result[4] += 0.004301075268817204;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.018072289156626505;
          result[1] += 0.45180722891566266;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5301204819277109;
          result[5] += 0;
        } else {
          result[0] += 0.6847892486255345;
          result[1] += 0.010995723885155772;
          result[2] += 0.06230910201588271;
          result[3] += 0.10262675626145389;
          result[4] += 0.06536346976175932;
          result[5] += 0.07391569945021381;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0.02564102564102564;
          result[3] += 0.10256410256410256;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8636363636363636;
          result[3] += 0.045454545454545456;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6835443037974683;
          result[3] += 0.21518987341772153;
          result[4] += 0;
          result[5] += 0.10126582278481013;
        } else {
          result[0] += 0.008187134502923977;
          result[1] += 0.004678362573099415;
          result[2] += 0.9368421052631579;
          result[3] += 0.0456140350877193;
          result[4] += 0.0023391812865497076;
          result[5] += 0.0023391812865497076;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)94) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0.01675977653631285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9720670391061452;
          result[5] += 0.0111731843575419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.375;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0.9310344827586207;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
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
          result[3] += 0.019471488178025034;
          result[4] += 0.027816411682892908;
          result[5] += 0.952712100139082;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0.6222222222222222;
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0.011111111111111112;
          result[4] += 0.2111111111111111;
          result[5] += 0.12222222222222222;
        } else {
          result[0] += 0.016842105263157894;
          result[1] += 0.008421052631578947;
          result[2] += 0.04;
          result[3] += 0.39789473684210525;
          result[4] += 0.03368421052631579;
          result[5] += 0.5031578947368421;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0.0660377358490566;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.839622641509434;
          result[5] += 0.07547169811320754;
        } else {
          result[0] += 0.005893909626719057;
          result[1] += 0.9489194499017681;
          result[2] += 0.007858546168958742;
          result[3] += 0;
          result[4] += 0.03732809430255403;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8527336860670194;
          result[1] += 0.021164021164021163;
          result[2] += 0.007054673721340388;
          result[3] += 0.03791887125220458;
          result[4] += 0.06701940035273368;
          result[5] += 0.014109347442680775;
        } else {
          result[0] += 0.2785714285714286;
          result[1] += 0;
          result[2] += 0.16428571428571428;
          result[3] += 0.25357142857142856;
          result[4] += 0.10357142857142858;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.15178571428571427;
          result[2] += 0.05357142857142857;
          result[3] += 0.125;
          result[4] += 0.2767857142857143;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0.12264150943396226;
          result[1] += 0;
          result[2] += 0.4481132075471698;
          result[3] += 0.2971698113207547;
          result[4] += 0.0047169811320754715;
          result[5] += 0.12735849056603774;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.3870967741935484;
          result[4] += 0;
          result[5] += 0.0967741935483871;
        } else {
          result[0] += 0.0034207525655644247;
          result[1] += 0;
          result[2] += 0.9395667046750286;
          result[3] += 0.054732041049030795;
          result[4] += 0;
          result[5] += 0.0022805017103762833;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          result[0] += 0.02024291497975709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9716599190283401;
          result[5] += 0.008097165991902836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.6363636363636364;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.034636871508379886;
          result[1] += 0.0011173184357541898;
          result[2] += 0;
          result[3] += 0.04357541899441341;
          result[4] += 0.07039106145251396;
          result[5] += 0.8502793296089386;
        } else {
          result[0] += 0.04776119402985075;
          result[1] += 0.011940298507462687;
          result[2] += 0.008955223880597015;
          result[3] += 0.408955223880597;
          result[4] += 0.050746268656716415;
          result[5] += 0.4716417910447761;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.0023923444976076554;
          result[1] += 0.9736842105263158;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023923444976076555;
          result[5] += 0;
        } else {
          result[0] += 0.85;
          result[1] += 0.15;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          result[0] += 0.16287878787878787;
          result[1] += 0.3333333333333333;
          result[2] += 0.011363636363636364;
          result[3] += 0;
          result[4] += 0.4621212121212121;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.7403355215171409;
          result[1] += 0.02115244347191831;
          result[2] += 0.03282275711159738;
          result[3] += 0.08315098468271336;
          result[4] += 0.056163384390955515;
          result[5] += 0.0663749088256747;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09589041095890412;
          result[3] += 0.6575342465753425;
          result[4] += 0;
          result[5] += 0.24657534246575344;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0.16;
          result[4] += 0;
          result[5] += 0.36;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5877192982456141;
          result[3] += 0.3157894736842105;
          result[4] += 0.017543859649122806;
          result[5] += 0.07894736842105263;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.005063291139240506;
          result[1] += 0;
          result[2] += 0.8253164556962025;
          result[3] += 0.1291139240506329;
          result[4] += 0;
          result[5] += 0.04050632911392405;
        } else {
          result[0] += 0.5416666666666667;
          result[1] += 0;
          result[2] += 0.41666666666666674;
          result[3] += 0.04166666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0.0034602076124567475;
          result[1] += 0;
          result[2] += 0.9792387543252595;
          result[3] += 0.01730103806228374;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.022653721682847898;
          result[1] += 0.05177993527508091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.889967637540453;
          result[5] += 0.03559870550161812;
        } else {
          result[0] += 0.6526946107784432;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2155688622754491;
          result[5] += 0.1317365269461078;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0036188178528347406;
          result[1] += 0.0024125452352231603;
          result[2] += 0.008443908323281062;
          result[3] += 0.03739445114595899;
          result[4] += 0.07117008443908324;
          result[5] += 0.8769601930036188;
        } else {
          result[0] += 0.03883495145631068;
          result[1] += 0.0226537216828479;
          result[2] += 0.016181229773462785;
          result[3] += 0.3171521035598706;
          result[4] += 0.1359223300970874;
          result[5] += 0.46925566343042074;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.002066115702479339;
          result[1] += 0.9896694214876033;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008264462809917356;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.55;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0.3;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          result[0] += 0.28698752228163993;
          result[1] += 0.030303030303030304;
          result[2] += 0.11586452762923351;
          result[3] += 0.28698752228163993;
          result[4] += 0.053475935828877004;
          result[5] += 0.22638146167557932;
        } else {
          result[0] += 0.8020072992700732;
          result[1] += 0.02007299270072993;
          result[2] += 0.07116788321167884;
          result[3] += 0.01642335766423358;
          result[4] += 0.07116788321167884;
          result[5] += 0.019160583941605844;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.05970149253731343;
          result[2] += 0.23880597014925373;
          result[3] += 0.4925373134328358;
          result[4] += 0.04477611940298507;
          result[5] += 0.16417910447761194;
        } else {
          result[0] += 0.07216494845360824;
          result[1] += 0;
          result[2] += 0.7731958762886598;
          result[3] += 0.12371134020618557;
          result[4] += 0;
          result[5] += 0.030927835051546393;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8192771084337349;
          result[3] += 0.16265060240963855;
          result[4] += 0;
          result[5] += 0.018072289156626505;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.0016051364365971107;
          result[1] += 0;
          result[2] += 0.9791332263242376;
          result[3] += 0.01765650080256822;
          result[4] += 0;
          result[5] += 0.0016051364365971107;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.0049261083743842365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9950738916256158;
          result[5] += 0;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.15151515151515152;
          result[3] += 0;
          result[4] += 0.5151515151515151;
          result[5] += 0.30303030303030304;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03870967741935484;
          result[1] += 0;
          result[2] += 0.002150537634408602;
          result[3] += 0.03225806451612903;
          result[4] += 0.05913978494623656;
          result[5] += 0.867741935483871;
        } else {
          result[0] += 0.045584045584045586;
          result[1] += 0.008547008547008548;
          result[2] += 0.014245014245014245;
          result[3] += 0.4017094017094017;
          result[4] += 0.042735042735042736;
          result[5] += 0.48717948717948717;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7679597701149425;
          result[1] += 0.06968390804597702;
          result[2] += 0.008620689655172414;
          result[3] += 0.028735632183908046;
          result[4] += 0.10775862068965517;
          result[5] += 0.017241379310344827;
        } else {
          result[0] += 0.19932432432432434;
          result[1] += 0.027027027027027032;
          result[2] += 0.222972972972973;
          result[3] += 0.29391891891891897;
          result[4] += 0.04729729729729731;
          result[5] += 0.20945945945945948;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7857142857142857;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.9090909090909091;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.6326530612244898;
          result[4] += 0;
          result[5] += 0.29591836734693877;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11428571428571428;
          result[3] += 0.34285714285714286;
          result[4] += 0.05714285714285714;
          result[5] += 0.4857142857142857;
        } else {
          result[0] += 0.10256410256410256;
          result[1] += 0.038461538461538464;
          result[2] += 0.5384615384615384;
          result[3] += 0.11538461538461539;
          result[4] += 0.08974358974358974;
          result[5] += 0.11538461538461539;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.022556390977443608;
          result[1] += 0;
          result[2] += 0.8070175438596491;
          result[3] += 0.15037593984962405;
          result[4] += 0.007518796992481203;
          result[5] += 0.012531328320802004;
        } else {
          result[0] += 0.005660377358490566;
          result[1] += 0;
          result[2] += 0.9716981132075472;
          result[3] += 0.016981132075471698;
          result[4] += 0;
          result[5] += 0.005660377358490566;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
          result[0] += 0.0038022813688212928;
          result[1] += 0.022813688212927757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9239543726235742;
          result[5] += 0.049429657794676805;
        } else {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.25;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0.013853904282115869;
          result[1] += 0.0012594458438287153;
          result[2] += 0;
          result[3] += 0.037783375314861464;
          result[4] += 0.04030226700251889;
          result[5] += 0.906801007556675;
        } else {
          result[0] += 0.08466819221967964;
          result[1] += 0.002288329519450801;
          result[2] += 0.002288329519450801;
          result[3] += 0.34324942791762014;
          result[4] += 0.08695652173913043;
          result[5] += 0.4805491990846682;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.5333333333333333;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.4;
          result[5] += 0;
        } else {
          result[0] += 0.006550218340611353;
          result[1] += 0.9847161572052402;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008733624454148471;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7539568345323742;
          result[1] += 0.047482014388489216;
          result[2] += 0.006474820143884893;
          result[3] += 0.029496402877697846;
          result[4] += 0.13453237410071944;
          result[5] += 0.028057553956834534;
        } else {
          result[0] += 0.1278772378516624;
          result[1] += 0.043478260869565216;
          result[2] += 0.3248081841432225;
          result[3] += 0.2710997442455243;
          result[4] += 0.04092071611253197;
          result[5] += 0.1918158567774936;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.2;
          result[1] += 0.13333333333333333;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.7555555555555555;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.02238805970149254;
          result[1] += 0.00746268656716418;
          result[2] += 0.7164179104477613;
          result[3] += 0.17910447761194032;
          result[4] += 0;
          result[5] += 0.0746268656716418;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8395904436860068;
          result[3] += 0.13651877133105803;
          result[4] += 0;
          result[5] += 0.023890784982935155;
        } else {
          result[0] += 0.0038022813688212928;
          result[1] += 0;
          result[2] += 0.9828897338403042;
          result[3] += 0.013307984790874524;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          result[0] += 0.004048582995951417;
          result[1] += 0.012145748987854251;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9149797570850202;
          result[5] += 0.06882591093117409;
        } else {
          result[0] += 0;
          result[1] += 0.95;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.04524886877828054;
          result[1] += 0.010180995475113122;
          result[2] += 0;
          result[3] += 0.05090497737556561;
          result[4] += 0.04072398190045249;
          result[5] += 0.8529411764705882;
        } else {
          result[0] += 0.02865329512893983;
          result[1] += 0.0028653295128939827;
          result[2] += 0.008595988538681949;
          result[3] += 0.4584527220630373;
          result[4] += 0.02005730659025788;
          result[5] += 0.4813753581661891;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0.3263598326359833;
          result[1] += 0.05299860529986053;
          result[2] += 0.06555090655509066;
          result[3] += 0.1799163179916318;
          result[4] += 0.20641562064156208;
          result[5] += 0.16875871687587168;
        } else {
          result[0] += 0.779109589041096;
          result[1] += 0.058219178082191785;
          result[2] += 0.05393835616438357;
          result[3] += 0.012842465753424659;
          result[4] += 0.08304794520547946;
          result[5] += 0.012842465753424659;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.9916201117318436;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008379888268156424;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9285714285714286;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.29411764705882354;
          result[4] += 0;
          result[5] += 0.38235294117647056;
        } else {
          result[0] += 0.01775147928994083;
          result[1] += 0;
          result[2] += 0.727810650887574;
          result[3] += 0.22485207100591717;
          result[4] += 0;
          result[5] += 0.029585798816568046;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03827751196172249;
          result[1] += 0;
          result[2] += 0.8516746411483254;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0.004784688995215311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.988562091503268;
          result[3] += 0.00980392156862745;
          result[4] += 0;
          result[5] += 0.0016339869281045752;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0.004524886877828055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9864253393665159;
          result[5] += 0.004524886877828055;
        } else {
          result[0] += 0.2625;
          result[1] += 0;
          result[2] += 0.0125;
          result[3] += 0.05625;
          result[4] += 0.36875;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.0021929824561403508;
          result[2] += 0.003289473684210526;
          result[3] += 0.05921052631578947;
          result[4] += 0.07017543859649122;
          result[5] += 0.8651315789473685;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5728643216080402;
          result[4] += 0.005025125628140704;
          result[5] += 0.4221105527638191;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.06837606837606838;
          result[1] += 0.36324786324786323;
          result[2] += 0;
          result[3] += 0.004273504273504274;
          result[4] += 0.5598290598290598;
          result[5] += 0.004273504273504274;
        } else {
          result[0] += 0.72751677852349;
          result[1] += 0.012751677852348993;
          result[2] += 0.04429530201342282;
          result[3] += 0.07852348993288591;
          result[4] += 0.06308724832214765;
          result[5] += 0.0738255033557047;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0022624434389140274;
          result[1] += 0.997737556561086;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.26666666666666666;
          result[4] += 0.4666666666666667;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10476190476190478;
          result[3] += 0.7809523809523811;
          result[4] += 0.009523809523809526;
          result[5] += 0.10476190476190478;
        } else {
          result[0] += 0.020618556701030927;
          result[1] += 0.08247422680412371;
          result[2] += 0.4536082474226804;
          result[3] += 0.1958762886597938;
          result[4] += 0.07216494845360824;
          result[5] += 0.17525773195876287;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
          result[0] += 0.14705882352941177;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.38235294117647056;
          result[4] += 0;
          result[5] += 0.14705882352941177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.84375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15625;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.017751479289940832;
          result[1] += 0;
          result[2] += 0.911242603550296;
          result[3] += 0.06627218934911244;
          result[4] += 0;
          result[5] += 0.0047337278106508885;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007380073800738007;
          result[1] += 0.007380073800738007;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9630996309963099;
          result[5] += 0.02214022140221402;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03995433789954338;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0365296803652968;
          result[4] += 0.045662100456621;
          result[5] += 0.8778538812785388;
        } else {
          result[0] += 0.043227665706051875;
          result[1] += 0.04610951008645533;
          result[2] += 0.01729106628242075;
          result[3] += 0.49855907780979825;
          result[4] += 0.043227665706051875;
          result[5] += 0.3515850144092219;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.6963806970509383;
          result[1] += 0.05294906166219839;
          result[2] += 0.00804289544235925;
          result[3] += 0.040214477211796246;
          result[4] += 0.1601876675603217;
          result[5] += 0.04222520107238606;
        } else {
          result[0] += 0.17164179104477612;
          result[1] += 0.04228855721393035;
          result[2] += 0.2537313432835821;
          result[3] += 0.29850746268656714;
          result[4] += 0.04477611940298507;
          result[5] += 0.1890547263681592;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.3;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20930232558139536;
          result[4] += 0;
          result[5] += 0.7906976744186046;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.4666666666666667;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.10989010989010986;
          result[1] += 0;
          result[2] += 0.6813186813186812;
          result[3] += 0.10989010989010986;
          result[4] += 0.021978021978021976;
          result[5] += 0.07692307692307691;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4666666666666667;
          result[3] += 0.5111111111111111;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8152173913043478;
          result[3] += 0.15217391304347827;
          result[4] += 0;
          result[5] += 0.03260869565217391;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0.0030816640986132513;
          result[1] += 0;
          result[2] += 0.9614791987673343;
          result[3] += 0.03543913713405239;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009900990099009901;
          result[4] += 0.9455445544554455;
          result[5] += 0.04455445544554455;
        } else {
          result[0] += 0;
          result[1] += 0.7096774193548387;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0;
          result[5] += 0.22580645161290322;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.009696969696969697;
          result[1] += 0.0012121212121212121;
          result[2] += 0.0024242424242424242;
          result[3] += 0.03151515151515152;
          result[4] += 0.08484848484848485;
          result[5] += 0.8703030303030304;
        } else {
          result[0] += 0.03305785123966942;
          result[1] += 0.01652892561983471;
          result[2] += 0.049586776859504134;
          result[3] += 0.4462809917355372;
          result[4] += 0.045454545454545456;
          result[5] += 0.4090909090909091;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.029556650246305417;
          result[1] += 0.2512315270935961;
          result[2] += 0.029556650246305417;
          result[3] += 0.09359605911330049;
          result[4] += 0.5714285714285714;
          result[5] += 0.024630541871921183;
        } else {
          result[0] += 0.7135036496350365;
          result[1] += 0.012773722627737226;
          result[2] += 0.017639902676399026;
          result[3] += 0.07907542579075426;
          result[4] += 0.08637469586374696;
          result[5] += 0.09063260340632603;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
          result[0] += 0.0091324200913242;
          result[1] += 0.9908675799086758;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0.032520325203252036;
          result[3] += 0.3008130081300813;
          result[4] += 0.024390243902439025;
          result[5] += 0.5934959349593496;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3043478260869566;
          result[3] += 0.4347826086956522;
          result[4] += 0.04347826086956522;
          result[5] += 0.2173913043478261;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.8636363636363636;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4431818181818182;
          result[3] += 0.4772727272727273;
          result[4] += 0;
          result[5] += 0.07954545454545454;
        } else {
          result[0] += 0.03669724770642202;
          result[1] += 0;
          result[2] += 0.7889908256880734;
          result[3] += 0.09174311926605505;
          result[4] += 0;
          result[5] += 0.08256880733944955;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
          result[0] += 0.001310615989515072;
          result[1] += 0;
          result[2] += 0.9541284403669725;
          result[3] += 0.04193971166448231;
          result[4] += 0;
          result[5] += 0.002621231979030144;
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.15743440233236153;
          result[1] += 0.029154518950437316;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7026239067055393;
          result[5] += 0.11078717201166181;
        } else {
          result[0] += 0;
          result[1] += 0.011433597185576077;
          result[2] += 0;
          result[3] += 0.16094986807387862;
          result[4] += 0.04573438874230431;
          result[5] += 0.781882145998241;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7215547703180212;
          result[1] += 0.038869257950530034;
          result[2] += 0.01060070671378092;
          result[3] += 0.039575971731448764;
          result[4] += 0.15901060070671377;
          result[5] += 0.0303886925795053;
        } else {
          result[0] += 0.1488833746898263;
          result[1] += 0.0024813895781637717;
          result[2] += 0.2903225806451613;
          result[3] += 0.2878411910669975;
          result[4] += 0.06451612903225806;
          result[5] += 0.20595533498759305;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.05;
          result[4] += 0.05;
          result[5] += 0.85;
        } else {
          result[0] += 0;
          result[1] += 0.04878048780487805;
          result[2] += 0.36585365853658536;
          result[3] += 0.3170731707317073;
          result[4] += 0.04878048780487805;
          result[5] += 0.21951219512195122;
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.040983606557377046;
          result[1] += 0;
          result[2] += 0.5081967213114754;
          result[3] += 0.27049180327868855;
          result[4] += 0;
          result[5] += 0.18032786885245902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8842105263157896;
          result[3] += 0.09473684210526317;
          result[4] += 0;
          result[5] += 0.02105263157894737;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
          result[0] += 0.010825439783491205;
          result[1] += 0;
          result[2] += 0.9377537212449256;
          result[3] += 0.05142083897158322;
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.004273504273504274;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9487179487179487;
          result[5] += 0.021367521367521368;
        } else {
          result[0] += 0.48;
          result[1] += 0.008;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0.248;
          result[5] += 0.224;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0182648401826484;
          result[2] += 0;
          result[3] += 0.03767123287671233;
          result[4] += 0.08789954337899543;
          result[5] += 0.8561643835616438;
        } else {
          result[0] += 0.030805687203791468;
          result[1] += 0;
          result[2] += 0.10426540284360189;
          result[3] += 0.45734597156398105;
          result[4] += 0.03317535545023697;
          result[5] += 0.3744075829383886;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0.5714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.009174311926605505;
          result[1] += 0.9678899082568807;
          result[2] += 0.0045871559633027525;
          result[3] += 0.006880733944954129;
          result[4] += 0.011467889908256881;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
          result[0] += 0.529780564263323;
          result[1] += 0.044932079414838046;
          result[2] += 0.0658307210031348;
          result[3] += 0.11180773249738768;
          result[4] += 0.13584117032392898;
          result[5] += 0.11180773249738768;
        } else {
          result[0] += 0.9564459930313589;
          result[1] += 0.010452961672473868;
          result[2] += 0.012195121951219513;
          result[3] += 0;
          result[4] += 0.017421602787456445;
          result[5] += 0.003484320557491289;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.04878048780487805;
          result[5] += 0.926829268292683;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.47058823529411764;
          result[4] += 0.058823529411764705;
          result[5] += 0.4117647058823529;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5555555555555556;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5797101449275363;
          result[3] += 0.10144927536231885;
          result[4] += 0;
          result[5] += 0.3188405797101449;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0.041666666666666664;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.54;
          result[3] += 0.36;
          result[4] += 0;
          result[5] += 0.1;
        } else {
          result[0] += 0.018808777429467086;
          result[1] += 0.003134796238244514;
          result[2] += 0.910135841170324;
          result[3] += 0.06060606060606061;
          result[4] += 0.0010449320794148381;
          result[5] += 0.006269592476489028;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.02197802197802198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.945054945054945;
          result[5] += 0.03296703296703297;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0.009370816599732263;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04417670682730924;
          result[4] += 0.028112449799196786;
          result[5] += 0.9183400267737617;
        } else {
          result[0] += 0.14512471655328799;
          result[1] += 0.009070294784580499;
          result[2] += 0.04081632653061224;
          result[3] += 0.2675736961451247;
          result[4] += 0.12018140589569161;
          result[5] += 0.41723356009070295;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9974093264248705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025906735751295338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7734317343173431;
          result[1] += 0.023616236162361623;
          result[2] += 0;
          result[3] += 0.03099630996309963;
          result[4] += 0.1055350553505535;
          result[5] += 0.06642066420664207;
        } else {
          result[0] += 0.15137614678899083;
          result[1] += 0.045871559633027525;
          result[2] += 0.30045871559633025;
          result[3] += 0.25229357798165136;
          result[4] += 0.10550458715596331;
          result[5] += 0.1444954128440367;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08196721311475409;
          result[3] += 0.08196721311475409;
          result[4] += 0.08196721311475409;
          result[5] += 0.7540983606557377;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.041666666666666664;
          result[2] += 0.5;
          result[3] += 0.08333333333333333;
          result[4] += 0.08333333333333333;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0.06451612903225806;
          result[2] += 0.8387096774193549;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.08333333333333333;
          result[4] += 0.08333333333333333;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.028070175438596492;
          result[1] += 0;
          result[2] += 0.743859649122807;
          result[3] += 0.1824561403508772;
          result[4] += 0;
          result[5] += 0.0456140350877193;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.971976401179941;
          result[3] += 0.02654867256637168;
          result[4] += 0;
          result[5] += 0.0014749262536873156;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          result[0] += 0.007936507936507936;
          result[1] += 0.003968253968253968;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9246031746031746;
          result[5] += 0.06349206349206349;
        } else {
          result[0] += 0;
          result[1] += 0.4666666666666667;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.13333333333333333;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.001392757660167131;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023676880222841225;
          result[4] += 0.06406685236768803;
          result[5] += 0.9108635097493036;
        } else {
          result[0] += 0.09498207885304659;
          result[1] += 0.005376344086021506;
          result[2] += 0.0035842293906810036;
          result[3] += 0.31899641577060933;
          result[4] += 0.06451612903225806;
          result[5] += 0.5125448028673835;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.41935483870967744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.532258064516129;
          result[5] += 0.04838709677419355;
        } else {
          result[0] += 0.0021645021645021645;
          result[1] += 0.9826839826839827;
          result[2] += 0.0021645021645021645;
          result[3] += 0;
          result[4] += 0.012987012987012988;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
          result[0] += 0.5036036036036036;
          result[1] += 0.04594594594594595;
          result[2] += 0.109009009009009;
          result[3] += 0.11531531531531532;
          result[4] += 0.12972972972972974;
          result[5] += 0.0963963963963964;
        } else {
          result[0] += 0.9468267581475128;
          result[1] += 0.0017152658662092624;
          result[2] += 0.0274442538593482;
          result[3] += 0;
          result[4] += 0.018867924528301886;
          result[5] += 0.005145797598627788;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0.046511627906976744;
          result[3] += 0.09302325581395349;
          result[4] += 0.18604651162790697;
          result[5] += 0.6511627906976745;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6896551724137931;
          result[4] += 0;
          result[5] += 0.3103448275862069;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0;
          result[2] += 0.5337837837837838;
          result[3] += 0.30405405405405406;
          result[4] += 0.02702702702702703;
          result[5] += 0.0945945945945946;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7333333333333334;
          result[3] += 0.23333333333333336;
          result[4] += 0;
          result[5] += 0.03333333333333334;
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
          result[0] += 0.006273525721455458;
          result[1] += 0;
          result[2] += 0.9485570890840652;
          result[3] += 0.0451693851944793;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003401360544217687;
          result[1] += 0.017006802721088437;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.95578231292517;
          result[5] += 0.023809523809523808;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.3902439024390244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6097560975609756;
          result[5] += 0;
        } else {
          result[0] += 0.0022123893805309734;
          result[1] += 0.9889380530973452;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008849557522123894;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.016203703703703703;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04398148148148148;
          result[4] += 0.056712962962962965;
          result[5] += 0.8831018518518519;
        } else {
          result[0] += 0.1211340206185567;
          result[1] += 0.059278350515463915;
          result[2] += 0.030927835051546393;
          result[3] += 0.3582474226804124;
          result[4] += 0.03350515463917526;
          result[5] += 0.39690721649484534;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8419354838709677;
          result[1] += 0.016935483870967744;
          result[2] += 0.0064516129032258064;
          result[3] += 0.036290322580645164;
          result[4] += 0.07661290322580645;
          result[5] += 0.021774193548387097;
        } else {
          result[0] += 0.13250517598343686;
          result[1] += 0.018633540372670808;
          result[2] += 0.2732919254658385;
          result[3] += 0.2153209109730849;
          result[4] += 0.060041407867494824;
          result[5] += 0.3002070393374741;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13513513513513514;
          result[3] += 0;
          result[4] += 0.13513513513513514;
          result[5] += 0.7297297297297297;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9047619047619048;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.7435897435897436;
          result[4] += 0;
          result[5] += 0.08974358974358974;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
          result[0] += 0.1875;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.20833333333333334;
          result[3] += 0;
          result[4] += 0.041666666666666664;
          result[5] += 0.625;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.005931198102016608;
          result[1] += 0;
          result[2] += 0.9383155397390274;
          result[3] += 0.04982206405693951;
          result[4] += 0;
          result[5] += 0.005931198102016608;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  
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
