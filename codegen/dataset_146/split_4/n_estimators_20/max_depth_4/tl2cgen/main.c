
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9762845849802372;
          result[5] += 0.023715415019762844;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0.8125;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.6538461538461539;
          result[5] += 0.11538461538461539;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          result[0] += 0.9913793103448276;
          result[1] += 0.008620689655172414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.008530805687203791;
          result[1] += 0.017061611374407582;
          result[2] += 0.006635071090047393;
          result[3] += 0.05971563981042654;
          result[4] += 0.08720379146919431;
          result[5] += 0.8208530805687204;
        } else {
          result[0] += 0.02417582417582418;
          result[1] += 0;
          result[2] += 0.08131868131868134;
          result[3] += 0.531868131868132;
          result[4] += 0.013186813186813189;
          result[5] += 0.3494505494505495;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9672489082969432;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03275109170305677;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1509433962264151;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8207547169811321;
          result[5] += 0.02830188679245283;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
          result[0] += 0.6574585635359117;
          result[1] += 0.041436464088397795;
          result[2] += 0.030386740331491715;
          result[3] += 0.08287292817679559;
          result[4] += 0.14364640883977903;
          result[5] += 0.044198895027624314;
        } else {
          result[0] += 0.9473007712082262;
          result[1] += 0.005141388174807198;
          result[2] += 0.021850899742930592;
          result[3] += 0.006426735218508998;
          result[4] += 0.014138817480719794;
          result[5] += 0.005141388174807198;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08823529411764706;
          result[3] += 0.36764705882352944;
          result[4] += 0.029411764705882353;
          result[5] += 0.5147058823529411;
        } else {
          result[0] += 0.12030075187969924;
          result[1] += 0.08270676691729323;
          result[2] += 0.47368421052631576;
          result[3] += 0.14285714285714285;
          result[4] += 0.045112781954887216;
          result[5] += 0.13533834586466165;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
          result[0] += 0.004329004329004329;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.21645021645021645;
          result[4] += 0;
          result[5] += 0.06493506493506493;
        } else {
          result[0] += 0.013245033112582781;
          result[1] += 0;
          result[2] += 0.9324503311258279;
          result[3] += 0.051655629139072845;
          result[4] += 0;
          result[5] += 0.0026490066225165563;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.026124818577648767;
          result[4] += 0.026124818577648767;
          result[5] += 0.9477503628447025;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          result[0] += 0.34730538922155696;
          result[1] += 0.17365269461077848;
          result[2] += 0;
          result[3] += 0.035928143712574856;
          result[4] += 0.4191616766467066;
          result[5] += 0.02395209580838324;
        } else {
          result[0] += 0.013245033112582781;
          result[1] += 0.004415011037527594;
          result[2] += 0.004415011037527594;
          result[3] += 0.4216335540838852;
          result[4] += 0.04856512141280353;
          result[5] += 0.5077262693156733;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7607090103397341;
          result[1] += 0.059084194977843424;
          result[2] += 0;
          result[3] += 0.024372230428360415;
          result[4] += 0.1395864106351551;
          result[5] += 0.01624815361890694;
        } else {
          result[0] += 0.187683284457478;
          result[1] += 0.017595307917888565;
          result[2] += 0.1935483870967742;
          result[3] += 0.2375366568914956;
          result[4] += 0.09090909090909091;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.18;
          result[2] += 0;
          result[3] += 0.08;
          result[4] += 0.2;
          result[5] += 0.54;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028169014084507046;
          result[3] += 0.7887323943661972;
          result[4] += 0;
          result[5] += 0.1830985915492958;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4186046511627907;
          result[3] += 0.4186046511627907;
          result[4] += 0;
          result[5] += 0.16279069767441862;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.23076923076923078;
          result[2] += 0;
          result[3] += 0.46153846153846156;
          result[4] += 0.15384615384615385;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0.018617021276595747;
          result[1] += 0;
          result[2] += 0.7925531914893618;
          result[3] += 0.1569148936170213;
          result[4] += 0;
          result[5] += 0.03191489361702128;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.8461538461538461;
          result[1] += 0.07692307692307693;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.021241830065359478;
          result[1] += 0;
          result[2] += 0.9575163398692811;
          result[3] += 0.021241830065359478;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017543859649122806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9649122807017544;
          result[5] += 0.017543859649122806;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.010159651669085631;
          result[2] += 0.001451378809869376;
          result[3] += 0.04934687953555878;
          result[4] += 0.027576197387518143;
          result[5] += 0.9114658925979681;
        } else {
          result[0] += 0.0835030549898167;
          result[1] += 0.008146639511201629;
          result[2] += 0.034623217922606926;
          result[3] += 0.3095723014256619;
          result[4] += 0.048879837067209775;
          result[5] += 0.515274949083503;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
          result[0] += 0.0944206008583691;
          result[1] += 0.2832618025751073;
          result[2] += 0.008583690987124463;
          result[3] += 0.07725321888412018;
          result[4] += 0.5021459227467812;
          result[5] += 0.034334763948497854;
        } else {
          result[0] += 0.6753799392097265;
          result[1] += 0.01276595744680851;
          result[2] += 0.06808510638297872;
          result[3] += 0.09604863221884498;
          result[4] += 0.07051671732522796;
          result[5] += 0.07720364741641338;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0.9230769230769231;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26530612244897966;
          result[3] += 0.5612244897959184;
          result[4] += 0.010204081632653062;
          result[5] += 0.163265306122449;
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
          result[0] += 0.10810810810810811;
          result[1] += 0;
          result[2] += 0.8108108108108109;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.037037037037037035;
          result[4] += 0.07407407407407407;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.004656577415599534;
          result[1] += 0;
          result[2] += 0.930151338766007;
          result[3] += 0.0570430733410943;
          result[4] += 0.0011641443538998836;
          result[5] += 0.006984866123399301;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)73.5) ) ) {
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.02962962962962963;
          result[2] += 0.003703703703703704;
          result[3] += 0.011111111111111112;
          result[4] += 0.8814814814814815;
          result[5] += 0.07407407407407407;
        } else {
          result[0] += 0.04852686308492201;
          result[1] += 0.0025996533795493936;
          result[2] += 0.01559792027729636;
          result[3] += 0.1438474870017331;
          result[4] += 0.08665511265164645;
          result[5] += 0.7027729636048526;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          result[0] += 0.1024390243902439;
          result[1] += 0.25853658536585367;
          result[2] += 0.014634146341463415;
          result[3] += 0.1073170731707317;
          result[4] += 0.44878048780487806;
          result[5] += 0.06829268292682927;
        } else {
          result[0] += 0.7110808973487424;
          result[1] += 0.01971447994561523;
          result[2] += 0.05846363018354861;
          result[3] += 0.06458191706322229;
          result[4] += 0.03874915023793338;
          result[5] += 0.10740992522093813;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
          result[0] += 0.056338028169014086;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0.056338028169014086;
          result[4] += 0.11267605633802817;
          result[5] += 0.7464788732394366;
        } else {
          result[0] += 0.011363636363636364;
          result[1] += 0.13636363636363635;
          result[2] += 0.09090909090909091;
          result[3] += 0.48863636363636365;
          result[4] += 0.03409090909090909;
          result[5] += 0.23863636363636365;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.14583333333333334;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.875;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0.008333333333333333;
          result[2] += 0.5333333333333333;
          result[3] += 0.25833333333333336;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0.012415349887133182;
          result[1] += 0;
          result[2] += 0.909706546275395;
          result[3] += 0.07223476297968397;
          result[4] += 0;
          result[5] += 0.0056433408577878106;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.005235602094240838;
          result[1] += 0.005235602094240838;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9842931937172775;
          result[5] += 0.005235602094240838;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21428571428571427;
          result[4] += 0.4523809523809524;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0.041922290388548056;
          result[1] += 0.0010224948875255625;
          result[2] += 0;
          result[3] += 0.06237218813905931;
          result[4] += 0.06134969325153374;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0.006289308176100629;
          result[2] += 0;
          result[3] += 0.5911949685534591;
          result[4] += 0;
          result[5] += 0.4025157232704403;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9915611814345991;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008438818565400843;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7855093256814921;
          result[1] += 0.025107604017216643;
          result[2] += 0.0028694404591104736;
          result[3] += 0.02654232424677188;
          result[4] += 0.133428981348637;
          result[5] += 0.02654232424677188;
        } else {
          result[0] += 0.1793103448275862;
          result[1] += 0.041379310344827586;
          result[2] += 0.22413793103448276;
          result[3] += 0.2413793103448276;
          result[4] += 0.08620689655172414;
          result[5] += 0.22758620689655173;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
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
          result[2] += 0.07407407407407407;
          result[3] += 0.09876543209876543;
          result[4] += 0.037037037037037035;
          result[5] += 0.7901234567901234;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.006369426751592357;
          result[2] += 0.10828025477707007;
          result[3] += 0.6114649681528662;
          result[4] += 0;
          result[5] += 0.27388535031847133;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7297297297297297;
          result[3] += 0.24324324324324326;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.6976744186046511;
          result[1] += 0.09302325581395347;
          result[2] += 0.0697674418604651;
          result[3] += 0.02325581395348837;
          result[4] += 0.09302325581395347;
          result[5] += 0.02325581395348837;
        } else {
          result[0] += 0.029761904761904764;
          result[1] += 0.03571428571428572;
          result[2] += 0.6071428571428572;
          result[3] += 0.25000000000000006;
          result[4] += 0.011904761904761906;
          result[5] += 0.0654761904761905;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0.2;
          result[1] += 0.015384615384615385;
          result[2] += 0.6307692307692307;
          result[3] += 0.13846153846153847;
          result[4] += 0;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0.001364256480218281;
          result[1] += 0;
          result[2] += 0.9536152796725784;
          result[3] += 0.045020463847203276;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.004761904761904762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0.031055900621118012;
          result[1] += 0.014492753623188406;
          result[2] += 0.007246376811594203;
          result[3] += 0.07556935817805382;
          result[4] += 0.053830227743271224;
          result[5] += 0.8178053830227743;
        } else {
          result[0] += 0.04794520547945205;
          result[1] += 0.03767123287671233;
          result[2] += 0.02054794520547945;
          result[3] += 0.5034246575342466;
          result[4] += 0.017123287671232876;
          result[5] += 0.3732876712328767;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.15151515151515152;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0;
          result[1] += 0.9872881355932204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012711864406779662;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.06341463414634146;
          result[1] += 0.24390243902439024;
          result[2] += 0.02926829268292683;
          result[3] += 0.01951219512195122;
          result[4] += 0.6048780487804878;
          result[5] += 0.03902439024390244;
        } else {
          result[0] += 0.7240238252812706;
          result[1] += 0.0066181336863004635;
          result[2] += 0.05890138980807412;
          result[3] += 0.0827266710787558;
          result[4] += 0.062210456651224356;
          result[5] += 0.06551952349437459;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.46153846153846156;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.14;
          result[4] += 0;
          result[5] += 0.78;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18518518518518517;
          result[3] += 0.48148148148148145;
          result[4] += 0;
          result[5] += 0.3333333333333333;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0.10526315789473684;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0.21052631578947367;
          result[4] += 0.2631578947368421;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0.02491103202846975;
          result[1] += 0;
          result[2] += 0.7722419928825622;
          result[3] += 0.1494661921708185;
          result[4] += 0;
          result[5] += 0.05338078291814947;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7878787878787878;
          result[3] += 0.21212121212121213;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9696428571428571;
          result[3] += 0.030357142857142857;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          result[0] += 0.028455284552845527;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8252032520325203;
          result[5] += 0.14634146341463414;
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
          result[0] += 0;
          result[1] += 0.002551020408163265;
          result[2] += 0.00510204081632653;
          result[3] += 0.04081632653061224;
          result[4] += 0.05739795918367347;
          result[5] += 0.8941326530612245;
        } else {
          result[0] += 0;
          result[1] += 0.05309734513274336;
          result[2] += 0.05752212389380531;
          result[3] += 0.46017699115044247;
          result[4] += 0.022123893805309734;
          result[5] += 0.40707964601769914;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977116704805492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002288329519450801;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7233757535164099;
          result[1] += 0.022103148024112524;
          result[2] += 0.003348961821835231;
          result[3] += 0.03951774949765573;
          result[4] += 0.16275954454119224;
          result[5] += 0.048894842598794376;
        } else {
          result[0] += 0.15254237288135594;
          result[1] += 0.022598870056497175;
          result[2] += 0.15819209039548024;
          result[3] += 0.3163841807909605;
          result[4] += 0.064030131826742;
          result[5] += 0.2862523540489642;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10204081632653061;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.1836734693877551;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          result[0] += 0.013888888888888888;
          result[1] += 0;
          result[2] += 0.6527777777777778;
          result[3] += 0.19444444444444445;
          result[4] += 0.027777777777777776;
          result[5] += 0.1111111111111111;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
          result[0] += 0.039473684210526314;
          result[1] += 0;
          result[2] += 0.7236842105263158;
          result[3] += 0.11842105263157894;
          result[4] += 0;
          result[5] += 0.11842105263157894;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7755102040816326;
          result[3] += 0.1836734693877551;
          result[4] += 0;
          result[5] += 0.04081632653061224;
        } else {
          result[0] += 0.0013227513227513227;
          result[1] += 0;
          result[2] += 0.9563492063492064;
          result[3] += 0.03968253968253968;
          result[4] += 0;
          result[5] += 0.0026455026455026454;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67) ) ) {
          result[0] += 0.013392857142857142;
          result[1] += 0.017857142857142856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9553571428571429;
          result[5] += 0.013392857142857142;
        } else {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0.21428571428571427;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03910614525139665;
          result[1] += 0.013966480446927373;
          result[2] += 0.000931098696461825;
          result[3] += 0.074487895716946;
          result[4] += 0.0595903165735568;
          result[5] += 0.8119180633147114;
        } else {
          result[0] += 0.014084507042253521;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0.6291079812206573;
          result[4] += 0.009389671361502348;
          result[5] += 0.3192488262910798;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)48.5) ) ) {
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
          result[3] += 0.03333333333333333;
          result[4] += 0.3;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.09302325581395349;
          result[1] += 0.19069767441860466;
          result[2] += 0;
          result[3] += 0.004651162790697674;
          result[4] += 0.6883720930232559;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0.7356733524355301;
          result[1] += 0.011461318051575931;
          result[2] += 0.05300859598853868;
          result[3] += 0.0680515759312321;
          result[4] += 0.05157593123209169;
          result[5] += 0.08022922636103152;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013513513513513514;
          result[3] += 0.17567567567567569;
          result[4] += 0.14864864864864866;
          result[5] += 0.6621621621621622;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.5692307692307692;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          result[0] += 0.28571428571428575;
          result[1] += 0.14285714285714288;
          result[2] += 0;
          result[3] += 0.14285714285714288;
          result[4] += 0.14285714285714288;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.10526315789473684;
          result[1] += 0;
          result[2] += 0.8421052631578947;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.06299212598425197;
          result[1] += 0.005249343832020997;
          result[2] += 0.7217847769028871;
          result[3] += 0.18635170603674542;
          result[4] += 0.005249343832020997;
          result[5] += 0.01837270341207349;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9645494830132939;
          result[3] += 0.033973412112259974;
          result[4] += 0;
          result[5] += 0.0014771048744460858;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 1;
          result[1] += 0;
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904306220095693;
          result[5] += 0.009569377990430622;
        } else {
          result[0] += 0.015873015873015872;
          result[1] += 0;
          result[2] += 0.031746031746031744;
          result[3] += 0.031746031746031744;
          result[4] += 0.5396825396825397;
          result[5] += 0.38095238095238093;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
          result[0] += 0.96875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03125;
          result[5] += 0;
        } else {
          result[0] += 0.0022650056625141564;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030577576443941108;
          result[4] += 0.03397508493771234;
          result[5] += 0.9331823329558324;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.09956709956709957;
          result[1] += 0.08658008658008658;
          result[2] += 0.03896103896103896;
          result[3] += 0.2554112554112554;
          result[4] += 0.047619047619047616;
          result[5] += 0.47186147186147187;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05325443786982249;
          result[3] += 0.6804733727810651;
          result[4] += 0.01775147928994083;
          result[5] += 0.2485207100591716;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)43) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.16521739130434784;
          result[1] += 0.11304347826086958;
          result[2] += 0;
          result[3] += 0.004347826086956523;
          result[4] += 0.6913043478260871;
          result[5] += 0.026086956521739132;
        } else {
          result[0] += 0.8384424192212094;
          result[1] += 0.009113504556752276;
          result[2] += 0.019055509527754762;
          result[3] += 0.055509527754763865;
          result[4] += 0.04888152444076221;
          result[5] += 0.028997514498757242;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0.00558659217877095;
          result[1] += 0.0111731843575419;
          result[2] += 0.26536312849162014;
          result[3] += 0.39106145251396646;
          result[4] += 0.036312849162011177;
          result[5] += 0.2905027932960894;
        } else {
          result[0] += 0.03719008264462811;
          result[1] += 0;
          result[2] += 0.8873966942148761;
          result[3] += 0.059917355371900835;
          result[4] += 0.004132231404958679;
          result[5] += 0.011363636363636366;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.003787878787878788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9659090909090909;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.04983388704318937;
          result[1] += 0.005813953488372093;
          result[2] += 0.005813953488372093;
          result[3] += 0.14119601328903655;
          result[4] += 0.05813953488372093;
          result[5] += 0.739202657807309;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7817109144542774;
          result[1] += 0.04719764011799411;
          result[2] += 0.006637168141592921;
          result[3] += 0.02433628318584071;
          result[4] += 0.12389380530973453;
          result[5] += 0.016224188790560475;
        } else {
          result[0] += 0.1232876712328767;
          result[1] += 0.0684931506849315;
          result[2] += 0.2226027397260274;
          result[3] += 0.3253424657534247;
          result[4] += 0.03424657534246575;
          result[5] += 0.22602739726027396;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.10810810810810811;
          result[4] += 0.13513513513513514;
          result[5] += 0.7297297297297297;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04938271604938271;
          result[3] += 0.5308641975308642;
          result[4] += 0;
          result[5] += 0.41975308641975306;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0.3;
          result[3] += 0.23333333333333334;
          result[4] += 0.11666666666666667;
          result[5] += 0.31666666666666665;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.8947368421052632;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.47560975609756095;
          result[3] += 0.3780487804878049;
          result[4] += 0.012195121951219513;
          result[5] += 0.10975609756097561;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8309859154929577;
          result[3] += 0.15492957746478872;
          result[4] += 0;
          result[5] += 0.014084507042253521;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.45454545454545453;
          result[1] += 0.09090909090909091;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.010217113665389528;
          result[1] += 0;
          result[2] += 0.9399744572158365;
          result[3] += 0.04597701149425287;
          result[4] += 0;
          result[5] += 0.0038314176245210726;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.01020408163265306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9846938775510204;
          result[5] += 0.00510204081632653;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05128205128205128;
          result[3] += 0;
          result[4] += 0.6410256410256411;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          result[0] += 0.005813953488372093;
          result[1] += 0;
          result[2] += 0.0029069767441860465;
          result[3] += 0.03343023255813953;
          result[4] += 0.03488372093023256;
          result[5] += 0.9229651162790697;
        } else {
          result[0] += 0.08651911468812877;
          result[1] += 0.05030181086519115;
          result[2] += 0;
          result[3] += 0.3420523138832998;
          result[4] += 0.05432595573440644;
          result[5] += 0.46680080482897385;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.68;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0.28;
          result[5] += 0;
        } else {
          result[0] += 0.004555808656036446;
          result[1] += 0.9863325740318907;
          result[2] += 0.00683371298405467;
          result[3] += 0;
          result[4] += 0.002277904328018223;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7599085365853658;
          result[1] += 0.0350609756097561;
          result[2] += 0.0022865853658536584;
          result[3] += 0.028963414634146343;
          result[4] += 0.15015243902439024;
          result[5] += 0.023628048780487805;
        } else {
          result[0] += 0.10677618069815195;
          result[1] += 0.022587268993839837;
          result[2] += 0.2587268993839836;
          result[3] += 0.29568788501026694;
          result[4] += 0.045174537987679675;
          result[5] += 0.27104722792607805;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.07142857142857142;
          result[4] += 0.5;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1702127659574468;
          result[4] += 0;
          result[5] += 0.8297872340425532;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.22580645161290322;
          result[3] += 0.6612903225806451;
          result[4] += 0.016129032258064516;
          result[5] += 0.08064516129032258;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.027777777777777776;
          result[2] += 0.4444444444444444;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0.5;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0.09090909090909091;
          result[2] += 0.09090909090909091;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46875;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.09375;
        } else {
          result[0] += 0.03146067415730337;
          result[1] += 0;
          result[2] += 0.902247191011236;
          result[3] += 0.06179775280898876;
          result[4] += 0;
          result[5] += 0.0044943820224719105;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.004830917874396135;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9855072463768116;
          result[5] += 0.00966183574879227;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5862068965517241;
          result[5] += 0.41379310344827586;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
          result[3] += 0.014657980456026058;
          result[4] += 0.013029315960912053;
          result[5] += 0.9723127035830619;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.6376811594202899;
          result[1] += 0.24637681159420294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08695652173913045;
          result[5] += 0.028985507246376815;
        } else {
          result[0] += 0;
          result[1] += 0.014285714285714285;
          result[2] += 0.04081632653061224;
          result[3] += 0.3836734693877551;
          result[4] += 0.07755102040816327;
          result[5] += 0.48367346938775513;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7647058823529411;
          result[5] += 0;
        } else {
          result[0] += 0.002079002079002079;
          result[1] += 0.997920997920998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7849779086892489;
          result[1] += 0.027245949926362298;
          result[2] += 0.004418262150220913;
          result[3] += 0.03313696612665685;
          result[4] += 0.13770250368188514;
          result[5] += 0.012518409425625921;
        } else {
          result[0] += 0.2435064935064935;
          result[1] += 0.012987012987012988;
          result[2] += 0.17207792207792208;
          result[3] += 0.2857142857142857;
          result[4] += 0.09740259740259741;
          result[5] += 0.18831168831168832;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.010752688172043012;
          result[1] += 0.010752688172043012;
          result[2] += 0.10752688172043011;
          result[3] += 0.0967741935483871;
          result[4] += 0.1827956989247312;
          result[5] += 0.5913978494623656;
        } else {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.24;
          result[3] += 0.4533333333333333;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0.05223880597014925;
          result[1] += 0.014925373134328358;
          result[2] += 0.4925373134328358;
          result[3] += 0.30597014925373134;
          result[4] += 0.03731343283582089;
          result[5] += 0.09701492537313433;
        } else {
          result[0] += 0.005387931034482759;
          result[1] += 0;
          result[2] += 0.9342672413793104;
          result[3] += 0.05603448275862069;
          result[4] += 0;
          result[5] += 0.004310344827586207;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.03669724770642202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9541284403669725;
          result[5] += 0.009174311926605505;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019230769230769232;
          result[4] += 0.5192307692307693;
          result[5] += 0.46153846153846156;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0014577259475218659;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04227405247813411;
          result[4] += 0.027696793002915453;
          result[5] += 0.9285714285714286;
        } else {
          result[0] += 0.1237721021611002;
          result[1] += 0.03536345776031434;
          result[2] += 0.005893909626719057;
          result[3] += 0.31237721021611004;
          result[4] += 0.0550098231827112;
          result[5] += 0.4675834970530452;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7049408489909534;
          result[1] += 0.046624913013222;
          result[2] += 0.009742519137091165;
          result[3] += 0.04592901878914406;
          result[4] += 0.16214335421016007;
          result[5] += 0.03061934585942937;
        } else {
          result[0] += 0.12571428571428572;
          result[1] += 0.03142857142857143;
          result[2] += 0.19142857142857142;
          result[3] += 0.26285714285714284;
          result[4] += 0.08;
          result[5] += 0.30857142857142855;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.9841628959276019;
          result[2] += 0.004524886877828056;
          result[3] += 0.0067873303167420825;
          result[4] += 0.004524886877828056;
          result[5] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.1;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.09090909090909091;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.624;
          result[3] += 0.296;
          result[4] += 0.016;
          result[5] += 0.064;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99) ) ) {
          result[0] += 0.004381161007667032;
          result[1] += 0;
          result[2] += 0.9386637458926615;
          result[3] += 0.05366922234392114;
          result[4] += 0;
          result[5] += 0.0032858707557502738;
        } else {
          result[0] += 0.2916666666666667;
          result[1] += 0;
          result[2] += 0.7083333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.016597510373443983;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9377593360995851;
          result[5] += 0.04564315352697095;
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
          result[0] += 0.03765690376569038;
          result[1] += 0.013598326359832637;
          result[2] += 0;
          result[3] += 0.04602510460251046;
          result[4] += 0.04079497907949791;
          result[5] += 0.8619246861924686;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007575757575757576;
          result[3] += 0.5909090909090909;
          result[4] += 0.03409090909090909;
          result[5] += 0.36742424242424243;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7610020311442113;
          result[1] += 0.04468517264725796;
          result[2] += 0.004062288422477996;
          result[3] += 0.02098849018280298;
          result[4] += 0.14082599864590387;
          result[5] += 0.02843601895734597;
        } else {
          result[0] += 0.1267605633802817;
          result[1] += 0.03621730382293763;
          result[2] += 0.21730382293762576;
          result[3] += 0.28772635814889336;
          result[4] += 0.08853118712273642;
          result[5] += 0.24346076458752516;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0.6;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0.06451612903225806;
          result[4] += 0;
          result[5] += 0.7741935483870968;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10638297872340426;
          result[3] += 0.574468085106383;
          result[4] += 0;
          result[5] += 0.3191489361702128;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03759398496240602;
          result[1] += 0;
          result[2] += 0.7969924812030076;
          result[3] += 0.13157894736842107;
          result[4] += 0;
          result[5] += 0.03383458646616542;
        } else {
          result[0] += 0.0033003300330033004;
          result[1] += 0;
          result[2] += 0.9587458745874587;
          result[3] += 0.026402640264026403;
          result[4] += 0;
          result[5] += 0.01155115511551155;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0.011320754716981131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9358490566037736;
          result[5] += 0.033962264150943396;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.056179775280898875;
          result[4] += 0.2640449438202247;
          result[5] += 0.1797752808988764;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0.046296296296296294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6388888888888888;
          result[5] += 0.3055555555555556;
        } else {
          result[0] += 0.004608294930875576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10046082949308756;
          result[4] += 0.04884792626728111;
          result[5] += 0.8460829493087557;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.023809523809523808;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.5;
          result[5] += 0.11904761904761904;
        } else {
          result[0] += 0.002403846153846154;
          result[1] += 0.9903846153846154;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007211538461538462;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7836700336700336;
          result[1] += 0.037037037037037035;
          result[2] += 0.005892255892255892;
          result[3] += 0.04882154882154882;
          result[4] += 0.08080808080808081;
          result[5] += 0.04377104377104377;
        } else {
          result[0] += 0.12207792207792208;
          result[1] += 0.02857142857142857;
          result[2] += 0.16103896103896104;
          result[3] += 0.37922077922077924;
          result[4] += 0.05194805194805195;
          result[5] += 0.2571428571428571;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.10344827586206896;
          result[2] += 0.06896551724137931;
          result[3] += 0.06896551724137931;
          result[4] += 0.10344827586206896;
          result[5] += 0.6206896551724138;
        } else {
          result[0] += 0.08196721311475409;
          result[1] += 0.03278688524590164;
          result[2] += 0.1557377049180328;
          result[3] += 0.4918032786885246;
          result[4] += 0.040983606557377046;
          result[5] += 0.19672131147540983;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 1;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.2708333333333333;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.10416666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8227848101265823;
          result[3] += 0.13924050632911392;
          result[4] += 0;
          result[5] += 0.0379746835443038;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
          result[0] += 0.0073439412484700125;
          result[1] += 0;
          result[2] += 0.9290085679314566;
          result[3] += 0.05385556915544676;
          result[4] += 0;
          result[5] += 0.009791921664626682;
        } else {
          result[0] += 0.2653061224489796;
          result[1] += 0;
          result[2] += 0.7346938775510204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.04149377593360996;
          result[2] += 0;
          result[3] += 0.012448132780082987;
          result[4] += 0.8796680497925311;
          result[5] += 0.06639004149377593;
        } else {
          result[0] += 0.6923076923076923;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015384615384615385;
          result[4] += 0.12307692307692308;
          result[5] += 0.16923076923076924;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.024630541871921183;
          result[2] += 0;
          result[3] += 0.0332512315270936;
          result[4] += 0.09236453201970443;
          result[5] += 0.8497536945812808;
        } else {
          result[0] += 0.013333333333333334;
          result[1] += 0;
          result[2] += 0.02666666666666667;
          result[3] += 0.49666666666666665;
          result[4] += 0.03333333333333333;
          result[5] += 0.43;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9953596287703016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004640371229698376;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7909967845659164;
          result[1] += 0.018488745980707395;
          result[2] += 0.0008038585209003215;
          result[3] += 0.03215434083601286;
          result[4] += 0.13504823151125403;
          result[5] += 0.022508038585209004;
        } else {
          result[0] += 0.17706237424547283;
          result[1] += 0.05432595573440644;
          result[2] += 0.2454728370221328;
          result[3] += 0.2454728370221328;
          result[4] += 0.052313883299798795;
          result[5] += 0.22535211267605634;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82.5) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0.2033898305084746;
          result[2] += 0.06779661016949153;
          result[3] += 0.06779661016949153;
          result[4] += 0.2033898305084746;
          result[5] += 0.4406779661016949;
        } else {
          result[0] += 0;
          result[1] += 0.010526315789473684;
          result[2] += 0.1368421052631579;
          result[3] += 0.6105263157894737;
          result[4] += 0.042105263157894736;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.7682926829268293;
          result[3] += 0.15853658536585366;
          result[4] += 0;
          result[5] += 0.04878048780487805;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.018867924528301886;
          result[2] += 0.16981132075471697;
          result[3] += 0.39622641509433965;
          result[4] += 0.05660377358490566;
          result[5] += 0.3584905660377358;
        } else {
          result[0] += 0.16666666666666669;
          result[1] += 0.03333333333333334;
          result[2] += 0.6666666666666667;
          result[3] += 0.03333333333333334;
          result[4] += 0.10000000000000002;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.028125000000000004;
          result[1] += 0;
          result[2] += 0.7937500000000001;
          result[3] += 0.14687500000000003;
          result[4] += 0;
          result[5] += 0.03125000000000001;
        } else {
          result[0] += 0.0018050541516245488;
          result[1] += 0;
          result[2] += 0.9657039711191335;
          result[3] += 0.02707581227436823;
          result[4] += 0;
          result[5] += 0.005415162454873646;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.022421524663677132;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.914798206278027;
          result[5] += 0.06278026905829598;
        } else {
          result[0] += 0.8955223880597015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08955223880597014;
          result[5] += 0.014925373134328358;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.004750593824228029;
          result[2] += 0.0059382422802850355;
          result[3] += 0.048693586698337295;
          result[4] += 0.0688836104513064;
          result[5] += 0.8717339667458432;
        } else {
          result[0] += 0.008241758241758242;
          result[1] += 0.04945054945054945;
          result[2] += 0.027472527472527472;
          result[3] += 0.4423076923076923;
          result[4] += 0.027472527472527472;
          result[5] += 0.44505494505494503;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.4482758620689655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5517241379310345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.993103448275862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006896551724137931;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.74800290486565;
          result[1] += 0.038489469862018885;
          result[2] += 0.0014524328249818448;
          result[3] += 0.021786492374727674;
          result[4] += 0.16049382716049385;
          result[5] += 0.02977487291212782;
        } else {
          result[0] += 0.18409090909090908;
          result[1] += 0.020454545454545454;
          result[2] += 0.2318181818181818;
          result[3] += 0.3068181818181818;
          result[4] += 0.05909090909090909;
          result[5] += 0.19772727272727272;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0.9629629629629629;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0.20689655172413793;
          result[3] += 0.4482758620689655;
          result[4] += 0;
          result[5] += 0.3103448275862069;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          result[0] += 0.03529411764705882;
          result[1] += 0.058823529411764705;
          result[2] += 0.6941176470588235;
          result[3] += 0.023529411764705882;
          result[4] += 0.011764705882352941;
          result[5] += 0.17647058823529413;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.2803030303030303;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.782608695652174;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004784688995215311;
          result[1] += 0;
          result[2] += 0.9712918660287081;
          result[3] += 0.023923444976076555;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
          result[0] += 0.008695652173913044;
          result[1] += 0.004347826086956522;
          result[2] += 0;
          result[3] += 0.004347826086956522;
          result[4] += 0.9608695652173913;
          result[5] += 0.021739130434782608;
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
          result[3] += 0.02145922746781116;
          result[4] += 0.02575107296137339;
          result[5] += 0.9527896995708155;
        } else {
          result[0] += 0.10925925925925926;
          result[1] += 0.024074074074074074;
          result[2] += 0.024074074074074074;
          result[3] += 0.3074074074074074;
          result[4] += 0.05740740740740741;
          result[5] += 0.4777777777777778;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96;
          result[5] += 0;
        } else {
          result[0] += 0.008403361344537815;
          result[1] += 0.9684873949579832;
          result[2] += 0;
          result[3] += 0.0063025210084033615;
          result[4] += 0.01680672268907563;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0.20522388059701493;
          result[1] += 0;
          result[2] += 0.05223880597014925;
          result[3] += 0.13805970149253732;
          result[4] += 0.3843283582089552;
          result[5] += 0.22014925373134328;
        } else {
          result[0] += 0.7410909090909091;
          result[1] += 0.04145454545454545;
          result[2] += 0.05018181818181818;
          result[3] += 0.06036363636363636;
          result[4] += 0.07054545454545455;
          result[5] += 0.03636363636363636;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0.7380952380952381;
          result[4] += 0.047619047619047616;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0.007936507936507936;
          result[1] += 0.031746031746031744;
          result[2] += 0.07142857142857142;
          result[3] += 0.2222222222222222;
          result[4] += 0.07142857142857142;
          result[5] += 0.5952380952380952;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9032258064516129;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666668;
          result[2] += 0.33333333333333337;
          result[3] += 0.5666666666666668;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          result[0] += 0.012500000000000002;
          result[1] += 0;
          result[2] += 0.6875000000000001;
          result[3] += 0.20000000000000004;
          result[4] += 0.06250000000000001;
          result[5] += 0.037500000000000006;
        } else {
          result[0] += 0.009122006841505131;
          result[1] += 0;
          result[2] += 0.9327251995438997;
          result[3] += 0.05017103762827822;
          result[4] += 0.002280501710376283;
          result[5] += 0.005701254275940707;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.014018691588785047;
          result[2] += 0;
          result[3] += 0.004672897196261682;
          result[4] += 0.9158878504672897;
          result[5] += 0.06542056074766354;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0522466039707419;
          result[1] += 0.0020898641588296763;
          result[2] += 0.0010449320794148381;
          result[3] += 0.03239289446185998;
          result[4] += 0.08254963427377221;
          result[5] += 0.8296760710553814;
        } else {
          result[0] += 0.08275862068965517;
          result[1] += 0.010344827586206896;
          result[2] += 0;
          result[3] += 0.4482758620689655;
          result[4] += 0.04482758620689655;
          result[5] += 0.41379310344827586;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.3584905660377358;
          result[2] += 0;
          result[3] += 0.018867924528301886;
          result[4] += 0.5471698113207547;
          result[5] += 0.07547169811320754;
        } else {
          result[0] += 0.002155172413793103;
          result[1] += 0.9698275862068964;
          result[2] += 0.002155172413793103;
          result[3] += 0;
          result[4] += 0.025862068965517234;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.8158526821457166;
          result[1] += 0.020016012810248198;
          result[2] += 0.0016012810248198558;
          result[3] += 0.02802241793434748;
          result[4] += 0.11689351481184948;
          result[5] += 0.017614091273018415;
        } else {
          result[0] += 0.30973451327433627;
          result[1] += 0.05014749262536873;
          result[2] += 0.16519174041297935;
          result[3] += 0.1887905604719764;
          result[4] += 0.07964601769911504;
          result[5] += 0.20648967551622419;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0.02197802197802198;
          result[1] += 0.0989010989010989;
          result[2] += 0;
          result[3] += 0.12087912087912088;
          result[4] += 0.13186813186813187;
          result[5] += 0.6263736263736264;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25925925925925924;
          result[3] += 0.4074074074074074;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          result[0] += 0.022988505747126436;
          result[1] += 0.022988505747126436;
          result[2] += 0.7701149425287356;
          result[3] += 0.13793103448275862;
          result[4] += 0;
          result[5] += 0.04597701149425287;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0625;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0.5377358490566038;
          result[3] += 0.4056603773584906;
          result[4] += 0;
          result[5] += 0.03773584905660377;
        } else {
          result[0] += 0.005376344086021506;
          result[1] += 0;
          result[2] += 0.8709677419354839;
          result[3] += 0.12365591397849462;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.006389776357827476;
          result[1] += 0;
          result[2] += 0.9680511182108626;
          result[3] += 0.022364217252396165;
          result[4] += 0;
          result[5] += 0.003194888178913738;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.014598540145985401;
          result[1] += 0.010948905109489052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9452554744525548;
          result[5] += 0.029197080291970802;
        } else {
          result[0] += 0.8131868131868132;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.03296703296703297;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02148997134670487;
          result[4] += 0.054441260744985676;
          result[5] += 0.9240687679083095;
        } else {
          result[0] += 0.012048192771084338;
          result[1] += 0;
          result[2] += 0.007228915662650603;
          result[3] += 0.20481927710843373;
          result[4] += 0.2216867469879518;
          result[5] += 0.5542168674698795;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.37681159420289856;
          result[2] += 0;
          result[3] += 0.10144927536231885;
          result[4] += 0.4782608695652174;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8172131147540984;
          result[1] += 0.045081967213114756;
          result[2] += 0.00819672131147541;
          result[3] += 0.04344262295081967;
          result[4] += 0.05737704918032787;
          result[5] += 0.028688524590163935;
        } else {
          result[0] += 0.15418502202643172;
          result[1] += 0.011013215859030838;
          result[2] += 0.1894273127753304;
          result[3] += 0.3722466960352423;
          result[4] += 0.039647577092511016;
          result[5] += 0.23348017621145375;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.019417475728155338;
          result[2] += 0.22330097087378642;
          result[3] += 0.5631067961165048;
          result[4] += 0.019417475728155338;
          result[5] += 0.17475728155339806;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.9285714285714286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4782608695652174;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0.43478260869565216;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18421052631578946;
          result[3] += 0.34210526315789475;
          result[4] += 0.07894736842105263;
          result[5] += 0.39473684210526316;
        } else {
          result[0] += 0.12048192771084337;
          result[1] += 0;
          result[2] += 0.6626506024096386;
          result[3] += 0.07228915662650602;
          result[4] += 0.10843373493975904;
          result[5] += 0.03614457831325301;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.002840909090909091;
          result[1] += 0;
          result[2] += 0.8295454545454546;
          result[3] += 0.1534090909090909;
          result[4] += 0;
          result[5] += 0.014204545454545454;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9766990291262136;
          result[3] += 0.02330097087378641;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  
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
