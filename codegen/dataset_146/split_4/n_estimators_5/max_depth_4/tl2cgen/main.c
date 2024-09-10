
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
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
          result[0] += 0.004566210045662101;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9863013698630138;
          result[5] += 0.009132420091324202;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8125;
          result[5] += 0.1875;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004137931034482759;
          result[3] += 0.013793103448275862;
          result[4] += 0.04827586206896552;
          result[5] += 0.9337931034482758;
        } else {
          result[0] += 0.1011764705882353;
          result[1] += 0.018823529411764704;
          result[2] += 0.009411764705882352;
          result[3] += 0.21176470588235294;
          result[4] += 0.08235294117647059;
          result[5] += 0.5764705882352941;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
          result[0] += 0.00909090909090909;
          result[1] += 0.03636363636363636;
          result[2] += 0;
          result[3] += 0.7909090909090909;
          result[4] += 0.01818181818181818;
          result[5] += 0.14545454545454545;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.2916666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7083333333333334;
          result[5] += 0;
        } else {
          result[0] += 0.0021321961620469083;
          result[1] += 0.9957356076759062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021321961620469083;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7950693374422189;
          result[1] += 0.0238828967642527;
          result[2] += 0.002311248073959939;
          result[3] += 0.030816640986132515;
          result[4] += 0.12634822804314333;
          result[5] += 0.021571648690292763;
        } else {
          result[0] += 0.1660377358490566;
          result[1] += 0.018867924528301886;
          result[2] += 0.033962264150943396;
          result[3] += 0.3169811320754717;
          result[4] += 0.10943396226415095;
          result[5] += 0.35471698113207545;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
          result[0] += 0.034782608695652174;
          result[1] += 0.008695652173913044;
          result[2] += 0.29130434782608694;
          result[3] += 0.39565217391304347;
          result[4] += 0.013043478260869565;
          result[5] += 0.2565217391304348;
        } else {
          result[0] += 0.06415094339622643;
          result[1] += 0;
          result[2] += 0.6981132075471699;
          result[3] += 0.17358490566037738;
          result[4] += 0.003773584905660378;
          result[5] += 0.060377358490566045;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009271523178807948;
          result[1] += 0;
          result[2] += 0.9390728476821192;
          result[3] += 0.046357615894039736;
          result[4] += 0;
          result[5] += 0.005298013245033113;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.01970443349753695;
          result[2] += 0;
          result[3] += 0.009852216748768475;
          result[4] += 0.935960591133005;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0;
          result[1] += 0.6388888888888888;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.05555555555555555;
          result[5] += 0.1388888888888889;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02861230329041488;
          result[4] += 0.034334763948497854;
          result[5] += 0.9370529327610873;
        } else {
          result[0] += 0.08143939393939394;
          result[1] += 0.003787878787878788;
          result[2] += 0;
          result[3] += 0.3446969696969697;
          result[4] += 0.08901515151515152;
          result[5] += 0.4810606060606061;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9847494553376906;
          result[2] += 0;
          result[3] += 0.002178649237472767;
          result[4] += 0.013071895424836602;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7569392348087023;
          result[1] += 0.04876219054763692;
          result[2] += 0.0030007501875468873;
          result[3] += 0.03225806451612904;
          result[4] += 0.13953488372093026;
          result[5] += 0.019504876219054768;
        } else {
          result[0] += 0.1506849315068493;
          result[1] += 0.021917808219178082;
          result[2] += 0.2821917808219178;
          result[3] += 0.17534246575342466;
          result[4] += 0.09041095890410959;
          result[5] += 0.27945205479452057;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.12162162162162163;
          result[4] += 0.1891891891891892;
          result[5] += 0.6351351351351351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06153846153846154;
          result[3] += 0.6923076923076923;
          result[4] += 0;
          result[5] += 0.24615384615384617;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.3673469387755102;
          result[1] += 0.12244897959183673;
          result[2] += 0.14285714285714285;
          result[3] += 0.12244897959183673;
          result[4] += 0.14285714285714285;
          result[5] += 0.10204081632653061;
        } else {
          result[0] += 0.0078125;
          result[1] += 0.0234375;
          result[2] += 0.5546875;
          result[3] += 0.3046875;
          result[4] += 0.015625;
          result[5] += 0.09375;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.23684210526315788;
          result[4] += 0.013157894736842105;
          result[5] += 0;
        } else {
          result[0] += 0.0025575447570332483;
          result[1] += 0;
          result[2] += 0.9450127877237852;
          result[3] += 0.04603580562659847;
          result[4] += 0;
          result[5] += 0.00639386189258312;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.004016064257028112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9759036144578314;
          result[5] += 0.020080321285140562;
        } else {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.52;
          result[5] += 0.28;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9433962264150944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05660377358490566;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2916666666666667;
          result[5] += 0.7083333333333334;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.0975609756097561;
          result[2] += 0;
          result[3] += 0.14634146341463414;
          result[4] += 0.6585365853658537;
          result[5] += 0.0975609756097561;
        } else {
          result[0] += 0;
          result[1] += 0.005847953216374269;
          result[2] += 0;
          result[3] += 0.031578947368421054;
          result[4] += 0.05146198830409357;
          result[5] += 0.9111111111111111;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030534351145038167;
          result[3] += 0.6641221374045801;
          result[4] += 0.015267175572519083;
          result[5] += 0.2900763358778626;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          result[0] += 0.02962962962962963;
          result[1] += 0.31851851851851853;
          result[2] += 0.007407407407407408;
          result[3] += 0.02962962962962963;
          result[4] += 0.6148148148148148;
          result[5] += 0;
        } else {
          result[0] += 0.0045871559633027525;
          result[1] += 0.9954128440366973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.821806346623271;
          result[1] += 0.03742880390561433;
          result[2] += 0.01383238405207486;
          result[3] += 0.036615134255492274;
          result[4] += 0.05858421480878764;
          result[5] += 0.03173311635475998;
        } else {
          result[0] += 0.25925925925925924;
          result[1] += 0.037037037037037035;
          result[2] += 0.17989417989417988;
          result[3] += 0.2698412698412698;
          result[4] += 0.06349206349206349;
          result[5] += 0.19047619047619047;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.03636363636363636;
          result[2] += 0.19393939393939394;
          result[3] += 0.5333333333333333;
          result[4] += 0.024242424242424242;
          result[5] += 0.21212121212121213;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0.058823529411764705;
          result[2] += 0.3431372549019608;
          result[3] += 0.09803921568627451;
          result[4] += 0.11764705882352941;
          result[5] += 0.35294117647058826;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0.7484472049689441;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.034161490683229816;
        } else {
          result[0] += 0.0045385779122541605;
          result[1] += 0;
          result[2] += 0.9546142208774584;
          result[3] += 0.036308623298033284;
          result[4] += 0;
          result[5] += 0.0045385779122541605;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.020066889632107024;
          result[1] += 0.016722408026755852;
          result[2] += 0;
          result[3] += 0.0033444816053511705;
          result[4] += 0.9264214046822743;
          result[5] += 0.033444816053511704;
        } else {
          result[0] += 0.6368715083798883;
          result[1] += 0.0111731843575419;
          result[2] += 0;
          result[3] += 0.027932960893854747;
          result[4] += 0.1564245810055866;
          result[5] += 0.16759776536312848;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0.013333333333333334;
          result[4] += 0.7066666666666667;
          result[5] += 0.2;
        } else {
          result[0] += 0.017070979335130278;
          result[1] += 0.0008984725965858042;
          result[2] += 0.0017969451931716084;
          result[3] += 0.11410601976639713;
          result[4] += 0.05750224618149147;
          result[5] += 0.8086253369272237;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5333333333333334;
          result[2] += 0.04444444444444445;
          result[3] += 0.04444444444444445;
          result[4] += 0.3555555555555556;
          result[5] += 0.022222222222222227;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8191489361702128;
          result[1] += 0.03927986906710311;
          result[2] += 0.0057283142389525366;
          result[3] += 0.031096563011456628;
          result[4] += 0.07610474631751228;
          result[5] += 0.028641571194762683;
        } else {
          result[0] += 0.13664596273291926;
          result[1] += 0.003105590062111801;
          result[2] += 0.2267080745341615;
          result[3] += 0.36024844720496896;
          result[4] += 0.046583850931677016;
          result[5] += 0.2267080745341615;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.06289308176100629;
          result[2] += 0.16352201257861634;
          result[3] += 0.49056603773584906;
          result[4] += 0.025157232704402517;
          result[5] += 0.2578616352201258;
        } else {
          result[0] += 0.14814814814814814;
          result[1] += 0;
          result[2] += 0.7407407407407407;
          result[3] += 0;
          result[4] += 0.07407407407407407;
          result[5] += 0.037037037037037035;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9552238805970149;
          result[3] += 0.029850746268656716;
          result[4] += 0;
          result[5] += 0.014925373134328358;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7708333333333334;
          result[3] += 0.1527777777777778;
          result[4] += 0;
          result[5] += 0.0763888888888889;
        } else {
          result[0] += 0.016736401673640166;
          result[1] += 0;
          result[2] += 0.9246861924686193;
          result[3] += 0.05439330543933055;
          result[4] += 0;
          result[5] += 0.0041841004184100415;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003861003861003861;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9382239382239382;
          result[5] += 0.05791505791505792;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05268817204301075;
          result[1] += 0.013978494623655914;
          result[2] += 0.002150537634408602;
          result[3] += 0.05591397849462366;
          result[4] += 0.046236559139784944;
          result[5] += 0.8290322580645161;
        } else {
          result[0] += 0.01060070671378092;
          result[1] += 0.0035335689045936395;
          result[2] += 0.04946996466431095;
          result[3] += 0.6007067137809188;
          result[4] += 0.014134275618374558;
          result[5] += 0.3215547703180212;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5384615384615384;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.991130820399113;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008869179600886918;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7801161103047897;
          result[1] += 0.029027576197387522;
          result[2] += 0.011611030478955009;
          result[3] += 0.026850507982583458;
          result[4] += 0.13207547169811323;
          result[5] += 0.020319303338171266;
        } else {
          result[0] += 0.14527845036319612;
          result[1] += 0.012106537530266344;
          result[2] += 0.25181598062953997;
          result[3] += 0.28329297820823246;
          result[4] += 0.07263922518159806;
          result[5] += 0.23486682808716708;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0.01639344262295082;
          result[2] += 0.11475409836065574;
          result[3] += 0.45901639344262296;
          result[4] += 0.04918032786885246;
          result[5] += 0.36065573770491804;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.7692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0.04225352112676056;
          result[1] += 0.056338028169014086;
          result[2] += 0.4225352112676056;
          result[3] += 0.3380281690140845;
          result[4] += 0;
          result[5] += 0.14084507042253522;
        } else {
          result[0] += 0.02158273381294964;
          result[1] += 0;
          result[2] += 0.8165467625899281;
          result[3] += 0.14388489208633093;
          result[4] += 0.007194244604316547;
          result[5] += 0.01079136690647482;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9713831478537361;
          result[3] += 0.02384737678855326;
          result[4] += 0;
          result[5] += 0.0047694753577106515;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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
