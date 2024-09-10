
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05147499870508909225) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1148549988865852356) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.445209994912147522) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
        result[0] += 0.1165644171779141;
        result[1] += 0.8834355828220859;
      } else {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.11924000084400177) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4981250166893005371) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4891800135374069214) ) ) {
        result[0] += 0.0896551724137931;
        result[1] += 0.9103448275862069;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.107680000364780426) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0.8181818181818182;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.6921100020408630371) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11834319526627218;
        result[1] += 0.8816568047337278;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4083350002765655518) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4094400107860565186) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1076250020414590836) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        result[0] += 0.06993006993006994;
        result[1] += 0.9300699300699301;
      } else {
        result[0] += 0.5217391304347826;
        result[1] += 0.4782608695652174;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2610699944198131561) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1919199936091899872) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3055450022220611572) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.034482758620689655;
        result[1] += 0.9655172413793104;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.195885002613067627) ) ) {
        result[0] += 0.9047619047619048;
        result[1] += 0.09523809523809523;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9101049900054931641) ) ) {
        result[0] += 0.06451612903225806;
        result[1] += 0.9354838709677419;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.08665999956429004669) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9108099937438964844) ) ) {
        result[0] += 0.2571428571428571;
        result[1] += 0.7428571428571429;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4868750125169754028) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
        result[0] += 0.36363636363636365;
        result[1] += 0.6363636363636364;
      } else {
        result[0] += 0.05825242718446602;
        result[1] += 0.941747572815534;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02590999938547611237) ) ) {
        result[0] += 0.8947368421052632;
        result[1] += 0.10526315789473684;
      } else {
        result[0] += 0.1875;
        result[1] += 0.8125;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
        result[0] += 0.13142857142857142;
        result[1] += 0.8685714285714285;
      } else {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5967300087213516235) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 0.10588235294117647;
        result[1] += 0.8941176470588236;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7547650039196014404) ) ) {
        result[0] += 0.42105263157894735;
        result[1] += 0.5789473684210527;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7062450051307678223) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.08387096774193549;
        result[1] += 0.9161290322580645;
      } else {
        result[0] += 0.5357142857142857;
        result[1] += 0.4642857142857143;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4720299988985061646) ) ) {
        result[0] += 0.2537313432835821;
        result[1] += 0.746268656716418;
      } else {
        result[0] += 0.036036036036036036;
        result[1] += 0.963963963963964;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.02869999967515468597) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8031700253486633301) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      } else {
        result[0] += 0.1;
        result[1] += 0.9;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
        result[0] += 0.625;
        result[1] += 0.375;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.05500499904155731201) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03558500111103057861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8584399819374084473) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3494549989700317383) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7435449957847595215) ) ) {
        result[0] += 0.07971014492753623;
        result[1] += 0.9202898550724637;
      } else {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09900990099009901;
        result[1] += 0.900990099009901;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2875100076198577881) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.07093500159680843353) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1612949967384338379) ) ) {
        result[0] += 0.7619047619047619;
        result[1] += 0.23809523809523808;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9795249998569488525) ) ) {
        result[0] += 0.11904761904761904;
        result[1] += 0.8809523809523809;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815050065517425537) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05172413793103448;
        result[1] += 0.9482758620689655;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.676109999418258667) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4;
        result[1] += 0.6;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1359499990940093994) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04340999945998191833) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1313650012016296387) ) ) {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08397000283002853394) ) ) {
        result[0] += 0.1;
        result[1] += 0.9;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9927200078964233398) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.252329997718334198) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.04838709677419355;
        result[1] += 0.9516129032258065;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7042099833488464355) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5286500155925750732) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2001650035381317139) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4;
        result[1] += 0.6;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2160200066864490509) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13636363636363635;
        result[1] += 0.8636363636363636;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        result[0] += 0.8421052631578947;
        result[1] += 0.15789473684210525;
      } else {
        result[0] += 0.060810810810810814;
        result[1] += 0.9391891891891891;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09574468085106383;
        result[1] += 0.9042553191489362;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2178549915552139282) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.0005549998022615909576) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4284099936485290527) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.02666666666666667;
        result[1] += 0.9733333333333334;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3340799957513809204) ) ) {
        result[0] += 0.5925925925925926;
        result[1] += 0.4074074074074074;
      } else {
        result[0] += 0.95;
        result[1] += 0.05;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.06034499965608119965) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.190189998596906662) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3237150013446807861) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.06363636363636363;
        result[1] += 0.9363636363636364;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6716500222682952881) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3793103448275862;
        result[1] += 0.6206896551724138;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9983800053596496582) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.993609994649887085) ) ) {
        result[0] += 0.053691275167785234;
        result[1] += 0.9463087248322147;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02590999938547611237) ) ) {
        result[0] += 0.84375;
        result[1] += 0.15625;
      } else {
        result[0] += 0.4;
        result[1] += 0.6;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01612500008195638657) ) ) {
        result[0] += 0.9666666666666667;
        result[1] += 0.03333333333333333;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8243899941444396973) ) ) {
        result[0] += 0.14124293785310735;
        result[1] += 0.8587570621468926;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4225250035524368286) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2880950048565864563) ) ) {
        result[0] += 0.23809523809523808;
        result[1] += 0.7619047619047619;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5254649966955184937) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2857299968600273132) ) ) {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      } else {
        result[0] += 0.0546875;
        result[1] += 0.9453125;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3074699938297271729) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
        result[0] += 0.9629629629629629;
        result[1] += 0.037037037037037035;
      } else {
        result[0] += 0.08163265306122448;
        result[1] += 0.9183673469387755;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.004364999011158943176) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.021052631578947368;
        result[1] += 0.9789473684210527;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04086500173434615135) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3432650119066238403) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11764705882352941;
        result[1] += 0.8823529411764706;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2528899982571601868) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.279420001432299614) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1442600004374980927) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1693121693121693;
        result[1] += 0.8306878306878307;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.11924000084400177) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.05735000036656856537) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.138994995504617691) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06896551724137931;
        result[1] += 0.9310344827586207;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.04650999978184700012) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.98;
        result[1] += 0.02;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.388889998197555542) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.06164383561643835;
        result[1] += 0.9383561643835616;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3031300008296966553) ) ) {
        result[0] += 0.975;
        result[1] += 0.025;
      } else {
        result[0] += 0.21428571428571427;
        result[1] += 0.7857142857142857;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 0.8947368421052632;
        result[1] += 0.10526315789473684;
      } else {
        result[0] += 0.10869565217391304;
        result[1] += 0.8913043478260869;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2129049971699714661) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2509699910879135132) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.02830000128597021103) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4883550107479095459) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.064;
        result[1] += 0.936;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4400949925184249878) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.23076923076923078;
        result[1] += 0.7692307692307693;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1495499983429908752) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3178700059652328491) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2244900017976760864) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.043478260869565216;
        result[1] += 0.9565217391304348;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.21052631578947367;
        result[1] += 0.7894736842105263;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07857142857142857;
        result[1] += 0.9214285714285714;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.055944055944055944;
        result[1] += 0.9440559440559441;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2377050071954727173) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5845049917697906494) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.573304980993270874) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.03773500025272369385) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2925699949264526367) ) ) {
        result[0] += 0.34328358208955223;
        result[1] += 0.6567164179104478;
      } else {
        result[0] += 0.03361344537815126;
        result[1] += 0.9663865546218487;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8246999979019165039) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.45;
        result[1] += 0.55;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.039473684210526314;
        result[1] += 0.9605263157894737;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5784250050783157349) ) ) {
        result[0] += 0.375;
        result[1] += 0.625;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5349799990653991699) ) ) {
        result[0] += 0.8518518518518519;
        result[1] += 0.14814814814814814;
      } else {
        result[0] += 0.07407407407407407;
        result[1] += 0.9259259259259259;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2052299976348876953) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07194244604316546;
        result[1] += 0.9280575539568345;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2217050045728683472) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.04938271604938271;
        result[1] += 0.9506172839506173;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8433550000190734863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6354350000619888306) ) ) {
        result[0] += 0.4090909090909091;
        result[1] += 0.5909090909090909;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.4642449915409088135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5372500121593475342) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7178550064563751221) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
        result[0] += 0.8709677419354839;
        result[1] += 0.12903225806451613;
      } else {
        result[0] += 0.11299435028248588;
        result[1] += 0.8870056497175142;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06702500022947788239) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4094400107860565186) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5265800058841705322) ) ) {
        result[0] += 0.9803921568627451;
        result[1] += 0.0196078431372549;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2981700003147125244) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9927200078964233398) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1416449993848800659) ) ) {
        result[0] += 0.5714285714285714;
        result[1] += 0.42857142857142855;
      } else {
        result[0] += 0.045454545454545456;
        result[1] += 0.9545454545454546;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1451800018548965454) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2857142857142857;
        result[1] += 0.7142857142857143;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8324699997901916504) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8744800090789794922) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4941900074481964111) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        result[0] += 0.96875;
        result[1] += 0.03125;
      } else {
        result[0] += 0.06629834254143646;
        result[1] += 0.9337016574585635;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5347349792718887329) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4230899959802627563) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5315400063991546631) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8139800131320953369) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11176470588235295;
        result[1] += 0.888235294117647;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9795249998569488525) ) ) {
        result[0] += 0.0963855421686747;
        result[1] += 0.9036144578313253;
      } else {
        result[0] += 0.6842105263157895;
        result[1] += 0.3157894736842105;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7989200055599212646) ) ) {
        result[0] += 0.8157894736842105;
        result[1] += 0.18421052631578946;
      } else {
        result[0] += 0.045454545454545456;
        result[1] += 0.9545454545454546;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8497000038623809814) ) ) {
        result[0] += 0.046511627906976744;
        result[1] += 0.9534883720930233;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6120550036430358887) ) ) {
        result[0] += 0.47058823529411764;
        result[1] += 0.5294117647058824;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.07329000160098075867) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9963699877262115479) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
        result[0] += 0.050359712230215826;
        result[1] += 0.9496402877697842;
      } else {
        result[0] += 0.6842105263157895;
        result[1] += 0.3157894736842105;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2641499936580657959) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1493950039148330688) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.2730999961495399475) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01370999962091445923) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.09714000299572944641) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3414750099182128906) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08904109589041095;
        result[1] += 0.910958904109589;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.009580000303685665131) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.08024691358024691;
        result[1] += 0.9197530864197531;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.03699000179767608643) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.006864999886602163315) ) ) {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6664200127124786377) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 0.9772727272727273;
        result[1] += 0.022727272727272728;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9125899970531463623) ) ) {
        result[0] += 0.19540229885057472;
        result[1] += 0.8045977011494253;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.001685000024735927582) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.00887500029057264328) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7333333333333333;
        result[1] += 0.26666666666666666;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6296200156211853027) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
        result[0] += 0.07792207792207792;
        result[1] += 0.922077922077922;
      } else {
        result[0] += 0.45161290322580644;
        result[1] += 0.5483870967741935;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3526600003242492676) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12727272727272726;
        result[1] += 0.8727272727272727;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.5343199968338012695) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.037383177570093455;
        result[1] += 0.9626168224299065;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9144749939441680908) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.04322999843861907721) ) ) {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7826600074768066406) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7636999785900115967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5806451612903226;
        result[1] += 0.41935483870967744;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2264149934053421021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2965200096368789673) ) ) {
        result[0] += 0.6027397260273972;
        result[1] += 0.3972602739726027;
      } else {
        result[0] += 0.06766917293233082;
        result[1] += 0.9323308270676691;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.09704000316560268402) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1316799968481063843) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09411764705882353;
        result[1] += 0.9058823529411765;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02259499905630946159) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4022950083017349243) ) ) {
        result[0] += 0.2127659574468085;
        result[1] += 0.7872340425531915;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9474450051784515381) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2481500059366226196) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08029197080291971;
        result[1] += 0.9197080291970803;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.037267080745341616;
        result[1] += 0.9627329192546584;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.09519000351428985596) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05409500002861022949) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.09976499900221824646) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8856399953365325928) ) ) {
        result[0] += 0.09090909090909091;
        result[1] += 0.9090909090909091;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6079050004482269287) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13793103448275862;
        result[1] += 0.8620689655172413;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1688100043684244156) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 0.07514450867052024;
        result[1] += 0.9248554913294798;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8039250075817108154) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8358849883079528809) ) ) {
        result[0] += 0.13872832369942195;
        result[1] += 0.861271676300578;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9707750082015991211) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8441950082778930664) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03689999878406524658) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1501450017094612122) ) ) {
        result[0] += 0.3939393939393939;
        result[1] += 0.6060606060606061;
      } else {
        result[0] += 0.04666666666666667;
        result[1] += 0.9533333333333334;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04545500129461288452) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9224799871444702148) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4;
        result[1] += 0.6;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01812000013887882233) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5595949888229370117) ) ) {
        result[0] += 0.782608695652174;
        result[1] += 0.21739130434782608;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.9523809523809523;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.03731343283582089;
        result[1] += 0.9626865671641791;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4899999946355819702) ) ) {
        result[0] += 0.6333333333333333;
        result[1] += 0.36666666666666664;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8524749875068664551) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1664250046014785767) ) ) {
        result[0] += 0.589041095890411;
        result[1] += 0.410958904109589;
      } else {
        result[0] += 0.12408759124087591;
        result[1] += 0.8759124087591241;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4652249962091445923) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2292350009083747864) ) ) {
        result[0] += 0.5882352941176471;
        result[1] += 0.4117647058823529;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.7378250062465667725) ) ) {
        result[0] += 0.14814814814814814;
        result[1] += 0.8518518518518519;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
        result[0] += 0.11764705882352941;
        result[1] += 0.8823529411764706;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05324000050313770771) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.17733990147783252;
        result[1] += 0.8226600985221675;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.171070002019405365) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2677400112152099609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2555649951100349426) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
        result[0] += 0.7727272727272727;
        result[1] += 0.22727272727272727;
      } else {
        result[0] += 0.0547945205479452;
        result[1] += 0.9452054794520548;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4936199933290481567) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.48;
        result[1] += 0.52;
      }
    }
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
        result[0] += 0.9210526315789473;
        result[1] += 0.07894736842105263;
      } else {
        result[0] += 0.1945945945945946;
        result[1] += 0.8054054054054054;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4602400064468383789) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2277799975126981735) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.10824742268041238;
        result[1] += 0.8917525773195877;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
        result[0] += 0.10869565217391304;
        result[1] += 0.8913043478260869;
      } else {
        result[0] += 0.8125;
        result[1] += 0.1875;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3427699953317642212) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.0782608695652174;
        result[1] += 0.9217391304347826;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4545449912548065186) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1384000033140182495) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2350450009107589722) ) ) {
        result[0] += 0.9117647058823529;
        result[1] += 0.08823529411764706;
      } else {
        result[0] += 0.20689655172413793;
        result[1] += 0.7931034482758621;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08130081300813008;
        result[1] += 0.9186991869918699;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2435550019145011902) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.235135003924369812) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.39285714285714285;
        result[1] += 0.6071428571428571;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7221750020980834961) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
        result[0] += 0.9411764705882353;
        result[1] += 0.058823529411764705;
      } else {
        result[0] += 0.17415730337078653;
        result[1] += 0.8258426966292135;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5643000006675720215) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0.9666666666666667;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.932500004768371582) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09929078014184398;
        result[1] += 0.900709219858156;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2915600091218948364) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3375;
        result[1] += 0.6625;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.088;
        result[1] += 0.912;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1205700002610683441) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7039999961853027344) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.11377245508982035;
        result[1] += 0.8862275449101796;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3341849967837333679) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9835450053215026855) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0594349987804889679) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1104700006544589996) ) ) {
        result[0] += 0.07692307692307693;
        result[1] += 0.9230769230769231;
      } else {
        result[0] += 0.7931034482758621;
        result[1] += 0.20689655172413793;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3275549989193677902) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.024390243902439025;
        result[1] += 0.975609756097561;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3181799948215484619) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.45;
        result[1] += 0.55;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9689399898052215576) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08854166666666667;
        result[1] += 0.9114583333333334;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4602400064468383789) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2562949955463409424) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8083200156688690186) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.08673469387755102;
        result[1] += 0.9132653061224489;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8308050036430358887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12371134020618557;
        result[1] += 0.8762886597938144;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4225250035524368286) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2151149958372116089) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08227848101265822;
        result[1] += 0.9177215189873418;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6030699983239173889) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5357142857142857;
        result[1] += 0.4642857142857143;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2104000002145767212) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4084399938583374023) ) ) {
        result[0] += 0.671875;
        result[1] += 0.328125;
      } else {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8633249998092651367) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09027777777777778;
        result[1] += 0.9097222222222222;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4541299939155578613) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2817550003528594971) ) ) {
        result[0] += 0.24;
        result[1] += 0.76;
      } else {
        result[0] += 0.8166666666666667;
        result[1] += 0.18333333333333332;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8042999804019927979) ) ) {
        result[0] += 0.057971014492753624;
        result[1] += 0.9420289855072463;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3880199939012527466) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8440750241279602051) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.95;
        result[1] += 0.05;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        result[0] += 0.09740259740259741;
        result[1] += 0.9025974025974026;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1724349930882453918) ) ) {
        result[0] += 0.7;
        result[1] += 0.3;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11538461538461539;
        result[1] += 0.8846153846153846;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3707450032234191895) ) ) {
        result[0] += 0.8490566037735849;
        result[1] += 0.1509433962264151;
      } else {
        result[0] += 0.17142857142857143;
        result[1] += 0.8285714285714286;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        result[0] += 0.09848484848484848;
        result[1] += 0.9015151515151515;
      } else {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
