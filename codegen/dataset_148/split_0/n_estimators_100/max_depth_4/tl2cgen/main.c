
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9694041867954911;
          result[1] += 0;
          result[2] += 0.030595813204508857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0.0345821325648415;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9648414985590779;
          result[4] += 0.0005763688760806917;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3436123348017621;
          result[1] += 0.07048458149779736;
          result[2] += 0;
          result[3] += 0.5859030837004405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9772727272727273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008394543546694649;
          result[2] += 0;
          result[3] += 0.155299055613851;
          result[4] += 0.8363064008394544;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9776235660671293;
          result[1] += 0.00038946324883161026;
          result[2] += 0.0012037954963886135;
          result[3] += 0.020429117688712646;
          result[4] += 0;
          result[5] += 7.08114997875655e-05;
          result[6] += 0.000283245999150262;
        } else {
          result[0] += 0.02347024308466052;
          result[1] += 0;
          result[2] += 0.020955574182732608;
          result[3] += 0.8382229673093042;
          result[4] += 0.11399832355406538;
          result[5] += 0.003352891869237217;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.18150040333422962;
          result[1] += 0;
          result[2] += 0.007528905619790266;
          result[3] += 0.8082817961817693;
          result[4] += 0.0024200053777897286;
          result[5] += 0.00026888948642108095;
          result[6] += 0;
        } else {
          result[0] += 0.9932270916334661;
          result[1] += 0;
          result[2] += 0.0037848605577689245;
          result[3] += 0.00199203187250996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00099601593625498;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-81) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9913793103448276;
          result[1] += 0;
          result[2] += 0.008620689655172414;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7073170731707317;
          result[1] += 0;
          result[2] += 0.2926829268292683;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.193859649122807;
          result[1] += 0.02894736842105263;
          result[2] += 0;
          result[3] += 0.7771929824561403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0058953574060427415;
          result[3] += 0.9941046425939573;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.32344632768361586;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.67090395480226;
          result[4] += 0.0014124293785310737;
          result[5] += 0.004237288135593221;
          result[6] += 0;
        } else {
          result[0] += 0.9978533624486472;
          result[1] += 0.000777230837558755;
          result[2] += 0.0005551648839705393;
          result[3] += 0.0006291868684999445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001850549613235131;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06060606060606061;
          result[3] += 0.7090909090909091;
          result[4] += 0.23030303030303031;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9917184265010353;
          result[4] += 0.0031055900621118015;
          result[5] += 0.005175983436853003;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.23356573705179282;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7664342629482072;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6124401913875598;
          result[1] += 0;
          result[2] += 0.028176501860712386;
          result[3] += 0;
          result[4] += 0.3567251461988304;
          result[5] += 0.001594896331738437;
          result[6] += 0.001063264221158958;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0.0010515247108307045;
          result[1] += 0;
          result[2] += 0.01892744479495268;
          result[3] += 0.9421661409043113;
          result[4] += 0.03785488958990536;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979570990806946;
          result[1] += 0;
          result[2] += 0.0020429009193054137;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.48894348894348894;
          result[1] += 0;
          result[2] += 0.022113022113022112;
          result[3] += 0.48894348894348894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001145475372279496;
          result[1] += 0.016036655211912942;
          result[2] += 0;
          result[3] += 0.9828178694158075;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011764705882352941;
          result[1] += 0.03137254901960784;
          result[2] += 0;
          result[3] += 0.011764705882352941;
          result[4] += 0.9450980392156862;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.996468213925328;
          result[1] += 0;
          result[2] += 0.0025227043390514637;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010090817356205855;
        } else {
          result[0] += 0.999753269183321;
          result[1] += 0;
          result[2] += 0.0002467308166790032;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0.01015228426395939;
          result[1] += 0.025380710659898477;
          result[2] += 0;
          result[3] += 0.9644670050761421;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4074735540596235;
          result[1] += 0.0016485781013875528;
          result[2] += 0.007830745981590876;
          result[3] += 0.5737051792828685;
          result[4] += 0.007693364473141913;
          result[5] += 0.0008242890506937764;
          result[6] += 0.0008242890506937764;
        } else {
          result[0] += 0.9659530564869745;
          result[1] += 0;
          result[2] += 0.005674490585504256;
          result[3] += 0.02708279597627031;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012896569512509672;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9991773778920309;
          result[1] += 0;
          result[2] += 0.0007197943444730077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010282776349614396;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9103808812546677;
          result[1] += 0.0019915359721184964;
          result[2] += 0.0033607169529499626;
          result[3] += 0.08352003983071944;
          result[4] += 0;
          result[5] += 0.00024894199651481205;
          result[6] += 0.0004978839930296241;
        } else {
          result[0] += 0.16421052631578947;
          result[1] += 0;
          result[2] += 0.010526315789473684;
          result[3] += 0.712421052631579;
          result[4] += 0.11242105263157895;
          result[5] += 0.0004210526315789474;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0.0012949174490126255;
          result[2] += 0.007769504694075753;
          result[3] += 0.9909355778569117;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9971056439942113;
          result[5] += 0.002894356005788712;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
          result[0] += 0;
          result[1] += 0.0078064012490242;
          result[2] += 0;
          result[3] += 0.9921935987509758;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.20512820512820512;
          result[2] += 0;
          result[3] += 0.7948717948717948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8666666666666667;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          result[0] += 0.998222405952873;
          result[1] += 0;
          result[2] += 0.0007027697395618024;
          result[3] += 0.0008267879288962381;
          result[4] += 8.267879288962381e-05;
          result[5] += 0;
          result[6] += 0.00016535758577924763;
        } else {
          result[0] += 0.867651235444476;
          result[1] += 0.004828173814257313;
          result[2] += 0.002272081794944618;
          result[3] += 0.1235444476001136;
          result[4] += 0;
          result[5] += 0.00028401022436807724;
          result[6] += 0.0014200511218403862;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.4634146341463415;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.524390243902439;
          result[4] += 0.012195121951219513;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9897388059701493;
          result[4] += 0.0046641791044776115;
          result[5] += 0.005597014925373134;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.3411885245901639;
          result[1] += 0.006147540983606557;
          result[2] += 0.00273224043715847;
          result[3] += 0.649931693989071;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.723744292237443;
          result[1] += 0;
          result[2] += 0.0593607305936073;
          result[3] += 0.21689497716894976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0014925373134328358;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985074626865672;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012359550561797753;
          result[3] += 0.9835205992509364;
          result[4] += 0.004119850187265918;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.48717948717948717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5128205128205128;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.913098555865214;
          result[1] += 0;
          result[2] += 0.005573853559665568;
          result[3] += 0.07854066379528755;
          result[4] += 0.00177349885989359;
          result[5] += 0;
          result[6] += 0.0010134279199391944;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9959885386819485;
          result[1] += 0;
          result[2] += 0.0040114613180515755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996801462188714;
          result[1] += 0;
          result[2] += 0.00031985378112862694;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9902439024390244;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00975609756097561;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010005558643690939;
          result[1] += 0.005002779321845469;
          result[2] += 0.014452473596442469;
          result[3] += 0.9688715953307393;
          result[4] += 0;
          result[5] += 0.0016675931072818232;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9958540630182422;
          result[1] += 0;
          result[2] += 0.00373134328358209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004145936981757878;
        } else {
          result[0] += 0.4061505832449629;
          result[1] += 0;
          result[2] += 0.007953340402969246;
          result[3] += 0.5832449628844114;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002651113467656416;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.6588365344756114;
          result[1] += 0.0012436092303440651;
          result[2] += 0.00442172170789001;
          result[3] += 0.3338399889456957;
          result[4] += 0;
          result[5] += 0.0009672516236009396;
          result[6] += 0.000690894016857814;
        } else {
          result[0] += 0.06576521204671174;
          result[1] += 0.007990165949600492;
          result[2] += 0.011063306699446834;
          result[3] += 0.915181315304241;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.6666666666666666;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.06440071556350627;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9355992844364938;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4461538461538462;
          result[1] += 0.16923076923076924;
          result[2] += 0.3384615384615385;
          result[3] += 0.046153846153846156;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.996742671009772;
          result[4] += 0;
          result[5] += 0.003257328990228013;
          result[6] += 0;
        } else {
          result[0] += 0.9964221824686941;
          result[1] += 0;
          result[2] += 0.0035778175313059034;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0.9950850052372895;
          result[1] += 0.0014503263234227702;
          result[2] += 0.0029812263314801385;
          result[3] += 0.00016114736926919668;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032229473853839335;
        } else {
          result[0] += 0.9111111111111111;
          result[1] += 0.08888888888888889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
          result[0] += 0.9990779768177028;
          result[1] += 0;
          result[2] += 0.0007903055848261328;
          result[3] += 0.00013171759747102212;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.6994535519125683;
          result[1] += 0;
          result[2] += 0.01639344262295082;
          result[3] += 0.28415300546448086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17562254259501967;
          result[1] += 0;
          result[2] += 0.004456094364351245;
          result[3] += 0.8199213630406291;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          result[0] += 0.9925314465408805;
          result[1] += 0;
          result[2] += 0.005306603773584905;
          result[3] += 0.0013757861635220125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007861635220125787;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.5172413793103449;
          result[1] += 0;
          result[2] += 0.4827586206896552;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008488964346349746;
          result[2] += 0;
          result[3] += 0.990945104697227;
          result[4] += 0.0005659309564233164;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9595959595959596;
          result[1] += 0;
          result[2] += 0.04040404040404041;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007216494845360825;
          result[2] += 0;
          result[3] += 0.11649484536082474;
          result[4] += 0.8762886597938144;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06359300476947535;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9364069952305246;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10191082802547771;
          result[3] += 0;
          result[4] += 0.8980891719745223;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9681528662420382;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03184713375796178;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0013003901170351106;
          result[1] += 0;
          result[2] += 0.005201560468140442;
          result[3] += 0.581924577373212;
          result[4] += 0.40767230169050717;
          result[5] += 0.0039011703511053317;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993644896362925;
          result[1] += 0;
          result[2] += 0.00043996871333594055;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019554165037152912;
        } else {
          result[0] += 0.6655172413793103;
          result[1] += 0.006896551724137931;
          result[2] += 0;
          result[3] += 0.3275862068965517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9124605678233438;
          result[1] += 0.0015772870662460567;
          result[2] += 0.003680336487907466;
          result[3] += 0.08149316508937961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007886435331230284;
        } else {
          result[0] += 0.5175143953934741;
          result[1] += 0;
          result[2] += 0.003598848368522073;
          result[3] += 0.47888675623800386;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.2;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.0005676979846721544;
          result[1] += 0.0034061879080329264;
          result[2] += 0.003973885892705081;
          result[3] += 0.9903491342605734;
          result[4] += 0;
          result[5] += 0.0017030939540164632;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9969802808702612;
          result[1] += 0.0011278469038783381;
          result[2] += 0.001709961434912319;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018191079094811904;
        } else {
          result[0] += 0.025;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.975;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.014285714285714285;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.8428571428571429;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          result[0] += 0.39354294154885;
          result[1] += 0;
          result[2] += 0.011183794049377508;
          result[3] += 0.5940071745093902;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012660898923823594;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0;
          result[2] += 0.05128205128205128;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.02564102564102564;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3773987206823028;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5991471215351812;
          result[4] += 0.021321961620469083;
          result[5] += 0.0021321961620469083;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9991032659996224;
          result[1] += 0;
          result[2] += 0.0007551444213705871;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001415895790069851;
        } else {
          result[0] += 0.9506172839506173;
          result[1] += 0;
          result[2] += 0.04938271604938271;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.02302820955670697;
          result[1] += 0.006620610247553254;
          result[2] += 0.008347725964306277;
          result[3] += 0.9421416234887738;
          result[4] += 0.018422567645365578;
          result[5] += 0.0014392630972941856;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007651841224294596;
          result[2] += 0;
          result[3] += 0.1525585844093735;
          result[4] += 0.839789574366332;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9889495225102319;
          result[1] += 0;
          result[2] += 0.0036834924965893586;
          result[3] += 0.006002728512960437;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001364256480218281;
        } else {
          result[0] += 0.8935860058309038;
          result[1] += 0.0014577259475218659;
          result[2] += 0.018950437317784258;
          result[3] += 0.08600583090379009;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.002070393374741201;
          result[2] += 0.022774327122153208;
          result[3] += 0.9751552795031055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986449864498645;
          result[5] += 0.0013550135501355014;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.033707865168539325;
          result[4] += 0.9662921348314607;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002510760401721664;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9935437589670014;
          result[4] += 0.002152080344332855;
          result[5] += 0.001793400286944046;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.98;
          result[5] += 0.02;
          result[6] += 0;
        } else {
          result[0] += 0.8787878787878788;
          result[1] += 0.12121212121212122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0068744271310724105;
          result[3] += 0;
          result[4] += 0.9922089825847846;
          result[5] += 0.0009165902841429881;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9933431952662722;
          result[1] += 0;
          result[2] += 0.005177514792899409;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014792899408284023;
        } else {
          result[0] += 0.9994790038553715;
          result[1] += 0;
          result[2] += 0.0005209961446285298;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.33490566037735847;
          result[1] += 0.012264150943396227;
          result[2] += 0;
          result[3] += 0.6528301886792452;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9411038399802445;
          result[1] += 0.0011112483022595382;
          result[2] += 0.007902210149401161;
          result[3] += 0.04827756513149772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016051364365971107;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0025026814444047193;
          result[2] += 0;
          result[3] += 0.9974973185555953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9947839046199702;
          result[1] += 0;
          result[2] += 0.005216095380029807;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995666707936115;
          result[1] += 0;
          result[2] += 0.0004333292063885106;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9994722955145119;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005277044854881266;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.009442446043165468;
          result[1] += 0.0013489208633093526;
          result[2] += 0;
          result[3] += 0.7841726618705036;
          result[4] += 0.20503597122302158;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7025071077797881;
          result[1] += 0;
          result[2] += 0.0012923235978288964;
          result[3] += 0.29620056862238303;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.9222903885480572;
          result[1] += 0;
          result[2] += 0.06952965235173825;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0081799591002045;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0032414910858995136;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9967585089141004;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.506030027073591;
          result[1] += 0.003445729756337682;
          result[2] += 0.007014521289687424;
          result[3] += 0.48301747477233575;
          result[4] += 0;
          result[5] += 0.0003691853310361802;
          result[6] += 0.00012306177701206007;
        } else {
          result[0] += 0.9856733524355301;
          result[1] += 0;
          result[2] += 0.01002865329512894;
          result[3] += 0.004297994269340974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-7.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0014285714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985714285714286;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.4349680170575693;
          result[1] += 0;
          result[2] += 0.019189765458422176;
          result[3] += 0.5458422174840085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9946086359849042;
          result[1] += 9.802480027446944e-05;
          result[2] += 0.0004411116012351125;
          result[3] += 0.004852227613586237;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.010865628395508874;
          result[1] += 0.0065193770373053244;
          result[2] += 0.00796812749003984;
          result[3] += 0.8656283955088736;
          result[4] += 0.10720753350235422;
          result[5] += 0.0018109380659181455;
          result[6] += 0;
        } else {
          result[0] += 0.9199780976220275;
          result[1] += 0;
          result[2] += 0.002816020025031289;
          result[3] += 0.07665832290362953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005475594493116395;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.3358433734939759;
          result[1] += 0;
          result[2] += 0.004894578313253012;
          result[3] += 0.6592620481927711;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.2;
          result[1] += 0.014563106796116505;
          result[2] += 0;
          result[3] += 0.7854368932038835;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9666666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.017421602787456445;
          result[1] += 0.03484320557491289;
          result[2] += 0;
          result[3] += 0.13588850174216027;
          result[4] += 0.8118466898954704;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.06278026905829596;
          result[1] += 0;
          result[2] += 0.017937219730941704;
          result[3] += 0.9192825112107623;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05695142378559464;
          result[4] += 0.9430485762144054;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.992091388400703;
          result[1] += 0;
          result[2] += 0.007908611599297012;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992741600995437;
          result[1] += 0;
          result[2] += 0.0007258399004562423;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.0047169811320754715;
          result[1] += 0.018867924528301886;
          result[2] += 0;
          result[3] += 0.9716981132075472;
          result[4] += 0.0047169811320754715;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7468354430379748;
          result[1] += 0.0008501794823351597;
          result[2] += 0.0050066125070848295;
          result[3] += 0.21953523521632348;
          result[4] += 0.026450028339316083;
          result[5] += 0.0004723219346306443;
          result[6] += 0.0008501794823351597;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007221458046767538;
          result[3] += 0.9889958734525447;
          result[4] += 0.003782668500687758;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0.37727272727272726;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0026431718061674008;
          result[1] += 0.021145374449339206;
          result[2] += 0;
          result[3] += 0.9762114537444934;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0.019726858877086494;
          result[2] += 0;
          result[3] += 0.0015174506828528073;
          result[4] += 0.9787556904400607;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0.6875;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.0039447731755424065;
          result[1] += 0;
          result[2] += 0.008875739644970414;
          result[3] += 0;
          result[4] += 0.985207100591716;
          result[5] += 0.0019723865877712033;
          result[6] += 0;
        } else {
          result[0] += 0.0012574662055957245;
          result[1] += 0;
          result[2] += 0.002514932411191449;
          result[3] += 0.9952845017290161;
          result[4] += 0;
          result[5] += 0.0009430996541967935;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.003367003367003367;
          result[2] += 0;
          result[3] += 0.9966329966329966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4166666666666667;
          result[1] += 0.5833333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9430416647979549;
          result[1] += 0.000403641745526304;
          result[2] += 0.0023770013903215677;
          result[3] += 0.053818899403507196;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000358792662690048;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04225352112676056;
          result[3] += 0.9577464788732394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9946046511627907;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005395348837209302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4763755980861244;
          result[1] += 0;
          result[2] += 0.0014952153110047847;
          result[3] += 0.5221291866028708;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9921875;
          result[1] += 0;
          result[2] += 0.0078125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008620689655172415;
          result[3] += 0.9612068965517242;
          result[4] += 0.030172413793103453;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.192507204610951;
          result[1] += 0.005763688760806916;
          result[2] += 0.005763688760806916;
          result[3] += 0.7959654178674351;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.072;
          result[2] += 0;
          result[3] += 0.928;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9547677261613693;
          result[1] += 0;
          result[2] += 0.0039391469709318125;
          result[3] += 0.041021461559358874;
          result[4] += 0;
          result[5] += 0.000271665308340125;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.37643097643097645;
          result[1] += 0;
          result[2] += 0.003703703703703704;
          result[3] += 0.6023569023569023;
          result[4] += 0.015824915824915825;
          result[5] += 0.00101010101010101;
          result[6] += 0.0006734006734006734;
        } else {
          result[0] += 0.9885651051272594;
          result[1] += 0;
          result[2] += 0.004426410918480265;
          result[3] += 0.005901881224640354;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011066027296200663;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
          result[0] += 0.999058536855513;
          result[1] += 0;
          result[2] += 0.0007753225895774492;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001661405549094534;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8066692367000772;
          result[1] += 0.000963762528912876;
          result[2] += 0.007902852737085584;
          result[3] += 0.16422513492675408;
          result[4] += 0.01888974556669237;
          result[5] += 0.0007710100231303008;
          result[6] += 0.0005782575173477256;
        } else {
          result[0] += 0;
          result[1] += 0.002240143369175627;
          result[2] += 0.00044802867383512545;
          result[3] += 0.7818100358422939;
          result[4] += 0.21550179211469533;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9726027397260274;
          result[1] += 0;
          result[2] += 0.0273972602739726;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993604651162791;
          result[1] += 0;
          result[2] += 0.0006395348837209302;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9962825278810409;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0037174721189591076;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.02422145328719723;
          result[1] += 0.00865051903114187;
          result[2] += 0.008362168396770472;
          result[3] += 0.9423298731257209;
          result[4] += 0.012975778546712802;
          result[5] += 0.0034602076124567475;
          result[6] += 0;
        } else {
          result[0] += 0.9846537741734248;
          result[1] += 0;
          result[2] += 0.004491578290704928;
          result[3] += 0.010230817217716782;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006238303181534623;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020134228187919465;
          result[3] += 0;
          result[4] += 0.9771812080536914;
          result[5] += 0.002684563758389262;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0012787723785166241;
          result[2] += 0.005434782608695652;
          result[3] += 0.9932864450127877;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8849557522123894;
          result[4] += 0.11504424778761062;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00202020202020202;
          result[1] += 0.015151515151515152;
          result[2] += 0;
          result[3] += 0.12121212121212122;
          result[4] += 0.8616161616161616;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          result[0] += 0.9976466486533601;
          result[1] += 0.00013074174147999652;
          result[2] += 0.0009587727708533077;
          result[3] += 0.0009587727708533077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003050640634533252;
        } else {
          result[0] += 0.014545454545454547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9745454545454546;
          result[4] += 0;
          result[5] += 0.010909090909090912;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          result[0] += 0.9995054401582592;
          result[1] += 0;
          result[2] += 0.0004945598417408506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8562091503267973;
          result[1] += 0.00267379679144385;
          result[2] += 0.0014854426619132501;
          result[3] += 0.13814616755793227;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014854426619132501;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.17232202262142382;
          result[1] += 0.0029940119760479044;
          result[2] += 0.00332667997338656;
          result[3] += 0.8193612774451098;
          result[4] += 0.001996007984031936;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.376;
          result[1] += 0;
          result[2] += 0.136;
          result[3] += 0;
          result[4] += 0.488;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3938879456706282;
          result[4] += 0.6061120543293718;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007204610951008645;
          result[1] += 0.008645533141210375;
          result[2] += 0;
          result[3] += 0.0569164265129683;
          result[4] += 0.9337175792507204;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9269521410579346;
          result[1] += 0;
          result[2] += 0.021410579345088162;
          result[3] += 0.05163727959697733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0055079559363525096;
          result[3] += 0.9920440636474909;
          result[4] += 0.0024479804161566705;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.2916666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          result[0] += 0.9973916532905297;
          result[1] += 0;
          result[2] += 0.0020064205457463883;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006019261637239165;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.9858678584370094;
          result[1] += 0.00036236260417924876;
          result[2] += 0.00036236260417924876;
          result[3] += 0.013347022587268996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.039376736320812e-05;
        } else {
          result[0] += 0.423728813559322;
          result[1] += 0;
          result[2] += 0.2033898305084746;
          result[3] += 0;
          result[4] += 0.3728813559322034;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)31.5) ) ) {
          result[0] += 0.9077231695085256;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00802407221664995;
          result[4] += 0.08425275827482448;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9804753820033956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01839275608375778;
          result[4] += 0.0011318619128466328;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8981453329279417;
          result[1] += 0.004256612952265127;
          result[2] += 0.0027363940407418674;
          result[3] += 0.09334144116752814;
          result[4] += 0;
          result[5] += 0.0006080875646093039;
          result[6] += 0.0009121313469139557;
        } else {
          result[0] += 0.1240976280508766;
          result[1] += 0;
          result[2] += 0.006531454107940873;
          result[3] += 0.8693709178411826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9859525899912205;
          result[1] += 0;
          result[2] += 0.0017559262510974541;
          result[3] += 0.011633011413520633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006584723441615453;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0.2777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2222222222222222;
          result[6] += 0;
        } else {
          result[0] += 0.006008583690987125;
          result[1] += 0.0017167381974248926;
          result[2] += 0.007725321888412017;
          result[3] += 0.9839771101573677;
          result[4] += 0;
          result[5] += 0.0005722460658082976;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.7666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23333333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9860748476936466;
          result[1] += 0;
          result[2] += 0.01392515230635335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997134670487106;
          result[1] += 0;
          result[2] += 0.0028653295128939827;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9797979797979799;
          result[1] += 0;
          result[2] += 0.010101010101010104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.010101010101010104;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9998608211551844;
          result[1] += 0;
          result[2] += 0.00013917884481558804;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9705882352941176;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9962121212121212;
          result[5] += 0.003787878787878788;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.37333333333333335;
          result[1] += 0.006666666666666667;
          result[2] += 0;
          result[3] += 0.62;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007940573770491803;
          result[1] += 0.006915983606557377;
          result[2] += 0.015881147540983607;
          result[3] += 0.9669569672131147;
          result[4] += 0;
          result[5] += 0.002305327868852459;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9821560423332513;
          result[1] += 0.00012306177701206005;
          result[2] += 0.005414718188530642;
          result[3] += 0.011444745262121586;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008614324390844204;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.007910349373764008;
          result[2] += 0;
          result[3] += 0.95385629531971;
          result[4] += 0.03823335530652604;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024350649350649352;
          result[3] += 0;
          result[4] += 0.9707792207792207;
          result[5] += 0.00487012987012987;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.996602683879735;
          result[1] += 0;
          result[2] += 0.00016986580601324953;
          result[3] += 0.003227450314251741;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5791940018744143;
          result[1] += 0;
          result[2] += 0.005623242736644799;
          result[3] += 0.4145579506404249;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006248047485160887;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += 0.9948506694129763;
          result[1] += 0;
          result[2] += 0.0013731548232063166;
          result[3] += 0.0037761757638173706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9116279069767442;
          result[1] += 0;
          result[2] += 0.06046511627906977;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.027906976744186046;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.88124410933082;
          result[1] += 0.0006283380458686773;
          result[2] += 0.0036914860194784795;
          result[3] += 0.10611058749607288;
          result[4] += 0.007775683317624882;
          result[5] += 0.00031416902293433867;
          result[6] += 0.000235626767200754;
        } else {
          result[0] += 0.8573626373626374;
          result[1] += 0;
          result[2] += 0.0005860805860805861;
          result[3] += 0.13457875457875457;
          result[4] += 0.0073992673992674;
          result[5] += 0;
          result[6] += 7.326007326007326e-05;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10751.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
          result[0] += 0.41452991452991456;
          result[1] += 0;
          result[2] += 0.04700854700854701;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0210727969348659;
          result[2] += 0;
          result[3] += 0.9789272030651341;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.08196721311475409;
          result[2] += 0;
          result[3] += 0.9180327868852459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.0040885860306643955;
          result[1] += 0.0040885860306643955;
          result[2] += 0.005792163543441226;
          result[3] += 0.7035775127768313;
          result[4] += 0.2824531516183986;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9911290322580645;
          result[1] += 0;
          result[2] += 0.008870967741935484;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010416666666666666;
          result[1] += 0.010416666666666666;
          result[2] += 0;
          result[3] += 0.9791666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0;
          result[3] += 0.021634615384615384;
          result[4] += 0.9591346153846154;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993638365549302;
          result[1] += 0;
          result[2] += 0.0004893564962074871;
          result[3] += 0;
          result[4] += 4.893564962074871e-05;
          result[5] += 0;
          result[6] += 9.787129924149742e-05;
        } else {
          result[0] += 0.7256637168141593;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2743362831858407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986244841815681;
          result[5] += 0.001375515818431912;
          result[6] += 0;
        } else {
          result[0] += 0.06363636363636363;
          result[1] += 0.021212121212121213;
          result[2] += 0.03333333333333333;
          result[3] += 0.8818181818181818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8531904287138584;
          result[1] += 0.0014955134596211367;
          result[2] += 0.0013708873379860418;
          result[3] += 0.14307078763708872;
          result[4] += 0.0001246261216350947;
          result[5] += 0.0004985044865403788;
          result[6] += 0.0002492522432701894;
        } else {
          result[0] += 0.5058906277474943;
          result[1] += 0;
          result[2] += 0.003340953050817654;
          result[3] += 0.49076841920168807;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.8090909090909091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17575757575757575;
          result[4] += 0.015151515151515152;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9095744680851064;
          result[1] += 0;
          result[2] += 0.008421985815602839;
          result[3] += 0.06338652482269505;
          result[4] += 0.015070921985815604;
          result[5] += 0;
          result[6] += 0.003546099290780142;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9754098360655737;
          result[1] += 0;
          result[2] += 0.02459016393442623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9956966110812265;
          result[1] += 0;
          result[2] += 0.003227541689080151;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010758472296933837;
        } else {
          result[0] += 0.9997909873756375;
          result[1] += 0;
          result[2] += 0.0002090126243625115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.574315222272115;
          result[1] += 0;
          result[2] += 0.010103277952402335;
          result[3] += 0.35698248765154916;
          result[4] += 0.05859901212393354;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.865936618549859;
          result[1] += 0.0019910403185664513;
          result[2] += 0.003816160610585698;
          result[3] += 0.12560146009623363;
          result[4] += 0.00033184005309440856;
          result[5] += 0.0008296001327360214;
          result[6] += 0.0014932802389248385;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0010166045408336157;
          result[2] += 0;
          result[3] += 0.9969501863774991;
          result[4] += 0.0013554727211114877;
          result[5] += 0.0006777363605557439;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04993429697766097;
          result[3] += 0;
          result[4] += 0.9500657030223391;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.18011958146487295;
          result[1] += 0.00523168908819133;
          result[2] += 0.005979073243647235;
          result[3] += 0.8086696562032885;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.39285714285714285;
          result[4] += 0.6071428571428571;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0013908205841446453;
          result[1] += 0.005563282336578581;
          result[2] += 0;
          result[3] += 0.06328233657858136;
          result[4] += 0.9297635605006954;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9981372244644521;
          result[4] += 0;
          result[5] += 0.0018627755355479665;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.999552171965965;
          result[5] += 0.0004478280340349306;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.325;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.075;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.984251968503937;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015748031496062992;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9973180498916197;
          result[1] += 0.00047760755354715447;
          result[2] += 0.0018369521290275172;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003673904258055034;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03614457831325301;
          result[2] += 0;
          result[3] += 0.963855421686747;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.8834865105247555;
          result[1] += 0;
          result[2] += 0.0071153276015416544;
          result[3] += 0.10791580195671509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014823599169878447;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023178807947019868;
          result[3] += 0.9768211920529801;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0038580246913580245;
          result[3] += 0.996141975308642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08284883720930232;
          result[1] += 0.01065891472868217;
          result[2] += 0.003391472868217054;
          result[3] += 0.9031007751937985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00909090909090909;
          result[3] += 0;
          result[4] += 0.990909090909091;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.06691449814126393;
          result[1] += 0;
          result[2] += 0.05204460966542751;
          result[3] += 0.8810408921933085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02444987775061125;
          result[4] += 0.9755501222493888;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9989684340829379;
          result[1] += 0;
          result[2] += 0.0008768310295027852;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015473488755931504;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4628807592224094;
          result[1] += 0.002602173580284709;
          result[2] += 0.005051278126435023;
          result[3] += 0.5074238481555182;
          result[4] += 0.02051125057400888;
          result[5] += 0.0009184142048063679;
          result[6] += 0.0006122761365375786;
        } else {
          result[0] += 0.9649167733674776;
          result[1] += 0;
          result[2] += 0.0048655569782330346;
          result[3] += 0.029193341869398207;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001024327784891165;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3877995642701525;
          result[4] += 0.6067538126361656;
          result[5] += 0.0054466230936819175;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019880715705765408;
          result[3] += 0.9214711729622267;
          result[4] += 0.0536779324055666;
          result[5] += 0.004970178926441352;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9966806815667183;
          result[1] += 0;
          result[2] += 0.0024341668510732464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008851515822084533;
        } else {
          result[0] += 0.9698275862068966;
          result[1] += 0;
          result[2] += 0.03017241379310345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.0005810575246949448;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9982568274259151;
          result[5] += 0.0011621150493898896;
          result[6] += 0;
        } else {
          result[0] += 0.019059107358262967;
          result[1] += 0.007478890229191798;
          result[2] += 0.01278648974668275;
          result[3] += 0.9592279855247285;
          result[4] += 0;
          result[5] += 0.0014475271411338963;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9763779527559056;
          result[1] += 0.00019204916458613405;
          result[2] += 0.00806606491261763;
          result[3] += 0.013827539850201652;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015363933166890724;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029069767441860465;
          result[3] += 0.997093023255814;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.9916909015371832;
          result[1] += 0;
          result[2] += 0.0008309098462816784;
          result[3] += 0.007062733693394266;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004154549231408392;
        } else {
          result[0] += 0.423728813559322;
          result[1] += 0;
          result[2] += 0.0015408320493066256;
          result[3] += 0.573959938366718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007704160246533128;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9963872832369942;
          result[1] += 0;
          result[2] += 0.002890173410404624;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000722543352601156;
        } else {
          result[0] += 0.9994851729818781;
          result[1] += 0;
          result[2] += 0.000514827018121911;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.012385919165580184;
          result[1] += 0.0013037809647979141;
          result[2] += 0;
          result[3] += 0.9374185136897002;
          result[4] += 0.04889178617992178;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02777777777777778;
          result[3] += 0.3032407407407408;
          result[4] += 0.6666666666666667;
          result[5] += 0.002314814814814815;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9959150326797386;
          result[1] += 0;
          result[2] += 0.003676470588235294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004084967320261438;
        } else {
          result[0] += 0.3943200436919716;
          result[1] += 0;
          result[2] += 0.0070999453850355;
          result[3] += 0.596395412342982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002184598580010923;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.617494151286717;
          result[1] += 0.0019495710943592411;
          result[2] += 0.003379256563556018;
          result[3] += 0.3089420327527944;
          result[4] += 0.06719521705224851;
          result[5] += 0.0006498570314530805;
          result[6] += 0.00038991421887184827;
        } else {
          result[0] += 0.07687028140013727;
          result[1] += 0.009608785175017159;
          result[2] += 0.01990391214824983;
          result[3] += 0.8901853122855182;
          result[4] += 0.0034317089910775567;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007276507276507277;
          result[2] += 0;
          result[3] += 0.20270270270270271;
          result[4] += 0.7900207900207901;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968354430379747;
          result[1] += 0;
          result[2] += 0.0031645569620253164;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9757785467128027;
          result[1] += 0;
          result[2] += 0.01384083044982699;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.010380622837370242;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.99970128447675;
          result[1] += 0;
          result[2] += 0.00029871552325002487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.019638242894056846;
          result[1] += 0.006201550387596899;
          result[2] += 0.016020671834625324;
          result[3] += 0.9403100775193799;
          result[4] += 0.015503875968992248;
          result[5] += 0.002325581395348837;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.28688524590163933;
          result[4] += 0.7131147540983607;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013618677042801557;
          result[2] += 0;
          result[3] += 0.010700389105058366;
          result[4] += 0.97568093385214;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.5483738163853438;
          result[1] += 0;
          result[2] += 0.00699876492383697;
          result[3] += 0.44215726636475916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002470152326060107;
        } else {
          result[0] += 0.6620346093340325;
          result[1] += 0;
          result[2] += 0.0013109596224436288;
          result[3] += 0.3361300471945464;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005243838489774515;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.9711815561959655;
          result[1] += 0;
          result[2] += 0.007204610951008645;
          result[3] += 0.02089337175792507;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007204610951008645;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.4117647058823529;
          result[2] += 0.4117647058823529;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009448818897637795;
          result[2] += 0.007559055118110236;
          result[3] += 0.9886614173228346;
          result[4] += 0;
          result[5] += 0.0028346456692913387;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9981243904268887;
          result[1] += 0.0007127316377822792;
          result[2] += 0.0009753169780178558;
          result[3] += 0.00018756095731112612;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9615384615384616;
          result[1] += 0;
          result[2] += 0.033156498673740056;
          result[3] += 0.005305039787798408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9468085106382979;
          result[1] += 0.05319148936170213;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          result[0] += 0.41415417945477523;
          result[1] += 0;
          result[2] += 0.0079436721429861;
          result[3] += 0.5771799963892399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007221520129987362;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.05555555555555555;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9404934687953556;
          result[4] += 0.05776487663280116;
          result[5] += 0.0017416545718432512;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9775280898876404;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011235955056179775;
          result[5] += 0.011235955056179775;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007590132827324478;
          result[2] += 0.008222643896268185;
          result[3] += 0;
          result[4] += 0.9822896900695762;
          result[5] += 0.0018975332068311196;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9395348837209302;
          result[1] += 0.06046511627906977;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9979561834415003;
          result[1] += 0.00043027717021047724;
          result[2] += 0.001362544372333178;
          result[3] += 0.00010756929255261931;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001434257234034924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.014853195164075994;
          result[1] += 0;
          result[2] += 0.009671848013816925;
          result[3] += 0.975474956822107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9606060606060606;
          result[4] += 0.03636363636363636;
          result[5] += 0.0030303030303030303;
          result[6] += 0;
        } else {
          result[0] += 0.990530303030303;
          result[1] += 0;
          result[2] += 0.008522727272727272;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000946969696969697;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9925373134328358;
          result[1] += 0;
          result[2] += 0.007462686567164179;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994605009633911;
          result[1] += 0;
          result[2] += 0.0003853564547206166;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015414258188824664;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0.08695652173913045;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.891304347826087;
          result[4] += 0.02173913043478261;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6927944214876034;
          result[1] += 0.0015495867768595044;
          result[2] += 0.003486570247933885;
          result[3] += 0.300103305785124;
          result[4] += 0.0001291322314049587;
          result[5] += 0.0006456611570247935;
          result[6] += 0.001291322314049587;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010364004044489384;
          result[3] += 0.7492416582406471;
          result[4] += 0.23988877654196158;
          result[5] += 0.0005055611729019212;
          result[6] += 0;
        } else {
          result[0] += 0.988749459108611;
          result[1] += 0;
          result[2] += 0.009086975335352661;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021635655560363477;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.7602739726027398;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23972602739726026;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9838709677419355;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.27788649706457924;
          result[1] += 0.019569471624266144;
          result[2] += 0;
          result[3] += 0.7025440313111546;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04770318021201413;
          result[1] += 0;
          result[2] += 0.012367491166077738;
          result[3] += 0.9399293286219081;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004149377593360996;
          result[1] += 0.06224066390041494;
          result[2] += 0;
          result[3] += 0.004149377593360996;
          result[4] += 0.9294605809128631;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10546875;
          result[4] += 0.89453125;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9898876404494382;
          result[1] += 0;
          result[2] += 0.006741573033707865;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0033707865168539327;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9990061288719563;
          result[1] += 0;
          result[2] += 0.0009938711280437303;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999443950177936;
          result[1] += 0;
          result[2] += 5.560498220640569e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.0025031289111389237;
          result[1] += 0.023779724655819776;
          result[2] += 0;
          result[3] += 0.9699624530663329;
          result[4] += 0;
          result[5] += 0.0037546933667083854;
          result[6] += 0;
        } else {
          result[0] += 0.9973809523809524;
          result[1] += 0;
          result[2] += 0.002142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004761904761904762;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018518518518518517;
          result[4] += 0.9259259259259259;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17665130568356374;
          result[1] += 0.0049923195084485405;
          result[2] += 0.00576036866359447;
          result[3] += 0.8125960061443932;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.11258482418260334;
          result[1] += 0;
          result[2] += 0.0077112893275755705;
          result[3] += 0.742751388032079;
          result[4] += 0.13571869216533003;
          result[5] += 0.0012338062924120913;
          result[6] += 0;
        } else {
          result[0] += 0.13446475195822455;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5861618798955613;
          result[4] += 0.2793733681462141;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.0007199424046076314;
          result[1] += 0.004679625629949604;
          result[2] += 0.006839452843772498;
          result[3] += 0.3923686105111591;
          result[4] += 0.5943124550035997;
          result[5] += 0.0010799136069114472;
          result[6] += 0;
        } else {
          result[0] += 0.9901728227719417;
          result[1] += 0;
          result[2] += 0.008132836326668925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016943409013893595;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9939759036144579;
          result[5] += 0.006024096385542169;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0004496402877697842;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.997751798561151;
          result[4] += 0;
          result[5] += 0.0017985611510791368;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015444015444015444;
          result[2] += 0.03088803088803089;
          result[3] += 0.9498069498069498;
          result[4] += 0;
          result[5] += 0.003861003861003861;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.9861495844875346;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013850415512465374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992153991003243;
          result[1] += 0;
          result[2] += 0.0006276807197405586;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015692017993513966;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
          result[0] += 0.6379310344827587;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3620689655172414;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9632495164410058;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0367504835589942;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9989764585465711;
          result[1] += 0;
          result[2] += 0.0010235414534288639;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9115582592419279;
          result[1] += 0.0026906878802058962;
          result[2] += 0.007487131492746842;
          result[3] += 0.07756200280767431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007019185774450163;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003423354887790034;
          result[3] += 0.99657664511221;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9928571428571429;
          result[1] += 0;
          result[2] += 0.007142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994188749418875;
          result[1] += 0;
          result[2] += 0.0005811250581125058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.6836158192090395;
          result[1] += 0.0017383746197305516;
          result[2] += 0.002897291032884253;
          result[3] += 0.31001014051861503;
          result[4] += 0.0005794582065768505;
          result[5] += 0.0008691873098652758;
          result[6] += 0.00028972910328842525;
        } else {
          result[0] += 0.8621082621082621;
          result[1] += 0;
          result[2] += 0.010541310541310541;
          result[3] += 0.05327635327635328;
          result[4] += 0.07321937321937322;
          result[5] += 0;
          result[6] += 0.0008547008547008547;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.18394886363636365;
          result[1] += 0.007102272727272727;
          result[2] += 0.005681818181818182;
          result[3] += 0.8032670454545454;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006101281269066504;
          result[1] += 0.004881025015253203;
          result[2] += 0;
          result[3] += 0.10921293471629043;
          result[4] += 0.8852959121415497;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0;
          result[1] += 0.0016458196181698486;
          result[2] += 0.004608294930875576;
          result[3] += 0.9937458854509545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05813953488372093;
          result[3] += 0.9418604651162791;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5925925925925926;
          result[3] += 0;
          result[4] += 0.4074074074074074;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.2707993474714519;
          result[1] += 0;
          result[2] += 0.0065252854812398045;
          result[3] += 0.7177814029363785;
          result[4] += 0.004893964110929853;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6413641364136413;
          result[1] += 0;
          result[2] += 0.006600660066006601;
          result[3] += 0.35203520352035206;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13955408753096615;
          result[1] += 0.009083402146985962;
          result[2] += 0.009083402146985962;
          result[3] += 0.8422791081750619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00823045267489712;
          result[1] += 0.00411522633744856;
          result[2] += 0;
          result[3] += 0.9876543209876543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.9855915065722952;
          result[1] += 0.0005416726852520583;
          result[2] += 0.0011916799075545284;
          result[3] += 0.012386248736097068;
          result[4] += 0;
          result[5] += 0.0001444460494005489;
          result[6] += 0.0001444460494005489;
        } else {
          result[0] += 0.5945558739255015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4054441260744986;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9934024505183789;
          result[4] += 0.00471253534401508;
          result[5] += 0.001885014137606032;
          result[6] += 0;
        } else {
          result[0] += 0.13157894736842105;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0.7684210526315789;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007871631849833485;
          result[3] += 0.8001816530426885;
          result[4] += 0.19194671510747804;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.8372257607926398;
          result[1] += 0;
          result[2] += 0.009200283085633405;
          result[3] += 0.14154281670205238;
          result[4] += 0.003538570417551309;
          result[5] += 0.003538570417551309;
          result[6] += 0.004953998584571833;
        } else {
          result[0] += 0.9414748341786968;
          result[1] += 0;
          result[2] += 0.0031213421771361686;
          result[3] += 0.053452984783456885;
          result[4] += 0.0015606710885680843;
          result[5] += 0;
          result[6] += 0.0003901677721420211;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
          result[0] += 0.5075;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1125;
          result[4] += 0.38;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007240547063555913;
          result[3] += 0.9694288012872083;
          result[4] += 0.016894609814963796;
          result[5] += 0.006436041834271922;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6851851851851852;
          result[4] += 0.3148148148148148;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.021413276231263382;
          result[2] += 0;
          result[3] += 0.008565310492505354;
          result[4] += 0.9700214132762313;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.00425531914893617;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957446808510638;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.09317211948790896;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9061166429587483;
          result[4] += 0;
          result[5] += 0.0007112375533428165;
          result[6] += 0;
        } else {
          result[0] += 0.3743793445878848;
          result[1] += 0.003972194637537239;
          result[2] += 0.011916583912611719;
          result[3] += 0.608738828202582;
          result[4] += 0;
          result[5] += 0.0009930486593843098;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 0.961038961038961;
          result[1] += 0.03896103896103896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993827795494291;
          result[1] += 0;
          result[2] += 0.0005657854130233515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.143503754757741e-05;
        } else {
          result[0] += 0.5280467189180883;
          result[1] += 0.0033809743353311822;
          result[2] += 0.00491778085139081;
          result[3] += 0.463039803288766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006147226064238513;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9932088285229203;
          result[1] += 0;
          result[2] += 0.003621958121109225;
          result[3] += 0.0026032823995472553;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005659309564233164;
        } else {
          result[0] += 0.952495490078172;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.047504509921828024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.956655290102389;
          result[4] += 0.041979522184300344;
          result[5] += 0.0013651877133105802;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8686274509803922;
          result[4] += 0.13137254901960785;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.991701244813278;
          result[5] += 0.008298755186721992;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.26;
          result[2] += 0.66;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9457013574660633;
          result[1] += 0.05429864253393665;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9985764057992732;
          result[1] += 0.0005619450792342562;
          result[2] += 0.0007492601056456749;
          result[3] += 3.746300528228374e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.492601056456748e-05;
        } else {
          result[0] += 0.9745308310991957;
          result[1] += 0;
          result[2] += 0.022788203753351208;
          result[3] += 0.002680965147453083;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9392764857881137;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.060723514211886306;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01509206157561123;
          result[1] += 0;
          result[2] += 0.003622094778146695;
          result[3] += 0.981285843646242;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9919159256265158;
          result[1] += 0;
          result[2] += 0.003637833468067906;
          result[3] += 0.001818916734033953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002627324171382377;
        } else {
          result[0] += 0.9032258064516129;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.998274374460742;
          result[1] += 0;
          result[2] += 0.001725625539257981;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996618575293057;
          result[1] += 0;
          result[2] += 0.000281785392245266;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.63570784490532e-05;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.43239299610894943;
          result[1] += 0.0023103112840466926;
          result[2] += 0.006079766536964981;
          result[3] += 0.47592412451361865;
          result[4] += 0.08219844357976654;
          result[5] += 0.0008511673151750973;
          result[6] += 0.00024319066147859923;
        } else {
          result[0] += 0.9362959719789843;
          result[1] += 0;
          result[2] += 0.00766199649737303;
          result[3] += 0.05472854640980736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013134851138353765;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0.04409090909090909;
          result[1] += 0;
          result[2] += 0.014545454545454545;
          result[3] += 0.9363636363636364;
          result[4] += 0.004090909090909091;
          result[5] += 0.0009090909090909091;
          result[6] += 0;
        } else {
          result[0] += 0.532051282051282;
          result[1] += 0.057692307692307696;
          result[2] += 0;
          result[3] += 0.41025641025641024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9974358974358974;
          result[4] += 0.002564102564102564;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002317497103128621;
          result[1] += 0.009269988412514484;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9884125144843569;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0038535645472061657;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.930635838150289;
          result[4] += 0.0626204238921002;
          result[5] += 0.002890173410404624;
          result[6] += 0;
        } else {
          result[0] += 0.38934426229508196;
          result[1] += 0;
          result[2] += 0.06967213114754098;
          result[3] += 0;
          result[4] += 0.5409836065573771;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0.0013054830287206266;
          result[1] += 0;
          result[2] += 0.0097911227154047;
          result[3] += 0.8609660574412533;
          result[4] += 0.12532637075718014;
          result[5] += 0.0026109660574412533;
          result[6] += 0;
        } else {
          result[0] += 0.3377245508982036;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6622754491017964;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9987736397082554;
          result[1] += 0;
          result[2] += 0.0010327244562060285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019363583553863036;
        } else {
          result[0] += 0.9997055937193327;
          result[1] += 0;
          result[2] += 0.0002944062806673209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9458602609437874;
          result[1] += 0.0009754907938056335;
          result[2] += 0.006828435556639434;
          result[3] += 0.045116449213510545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012193634922570418;
        } else {
          result[0] += 0;
          result[1] += 0.0024639211545230554;
          result[2] += 0.0024639211545230554;
          result[3] += 0.9950721576909539;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.2624633431085044;
          result[1] += 0.010263929618768328;
          result[2] += 0;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05642023346303502;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.933852140077821;
          result[4] += 0.009727626459143969;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0.09665427509293681;
          result[1] += 0;
          result[2] += 0.01858736059479554;
          result[3] += 0.2825278810408922;
          result[4] += 0.6022304832713755;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9863013698630136;
          result[1] += 0;
          result[2] += 0.0136986301369863;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9992428544387658;
          result[1] += 0;
          result[2] += 0.0007571455612341472;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0072;
          result[2] += 0.008;
          result[3] += 0.9008;
          result[4] += 0.084;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9946332737030411;
          result[1] += 0.005366726296958855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7247985675917636;
          result[1] += 0.0023276633840644584;
          result[2] += 0.001432408236347359;
          result[3] += 0.26893464637421666;
          result[4] += 0.00017905102954341988;
          result[5] += 0.001253357206803939;
          result[6] += 0.0010743061772605193;
        } else {
          result[0] += 0;
          result[1] += 0.01639344262295082;
          result[2] += 0;
          result[3] += 0.9754098360655737;
          result[4] += 0.00819672131147541;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          result[0] += 0.004882017900732304;
          result[1] += 0;
          result[2] += 0.008950366151342556;
          result[3] += 0.7982099267697316;
          result[4] += 0.18633034987794958;
          result[5] += 0.001627339300244101;
          result[6] += 0;
        } else {
          result[0] += 0.0019305019305019305;
          result[1] += 0.0023166023166023165;
          result[2] += 0.00888030888030888;
          result[3] += 0.34015444015444013;
          result[4] += 0.6467181467181468;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9925328554360813;
          result[1] += 0;
          result[2] += 0.005077658303464755;
          result[3] += 0.0011947431302270011;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011947431302270011;
        } else {
          result[0] += 0.8672566371681416;
          result[1] += 0;
          result[2] += 0.13274336283185842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9996722386102918;
          result[1] += 0;
          result[2] += 0.00032776138970829236;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988285122105074;
          result[1] += 0;
          result[2] += 0.0009011444534558889;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002703433360367667;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.5668016194331984;
          result[1] += 0;
          result[2] += 0.009221772379667117;
          result[3] += 0.35919928025191183;
          result[4] += 0.06477732793522267;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8591597210409934;
          result[1] += 0.0011906786868515053;
          result[2] += 0.005613199523728525;
          result[3] += 0.13131484946419458;
          result[4] += 0.0005102908657935023;
          result[5] += 0.0008504847763225039;
          result[6] += 0.001360775642116006;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984894259818731;
          result[5] += 0.0015105740181268882;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006531678641410843;
          result[2] += 0.007184846505551927;
          result[3] += 0.9918354016982365;
          result[4] += 0;
          result[5] += 0.00032658393207054214;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.010526315789473684;
          result[2] += 0;
          result[3] += 0.9894736842105263;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.24242424242424243;
          result[1] += 0.03856749311294766;
          result[2] += 0;
          result[3] += 0.71900826446281;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03233830845771144;
          result[1] += 0;
          result[2] += 0.022388059701492536;
          result[3] += 0.945273631840796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0.0030534351145038168;
          result[2] += 0;
          result[3] += 0.11297709923664122;
          result[4] += 0.8839694656488549;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998046875;
          result[5] += 0.001953125;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003145643284051589;
          result[2] += 0.00566215791129286;
          result[3] += 0.9886756841774144;
          result[4] += 0;
          result[5] += 0.002516514627241271;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9960906958561376;
          result[1] += 0;
          result[2] += 0.003909304143862392;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996969696969698;
          result[1] += 0;
          result[2] += 0.00030303030303030303;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9699899547965847;
          result[1] += 0.0015067805123053742;
          result[2] += 0.006278252134605726;
          result[3] += 0.02084379708689101;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013812154696132596;
        } else {
          result[0] += 0.2845849802371542;
          result[1] += 0.00922266139657444;
          result[2] += 0.013175230566534914;
          result[3] += 0.6930171277997365;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.001718213058419244;
          result[2] += 0;
          result[3] += 0.9982817869415808;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9976998274870615;
          result[1] += 0;
          result[2] += 0.0023001725129384704;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9894736842105263;
          result[1] += 0;
          result[2] += 0.005263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005263157894736842;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9992231333621062;
          result[1] += 0;
          result[2] += 0.0007768666378938282;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.015924252205724125;
          result[1] += 0.006025392726490209;
          result[2] += 0.01334194103722832;
          result[3] += 0.8136432106735529;
          result[4] += 0.15020443296750594;
          result[5] += 0.0008607703894986014;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17791970802919707;
          result[4] += 0.8220802919708029;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0.9;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          result[0] += 0.5379779989523311;
          result[1] += 0;
          result[2] += 0.002793783830976078;
          result[3] += 0.45748210232233283;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001746114894360049;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
          result[0] += 0.9768403639371382;
          result[1] += 0.000206782464846981;
          result[2] += 0.004549214226633583;
          result[3] += 0.017990074441687348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000413564929693962;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          result[0] += 0.7970085470085471;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19764957264957264;
          result[4] += 0.005341880341880342;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08108108108108109;
          result[3] += 0;
          result[4] += 0.8648648648648649;
          result[5] += 0.05405405405405406;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006956521739130435;
          result[3] += 0.9916521739130435;
          result[4] += 0;
          result[5] += 0.001391304347826087;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          result[0] += 0.9786332438078186;
          result[1] += 0.0009549388242315727;
          result[2] += 0.001014622500746046;
          result[3] += 0.019158460161145925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023873470605789316;
        } else {
          result[0] += 0.08155583437892096;
          result[1] += 0.015056461731493099;
          result[2] += 0.01631116687578419;
          result[3] += 0.8870765370138017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5188309140839545;
          result[1] += 0;
          result[2] += 0.0007846214201647705;
          result[3] += 0.48018830914083954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019615535504119262;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938091344469104;
          result[1] += 0;
          result[2] += 0.003621072304637309;
          result[3] += 0.0022193668963906084;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00035042635206167504;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.9278752436647173;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07212475633528265;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010133578995854445;
          result[1] += 0.004606172270842929;
          result[2] += 0.00783049286043298;
          result[3] += 0.9774297558728696;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9081632653061225;
          result[1] += 0;
          result[2] += 0.09183673469387756;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)212) ) ) {
          result[0] += 0;
          result[1] += 0.009535160905840286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904648390941597;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9928400954653938;
          result[1] += 0;
          result[2] += 0.007159904534606206;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995730642344266;
          result[1] += 0;
          result[2] += 0.00034931108092373374;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.76246846497186e-05;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.6807354784788968;
          result[1] += 0;
          result[2] += 0.004178854993731718;
          result[3] += 0.30213121604680315;
          result[4] += 0.012954450480568324;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8593149540517961;
          result[1] += 0.0018379281537176273;
          result[2] += 0.004344193817878028;
          result[3] += 0.13065998329156223;
          result[4] += 0.0005012531328320802;
          result[5] += 0.0011695906432748538;
          result[6] += 0.002172096908939014;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.0069124423963133645;
          result[2] += 0;
          result[3] += 0.22926267281105991;
          result[4] += 0.7626728110599078;
          result[5] += 0.001152073732718894;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01013277428371768;
          result[3] += 0.9870719776380154;
          result[4] += 0.002795248078266946;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9854227405247813;
          result[4] += 0;
          result[5] += 0.004373177842565598;
          result[6] += 0;
        } else {
          result[0] += 0.9950248756218906;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004975124378109453;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.748;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.252;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979803808424698;
          result[1] += 0.00032458165031736875;
          result[2] += 0.0005770340450086555;
          result[3] += 0.0008655510675129833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002524523946912868;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17980513728963685;
          result[1] += 0.003838204901092412;
          result[2] += 0.011219368172423975;
          result[3] += 0.8048420431059935;
          result[4] += 0;
          result[5] += 0.0002952465308532625;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03875968992248062;
          result[1] += 0.10852713178294573;
          result[2] += 0;
          result[3] += 0.8527131782945736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.07142857142857142;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9594155844155844;
          result[1] += 0;
          result[2] += 0.040584415584415584;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75.5) ) ) {
          result[0] += 0.9733487833140209;
          result[1] += 0;
          result[2] += 0.0220162224797219;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004634994206257242;
        } else {
          result[0] += 0.9992481203007518;
          result[1] += 0;
          result[2] += 0.0007518796992481203;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9968717413972888;
          result[1] += 0;
          result[2] += 0.0031282586027111575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998094875214327;
          result[1] += 0;
          result[2] += 9.52562392836731e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.52562392836731e-05;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.019968051118210862;
          result[1] += 0.005391373801916933;
          result[2] += 0.009784345047923323;
          result[3] += 0.7865415335463258;
          result[4] += 0.1761182108626198;
          result[5] += 0.002196485623003195;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00805523590333717;
          result[2] += 0;
          result[3] += 0.0034522439585730723;
          result[4] += 0.9884925201380897;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9984000000000001;
          result[1] += 0;
          result[2] += 0.0012000000000000001;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004000000000000001;
        } else {
          result[0] += 0.34833288153971265;
          result[1] += 0;
          result[2] += 0.0035239902412577935;
          result[3] += 0.6462455950121985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018975332068311196;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9910421021200359;
          result[1] += 0.00029859659599880563;
          result[2] += 0.007763511495968946;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008957897879964168;
        } else {
          result[0] += 0.7070610687022901;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2929389312977099;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0;
          result[1] += 0.07777777777777778;
          result[2] += 0;
          result[3] += 0.9222222222222223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007312614259597806;
          result[1] += 0;
          result[2] += 0.007921998781230956;
          result[3] += 0.9847653869591713;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9292035398230089;
          result[1] += 0;
          result[2] += 0.07079646017699115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016;
          result[1] += 0.056;
          result[2] += 0;
          result[3] += 0.008;
          result[4] += 0.92;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0776978417266187;
          result[4] += 0.9223021582733812;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.9029411764705882;
          result[4] += 0.08176470588235295;
          result[5] += 0.0035294117647058825;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9995768905300407;
          result[1] += 0;
          result[2] += 0.00038464497269020693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.8464497269020696e-05;
        } else {
          result[0] += 0.6857396100059091;
          result[1] += 0.0014772503446917474;
          result[2] += 0.006105968091392556;
          result[3] += 0.3050029545006894;
          result[4] += 0;
          result[5] += 0.0001969667126255663;
          result[6] += 0.0014772503446917474;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-114.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0.0037735849056603774;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9905660377358491;
          result[5] += 0.005660377358490566;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.00092109303039607;
          result[1] += 0;
          result[2] += 0.003070310101320233;
          result[3] += 0.9938593797973595;
          result[4] += 0;
          result[5] += 0.0021492170709241634;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9938334140862441;
          result[1] += 0.0007487997180989297;
          result[2] += 0.001982116900850108;
          result[3] += 0.003215434083601286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022023521120556754;
        } else {
          result[0] += 0.006968641114982578;
          result[1] += 0.03832752613240418;
          result[2] += 0;
          result[3] += 0.9547038327526133;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9782608695652174;
          result[1] += 0;
          result[2] += 0.021739130434782608;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9991582491582491;
          result[1] += 0;
          result[2] += 0.0008417508417508417;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9091915836101883;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09080841638981174;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9884991374353077;
          result[1] += 0;
          result[2] += 0.008338125359401956;
          result[3] += 0.0014376078205865443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001725129384703853;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005438259756877799;
          result[3] += 0.972168905950096;
          result[4] += 0.02015355086372361;
          result[5] += 0.0022392834293026233;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.98375;
          result[1] += 0;
          result[2] += 0.01625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
          result[0] += 0.9980314960629921;
          result[1] += 0;
          result[2] += 0.0016404199475065617;
          result[3] += 0.00032808398950131233;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9872958257713249;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012704174228675136;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9952380952380953;
          result[1] += 0.00032175032175032174;
          result[2] += 0.0008365508365508366;
          result[3] += 0.0035392535392535394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.435006435006435e-05;
        } else {
          result[0] += 0.9519230769230769;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04807692307692308;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9601328903654485;
          result[1] += 0;
          result[2] += 0.0013842746400885937;
          result[3] += 0.0384828349944629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5237276478679505;
          result[1] += 0;
          result[2] += 0.007565337001375516;
          result[3] += 0.46801925722145804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000687757909215956;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.953446909667195;
          result[1] += 0.003367670364500793;
          result[2] += 0.0053486529318542;
          result[3] += 0.0364500792393027;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013866877971473854;
        } else {
          result[0] += 0.6565787045580366;
          result[1] += 0;
          result[2] += 0.002583502491234545;
          result[3] += 0.34065325705849786;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018453589223103894;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.42543859649122806;
          result[1] += 0;
          result[2] += 0.005116959064327485;
          result[3] += 0.5687134502923976;
          result[4] += 0.0007309941520467836;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.36930860033726814;
          result[1] += 0.023608768971332208;
          result[2] += 0;
          result[3] += 0.6070826306913997;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024279210925644917;
          result[1] += 0;
          result[2] += 0.015174506828528073;
          result[3] += 0.960546282245827;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
          result[0] += 0.0014184397163120568;
          result[1] += 0.009929078014184398;
          result[2] += 0;
          result[3] += 0.09219858156028368;
          result[4] += 0.8964539007092198;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5882352941176471;
          result[4] += 0.4117647058823529;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.10468174644923724;
          result[1] += 0;
          result[2] += 0.004734350341925302;
          result[3] += 0.820620725933719;
          result[4] += 0.06733298264071541;
          result[5] += 0.0026301946344029457;
          result[6] += 0;
        } else {
          result[0] += 0.9949546279491833;
          result[1] += 0.00043557168784029036;
          result[2] += 0.0009800362976406533;
          result[3] += 0.003484573502722323;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014519056261343014;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.1848492931448386;
          result[1] += 0;
          result[2] += 0.005068018138170179;
          result[3] += 0.8055481461723126;
          result[4] += 0.0040010669511869835;
          result[5] += 0.0005334755934915977;
          result[6] += 0;
        } else {
          result[0] += 0.9937045052134567;
          result[1] += 0;
          result[2] += 0.004131418453669093;
          result[3] += 0.0005902026362384419;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015738736966358449;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)9643) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9892857142857143;
          result[1] += 0;
          result[2] += 0.010714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999535396945235;
          result[1] += 0;
          result[2] += 0.00046460305476508506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.02244039270687237;
          result[1] += 0.005329593267882188;
          result[2] += 0.0030855539971949507;
          result[3] += 0.9660589060308555;
          result[4] += 0.0016830294530154279;
          result[5] += 0.001402524544179523;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017699115044247787;
          result[2] += 0;
          result[3] += 0.017699115044247787;
          result[4] += 0.9646017699115044;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06357388316151202;
          result[3] += 0.9347079037800687;
          result[4] += 0;
          result[5] += 0.001718213058419244;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.45899893503727374;
          result[1] += 0;
          result[2] += 0.004259850905218319;
          result[3] += 0.5354632587859426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012779552715654955;
        } else {
          result[0] += 0.9295323510570147;
          result[1] += 0.0006406149903907751;
          result[2] += 0.0019218449711723255;
          result[3] += 0.06790518898142217;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9944003733084461;
          result[1] += 0;
          result[2] += 0.005132991133924405;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004666355576294914;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9969800105459949;
          result[1] += 0;
          result[2] += 0.00033555438377834234;
          result[3] += 0.0025885623891472127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.587268107952639e-05;
        } else {
          result[0] += 0.09157509157509157;
          result[1] += 0.01098901098901099;
          result[2] += 0.03296703296703297;
          result[3] += 0.8644688644688645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          result[0] += 0.966350710900474;
          result[1] += 0.003080568720379147;
          result[2] += 0.002369668246445498;
          result[3] += 0.027014218009478674;
          result[4] += 0;
          result[5] += 0.0009478672985781991;
          result[6] += 0.00023696682464454977;
        } else {
          result[0] += 0.6803249419746474;
          result[1] += 0;
          result[2] += 0.005623995715050884;
          result[3] += 0.28664524192108554;
          result[4] += 0.026423852883413677;
          result[5] += 0.00017853954650955185;
          result[6] += 0.0008034279592929834;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.3178939034045922;
          result[1] += 0;
          result[2] += 0.007125890736342043;
          result[3] += 0.6749802058590657;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2467) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13324) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0;
          result[3] += 0.8947368421052632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.010958904109589041;
          result[2] += 0;
          result[3] += 0.989041095890411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9601449275362319;
          result[1] += 0;
          result[2] += 0.03985507246376811;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5432692307692307;
          result[4] += 0.4567307692307692;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.2453488372093023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7418604651162791;
          result[4] += 0.005813953488372093;
          result[5] += 0.0069767441860465115;
          result[6] += 0;
        } else {
          result[0] += 0.9945340441325325;
          result[1] += 0.001079694986166408;
          result[2] += 0.0014170996693434106;
          result[3] += 0.002564275592145219;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000404885619812403;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9450274862568716;
          result[1] += 0;
          result[2] += 0.001999000499750125;
          result[3] += 0.05297351324337831;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16161902066232664;
          result[1] += 0.007642230399094254;
          result[2] += 0.004811774695726012;
          result[3] += 0.7571469006510048;
          result[4] += 0.06878007359184829;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-164.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999085337967621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9.146620323790359e-05;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0.70625;
          result[1] += 0;
          result[2] += 0.090625;
          result[3] += 0.203125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03076923076923077;
          result[4] += 0.9692307692307692;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.47058823529411764;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0.10588235294117647;
          result[5] += 0.023529411764705882;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.6785714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32142857142857145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961522883758607;
          result[1] += 0;
          result[2] += 0.003037667071688943;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008100445524503848;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9978678038379531;
          result[4] += 0.0012183978068839479;
          result[5] += 0.0009137983551629608;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014285714285714285;
          result[4] += 0.9857142857142858;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.22916666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.020833333333333332;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009358914365933554;
          result[3] += 0;
          result[4] += 0.9901731399157698;
          result[5] += 0.00046794571829667766;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.030959752321981424;
          result[2] += 0;
          result[3] += 0.9690402476780186;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9975899214898667;
          result[1] += 0.0006938104801898849;
          result[2] += 0.001460653642505021;
          result[3] += 7.303268212525105e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018258170531312764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8125;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.013788348845225784;
          result[1] += 0;
          result[2] += 0.006549465701482247;
          result[3] += 0.979662185453292;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8428080885158337;
          result[1] += 0;
          result[2] += 0.01030141167493323;
          result[3] += 0.1457458985120183;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011446012972148034;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983957219251337;
          result[1] += 0;
          result[2] += 0.0015151515151515152;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.9126559714795e-05;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.0017513134851138354;
          result[1] += 0.005253940455341506;
          result[2] += 0;
          result[3] += 0.27845884413309985;
          result[4] += 0.712784588441331;
          result[5] += 0.0017513134851138354;
          result[6] += 0;
        } else {
          result[0] += 0.5435532557136696;
          result[1] += 0.0023717119448037945;
          result[2] += 0.01164294954721863;
          result[3] += 0.4361793876670979;
          result[4] += 0.004527813712807244;
          result[5] += 0.0010780508840017248;
          result[6] += 0.000646830530401035;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.71548900327562;
          result[1] += 0;
          result[2] += 0.0014038371548900327;
          result[3] += 0.28006551240056154;
          result[4] += 0.0028076743097800653;
          result[5] += 0.0002339728591483388;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0016025641025641025;
          result[3] += 0.8004807692307693;
          result[4] += 0.19791666666666666;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.00546448087431694;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7759562841530054;
          result[4] += 0.2185792349726776;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0028653295128939827;
          result[1] += 0.022922636103151862;
          result[2] += 0;
          result[3] += 0.37822349570200575;
          result[4] += 0.5959885386819485;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10126582278481013;
          result[4] += 0.8987341772151899;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9872537659327926;
          result[1] += 0;
          result[2] += 0.008111239860950173;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004634994206257242;
        } else {
          result[0] += 0.9991872396627045;
          result[1] += 0;
          result[2] += 0.00081276033729554;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.022380467955239066;
          result[1] += 0.005086469989827061;
          result[2] += 0.012970498474059004;
          result[3] += 0.9397253306205494;
          result[4] += 0.018056968463886068;
          result[5] += 0.0017802644964394713;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9814034217703943;
          result[1] += 0.0002479543763947434;
          result[2] += 0.005454996280684354;
          result[3] += 0.012025787255145054;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008678403173816018;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0.002506265664160401;
          result[2] += 0;
          result[3] += 0.08270676691729323;
          result[4] += 0.9147869674185464;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9901547116736991;
          result[1] += 0;
          result[2] += 0.009845288326300985;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07839195979899498;
          result[1] += 0.011055276381909548;
          result[2] += 0;
          result[3] += 0.9105527638190954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019350380096751902;
          result[4] += 0.9806496199032481;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
          result[0] += 0.9766416610374373;
          result[1] += 0.0004977423827638923;
          result[2] += 0.0007110605468055605;
          result[3] += 0.02197177089629182;
          result[4] += 0;
          result[5] += 3.555302734027803e-05;
          result[6] += 0.0001422121093611121;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.996222851746931;
          result[4] += 0.0028328611898017;
          result[5] += 0.0009442870632672333;
          result[6] += 0;
        } else {
          result[0] += 0.10674157303370788;
          result[1] += 0;
          result[2] += 0.08988764044943821;
          result[3] += 0;
          result[4] += 0.7977528089887641;
          result[5] += 0.005617977528089888;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8253105590062112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17468944099378883;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.31016171856142893;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6898382814385711;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9805134549953604;
          result[1] += 0;
          result[2] += 0.015774822146613052;
          result[3] += 0.001546551190844417;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021651716671821837;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013908205841446453;
          result[3] += 0;
          result[4] += 0.9958275382475661;
          result[5] += 0.0027816411682892906;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.0013831258644536654;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986168741355463;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0003278688524590164;
          result[1] += 0;
          result[2] += 0.006885245901639345;
          result[3] += 0.9898360655737705;
          result[4] += 0;
          result[5] += 0.0029508196721311475;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03278688524590164;
          result[2] += 0;
          result[3] += 0.001639344262295082;
          result[4] += 0.9655737704918033;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9791666666666666;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9992953235105702;
          result[1] += 0;
          result[2] += 0.0005765534913516977;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012812299807815503;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.8909324995401876;
          result[1] += 0.0036784991723376862;
          result[2] += 0.012139047268714365;
          result[3] += 0.09214640426705904;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001103549751701306;
        } else {
          result[0] += 0.9394673123486683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05871670702179177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018159806295399517;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0;
          result[1] += 0.4166666666666667;
          result[2] += 0.5;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002170767004341534;
          result[3] += 0.9978292329956585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9981481481481481;
          result[5] += 0.001851851851851852;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9984472049689441;
          result[4] += 0;
          result[5] += 0.0015527950310559005;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.17647058823529413;
          result[2] += 0.7352941176470589;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08823529411764706;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9995132466448787;
          result[1] += 0.0003476809679438148;
          result[2] += 0.00013907238717752592;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9890780597494379;
          result[1] += 0;
          result[2] += 0.0009637006103437199;
          result[3] += 0.009958239640218438;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7592592592592593;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.24074074074074073;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9255292444146934;
          result[1] += 0.0009204250690318803;
          result[2] += 0.0042674253200569;
          result[3] += 0.06819513011463477;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010877750815831313;
        } else {
          result[0] += 0.2597054886211513;
          result[1] += 0.01740294511378849;
          result[2] += 0.014725568942436412;
          result[3] += 0.7081659973226239;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.04254302103250478;
          result[1] += 0;
          result[2] += 0.007170172084130019;
          result[3] += 0.9502868068833652;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9546517064048621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045348293595137916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.988110964332893;
          result[1] += 0;
          result[2] += 0.011889035667107;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5358024691358024;
          result[1] += 0;
          result[2] += 0.024691358024691357;
          result[3] += 0.43950617283950616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011792452830188679;
          result[1] += 0.012971698113207548;
          result[2] += 0;
          result[3] += 0.9858490566037735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987390795280555;
          result[1] += 0;
          result[2] += 0.0011708547239484824;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.006574799603711e-05;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.020833333333333332;
          result[2] += 0;
          result[3] += 0.9791666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0046439628482972135;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953560371517027;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.6710740634281882;
          result[1] += 0.0016288205423014275;
          result[2] += 0.004790648653827728;
          result[3] += 0.3216441506179937;
          result[4] += 0;
          result[5] += 0.00019162594615310913;
          result[6] += 0.0006706908115358819;
        } else {
          result[0] += 0.018444266238973536;
          result[1] += 0;
          result[2] += 0.01603849238171612;
          result[3] += 0.8532477947072975;
          result[4] += 0.10665597433841219;
          result[5] += 0.0056134723336006415;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-144) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015600624024961;
          result[1] += 0.0078003120124804995;
          result[2] += 0;
          result[3] += 0.0530421216848674;
          result[4] += 0.9375975039001561;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)116.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1702127659574468;
          result[4] += 0.8297872340425532;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.16316916488222702;
          result[1] += 0.006852248394004283;
          result[2] += 0;
          result[3] += 0.5832976445396146;
          result[4] += 0.2466809421841542;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3989033584647019;
          result[1] += 0;
          result[2] += 0.010966415352981495;
          result[3] += 0.36120630568882794;
          result[4] += 0.2289239204934887;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)776) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961779179207874;
          result[1] += 0;
          result[2] += 0.0005255362858917395;
          result[3] += 0.0032487697673307535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.777602599015814e-05;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9924585218702866;
          result[5] += 0.0030165912518853697;
          result[6] += 0;
        } else {
          result[0] += 0.032490974729241874;
          result[1] += 0.018050541516245487;
          result[2] += 0.02888086642599278;
          result[3] += 0.9205776173285198;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          result[0] += 0.962627669452182;
          result[1] += 0.0016248839368616526;
          result[2] += 0.001392757660167131;
          result[3] += 0.033426183844011144;
          result[4] += 0;
          result[5] += 0.0006963788300835655;
          result[6] += 0.00023212627669452182;
        } else {
          result[0] += 0.716410095297937;
          result[1] += 0;
          result[2] += 0.005236150382238978;
          result[3] += 0.26212168813488324;
          result[4] += 0.015289559116137816;
          result[5] += 0.00041889203057911826;
          result[6] += 0.0005236150382238977;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.34432515337423314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6556748466257669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.967741935483871;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004885197850512946;
          result[1] += 0.008304836345872008;
          result[2] += 0.004396678065461651;
          result[3] += 0.9824132877381534;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9774011299435028;
          result[1] += 0;
          result[2] += 0.022598870056497175;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3164.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981741829468688;
          result[1] += 0;
          result[2] += 0.0018258170531312763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7589028640703137;
          result[1] += 0.001969995453856645;
          result[2] += 0.005455372026064555;
          result[3] += 0.21579027125322017;
          result[4] += 0.01697226852553417;
          result[5] += 0.0004546143355053796;
          result[6] += 0.0004546143355053796;
        } else {
          result[0] += 0;
          result[1] += 0.010638297872340427;
          result[2] += 0;
          result[3] += 0.9787234042553192;
          result[4] += 0.007092198581560284;
          result[5] += 0.003546099290780142;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8973927670311187;
          result[1] += 0;
          result[2] += 0.008830950378469303;
          result[3] += 0.08873002523128681;
          result[4] += 0.0016820857863751053;
          result[5] += 0.0004205214465937763;
          result[6] += 0.0029436501261564346;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007681365576102418;
          result[3] += 0.802275960170697;
          result[4] += 0.19004267425320057;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9943342776203966;
          result[1] += 0;
          result[2] += 0.003777148253068933;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018885741265344666;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9993014320642682;
          result[1] += 0;
          result[2] += 0.0006985679357317499;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.027094277025158972;
          result[1] += 0.007188277578103401;
          result[2] += 0.007464749792645839;
          result[3] += 0.9416643627315455;
          result[4] += 0.014929499585291679;
          result[5] += 0.0016588332872546309;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004426955238563699;
          result[2] += 0;
          result[3] += 0.1529758976881456;
          result[4] += 0.8425971470732907;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9898796498905909;
          result[1] += 0;
          result[2] += 0.004239606126914661;
          result[3] += 0.004786652078774617;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010940919037199124;
        } else {
          result[0] += 0.8851251840942562;
          result[1] += 0;
          result[2] += 0.017673048600883652;
          result[3] += 0.09720176730486009;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.0057361376673040155;
          result[2] += 0.036328871892925434;
          result[3] += 0.9579349904397706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0027972027972027976;
          result[3] += 0;
          result[4] += 0.9958041958041959;
          result[5] += 0.0013986013986013988;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.99609375;
          result[1] += 0;
          result[2] += 0.00390625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998341074983411;
          result[1] += 0;
          result[2] += 0.00016589250165892502;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.5437587986860629;
          result[1] += 0.0017597372125762554;
          result[2] += 0.009854528390427029;
          result[3] += 0.42045987799155327;
          result[4] += 0.022641952135147816;
          result[5] += 0.0009385265133740028;
          result[6] += 0.0005865790708587518;
        } else {
          result[0] += 0.6061026352288489;
          result[1] += 0;
          result[2] += 0.0005944125222904697;
          result[3] += 0.37527243907271657;
          result[4] += 0.017237963146423622;
          result[5] += 0.00019813750743015657;
          result[6] += 0.0005944125222904697;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
          result[0] += 0;
          result[1] += 0.0010626992561105207;
          result[2] += 0;
          result[3] += 0.9968119022316685;
          result[4] += 0.0021253985122210413;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9661016949152542;
          result[1] += 0.03389830508474576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.22382671480144403;
          result[1] += 0;
          result[2] += 0.02888086642599278;
          result[3] += 0.7472924187725631;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014527845036319613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9854721549636803;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9722222222222222;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
          result[0] += 0.24642857142857144;
          result[1] += 0.017857142857142856;
          result[2] += 0;
          result[3] += 0.7339285714285714;
          result[4] += 0.0017857142857142857;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009325681492109038;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.990674318507891;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008021390374331552;
          result[1] += 0.016042780748663103;
          result[2] += 0;
          result[3] += 0.339572192513369;
          result[4] += 0.6363636363636364;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02654867256637168;
          result[2] += 0;
          result[3] += 0.9734513274336283;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-184) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9997737146994932;
          result[1] += 0;
          result[2] += 0.00018102824040550325;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.525706010137581e-05;
        } else {
          result[0] += 0.9992677568952892;
          result[1] += 0;
          result[2] += 0.000732243104710764;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7076824309865184;
          result[1] += 0.0034239246736571805;
          result[2] += 0.0023539482131393116;
          result[3] += 0.2854697196661674;
          result[4] += 0.00021399529210357378;
          result[5] += 0.0006419858763107212;
          result[6] += 0.00021399529210357378;
        } else {
          result[0] += 0.8927722301474085;
          result[1] += 0;
          result[2] += 0.009747979077508321;
          result[3] += 0.06371849738468854;
          result[4] += 0.03209700427960057;
          result[5] += 0.0007132667617689016;
          result[6] += 0.0009510223490252021;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001633453119895459;
          result[2] += 0.00914733747141457;
          result[3] += 0.98921920940869;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.993421052631579;
          result[1] += 0;
          result[2] += 0.006578947368421052;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          result[0] += 0.7067307692307693;
          result[1] += 0;
          result[2] += 0.0038461538461538464;
          result[3] += 0.26466346153846154;
          result[4] += 0.02403846153846154;
          result[5] += 0.0004807692307692308;
          result[6] += 0.0002403846153846154;
        } else {
          result[0] += 0.09004237288135593;
          result[1] += 0.005296610169491525;
          result[2] += 0;
          result[3] += 0.5180084745762712;
          result[4] += 0.3866525423728814;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013428120063191154;
          result[3] += 0.9865718799368088;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07614213197969544;
          result[3] += 0;
          result[4] += 0.9238578680203046;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          result[0] += 0.997757167969934;
          result[1] += 6.0617081893677636e-05;
          result[2] += 0.000666787900830454;
          result[3] += 0.0010911074740861974;
          result[4] += 0.00012123416378735527;
          result[5] += 0;
          result[6] += 0.0003030854094683882;
        } else {
          result[0] += 0.8744063324538258;
          result[1] += 0.008970976253298154;
          result[2] += 0.0031662269129287598;
          result[3] += 0.10817941952506596;
          result[4] += 0;
          result[5] += 0.0031662269129287598;
          result[6] += 0.0021108179419525065;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4429065743944637;
          result[1] += 0;
          result[2] += 0.0034602076124567475;
          result[3] += 0.5397923875432526;
          result[4] += 0.01384083044982699;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.006551240056153486;
          result[1] += 0.006083294337856809;
          result[2] += 0.018249883013570427;
          result[3] += 0.9691155825924193;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9901423877327492;
          result[1] += 0;
          result[2] += 0.007667031763417305;
          result[3] += 0.002190580503833516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0012674271229404308;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9974651457541192;
          result[5] += 0.0012674271229404308;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07251328777524678;
          result[1] += 0;
          result[2] += 0.008731966590736523;
          result[3] += 0.9168564920273349;
          result[4] += 0;
          result[5] += 0.0018982536066818527;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9793103448275862;
          result[4] += 0.020689655172413793;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.9444444444444444;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
          result[0] += 0;
          result[1] += 0.00505369551484523;
          result[2] += 0;
          result[3] += 0.0018951358180669614;
          result[4] += 0.9930511686670878;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.09302325581395349;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9069767441860465;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          result[0] += 0.9914529914529915;
          result[1] += 0;
          result[2] += 0.008547008547008548;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.4110169491525424;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5889830508474576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003355704697986577;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9966442953020134;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)22.5) ) ) {
          result[0] += 0.9918637653736991;
          result[1] += 0.0008325449385052034;
          result[2] += 0.0017029328287606433;
          result[3] += 0.005411542100283822;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001892147587511826;
        } else {
          result[0] += 0.9825721153846154;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017427884615384616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.42253824606765783;
          result[1] += 0;
          result[2] += 0.003447532859297565;
          result[3] += 0.5740142210730446;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8916316958775611;
          result[1] += 0;
          result[2] += 0.003949642063687978;
          result[3] += 0.10219698839792644;
          result[4] += 0;
          result[5] += 0.0004937052579609973;
          result[6] += 0.0017279684028634905;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-168.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012578616352201259;
          result[2] += 0;
          result[3] += 0.0037735849056603774;
          result[4] += 0.9836477987421384;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9993932038834952;
          result[5] += 0.0006067961165048543;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006626696118649416;
          result[3] += 0.9902177343010413;
          result[4] += 0;
          result[5] += 0.003155569580309246;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0;
          result[1] += 0.04945054945054945;
          result[2] += 0;
          result[3] += 0.9505494505494505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 0.9975814893693824;
          result[1] += 0.0006497491246435404;
          result[2] += 0.0015521784644262355;
          result[3] += 0.0001082915207739234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001082915207739234;
        } else {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.4423484527342094;
          result[1] += 0;
          result[2] += 0.002543450614667232;
          result[3] += 0.5551080966511234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8890022965042103;
          result[1] += 0;
          result[2] += 0.003827507017096198;
          result[3] += 0.1051288594029089;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002041337075784639;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.97315599388804;
          result[1] += 0.0007292679538824837;
          result[2] += 0.0007987220447284345;
          result[3] += 0.024968745659119322;
          result[4] += 0;
          result[5] += 0.0002430893179608279;
          result[6] += 0.00010418113626892623;
        } else {
          result[0] += 0.17667689609820253;
          result[1] += 0;
          result[2] += 0.014905743095133712;
          result[3] += 0.6953090749671197;
          result[4] += 0.11310828583954406;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17226552002149959;
          result[1] += 0;
          result[2] += 0.00806234883095942;
          result[3] += 0.8164471916151572;
          result[4] += 0.002149959688255845;
          result[5] += 0.0010749798441279225;
          result[6] += 0;
        } else {
          result[0] += 0.9942868802285248;
          result[1] += 0;
          result[2] += 0.004080799836768008;
          result[3] += 0.0004080799836768007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012242399510304022;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014318010550113038;
          result[2] += 0;
          result[3] += 0.9856819894498869;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.9054054054054054;
          result[1] += 0;
          result[2] += 0.0945945945945946;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.0009950248756218907;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9665008291873964;
          result[4] += 0.03150912106135988;
          result[5] += 0.0009950248756218907;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7130434782608696;
          result[4] += 0.28695652173913044;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005397070161912105;
          result[2] += 0.013107170393215111;
          result[3] += 0;
          result[4] += 0.976869699306091;
          result[5] += 0.004626060138781804;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.76;
          result[1] += 0.24;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.998992950654582;
          result[1] += 0;
          result[2] += 0.0002014098690835851;
          result[3] += 0.0008056394763343404;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9857414448669202;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014258555133079848;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.8633900928792569;
          result[1] += 0;
          result[2] += 0.0025154798761609907;
          result[3] += 0.13332043343653252;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007739938080495357;
        } else {
          result[0] += 0.3902255639097744;
          result[1] += 0;
          result[2] += 0.006766917293233083;
          result[3] += 0.6030075187969924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9925233644859813;
          result[1] += 0;
          result[2] += 0.007476635514018692;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996978121600387;
          result[1] += 0;
          result[2] += 0.00030218783996131994;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.4952497701501686;
          result[1] += 0.003677597303095311;
          result[2] += 0.0027581979773214833;
          result[3] += 0.49800796812749004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030646644192460924;
        } else {
          result[0] += 0.8705405405405405;
          result[1] += 0.004324324324324324;
          result[2] += 0.01108108108108108;
          result[3] += 0.11405405405405405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0865979381443299;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.911340206185567;
          result[4] += 0.0005154639175257732;
          result[5] += 0.0015463917525773195;
          result[6] += 0;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07272727272727272;
          result[4] += 0.07272727272727272;
          result[5] += 0.03636363636363636;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)44) ) ) {
          result[0] += 0.9948244661599711;
          result[1] += 0.0006152732537097359;
          result[2] += 0.0011219688744118713;
          result[3] += 0.003221136445892147;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002171552660152009;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0.8947368421052632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.05454545454545454;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.8787878787878788;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22734138972809667;
          result[1] += 0;
          result[2] += 0.0022658610271903325;
          result[3] += 0.5120845921450151;
          result[4] += 0.2583081570996979;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3375912408759124;
          result[1] += 0.0036496350364963502;
          result[2] += 0.02068126520681265;
          result[3] += 0.6380778588807786;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9230769230769231;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          result[0] += 0.9622641509433962;
          result[1] += 0;
          result[2] += 0.033542976939203356;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0041928721174004195;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.050761421319796954;
          result[3] += 0;
          result[4] += 0.9289340101522843;
          result[5] += 0.02030456852791878;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.4844543147208122;
          result[1] += 0;
          result[2] += 0.00031725888324873094;
          result[3] += 0.5152284263959391;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9000374391613626;
          result[1] += 0;
          result[2] += 0.0026207412953949826;
          result[3] += 0.09397229502059151;
          result[4] += 0.002246349681767128;
          result[5] += 0;
          result[6] += 0.001123174840883564;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0.04864864864864865;
          result[2] += 0;
          result[3] += 0.9243243243243243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2197360872059667;
          result[1] += 0.004589787722317842;
          result[2] += 0;
          result[3] += 0.7756741250717154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 0.5866028708133971;
          result[1] += 0;
          result[2] += 0.012440191387559809;
          result[3] += 0.40095693779904307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006896551724137931;
          result[1] += 0;
          result[2] += 0.11724137931034483;
          result[3] += 0.8758620689655172;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.023952095808383235;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9700598802395209;
          result[5] += 0.005988023952095809;
          result[6] += 0;
        } else {
          result[0] += 0.10626076967260195;
          result[1] += 0;
          result[2] += 0.00861573808156232;
          result[3] += 0.8839747271682941;
          result[4] += 0;
          result[5] += 0.0011487650775416428;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9938935737132888;
          result[1] += 0.0006542599592904915;
          result[2] += 0.0010904332654841523;
          result[3] += 0.004034603082291364;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032712997964524573;
        } else {
          result[0] += 0.6416915651574351;
          result[1] += 0;
          result[2] += 0.00425189611583544;
          result[3] += 0.3533670420592967;
          result[4] += 0;
          result[5] += 0.00011491611123879568;
          result[6] += 0.0005745805561939783;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9974025974025974;
          result[5] += 0.0025974025974025974;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.5;
          result[2] += 0.4166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00038358266206367476;
          result[1] += 0.001917913310318374;
          result[2] += 0.0026850786344457234;
          result[3] += 0.9946298427311087;
          result[4] += 0;
          result[5] += 0.00038358266206367476;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.9848821698532682;
          result[1] += 0.0029346376167185416;
          result[2] += 0.002845709204090707;
          result[3] += 0.00853712761227212;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008003557136505113;
        } else {
          result[0] += 0.8868061609997094;
          result[1] += 0;
          result[2] += 0.00014530659691950015;
          result[3] += 0.11304853240337111;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9998178340468167;
          result[1] += 0;
          result[2] += 0.00018216595318335004;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1206896551724138;
          result[3] += 0.8793103448275862;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.6121814791796146;
          result[1] += 0;
          result[2] += 0.00435052827843381;
          result[3] += 0.3834679925419515;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3797892720306513;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6202107279693486;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-189.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9862804878048782;
          result[1] += 0;
          result[2] += 0.011585365853658538;
          result[3] += 0.00030487804878048786;
          result[4] += 0;
          result[5] += 0.00030487804878048786;
          result[6] += 0.0015243902439024393;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.000974025974025974;
          result[1] += 0;
          result[2] += 0.00974025974025974;
          result[3] += 0.9685064935064935;
          result[4] += 0.01883116883116883;
          result[5] += 0.001948051948051948;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013714285714285714;
          result[2] += 0;
          result[3] += 0.014857142857142857;
          result[4] += 0.9714285714285714;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          result[0] += 0;
          result[1] += 0.00851063829787234;
          result[2] += 0;
          result[3] += 0.9914893617021276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9973624441351014;
          result[1] += 0.0004029599238039417;
          result[2] += 0.0019415341783280827;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000293061762766503;
        } else {
          result[0] += 0.09615384615384616;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.017271157167530225;
          result[1] += 0;
          result[2] += 0.007253886010362694;
          result[3] += 0.975474956822107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8389996092223525;
          result[1] += 0;
          result[2] += 0.01406799531066823;
          result[3] += 0.1445877295818679;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023446658851113715;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06791907514450866;
          result[1] += 0.007947976878612716;
          result[2] += 0;
          result[3] += 0.9234104046242775;
          result[4] += 0.000722543352601156;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.557843137254902;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.4303921568627451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.015748031496062992;
          result[1] += 0;
          result[2] += 0.07086614173228346;
          result[3] += 0.9133858267716536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003436426116838488;
          result[1] += 0.020618556701030927;
          result[2] += 0;
          result[3] += 0.9759450171821306;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987684729064039;
          result[5] += 0.0012315270935960591;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01239399869536856;
          result[3] += 0.9836921069797783;
          result[4] += 0;
          result[5] += 0.00391389432485323;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9997436226124856;
          result[1] += 0;
          result[2] += 0.00025637738751442123;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6652942601114071;
          result[1] += 0;
          result[2] += 0.007992249939452653;
          result[3] += 0.3257447323807217;
          result[4] += 0;
          result[5] += 0.0004843787842092516;
          result[6] += 0.0004843787842092516;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9991740997687479;
          result[1] += 0;
          result[2] += 0.0006607201850016518;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016518004625041294;
        } else {
          result[0] += 0.6961055890500244;
          result[1] += 0.0016294606485253381;
          result[2] += 0.002607137037640541;
          result[3] += 0.29884308293954703;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008147303242626691;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9996207492309637;
          result[1] += 0;
          result[2] += 0.0003792507690362817;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987990392313851;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012009607686148918;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7351083470994073;
          result[1] += 0.0011660674375668062;
          result[2] += 0.006316198620153534;
          result[3] += 0.22981245748712473;
          result[4] += 0.02604217277232534;
          result[5] += 0.00038868914585560207;
          result[6] += 0.0011660674375668062;
        } else {
          result[0] += 0;
          result[1] += 0.0009730781706130394;
          result[2] += 0.010379500486539087;
          result[3] += 0.9837820304897827;
          result[4] += 0.004865390853065197;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
          result[0] += 0.8624338624338624;
          result[1] += 0;
          result[2] += 0.021164021164021163;
          result[3] += 0.1164021164021164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.24458204334365324;
          result[1] += 0.021671826625386997;
          result[2] += 0;
          result[3] += 0.7337461300309598;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014450867052023121;
          result[2] += 0;
          result[3] += 0.9855491329479769;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010542962572482868;
          result[3] += 0.7559304164470216;
          result[4] += 0.23194517659462308;
          result[5] += 0.0015814443858724301;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.036101083032490974;
          result[2] += 0;
          result[3] += 0.17689530685920576;
          result[4] += 0.7870036101083032;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9962212298179319;
          result[1] += 0;
          result[2] += 0.0006870491240123669;
          result[3] += 0.003091721058055651;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5680100755667506;
          result[1] += 0;
          result[2] += 0.0069269521410579345;
          result[3] += 0.4241183879093199;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009445843828715365;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9990476190476191;
          result[1] += 0;
          result[2] += 0.0009523809523809524;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.971875;
          result[1] += 0;
          result[2] += 0.015625;
          result[3] += 0.0125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.9049696509863427;
          result[1] += 0.0005690440060698026;
          result[2] += 0.0016597116843702574;
          result[3] += 0.09227996965098632;
          result[4] += 0;
          result[5] += 9.484066767830043e-05;
          result[6] += 0.00042678300455235195;
        } else {
          result[0] += 0.9993941229930324;
          result[1] += 0;
          result[2] += 0.0006058770069675856;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4516) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0.001017293997965412;
          result[1] += 0.0076297049847405905;
          result[2] += 0.00508646998982706;
          result[3] += 0.8830111902339777;
          result[4] += 0.10223804679552391;
          result[5] += 0.001017293997965412;
          result[6] += 0;
        } else {
          result[0] += 0.9965635738831615;
          result[1] += 0.003436426116838488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3783068783068783;
          result[1] += 0;
          result[2] += 0.07936507936507936;
          result[3] += 0.5423280423280423;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06103286384976526;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6995305164319249;
          result[4] += 0.23943661971830985;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9821428571428571;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008888888888888889;
          result[1] += 0.03111111111111111;
          result[2] += 0;
          result[3] += 0.022222222222222223;
          result[4] += 0.9377777777777778;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.8845849802371542;
          result[1] += 0;
          result[2] += 0.0007905138339920949;
          result[3] += 0.10909090909090909;
          result[4] += 0.003952569169960474;
          result[5] += 0.0015810276679841897;
          result[6] += 0;
        } else {
          result[0] += 0.9225262671746911;
          result[1] += 0;
          result[2] += 0.0008082207597275141;
          result[3] += 0.0742408497863988;
          result[4] += 0.0024246622791825423;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.07151979565772669;
          result[1] += 0;
          result[2] += 0.010217113665389528;
          result[3] += 0.8173690932311622;
          result[4] += 0.10089399744572158;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.993002099370189;
          result[1] += 0;
          result[2] += 0.004198740377886635;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002799160251924423;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9872895165670831;
          result[1] += 0.000977729494839761;
          result[2] += 0.001412275936990766;
          result[3] += 0.009940249864204238;
          result[4] += 0;
          result[5] += 0.00021727322107550245;
          result[6] += 0.00016295491580662683;
        } else {
          result[0] += 0.7152203856749312;
          result[1] += 0;
          result[2] += 0.001893939393939394;
          result[3] += 0.2828856749311295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42) ) ) {
          result[0] += 0.002304147465437788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9976958525345622;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2601123595505618;
          result[1] += 0.003651685393258427;
          result[2] += 0.012078651685393259;
          result[3] += 0.5449438202247191;
          result[4] += 0.17808988764044945;
          result[5] += 0.0011235955056179776;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.1923444976076555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.184688995215311;
          result[4] += 0.6229665071770335;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021359223300970877;
          result[3] += 0.9747572815533981;
          result[4] += 0;
          result[5] += 0.0038834951456310682;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0063731170336037085;
          result[3] += 0.9878331402085748;
          result[4] += 0.005793742757821554;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5948275862068966;
          result[4] += 0.4051724137931034;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.8947368421052632;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9626865671641791;
          result[4] += 0.03731343283582089;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0.5625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.2608695652173913;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7391304347826086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003527336860670194;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9964726631393298;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9966313763233878;
          result[1] += 0;
          result[2] += 0.003368623676612127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997481954003693;
          result[1] += 0;
          result[2] += 0.0002518045996306866;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9251676245210726;
          result[1] += 0.0009578544061302679;
          result[2] += 0.007423371647509577;
          result[3] += 0.06549329501915707;
          result[4] += 0;
          result[5] += 0.00023946360153256698;
          result[6] += 0.000718390804597701;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005252100840336135;
          result[3] += 0.9947478991596639;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 0.1509433962264151;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8490566037735849;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17845277645942098;
          result[1] += 0.004746084480303749;
          result[2] += 0;
          result[3] += 0.5965828191741813;
          result[4] += 0.22021831988609397;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 0.572541382667965;
          result[1] += 0;
          result[2] += 0.013631937682570594;
          result[3] += 0.4070107108081792;
          result[4] += 0.006815968841285297;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0389908256880734;
          result[1] += 0;
          result[2] += 0.01834862385321101;
          result[3] += 0.25229357798165136;
          result[4] += 0.6903669724770642;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
          result[0] += 0.04477611940298507;
          result[1] += 0.014925373134328358;
          result[2] += 0;
          result[3] += 0.9402985074626866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004329004329004329;
          result[1] += 0.021645021645021644;
          result[2] += 0;
          result[3] += 0.004329004329004329;
          result[4] += 0.9696969696969697;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.015418502202643172;
          result[2] += 0;
          result[3] += 0.006607929515418502;
          result[4] += 0.9779735682819384;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19383259911894274;
          result[4] += 0.8061674008810573;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9994306712903059;
          result[1] += 0;
          result[2] += 0.00036230008798716424;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020702862170695097;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9983579638752053;
          result[5] += 0.0016420361247947454;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009950248756218905;
          result[2] += 0;
          result[3] += 0.9900497512437811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.40655526992287916;
          result[1] += 0.0008997429305912597;
          result[2] += 0.007583547557840617;
          result[3] += 0.5638817480719794;
          result[4] += 0.02017994858611825;
          result[5] += 0.00038560411311053987;
          result[6] += 0.0005141388174807198;
        } else {
          result[0] += 0.9674338883447601;
          result[1] += 0;
          result[2] += 0.0053868756121449556;
          result[3] += 0.026689520078354553;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004897159647404506;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0013422818791946308;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9953020134228188;
          result[4] += 0.002348993288590604;
          result[5] += 0.0010067114093959733;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1282051282051282;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.038461538461538464;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.35281837160751567;
          result[4] += 0.6471816283924844;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009742519137091163;
          result[2] += 0;
          result[3] += 0.009046624913013222;
          result[4] += 0.9812108559498957;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9931725079654073;
          result[1] += 0;
          result[2] += 0.004096495220755576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0027309968138370506;
        } else {
          result[0] += 0.9998294097577619;
          result[1] += 0;
          result[2] += 0.000170590242238144;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 0.9859007832898172;
          result[1] += 0.007310704960835509;
          result[2] += 0.006527415143603133;
          result[3] += 0.0002610966057441253;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006033182503770739;
          result[3] += 0.9939668174962293;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          result[0] += 0.9932815938839338;
          result[1] += 0;
          result[2] += 0.0041700451754894015;
          result[3] += 0.0022008571759527394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034750376462411677;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.5779816513761468;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42201834862385323;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955522609340252;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004447739065974796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9630273528048215;
          result[1] += 0;
          result[2] += 0.0001159017153453871;
          result[3] += 0.03674084376448771;
          result[4] += 0.0001159017153453871;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4202054794520548;
          result[1] += 0.0010273972602739725;
          result[2] += 0.002054794520547945;
          result[3] += 0.4123287671232877;
          result[4] += 0.1643835616438356;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.17938420348058903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.820615796519411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6954813359528488;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3045186640471513;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)67) ) ) {
          result[0] += 0.9515810276679841;
          result[1] += 0;
          result[2] += 0.03260869565217391;
          result[3] += 0;
          result[4] += 0.009881422924901186;
          result[5] += 0;
          result[6] += 0.005928853754940711;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          result[0] += 0.9806858266350547;
          result[1] += 0.0006939223963453421;
          result[2] += 0.0008095761290695657;
          result[3] += 0.016885444977736655;
          result[4] += 0.00040478806453478285;
          result[5] += 0.0002891343318105592;
          result[6] += 0.00023130746544844735;
        } else {
          result[0] += 0.6865353911655135;
          result[1] += 0;
          result[2] += 0.005854177754124534;
          result[3] += 0.3070782331027142;
          result[4] += 0;
          result[5] += 0.0005321979776476849;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33663366336633666;
          result[1] += 0.0064065230052417;
          result[2] += 0.015142690739662202;
          result[3] += 0.6418171228887595;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.01393188854489164;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9840041279669762;
          result[4] += 0.0020639834881320948;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5470085470085471;
          result[1] += 0;
          result[2] += 0.000949667616334283;
          result[3] += 0;
          result[4] += 0.4520417853751187;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963565022421524;
          result[1] += 0;
          result[2] += 0.0014013452914798206;
          result[3] += 0.0016816143497757848;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005605381165919282;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          result[0] += 0.023809523809523808;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9761904761904762;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.11965192168237854;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8803480783176215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009062075215224285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9261440869959219;
          result[4] += 0.06977797915722699;
          result[5] += 0.0031717263253284995;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.040502793296089384;
          result[3] += 0;
          result[4] += 0.9539106145251397;
          result[5] += 0.00558659217877095;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0047011417058428475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9952988582941572;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9979865771812081;
          result[1] += 0.0003728560775540641;
          result[2] += 0.0012304250559284117;
          result[3] += 0.00011185682326621924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002982848620432513;
        } else {
          result[0] += 0.9528178243774574;
          result[1] += 0;
          result[2] += 0.04062909567496723;
          result[3] += 0.00655307994757536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9416058394160584;
          result[1] += 0.058394160583941604;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.3393223819301848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6606776180698152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.506059009483667;
          result[1] += 0;
          result[2] += 0.002107481559536354;
          result[3] += 0.4918335089567966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)27.5) ) ) {
          result[0] += 0.9883256528417819;
          result[1] += 0;
          result[2] += 0.009831029185867896;
          result[3] += 0.0006144393241167435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001228878648233487;
        } else {
          result[0] += 0.6153846153846154;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.23076923076923078;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
          result[0] += 0.6363636363636364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02634934126646834;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9498512537186571;
          result[4] += 0.022949426264343393;
          result[5] += 0.0008499787505312367;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9295039164490861;
          result[4] += 0.07049608355091384;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03448275862068966;
          result[4] += 0.9310344827586208;
          result[5] += 0.03448275862068966;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23809523809523808;
          result[1] += 0.21428571428571427;
          result[2] += 0.5476190476190477;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9935233160621761;
          result[1] += 0.0016191709844559584;
          result[2] += 0.0003238341968911917;
          result[3] += 0.0045336787564766836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994951194883878;
          result[1] += 0;
          result[2] += 0.0004207337596768765;
          result[3] += 8.41467519353753e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9652096342551294;
          result[1] += 0;
          result[2] += 0.0044603033006244425;
          result[3] += 0.029438001784121322;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008920606601248885;
        } else {
          result[0] += 0.9879306561334211;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01206934386657889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.979771845231095;
          result[1] += 0.0009408444078560508;
          result[2] += 0.004586616488298247;
          result[3] += 0.014583088321768788;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011760555098200635;
        } else {
          result[0] += 0.11149032992036405;
          result[1] += 0.011376564277588168;
          result[2] += 0.0011376564277588168;
          result[3] += 0.875995449374289;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.011972274732199117;
          result[1] += 0;
          result[2] += 0.007246376811594203;
          result[3] += 0.9807813484562067;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960270162892332;
          result[1] += 0;
          result[2] += 0.003575685339690107;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003972983710766786;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9991938734381298;
          result[5] += 0.0008061265618702137;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.3333333333333333;
          result[2] += 0.5238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09523809523809523;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015475085112968121;
          result[2] += 0.003714020427112349;
          result[3] += 0.9941194676570722;
          result[4] += 0;
          result[5] += 0.0006190034045187249;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.9444444444444444;
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0.022222222222222223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9939986846432095;
          result[1] += 0.0024662939822426835;
          result[2] += 0.00295955277869122;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005754685958566261;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9994761655316919;
          result[1] += 0;
          result[2] += 0.0005238344683080147;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02666666666666667;
          result[3] += 0.9733333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.17651477215823735;
          result[1] += 0;
          result[2] += 0.0002503755633450175;
          result[3] += 0.8232348522784176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961496149614961;
          result[1] += 0;
          result[2] += 0.0038503850385038503;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9935602575896965;
          result[1] += 0;
          result[2] += 0.004599816007359705;
          result[3] += 0.00030665440049064706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015332720024532351;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9444444444444444;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9895561357702349;
          result[1] += 0;
          result[2] += 0.007832898172323759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0026109660574412533;
        } else {
          result[0] += 0.9986885245901639;
          result[1] += 0;
          result[2] += 0.0013114754098360656;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0.999552171965965;
          result[1] += 0;
          result[2] += 0.0004478280340349306;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999540799926528;
          result[1] += 0;
          result[2] += 4.592000734720118e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6.5) ) ) {
          result[0] += 0.009345794392523364;
          result[1] += 0;
          result[2] += 0.018691588785046728;
          result[3] += 0.7383177570093458;
          result[4] += 0.2336448598130841;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008904109589041097;
          result[2] += 0.0023972602739726033;
          result[3] += 0.9568493150684932;
          result[4] += 0.030136986301369868;
          result[5] += 0.0017123287671232878;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9933903576982893;
          result[1] += 0.00038880248833592535;
          result[2] += 0.003499222395023328;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0027216174183514776;
        } else {
          result[0] += 0.9995219885277247;
          result[1] += 0;
          result[2] += 0.0004780114722753346;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)34) ) ) {
          result[0] += 0.5630541871921182;
          result[1] += 0.0024630541871921183;
          result[2] += 0.008210180623973728;
          result[3] += 0.16748768472906403;
          result[4] += 0.2574712643678161;
          result[5] += 0;
          result[6] += 0.0013136288998357964;
        } else {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96875;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005947955390334572;
          result[3] += 0.9940520446096655;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013513513513513514;
          result[3] += 0;
          result[4] += 0.9834834834834835;
          result[5] += 0.003003003003003003;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987758945386064;
          result[1] += 0;
          result[2] += 0.001224105461393597;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          result[0] += 0.9993183367416496;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006816632583503749;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7048170506344709;
          result[1] += 0.0024639645189109276;
          result[2] += 0.0052975237156584944;
          result[3] += 0.25218676851053345;
          result[4] += 0.03375631390907971;
          result[5] += 0.0006159911297277319;
          result[6] += 0.0008623875816188247;
        } else {
          result[0] += 0;
          result[1] += 0.01908396946564886;
          result[2] += 0;
          result[3] += 0.9503816793893131;
          result[4] += 0.01908396946564886;
          result[5] += 0.011450381679389315;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.24801980198019802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.751980198019802;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.583287520615723;
          result[1] += 0;
          result[2] += 0.026388125343595383;
          result[3] += 0.0005497526113249038;
          result[4] += 0.38482682792743267;
          result[5] += 0.0016492578339747114;
          result[6] += 0.003298515667949423;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.020209580838323353;
          result[2] += 0;
          result[3] += 0.9797904191616766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9777777777777777;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9940357852882704;
          result[1] += 0;
          result[2] += 0.003976143141153081;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019880715705765406;
        } else {
          result[0] += 0.9995569830546018;
          result[1] += 0;
          result[2] += 0.00044301694539816146;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.31562922868741544;
          result[1] += 0.007104194857916103;
          result[2] += 0.005074424898511502;
          result[3] += 0.672192151556157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9267085729570683;
          result[1] += 0.001471178280058847;
          result[2] += 0.0037448174401497926;
          result[3] += 0.06754045740270162;
          result[4] += 0;
          result[5] += 0.00013374348000534973;
          result[6] += 0.00040123044001604924;
        } else {
          result[0] += 0.021513353115727003;
          result[1] += 0;
          result[2] += 0.014094955489614243;
          result[3] += 0.8664688427299704;
          result[4] += 0.09495548961424333;
          result[5] += 0.002967359050445104;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11490683229813664;
          result[4] += 0.8850931677018633;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008944543828264758;
          result[2] += 0;
          result[3] += 0.3148479427549195;
          result[4] += 0.6744186046511628;
          result[5] += 0.0017889087656529517;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9937325905292479;
          result[4] += 0.005222841225626741;
          result[5] += 0.0010445682451253482;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9259259259259259;
          result[3] += 0;
          result[4] += 0.07407407407407407;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9957112223016441;
          result[1] += 0;
          result[2] += 0.002859185132237313;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014295925661186564;
        } else {
          result[0] += 0.999617987339009;
          result[1] += 0;
          result[2] += 0.00038201266099104997;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.8926380368098159;
          result[1] += 0.002744591540200194;
          result[2] += 0.0019373587342589602;
          result[3] += 0.10203422667097191;
          result[4] += 0;
          result[5] += 0.00048433968356474005;
          result[6] += 0.00016144656118824668;
        } else {
          result[0] += 0.10834879406307978;
          result[1] += 0.002411873840445269;
          result[2] += 0.00797773654916512;
          result[3] += 0.564935064935065;
          result[4] += 0.3159554730983302;
          result[5] += 0.00037105751391465676;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.86;
          result[4] += 0.12;
          result[5] += 0.02;
          result[6] += 0;
        } else {
          result[0] += 0.9887036040882194;
          result[1] += 0;
          result[2] += 0.008606777837547068;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0026896180742334587;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.025751072961373394;
          result[2] += 0;
          result[3] += 0.9656652360515022;
          result[4] += 0;
          result[5] += 0.008583690987124465;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005788712011577424;
          result[3] += 0;
          result[4] += 0.9942112879884226;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9808673469387755;
          result[1] += 0;
          result[2] += 0.01913265306122449;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8490566037735849;
          result[1] += 0;
          result[2] += 0.1509433962264151;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.011848341232227487;
          result[2] += 0;
          result[3] += 0.9881516587677726;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 0.9977529960053263;
          result[1] += 0.00012483355525965382;
          result[2] += 0.0005825565912117178;
          result[3] += 0.0014563914780292946;
          result[4] += 4.1611185086551275e-05;
          result[5] += 0;
          result[6] += 4.1611185086551275e-05;
        } else {
          result[0] += 0.30425963488843816;
          result[1] += 0.016227180527383367;
          result[2] += 0;
          result[3] += 0.6612576064908722;
          result[4] += 0.010141987829614604;
          result[5] += 0.008113590263691683;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.6011029411764706;
          result[1] += 0;
          result[2] += 0.0055147058823529415;
          result[3] += 0.37316176470588236;
          result[4] += 0.02022058823529412;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7067204939444313;
          result[1] += 0;
          result[2] += 0.008074091664687722;
          result[3] += 0.25457136072191877;
          result[4] += 0.029209213963429115;
          result[5] += 0.000949893137022085;
          result[6] += 0.0004749465685110425;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16884851723216673;
          result[1] += 0;
          result[2] += 0.006946299759551163;
          result[3] += 0.8239380176329149;
          result[4] += 0;
          result[5] += 0.00026716537536735247;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9964447955757456;
          result[1] += 0;
          result[2] += 0.002567647639739285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009875567845151097;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9986962190352021;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.001303780964797914;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0010006671114076054;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9953302201467646;
          result[4] += 0.0010006671114076054;
          result[5] += 0.0026684456304202804;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5962) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011180124223602485;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9888198757763975;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6089743589743589;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.391025641025641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.040498442367601244;
          result[2] += 0;
          result[3] += 0.9595015576323987;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9992406216777199;
          result[1] += 0;
          result[2] += 0.000556877436338784;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000202500885941376;
        } else {
          result[0] += 0.6711864406779661;
          result[1] += 0.013559322033898305;
          result[2] += 0;
          result[3] += 0.3152542372881356;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9932746392761066;
          result[1] += 0.001222792858889704;
          result[2] += 0.005013450721447787;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004891171435558817;
        } else {
          result[0] += 0.6159616330545992;
          result[1] += 0;
          result[2] += 0.005779636005902607;
          result[3] += 0.3777668470241023;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004918839153959665;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011918951132300357;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.99880810488677;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
          result[0] += 0.0009502692429521698;
          result[1] += 0;
          result[2] += 0.004434589800443459;
          result[3] += 0.9933481152993349;
          result[4] += 0;
          result[5] += 0.0012670256572695597;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9966920277869666;
          result[1] += 0.0013231888852133643;
          result[2] += 0.0013231888852133643;
          result[3] += 0.00016539861065167054;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004961958319550116;
        } else {
          result[0] += 0.9616666666666667;
          result[1] += 0.013333333333333334;
          result[2] += 0.025;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993437889625304;
          result[1] += 0;
          result[2] += 0.0005905899337226852;
          result[3] += 6.562110374696503e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2519370744306175;
          result[1] += 0;
          result[2] += 0.0009391876027236441;
          result[3] += 0.7471237379666589;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
          result[0] += 0.9907100199071002;
          result[1] += 0;
          result[2] += 0.004976775049767751;
          result[3] += 0.0013271400132714001;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0029860650298606504;
        } else {
          result[0] += 0.965625;
          result[1] += 0;
          result[2] += 0.034375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9868421052631579;
          result[1] += 0;
          result[2] += 0.013157894736842105;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9988432620011567;
          result[1] += 0;
          result[2] += 0.001156737998843262;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998667673313496;
          result[1] += 0;
          result[2] += 0.00013323266865035308;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.8019867549668874;
          result[1] += 0.005960264900662252;
          result[2] += 0.003642384105960265;
          result[3] += 0.1857615894039735;
          result[4] += 0;
          result[5] += 0.0013245033112582781;
          result[6] += 0.0013245033112582781;
        } else {
          result[0] += 0.898727465535525;
          result[1] += 0;
          result[2] += 0.0005302226935312832;
          result[3] += 0.09915164369034994;
          result[4] += 0;
          result[5] += 0.0010604453870625664;
          result[6] += 0.0005302226935312832;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0049706281066425675;
          result[2] += 0.006326253953908722;
          result[3] += 0.9362855851784908;
          result[4] += 0.05241753276095798;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9915433403805497;
          result[1] += 0.008456659619450317;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
          result[0] += 0.00492091388400703;
          result[1] += 0;
          result[2] += 0.008084358523725835;
          result[3] += 0.9869947275922671;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015114873035066507;
          result[1] += 0.003627569528415962;
          result[2] += 0.006952841596130593;
          result[3] += 0.29685610640870624;
          result[4] += 0.6907496977025394;
          result[5] += 0.00030229746070133015;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)27.5) ) ) {
          result[0] += 0.9904959904959905;
          result[1] += 0;
          result[2] += 0.00594000594000594;
          result[3] += 0.00297000297000297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000594000594000594;
        } else {
          result[0] += 0.761904761904762;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.09523809523809525;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007205764611689352;
          result[3] += 0.8742994395516414;
          result[4] += 0.11609287429943956;
          result[5] += 0.0024019215372297837;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23229125445191928;
          result[1] += 0;
          result[2] += 0.0015829046299960427;
          result[3] += 0.7653343886030867;
          result[4] += 0;
          result[5] += 0.0007914523149980214;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6221.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003041825095057034;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996958174904943;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965753424657534;
          result[1] += 0;
          result[2] += 0.0026343519494204425;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007903055848261328;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          result[0] += 0.9896337249481687;
          result[1] += 0.0015549412577747065;
          result[2] += 0.0067380787836903945;
          result[3] += 0.001209398756046994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008638562543192814;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0.01282051282051282;
          result[2] += 0;
          result[3] += 0.967948717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.005376344086021506;
          result[1] += 0;
          result[2] += 0.005376344086021506;
          result[3] += 0.989247311827957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8448598130841122;
          result[1] += 0;
          result[2] += 0.0097196261682243;
          result[3] += 0.1450467289719626;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00037383177570093456;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9984572102731646;
          result[1] += 0;
          result[2] += 0.0014520373899627916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.075233687267448e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0.01744820065430753;
          result[1] += 0.005452562704471102;
          result[2] += 0.012540894220283535;
          result[3] += 0.7786259541984734;
          result[4] += 0.1834787350054526;
          result[5] += 0.002453653217011996;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.983576336517513;
          result[1] += 0;
          result[2] += 0.0030165912518853697;
          result[3] += 0.012233953410424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011731188201776438;
        } else {
          result[0] += 0.3856868395773295;
          result[1] += 0;
          result[2] += 0.006003842459173872;
          result[3] += 0.606628242074928;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001681075888568684;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0.10363636363636364;
          result[1] += 0;
          result[2] += 0.008181818181818182;
          result[3] += 0.8881818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2898089171974522;
          result[1] += 0.028662420382165606;
          result[2] += 0;
          result[3] += 0.6815286624203821;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.008695652173913044;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6695652173913044;
          result[4] += 0.3217391304347826;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0010070493454179255;
          result[1] += 0.013091641490433032;
          result[2] += 0;
          result[3] += 0.09768378650553877;
          result[4] += 0.8882175226586103;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9889434889434889;
          result[1] += 0;
          result[2] += 0.011056511056511056;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06929283341243474;
          result[1] += 0.004746084480303749;
          result[2] += 0;
          result[3] += 0.9259610821072615;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6436781609195402;
          result[4] += 0.3563218390804598;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21301775147928995;
          result[4] += 0.7869822485207101;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0.8461538461538461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9903381642512077;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00966183574879227;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004561003420752566;
          result[3] += 0.9047890535917902;
          result[4] += 0.08836944127708096;
          result[5] += 0.002280501710376283;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9975159817351598;
          result[1] += 0.0005114155251141553;
          result[2] += 0.0006210045662100456;
          result[3] += 0.0010593607305936074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029223744292237444;
        } else {
          result[0] += 0.20930232558139536;
          result[1] += 0;
          result[2] += 0.06976744186046512;
          result[3] += 0.7209302325581395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1700382722799344;
          result[1] += 0;
          result[2] += 0.004100601421541826;
          result[3] += 0.8250410060142154;
          result[4] += 0;
          result[5] += 0.0008201202843083652;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9976232917409388;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0023767082590612004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869169510807736;
          result[1] += 0;
          result[2] += 0.009670079635949944;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034129692832764505;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0.0008779631255487271;
          result[1] += 0;
          result[2] += 0.009218612818261635;
          result[3] += 0.8700614574187885;
          result[4] += 0.11984196663740124;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9944211994421199;
          result[1] += 0;
          result[2] += 0.003905160390516039;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016736401673640166;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9868012422360248;
          result[1] += 0.0002587991718426501;
          result[2] += 0.0006469979296066253;
          result[3] += 0.011818495514147688;
          result[4] += 0.00012939958592132506;
          result[5] += 0.00030193236714975844;
          result[6] += 4.313319530710835e-05;
        } else {
          result[0] += 0.9048951048951049;
          result[1] += 0.005594405594405594;
          result[2] += 0.0009324009324009324;
          result[3] += 0.08857808857808858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9963887065003283;
          result[4] += 0.003282994090610637;
          result[5] += 0.00032829940906106366;
          result[6] += 0;
        } else {
          result[0] += 0.4630177514792899;
          result[1] += 0;
          result[2] += 0.022189349112426034;
          result[3] += 0;
          result[4] += 0.514792899408284;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9972972972972973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.002702702702702703;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9902860226659471;
          result[1] += 0;
          result[2] += 0.0064759848893685915;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0032379924446842958;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9675324675324676;
          result[1] += 0;
          result[2] += 0.032467532467532464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          result[0] += 0.17189189189189188;
          result[1] += 0.023783783783783784;
          result[2] += 0;
          result[3] += 0.8043243243243243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9947643979057592;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005235602094240838;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005118110236220472;
          result[3] += 0.8874015748031496;
          result[4] += 0.10590551181102362;
          result[5] += 0.0015748031496062992;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0.9954115181732784;
          result[1] += 0.0009755040104053761;
          result[2] += 0.0015535804610159693;
          result[3] += 0.0016980995736686176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036129778163162076;
        } else {
          result[0] += 0.7302231237322515;
          result[1] += 0;
          result[2] += 0.008113590263691683;
          result[3] += 0.2616632860040568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0.16046640755136035;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8395335924486397;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07170795306388526;
          result[1] += 0;
          result[2] += 0.03780964797913951;
          result[3] += 0;
          result[4] += 0.8891786179921773;
          result[5] += 0.001303780964797914;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9986759351208209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0013240648791790798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9876160990712074;
          result[1] += 0;
          result[2] += 0.009287925696594427;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0030959752321981426;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9626865671641791;
          result[1] += 0;
          result[2] += 0.03731343283582089;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5296052631578947;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47039473684210525;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0020898641588296763;
          result[1] += 0.0219435736677116;
          result[2] += 0;
          result[3] += 0.9759665621734587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0.0009584664536741212;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971246006389775;
          result[4] += 0.0006389776357827475;
          result[5] += 0.001277955271565495;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009478672985781991;
          result[4] += 0.990521327014218;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006938421509106678;
          result[2] += 0.007372072853425846;
          result[3] += 0;
          result[4] += 0.9830875975715525;
          result[5] += 0.0026019080659150044;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9983279456024969;
          result[1] += 0.0003715676438895701;
          result[2] += 0.0010032326385018392;
          result[3] += 0.00011147029316687103;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018578382194478504;
        } else {
          result[0] += 0.9712858926342073;
          result[1] += 0;
          result[2] += 0.02122347066167291;
          result[3] += 0.00749063670411985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5536) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03954802259887006;
          result[2] += 0;
          result[3] += 0.96045197740113;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.5866666666666667;
          result[1] += 0;
          result[2] += 0.05333333333333334;
          result[3] += 0.36;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1791487068965517;
          result[1] += 0;
          result[2] += 0.0018857758620689656;
          result[3] += 0.8189655172413793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9968464206874803;
          result[1] += 0;
          result[2] += 0.000630715862503942;
          result[3] += 0.002522863450015768;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869412355600201;
          result[1] += 0;
          result[2] += 0.009040683073832245;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004018081366147665;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
