
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9948979591836735;
          result[5] += 0.00510204081632653;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          result[0] += 0.6764705882352942;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16176470588235295;
          result[5] += 0.1323529411764706;
        } else {
          result[0] += 0.003;
          result[1] += 0.001;
          result[2] += 0;
          result[3] += 0.069;
          result[4] += 0.066;
          result[5] += 0.861;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0.78125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011363636363636364;
          result[3] += 0.6875;
          result[4] += 0;
          result[5] += 0.30113636363636365;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
          result[0] += 0.05217391304347826;
          result[1] += 0.09565217391304348;
          result[2] += 0.034782608695652174;
          result[3] += 0.017391304347826087;
          result[4] += 0.7913043478260869;
          result[5] += 0.008695652173913044;
        } else {
          result[0] += 0.004484304932735426;
          result[1] += 0.9618834080717489;
          result[2] += 0;
          result[3] += 0.004484304932735426;
          result[4] += 0.02914798206278027;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8103579588728104;
          result[1] += 0.04265041888804265;
          result[2] += 0.017517136329017517;
          result[3] += 0.03884234577303884;
          result[4] += 0.05483625285605483;
          result[5] += 0.0357958872810358;
        } else {
          result[0] += 0.195;
          result[1] += 0.035;
          result[2] += 0.1;
          result[3] += 0.255;
          result[4] += 0.195;
          result[5] += 0.22;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.028571428571428574;
          result[2] += 0.10714285714285715;
          result[3] += 0.6071428571428572;
          result[4] += 0;
          result[5] += 0.2571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6434782608695652;
          result[3] += 0.26956521739130435;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.05747126436781609;
          result[2] += 0.367816091954023;
          result[3] += 0.1839080459770115;
          result[4] += 0.11494252873563218;
          result[5] += 0.27586206896551724;
        } else {
          result[0] += 0.01762114537444934;
          result[1] += 0;
          result[2] += 0.9218061674008811;
          result[3] += 0.051762114537444934;
          result[4] += 0;
          result[5] += 0.00881057268722467;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.007352941176470588;
          result[2] += 0;
          result[3] += 0.01838235294117647;
          result[4] += 0.9191176470588235;
          result[5] += 0.05514705882352941;
        } else {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0.027472527472527472;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05274725274725275;
          result[4] += 0.06263736263736264;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0.07967032967032968;
          result[1] += 0.005494505494505496;
          result[2] += 0.030219780219780223;
          result[3] += 0.3983516483516484;
          result[4] += 0.10714285714285715;
          result[5] += 0.37912087912087916;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0730593607305936;
          result[1] += 0.319634703196347;
          result[2] += 0;
          result[3] += 0.0182648401826484;
          result[4] += 0.5525114155251142;
          result[5] += 0.0365296803652968;
        } else {
          result[0] += 0.6615873015873017;
          result[1] += 0.009523809523809526;
          result[2] += 0.07301587301587303;
          result[3] += 0.10095238095238096;
          result[4] += 0.055238095238095246;
          result[5] += 0.09968253968253969;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021739130434782608;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0.7608695652173914;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7391304347826086;
          result[4] += 0;
          result[5] += 0.2608695652173913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6060606060606061;
          result[3] += 0.3939393939393939;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.004016064257028112;
          result[1] += 0.008032128514056224;
          result[2] += 0.7469879518072289;
          result[3] += 0.19678714859437751;
          result[4] += 0;
          result[5] += 0.04417670682730924;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9254385964912281;
          result[3] += 0.06798245614035088;
          result[4] += 0;
          result[5] += 0.006578947368421052;
        } else {
          result[0] += 0.0037174721189591076;
          result[1] += 0;
          result[2] += 0.9925650557620818;
          result[3] += 0.0037174721189591076;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
          result[0] += 0.008333333333333333;
          result[1] += 0.020833333333333332;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9375;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02203856749311295;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02203856749311295;
          result[4] += 0.049586776859504134;
          result[5] += 0.90633608815427;
        } else {
          result[0] += 0.06505576208178439;
          result[1] += 0.026022304832713755;
          result[2] += 0.03903345724907063;
          result[3] += 0.2992565055762082;
          result[4] += 0.05204460966542751;
          result[5] += 0.5185873605947955;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.12345679012345678;
          result[2] += 0;
          result[3] += 0.024691358024691357;
          result[4] += 0.8271604938271605;
          result[5] += 0.024691358024691357;
        } else {
          result[0] += 0.010121457489878543;
          result[1] += 0.9412955465587044;
          result[2] += 0.018218623481781375;
          result[3] += 0.006072874493927126;
          result[4] += 0.020242914979757085;
          result[5] += 0.004048582995951417;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8265712012728719;
          result[1] += 0.030230708035003977;
          result[2] += 0.002386634844868735;
          result[3] += 0.031821797931583136;
          result[4] += 0.0883054892601432;
          result[5] += 0.020684168655529037;
        } else {
          result[0] += 0.2868525896414343;
          result[1] += 0.0199203187250996;
          result[2] += 0.1593625498007968;
          result[3] += 0.250996015936255;
          result[4] += 0.06772908366533864;
          result[5] += 0.2151394422310757;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04;
          result[5] += 0.96;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0.04310344827586207;
          result[1] += 0.008620689655172414;
          result[2] += 0.0603448275862069;
          result[3] += 0.6637931034482759;
          result[4] += 0.02586206896551724;
          result[5] += 0.19827586206896552;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.6388888888888888;
          result[4] += 0;
          result[5] += 0.1388888888888889;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.11904761904761904;
          result[2] += 0.40476190476190477;
          result[3] += 0.07142857142857142;
          result[4] += 0.21428571428571427;
          result[5] += 0.11904761904761904;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.23529411764705882;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.029411764705882353;
          result[4] += 0.08823529411764706;
          result[5] += 0.3235294117647059;
        } else {
          result[0] += 0.004338394793926247;
          result[1] += 0;
          result[2] += 0.9186550976138829;
          result[3] += 0.06941431670281996;
          result[4] += 0;
          result[5] += 0.007592190889370932;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004329004329004329;
          result[1] += 0.012987012987012988;
          result[2] += 0;
          result[3] += 0.008658008658008658;
          result[4] += 0.922077922077922;
          result[5] += 0.05194805194805195;
        } else {
          result[0] += 0.4462809917355372;
          result[1] += 0.008264462809917356;
          result[2] += 0;
          result[3] += 0.04132231404958678;
          result[4] += 0.3305785123966942;
          result[5] += 0.17355371900826447;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0020876826722338203;
          result[2] += 0.0010438413361169101;
          result[3] += 0.055323590814196244;
          result[4] += 0.07828810020876827;
          result[5] += 0.8632567849686847;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03076923076923077;
          result[3] += 0.5948717948717949;
          result[4] += 0.005128205128205128;
          result[5] += 0.36923076923076925;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9948717948717949;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005128205128205128;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.55;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0.4;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
          result[0] += 0.07142857142857144;
          result[1] += 0.3452380952380953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5714285714285715;
          result[5] += 0.011904761904761906;
        } else {
          result[0] += 0.6691542288557214;
          result[1] += 0.010572139303482588;
          result[2] += 0.08830845771144279;
          result[3] += 0.10758706467661691;
          result[4] += 0.05970149253731343;
          result[5] += 0.06467661691542288;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02040816326530612;
          result[3] += 0.12244897959183673;
          result[4] += 0.08163265306122448;
          result[5] += 0.7755102040816326;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17142857142857143;
          result[3] += 0.4857142857142857;
          result[4] += 0;
          result[5] += 0.34285714285714286;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9285714285714286;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8287037037037037;
          result[3] += 0.1388888888888889;
          result[4] += 0;
          result[5] += 0.032407407407407406;
        } else {
          result[0] += 0.002751031636863824;
          result[1] += 0;
          result[2] += 0.9587345254470426;
          result[3] += 0.0343878954607978;
          result[4] += 0;
          result[5] += 0.0041265474552957355;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.004273504273504274;
          result[2] += 0.008547008547008548;
          result[3] += 0.017094017094017096;
          result[4] += 0.9358974358974359;
          result[5] += 0.03418803418803419;
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
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.03896103896103896;
        } else {
          result[0] += 0.0038461538461538464;
          result[1] += 0.010576923076923078;
          result[2] += 0.0038461538461538464;
          result[3] += 0.09326923076923077;
          result[4] += 0.08269230769230769;
          result[5] += 0.8057692307692308;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
          result[0] += 0.3681972789115646;
          result[1] += 0.09098639455782313;
          result[2] += 0.05612244897959184;
          result[3] += 0.18962585034013604;
          result[4] += 0.1326530612244898;
          result[5] += 0.16241496598639457;
        } else {
          result[0] += 0.9194729136163984;
          result[1] += 0.002928257686676428;
          result[2] += 0.04392386530014642;
          result[3] += 0.016105417276720355;
          result[4] += 0.016105417276720355;
          result[5] += 0.001464128843338214;
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.02531645569620253;
          result[2] += 0.02531645569620253;
          result[3] += 0.13924050632911392;
          result[4] += 0.16455696202531644;
          result[5] += 0.6455696202531646;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13793103448275862;
          result[3] += 0.646551724137931;
          result[4] += 0;
          result[5] += 0.21551724137931033;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.37037037037037035;
          result[1] += 0.1111111111111111;
          result[2] += 0.4074074074074074;
          result[3] += 0.1111111111111111;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6451612903225806;
          result[3] += 0.2903225806451613;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        } else {
          result[0] += 0.0012004801920768306;
          result[1] += 0;
          result[2] += 0.9507803121248499;
          result[3] += 0.03961584633853541;
          result[4] += 0.003601440576230492;
          result[5] += 0.004801920768307323;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007936507936507936;
          result[3] += 0.003968253968253968;
          result[4] += 0.9642857142857143;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0013531799729364006;
          result[1] += 0;
          result[2] += 0.0013531799729364006;
          result[3] += 0.029769959404600813;
          result[4] += 0.036535859269282815;
          result[5] += 0.9309878213802436;
        } else {
          result[0] += 0.08754863813229571;
          result[1] += 0.03501945525291829;
          result[2] += 0.005836575875486381;
          result[3] += 0.3035019455252918;
          result[4] += 0.07198443579766536;
          result[5] += 0.4961089494163424;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0.4060529634300126;
          result[1] += 0.05044136191677175;
          result[2] += 0.03909205548549811;
          result[3] += 0.15762925598991173;
          result[4] += 0.19293820933165196;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0.8794326241134752;
          result[1] += 0.022458628841607566;
          result[2] += 0.02364066193853428;
          result[3] += 0.01182033096926714;
          result[4] += 0.0591016548463357;
          result[5] += 0.0035460992907801418;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07954545454545454;
          result[3] += 0.7386363636363636;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.44680851063829785;
          result[3] += 0.2978723404255319;
          result[4] += 0;
          result[5] += 0.23404255319148937;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.42;
        } else {
          result[0] += 0.014285714285714285;
          result[1] += 0;
          result[2] += 0.7714285714285715;
          result[3] += 0.18571428571428572;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          result[0] += 0.030716723549488054;
          result[1] += 0;
          result[2] += 0.8122866894197952;
          result[3] += 0.13651877133105803;
          result[4] += 0.0034129692832764505;
          result[5] += 0.017064846416382253;
        } else {
          result[0] += 0.003430531732418525;
          result[1] += 0;
          result[2] += 0.9777015437392796;
          result[3] += 0.017152658662092625;
          result[4] += 0;
          result[5] += 0.0017152658662092624;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.004347826086956522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.991304347826087;
          result[5] += 0.004347826086956522;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006535947712418301;
          result[3] += 0.026143790849673203;
          result[4] += 0.06405228758169934;
          result[5] += 0.9032679738562092;
        } else {
          result[0] += 0.07291666666666667;
          result[1] += 0.008680555555555556;
          result[2] += 0.001736111111111111;
          result[3] += 0.3246527777777778;
          result[4] += 0.08506944444444445;
          result[5] += 0.5069444444444444;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          result[0] += 0.45035742652899124;
          result[1] += 0.10007942811755362;
          result[2] += 0.06830818109610802;
          result[3] += 0.11199364575059571;
          result[4] += 0.1572676727561557;
          result[5] += 0.11199364575059571;
        } else {
          result[0] += 0.9606299212598425;
          result[1] += 0;
          result[2] += 0.03740157480314961;
          result[3] += 0.001968503937007874;
          result[4] += 0;
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
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.125;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42780748663101603;
          result[3] += 0.4919786096256685;
          result[4] += 0;
          result[5] += 0.08021390374331551;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8981481481481481;
          result[3] += 0.09259259259259259;
          result[4] += 0;
          result[5] += 0.009259259259259259;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0.17857142857142858;
          result[3] += 0;
          result[4] += 0.17857142857142858;
          result[5] += 0.6071428571428571;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0.029850746268656716;
          result[1] += 0;
          result[2] += 0.746268656716418;
          result[3] += 0.1791044776119403;
          result[4] += 0;
          result[5] += 0.04477611940298507;
        } else {
          result[0] += 0.0015360983102918587;
          result[1] += 0;
          result[2] += 0.9708141321044547;
          result[3] += 0.02304147465437788;
          result[4] += 0;
          result[5] += 0.004608294930875576;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9721115537848606;
          result[5] += 0.027888446215139442;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15789473684210525;
          result[5] += 0.8421052631578947;
        } else {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0.09375;
          result[3] += 0.1875;
          result[4] += 0.65625;
          result[5] += 0.03125;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.828125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0.125;
          result[5] += 0.015625;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011312217194570137;
          result[2] += 0;
          result[3] += 0.0418552036199095;
          result[4] += 0.038461538461538464;
          result[5] += 0.918552036199095;
        } else {
          result[0] += 0.0049382716049382715;
          result[1] += 0.009876543209876543;
          result[2] += 0.027160493827160494;
          result[3] += 0.454320987654321;
          result[4] += 0.037037037037037035;
          result[5] += 0.4666666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9907834101382489;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009216589861751152;
          result[5] += 0;
        } else {
          result[0] += 0.053763440860215055;
          result[1] += 0.3924731182795699;
          result[2] += 0;
          result[3] += 0.005376344086021506;
          result[4] += 0.5483870967741935;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.9075937785910339;
          result[1] += 0.01463860933211345;
          result[2] += 0.0036596523330283625;
          result[3] += 0.025617566331198535;
          result[4] += 0.039341262580054895;
          result[5] += 0.009149130832570906;
        } else {
          result[0] += 0.20392156862745098;
          result[1] += 0.03137254901960784;
          result[2] += 0.1843137254901961;
          result[3] += 0.26666666666666666;
          result[4] += 0.043137254901960784;
          result[5] += 0.27058823529411763;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          result[0] += 0.042105263157894736;
          result[1] += 0.07368421052631578;
          result[2] += 0.05263157894736842;
          result[3] += 0.30526315789473685;
          result[4] += 0.24210526315789474;
          result[5] += 0.28421052631578947;
        } else {
          result[0] += 0.04142011834319528;
          result[1] += 0;
          result[2] += 0.5857988165680474;
          result[3] += 0.2366863905325444;
          result[4] += 0.01183431952662722;
          result[5] += 0.12426035502958581;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0.2545454545454545;
          result[4] += 0;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.0014204545454545455;
          result[1] += 0;
          result[2] += 0.9559659090909091;
          result[3] += 0.036931818181818184;
          result[4] += 0;
          result[5] += 0.005681818181818182;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.005917159763313609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9881656804733728;
          result[5] += 0.005917159763313609;
        } else {
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0;
          result[3] += 0.0967741935483871;
          result[4] += 0.5645161290322581;
          result[5] += 0.3225806451612903;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0.021998166819431713;
          result[1] += 0.0009165902841429881;
          result[2] += 0;
          result[3] += 0.06324472960586618;
          result[4] += 0.05957836846929423;
          result[5] += 0.854262144821265;
        } else {
          result[0] += 0.043137254901960784;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.5137254901960784;
          result[4] += 0.023529411764705882;
          result[5] += 0.40784313725490196;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.13333333333333333;
          result[1] += 0.36666666666666664;
          result[2] += 0;
          result[3] += 0.1;
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7473604826546003;
          result[1] += 0.06108597285067873;
          result[2] += 0.01282051282051282;
          result[3] += 0.01885369532428356;
          result[4] += 0.14479638009049775;
          result[5] += 0.015082956259426848;
        } else {
          result[0] += 0.10776942355889724;
          result[1] += 0.002506265664160401;
          result[2] += 0.2706766917293233;
          result[3] += 0.3684210526315789;
          result[4] += 0.05513784461152882;
          result[5] += 0.19548872180451127;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0.8823529411764706;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0.12280701754385964;
          result[2] += 0.15789473684210525;
          result[3] += 0.2982456140350877;
          result[4] += 0.08771929824561403;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9565217391304348;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47500000000000003;
          result[3] += 0.48750000000000004;
          result[4] += 0;
          result[5] += 0.037500000000000006;
        } else {
          result[0] += 0.004739336492890996;
          result[1] += 0;
          result[2] += 0.8246445497630331;
          result[3] += 0.15165876777251186;
          result[4] += 0;
          result[5] += 0.018957345971563982;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8192771084337349;
          result[3] += 0.14457831325301204;
          result[4] += 0;
          result[5] += 0.03614457831325301;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0.9724919093851133;
          result[3] += 0.022653721682847898;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        } else {
          result[0] += 0.00390625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0.94140625;
          result[5] += 0.0234375;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.01807909604519774;
          result[1] += 0.0022598870056497176;
          result[2] += 0.0022598870056497176;
          result[3] += 0.05084745762711865;
          result[4] += 0.09152542372881356;
          result[5] += 0.8350282485875706;
        } else {
          result[0] += 0.09281437125748503;
          result[1] += 0.02694610778443114;
          result[2] += 0.05688622754491018;
          result[3] += 0.40718562874251496;
          result[4] += 0.059880239520958084;
          result[5] += 0.3562874251497006;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          result[0] += 0.01869158878504673;
          result[1] += 0.4626168224299066;
          result[2] += 0.01869158878504673;
          result[3] += 0.023364485981308414;
          result[4] += 0.42523364485981313;
          result[5] += 0.05140186915887851;
        } else {
          result[0] += 0.7595029239766083;
          result[1] += 0.010233918128654972;
          result[2] += 0.03728070175438597;
          result[3] += 0.07748538011695907;
          result[4] += 0.058479532163742694;
          result[5] += 0.05701754385964913;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81.5) ) ) {
          result[0] += 0.007407407407407408;
          result[1] += 0.9925925925925926;
          result[2] += 0;
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
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.35000000000000003;
          result[2] += 0.30000000000000004;
          result[3] += 0;
          result[4] += 0.35000000000000003;
          result[5] += 0;
        } else {
          result[0] += 0.03067484662576687;
          result[1] += 0.006134969325153374;
          result[2] += 0.03680981595092025;
          result[3] += 0.38650306748466257;
          result[4] += 0.04294478527607362;
          result[5] += 0.49693251533742333;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.5815217391304348;
          result[3] += 0.28804347826086957;
          result[4] += 0;
          result[5] += 0.10869565217391304;
        } else {
          result[0] += 0.8636363636363636;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2982456140350877;
          result[3] += 0.47368421052631576;
          result[4] += 0;
          result[5] += 0.22807017543859648;
        } else {
          result[0] += 0.008403361344537815;
          result[1] += 0;
          result[2] += 0.7394957983193278;
          result[3] += 0.23529411764705882;
          result[4] += 0;
          result[5] += 0.01680672268907563;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0.004901960784313725;
          result[1] += 0;
          result[2] += 0.8676470588235294;
          result[3] += 0.12254901960784313;
          result[4] += 0;
          result[5] += 0.004901960784313725;
        } else {
          result[0] += 0.008620689655172415;
          result[1] += 0;
          result[2] += 0.9706896551724139;
          result[3] += 0.018965517241379314;
          result[4] += 0;
          result[5] += 0.001724137931034483;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  
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
