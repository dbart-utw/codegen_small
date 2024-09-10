
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4408150017261505127) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04772500135004520416) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1488099992275238037) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09781499952077865601) ) ) {
        result[0] += 0.8260869565217391;
        result[1] += 0.17391304347826086;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.05232558139534884;
        result[1] += 0.9476744186046512;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2120999991893768311) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.17647058823529413;
        result[1] += 0.8235294117647058;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6134250164031982422) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.07333333333333333;
        result[1] += 0.9266666666666666;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1898349970579147339) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1816850006580352783) ) ) {
        result[0] += 0.375;
        result[1] += 0.625;
      } else {
        result[0] += 0.975609756097561;
        result[1] += 0.024390243902439025;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      } else {
        result[0] += 0.1301775147928994;
        result[1] += 0.8698224852071006;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5487850010395050049) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.2326699942350387573) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
        result[0] += 0.164021164021164;
        result[1] += 0.8359788359788359;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2284099943935871124) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2111050039529800415) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6;
        result[1] += 0.4;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7088900059461593628) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8736400008201599121) ) ) {
        result[0] += 0.11413043478260869;
        result[1] += 0.8858695652173914;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8238550126552581787) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
        result[0] += 0.38181818181818183;
        result[1] += 0.6181818181818182;
      } else {
        result[0] += 0.08695652173913043;
        result[1] += 0.9130434782608695;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6030699983239173889) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.631578947368421;
        result[1] += 0.3684210526315789;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1773400008678436279) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.04680000152438879013) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3254049941897392273) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2127659574468085;
        result[1] += 0.7872340425531915;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.027777777777777776;
        result[1] += 0.9722222222222222;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7;
        result[1] += 0.3;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      } else {
        result[0] += 0.16483516483516483;
        result[1] += 0.8351648351648352;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9585700035095214844) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4172700047492980957) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10215053763440861;
        result[1] += 0.8978494623655914;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03320500021800398827) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11827956989247312;
        result[1] += 0.8817204301075269;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.05278500169515609741) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9598099887371063232) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9697250127792358398) ) ) {
        result[0] += 0.11428571428571428;
        result[1] += 0.8857142857142857;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.04437500052154064178) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8004899919033050537) ) ) {
        result[0] += 0.045454545454545456;
        result[1] += 0.9545454545454546;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6355749964714050293) ) ) {
        result[0] += 0.9824561403508771;
        result[1] += 0.017543859649122806;
      } else {
        result[0] += 0.6;
        result[1] += 0.4;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.9157600104808807373) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09352517985611511;
        result[1] += 0.9064748201438849;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.005164999980479478836) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.000130000005810870789) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4616000056266784668) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04039999842643737793) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14689265536723164;
        result[1] += 0.8531073446327684;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9280549883842468262) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.11052631578947368;
        result[1] += 0.8894736842105263;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.0197549993172287941) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3341400027275085449) ) ) {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      } else {
        result[0] += 0.1746031746031746;
        result[1] += 0.8253968253968254;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3047800064086914062) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.102803738317757;
        result[1] += 0.897196261682243;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7300400137901306152) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.02941000089049339294) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 0.9473684210526315;
        result[1] += 0.05263157894736842;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.0972972972972973;
        result[1] += 0.9027027027027027;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.111494995653629303) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02201499976217746735) ) ) {
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09941520467836257;
        result[1] += 0.9005847953216374;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9820699989795684814) ) ) {
        result[0] += 0.2;
        result[1] += 0.8;
      } else {
        result[0] += 0.8214285714285714;
        result[1] += 0.17857142857142858;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6858749985694885254) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4502249956130981445) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 0.9722222222222222;
        result[1] += 0.027777777777777776;
      } else {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10982658959537572;
        result[1] += 0.8901734104046243;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.690455019474029541) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1779949963092803955) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1249449960887432098) ) ) {
        result[0] += 0.32075471698113206;
        result[1] += 0.6792452830188679;
      } else {
        result[0] += 0.8780487804878049;
        result[1] += 0.12195121951219512;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
        result[0] += 0.07407407407407407;
        result[1] += 0.9259259259259259;
      } else {
        result[0] += 0.7727272727272727;
        result[1] += 0.22727272727272727;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        result[0] += 0.24186046511627907;
        result[1] += 0.7581395348837209;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0962566844919786;
        result[1] += 0.9037433155080213;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1978349983692169189) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.05093999952077865601) ) ) {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.9523809523809523;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2308000028133392334) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9521299898624420166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7832599878311157227) ) ) {
        result[0] += 0.08943089430894309;
        result[1] += 0.9105691056910569;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.00913000013679265976) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.666665002703666687) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.454864993691444397) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.0787250027060508728) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.9130434782608695;
        result[1] += 0.08695652173913043;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      } else {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6284099966287612915) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.4669799953699111938) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.11764705882352941;
        result[1] += 0.8823529411764706;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1359499990940093994) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5382749885320663452) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3573399931192398071) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.9787234042553191;
        result[1] += 0.02127659574468085;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.05322000198066234589) ) ) {
        result[0] += 0.05;
        result[1] += 0.95;
      } else {
        result[0] += 0.7368421052631579;
        result[1] += 0.2631578947368421;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08163265306122448;
        result[1] += 0.9183673469387755;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.280605001375079155) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 0.9523809523809523;
        result[1] += 0.047619047619047616;
      } else {
        result[0] += 0.10714285714285714;
        result[1] += 0.8928571428571429;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0.9666666666666667;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6030699983239173889) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8433550000190734863) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4408150017261505127) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3322049975395202637) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1473599998280405998) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.09698000270873308182) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9679799973964691162) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.08241758241758242;
        result[1] += 0.9175824175824175;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1379300057888031006) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6397249996662139893) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
        result[0] += 0.07534246575342465;
        result[1] += 0.9246575342465754;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4521050006151199341) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2132249996066093445) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4783550053834915161) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.811185002326965332) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8226949870586395264) ) ) {
        result[0] += 0.11688311688311688;
        result[1] += 0.8831168831168831;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9382799863815307617) ) ) {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        result[0] += 0.625;
        result[1] += 0.375;
      } else {
        result[0] += 0.08484848484848485;
        result[1] += 0.9151515151515152;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09672499820590019226) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2279900014400482178) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.03948000073432922363) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
        result[0] += 0.15384615384615385;
        result[1] += 0.8461538461538461;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4623600095510482788) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
        result[0] += 0.8148148148148148;
        result[1] += 0.18518518518518517;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1574749946594238281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.03225806451612903;
        result[1] += 0.967741935483871;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.996230006217956543) ) ) {
        result[0] += 0.12962962962962962;
        result[1] += 0.8703703703703703;
      } else {
        result[0] += 0.4411764705882353;
        result[1] += 0.5588235294117647;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9503299891948699951) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07975460122699386;
        result[1] += 0.9202453987730062;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6445949971675872803) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
        result[0] += 0.5263157894736842;
        result[1] += 0.47368421052631576;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-9.000000136438757181e-05) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3770699948072433472) ) ) {
        result[0] += 0.7619047619047619;
        result[1] += 0.23809523809523808;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6076700091361999512) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 0.9761904761904762;
        result[1] += 0.023809523809523808;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7620150148868560791) ) ) {
        result[0] += 0.0945945945945946;
        result[1] += 0.9054054054054054;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
        result[0] += 0.7021276595744681;
        result[1] += 0.2978723404255319;
      } else {
        result[0] += 0.02702702702702703;
        result[1] += 0.972972972972973;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4290899932384490967) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2748949974775314331) ) ) {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      } else {
        result[0] += 0.036036036036036036;
        result[1] += 0.963963963963964;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1246299967169761658) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7468499839305877686) ) ) {
        result[0] += 0.12352941176470589;
        result[1] += 0.8764705882352941;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04146500024944543839) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1972849927842617035) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8106650114059448242) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1653549931943416595) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6344799995422363281) ) ) {
        result[0] += 0.13548387096774195;
        result[1] += 0.864516129032258;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2120900005102157593) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7538200020790100098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8801849782466888428) ) ) {
        result[0] += 0.07971014492753623;
        result[1] += 0.9202898550724637;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3908900022506713867) ) ) {
        result[0] += 0.6756756756756757;
        result[1] += 0.32432432432432434;
      } else {
        result[0] += 0.04;
        result[1] += 0.96;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5093349814414978027) ) ) {
        result[0] += 0.4090909090909091;
        result[1] += 0.5909090909090909;
      } else {
        result[0] += 0.038834951456310676;
        result[1] += 0.9611650485436893;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6764699965715408325) ) ) {
        result[0] += 0.4117647058823529;
        result[1] += 0.5882352941176471;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.002110000001266598701) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8759950101375579834) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.35135135135135137;
        result[1] += 0.6486486486486487;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6510899960994720459) ) ) {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0.8181818181818182;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7620150148868560791) ) ) {
        result[0] += 0.03787878787878788;
        result[1] += 0.9621212121212122;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.004650000017136335373) ) ) {
        result[0] += 0.06481481481481481;
        result[1] += 0.9351851851851852;
      } else {
        result[0] += 0.3013698630136986;
        result[1] += 0.6986301369863014;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09069000184535980225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.09267500042915344238) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5324800163507461548) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.060109289617486336;
        result[1] += 0.9398907103825137;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.08563500270247459412) ) ) {
        result[0] += 0.4827586206896552;
        result[1] += 0.5172413793103449;
      } else {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      } else {
        result[0] += 0.14792899408284024;
        result[1] += 0.8520710059171598;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1659950017929077148) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5852550119161605835) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0.9444444444444444;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.4342049956321716309) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9788799881935119629) ) ) {
        result[0] += 0.09154929577464789;
        result[1] += 0.9084507042253521;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1700599938631057739) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11538461538461539;
        result[1] += 0.8846153846153846;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6028100103139877319) ) ) {
        result[0] += 0.6071428571428571;
        result[1] += 0.39285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12365591397849462;
        result[1] += 0.8763440860215054;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9135449826717376709) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6875;
        result[1] += 0.3125;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08280254777070063;
        result[1] += 0.9171974522292994;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04773000068962574005) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.11979166666666667;
        result[1] += 0.8802083333333334;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3658550083637237549) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5787450075149536133) ) ) {
        result[0] += 0.3;
        result[1] += 0.7;
      } else {
        result[0] += 0.9555555555555556;
        result[1] += 0.044444444444444446;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.08125499635934829712) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09090909090909091;
        result[1] += 0.9090909090909091;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1591049954295158386) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12269938650306748;
        result[1] += 0.8773006134969326;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1469650045037269592) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3146950006484985352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.766175001859664917) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.169290006160736084) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1679600030183792114) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.05384615384615385;
        result[1] += 0.9461538461538461;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9680899977684020996) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
        result[0] += 0.8260869565217391;
        result[1] += 0.17391304347826086;
      } else {
        result[0] += 0.20855614973262032;
        result[1] += 0.7914438502673797;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.139820002019405365) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7250399887561798096) ) ) {
        result[0] += 0.8863636363636364;
        result[1] += 0.11363636363636363;
      } else {
        result[0] += 0.12;
        result[1] += 0.88;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.6834149956703186035) ) ) {
        result[0] += 0.09316770186335403;
        result[1] += 0.906832298136646;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.00698000006377696991) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2612600028514862061) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2866950035095214844) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2918400019407272339) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2727272727272727;
        result[1] += 0.7272727272727273;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5194800198078155518) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.001010000007227063179) ) ) {
        result[0] += 0.2692307692307692;
        result[1] += 0.7307692307692307;
      } else {
        result[0] += 0.030927835051546393;
        result[1] += 0.9690721649484536;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1022149994969367981) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6559349894523620605) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3303350061178207397) ) ) {
        result[0] += 0.4880952380952381;
        result[1] += 0.5119047619047619;
      } else {
        result[0] += 0.0948905109489051;
        result[1] += 0.9051094890510949;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.690455019474029541) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6734299957752227783) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
        result[0] += 0.3968253968253968;
        result[1] += 0.6031746031746031;
      } else {
        result[0] += 0.03787878787878788;
        result[1] += 0.9621212121212122;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1539949998259544373) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6438149809837341309) ) ) {
        result[0] += 0.98;
        result[1] += 0.02;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3405199944972991943) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0.9333333333333333;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9179500043392181396) ) ) {
        result[0] += 0.03333333333333333;
        result[1] += 0.9666666666666667;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4591900110244750977) ) ) {
        result[0] += 0.5263157894736842;
        result[1] += 0.47368421052631576;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3927749991416931152) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12849162011173185;
        result[1] += 0.8715083798882681;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1368421052631579;
        result[1] += 0.8631578947368421;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.002469999948516488075) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7188099920749664307) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1023649973794817924) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1862550005316734314) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0.9333333333333333;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3624400049448013306) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.259780004620552063) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      } else {
        result[0] += 0.2222222222222222;
        result[1] += 0.7777777777777778;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.058823529411764705;
        result[1] += 0.9411764705882353;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2497249990701675415) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.4885300099849700928) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9905999898910522461) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
        result[0] += 0.12727272727272726;
        result[1] += 0.8727272727272727;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8481699824333190918) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9475899934768676758) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1263850033283233643) ) ) {
        result[0] += 0.532258064516129;
        result[1] += 0.46774193548387094;
      } else {
        result[0] += 0.13725490196078433;
        result[1] += 0.8627450980392157;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1818900033831596375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.613520011305809021) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09467455621301775;
        result[1] += 0.9053254437869822;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2951499968767166138) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9273549914360046387) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3693950027227401733) ) ) {
        result[0] += 0.9615384615384616;
        result[1] += 0.038461538461538464;
      } else {
        result[0] += 0.11627906976744186;
        result[1] += 0.8837209302325582;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6780349910259246826) ) ) {
        result[0] += 0.041666666666666664;
        result[1] += 0.9583333333333334;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.47058823529411764;
        result[1] += 0.5294117647058824;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5161550045013427734) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.08641975308641975;
        result[1] += 0.9135802469135802;
      } else {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      }
    }
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9475950002670288086) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5816050022840499878) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2672250047326087952) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5959800183773040771) ) ) {
        result[0] += 0.9056603773584906;
        result[1] += 0.09433962264150944;
      } else {
        result[0] += 0.1509433962264151;
        result[1] += 0.8490566037735849;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2097750008106231689) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1171875;
        result[1] += 0.8828125;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1379649974405765533) ) ) {
        result[0] += 0.9565217391304348;
        result[1] += 0.043478260869565216;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.9523809523809523;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06569343065693431;
        result[1] += 0.9343065693430657;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8592000007629394531) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4867400079965591431) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5263157894736842;
        result[1] += 0.47368421052631576;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8424600064754486084) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2866950035095214844) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11363636363636363;
        result[1] += 0.8863636363636364;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3912100046873092651) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.2425100058317184448) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.313474997878074646) ) ) {
        result[0] += 0.3;
        result[1] += 0.7;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2748949974775314331) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5161550045013427734) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11510791366906475;
        result[1] += 0.8848920863309353;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4172700047492980957) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4931400120258331299) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1171700023114681244) ) ) {
        result[0] += 0.43478260869565216;
        result[1] += 0.5652173913043478;
      } else {
        result[0] += 0.12408759124087591;
        result[1] += 0.8759124087591241;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.02649499941617250443) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8055749833583831787) ) ) {
        result[0] += 0.11538461538461539;
        result[1] += 0.8846153846153846;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.01882999949157238007) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06962025316455696;
        result[1] += 0.930379746835443;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1469650045037269592) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9667899906635284424) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3146950006484985352) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13529411764705881;
        result[1] += 0.8647058823529412;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5416666666666666;
        result[1] += 0.4583333333333333;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.01810000021941959858) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1815550029277801514) ) ) {
        result[0] += 0.9565217391304348;
        result[1] += 0.043478260869565216;
      } else {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05415000021457672119) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8493250012397766113) ) ) {
        result[0] += 0.10273972602739725;
        result[1] += 0.8972602739726028;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
        result[0] += 0.06832298136645963;
        result[1] += 0.9316770186335404;
      } else {
        result[0] += 0.9411764705882353;
        result[1] += 0.058823529411764705;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04094999935477972031) ) ) {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      } else {
        result[0] += 0.1875;
        result[1] += 0.8125;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11888111888111888;
        result[1] += 0.8811188811188811;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3888888888888889;
        result[1] += 0.6111111111111112;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.297214999794960022) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5122850090265274048) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15384615384615385;
        result[1] += 0.8461538461538461;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1005199998617172241) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.05278500169515609741) ) ) {
        result[0] += 0.2;
        result[1] += 0.8;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03320500021800398827) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09195402298850575;
        result[1] += 0.9080459770114943;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1635500006377696991) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02219000086188316345) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0880503144654088;
        result[1] += 0.9119496855345912;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05185999814420938492) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3284850120544433594) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6824399828910827637) ) ) {
        result[0] += 0.16279069767441862;
        result[1] += 0.8372093023255814;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7051749825477600098) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8243899941444396973) ) ) {
        result[0] += 0.08666666666666667;
        result[1] += 0.9133333333333333;
      } else {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04094999935477972031) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.518885001540184021) ) ) {
        result[0] += 0.9791666666666666;
        result[1] += 0.020833333333333332;
      } else {
        result[0] += 0.625;
        result[1] += 0.375;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09090909090909091;
        result[1] += 0.9090909090909091;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7494899928569793701) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.198720000684261322) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.0948905109489051;
        result[1] += 0.9051094890510949;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05976499989628791809) ) ) {
        result[0] += 0.1;
        result[1] += 0.9;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6648549884557723999) ) ) {
        result[0] += 0.08024691358024691;
        result[1] += 0.9197530864197531;
      } else {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.07622499763965606689) ) ) {
        result[0] += 0.3888888888888889;
        result[1] += 0.6111111111111112;
      } else {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.361114993691444397) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6814399957656860352) ) ) {
        result[0] += 0.1951219512195122;
        result[1] += 0.8048780487804879;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06935500167310237885) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      } else {
        result[0] += 0.08148148148148149;
        result[1] += 0.9185185185185185;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3716700077056884766) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.0723199993371963501) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2892649993300437927) ) ) {
        result[0] += 0.2542372881355932;
        result[1] += 0.7457627118644068;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6281549930572509766) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.001455000019632279873) ) ) {
        result[0] += 0.4782608695652174;
        result[1] += 0.5217391304347826;
      } else {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.052083333333333336;
        result[1] += 0.9479166666666666;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5054850131273269653) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1822600066661834717) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2609199956059455872) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7619047619047619;
        result[1] += 0.23809523809523808;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9788799881935119629) ) ) {
        result[0] += 0.13836477987421383;
        result[1] += 0.8616352201257862;
      } else {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1246299967169761658) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5573599934577941895) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11702127659574468;
        result[1] += 0.8829787234042553;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3994899988174438477) ) ) {
        result[0] += 0.84375;
        result[1] += 0.15625;
      } else {
        result[0] += 0.11475409836065574;
        result[1] += 0.8852459016393442;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.057692307692307696;
        result[1] += 0.9423076923076923;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5028099864721298218) ) ) {
        result[0] += 0.3;
        result[1] += 0.7;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6005150079727172852) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.16022099447513813;
        result[1] += 0.8397790055248618;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.3526699990034103394) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5603599846363067627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08571428571428572;
        result[1] += 0.9142857142857143;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3658550083637237549) ) ) {
        result[0] += 0.9122807017543859;
        result[1] += 0.08771929824561403;
      } else {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08661417322834646;
        result[1] += 0.9133858267716536;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2200950011610984802) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01044500013813376427) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 0.3673469387755102;
        result[1] += 0.6326530612244898;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7634799778461456299) ) ) {
        result[0] += 0.10738255033557047;
        result[1] += 0.8926174496644296;
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1385250017046928406) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1146550029516220093) ) ) {
        result[0] += 0.28888888888888886;
        result[1] += 0.7111111111111111;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.454864993691444397) ) ) {
        result[0] += 0.6875;
        result[1] += 0.3125;
      } else {
        result[0] += 0.10236220472440945;
        result[1] += 0.8976377952755905;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1130000017583370209) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.951604992151260376) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.00147999997716397047) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7052400112152099609) ) ) {
        result[0] += 0.10240963855421686;
        result[1] += 0.8975903614457831;
      } else {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.007809999864548444748) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1984199956059455872) ) ) {
        result[0] += 0.9523809523809523;
        result[1] += 0.047619047619047616;
      } else {
        result[0] += 0.09433962264150944;
        result[1] += 0.9056603773584906;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3664000034332275391) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9268800020217895508) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.096;
        result[1] += 0.904;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3012299984693527222) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.02830000035464763641) ) ) {
        result[0] += 0.5714285714285714;
        result[1] += 0.42857142857142855;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0.15873015873015872;
        result[1] += 0.8412698412698413;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        result[0] += 0.9130434782608695;
        result[1] += 0.08695652173913043;
      } else {
        result[0] += 0.09815950920245399;
        result[1] += 0.901840490797546;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04039999842643737793) ) ) {
        result[0] += 0.24324324324324326;
        result[1] += 0.7567567567567568;
      } else {
        result[0] += 0.9722222222222222;
        result[1] += 0.027777777777777776;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.125;
        result[1] += 0.875;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6958950012922286987) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2021749988198280334) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09941520467836257;
        result[1] += 0.9005847953216374;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5845049917697906494) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.21226415094339623;
        result[1] += 0.7877358490566038;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1288650035858154297) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1293499954044818878) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943250089883804321) ) ) {
        result[0] += 0.3684210526315789;
        result[1] += 0.631578947368421;
      } else {
        result[0] += 0.043478260869565216;
        result[1] += 0.9565217391304348;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7756849825382232666) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.38095238095238093;
        result[1] += 0.6190476190476191;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
