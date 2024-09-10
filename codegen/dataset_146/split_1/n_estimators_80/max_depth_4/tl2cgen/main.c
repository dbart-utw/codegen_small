
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00966183574879227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9855072463768116;
          result[5] += 0.004830917874396135;
        } else {
          result[0] += 0.29591836734693877;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2755102040816326;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.002008032128514056;
          result[1] += 0.008032128514056224;
          result[2] += 0;
          result[3] += 0.0642570281124498;
          result[4] += 0.07530120481927711;
          result[5] += 0.8504016064257028;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005434782608695652;
          result[3] += 0.7010869565217391;
          result[4] += 0;
          result[5] += 0.29347826086956524;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.00516795865633075;
          result[1] += 0.9844961240310077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0103359173126615;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7736720554272518;
          result[1] += 0.05080831408775982;
          result[2] += 0;
          result[3] += 0.021555042340261742;
          result[4] += 0.11855273287143958;
          result[5] += 0.03541185527328715;
        } else {
          result[0] += 0.13949275362318841;
          result[1] += 0.04710144927536232;
          result[2] += 0.2554347826086957;
          result[3] += 0.28804347826086957;
          result[4] += 0.06884057971014493;
          result[5] += 0.20108695652173914;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9615384615384616;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09302325581395349;
          result[3] += 0.5116279069767442;
          result[4] += 0;
          result[5] += 0.3953488372093023;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0273972602739726;
          result[1] += 0;
          result[2] += 0.5753424657534246;
          result[3] += 0.2876712328767123;
          result[4] += 0;
          result[5] += 0.1095890410958904;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
          result[0] += 0.11363636363636363;
          result[1] += 0;
          result[2] += 0.6136363636363636;
          result[3] += 0.045454545454545456;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.004672897196261683;
          result[1] += 0;
          result[2] += 0.8364485981308413;
          result[3] += 0.14485981308411217;
          result[4] += 0;
          result[5] += 0.014018691588785048;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9764359351988218;
          result[3] += 0.01914580265095729;
          result[4] += 0;
          result[5] += 0.004418262150220913;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)34) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0035714285714285713;
          result[1] += 0.02142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9428571428571428;
          result[5] += 0.03214285714285714;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.5984848484848485;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0.015151515151515152;
          result[4] += 0.23484848484848486;
          result[5] += 0.10606060606060606;
        } else {
          result[0] += 0.009450171821305841;
          result[1] += 0.005154639175257732;
          result[2] += 0.019759450171821305;
          result[3] += 0.11254295532646048;
          result[4] += 0.06357388316151202;
          result[5] += 0.7895189003436426;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.48936170212765956;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5106382978723404;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7767710049423394;
          result[1] += 0.032948929159802305;
          result[2] += 0.006589785831960461;
          result[3] += 0.03789126853377265;
          result[4] += 0.06919275123558484;
          result[5] += 0.07660626029654036;
        } else {
          result[0] += 0.11594202898550725;
          result[1] += 0.016563146997929608;
          result[2] += 0.18426501035196688;
          result[3] += 0.3995859213250518;
          result[4] += 0.049689440993788817;
          result[5] += 0.23395445134575568;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.057692307692307696;
          result[3] += 0.5576923076923077;
          result[4] += 0;
          result[5] += 0.38461538461538464;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.38461538461538464;
        } else {
          result[0] += 0.02976190476190476;
          result[1] += 0.02976190476190476;
          result[2] += 0.75;
          result[3] += 0.17261904761904762;
          result[4] += 0;
          result[5] += 0.017857142857142856;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.6000000000000001;
          result[2] += 0;
          result[3] += 0.30000000000000004;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0.2542372881355932;
          result[1] += 0;
          result[2] += 0.6949152542372882;
          result[3] += 0.01694915254237288;
          result[4] += 0;
          result[5] += 0.03389830508474576;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8592592592592593;
          result[3] += 0.1259259259259259;
          result[4] += 0;
          result[5] += 0.014814814814814815;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9667774086378738;
          result[3] += 0.03322259136212625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.015;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.985;
          result[5] += 0;
        } else {
          result[0] += 0.21621621621621623;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4594594594594595;
          result[5] += 0.32432432432432434;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          result[0] += 0.002421307506053269;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06174334140435835;
          result[4] += 0.04963680387409201;
          result[5] += 0.8861985472154964;
        } else {
          result[0] += 0.09473684210526316;
          result[1] += 0.018421052631578946;
          result[2] += 0.005263157894736842;
          result[3] += 0.3394736842105263;
          result[4] += 0.10789473684210527;
          result[5] += 0.4342105263157895;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.006535947712418301;
          result[1] += 0.9847494553376906;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008714596949891068;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0.20238095238095238;
          result[1] += 0.05476190476190476;
          result[2] += 0.047619047619047616;
          result[3] += 0.2357142857142857;
          result[4] += 0.1880952380952381;
          result[5] += 0.2714285714285714;
        } else {
          result[0] += 0.753922967189729;
          result[1] += 0.028530670470756064;
          result[2] += 0.06490727532097004;
          result[3] += 0.043509272467902996;
          result[4] += 0.07845934379457917;
          result[5] += 0.030670470756062766;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)118) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0.9444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16;
          result[3] += 0.72;
          result[4] += 0;
          result[5] += 0.12;
        } else {
          result[0] += 0.008403361344537815;
          result[1] += 0.04201680672268908;
          result[2] += 0.5714285714285714;
          result[3] += 0.2184873949579832;
          result[4] += 0.03361344537815126;
          result[5] += 0.12605042016806722;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7307692307692307;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.19230769230769232;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5757575757575758;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.00586166471277843;
          result[1] += 0;
          result[2] += 0.9472450175849942;
          result[3] += 0.04103165298944901;
          result[4] += 0;
          result[5] += 0.00586166471277843;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0.018292682926829267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9390243902439024;
          result[5] += 0.042682926829268296;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7314814814814815;
          result[5] += 0.26851851851851855;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          result[0] += 0.016;
          result[1] += 0.0026666666666666666;
          result[2] += 0.0013333333333333333;
          result[3] += 0.02;
          result[4] += 0.052;
          result[5] += 0.908;
        } else {
          result[0] += 0.052873563218390804;
          result[1] += 0.06436781609195402;
          result[2] += 0;
          result[3] += 0.37701149425287356;
          result[4] += 0.0367816091954023;
          result[5] += 0.4689655172413793;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.19285714285714287;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0.7357142857142858;
          result[5] += 0.02142857142857143;
        } else {
          result[0] += 0.007712082262210797;
          result[1] += 0.9588688946015425;
          result[2] += 0;
          result[3] += 0.002570694087403599;
          result[4] += 0.030848329048843187;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8262008733624454;
          result[1] += 0.023580786026200874;
          result[2] += 0.0017467248908296944;
          result[3] += 0.025327510917030567;
          result[4] += 0.07510917030567686;
          result[5] += 0.048034934497816595;
        } else {
          result[0] += 0.224;
          result[1] += 0.018666666666666668;
          result[2] += 0.152;
          result[3] += 0.32266666666666666;
          result[4] += 0.064;
          result[5] += 0.21866666666666668;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          result[0] += 0.012903225806451613;
          result[1] += 0;
          result[2] += 0.09032258064516129;
          result[3] += 0.2838709677419355;
          result[4] += 0.012903225806451613;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.1951219512195122;
          result[1] += 0;
          result[2] += 0.5203252032520326;
          result[3] += 0.12195121951219512;
          result[4] += 0.032520325203252036;
          result[5] += 0.13008130081300814;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46601941747572817;
          result[3] += 0.5145631067961165;
          result[4] += 0;
          result[5] += 0.019417475728155338;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.0051813471502590676;
          result[2] += 0.772020725388601;
          result[3] += 0.16580310880829016;
          result[4] += 0;
          result[5] += 0.05699481865284974;
        } else {
          result[0] += 0.0027855153203342623;
          result[1] += 0;
          result[2] += 0.9651810584958218;
          result[3] += 0.030640668523676882;
          result[4] += 0;
          result[5] += 0.0013927576601671311;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        } else {
          result[0] += 0.006644518272425249;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9634551495016611;
          result[5] += 0.029900332225913623;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.5714285714285715;
          result[2] += 0.14285714285714288;
          result[3] += 0.14285714285714288;
          result[4] += 0.14285714285714288;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.9772727272727273;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022727272727272728;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.008152173913043478;
          result[1] += 0.014492753623188406;
          result[2] += 0;
          result[3] += 0.0661231884057971;
          result[4] += 0.07608695652173914;
          result[5] += 0.8351449275362319;
        } else {
          result[0] += 0.002036659877800407;
          result[1] += 0;
          result[2] += 0.06720977596741344;
          result[3] += 0.5621181262729125;
          result[4] += 0.002036659877800407;
          result[5] += 0.3665987780040733;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96.5) ) ) {
          result[0] += 0.015873015873015872;
          result[1] += 0.40476190476190477;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5793650793650794;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9930875576036866;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0069124423963133645;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.9465116279069767;
          result[1] += 0.004651162790697674;
          result[2] += 0.0034883720930232558;
          result[3] += 0.010465116279069767;
          result[4] += 0.029069767441860465;
          result[5] += 0.005813953488372093;
        } else {
          result[0] += 0.36419753086419754;
          result[1] += 0.012345679012345678;
          result[2] += 0.2654320987654321;
          result[3] += 0.12962962962962962;
          result[4] += 0.1419753086419753;
          result[5] += 0.08641975308641975;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0824295010845987;
          result[1] += 0.006507592190889371;
          result[2] += 0.6442516268980477;
          result[3] += 0.2017353579175705;
          result[4] += 0.004338394793926247;
          result[5] += 0.06073752711496746;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9736842105263158;
          result[3] += 0.02631578947368421;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.043209876543209874;
          result[1] += 0.012345679012345678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9320987654320988;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4878048780487805;
          result[5] += 0.5121951219512195;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.011152416356877323;
          result[2] += 0.006195786864931847;
          result[3] += 0.03469640644361834;
          result[4] += 0.03841387856257745;
          result[5] += 0.909541511771995;
        } else {
          result[0] += 0;
          result[1] += 0.03690036900369004;
          result[2] += 0.05166051660516605;
          result[3] += 0.2767527675276753;
          result[4] += 0.1070110701107011;
          result[5] += 0.5276752767527675;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.3181818181818182;
          result[2] += 0;
          result[3] += 0.1590909090909091;
          result[4] += 0.5227272727272727;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9883720930232558;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011627906976744186;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.12546125461254612;
          result[1] += 0.15129151291512916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6863468634686347;
          result[5] += 0.03690036900369004;
        } else {
          result[0] += 0.6147492625368731;
          result[1] += 0.0035398230088495575;
          result[2] += 0.0607669616519174;
          result[3] += 0.14277286135693215;
          result[4] += 0.0471976401179941;
          result[5] += 0.13097345132743363;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.07142857142857142;
          result[4] += 0.023809523809523808;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13157894736842105;
          result[3] += 0.7894736842105263;
          result[4] += 0;
          result[5] += 0.07894736842105263;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0.06060606060606061;
          result[2] += 0.696969696969697;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.06896551724137931;
          result[2] += 0;
          result[3] += 0.6206896551724138;
          result[4] += 0;
          result[5] += 0.27586206896551724;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6428571428571429;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.0297029702970297;
          result[1] += 0;
          result[2] += 0.7425742574257426;
          result[3] += 0.18811881188118812;
          result[4] += 0;
          result[5] += 0.039603960396039604;
        } else {
          result[0] += 0.0012300123001230013;
          result[1] += 0;
          result[2] += 0.95079950799508;
          result[3] += 0.046740467404674045;
          result[4] += 0;
          result[5] += 0.0012300123001230013;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.010256410256410256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9846153846153847;
          result[5] += 0.005128205128205128;
        } else {
          result[0] += 0.06896551724137931;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3793103448275862;
          result[5] += 0.5517241379310345;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6153846153846154;
          result[5] += 0;
        } else {
          result[0] += 0.9074074074074074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07407407407407407;
          result[5] += 0.018518518518518517;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.033783783783783786;
          result[4] += 0.024324324324324326;
          result[5] += 0.9418918918918919;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0.20930232558139536;
          result[3] += 0;
          result[4] += 0.37209302325581395;
          result[5] += 0.3953488372093023;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.005;
          result[2] += 0;
          result[3] += 0.16;
          result[4] += 0.215;
          result[5] += 0.62;
        } else {
          result[0] += 0.018518518518518517;
          result[1] += 0;
          result[2] += 0.04814814814814815;
          result[3] += 0.6074074074074074;
          result[4] += 0.022222222222222223;
          result[5] += 0.3037037037037037;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          result[0] += 0.06802721088435375;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6054421768707483;
          result[5] += 0.04081632653061224;
        } else {
          result[0] += 0.7651195499296765;
          result[1] += 0.014767932489451477;
          result[2] += 0.026722925457102673;
          result[3] += 0.056962025316455694;
          result[4] += 0.0639943741209564;
          result[5] += 0.07243319268635724;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99) ) ) {
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
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.10989010989010989;
          result[3] += 0.5384615384615384;
          result[4] += 0.03296703296703297;
          result[5] += 0.2802197802197802;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.5757575757575758;
          result[3] += 0.30303030303030304;
          result[4] += 0.06060606060606061;
          result[5] += 0.030303030303030304;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.536;
          result[3] += 0.208;
          result[4] += 0;
          result[5] += 0.216;
        } else {
          result[0] += 0.016317016317016316;
          result[1] += 0.0011655011655011655;
          result[2] += 0.9254079254079254;
          result[3] += 0.05011655011655012;
          result[4] += 0.002331002331002331;
          result[5] += 0.004662004662004662;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          result[0] += 0.007042253521126761;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9295774647887324;
          result[5] += 0.06338028169014084;
        } else {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.018072289156626505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04216867469879518;
          result[4] += 0.08333333333333333;
          result[5] += 0.856425702811245;
        } else {
          result[0] += 0.08695652173913043;
          result[1] += 0.006688963210702341;
          result[2] += 0;
          result[3] += 0.4013377926421405;
          result[4] += 0.07692307692307693;
          result[5] += 0.4280936454849498;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.05714285714285714;
          result[1] += 0.22857142857142856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9886363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011363636363636364;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8465655664585192;
          result[1] += 0.03389830508474576;
          result[2] += 0.0044603033006244425;
          result[3] += 0.025869759143621766;
          result[4] += 0.06244424620874219;
          result[5] += 0.026761819803746655;
        } else {
          result[0] += 0.15444015444015444;
          result[1] += 0.015444015444015444;
          result[2] += 0.1274131274131274;
          result[3] += 0.2625482625482625;
          result[4] += 0.13127413127413126;
          result[5] += 0.3088803088803089;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0.21875;
          result[2] += 0.28125;
          result[3] += 0.25;
          result[4] += 0.15625;
          result[5] += 0.09375;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.010869565217391304;
          result[2] += 0.09782608695652174;
          result[3] += 0.08695652173913043;
          result[4] += 0.03260869565217391;
          result[5] += 0.7065217391304348;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19594594594594594;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.049180327868852465;
          result[1] += 0;
          result[2] += 0.6885245901639345;
          result[3] += 0.1639344262295082;
          result[4] += 0;
          result[5] += 0.09836065573770493;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.88;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.10909090909090909;
          result[1] += 0;
          result[2] += 0.6818181818181818;
          result[3] += 0.12727272727272726;
          result[4] += 0;
          result[5] += 0.08181818181818182;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0.004629629629629629;
          result[1] += 0.023148148148148147;
          result[2] += 0.7916666666666666;
          result[3] += 0.13425925925925927;
          result[4] += 0;
          result[5] += 0.046296296296296294;
        } else {
          result[0] += 0.006024096385542169;
          result[1] += 0.0015060240963855422;
          result[2] += 0.9578313253012049;
          result[3] += 0.03162650602409638;
          result[4] += 0;
          result[5] += 0.0030120481927710845;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0.007518796992481203;
          result[1] += 0.011278195488721804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8045112781954887;
          result[5] += 0.17669172932330826;
        } else {
          result[0] += 0.4866666666666667;
          result[1] += 0.006666666666666667;
          result[2] += 0;
          result[3] += 0.02;
          result[4] += 0.4866666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03804347826086957;
          result[4] += 0.03940217391304348;
          result[5] += 0.9225543478260869;
        } else {
          result[0] += 0.019157088122605363;
          result[1] += 0.022988505747126436;
          result[2] += 0;
          result[3] += 0.19540229885057472;
          result[4] += 0.20306513409961685;
          result[5] += 0.5593869731800766;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7801302931596091;
          result[1] += 0.02687296416938111;
          result[2] += 0.013843648208469055;
          result[3] += 0.048859934853420196;
          result[4] += 0.09283387622149837;
          result[5] += 0.03745928338762215;
        } else {
          result[0] += 0.0994671403197158;
          result[1] += 0.010657193605683837;
          result[2] += 0.2024866785079929;
          result[3] += 0.3978685612788632;
          result[4] += 0.056838365896980464;
          result[5] += 0.23268206039076378;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0.43478260869565216;
          result[3] += 0.391304347826087;
          result[4] += 0;
          result[5] += 0.13043478260869565;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.06153846153846154;
          result[2] += 0.3384615384615385;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.13846153846153847;
        } else {
          result[0] += 0.014492753623188408;
          result[1] += 0;
          result[2] += 0.8985507246376813;
          result[3] += 0.07246376811594205;
          result[4] += 0.014492753623188408;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.01968503937007874;
          result[1] += 0;
          result[2] += 0.8740157480314961;
          result[3] += 0.1062992125984252;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016025641025641025;
          result[1] += 0;
          result[2] += 0.9743589743589743;
          result[3] += 0.02403846153846154;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
          result[0] += 0.00749063670411985;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9812734082397003;
          result[5] += 0.011235955056179775;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.07142857142857142;
          result[4] += 0.5;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05091937765205092;
          result[4] += 0.04101838755304102;
          result[5] += 0.9080622347949081;
        } else {
          result[0] += 0.11004784688995216;
          result[1] += 0.009569377990430622;
          result[2] += 0;
          result[3] += 0.32854864433811803;
          result[4] += 0.08452950558213716;
          result[5] += 0.46730462519936206;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9862068965517241;
          result[2] += 0;
          result[3] += 0.0022988505747126436;
          result[4] += 0.011494252873563218;
          result[5] += 0;
        } else {
          result[0] += 0.01834862385321101;
          result[1] += 0.3486238532110092;
          result[2] += 0.01834862385321101;
          result[3] += 0.009174311926605505;
          result[4] += 0.6055045871559633;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0.49228611500701264;
          result[1] += 0.02244039270687237;
          result[2] += 0.09396914446002805;
          result[3] += 0.17251051893408134;
          result[4] += 0.07012622720897616;
          result[5] += 0.14866760168302945;
        } else {
          result[0] += 0.8364312267657993;
          result[1] += 0.05328376703841388;
          result[2] += 0.04956629491945477;
          result[3] += 0.004956629491945477;
          result[4] += 0.05204460966542751;
          result[5] += 0.0037174721189591076;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0851063829787234;
          result[2] += 0.06382978723404255;
          result[3] += 0.10638297872340426;
          result[4] += 0.06382978723404255;
          result[5] += 0.6808510638297872;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1320754716981132;
          result[3] += 0.7547169811320755;
          result[4] += 0;
          result[5] += 0.11320754716981132;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0410958904109589;
          result[1] += 0;
          result[2] += 0.5753424657534246;
          result[3] += 0.2602739726027397;
          result[4] += 0.0136986301369863;
          result[5] += 0.1095890410958904;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          result[0] += 0.00806451612903226;
          result[1] += 0;
          result[2] += 0.8024193548387097;
          result[3] += 0.16935483870967744;
          result[4] += 0;
          result[5] += 0.020161290322580648;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.35294117647058826;
          result[1] += 0;
          result[2] += 0.47058823529411764;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9664723032069971;
          result[3] += 0.027696793002915453;
          result[4] += 0;
          result[5] += 0.0058309037900874635;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 0.92;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0.018587360594795543;
          result[1] += 0.003717472118959108;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9219330855018588;
          result[5] += 0.05576208178438662;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.36585365853658536;
          result[5] += 0.6341463414634146;
        } else {
          result[0] += 0.8859060402684564;
          result[1] += 0.013422818791946308;
          result[2] += 0;
          result[3] += 0.013422818791946308;
          result[4] += 0.04697986577181208;
          result[5] += 0.040268456375838924;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0011013215859030838;
          result[2] += 0.0011013215859030838;
          result[3] += 0.02643171806167401;
          result[4] += 0.06828193832599119;
          result[5] += 0.9030837004405287;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          result[0] += 0.059907834101382486;
          result[1] += 0.009216589861751152;
          result[2] += 0.059907834101382486;
          result[3] += 0.17050691244239632;
          result[4] += 0.11059907834101383;
          result[5] += 0.5898617511520737;
        } else {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.010752688172043012;
          result[3] += 0.6451612903225806;
          result[4] += 0;
          result[5] += 0.3118279569892473;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0.9975308641975309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024691358024691358;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3815789473684211;
          result[2] += 0.09210526315789473;
          result[3] += 0.013157894736842105;
          result[4] += 0.5131578947368421;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8263950398582818;
          result[1] += 0.03542958370239151;
          result[2] += 0;
          result[3] += 0.028343666961913202;
          result[4] += 0.06731620903454386;
          result[5] += 0.0425155004428698;
        } else {
          result[0] += 0.12429378531073447;
          result[1] += 0.01694915254237288;
          result[2] += 0.18926553672316385;
          result[3] += 0.3898305084745763;
          result[4] += 0.03954802259887006;
          result[5] += 0.2401129943502825;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.014084507042253521;
          result[2] += 0.056338028169014086;
          result[3] += 0.7746478873239436;
          result[4] += 0;
          result[5] += 0.15492957746478872;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3823529411764706;
          result[3] += 0.2058823529411765;
          result[4] += 0;
          result[5] += 0.411764705882353;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0.11702127659574468;
          result[1] += 0.031914893617021274;
          result[2] += 0.4148936170212766;
          result[3] += 0.30851063829787234;
          result[4] += 0.0425531914893617;
          result[5] += 0.0851063829787234;
        } else {
          result[0] += 0.03415154749199573;
          result[1] += 0;
          result[2] += 0.8932764140875133;
          result[3] += 0.06510138740661686;
          result[4] += 0;
          result[5] += 0.007470651013874066;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9473684210526315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0;
          result[1] += 0.016597510373443983;
          result[2] += 0;
          result[3] += 0.004149377593360996;
          result[4] += 0.9253112033195021;
          result[5] += 0.05394190871369295;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04375569735642662;
          result[1] += 0.0018231540565177757;
          result[2] += 0.0009115770282588879;
          result[3] += 0.06472196900638104;
          result[4] += 0.0820419325432999;
          result[5] += 0.8067456700091158;
        } else {
          result[0] += 0.008888888888888889;
          result[1] += 0;
          result[2] += 0.02666666666666667;
          result[3] += 0.7377777777777778;
          result[4] += 0.0044444444444444444;
          result[5] += 0.2222222222222222;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.12;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.88;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9758771929824561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02412280701754386;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8318367346938776;
          result[1] += 0.02285714285714286;
          result[2] += 0.01469387755102041;
          result[3] += 0.025306122448979597;
          result[4] += 0.07836734693877552;
          result[5] += 0.026938775510204085;
        } else {
          result[0] += 0.1351981351981352;
          result[1] += 0.018648018648018648;
          result[2] += 0.2540792540792541;
          result[3] += 0.29836829836829837;
          result[4] += 0.06526806526806526;
          result[5] += 0.22843822843822845;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0.06451612903225806;
          result[4] += 0;
          result[5] += 0.8387096774193549;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.05555555555555555;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5340909090909091;
          result[3] += 0.38636363636363635;
          result[4] += 0;
          result[5] += 0.07954545454545454;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.8461538461538461;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4666666666666667;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.23076923076923078;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.0022197558268590455;
          result[1] += 0;
          result[2] += 0.9378468368479467;
          result[3] += 0.05216426193118757;
          result[4] += 0.0022197558268590455;
          result[5] += 0.005549389567147614;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
          result[0] += 0.006472491909385114;
          result[1] += 0.03559870550161812;
          result[2] += 0;
          result[3] += 0.022653721682847898;
          result[4] += 0.8802588996763754;
          result[5] += 0.05501618122977346;
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
          result[3] += 0.03590425531914894;
          result[4] += 0.0425531914893617;
          result[5] += 0.9215425531914894;
        } else {
          result[0] += 0.1407528641571195;
          result[1] += 0.009819967266775777;
          result[2] += 0.022913256955810146;
          result[3] += 0.36006546644844517;
          result[4] += 0.0851063829787234;
          result[5] += 0.381342062193126;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9801324503311258;
          result[2] += 0;
          result[3] += 0.004415011037527594;
          result[4] += 0.013245033112582781;
          result[5] += 0.002207505518763797;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8164915117219079;
          result[1] += 0.029911075181891678;
          result[2] += 0.006467259498787389;
          result[3] += 0.025060630557801136;
          result[4] += 0.10751818916734035;
          result[5] += 0.014551333872271626;
        } else {
          result[0] += 0.165374677002584;
          result[1] += 0.041343669250646;
          result[2] += 0.1834625322997416;
          result[3] += 0.19638242894056848;
          result[4] += 0.046511627906976744;
          result[5] += 0.3669250645994832;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09433962264150944;
          result[3] += 0.6981132075471698;
          result[4] += 0;
          result[5] += 0.20754716981132076;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5135135135135135;
          result[3] += 0.2702702702702703;
          result[4] += 0;
          result[5] += 0.21621621621621623;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8260869565217391;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.04347826086956522;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.1739130434782609;
          result[4] += 0;
          result[5] += 0.11594202898550726;
        } else {
          result[0] += 0.005995203836930456;
          result[1] += 0;
          result[2] += 0.9412470023980816;
          result[3] += 0.047961630695443645;
          result[4] += 0;
          result[5] += 0.004796163069544364;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.009708737864077669;
          result[1] += 0.0048543689320388345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9757281553398058;
          result[5] += 0.009708737864077669;
        } else {
          result[0] += 0.28654970760233917;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0935672514619883;
          result[4] += 0.38596491228070173;
          result[5] += 0.23391812865497075;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.014577259475218658;
          result[2] += 0.0014577259475218659;
          result[3] += 0.04518950437317784;
          result[4] += 0.02040816326530612;
          result[5] += 0.9183673469387755;
        } else {
          result[0] += 0;
          result[1] += 0.004246284501061571;
          result[2] += 0;
          result[3] += 0.3184713375796178;
          result[4] += 0.12314225053078556;
          result[5] += 0.554140127388535;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6153846153846154;
          result[5] += 0;
        } else {
          result[0] += 0.00425531914893617;
          result[1] += 0.9851063829787234;
          result[2] += 0;
          result[3] += 0.00425531914893617;
          result[4] += 0.006382978723404255;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7919876733436055;
          result[1] += 0.0423728813559322;
          result[2] += 0.011556240369799691;
          result[3] += 0.01848998459167951;
          result[4] += 0.1147919876733436;
          result[5] += 0.020801232665639446;
        } else {
          result[0] += 0.201530612244898;
          result[1] += 0.05867346938775511;
          result[2] += 0.19642857142857145;
          result[3] += 0.2984693877551021;
          result[4] += 0.028061224489795922;
          result[5] += 0.21683673469387757;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.7307692307692307;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0.010416666666666666;
          result[1] += 0;
          result[2] += 0.6770833333333334;
          result[3] += 0.2916666666666667;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.0036014405762304926;
          result[1] += 0;
          result[2] += 0.9543817527010805;
          result[3] += 0.03721488595438176;
          result[4] += 0;
          result[5] += 0.0048019207683073235;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.985663082437276;
          result[5] += 0.014336917562724014;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6190476190476191;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03282051282051282;
          result[1] += 0.0010256410256410256;
          result[2] += 0;
          result[3] += 0.05128205128205128;
          result[4] += 0.05128205128205128;
          result[5] += 0.8635897435897436;
        } else {
          result[0] += 0.07868020304568528;
          result[1] += 0.01015228426395939;
          result[2] += 0.012690355329949238;
          result[3] += 0.4593908629441624;
          result[4] += 0.0583756345177665;
          result[5] += 0.38071065989847713;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.27;
          result[2] += 0.06;
          result[3] += 0.02;
          result[4] += 0.63;
          result[5] += 0.02;
        } else {
          result[0] += 0;
          result[1] += 0.9865771812080537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013422818791946308;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8493273542600897;
          result[1] += 0.03139013452914798;
          result[2] += 0.003587443946188341;
          result[3] += 0.011659192825112108;
          result[4] += 0.09596412556053811;
          result[5] += 0.008071748878923767;
        } else {
          result[0] += 0.1527777777777778;
          result[1] += 0.009259259259259259;
          result[2] += 0.3333333333333333;
          result[3] += 0.30092592592592593;
          result[4] += 0.032407407407407406;
          result[5] += 0.1712962962962963;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.0625;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04878048780487805;
          result[3] += 0.6341463414634146;
          result[4] += 0;
          result[5] += 0.3170731707317073;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0.7777777777777778;
        } else {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
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
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7314285714285714;
          result[3] += 0.22285714285714286;
          result[4] += 0;
          result[5] += 0.045714285714285714;
        } else {
          result[0] += 0.015564202334630352;
          result[1] += 0;
          result[2] += 0.9442282749675747;
          result[3] += 0.04020752269779508;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.008583690987124465;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9871244635193134;
          result[5] += 0.004291845493562233;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6607142857142857;
          result[5] += 0.3392857142857143;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06015037593984962;
          result[1] += 0.022556390977443608;
          result[2] += 0;
          result[3] += 0.05827067669172932;
          result[4] += 0.05921052631578947;
          result[5] += 0.799812030075188;
        } else {
          result[0] += 0.011406844106463879;
          result[1] += 0;
          result[2] += 0.026615969581749048;
          result[3] += 0.6083650190114068;
          result[4] += 0.0038022813688212928;
          result[5] += 0.34980988593155893;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.19047619047619047;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8095238095238095;
          result[5] += 0;
        } else {
          result[0] += 0.002178649237472767;
          result[1] += 0.9891067538126361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008714596949891068;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7954735959765298;
          result[1] += 0.03520536462699078;
          result[2] += 0.002514668901927913;
          result[3] += 0.025984911986588432;
          result[4] += 0.12573344509639564;
          result[5] += 0.015088013411567477;
        } else {
          result[0] += 0.14565217391304347;
          result[1] += 0.013043478260869565;
          result[2] += 0.17391304347826086;
          result[3] += 0.23043478260869565;
          result[4] += 0.10434782608695652;
          result[5] += 0.33260869565217394;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.2;
          result[4] += 0.05;
          result[5] += 0.45;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06382978723404256;
          result[3] += 0.8085106382978724;
          result[4] += 0;
          result[5] += 0.12765957446808512;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0.09523809523809523;
          result[1] += 0;
          result[2] += 0.19047619047619047;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.1346153846153846;
          result[4] += 0;
          result[5] += 0.019230769230769232;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.005668934240362811;
          result[1] += 0;
          result[2] += 0.9489795918367345;
          result[3] += 0.03401360544217687;
          result[4] += 0;
          result[5] += 0.011337868480725622;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
          result[0] += 0.007168458781362007;
          result[1] += 0;
          result[2] += 0.007168458781362007;
          result[3] += 0;
          result[4] += 0.9068100358422939;
          result[5] += 0.07885304659498207;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          result[0] += 0.001447178002894356;
          result[1] += 0.015918958031837915;
          result[2] += 0;
          result[3] += 0.027496382054992764;
          result[4] += 0.024602026049204053;
          result[5] += 0.9305354558610709;
        } else {
          result[0] += 0.1085814360770578;
          result[1] += 0.012259194395796848;
          result[2] += 0.0035026269702276708;
          result[3] += 0.29071803852889666;
          result[4] += 0.1295971978984238;
          result[5] += 0.4553415061295972;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0.65625;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3125;
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
          result[0] += 0.7449768160741886;
          result[1] += 0.07341576506955179;
          result[2] += 0.007727975270479135;
          result[3] += 0.027047913446676973;
          result[4] += 0.1197836166924266;
          result[5] += 0.027047913446676973;
        } else {
          result[0] += 0.13605442176870752;
          result[1] += 0.0090702947845805;
          result[2] += 0.27891156462585037;
          result[3] += 0.20634920634920637;
          result[4] += 0.08390022675736963;
          result[5] += 0.28571428571428575;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.14035087719298248;
          result[2] += 0.15789473684210528;
          result[3] += 0.1754385964912281;
          result[4] += 0.14035087719298248;
          result[5] += 0.3859649122807018;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.7804878048780488;
          result[3] += 0.17073170731707318;
          result[4] += 0;
          result[5] += 0.024390243902439025;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.925;
          result[1] += 0;
          result[2] += 0.075;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0.00980392156862745;
          result[2] += 0.4215686274509804;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0.14705882352941177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8948598130841122;
          result[3] += 0.08878504672897197;
          result[4] += 0;
          result[5] += 0.01635514018691589;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9881516587677726;
          result[3] += 0.011848341232227487;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.008658008658008658;
          result[1] += 0.05627705627705628;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9177489177489178;
          result[5] += 0.017316017316017316;
        } else {
          result[0] += 0.6101694915254239;
          result[1] += 0.050847457627118654;
          result[2] += 0.016949152542372885;
          result[3] += 0;
          result[4] += 0.18644067796610173;
          result[5] += 0.13559322033898308;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019230769230769232;
          result[4] += 0.042582417582417584;
          result[5] += 0.9381868131868132;
        } else {
          result[0] += 0.006726457399103139;
          result[1] += 0.008968609865470852;
          result[2] += 0.011210762331838564;
          result[3] += 0.3721973094170404;
          result[4] += 0.16367713004484305;
          result[5] += 0.437219730941704;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
        } else {
          result[0] += 0.0043859649122807015;
          result[1] += 0.9956140350877193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          result[0] += 0.457286432160804;
          result[1] += 0.054271356783919596;
          result[2] += 0.011055276381909548;
          result[3] += 0.11055276381909548;
          result[4] += 0.18894472361809045;
          result[5] += 0.17788944723618091;
        } else {
          result[0] += 0.9553719008264463;
          result[1] += 0.001652892561983471;
          result[2] += 0.021487603305785124;
          result[3] += 0.0049586776859504135;
          result[4] += 0.01652892561983471;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0.015873015873015872;
          result[1] += 0;
          result[2] += 0.07936507936507936;
          result[3] += 0.31746031746031744;
          result[4] += 0;
          result[5] += 0.5873015873015873;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12149532710280374;
          result[3] += 0.794392523364486;
          result[4] += 0;
          result[5] += 0.08411214953271028;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0.023809523809523808;
          result[2] += 0.8095238095238095;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119) ) ) {
          result[0] += 0.0033003300330033004;
          result[1] += 0;
          result[2] += 0.7095709570957096;
          result[3] += 0.19141914191419143;
          result[4] += 0.013201320132013201;
          result[5] += 0.08250825082508251;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.4166666666666667;
        } else {
          result[0] += 0.008053691275167786;
          result[1] += 0;
          result[2] += 0.9664429530201343;
          result[3] += 0.024161073825503355;
          result[4] += 0;
          result[5] += 0.0013422818791946308;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00949367088607595;
          result[1] += 0.03164556962025317;
          result[2] += 0;
          result[3] += 0.0031645569620253164;
          result[4] += 0.9367088607594937;
          result[5] += 0.0189873417721519;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5161290322580645;
          result[5] += 0.43548387096774194;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          result[0] += 0.990990990990991;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.009009009009009009;
        } else {
          result[0] += 0.015517241379310345;
          result[1] += 0.0034482758620689655;
          result[2] += 0;
          result[3] += 0.09827586206896552;
          result[4] += 0.10172413793103448;
          result[5] += 0.7810344827586206;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7551020408163266;
          result[1] += 0.08758503401360546;
          result[2] += 0.012755102040816329;
          result[3] += 0.032312925170068035;
          result[4] += 0.0816326530612245;
          result[5] += 0.030612244897959186;
        } else {
          result[0] += 0.11007462686567165;
          result[1] += 0.01492537313432836;
          result[2] += 0.20149253731343286;
          result[3] += 0.3843283582089553;
          result[4] += 0.04104477611940299;
          result[5] += 0.24813432835820898;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.004819277108433735;
          result[1] += 0.9951807228915662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0.07894736842105263;
          result[4] += 0;
          result[5] += 0.8947368421052632;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45251396648044695;
          result[3] += 0.41899441340782123;
          result[4] += 0;
          result[5] += 0.12849162011173185;
        } else {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.07272727272727272;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90.5) ) ) {
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
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8492063492063492;
          result[3] += 0.11904761904761904;
          result[4] += 0;
          result[5] += 0.031746031746031744;
        } else {
          result[0] += 0.0015847860538827261;
          result[1] += 0;
          result[2] += 0.9667194928684628;
          result[3] += 0.031695721077654525;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9558011049723757;
          result[5] += 0.04419889502762431;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025956284153005466;
          result[4] += 0.03961748633879782;
          result[5] += 0.9344262295081968;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
          result[0] += 0.3235294117647059;
          result[1] += 0.01680672268907563;
          result[2] += 0;
          result[3] += 0.037815126050420166;
          result[4] += 0.5756302521008403;
          result[5] += 0.046218487394957986;
        } else {
          result[0] += 0.0056179775280898875;
          result[1] += 0.018726591760299626;
          result[2] += 0.03932584269662921;
          result[3] += 0.4550561797752809;
          result[4] += 0.03745318352059925;
          result[5] += 0.4438202247191011;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7665399239543726;
          result[1] += 0.0699619771863118;
          result[2] += 0.011406844106463879;
          result[3] += 0.012927756653992395;
          result[4] += 0.13079847908745248;
          result[5] += 0.008365019011406844;
        } else {
          result[0] += 0.1771117166212534;
          result[1] += 0.005449591280653951;
          result[2] += 0.22070844686648503;
          result[3] += 0.23160762942779292;
          result[4] += 0.06267029972752043;
          result[5] += 0.3024523160762943;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.9975961538461539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002403846153846154;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0.07692307692307693;
          result[5] += 0.7692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46218487394957986;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0.12605042016806722;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7377049180327869;
          result[3] += 0.21311475409836064;
          result[4] += 0;
          result[5] += 0.04918032786885246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9649122807017544;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03508771929824561;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010403120936280884;
          result[1] += 0;
          result[2] += 0.9544863459037711;
          result[3] += 0.031209362808842653;
          result[4] += 0;
          result[5] += 0.0039011703511053317;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.013953488372093025;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.972093023255814;
          result[5] += 0.013953488372093025;
        } else {
          result[0] += 0.49612403100775193;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2558139534883721;
          result[5] += 0.24806201550387597;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.005820721769499418;
          result[2] += 0;
          result[3] += 0.048894062863795114;
          result[4] += 0.04307334109429569;
          result[5] += 0.9022118742724098;
        } else {
          result[0] += 0;
          result[1] += 0.016172506738544475;
          result[2] += 0.005390835579514825;
          result[3] += 0.49056603773584906;
          result[4] += 0.05929919137466307;
          result[5] += 0.42857142857142855;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.11864406779661017;
          result[1] += 0.559322033898305;
          result[2] += 0.05084745762711865;
          result[3] += 0.03389830508474576;
          result[4] += 0.23728813559322035;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7969745222929936;
          result[1] += 0.04936305732484077;
          result[2] += 0;
          result[3] += 0.030254777070063694;
          result[4] += 0.10429936305732485;
          result[5] += 0.01910828025477707;
        } else {
          result[0] += 0.176056338028169;
          result[1] += 0.007042253521126761;
          result[2] += 0.24647887323943662;
          result[3] += 0.2323943661971831;
          result[4] += 0.10915492957746478;
          result[5] += 0.22887323943661972;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02631578947368421;
          result[3] += 0.2631578947368421;
          result[4] += 0;
          result[5] += 0.7105263157894737;
        } else {
          result[0] += 0;
          result[1] += 0.02531645569620253;
          result[2] += 0.21518987341772153;
          result[3] += 0.5443037974683544;
          result[4] += 0;
          result[5] += 0.21518987341772153;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21212121212121213;
          result[3] += 0.48484848484848486;
          result[4] += 0;
          result[5] += 0.30303030303030304;
        } else {
          result[0] += 0.009523809523809526;
          result[1] += 0;
          result[2] += 0.6380952380952382;
          result[3] += 0.33333333333333337;
          result[4] += 0;
          result[5] += 0.019047619047619053;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.5217391304347826;
          result[1] += 0.043478260869565216;
          result[2] += 0.34782608695652173;
          result[3] += 0;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        } else {
          result[0] += 0.01630434782608696;
          result[1] += 0.0021739130434782613;
          result[2] += 0.9206521739130435;
          result[3] += 0.04782608695652175;
          result[4] += 0.0010869565217391307;
          result[5] += 0.011956521739130437;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.004484304932735426;
          result[1] += 0.004484304932735426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9865470852017937;
          result[5] += 0.004484304932735426;
        } else {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0.02;
          result[4] += 0.7;
          result[5] += 0.24;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.048574445617740235;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03695881731784583;
          result[4] += 0.0559662090813094;
          result[5] += 0.8585005279831045;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003367003367003367;
          result[3] += 0.5117845117845118;
          result[4] += 0.010101010101010102;
          result[5] += 0.47474747474747475;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)50.5) ) ) {
          result[0] += 0.002304147465437788;
          result[1] += 0.9792626728110599;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018433179723502304;
          result[5] += 0;
        } else {
          result[0] += 0.03351955307262569;
          result[1] += 0.3519553072625698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5810055865921787;
          result[5] += 0.03351955307262569;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8523890784982936;
          result[1] += 0.009385665529010241;
          result[2] += 0.0008532423208191127;
          result[3] += 0.019624573378839594;
          result[4] += 0.09300341296928329;
          result[5] += 0.02474402730375427;
        } else {
          result[0] += 0.1674418604651163;
          result[1] += 0.00930232558139535;
          result[2] += 0.27441860465116286;
          result[3] += 0.3418604651162791;
          result[4] += 0.020930232558139538;
          result[5] += 0.186046511627907;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024390243902439025;
          result[3] += 0.0975609756097561;
          result[4] += 0.07317073170731707;
          result[5] += 0.8048780487804879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2903225806451613;
          result[3] += 0.6129032258064516;
          result[4] += 0.016129032258064516;
          result[5] += 0.08064516129032258;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.6875;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.125;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0.07692307692307693;
          result[3] += 0.38461538461538464;
          result[4] += 0.15384615384615385;
          result[5] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.0072992700729927005;
          result[1] += 0;
          result[2] += 0.7737226277372263;
          result[3] += 0.20437956204379562;
          result[4] += 0;
          result[5] += 0.014598540145985401;
        } else {
          result[0] += 0.01675257731958763;
          result[1] += 0;
          result[2] += 0.9445876288659794;
          result[3] += 0.03221649484536082;
          result[4] += 0;
          result[5] += 0.006443298969072165;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.026785714285714284;
          result[1] += 0.05357142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8973214285714286;
          result[5] += 0.022321428571428572;
        } else {
          result[0] += 0.49710982658959535;
          result[1] += 0.07514450867052024;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2774566473988439;
          result[5] += 0.15028901734104047;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05200433369447454;
          result[4] += 0.06067172264355363;
          result[5] += 0.8873239436619719;
        } else {
          result[0] += 0.016042780748663103;
          result[1] += 0.0213903743315508;
          result[2] += 0.0213903743315508;
          result[3] += 0.5427807486631016;
          result[4] += 0.09358288770053476;
          result[5] += 0.3048128342245989;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8125;
          result[5] += 0;
        } else {
          result[0] += 0.004273504273504275;
          result[1] += 0.9722222222222223;
          result[2] += 0;
          result[3] += 0.012820512820512822;
          result[4] += 0.006410256410256411;
          result[5] += 0.004273504273504275;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.8115555555555556;
          result[1] += 0.035555555555555556;
          result[2] += 0.005333333333333333;
          result[3] += 0.016;
          result[4] += 0.11555555555555555;
          result[5] += 0.016;
        } else {
          result[0] += 0.23542600896860988;
          result[1] += 0.02242152466367713;
          result[2] += 0.257847533632287;
          result[3] += 0.16367713004484305;
          result[4] += 0.04932735426008968;
          result[5] += 0.2713004484304933;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68) ) ) {
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
          result[3] += 0.25;
          result[4] += 0.5;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.06410256410256411;
          result[2] += 0.20512820512820515;
          result[3] += 0.6282051282051283;
          result[4] += 0;
          result[5] += 0.10256410256410257;
        } else {
          result[0] += 0;
          result[1] += 0.075;
          result[2] += 0.575;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0.2413793103448276;
          result[3] += 0.3793103448275862;
          result[4] += 0.06896551724137931;
          result[5] += 0.27586206896551724;
        } else {
          result[0] += 0.15625;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02145922746781116;
          result[1] += 0;
          result[2] += 0.8111587982832618;
          result[3] += 0.1459227467811159;
          result[4] += 0;
          result[5] += 0.02145922746781116;
        } else {
          result[0] += 0.0015479876160990713;
          result[1] += 0;
          result[2] += 0.9674922600619195;
          result[3] += 0.030959752321981424;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)46) ) ) {
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
          result[4] += 0.978448275862069;
          result[5] += 0.021551724137931036;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.07692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0.6923076923076923;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.5645161290322581;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41935483870967744;
          result[5] += 0.016129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0.0031678986272439284;
          result[2] += 0;
          result[3] += 0.050686378035902854;
          result[4] += 0.048574445617740235;
          result[5] += 0.8975712777191129;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0.11787072243346007;
          result[1] += 0.030418250950570342;
          result[2] += 0.011406844106463879;
          result[3] += 0.20532319391634982;
          result[4] += 0.07224334600760456;
          result[5] += 0.5627376425855514;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0;
          result[2] += 0.005434782608695652;
          result[3] += 0.7717391304347826;
          result[4] += 0.005434782608695652;
          result[5] += 0.20652173913043478;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
          result[0] += 0.01652892561983471;
          result[1] += 0.34710743801652894;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6363636363636364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9922680412371134;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007731958762886598;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
          result[0] += 0.3291139240506329;
          result[1] += 0.04430379746835443;
          result[2] += 0.13291139240506328;
          result[3] += 0.13924050632911392;
          result[4] += 0.06329113924050633;
          result[5] += 0.2911392405063291;
        } else {
          result[0] += 0.8393305439330544;
          result[1] += 0.03598326359832636;
          result[2] += 0.0301255230125523;
          result[3] += 0.028451882845188285;
          result[4] += 0.05355648535564853;
          result[5] += 0.012552301255230125;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.020618556701030927;
          result[1] += 0.010309278350515464;
          result[2] += 0.17525773195876287;
          result[3] += 0.4020618556701031;
          result[4] += 0.11855670103092783;
          result[5] += 0.27319587628865977;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7469879518072289;
          result[3] += 0.18072289156626506;
          result[4] += 0;
          result[5] += 0.07228915662650602;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.08411214953271028;
          result[1] += 0;
          result[2] += 0.5981308411214953;
          result[3] += 0.12149532710280374;
          result[4] += 0.028037383177570093;
          result[5] += 0.16822429906542055;
        } else {
          result[0] += 0.001148105625717566;
          result[1] += 0;
          result[2] += 0.9357060849598163;
          result[3] += 0.0574052812858783;
          result[4] += 0;
          result[5] += 0.0057405281285878304;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.008928571428571428;
          result[1] += 0.013392857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9776785714285714;
          result[5] += 0;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0.07317073170731707;
          result[4] += 0.5365853658536586;
          result[5] += 0.3170731707317073;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027522935779816515;
          result[4] += 0.039318479685452164;
          result[5] += 0.9331585845347313;
        } else {
          result[0] += 0.08284023668639054;
          result[1] += 0.0019723865877712033;
          result[2] += 0.011834319526627219;
          result[3] += 0.3727810650887574;
          result[4] += 0.06903353057199212;
          result[5] += 0.46153846153846156;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953051643192489;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004694835680751174;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7522058823529412;
          result[1] += 0.05073529411764706;
          result[2] += 0.0014705882352941176;
          result[3] += 0.019852941176470587;
          result[4] += 0.15441176470588236;
          result[5] += 0.021323529411764706;
        } else {
          result[0] += 0.24107142857142858;
          result[1] += 0.01488095238095238;
          result[2] += 0.15476190476190477;
          result[3] += 0.28869047619047616;
          result[4] += 0.026785714285714284;
          result[5] += 0.27380952380952384;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18705035971223022;
          result[3] += 0.6330935251798561;
          result[4] += 0;
          result[5] += 0.17985611510791366;
        } else {
          result[0] += 0.18181818181818185;
          result[1] += 0;
          result[2] += 0.6363636363636365;
          result[3] += 0.13636363636363638;
          result[4] += 0.04545454545454546;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0;
          result[2] += 0.8387096774193549;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7887323943661972;
          result[3] += 0.12676056338028172;
          result[4] += 0;
          result[5] += 0.08450704225352114;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.05855855855855856;
          result[1] += 0;
          result[2] += 0.8558558558558559;
          result[3] += 0.08558558558558559;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007656967840735069;
          result[1] += 0;
          result[2] += 0.9693721286370597;
          result[3] += 0.019908116385911178;
          result[4] += 0;
          result[5] += 0.0030627871362940277;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.02;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.964;
          result[5] += 0.016;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.25;
          result[5] += 0.625;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0012953367875647669;
          result[1] += 0.0012953367875647669;
          result[2] += 0;
          result[3] += 0.02849740932642487;
          result[4] += 0.04922279792746114;
          result[5] += 0.9196891191709845;
        } else {
          result[0] += 0.09437751004016064;
          result[1] += 0.006024096385542169;
          result[2] += 0.002008032128514056;
          result[3] += 0.3614457831325301;
          result[4] += 0.0823293172690763;
          result[5] += 0.4538152610441767;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.3076923076923077;
          result[2] += 0;
          result[3] += 0.02197802197802198;
          result[4] += 0.6703296703296703;
          result[5] += 0;
        } else {
          result[0] += 0.008791208791208791;
          result[1] += 0.9868131868131869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004395604395604396;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8003014318010551;
          result[1] += 0.02562170308967596;
          result[2] += 0.03014318010550113;
          result[3] += 0.03541823662396383;
          result[4] += 0.08138658628485305;
          result[5] += 0.027128862094951016;
        } else {
          result[0] += 0.13559322033898305;
          result[1] += 0.005649717514124294;
          result[2] += 0.2966101694915254;
          result[3] += 0.2994350282485876;
          result[4] += 0.05649717514124294;
          result[5] += 0.2062146892655367;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.0136986301369863;
          result[2] += 0.1643835616438356;
          result[3] += 0.3287671232876712;
          result[4] += 0.0273972602739726;
          result[5] += 0.4657534246575342;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          result[0] += 0.44;
          result[1] += 0.12;
          result[2] += 0.16;
          result[3] += 0;
          result[4] += 0.04;
          result[5] += 0.24;
        } else {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.16;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.46;
          result[4] += 0;
          result[5] += 0.14;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8135593220338984;
          result[3] += 0.16610169491525423;
          result[4] += 0;
          result[5] += 0.020338983050847456;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9712643678160919;
          result[3] += 0.02490421455938697;
          result[4] += 0;
          result[5] += 0.0038314176245210726;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          result[0] += 0.13793103448275862;
          result[1] += 0.8620689655172413;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.09798270893371759;
          result[1] += 0.02017291066282421;
          result[2] += 0;
          result[3] += 0.023054755043227668;
          result[4] += 0.7636887608069165;
          result[5] += 0.09510086455331414;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011074197120708748;
          result[2] += 0.0022148394241417496;
          result[3] += 0.053156146179401995;
          result[4] += 0.08970099667774087;
          result[5] += 0.8538205980066446;
        } else {
          result[0] += 0.008438818565400843;
          result[1] += 0;
          result[2] += 0.03375527426160337;
          result[3] += 0.5907172995780591;
          result[4] += 0.02531645569620253;
          result[5] += 0.34177215189873417;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.3181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6818181818181818;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7379679144385027;
          result[1] += 0.04812834224598931;
          result[2] += 0.00611153552330023;
          result[3] += 0.035905271199388855;
          result[4] += 0.1321619556913675;
          result[5] += 0.0397249809014515;
        } else {
          result[0] += 0.1732776617954071;
          result[1] += 0.03549060542797495;
          result[2] += 0.24217118997912318;
          result[3] += 0.2546972860125261;
          result[4] += 0.060542797494780795;
          result[5] += 0.23382045929018788;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0;
          result[1] += 0.017094017094017096;
          result[2] += 0.3076923076923077;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.11965811965811966;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8529411764705882;
          result[3] += 0.14705882352941177;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0;
          result[4] += 0.20689655172413793;
          result[5] += 0.7241379310344828;
        } else {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8404669260700389;
          result[3] += 0.14785992217898833;
          result[4] += 0;
          result[5] += 0.011673151750972763;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9795221843003413;
          result[3] += 0.015358361774744027;
          result[4] += 0;
          result[5] += 0.005119453924914676;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0.002590673575129534;
          result[1] += 0.01295336787564767;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9015544041450778;
          result[5] += 0.0829015544041451;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.6764705882352942;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3235294117647059;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955056179775281;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0044943820224719105;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0.0009578544061302681;
          result[2] += 0.0009578544061302681;
          result[3] += 0.07854406130268199;
          result[4] += 0.039272030651340994;
          result[5] += 0.8524904214559387;
        } else {
          result[0] += 0.010416666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6458333333333334;
          result[4] += 0;
          result[5] += 0.34375;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8414634146341464;
          result[1] += 0.02526132404181185;
          result[2] += 0.0017421602787456448;
          result[3] += 0.023519163763066207;
          result[4] += 0.09146341463414635;
          result[5] += 0.016550522648083626;
        } else {
          result[0] += 0.18631178707224336;
          result[1] += 0.024714828897338403;
          result[2] += 0.2300380228136882;
          result[3] += 0.31368821292775667;
          result[4] += 0.028517110266159697;
          result[5] += 0.21673003802281368;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0.013888888888888888;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.2222222222222222;
          result[4] += 0.027777777777777776;
          result[5] += 0.6944444444444444;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.4375;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.0625;
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.45454545454545453;
          result[4] += 0.022727272727272728;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0.015873015873015872;
          result[2] += 0.7619047619047619;
          result[3] += 0.1746031746031746;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0.026666666666666672;
          result[1] += 0;
          result[2] += 0.7600000000000001;
          result[3] += 0.1866666666666667;
          result[4] += 0;
          result[5] += 0.026666666666666672;
        } else {
          result[0] += 0.0013422818791946308;
          result[1] += 0;
          result[2] += 0.9610738255033557;
          result[3] += 0.0348993288590604;
          result[4] += 0;
          result[5] += 0.0026845637583892616;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)123) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006825938566552901;
          result[4] += 0.9522184300341296;
          result[5] += 0.040955631399317405;
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
          result[0] += 0.0011947431302270011;
          result[1] += 0;
          result[2] += 0.0023894862604540022;
          result[3] += 0.02867383512544803;
          result[4] += 0.037037037037037035;
          result[5] += 0.9307048984468339;
        } else {
          result[0] += 0.11594202898550725;
          result[1] += 0.00322061191626409;
          result[2] += 0.00644122383252818;
          result[3] += 0.35426731078904994;
          result[4] += 0.08856682769726248;
          result[5] += 0.43156199677938806;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9885057471264368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011494252873563218;
          result[5] += 0;
        } else {
          result[0] += 0.03260869565217392;
          result[1] += 0.3586956521739131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5652173913043479;
          result[5] += 0.04347826086956522;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8399280575539568;
          result[1] += 0.025179856115107913;
          result[2] += 0.009892086330935251;
          result[3] += 0.024280575539568347;
          result[4] += 0.0737410071942446;
          result[5] += 0.02697841726618705;
        } else {
          result[0] += 0.2880434782608696;
          result[1] += 0.07065217391304349;
          result[2] += 0.19836956521739132;
          result[3] += 0.27173913043478265;
          result[4] += 0.06521739130434784;
          result[5] += 0.10597826086956523;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18;
          result[3] += 0.78;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0.03846153846153846;
          result[1] += 0;
          result[2] += 0.5192307692307692;
          result[3] += 0.23076923076923073;
          result[4] += 0.01923076923076923;
          result[5] += 0.19230769230769226;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.78;
          result[3] += 0.08;
          result[4] += 0;
          result[5] += 0.14;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
          result[0] += 0.002032520325203252;
          result[1] += 0;
          result[2] += 0.8922764227642275;
          result[3] += 0.08943089430894308;
          result[4] += 0;
          result[5] += 0.016260162601626015;
        } else {
          result[0] += 0.02696078431372549;
          result[1] += 0;
          result[2] += 0.9656862745098039;
          result[3] += 0.004901960784313725;
          result[4] += 0;
          result[5] += 0.0024509803921568627;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.995475113122172;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004524886877828055;
          result[5] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.014545454545454545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9672727272727273;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.0524759793052476;
          result[1] += 0.0022172949002217295;
          result[2] += 0.0022172949002217295;
          result[3] += 0.1574279379157428;
          result[4] += 0.07095343680709534;
          result[5] += 0.7147080561714708;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7869634340222575;
          result[1] += 0.06279809220985691;
          result[2] += 0.011128775834658187;
          result[3] += 0.021462639109697933;
          result[4] += 0.10810810810810811;
          result[5] += 0.009538950715421303;
        } else {
          result[0] += 0.12594458438287154;
          result[1] += 0.012594458438287154;
          result[2] += 0.2594458438287154;
          result[3] += 0.2770780856423174;
          result[4] += 0.09571788413098237;
          result[5] += 0.22921914357682618;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.047619047619047616;
          result[4] += 0.16666666666666666;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0.012345679012345678;
          result[1] += 0.13580246913580246;
          result[2] += 0.09876543209876543;
          result[3] += 0.6049382716049383;
          result[4] += 0.024691358024691357;
          result[5] += 0.12345679012345678;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.09523809523809525;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.14285714285714288;
          result[4] += 0.02380952380952381;
          result[5] += 0.07142857142857144;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0.025936599423631124;
          result[1] += 0;
          result[2] += 0.829971181556196;
          result[3] += 0.13256484149855907;
          result[4] += 0;
          result[5] += 0.011527377521613832;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9692307692307692;
          result[3] += 0.03076923076923077;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9947089947089947;
          result[3] += 0.005291005291005291;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003937007874015749;
          result[1] += 0.011811023622047246;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9566929133858268;
          result[5] += 0.02755905511811024;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01694915254237288;
          result[4] += 0.01977401129943503;
          result[5] += 0.963276836158192;
        } else {
          result[0] += 0.07705779334500876;
          result[1] += 0.03327495621716287;
          result[2] += 0.02276707530647986;
          result[3] += 0.3222416812609457;
          result[4] += 0.08231173380035026;
          result[5] += 0.46234676007005254;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7331887201735358;
          result[1] += 0.028922631959508314;
          result[2] += 0.010845986984815618;
          result[3] += 0.04266088214027477;
          result[4] += 0.1475054229934924;
          result[5] += 0.0368763557483731;
        } else {
          result[0] += 0.14492753623188406;
          result[1] += 0.028985507246376812;
          result[2] += 0.21497584541062803;
          result[3] += 0.2584541062801932;
          result[4] += 0.0821256038647343;
          result[5] += 0.27053140096618356;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20689655172413793;
          result[3] += 0.6551724137931034;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5806451612903226;
          result[3] += 0.3548387096774194;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9512195121951219;
          result[3] += 0.04878048780487805;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.11764705882352941;
          result[1] += 0.23529411764705882;
          result[2] += 0.11764705882352941;
          result[3] += 0.23529411764705882;
          result[4] += 0.11764705882352941;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.8472222222222222;
          result[3] += 0.11574074074074074;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.983754512635379;
          result[3] += 0.01444043321299639;
          result[4] += 0;
          result[5] += 0.0018050541516245488;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.007905138339920948;
          result[2] += 0;
          result[3] += 0.003952569169960474;
          result[4] += 0.9762845849802372;
          result[5] += 0.011857707509881422;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
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
          result[3] += 0.45454545454545453;
          result[4] += 0.45454545454545453;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.09259259259259259;
          result[1] += 0.037037037037037035;
          result[2] += 0;
          result[3] += 0.09259259259259259;
          result[4] += 0.5925925925925926;
          result[5] += 0.18518518518518517;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012919896640826874;
          result[3] += 0.015503875968992248;
          result[4] += 0.06330749354005168;
          result[5] += 0.9198966408268734;
        } else {
          result[0] += 0.010080645161290322;
          result[1] += 0.008064516129032258;
          result[2] += 0.006048387096774193;
          result[3] += 0.3850806451612903;
          result[4] += 0.0625;
          result[5] += 0.5282258064516129;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          result[0] += 0.05194805194805195;
          result[1] += 0.38311688311688313;
          result[2] += 0;
          result[3] += 0.006493506493506494;
          result[4] += 0.5584415584415584;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.881578947368421;
          result[1] += 0.019736842105263157;
          result[2] += 0.004699248120300752;
          result[3] += 0.015977443609022556;
          result[4] += 0.04887218045112782;
          result[5] += 0.02913533834586466;
        } else {
          result[0] += 0.3574144486692015;
          result[1] += 0.026615969581749048;
          result[2] += 0.22053231939163498;
          result[3] += 0.22433460076045628;
          result[4] += 0.034220532319391636;
          result[5] += 0.13688212927756654;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03225806451612903;
          result[4] += 0.22580645161290322;
          result[5] += 0.7419354838709677;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0.0043859649122807015;
          result[2] += 0.4517543859649123;
          result[3] += 0.4605263157894737;
          result[4] += 0.008771929824561403;
          result[5] += 0.06578947368421052;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.041666666666666664;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.25;
          result[5] += 0.4583333333333333;
        } else {
          result[0] += 0.009316770186335406;
          result[1] += 0;
          result[2] += 0.9089026915113873;
          result[3] += 0.06107660455486543;
          result[4] += 0;
          result[5] += 0.02070393374741201;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.010309278350515464;
          result[1] += 0.024054982817869417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9587628865979382;
          result[5] += 0.006872852233676976;
        } else {
          result[0] += 0.6465116279069768;
          result[1] += 0.00930232558139535;
          result[2] += 0;
          result[3] += 0.00930232558139535;
          result[4] += 0.1488372093023256;
          result[5] += 0.186046511627907;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002894356005788712;
          result[3] += 0.03762662807525326;
          result[4] += 0.023154848046309694;
          result[5] += 0.9363241678726484;
        } else {
          result[0] += 0.0038022813688212928;
          result[1] += 0.057034220532319393;
          result[2] += 0.022813688212927757;
          result[3] += 0.2585551330798479;
          result[4] += 0.1520912547528517;
          result[5] += 0.5057034220532319;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0.004975124378109453;
          result[1] += 0.9875621890547264;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007462686567164179;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8384615384615386;
          result[1] += 0.034615384615384624;
          result[2] += 0.009615384615384618;
          result[3] += 0.03557692307692308;
          result[4] += 0.0730769230769231;
          result[5] += 0.008653846153846156;
        } else {
          result[0] += 0.1450980392156863;
          result[1] += 0.00392156862745098;
          result[2] += 0.19411764705882353;
          result[3] += 0.33137254901960783;
          result[4] += 0.08627450980392157;
          result[5] += 0.23921568627450981;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
          result[0] += 0.0625;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0.140625;
          result[4] += 0.140625;
          result[5] += 0.59375;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0.2345679012345679;
          result[3] += 0.5925925925925926;
          result[4] += 0.037037037037037035;
          result[5] += 0.09876543209876543;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.11904761904761904;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8080495356037152;
          result[3] += 0.1826625386996904;
          result[4] += 0;
          result[5] += 0.009287925696594427;
        } else {
          result[0] += 0.5416666666666666;
          result[1] += 0;
          result[2] += 0.4583333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.72;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9760589318600368;
          result[3] += 0.02394106813996317;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
          result[0] += 0.003472222222222222;
          result[1] += 0.06597222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8645833333333334;
          result[5] += 0.06597222222222222;
        } else {
          result[0] += 0.4210526315789474;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41052631578947374;
          result[5] += 0.16842105263157897;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.005393743257820928;
          result[2] += 0;
          result[3] += 0.05501618122977346;
          result[4] += 0.06903991370010787;
          result[5] += 0.8705501618122977;
        } else {
          result[0] += 0.015772870662460567;
          result[1] += 0.00946372239747634;
          result[2] += 0.05993690851735016;
          result[3] += 0.5205047318611987;
          result[4] += 0.01892744479495268;
          result[5] += 0.3753943217665615;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7768860353130016;
          result[1] += 0.038523274478330656;
          result[2] += 0;
          result[3] += 0.02247191011235955;
          result[4] += 0.12680577849117175;
          result[5] += 0.03531300160513644;
        } else {
          result[0] += 0.14705882352941177;
          result[1] += 0.004901960784313725;
          result[2] += 0.2818627450980392;
          result[3] += 0.3088235294117647;
          result[4] += 0.0392156862745098;
          result[5] += 0.2181372549019608;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1320754716981132;
          result[3] += 0.3584905660377358;
          result[4] += 0.05660377358490566;
          result[5] += 0.4528301886792453;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0.00819672131147541;
          result[1] += 0;
          result[2] += 0.819672131147541;
          result[3] += 0.16393442622950818;
          result[4] += 0;
          result[5] += 0.00819672131147541;
        } else {
          result[0] += 0.7647058823529411;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7111111111111111;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9090909090909091;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          result[0] += 0.026865671641791048;
          result[1] += 0;
          result[2] += 0.8686567164179105;
          result[3] += 0.09850746268656718;
          result[4] += 0;
          result[5] += 0.005970149253731344;
        } else {
          result[0] += 0.0043859649122807015;
          result[1] += 0;
          result[2] += 0.9846491228070176;
          result[3] += 0.010964912280701754;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0076045627376425855;
          result[1] += 0.0038022813688212928;
          result[2] += 0.0038022813688212928;
          result[3] += 0;
          result[4] += 0.935361216730038;
          result[5] += 0.049429657794676805;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.024471635150166853;
          result[1] += 0.0011123470522803114;
          result[2] += 0;
          result[3] += 0.035595105672969966;
          result[4] += 0.05784204671857619;
          result[5] += 0.8809788654060067;
        } else {
          result[0] += 0.10443864229765012;
          result[1] += 0.020887728459530026;
          result[2] += 0.020887728459530026;
          result[3] += 0.4908616187989556;
          result[4] += 0.07571801566579635;
          result[5] += 0.28720626631853785;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.9;
          result[5] += 0;
        } else {
          result[0] += 0.02252252252252252;
          result[1] += 0.9459459459459459;
          result[2] += 0;
          result[3] += 0.009009009009009009;
          result[4] += 0.02252252252252252;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0.4210526315789474;
          result[1] += 0.026315789473684213;
          result[2] += 0.03258145363408522;
          result[3] += 0.13533834586466167;
          result[4] += 0.14786967418546368;
          result[5] += 0.2368421052631579;
        } else {
          result[0] += 0.8271186440677967;
          result[1] += 0.050847457627118654;
          result[2] += 0.047457627118644076;
          result[3] += 0.016949152542372885;
          result[4] += 0.053107344632768366;
          result[5] += 0.004519774011299436;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15254237288135594;
          result[3] += 0.6440677966101694;
          result[4] += 0;
          result[5] += 0.2033898305084746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8351648351648352;
          result[3] += 0.13186813186813187;
          result[4] += 0;
          result[5] += 0.03296703296703297;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.36;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.04195804195804196;
          result[1] += 0;
          result[2] += 0.8146853146853147;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.006993006993006993;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9775641025641025;
          result[3] += 0.022435897435897436;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.013636363636363636;
          result[1] += 0.013636363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9545454545454546;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.48484848484848486;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07575757575757576;
          result[4] += 0.16666666666666666;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.002366863905325444;
          result[1] += 0.011834319526627219;
          result[2] += 0.0035502958579881655;
          result[3] += 0.047337278106508875;
          result[4] += 0.07692307692307693;
          result[5] += 0.8579881656804734;
        } else {
          result[0] += 0;
          result[1] += 0.020325203252032523;
          result[2] += 0;
          result[3] += 0.5325203252032521;
          result[4] += 0.04471544715447155;
          result[5] += 0.402439024390244;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9926650366748166;
          result[2] += 0;
          result[3] += 0.0024449877750611247;
          result[4] += 0.004889975550122249;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7784131522516083;
          result[1] += 0.035739814152966405;
          result[2] += 0.007862759113652609;
          result[3] += 0.01858470335954253;
          result[4] += 0.13366690493209435;
          result[5] += 0.02573266619013581;
        } else {
          result[0] += 0.16083916083916083;
          result[1] += 0.024475524475524476;
          result[2] += 0.16083916083916083;
          result[3] += 0.21678321678321677;
          result[4] += 0.11538461538461539;
          result[5] += 0.32167832167832167;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0.010526315789473684;
          result[2] += 0.09473684210526316;
          result[3] += 0.06315789473684211;
          result[4] += 0.12631578947368421;
          result[5] += 0.7052631578947368;
        } else {
          result[0] += 0.11428571428571428;
          result[1] += 0.4;
          result[2] += 0.08571428571428572;
          result[3] += 0.2;
          result[4] += 0.08571428571428572;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.006060606060606061;
          result[2] += 0.12727272727272726;
          result[3] += 0.6848484848484848;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.11627906976744186;
          result[1] += 0.011627906976744186;
          result[2] += 0.5930232558139535;
          result[3] += 0.26744186046511625;
          result[4] += 0.011627906976744186;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111) ) ) {
          result[0] += 0.09722222222222222;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0.1388888888888889;
          result[4] += 0;
          result[5] += 0.1527777777777778;
        } else {
          result[0] += 0.775;
          result[1] += 0;
          result[2] += 0.175;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0023584905660377358;
          result[1] += 0;
          result[2] += 0.9327830188679245;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.0023584905660377358;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9427083333333334;
          result[5] += 0.015625;
        } else {
          result[0] += 0.1506849315068493;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4246575342465753;
          result[5] += 0.4246575342465753;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014388489208633094;
          result[3] += 0.03597122302158273;
          result[4] += 0.034532374100719423;
          result[5] += 0.9280575539568345;
        } else {
          result[0] += 0;
          result[1] += 0.04843304843304843;
          result[2] += 0.03418803418803419;
          result[3] += 0.36752136752136755;
          result[4] += 0.045584045584045586;
          result[5] += 0.5042735042735043;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          result[0] += 0.15087719298245614;
          result[1] += 0.2596491228070175;
          result[2] += 0;
          result[3] += 0.056140350877192984;
          result[4] += 0.4807017543859649;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.7216142270861833;
          result[1] += 0.012311901504787962;
          result[2] += 0.030779753761969904;
          result[3] += 0.08481532147742818;
          result[4] += 0.07250341997264022;
          result[5] += 0.07797537619699042;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.9904534606205251;
          result[2] += 0;
          result[3] += 0.002386634844868735;
          result[4] += 0.007159904534606206;
          result[5] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.4666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0.037037037037037035;
          result[3] += 0.07407407407407407;
          result[4] += 0.037037037037037035;
          result[5] += 0.6296296296296297;
        } else {
          result[0] += 0;
          result[1] += 0.006535947712418301;
          result[2] += 0.20915032679738563;
          result[3] += 0.6470588235294118;
          result[4] += 0;
          result[5] += 0.13725490196078433;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0.038461538461538464;
          result[2] += 0.36538461538461536;
          result[3] += 0.16346153846153846;
          result[4] += 0.17307692307692307;
          result[5] += 0.2403846153846154;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.3333333333333333;
          result[5] += 0.5;
        } else {
          result[0] += 0.2459016393442623;
          result[1] += 0.03278688524590164;
          result[2] += 0.639344262295082;
          result[3] += 0.08196721311475409;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.8098958333333334;
          result[3] += 0.15104166666666666;
          result[4] += 0;
          result[5] += 0.0234375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9785714285714285;
          result[3] += 0.02142857142857143;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.02491103202846975;
          result[1] += 0.0035587188612099642;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9252669039145908;
          result[5] += 0.046263345195729534;
        } else {
          result[0] += 0.567741935483871;
          result[1] += 0.012903225806451613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25161290322580643;
          result[5] += 0.16774193548387098;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012836970474967907;
          result[3] += 0.03979460847240052;
          result[4] += 0.03465982028241335;
          result[5] += 0.9242618741976893;
        } else {
          result[0] += 0.011029411764705883;
          result[1] += 0.014705882352941176;
          result[2] += 0;
          result[3] += 0.21323529411764705;
          result[4] += 0.23529411764705882;
          result[5] += 0.5257352941176471;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010309278350515464;
          result[1] += 0.38144329896907214;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6082474226804123;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          result[0] += 0.1571753986332574;
          result[1] += 0.00683371298405467;
          result[2] += 0.05694760820045558;
          result[3] += 0.46924829157175396;
          result[4] += 0.03189066059225513;
          result[5] += 0.27790432801822323;
        } else {
          result[0] += 0.7543171114599686;
          result[1] += 0.01726844583987441;
          result[2] += 0.08006279434850863;
          result[3] += 0.044740973312401885;
          result[4] += 0.04866562009419152;
          result[5] += 0.054945054945054944;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0196078431372549;
          result[3] += 0.0392156862745098;
          result[4] += 0.13725490196078433;
          result[5] += 0.803921568627451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08571428571428572;
          result[3] += 0.7428571428571429;
          result[4] += 0.02857142857142857;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9459459459459459;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.3055555555555556;
          result[3] += 0.4722222222222222;
          result[4] += 0;
          result[5] += 0.18055555555555555;
        } else {
          result[0] += 0.0425531914893617;
          result[1] += 0.010638297872340425;
          result[2] += 0.7872340425531915;
          result[3] += 0.14893617021276595;
          result[4] += 0;
          result[5] += 0.010638297872340425;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0.08571428571428572;
          result[1] += 0;
          result[2] += 0.6857142857142857;
          result[3] += 0.17142857142857143;
          result[4] += 0;
          result[5] += 0.05714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9615877080665813;
          result[3] += 0.03713188220230474;
          result[4] += 0;
          result[5] += 0.0012804097311139564;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.024193548387096774;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8870967741935484;
          result[5] += 0.08870967741935484;
        } else {
          result[0] += 0.7323943661971831;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014084507042253521;
          result[4] += 0.23943661971830985;
          result[5] += 0.014084507042253521;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.02577873254564984;
          result[2] += 0.0021482277121374865;
          result[3] += 0.07411385606874328;
          result[4] += 0.06981740064446831;
          result[5] += 0.8281417830290011;
        } else {
          result[0] += 0;
          result[1] += 0.009174311926605505;
          result[2] += 0;
          result[3] += 0.6467889908256881;
          result[4] += 0.027522935779816515;
          result[5] += 0.3165137614678899;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.41935483870967744;
          result[2] += 0;
          result[3] += 0.03225806451612903;
          result[4] += 0.5483870967741935;
          result[5] += 0;
        } else {
          result[0] += 0.0026954177897574125;
          result[1] += 0.9919137466307277;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005390835579514825;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7549167927382754;
          result[1] += 0.0416036308623298;
          result[2] += 0.012859304084720122;
          result[3] += 0.03479576399394856;
          result[4] += 0.1346444780635401;
          result[5] += 0.02118003025718608;
        } else {
          result[0] += 0.14009661835748793;
          result[1] += 0.004830917874396135;
          result[2] += 0.2028985507246377;
          result[3] += 0.22705314009661837;
          result[4] += 0.0966183574879227;
          result[5] += 0.3285024154589372;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9696969696969697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.6060606060606061;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.8125;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4772727272727273;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0.29545454545454547;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
          result[0] += 0.03508771929824561;
          result[1] += 0.02631578947368421;
          result[2] += 0.4473684210526316;
          result[3] += 0.35964912280701755;
          result[4] += 0;
          result[5] += 0.13157894736842105;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.5454545454545454;
          result[2] += 0.09090909090909091;
          result[3] += 0.045454545454545456;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        } else {
          result[0] += 0.02404371584699454;
          result[1] += 0;
          result[2] += 0.9202185792349727;
          result[3] += 0.05136612021857924;
          result[4] += 0;
          result[5] += 0.004371584699453553;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0.01851851851851852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9135802469135803;
          result[5] += 0.06790123456790124;
        } else {
          result[0] += 0;
          result[1] += 0.8421052631578947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15789473684210525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.007220216606498195;
          result[1] += 0.0036101083032490976;
          result[2] += 0.009626955475330927;
          result[3] += 0.044524669073405534;
          result[4] += 0.04332129963898917;
          result[5] += 0.8916967509025271;
        } else {
          result[0] += 0.17604355716878403;
          result[1] += 0.007259528130671506;
          result[2] += 0.02722323049001815;
          result[3] += 0.36116152450090744;
          result[4] += 0.09800362976406533;
          result[5] += 0.33030852994555354;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9926829268292683;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007317073170731708;
          result[5] += 0;
        } else {
          result[0] += 0.13513513513513514;
          result[1] += 0.23423423423423423;
          result[2] += 0;
          result[3] += 0.009009009009009009;
          result[4] += 0.5495495495495496;
          result[5] += 0.07207207207207207;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8396880415944541;
          result[1] += 0.0389948006932409;
          result[2] += 0.016464471403812825;
          result[3] += 0.026863084922010397;
          result[4] += 0.049393414211438474;
          result[5] += 0.02859618717504333;
        } else {
          result[0] += 0.08928571428571429;
          result[1] += 0.011904761904761904;
          result[2] += 0.30952380952380953;
          result[3] += 0.30952380952380953;
          result[4] += 0.02976190476190476;
          result[5] += 0.25;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.05128205128205128;
          result[2] += 0;
          result[3] += 0.2948717948717949;
          result[4] += 0.02564102564102564;
          result[5] += 0.6282051282051282;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2066115702479339;
          result[3] += 0.6363636363636364;
          result[4] += 0.01652892561983471;
          result[5] += 0.14049586776859505;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7285714285714285;
          result[3] += 0.20714285714285716;
          result[4] += 0;
          result[5] += 0.06428571428571428;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0.09090909090909091;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7419354838709677;
          result[3] += 0.1774193548387097;
          result[4] += 0;
          result[5] += 0.08064516129032258;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2976190476190476;
          result[1] += 0.011904761904761904;
          result[2] += 0.6190476190476191;
          result[3] += 0.023809523809523808;
          result[4] += 0.023809523809523808;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.005277044854881267;
          result[1] += 0;
          result[2] += 0.9617414248021109;
          result[3] += 0.03298153034300792;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.013100436681222707;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9519650655021834;
          result[5] += 0.034934497816593885;
        } else {
          result[0] += 0.45217391304347826;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3739130434782609;
          result[5] += 0.17391304347826086;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.007371007371007371;
          result[2] += 0.002457002457002457;
          result[3] += 0.036855036855036855;
          result[4] += 0.05896805896805897;
          result[5] += 0.8943488943488943;
        } else {
          result[0] += 0.010050251256281407;
          result[1] += 0.020100502512562814;
          result[2] += 0;
          result[3] += 0.5025125628140703;
          result[4] += 0.03015075376884422;
          result[5] += 0.4371859296482412;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7549770290964778;
          result[1] += 0.05359877488514548;
          result[2] += 0;
          result[3] += 0.02986217457886677;
          result[4] += 0.13552833078101073;
          result[5] += 0.026033690658499236;
        } else {
          result[0] += 0.13314447592067988;
          result[1] += 0.06232294617563739;
          result[2] += 0.3031161473087819;
          result[3] += 0.2237960339943343;
          result[4] += 0.11331444759206799;
          result[5] += 0.1643059490084986;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)104) ) ) {
          result[0] += 0.0025252525252525255;
          result[1] += 0.9974747474747475;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
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
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.9375;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.07954545454545454;
          result[2] += 0.06818181818181818;
          result[3] += 0.7045454545454546;
          result[4] += 0;
          result[5] += 0.14772727272727273;
        } else {
          result[0] += 0.041237113402061855;
          result[1] += 0.020618556701030927;
          result[2] += 0.4742268041237113;
          result[3] += 0.21649484536082475;
          result[4] += 0;
          result[5] += 0.24742268041237114;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0.060606060606060615;
          result[1] += 0.07575757575757577;
          result[2] += 0.37878787878787884;
          result[3] += 0.31818181818181823;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.11814345991561181;
          result[1] += 0;
          result[2] += 0.7805907172995781;
          result[3] += 0.08860759493670886;
          result[4] += 0.008438818565400843;
          result[5] += 0.004219409282700422;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8285714285714286;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0.0030581039755351687;
          result[1] += 0;
          result[2] += 0.9831804281345566;
          result[3] += 0.012232415902140675;
          result[4] += 0;
          result[5] += 0.0015290519877675843;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.8529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14705882352941177;
          result[5] += 0;
        } else {
          result[0] += 0.008670520231213872;
          result[1] += 0.023121387283236993;
          result[2] += 0;
          result[3] += 0.002890173410404624;
          result[4] += 0.9075144508670521;
          result[5] += 0.057803468208092484;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
        } else {
          result[0] += 0.00228310502283105;
          result[1] += 0.9863013698630136;
          result[2] += 0.0045662100456621;
          result[3] += 0;
          result[4] += 0.00228310502283105;
          result[5] += 0.0045662100456621;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.046370967741935484;
          result[1] += 0.0020161290322580645;
          result[2] += 0;
          result[3] += 0.04536290322580645;
          result[4] += 0.07862903225806452;
          result[5] += 0.8276209677419355;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015625;
          result[3] += 0.6015625;
          result[4] += 0.04296875;
          result[5] += 0.33984375;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8295638126009693;
          result[1] += 0.033117932148626815;
          result[2] += 0.008077544426494346;
          result[3] += 0.030694668820678513;
          result[4] += 0.08481421647819062;
          result[5] += 0.013731825525040387;
        } else {
          result[0] += 0.08906882591093117;
          result[1] += 0;
          result[2] += 0.31376518218623484;
          result[3] += 0.3319838056680162;
          result[4] += 0.03643724696356275;
          result[5] += 0.22874493927125505;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2962962962962963;
          result[5] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.0967741935483871;
          result[3] += 0.7096774193548387;
          result[4] += 0;
          result[5] += 0.16129032258064516;
        } else {
          result[0] += 0.15625;
          result[1] += 0.09375;
          result[2] += 0.59375;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.09375;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.4375;
        } else {
          result[0] += 0.011904761904761904;
          result[1] += 0;
          result[2] += 0.7936507936507936;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0.015873015873015872;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.006578947368421053;
          result[1] += 0;
          result[2] += 0.9013157894736843;
          result[3] += 0.09210526315789475;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9917184265010351;
          result[3] += 0.008281573498964804;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.013574660633484163;
          result[1] += 0.01809954751131222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9457013574660633;
          result[5] += 0.02262443438914027;
        } else {
          result[0] += 0.22448979591836735;
          result[1] += 0.22448979591836735;
          result[2] += 0;
          result[3] += 0.05102040816326531;
          result[4] += 0.14285714285714285;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02661064425770308;
          result[4] += 0.037815126050420166;
          result[5] += 0.9355742296918768;
        } else {
          result[0] += 0.007537688442211055;
          result[1] += 0.002512562814070352;
          result[2] += 0.002512562814070352;
          result[3] += 0.38944723618090454;
          result[4] += 0.08040201005025126;
          result[5] += 0.5175879396984925;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.2916666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.002369668246445498;
          result[1] += 0.9976303317535545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7459080280592362;
          result[1] += 0.03897116134060795;
          result[2] += 0.004676539360872954;
          result[3] += 0.026500389711613406;
          result[4] += 0.1597817614964926;
          result[5] += 0.024162120031176928;
        } else {
          result[0] += 0.1211453744493392;
          result[1] += 0.022026431718061675;
          result[2] += 0.2444933920704846;
          result[3] += 0.2511013215859031;
          result[4] += 0.09691629955947137;
          result[5] += 0.2643171806167401;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.025;
          result[4] += 0;
          result[5] += 0.85;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015873015873015872;
          result[3] += 0.5873015873015873;
          result[4] += 0;
          result[5] += 0.3968253968253968;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
          result[0] += 0.06896551724137931;
          result[1] += 0.10344827586206896;
          result[2] += 0.25862068965517243;
          result[3] += 0.10344827586206896;
          result[4] += 0.034482758620689655;
          result[5] += 0.43103448275862066;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9024390243902439;
          result[3] += 0.0975609756097561;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.022535211267605635;
          result[1] += 0;
          result[2] += 0.7380281690140845;
          result[3] += 0.2028169014084507;
          result[4] += 0;
          result[5] += 0.036619718309859155;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9715639810426541;
          result[3] += 0.02843601895734597;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
          result[0] += 0.014705882352941176;
          result[1] += 0.003676470588235294;
          result[2] += 0;
          result[3] += 0.007352941176470588;
          result[4] += 0.9338235294117647;
          result[5] += 0.04044117647058824;
        } else {
          result[0] += 0;
          result[1] += 0.5526315789473685;
          result[2] += 0;
          result[3] += 0.13157894736842105;
          result[4] += 0.05263157894736842;
          result[5] += 0.2631578947368421;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0027739251040221915;
          result[1] += 0;
          result[2] += 0.0013869625520110957;
          result[3] += 0.024965325936199722;
          result[4] += 0.056865464632454926;
          result[5] += 0.9140083217753121;
        } else {
          result[0] += 0.11072664359861592;
          result[1] += 0.006920415224913495;
          result[2] += 0.02249134948096886;
          result[3] += 0.2889273356401384;
          result[4] += 0.08650519031141868;
          result[5] += 0.4844290657439446;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.27083333333333337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6875000000000001;
          result[5] += 0.04166666666666667;
        } else {
          result[0] += 0.0045871559633027525;
          result[1] += 0.9724770642201835;
          result[2] += 0.0022935779816513763;
          result[3] += 0.0022935779816513763;
          result[4] += 0.01834862385321101;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0.2788844621513944;
          result[1] += 0.00398406374501992;
          result[2] += 0.0796812749003984;
          result[3] += 0.2868525896414343;
          result[4] += 0.1394422310756972;
          result[5] += 0.21115537848605578;
        } else {
          result[0] += 0.8153338829348723;
          result[1] += 0.032151690024732074;
          result[2] += 0.03627370156636439;
          result[3] += 0.03132728771640561;
          result[4] += 0.05688375927452598;
          result[5] += 0.028029678483099757;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.03508771929824561;
          result[2] += 0.03508771929824561;
          result[3] += 0.03508771929824561;
          result[4] += 0.05263157894736842;
          result[5] += 0.7894736842105263;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07086614173228346;
          result[3] += 0.7244094488188977;
          result[4] += 0;
          result[5] += 0.2047244094488189;
        } else {
          result[0] += 0.022222222222222223;
          result[1] += 0.022222222222222223;
          result[2] += 0.6111111111111112;
          result[3] += 0.2222222222222222;
          result[4] += 0.044444444444444446;
          result[5] += 0.07777777777777778;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06896551724137931;
          result[3] += 0.3793103448275862;
          result[4] += 0;
          result[5] += 0.5517241379310345;
        } else {
          result[0] += 0;
          result[1] += 0.04054054054054054;
          result[2] += 0.7702702702702703;
          result[3] += 0.06756756756756757;
          result[4] += 0;
          result[5] += 0.12162162162162163;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.008620689655172414;
          result[1] += 0;
          result[2] += 0.9421182266009852;
          result[3] += 0.04187192118226601;
          result[4] += 0;
          result[5] += 0.007389162561576354;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.016597510373443983;
          result[1] += 0.024896265560165973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9294605809128631;
          result[5] += 0.029045643153526972;
        } else {
          result[0] += 0.4915254237288136;
          result[1] += 0.00847457627118644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.288135593220339;
          result[5] += 0.211864406779661;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00102880658436214;
          result[3] += 0.05555555555555555;
          result[4] += 0.04218106995884774;
          result[5] += 0.9012345679012346;
        } else {
          result[0] += 0.0028011204481792717;
          result[1] += 0.056022408963585436;
          result[2] += 0.03081232492997199;
          result[3] += 0.5098039215686274;
          result[4] += 0.04201680672268908;
          result[5] += 0.3585434173669468;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
          result[0] += 0.08163265306122448;
          result[1] += 0.40408163265306124;
          result[2] += 0.004081632653061225;
          result[3] += 0.00816326530612245;
          result[4] += 0.4816326530612245;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0.7135819845179452;
          result[1] += 0.017593244194229418;
          result[2] += 0.06263194933145673;
          result[3] += 0.08726249120337792;
          result[4] += 0.05559465165376496;
          result[5] += 0.06333567909922591;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.9972972972972973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002702702702702703;
          result[5] += 0;
        } else {
          result[0] += 0.17391304347826086;
          result[1] += 0.5217391304347826;
          result[2] += 0.17391304347826086;
          result[3] += 0;
          result[4] += 0.13043478260869565;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.26785714285714285;
          result[4] += 0.05357142857142857;
          result[5] += 0.5892857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.84375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.09375;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007291666666666667;
          result[1] += 0;
          result[2] += 0.925;
          result[3] += 0.06354166666666666;
          result[4] += 0;
          result[5] += 0.004166666666666667;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.01195219123505976;
          result[1] += 0.01593625498007968;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9681274900398407;
          result[5] += 0.00398406374501992;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.32;
          result[5] += 0.28;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0010559662090813093;
          result[1] += 0.004223864836325237;
          result[2] += 0.0031678986272439284;
          result[3] += 0.05385427666314678;
          result[4] += 0.05174234424498416;
          result[5] += 0.8859556494192186;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018867924528301886;
          result[3] += 0.5773584905660377;
          result[4] += 0.03773584905660377;
          result[5] += 0.3660377358490566;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.4375;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0.53125;
          result[5] += 0;
        } else {
          result[0] += 0.010706638115631691;
          result[1] += 0.9807280513918629;
          result[2] += 0;
          result[3] += 0.006423982869379015;
          result[4] += 0.0021413276231263384;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7628865979381443;
          result[1] += 0.06423473433782712;
          result[2] += 0.0023790642347343376;
          result[3] += 0.022204599524187154;
          result[4] += 0.12846946867565423;
          result[5] += 0.019825535289452814;
        } else {
          result[0] += 0.15763546798029557;
          result[1] += 0.022167487684729065;
          result[2] += 0.21921182266009853;
          result[3] += 0.27586206896551724;
          result[4] += 0.06403940886699508;
          result[5] += 0.26108374384236455;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22826086956521738;
          result[3] += 0.6739130434782609;
          result[4] += 0;
          result[5] += 0.09782608695652174;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6326530612244898;
          result[3] += 0.20408163265306123;
          result[4] += 0;
          result[5] += 0.16326530612244897;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)122) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.888888888888889;
          result[3] += 0.03703703703703704;
          result[4] += 0.05555555555555556;
          result[5] += 0.01851851851851852;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.009009009009009009;
          result[1] += 0;
          result[2] += 0.8648648648648649;
          result[3] += 0.0990990990990991;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.005277044854881266;
          result[1] += 0;
          result[2] += 0.9670184696569921;
          result[3] += 0.025065963060686015;
          result[4] += 0;
          result[5] += 0.002638522427440633;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          result[0] += 0.012145748987854251;
          result[1] += 0.012145748987854251;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9595141700404858;
          result[5] += 0.016194331983805668;
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
          result[0] += 0.027563395810363836;
          result[1] += 0.0011025358324145535;
          result[2] += 0;
          result[3] += 0.04851157662624035;
          result[4] += 0.03528114663726571;
          result[5] += 0.8875413450937155;
        } else {
          result[0] += 0.03856749311294766;
          result[1] += 0.03305785123966942;
          result[2] += 0.013774104683195593;
          result[3] += 0.4573002754820937;
          result[4] += 0.0440771349862259;
          result[5] += 0.4132231404958678;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.74835886214442;
          result[1] += 0.0299051787016776;
          result[2] += 0.004376367614879649;
          result[3] += 0.019693654266958422;
          result[4] += 0.1546316557257476;
          result[5] += 0.04303428154631655;
        } else {
          result[0] += 0.16953316953316952;
          result[1] += 0.022113022113022112;
          result[2] += 0.23587223587223588;
          result[3] += 0.3022113022113022;
          result[4] += 0.04914004914004914;
          result[5] += 0.22113022113022113;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0.07246376811594203;
          result[2] += 0.014492753623188406;
          result[3] += 0.2463768115942029;
          result[4] += 0.057971014492753624;
          result[5] += 0.5217391304347826;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.3181818181818182;
          result[2] += 0.5909090909090909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12244897959183673;
          result[3] += 0.6938775510204082;
          result[4] += 0;
          result[5] += 0.1836734693877551;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.23333333333333334;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.8;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0.00411522633744856;
          result[1] += 0;
          result[2] += 0.823045267489712;
          result[3] += 0.15637860082304528;
          result[4] += 0;
          result[5] += 0.01646090534979424;
        } else {
          result[0] += 0.001658374792703151;
          result[1] += 0;
          result[2] += 0.9701492537313433;
          result[3] += 0.024875621890547265;
          result[4] += 0;
          result[5] += 0.003316749585406302;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.02510460251046025;
          result[1] += 0.008368200836820083;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9497907949790795;
          result[5] += 0.016736401673640166;
        } else {
          result[0] += 0.8275862068965517;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15517241379310345;
          result[5] += 0.017241379310344827;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06290672451193059;
          result[4] += 0.06616052060737528;
          result[5] += 0.8709327548806941;
        } else {
          result[0] += 0;
          result[1] += 0.0226628895184136;
          result[2] += 0;
          result[3] += 0.45325779036827196;
          result[4] += 0.0679886685552408;
          result[5] += 0.45609065155807366;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7863599013968776;
          result[1] += 0.03533278553820871;
          result[2] += 0;
          result[3] += 0.011503697617091208;
          result[4] += 0.1552999178307313;
          result[5] += 0.011503697617091208;
        } else {
          result[0] += 0.18766066838046272;
          result[1] += 0.012853470437017995;
          result[2] += 0.2133676092544987;
          result[3] += 0.3393316195372751;
          result[4] += 0.030848329048843187;
          result[5] += 0.2159383033419023;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0.02857142857142857;
          result[3] += 0.07142857142857142;
          result[4] += 0.04285714285714286;
          result[5] += 0.7857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.5894736842105263;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)106.5) ) ) {
          result[0] += 0.05303030303030303;
          result[1] += 0.007575757575757576;
          result[2] += 0.6666666666666666;
          result[3] += 0.12878787878787878;
          result[4] += 0.007575757575757576;
          result[5] += 0.13636363636363635;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.005649717514124294;
          result[1] += 0;
          result[2] += 0.9242937853107345;
          result[3] += 0.0655367231638418;
          result[4] += 0;
          result[5] += 0.004519774011299435;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.013698630136986302;
          result[1] += 0.009132420091324202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9680365296803654;
          result[5] += 0.009132420091324202;
        } else {
          result[0] += 0.4336283185840708;
          result[1] += 0.04424778761061947;
          result[2] += 0;
          result[3] += 0.02654867256637168;
          result[4] += 0.1504424778761062;
          result[5] += 0.34513274336283184;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.006109979633401222;
          result[2] += 0.002036659877800407;
          result[3] += 0.06924643584521385;
          result[4] += 0.07637474541751528;
          result[5] += 0.8462321792260692;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5932203389830508;
          result[4] += 0.00423728813559322;
          result[5] += 0.4025423728813559;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.125;
          result[1] += 0.3375;
          result[2] += 0;
          result[3] += 0.03333333333333333;
          result[4] += 0.4708333333333333;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.6764894298526586;
          result[1] += 0.014734144778987828;
          result[2] += 0.07751441383728379;
          result[3] += 0.10442024343369635;
          result[4] += 0.049967969250480464;
          result[5] += 0.07687379884689302;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00516795865633075;
          result[1] += 0.9948320413436692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
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
          result[2] += 0;
          result[3] += 0.06060606060606061;
          result[4] += 0.030303030303030304;
          result[5] += 0.9090909090909091;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.07272727272727272;
          result[2] += 0.22727272727272727;
          result[3] += 0.4909090909090909;
          result[4] += 0;
          result[5] += 0.20909090909090908;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.8285714285714286;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4444444444444444;
          result[3] += 0.37777777777777777;
          result[4] += 0.022222222222222223;
          result[5] += 0.15555555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9615384615384616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001221001221001221;
          result[1] += 0;
          result[2] += 0.9560439560439561;
          result[3] += 0.03663003663003663;
          result[4] += 0;
          result[5] += 0.006105006105006105;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.00816326530612245;
          result[2] += 0.00816326530612245;
          result[3] += 0.00816326530612245;
          result[4] += 0.926530612244898;
          result[5] += 0.04897959183673469;
        } else {
          result[0] += 0.5540540540540541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02027027027027027;
          result[4] += 0.20945945945945946;
          result[5] += 0.21621621621621623;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012534818941504178;
          result[4] += 0.057103064066852366;
          result[5] += 0.9303621169916435;
        } else {
          result[0] += 0.00473186119873817;
          result[1] += 0.006309148264984227;
          result[2] += 0.00473186119873817;
          result[3] += 0.35646687697160884;
          result[4] += 0.10883280757097792;
          result[5] += 0.5189274447949527;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0.020202020202020204;
          result[1] += 0.40404040404040403;
          result[2] += 0.030303030303030304;
          result[3] += 0.020202020202020204;
          result[4] += 0.5151515151515151;
          result[5] += 0.010101010101010102;
        } else {
          result[0] += 0;
          result[1] += 0.9952380952380953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004761904761904762;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8260869565217391;
          result[1] += 0.04081632653061224;
          result[2] += 0.0026619343389529724;
          result[3] += 0.03194321206743567;
          result[4] += 0.06566104702750665;
          result[5] += 0.032830523513753325;
        } else {
          result[0] += 0.196969696969697;
          result[1] += 0.04545454545454546;
          result[2] += 0.2545454545454546;
          result[3] += 0.196969696969697;
          result[4] += 0.08181818181818183;
          result[5] += 0.22424242424242427;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.803921568627451;
          result[4] += 0;
          result[5] += 0.0784313725490196;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8243243243243243;
          result[3] += 0.12162162162162163;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.875;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.007462686567164179;
          result[1] += 0;
          result[2] += 0.7761194029850746;
          result[3] += 0.19402985074626866;
          result[4] += 0;
          result[5] += 0.022388059701492536;
        } else {
          result[0] += 0.012360939431396786;
          result[1] += 0;
          result[2] += 0.9480840543881335;
          result[3] += 0.037082818294190356;
          result[4] += 0;
          result[5] += 0.002472187886279357;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.036036036036036036;
          result[1] += 0.09684684684684684;
          result[2] += 0;
          result[3] += 0.0045045045045045045;
          result[4] += 0.8018018018018018;
          result[5] += 0.060810810810810814;
        } else {
          result[0] += 0.8575418994413407;
          result[1] += 0.013966480446927373;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0782122905027933;
          result[5] += 0.05027932960893855;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.004319654427645789;
          result[1] += 0.0021598272138228943;
          result[2] += 0.0010799136069114472;
          result[3] += 0.06587473002159827;
          result[4] += 0.08207343412526998;
          result[5] += 0.8444924406047516;
        } else {
          result[0] += 0.1133879781420765;
          result[1] += 0.04234972677595628;
          result[2] += 0.01912568306010929;
          result[3] += 0.366120218579235;
          result[4] += 0.12021857923497267;
          result[5] += 0.33879781420765026;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0.5555555555555556;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.002336448598130841;
          result[1] += 0.9976635514018691;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
          result[0] += 0.6;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
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
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          result[0] += 0.23076923076923078;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9743975903614458;
          result[1] += 0;
          result[2] += 0.010542168674698794;
          result[3] += 0.0015060240963855422;
          result[4] += 0.009036144578313253;
          result[5] += 0.004518072289156626;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.010989010989010992;
          result[1] += 0;
          result[2] += 0.5274725274725276;
          result[3] += 0.3626373626373627;
          result[4] += 0;
          result[5] += 0.09890109890109891;
        } else {
          result[0] += 0.7407407407407407;
          result[1] += 0;
          result[2] += 0.2037037037037037;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7411764705882353;
          result[3] += 0.1843137254901961;
          result[4] += 0;
          result[5] += 0.07450980392156863;
        } else {
          result[0] += 0.008086253369272238;
          result[1] += 0;
          result[2] += 0.9501347708894878;
          result[3] += 0.03638814016172507;
          result[4] += 0;
          result[5] += 0.005390835579514825;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          result[0] += 0.043343653250773995;
          result[1] += 0.07120743034055728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8452012383900929;
          result[5] += 0.04024767801857585;
        } else {
          result[0] += 0.6111111111111112;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18518518518518517;
          result[5] += 0.14814814814814814;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0549618320610687;
          result[4] += 0.016793893129770993;
          result[5] += 0.9282442748091603;
        } else {
          result[0] += 0.03230769230769231;
          result[1] += 0.003076923076923077;
          result[2] += 0.024615384615384615;
          result[3] += 0.36615384615384616;
          result[4] += 0.1123076923076923;
          result[5] += 0.46153846153846156;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.773972602739726;
          result[1] += 0.0502283105022831;
          result[2] += 0.00837138508371385;
          result[3] += 0.02054794520547945;
          result[4] += 0.0989345509893455;
          result[5] += 0.04794520547945205;
        } else {
          result[0] += 0.10150375939849625;
          result[1] += 0.030075187969924814;
          result[2] += 0.31578947368421056;
          result[3] += 0.33082706766917297;
          result[4] += 0.04135338345864662;
          result[5] += 0.1804511278195489;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0.07894736842105263;
          result[4] += 0.05263157894736842;
          result[5] += 0.6578947368421053;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21666666666666667;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.2833333333333333;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.4166666666666667;
          result[1] += 0.16666666666666666;
          result[2] += 0.20833333333333334;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.125;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.16;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00443951165371809;
          result[1] += 0;
          result[2] += 0.9278579356270809;
          result[3] += 0.061043285238623735;
          result[4] += 0;
          result[5] += 0.0066592674805771345;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.03694581280788178;
          result[1] += 0.1330049261083744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7906403940886699;
          result[5] += 0.03940886699507389;
        } else {
          result[0] += 0.8160173160173161;
          result[1] += 0.030303030303030307;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09740259740259742;
          result[5] += 0.05627705627705629;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.007882882882882882;
          result[1] += 0.0033783783783783786;
          result[2] += 0.0022522522522522522;
          result[3] += 0.06531531531531531;
          result[4] += 0.07207207207207207;
          result[5] += 0.8490990990990991;
        } else {
          result[0] += 0.1006637168141593;
          result[1] += 0.030973451327433628;
          result[2] += 0.06526548672566372;
          result[3] += 0.36504424778761063;
          result[4] += 0.1161504424778761;
          result[5] += 0.3219026548672566;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)107) ) ) {
          result[0] += 0.0022026431718061676;
          result[1] += 0.9955947136563876;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022026431718061676;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
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
          result[4] += 1;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0.0625;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.975736568457539;
          result[1] += 0;
          result[2] += 0.012131715771230503;
          result[3] += 0;
          result[4] += 0.012131715771230503;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.717391304347826;
          result[3] += 0.10869565217391304;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6989795918367347;
          result[3] += 0.25510204081632654;
          result[4] += 0;
          result[5] += 0.04591836734693878;
        } else {
          result[0] += 0.009592326139088728;
          result[1] += 0;
          result[2] += 0.9460431654676259;
          result[3] += 0.03836930455635491;
          result[4] += 0;
          result[5] += 0.005995203836930456;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.022058823529411766;
          result[1] += 0;
          result[2] += 0.003676470588235294;
          result[3] += 0.014705882352941176;
          result[4] += 0.8125;
          result[5] += 0.14705882352941177;
        } else {
          result[0] += 0.48175182481751827;
          result[1] += 0.0072992700729927005;
          result[2] += 0;
          result[3] += 0.014598540145985401;
          result[4] += 0.49635036496350365;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.004004004004004004;
          result[1] += 0.007007007007007007;
          result[2] += 0;
          result[3] += 0.062062062062062065;
          result[4] += 0.07107107107107107;
          result[5] += 0.8558558558558559;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011583011583011582;
          result[3] += 0.6254826254826255;
          result[4] += 0.003861003861003861;
          result[5] += 0.3590733590733591;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.20652173913043478;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7934782608695652;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9957627118644068;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00423728813559322;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.847008547008547;
          result[1] += 0.022222222222222223;
          result[2] += 0.01623931623931624;
          result[3] += 0.03076923076923077;
          result[4] += 0.06495726495726496;
          result[5] += 0.018803418803418803;
        } else {
          result[0] += 0.10610079575596817;
          result[1] += 0.010610079575596816;
          result[2] += 0.32891246684350134;
          result[3] += 0.26790450928381965;
          result[4] += 0.09549071618037135;
          result[5] += 0.1909814323607427;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09302325581395349;
          result[3] += 0.16279069767441862;
          result[4] += 0.03488372093023256;
          result[5] += 0.7093023255813954;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3928571428571429;
          result[3] += 0.5714285714285715;
          result[4] += 0;
          result[5] += 0.03571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.84;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.05185185185185185;
          result[1] += 0;
          result[2] += 0.737037037037037;
          result[3] += 0.17407407407407408;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.0032258064516129037;
          result[1] += 0;
          result[2] += 0.9790322580645162;
          result[3] += 0.01774193548387097;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.05128205128205128;
          result[5] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.007194244604316547;
          result[1] += 0.050359712230215826;
          result[2] += 0;
          result[3] += 0.007194244604316547;
          result[4] += 0.9064748201438849;
          result[5] += 0.02877697841726619;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.01608187134502924;
          result[2] += 0.005116959064327485;
          result[3] += 0.15058479532163743;
          result[4] += 0.0804093567251462;
          result[5] += 0.6922514619883041;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7906602254428341;
          result[1] += 0.04911433172302738;
          result[2] += 0.004025764895330112;
          result[3] += 0.02254428341384863;
          result[4] += 0.10225442834138486;
          result[5] += 0.03140096618357488;
        } else {
          result[0] += 0.1769722814498934;
          result[1] += 0.012793176972281451;
          result[2] += 0.24307036247334757;
          result[3] += 0.30490405117270797;
          result[4] += 0.051172707889125806;
          result[5] += 0.21108742004264394;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.00980392156862745;
          result[2] += 0.3137254901960784;
          result[3] += 0.38235294117647056;
          result[4] += 0.0196078431372549;
          result[5] += 0.27450980392156865;
        } else {
          result[0] += 0;
          result[1] += 0.20833333333333334;
          result[2] += 0.7916666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.024793388429752067;
          result[1] += 0;
          result[2] += 0.8140495867768595;
          result[3] += 0.14049586776859505;
          result[4] += 0;
          result[5] += 0.02066115702479339;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.001584786053882726;
          result[1] += 0;
          result[2] += 0.971473851030111;
          result[3] += 0.025356576862123614;
          result[4] += 0;
          result[5] += 0.001584786053882726;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.023622047244094488;
          result[1] += 0.003937007874015748;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.937007874015748;
          result[5] += 0.03543307086614173;
        } else {
          result[0] += 0.24;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0.09;
          result[4] += 0.31;
          result[5] += 0.32;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.007268951194184839;
          result[1] += 0.003115264797507788;
          result[2] += 0.0020768431983385254;
          result[3] += 0.06230529595015576;
          result[4] += 0.0612668743509865;
          result[5] += 0.8639667705088265;
        } else {
          result[0] += 0;
          result[1] += 0.005434782608695652;
          result[2] += 0.016304347826086956;
          result[3] += 0.532608695652174;
          result[4] += 0;
          result[5] += 0.44565217391304346;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7764020393299345;
          result[1] += 0.06117989803350328;
          result[2] += 0.007283321194464676;
          result[3] += 0.024763292061179897;
          result[4] += 0.11871813546977422;
          result[5] += 0.011653313911143482;
        } else {
          result[0] += 0.15418502202643172;
          result[1] += 0.015418502202643172;
          result[2] += 0.23127753303964757;
          result[3] += 0.2665198237885463;
          result[4] += 0.05066079295154185;
          result[5] += 0.28193832599118945;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9973753280839895;
          result[2] += 0.0026246719160104987;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.967741935483871;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.031746031746031744;
          result[2] += 0.09523809523809523;
          result[3] += 0.6666666666666666;
          result[4] += 0.015873015873015872;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0.125;
          result[1] += 0.0625;
          result[2] += 0.49107142857142855;
          result[3] += 0.125;
          result[4] += 0.026785714285714284;
          result[5] += 0.16964285714285715;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.7692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6744186046511628;
          result[3] += 0.2558139534883721;
          result[4] += 0;
          result[5] += 0.06976744186046512;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.2727272727272727;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0.0024067388688327317;
          result[1] += 0;
          result[2] += 0.9638989169675091;
          result[3] += 0.032490974729241874;
          result[4] += 0;
          result[5] += 0.0012033694344163659;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.013363028953229399;
          result[1] += 0.0467706013363029;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.910913140311804;
          result[5] += 0.028953229398663696;
        } else {
          result[0] += 0;
          result[1] += 0.5925925925925926;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14814814814814814;
          result[5] += 0.25925925925925924;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.26666666666666666;
          result[1] += 0.26666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02106430155210643;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06762749445676275;
          result[4] += 0.0565410199556541;
          result[5] += 0.8547671840354767;
        } else {
          result[0] += 0.10364145658263306;
          result[1] += 0;
          result[2] += 0.03081232492997199;
          result[3] += 0.4369747899159664;
          result[4] += 0.058823529411764705;
          result[5] += 0.3697478991596639;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          result[0] += 0.15021459227467812;
          result[1] += 0.10300429184549356;
          result[2] += 0.017167381974248927;
          result[3] += 0.3218884120171674;
          result[4] += 0.05150214592274678;
          result[5] += 0.3562231759656652;
        } else {
          result[0] += 0.7331378299120234;
          result[1] += 0.01319648093841642;
          result[2] += 0.08284457478005863;
          result[3] += 0.06378299120234603;
          result[4] += 0.07331378299120234;
          result[5] += 0.03372434017595307;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025;
          result[3] += 0.375;
          result[4] += 0.025;
          result[5] += 0.575;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.6029411764705882;
          result[4] += 0;
          result[5] += 0.14705882352941177;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0.017543859649122806;
          result[2] += 0.7017543859649122;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0.12280701754385964;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117.5) ) ) {
          result[0] += 0.04477611940298507;
          result[1] += 0.04477611940298507;
          result[2] += 0.6119402985074627;
          result[3] += 0.07462686567164178;
          result[4] += 0.029850746268656716;
          result[5] += 0.19402985074626866;
        } else {
          result[0] += 0.782608695652174;
          result[1] += 0;
          result[2] += 0.17391304347826086;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          result[0] += 0.01327433628318584;
          result[1] += 0;
          result[2] += 0.8407079646017699;
          result[3] += 0.12831858407079647;
          result[4] += 0;
          result[5] += 0.017699115044247787;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9813559322033898;
          result[3] += 0.01864406779661017;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          result[0] += 0.057971014492753624;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8188405797101449;
          result[5] += 0.12318840579710146;
        } else {
          result[0] += 0.6052631578947368;
          result[1] += 0.18421052631578946;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18421052631578946;
          result[5] += 0.02631578947368421;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.001141552511415525;
          result[2] += 0;
          result[3] += 0.04223744292237443;
          result[4] += 0.04452054794520548;
          result[5] += 0.9121004566210046;
        } else {
          result[0] += 0.003436426116838488;
          result[1] += 0.006872852233676976;
          result[2] += 0.010309278350515464;
          result[3] += 0.5257731958762887;
          result[4] += 0.020618556701030927;
          result[5] += 0.4329896907216495;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.37681159420289856;
          result[2] += 0;
          result[3] += 0.021739130434782608;
          result[4] += 0.572463768115942;
          result[5] += 0.028985507246376812;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.83446519524618;
          result[1] += 0.031409168081494056;
          result[2] += 0.0025466893039049238;
          result[3] += 0.028862478777589132;
          result[4] += 0.08149405772495756;
          result[5] += 0.021222410865874362;
        } else {
          result[0] += 0.20149253731343286;
          result[1] += 0.050373134328358216;
          result[2] += 0.24626865671641793;
          result[3] += 0.24253731343283585;
          result[4] += 0.06529850746268658;
          result[5] += 0.1940298507462687;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23333333333333334;
          result[3] += 0.5333333333333333;
          result[4] += 0;
          result[5] += 0.23333333333333334;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.46153846153846156;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5254237288135594;
          result[3] += 0.288135593220339;
          result[4] += 0;
          result[5] += 0.1864406779661017;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.026119402985074626;
          result[1] += 0;
          result[2] += 0.8134328358208955;
          result[3] += 0.14925373134328357;
          result[4] += 0;
          result[5] += 0.011194029850746268;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9816666666666667;
          result[3] += 0.018333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          result[0] += 0.02;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.968;
          result[5] += 0.012;
        } else {
          result[0] += 0.4876543209876543;
          result[1] += 0.006172839506172839;
          result[2] += 0;
          result[3] += 0.043209876543209874;
          result[4] += 0.17901234567901234;
          result[5] += 0.2839506172839506;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03945578231292517;
          result[4] += 0.04081632653061224;
          result[5] += 0.9197278911564626;
        } else {
          result[0] += 0;
          result[1] += 0.015306122448979591;
          result[2] += 0.0017006802721088435;
          result[3] += 0.40816326530612246;
          result[4] += 0.11734693877551021;
          result[5] += 0.4574829931972789;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.30952380952380953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6904761904761905;
          result[5] += 0;
        } else {
          result[0] += 0.0024271844660194173;
          result[1] += 0.9951456310679612;
          result[2] += 0;
          result[3] += 0.0024271844660194173;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8075990299110752;
          result[1] += 0.04365400161681488;
          result[2] += 0.007275666936135813;
          result[3] += 0.014551333872271626;
          result[4] += 0.10590137429264351;
          result[5] += 0.02101859337105902;
        } else {
          result[0] += 0.12742980561555076;
          result[1] += 0.032397408207343416;
          result[2] += 0.30669546436285094;
          result[3] += 0.31317494600431967;
          result[4] += 0.0734341252699784;
          result[5] += 0.1468682505399568;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0.16666666666666666;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.4666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0.47435897435897434;
          result[3] += 0.44871794871794873;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428572;
          result[3] += 0.07142857142857144;
          result[4] += 0;
          result[5] += 0.07142857142857144;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0027210884353741495;
          result[1] += 0;
          result[2] += 0.9482993197278912;
          result[3] += 0.04217687074829932;
          result[4] += 0;
          result[5] += 0.006802721088435374;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0.007462686567164179;
          result[1] += 0.01990049751243781;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8955223880597015;
          result[5] += 0.07711442786069651;
        } else {
          result[0] += 0;
          result[1] += 0.8974358974358975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10256410256410256;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.9928741092636579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007125890736342043;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.004137931034482759;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03310344827586207;
          result[4] += 0.03586206896551724;
          result[5] += 0.926896551724138;
        } else {
          result[0] += 0.038011695906432746;
          result[1] += 0.008771929824561403;
          result[2] += 0.08187134502923976;
          result[3] += 0.38011695906432746;
          result[4] += 0.06432748538011696;
          result[5] += 0.4269005847953216;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8168789808917197;
          result[1] += 0.01910828025477707;
          result[2] += 0.007165605095541401;
          result[3] += 0.03662420382165605;
          result[4] += 0.05732484076433121;
          result[5] += 0.06289808917197452;
        } else {
          result[0] += 0.10236220472440945;
          result[1] += 0.005905511811023622;
          result[2] += 0.20866141732283464;
          result[3] += 0.3248031496062992;
          result[4] += 0.0531496062992126;
          result[5] += 0.3051181102362205;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0.029411764705882353;
          result[4] += 0.17647058823529413;
          result[5] += 0.7647058823529411;
        } else {
          result[0] += 0.15625;
          result[1] += 0.125;
          result[2] += 0.28125;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.0297029702970297;
          result[1] += 0;
          result[2] += 0.32673267326732675;
          result[3] += 0.6138613861386139;
          result[4] += 0.009900990099009901;
          result[5] += 0.019801980198019802;
        } else {
          result[0] += 0.3623188405797102;
          result[1] += 0.014492753623188408;
          result[2] += 0.5942028985507247;
          result[3] += 0.014492753623188408;
          result[4] += 0;
          result[5] += 0.014492753623188408;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.7338709677419355;
          result[3] += 0.1693548387096774;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0.17647058823529413;
          result[1] += 0;
          result[2] += 0.6470588235294118;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0.002785515320334262;
          result[1] += 0;
          result[2] += 0.9554317548746518;
          result[3] += 0.0403899721448468;
          result[4] += 0;
          result[5] += 0.001392757660167131;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.014150943396226415;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9433962264150944;
          result[5] += 0.04245283018867924;
        } else {
          result[0] += 0;
          result[1] += 0.825;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0.025;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013605442176870747;
          result[3] += 0.02857142857142857;
          result[4] += 0.04625850340136054;
          result[5] += 0.9238095238095239;
        } else {
          result[0] += 0.11185682326621924;
          result[1] += 0.008948545861297539;
          result[2] += 0;
          result[3] += 0.37360178970917224;
          result[4] += 0.07158836689038031;
          result[5] += 0.43400447427293065;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
          result[0] += 0.014705882352941176;
          result[1] += 0.27205882352941174;
          result[2] += 0.014705882352941176;
          result[3] += 0.014705882352941176;
          result[4] += 0.6617647058823529;
          result[5] += 0.022058823529411766;
        } else {
          result[0] += 0;
          result[1] += 0.9900744416873449;
          result[2] += 0.0024813895781637717;
          result[3] += 0;
          result[4] += 0.007444168734491315;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.769110764430577;
          result[1] += 0.023400936037441495;
          result[2] += 0.015600624024960996;
          result[3] += 0.02808112324492979;
          result[4] += 0.10296411856474257;
          result[5] += 0.06084243369734788;
        } else {
          result[0] += 0.20945945945945946;
          result[1] += 0.033783783783783786;
          result[2] += 0.20270270270270271;
          result[3] += 0.27364864864864863;
          result[4] += 0.04391891891891892;
          result[5] += 0.23648648648648649;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016129032258064516;
          result[3] += 0.03225806451612903;
          result[4] += 0.11290322580645161;
          result[5] += 0.8387096774193549;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13970588235294118;
          result[3] += 0.6691176470588235;
          result[4] += 0;
          result[5] += 0.19117647058823528;
        } else {
          result[0] += 0.01149425287356322;
          result[1] += 0;
          result[2] += 0.574712643678161;
          result[3] += 0.2528735632183909;
          result[4] += 0.04597701149425288;
          result[5] += 0.1149425287356322;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.11538461538461539;
          result[1] += 0.19230769230769232;
          result[2] += 0.5769230769230769;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.043478260869565216;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          result[0] += 0.07142857142857144;
          result[1] += 0.28571428571428575;
          result[2] += 0.14285714285714288;
          result[3] += 0.28571428571428575;
          result[4] += 0;
          result[5] += 0.2142857142857143;
        } else {
          result[0] += 0.009771986970684038;
          result[1] += 0.002171552660152009;
          result[2] += 0.9207383279044516;
          result[3] += 0.05537459283387622;
          result[4] += 0;
          result[5] += 0.011943539630836048;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006060606060606061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9696969696969697;
          result[5] += 0.024242424242424242;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.9976851851851852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023148148148148147;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.020348837209302327;
          result[4] += 0.015988372093023256;
          result[5] += 0.9636627906976745;
        } else {
          result[0] += 0.06818181818181818;
          result[1] += 0.033216783216783216;
          result[2] += 0.04020979020979021;
          result[3] += 0.32167832167832167;
          result[4] += 0.07867132867132867;
          result[5] += 0.458041958041958;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.021756021756021756;
          result[2] += 0.001554001554001554;
          result[3] += 0.04428904428904429;
          result[4] += 0.10334110334110334;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0.17777777777777778;
          result[1] += 0.0345679012345679;
          result[2] += 0.2271604938271605;
          result[3] += 0.2839506172839506;
          result[4] += 0.05185185185185185;
          result[5] += 0.22469135802469137;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.33884297520661155;
          result[3] += 0.5289256198347108;
          result[4] += 0;
          result[5] += 0.1322314049586777;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0.027777777777777776;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.016877637130801686;
          result[1] += 0;
          result[2] += 0.8185654008438819;
          result[3] += 0.1350210970464135;
          result[4] += 0.004219409282700422;
          result[5] += 0.02531645569620253;
        } else {
          result[0] += 0.004746835443037975;
          result[1] += 0;
          result[2] += 0.9604430379746836;
          result[3] += 0.03481012658227848;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          result[0] += 0.007518796992481203;
          result[1] += 0.011278195488721804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9661654135338346;
          result[5] += 0.015037593984962405;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0.018518518518518517;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04139433551198257;
          result[4] += 0.06100217864923747;
          result[5] += 0.8790849673202614;
        } else {
          result[0] += 0.06611570247933884;
          result[1] += 0.013774104683195593;
          result[2] += 0.01652892561983471;
          result[3] += 0.4820936639118457;
          result[4] += 0.06060606060606061;
          result[5] += 0.3608815426997245;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7397881996974282;
          result[1] += 0.04387291981845688;
          result[2] += 0.0030257186081694403;
          result[3] += 0.01739788199697428;
          result[4] += 0.1573373676248109;
          result[5] += 0.038577912254160365;
        } else {
          result[0] += 0.16274089935760172;
          result[1] += 0.057815845824411134;
          result[2] += 0.2334047109207709;
          result[3] += 0.27194860813704497;
          result[4] += 0.032119914346895075;
          result[5] += 0.24197002141327623;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0;
          result[4] += 0.11363636363636363;
          result[5] += 0.7727272727272727;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1590909090909091;
          result[3] += 0.6136363636363636;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6346153846153846;
          result[3] += 0.28846153846153844;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.06818181818181818;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.6666666666666667;
          result[1] += 0.16666666666666669;
          result[2] += 0.16666666666666669;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.35;
          result[4] += 0;
          result[5] += 0.05;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9662775616083009;
          result[3] += 0.0324254215304799;
          result[4] += 0;
          result[5] += 0.0012970168612191958;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0.007751937984496124;
          result[1] += 0.01937984496124031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9186046511627907;
          result[5] += 0.05426356589147287;
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
          result[0] += 0.001287001287001287;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.032175032175032175;
          result[4] += 0.028314028314028315;
          result[5] += 0.9382239382239382;
        } else {
          result[0] += 0.10271317829457365;
          result[1] += 0.001937984496124031;
          result[2] += 0.03488372093023256;
          result[3] += 0.34108527131782945;
          result[4] += 0.1065891472868217;
          result[5] += 0.4127906976744186;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7268754552075747;
          result[1] += 0.07064821558630735;
          result[2] += 0.0065549890750182084;
          result[3] += 0.03277494537509104;
          result[4] += 0.11070648215586307;
          result[5] += 0.05243991260014567;
        } else {
          result[0] += 0.11827956989247314;
          result[1] += 0.05107526881720431;
          result[2] += 0.29569892473118287;
          result[3] += 0.33870967741935487;
          result[4] += 0.037634408602150546;
          result[5] += 0.15860215053763443;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          result[0] += 0.06896551724137931;
          result[1] += 0.6551724137931034;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.13793103448275862;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0.9944289693593314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005571030640668524;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03773584905660377;
          result[3] += 0;
          result[4] += 0.07547169811320754;
          result[5] += 0.8867924528301887;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.057692307692307696;
          result[2] += 0.3269230769230769;
          result[3] += 0.41346153846153844;
          result[4] += 0.04807692307692308;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0.3670886075949367;
          result[1] += 0.02531645569620253;
          result[2] += 0.569620253164557;
          result[3] += 0.012658227848101266;
          result[4] += 0;
          result[5] += 0.02531645569620253;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4636363636363637;
          result[3] += 0.4363636363636364;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9487179487179487;
          result[3] += 0.05128205128205128;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8774509803921569;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.004901960784313725;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9807692307692307;
          result[3] += 0.019230769230769232;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.003875968992248062;
          result[2] += 0;
          result[3] += 0.01937984496124031;
          result[4] += 0.9263565891472868;
          result[5] += 0.050387596899224806;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03610832497492478;
          result[1] += 0.0020060180541624875;
          result[2] += 0;
          result[3] += 0.04012036108324975;
          result[4] += 0.08124373119358075;
          result[5] += 0.8405215646940822;
        } else {
          result[0] += 0.0896551724137931;
          result[1] += 0.0367816091954023;
          result[2] += 0.022988505747126436;
          result[3] += 0.49195402298850577;
          result[4] += 0.06666666666666667;
          result[5] += 0.29195402298850576;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.14035087719298245;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8070175438596491;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0;
          result[1] += 0.9931818181818182;
          result[2] += 0;
          result[3] += 0.006818181818181818;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8060556464811782;
          result[1] += 0.04418985270049099;
          result[2] += 0.011456628477905071;
          result[3] += 0.021276595744680847;
          result[4] += 0.07364975450081832;
          result[5] += 0.04337152209492634;
        } else {
          result[0] += 0.1457142857142857;
          result[1] += 0.008571428571428572;
          result[2] += 0.25142857142857145;
          result[3] += 0.29428571428571426;
          result[4] += 0.06;
          result[5] += 0.24;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09836065573770492;
          result[3] += 0.7868852459016393;
          result[4] += 0;
          result[5] += 0.11475409836065574;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.07317073170731707;
          result[2] += 0.3170731707317073;
          result[3] += 0.4146341463414634;
          result[4] += 0.04878048780487805;
          result[5] += 0.14634146341463414;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8095238095238095;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.88;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6296296296296297;
          result[3] += 0.037037037037037035;
          result[4] += 0.037037037037037035;
          result[5] += 0.2962962962962963;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          result[0] += 0.004273504273504274;
          result[1] += 0;
          result[2] += 0.8290598290598291;
          result[3] += 0.1623931623931624;
          result[4] += 0;
          result[5] += 0.004273504273504274;
        } else {
          result[0] += 0.004709576138147566;
          result[1] += 0;
          result[2] += 0.9701726844583988;
          result[3] += 0.02197802197802198;
          result[4] += 0;
          result[5] += 0.0031397174254317113;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9178743961352657;
          result[5] += 0.0821256038647343;
        } else {
          result[0] += 0.36065573770491804;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00819672131147541;
          result[4] += 0.4180327868852459;
          result[5] += 0.21311475409836064;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0231990231990232;
          result[2] += 0.002442002442002442;
          result[3] += 0.03540903540903541;
          result[4] += 0.057387057387057384;
          result[5] += 0.8815628815628815;
        } else {
          result[0] += 0.0038314176245210726;
          result[1] += 0.0038314176245210726;
          result[2] += 0.0038314176245210726;
          result[3] += 0.5823754789272031;
          result[4] += 0.0038314176245210726;
          result[5] += 0.40229885057471265;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.974477958236659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.025522041763341066;
          result[5] += 0;
        } else {
          result[0] += 0.009174311926605505;
          result[1] += 0.1926605504587156;
          result[2] += 0.027522935779816515;
          result[3] += 0;
          result[4] += 0.7522935779816514;
          result[5] += 0.01834862385321101;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8069120961682945;
          result[1] += 0.027047332832456798;
          result[2] += 0.009015777610818933;
          result[3] += 0.027047332832456798;
          result[4] += 0.07362885048835462;
          result[5] += 0.056348610067618335;
        } else {
          result[0] += 0.18545454545454546;
          result[1] += 0.014545454545454545;
          result[2] += 0.22181818181818183;
          result[3] += 0.29454545454545455;
          result[4] += 0.05090909090909091;
          result[5] += 0.23272727272727273;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
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
          result[2] += 0.07258064516129033;
          result[3] += 0.2903225806451613;
          result[4] += 0.008064516129032258;
          result[5] += 0.6290322580645161;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.5348837209302325;
          result[1] += 0.09302325581395349;
          result[2] += 0.06976744186046512;
          result[3] += 0.13953488372093023;
          result[4] += 0.046511627906976744;
          result[5] += 0.11627906976744186;
        } else {
          result[0] += 0.08854166666666667;
          result[1] += 0;
          result[2] += 0.5885416666666666;
          result[3] += 0.25;
          result[4] += 0.005208333333333333;
          result[5] += 0.06770833333333333;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          result[0] += 0.007352941176470588;
          result[1] += 0;
          result[2] += 0.8345588235294118;
          result[3] += 0.14338235294117646;
          result[4] += 0;
          result[5] += 0.014705882352941176;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9805194805194806;
          result[3] += 0.01948051948051948;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.007434944237918215;
          result[1] += 0.10408921933085502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8810408921933085;
          result[5] += 0.007434944237918215;
        } else {
          result[0] += 0.5;
          result[1] += 0.022058823529411766;
          result[2] += 0;
          result[3] += 0.08088235294117647;
          result[4] += 0.18382352941176472;
          result[5] += 0.21323529411764705;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.005780346820809248;
          result[1] += 0.002890173410404624;
          result[2] += 0.002890173410404624;
          result[3] += 0.07514450867052024;
          result[4] += 0.07996146435452794;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.004149377593360996;
          result[1] += 0;
          result[2] += 0.02074688796680498;
          result[3] += 0.6141078838174274;
          result[4] += 0;
          result[5] += 0.36099585062240663;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0025000000000000005;
          result[1] += 0.9775000000000001;
          result[2] += 0;
          result[3] += 0.0025000000000000005;
          result[4] += 0.017500000000000005;
          result[5] += 0;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7840616966580977;
          result[1] += 0.05312767780634105;
          result[2] += 0.007712082262210797;
          result[3] += 0.021422450728363324;
          result[4] += 0.10796915167095116;
          result[5] += 0.02570694087403599;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0.018306636155606407;
          result[2] += 0.18764302059496568;
          result[3] += 0.2402745995423341;
          result[4] += 0.05034324942791762;
          result[5] += 0.2929061784897025;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03703703703703704;
          result[3] += 0.7962962962962964;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45;
          result[3] += 0.2;
          result[4] += 0.05;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.6590909090909091;
          result[3] += 0.22727272727272727;
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5254237288135594;
          result[3] += 0.3559322033898305;
          result[4] += 0;
          result[5] += 0.11864406779661017;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8997429305912596;
          result[3] += 0.09768637532133675;
          result[4] += 0;
          result[5] += 0.002570694087403599;
        } else {
          result[0] += 0.025048169556840076;
          result[1] += 0;
          result[2] += 0.9479768786127167;
          result[3] += 0.02119460500963391;
          result[4] += 0;
          result[5] += 0.005780346820809248;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
          result[0] += 0.0038461538461538464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9692307692307692;
          result[5] += 0.026923076923076925;
        } else {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0.35294117647058826;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03881511746680286;
          result[1] += 0.0010214504596527069;
          result[2] += 0.0010214504596527069;
          result[3] += 0.03983656792645557;
          result[4] += 0.06230847803881512;
          result[5] += 0.856996935648621;
        } else {
          result[0] += 0.07349665924276169;
          result[1] += 0.013363028953229399;
          result[2] += 0.004454342984409799;
          result[3] += 0.45879732739420936;
          result[4] += 0.04899777282850779;
          result[5] += 0.40089086859688194;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9837587006960556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016241299303944315;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)110.5) ) ) {
          result[0] += 0.5284280936454849;
          result[1] += 0.0379041248606466;
          result[2] += 0.10813823857302118;
          result[3] += 0.11371237458193979;
          result[4] += 0.10813823857302118;
          result[5] += 0.10367892976588629;
        } else {
          result[0] += 0.9332220367278798;
          result[1] += 0;
          result[2] += 0.0333889816360601;
          result[3] += 0;
          result[4] += 0.03005008347245409;
          result[5] += 0.00333889816360601;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0.015873015873015872;
          result[2] += 0.12698412698412698;
          result[3] += 0.6031746031746031;
          result[4] += 0.015873015873015872;
          result[5] += 0.23809523809523808;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5352112676056338;
          result[3] += 0.4507042253521127;
          result[4] += 0;
          result[5] += 0.014084507042253521;
        } else {
          result[0] += 0.0784313725490196;
          result[1] += 0;
          result[2] += 0.9019607843137255;
          result[3] += 0.0196078431372549;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)118.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004469273743016759;
          result[1] += 0;
          result[2] += 0.9217877094972067;
          result[3] += 0.05810055865921788;
          result[4] += 0;
          result[5] += 0.01564245810055866;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.012345679012345678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9794238683127572;
          result[5] += 0.00823045267489712;
        } else {
          result[0] += 0.6328125;
          result[1] += 0.015625;
          result[2] += 0;
          result[3] += 0.0546875;
          result[4] += 0.15625;
          result[5] += 0.140625;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0.017543859649122806;
          result[1] += 0.03508771929824561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7192982456140351;
          result[5] += 0.22807017543859648;
        } else {
          result[0] += 0.00398406374501992;
          result[1] += 0.00298804780876494;
          result[2] += 0;
          result[3] += 0.0647410358565737;
          result[4] += 0.043824701195219126;
          result[5] += 0.8844621513944223;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.1590909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8409090909090909;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.980561555075594;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019438444924406047;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.1962457337883959;
          result[1] += 0.013651877133105802;
          result[2] += 0.07337883959044368;
          result[3] += 0.3873720136518771;
          result[4] += 0.06484641638225255;
          result[5] += 0.2645051194539249;
        } else {
          result[0] += 0.7340604026845637;
          result[1] += 0.03523489932885906;
          result[2] += 0.08305369127516779;
          result[3] += 0.044463087248322146;
          result[4] += 0.05956375838926174;
          result[5] += 0.0436241610738255;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13333333333333333;
          result[4] += 0.1;
          result[5] += 0.6;
        } else {
          result[0] += 0.007518796992481203;
          result[1] += 0.007518796992481203;
          result[2] += 0.3233082706766917;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.09022556390977443;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.31578947368421056;
          result[1] += 0.10526315789473685;
          result[2] += 0.3508771929824562;
          result[3] += 0.052631578947368425;
          result[4] += 0;
          result[5] += 0.1754385964912281;
        } else {
          result[0] += 0.024691358024691357;
          result[1] += 0;
          result[2] += 0.7901234567901234;
          result[3] += 0.1440329218106996;
          result[4] += 0;
          result[5] += 0.0411522633744856;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.91005291005291;
          result[3] += 0.08994708994708994;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9933920704845814;
          result[3] += 0.006607929515418502;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9806201550387597;
          result[5] += 0.01937984496124031;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0411946446961895;
          result[1] += 0.003089598352214212;
          result[2] += 0;
          result[3] += 0.037075180226570546;
          result[4] += 0.06694129763130793;
          result[5] += 0.8516992790937178;
        } else {
          result[0] += 0.07822410147991543;
          result[1] += 0.019027484143763214;
          result[2] += 0.004228329809725159;
          result[3] += 0.4312896405919662;
          result[4] += 0.042283298097251586;
          result[5] += 0.4249471458773784;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0.9952718676122931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004728132387706856;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7912541254125414;
          result[1] += 0.04702970297029704;
          result[2] += 0.006600660066006602;
          result[3] += 0.02062706270627063;
          result[4] += 0.117986798679868;
          result[5] += 0.016501650165016504;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.046875;
          result[2] += 0.2864583333333333;
          result[3] += 0.234375;
          result[4] += 0.09895833333333333;
          result[5] += 0.16666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94) ) ) {
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
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23333333333333334;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6486486486486487;
          result[3] += 0.10810810810810811;
          result[4] += 0;
          result[5] += 0.24324324324324326;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0.32432432432432434;
          result[3] += 0.40540540540540543;
          result[4] += 0;
          result[5] += 0.24324324324324326;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8936170212765957;
          result[3] += 0.10638297872340426;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0.4;
        } else {
          result[0] += 0.007891770011273957;
          result[1] += 0.0011273957158962795;
          result[2] += 0.939120631341601;
          result[3] += 0.04735062006764374;
          result[4] += 0;
          result[5] += 0.004509582863585118;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005076142131979695;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9644670050761421;
          result[5] += 0.030456852791878174;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.17073170731707318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6585365853658537;
          result[5] += 0.17073170731707318;
        } else {
          result[0] += 0.0121580547112462;
          result[1] += 0;
          result[2] += 0.002026342451874367;
          result[3] += 0.07193515704154002;
          result[4] += 0.02634245187436677;
          result[5] += 0.8875379939209727;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          result[0] += 0.28197381671701915;
          result[1] += 0.04632426988922457;
          result[2] += 0.015105740181268883;
          result[3] += 0.2326283987915408;
          result[4] += 0.16414904330312186;
          result[5] += 0.2598187311178248;
        } else {
          result[0] += 0.7653061224489796;
          result[1] += 0.06586270871985157;
          result[2] += 0.05102040816326531;
          result[3] += 0.023191094619666047;
          result[4] += 0.0862708719851577;
          result[5] += 0.008348794063079777;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61) ) ) {
          result[0] += 0.0072289156626506035;
          result[1] += 0.9807228915662651;
          result[2] += 0.002409638554216868;
          result[3] += 0.002409638554216868;
          result[4] += 0.0072289156626506035;
          result[5] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2075471698113208;
          result[3] += 0.6320754716981133;
          result[4] += 0;
          result[5] += 0.16037735849056606;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8167330677290837;
          result[3] += 0.14741035856573706;
          result[4] += 0;
          result[5] += 0.035856573705179286;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4444444444444444;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0.007352941176470588;
          result[1] += 0;
          result[2] += 0.9691176470588235;
          result[3] += 0.023529411764705882;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.020114942528735632;
          result[1] += 0.09770114942528736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8275862068965517;
          result[5] += 0.05459770114942529;
        } else {
          result[0] += 0.7683982683982684;
          result[1] += 0.017316017316017316;
          result[2] += 0;
          result[3] += 0.015151515151515152;
          result[4] += 0.09740259740259741;
          result[5] += 0.10173160173160173;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004207573632538569;
          result[3] += 0.047685834502103785;
          result[4] += 0.0364656381486676;
          result[5] += 0.9116409537166901;
        } else {
          result[0] += 0.10103092783505155;
          result[1] += 0.04329896907216495;
          result[2] += 0.018556701030927835;
          result[3] += 0.30412371134020616;
          result[4] += 0.13711340206185568;
          result[5] += 0.3958762886597938;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.6875;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.9627976190476191;
          result[1] += 0;
          result[2] += 0.01636904761904762;
          result[3] += 0.00744047619047619;
          result[4] += 0.011904761904761904;
          result[5] += 0.001488095238095238;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7391304347826086;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0.13043478260869565;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35374149659863946;
          result[3] += 0.46258503401360546;
          result[4] += 0;
          result[5] += 0.1836734693877551;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0.10666666666666667;
          result[1] += 0;
          result[2] += 0.7266666666666667;
          result[3] += 0.10666666666666667;
          result[4] += 0.013333333333333334;
          result[5] += 0.04666666666666667;
        } else {
          result[0] += 0.007272727272727273;
          result[1] += 0;
          result[2] += 0.9442424242424242;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.008484848484848486;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95.5) ) ) {
          result[0] += 0.0038314176245210726;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0038314176245210726;
          result[4] += 0.9501915708812261;
          result[5] += 0.0421455938697318;
        } else {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.038314176245210725;
          result[1] += 0.0019157088122605363;
          result[2] += 0;
          result[3] += 0.03065134099616858;
          result[4] += 0.06609195402298851;
          result[5] += 0.8630268199233716;
        } else {
          result[0] += 0.033003300330033;
          result[1] += 0.009900990099009901;
          result[2] += 0.006600660066006601;
          result[3] += 0.5511551155115512;
          result[4] += 0.0297029702970297;
          result[5] += 0.3696369636963696;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7330739299610896;
          result[1] += 0.07315175097276266;
          result[2] += 0.007782101167315176;
          result[3] += 0.027237354085603117;
          result[4] += 0.13463035019455255;
          result[5] += 0.024124513618677047;
        } else {
          result[0] += 0.18695652173913044;
          result[1] += 0.041304347826086954;
          result[2] += 0.21956521739130436;
          result[3] += 0.2717391304347826;
          result[4] += 0.03260869565217391;
          result[5] += 0.24782608695652175;
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
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0.18518518518518517;
          result[4] += 0.07407407407407407;
          result[5] += 0.7037037037037037;
        } else {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0.2727272727272727;
          result[3] += 0.4675324675324675;
          result[4] += 0;
          result[5] += 0.16883116883116883;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0.5121951219512195;
          result[3] += 0.43902439024390244;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
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
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0.04477611940298507;
          result[1] += 0;
          result[2] += 0.7313432835820896;
          result[3] += 0.1791044776119403;
          result[4] += 0;
          result[5] += 0.04477611940298507;
        } else {
          result[0] += 0.0013037809647979141;
          result[1] += 0;
          result[2] += 0.9517601043024773;
          result[3] += 0.04041720990873534;
          result[4] += 0;
          result[5] += 0.006518904823989571;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0.025974025974025976;
          result[1] += 0.004329004329004329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9393939393939394;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.46808510638297873;
          result[1] += 0;
          result[2] += 0.0070921985815602835;
          result[3] += 0.028368794326241134;
          result[4] += 0.3191489361702128;
          result[5] += 0.1773049645390071;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0027548209366391185;
          result[3] += 0.03443526170798898;
          result[4] += 0.027548209366391185;
          result[5] += 0.9352617079889807;
        } else {
          result[0] += 0.0017543859649122807;
          result[1] += 0.010526315789473684;
          result[2] += 0.007017543859649123;
          result[3] += 0.3719298245614035;
          result[4] += 0.09649122807017543;
          result[5] += 0.512280701754386;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9914893617021276;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00851063829787234;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.822723609991942;
          result[1] += 0.03706688154713941;
          result[2] += 0.013698630136986302;
          result[3] += 0.021756647864625306;
          result[4] += 0.08944399677679292;
          result[5] += 0.015310233682514104;
        } else {
          result[0] += 0.14450867052023122;
          result[1] += 0.028901734104046242;
          result[2] += 0.23121387283236994;
          result[3] += 0.26011560693641617;
          result[4] += 0.11271676300578035;
          result[5] += 0.22254335260115607;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18461538461538463;
          result[3] += 0.6923076923076923;
          result[4] += 0.015384615384615385;
          result[5] += 0.1076923076923077;
        } else {
          result[0] += 0.05357142857142857;
          result[1] += 0;
          result[2] += 0.4642857142857143;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.19642857142857142;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5294117647058824;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9459459459459459;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0.3;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.1388888888888889;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.008097165991902834;
          result[1] += 0;
          result[2] += 0.9622132253711201;
          result[3] += 0.02699055330634278;
          result[4] += 0;
          result[5] += 0.002699055330634278;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.016216216216216217;
          result[1] += 0.010810810810810811;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9405405405405406;
          result[5] += 0.032432432432432434;
        } else {
          result[0] += 0.3064516129032258;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0.31451612903225806;
          result[5] += 0.28225806451612906;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0010449320794148381;
          result[1] += 0.0010449320794148381;
          result[2] += 0;
          result[3] += 0.050156739811912224;
          result[4] += 0.06374085684430512;
          result[5] += 0.8840125391849529;
        } else {
          result[0] += 0.02;
          result[1] += 0.016;
          result[2] += 0;
          result[3] += 0.568;
          result[4] += 0.004;
          result[5] += 0.392;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.1724137931034483;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8275862068965517;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9934782608695653;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006521739130434782;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.204;
          result[1] += 0.132;
          result[2] += 0.024;
          result[3] += 0.036;
          result[4] += 0.544;
          result[5] += 0.06;
        } else {
          result[0] += 0.7469135802469136;
          result[1] += 0.014660493827160493;
          result[2] += 0.05787037037037037;
          result[3] += 0.0779320987654321;
          result[4] += 0.04552469135802469;
          result[5] += 0.05709876543209876;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.06593406593406594;
          result[2] += 0;
          result[3] += 0.06593406593406594;
          result[4] += 0.24175824175824176;
          result[5] += 0.6263736263736264;
        } else {
          result[0] += 0.0049504950495049506;
          result[1] += 0;
          result[2] += 0.32673267326732675;
          result[3] += 0.5148514851485149;
          result[4] += 0;
          result[5] += 0.15346534653465346;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112.5) ) ) {
          result[0] += 0.203125;
          result[1] += 0.078125;
          result[2] += 0.703125;
          result[3] += 0.015625;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8292682926829268;
          result[1] += 0;
          result[2] += 0.14634146341463414;
          result[3] += 0;
          result[4] += 0.024390243902439025;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7362637362637363;
          result[3] += 0.25274725274725274;
          result[4] += 0;
          result[5] += 0.01098901098901099;
        } else {
          result[0] += 0.001336898395721925;
          result[1] += 0;
          result[2] += 0.9545454545454546;
          result[3] += 0.03877005347593583;
          result[4] += 0;
          result[5] += 0.0053475935828877;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.0034965034965034965;
          result[1] += 0.08391608391608392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8881118881118881;
          result[5] += 0.024475524475524476;
        } else {
          result[0] += 0.3804347826086957;
          result[1] += 0.043478260869565216;
          result[2] += 0;
          result[3] += 0.08695652173913043;
          result[4] += 0.18478260869565216;
          result[5] += 0.30434782608695654;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.008385744234800839;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07023060796645703;
          result[4] += 0.07861635220125786;
          result[5] += 0.8427672955974843;
        } else {
          result[0] += 0.004651162790697674;
          result[1] += 0;
          result[2] += 0.037209302325581395;
          result[3] += 0.586046511627907;
          result[4] += 0.004651162790697674;
          result[5] += 0.3674418604651163;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.006578947368421052;
          result[1] += 0.9583333333333334;
          result[2] += 0;
          result[3] += 0.0021929824561403508;
          result[4] += 0.03289473684210526;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7559241706161137;
          result[1] += 0.03475513428120063;
          result[2] += 0.0071090047393364926;
          result[3] += 0.03712480252764613;
          result[4] += 0.10268562401263823;
          result[5] += 0.06240126382306477;
        } else {
          result[0] += 0.21804511278195488;
          result[1] += 0.010025062656641603;
          result[2] += 0.22055137844611528;
          result[3] += 0.24310776942355888;
          result[4] += 0.05764411027568922;
          result[5] += 0.2506265664160401;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2608695652173913;
          result[4] += 0.043478260869565216;
          result[5] += 0.6956521739130435;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14814814814814814;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.18518518518518517;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.1527777777777778;
          result[4] += 0;
          result[5] += 0.09722222222222222;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6629213483146067;
          result[3] += 0.25842696629213485;
          result[4] += 0;
          result[5] += 0.07865168539325842;
        } else {
          result[0] += 0.057692307692307696;
          result[1] += 0;
          result[2] += 0.9423076923076923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9422382671480145;
          result[3] += 0.05054151624548737;
          result[4] += 0;
          result[5] += 0.007220216606498196;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0.0032679738562091504;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9281045751633987;
          result[5] += 0.06862745098039216;
        } else {
          result[0] += 0.2765957446808511;
          result[1] += 0.0425531914893617;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6808510638297872;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025333333333333333;
          result[4] += 0.018666666666666668;
          result[5] += 0.956;
        } else {
          result[0] += 0.08006279434850863;
          result[1] += 0.004709576138147566;
          result[2] += 0.007849293563579277;
          result[3] += 0.3877551020408163;
          result[4] += 0.07221350078492936;
          result[5] += 0.4474097331240188;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.002320185614849188;
          result[1] += 0.9976798143851509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7778662420382166;
          result[1] += 0.05254777070063695;
          result[2] += 0.011942675159235671;
          result[3] += 0.027866242038216565;
          result[4] += 0.11385350318471339;
          result[5] += 0.015923566878980895;
        } else {
          result[0] += 0.14506172839506173;
          result[1] += 0.018518518518518517;
          result[2] += 0.2037037037037037;
          result[3] += 0.2808641975308642;
          result[4] += 0.08641975308641975;
          result[5] += 0.2654320987654321;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13698630136986303;
          result[3] += 0.7123287671232877;
          result[4] += 0.013698630136986302;
          result[5] += 0.13698630136986303;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.20833333333333334;
          result[4] += 0;
          result[5] += 0.25;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.618421052631579;
          result[3] += 0.32894736842105265;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.04081632653061224;
          result[1] += 0;
          result[2] += 0.8503401360544217;
          result[3] += 0.10204081632653061;
          result[4] += 0;
          result[5] += 0.006802721088435374;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.8406593406593407;
          result[3] += 0.08241758241758242;
          result[4] += 0;
          result[5] += 0.005494505494505495;
        } else {
          result[0] += 0.0037243947858473;
          result[1] += 0;
          result[2] += 0.9795158286778398;
          result[3] += 0.0148975791433892;
          result[4] += 0;
          result[5] += 0.00186219739292365;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.0040650406504065045;
          result[1] += 0.028455284552845527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.943089430894309;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0.3888888888888889;
          result[1] += 0.018518518518518517;
          result[2] += 0;
          result[3] += 0.046296296296296294;
          result[4] += 0.18518518518518517;
          result[5] += 0.3611111111111111;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0026455026455026454;
          result[1] += 0;
          result[2] += 0.0013227513227513227;
          result[3] += 0.03439153439153439;
          result[4] += 0.06084656084656084;
          result[5] += 0.9007936507936508;
        } else {
          result[0] += 0.012224938875305624;
          result[1] += 0.009779951100244499;
          result[2] += 0.009779951100244499;
          result[3] += 0.46943765281173594;
          result[4] += 0.044009779951100246;
          result[5] += 0.4547677261613692;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          result[0] += 0.06302521008403361;
          result[1] += 0.3403361344537815;
          result[2] += 0.008403361344537815;
          result[3] += 0.05042016806722689;
          result[4] += 0.5210084033613446;
          result[5] += 0.01680672268907563;
        } else {
          result[0] += 0.6752411575562701;
          result[1] += 0.014790996784565916;
          result[2] += 0.07781350482315112;
          result[3] += 0.08488745980707396;
          result[4] += 0.06366559485530547;
          result[5] += 0.08360128617363344;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95) ) ) {
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.04;
          result[4] += 0.04;
          result[5] += 0.84;
        } else {
          result[0] += 0;
          result[1] += 0.01;
          result[2] += 0.21;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.18;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0.8163265306122449;
          result[3] += 0.16326530612244897;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.22580645161290322;
          result[3] += 0.22580645161290322;
          result[4] += 0.16129032258064516;
          result[5] += 0.3548387096774194;
        } else {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0.8235294117647058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14705882352941177;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.2857142857142857;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0023501762632197414;
          result[1] += 0;
          result[2] += 0.9506462984723855;
          result[3] += 0.045828437132784956;
          result[4] += 0;
          result[5] += 0.0011750881316098707;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957446808510638;
          result[5] += 0.00425531914893617;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0.5333333333333333;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014184397163120568;
          result[3] += 0.02553191489361702;
          result[4] += 0.04113475177304964;
          result[5] += 0.9319148936170213;
        } else {
          result[0] += 0.11695906432748537;
          result[1] += 0.05263157894736842;
          result[2] += 0.03654970760233918;
          result[3] += 0.24707602339181287;
          result[4] += 0.08333333333333333;
          result[5] += 0.46345029239766083;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 0.9809523809523809;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01904761904761905;
          result[5] += 0;
        } else {
          result[0] += 0.008333333333333335;
          result[1] += 0.35000000000000003;
          result[2] += 0.01666666666666667;
          result[3] += 0.08333333333333334;
          result[4] += 0.5083333333333334;
          result[5] += 0.03333333333333334;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.25806451612903225;
          result[1] += 0.2064516129032258;
          result[2] += 0;
          result[3] += 0.04516129032258064;
          result[4] += 0.44516129032258067;
          result[5] += 0.04516129032258064;
        } else {
          result[0] += 0.8166939443535188;
          result[1] += 0.0008183306055646482;
          result[2] += 0.04337152209492635;
          result[3] += 0.05155482815057283;
          result[4] += 0.028641571194762683;
          result[5] += 0.058919803600654665;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03125;
          result[5] += 0.96875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.4;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.02531645569620253;
          result[2] += 0.06329113924050633;
          result[3] += 0.7848101265822784;
          result[4] += 0;
          result[5] += 0.12658227848101267;
        } else {
          result[0] += 0;
          result[1] += 0.03076923076923077;
          result[2] += 0.36923076923076925;
          result[3] += 0.18461538461538463;
          result[4] += 0;
          result[5] += 0.4153846153846154;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0.2916666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.2619047619047619;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02654867256637168;
          result[1] += 0;
          result[2] += 0.7551622418879056;
          result[3] += 0.1710914454277286;
          result[4] += 0;
          result[5] += 0.0471976401179941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9720176730486009;
          result[3] += 0.020618556701030927;
          result[4] += 0;
          result[5] += 0.007363770250368188;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.06842105263157895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9315789473684211;
          result[5] += 0;
        } else {
          result[0] += 0.1891891891891892;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2702702702702703;
          result[5] += 0.5405405405405406;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0034802784222737818;
          result[2] += 0.004640371229698376;
          result[3] += 0.0568445475638051;
          result[4] += 0.060324825986078884;
          result[5] += 0.8747099767981439;
        } else {
          result[0] += 0;
          result[1] += 0.07926829268292683;
          result[2] += 0.018292682926829267;
          result[3] += 0.4146341463414634;
          result[4] += 0.03048780487804878;
          result[5] += 0.4573170731707317;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.00646551724137931;
          result[1] += 0.9827586206896551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010775862068965518;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6956233421750664;
          result[1] += 0.02387267904509284;
          result[2] += 0.007294429708222813;
          result[3] += 0.04641909814323608;
          result[4] += 0.16644562334217508;
          result[5] += 0.060344827586206906;
        } else {
          result[0] += 0.10251450676982592;
          result[1] += 0.015473887814313346;
          result[2] += 0.2011605415860735;
          result[3] += 0.34622823984526113;
          result[4] += 0.06769825918762089;
          result[5] += 0.26692456479690524;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.1;
          result[4] += 0.4;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.9375;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.8095238095238095;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.015384615384615385;
          result[2] += 0.47692307692307695;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.27692307692307694;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0.47058823529411764;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.06620209059233449;
          result[1] += 0.010452961672473868;
          result[2] += 0.7386759581881533;
          result[3] += 0.16376306620209058;
          result[4] += 0.003484320557491289;
          result[5] += 0.017421602787456445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9654036243822076;
          result[3] += 0.03459637561779242;
          result[4] += 0;
          result[5] += 0;
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
