
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6878150105476379395) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1497326203208556;
        result[1] += 0.8502673796791443;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
        result[0] += 0.625;
        result[1] += 0.375;
      } else {
        result[0] += 0.0736196319018405;
        result[1] += 0.9263803680981595;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.52;
        result[1] += 0.48;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.05278500169515609741) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1317049968474748312) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3659050017595291138) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.0755813953488372;
        result[1] += 0.9244186046511628;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-3.0000002880115062e-05) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.058823529411764705;
        result[1] += 0.9411764705882353;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3133950084447860718) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.9795918367346939;
        result[1] += 0.02040816326530612;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7684150040149688721) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.995559990406036377) ) ) {
        result[0] += 0.05970149253731343;
        result[1] += 0.9402985074626866;
      } else {
        result[0] += 0.5588235294117647;
        result[1] += 0.4411764705882353;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9972450137138366699) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5172413793103449;
        result[1] += 0.4827586206896552;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.12994350282485875;
        result[1] += 0.8700564971751412;
      } else {
        result[0] += 0.64;
        result[1] += 0.36;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2035950049757957458) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.06837606837606838;
        result[1] += 0.9316239316239316;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.854674994945526123) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5263157894736842;
        result[1] += 0.47368421052631576;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2192749977111816406) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.0903954802259887;
        result[1] += 0.9096045197740112;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6515149921178817749) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        result[0] += 0.7619047619047619;
        result[1] += 0.23809523809523808;
      } else {
        result[0] += 0.16580310880829016;
        result[1] += 0.8341968911917098;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.18055555555555555;
        result[1] += 0.8194444444444444;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09069000184535980225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08571428571428572;
        result[1] += 0.9142857142857143;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2253299951553344727) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3721999973058700562) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07053999975323677063) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.9375;
        result[1] += 0.0625;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7235800027847290039) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04039999842643737793) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.12626262626262627;
        result[1] += 0.8737373737373737;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3573399931192398071) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1984750032424926758) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6407900005578994751) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9990999996662139893) ) ) {
        result[0] += 0.07514450867052024;
        result[1] += 0.9248554913294798;
      } else {
        result[0] += 0.52;
        result[1] += 0.48;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.08778499811887741089) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8274700045585632324) ) ) {
        result[0] += 0.09950248756218906;
        result[1] += 0.900497512437811;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9313749969005584717) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04242424242424243;
        result[1] += 0.9575757575757575;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.13726000115275383) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4568350166082382202) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2222222222222222;
        result[1] += 0.7777777777777778;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07650273224043716;
        result[1] += 0.9234972677595629;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8523750007152557373) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3112100064754486084) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      } else {
        result[0] += 0.13714285714285715;
        result[1] += 0.8628571428571429;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.09905999898910522461) ) ) {
        result[0] += 0.8260869565217391;
        result[1] += 0.17391304347826086;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8256849944591522217) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.126440003514289856) ) ) {
        result[0] += 0.9512195121951219;
        result[1] += 0.04878048780487805;
      } else {
        result[0] += 0.2;
        result[1] += 0.8;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 0.10569105691056911;
        result[1] += 0.8943089430894309;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2021749988198280334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3445399999618530273) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        result[0] += 0.12359550561797752;
        result[1] += 0.8764044943820225;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3141649961471557617) ) ) {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      } else {
        result[0] += 0.115;
        result[1] += 0.885;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7369300127029418945) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8980399966239929199) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7785550057888031006) ) ) {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.1878453038674033;
        result[1] += 0.8121546961325967;
      } else {
        result[0] += 0.7;
        result[1] += 0.3;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.656165003776550293) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
        result[0] += 0;
        result[1] += 1;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.284089997410774231) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4006549865007400513) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
        result[0] += 0.9545454545454546;
        result[1] += 0.045454545454545456;
      } else {
        result[0] += 0.11049723756906077;
        result[1] += 0.8895027624309392;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.08971500303596258163) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1291399970650672913) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5839700028300285339) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10179640718562874;
        result[1] += 0.8982035928143712;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4220199882984161377) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03826499916613101959) ) ) {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 0.7222222222222222;
        result[1] += 0.2777777777777778;
      } else {
        result[0] += 0.06060606060606061;
        result[1] += 0.9393939393939394;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.18716577540106952;
        result[1] += 0.8128342245989305;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12727272727272726;
        result[1] += 0.8727272727272727;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.7785550057888031006) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3177399933338165283) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1014000028371810913) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1740150004625320435) ) ) {
        result[0] += 0.4430379746835443;
        result[1] += 0.5569620253164557;
      } else {
        result[0] += 0.104;
        result[1] += 0.896;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1014000028371810913) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.574694998562335968) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11049723756906077;
        result[1] += 0.8895027624309392;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04088499955832958221) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001350000020465813577) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.1025699978927150369) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.6897400021553039551) ) ) {
        result[0] += 0.09090909090909091;
        result[1] += 0.9090909090909091;
      } else {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-3.0000002880115062e-05) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1992949992418289185) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1304450035095214844) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7671350240707397461) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09316770186335403;
        result[1] += 0.906832298136646;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9333800077438354492) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.19626168224299065;
        result[1] += 0.8037383177570093;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7381399869918823242) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.01733999978750944138) ) ) {
        result[0] += 0.43529411764705883;
        result[1] += 0.5647058823529412;
      } else {
        result[0] += 0.0859375;
        result[1] += 0.9140625;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005294999980833381414) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.007040000054985284805) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1453200019896030426) ) ) {
        result[0] += 0.9736842105263158;
        result[1] += 0.02631578947368421;
      } else {
        result[0] += 0.625;
        result[1] += 0.375;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1658449992537498474) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0.8947368421052632;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6674700081348419189) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11904761904761904;
        result[1] += 0.8809523809523809;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3141649961471557617) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.16772499680519104) ) ) {
        result[0] += 0.8863636363636364;
        result[1] += 0.11363636363636363;
      } else {
        result[0] += 0.2222222222222222;
        result[1] += 0.7777777777777778;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8423199951648712158) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 0.10204081632653061;
        result[1] += 0.8979591836734694;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3341400027275085449) ) ) {
        result[0] += 0.44594594594594594;
        result[1] += 0.5540540540540541;
      } else {
        result[0] += 0.06779661016949153;
        result[1] += 0.9322033898305084;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04545500129461288452) ) ) {
        result[0] += 0.55;
        result[1] += 0.45;
      } else {
        result[0] += 0.9310344827586207;
        result[1] += 0.06896551724137931;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      } else {
        result[0] += 0.10674157303370786;
        result[1] += 0.8932584269662921;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5654150098562240601) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3083299994468688965) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6138400137424468994) ) ) {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      } else {
        result[0] += 0.0582010582010582;
        result[1] += 0.9417989417989417;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 0.12169312169312169;
        result[1] += 0.8783068783068783;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2021749988198280334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1473699957132339478) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08021390374331551;
        result[1] += 0.9197860962566845;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001350000020465813577) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6472049951553344727) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7356999814510345459) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
        result[0] += 0.1242603550295858;
        result[1] += 0.8757396449704142;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.1282051282051282;
        result[1] += 0.8717948717948718;
      } else {
        result[0] += 0.7407407407407407;
        result[1] += 0.25925925925925924;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        result[0] += 0.12307692307692308;
        result[1] += 0.8769230769230769;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2227599993348121643) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
        result[0] += 0.08152173913043478;
        result[1] += 0.9184782608695652;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5167649984359741211) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13953488372093023;
        result[1] += 0.8604651162790697;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
        result[0] += 0.06164383561643835;
        result[1] += 0.9383561643835616;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04938271604938271;
        result[1] += 0.9506172839506173;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.0718232044198895;
        result[1] += 0.9281767955801105;
      } else {
        result[0] += 0.5789473684210527;
        result[1] += 0.42105263157894735;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4783350080251693726) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2640799954533576965) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03773500025272369385) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2391999885439872742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8819800019264221191) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2481500059366226196) ) ) {
        result[0] += 0.4745762711864407;
        result[1] += 0.5254237288135594;
      } else {
        result[0] += 0.12903225806451613;
        result[1] += 0.8709677419354839;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2242500036954879761) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.018867924528301886;
        result[1] += 0.9811320754716981;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9051699936389923096) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.054878048780487805;
        result[1] += 0.9451219512195121;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
