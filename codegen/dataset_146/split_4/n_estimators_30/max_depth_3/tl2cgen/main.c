
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.011764705882352941;
        result[1] += 0.00392156862745098;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8352941176470589;
        result[5] += 0.14901960784313725;
      } else {
        result[0] += 0.029117379435850774;
        result[1] += 0.023657870791628753;
        result[2] += 0.007279344858962694;
        result[3] += 0.13739763421292084;
        result[4] += 0.048225659690627844;
        result[5] += 0.7543221110100091;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6084303937881309;
        result[1] += 0.052135330005546314;
        result[2] += 0.027176927343316695;
        result[3] += 0.08097615085967831;
        result[4] += 0.14198557958957295;
        result[5] += 0.08929561841375486;
      } else {
        result[0] += 0.008639308855291577;
        result[1] += 0.9848812095032398;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0064794816414686825;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.008;
        result[1] += 0;
        result[2] += 0.152;
        result[3] += 0.6;
        result[4] += 0.008;
        result[5] += 0.232;
      } else {
        result[0] += 0.04807692307692308;
        result[1] += 0;
        result[2] += 0.6634615384615384;
        result[3] += 0.2403846153846154;
        result[4] += 0;
        result[5] += 0.04807692307692308;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        result[0] += 0.07926829268292684;
        result[1] += 0;
        result[2] += 0.7317073170731708;
        result[3] += 0.07926829268292684;
        result[4] += 0;
        result[5] += 0.10975609756097562;
      } else {
        result[0] += 0.008610086100861008;
        result[1] += 0;
        result[2] += 0.947109471094711;
        result[3] += 0.04305043050430504;
        result[4] += 0;
        result[5] += 0.0012300123001230013;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0038022813688212928;
        result[1] += 0.030418250950570342;
        result[2] += 0;
        result[3] += 0.011406844106463879;
        result[4] += 0.8555133079847909;
        result[5] += 0.09885931558935361;
      } else {
        result[0] += 0.049723756906077346;
        result[1] += 0.0031570639305445935;
        result[2] += 0.0023677979479084454;
        result[3] += 0.15311760063141278;
        result[4] += 0.05209155485398579;
        result[5] += 0.739542225730071;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9579158316633266;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04008016032064128;
        result[5] += 0.002004008016032064;
      } else {
        result[0] += 0.6206331877729258;
        result[1] += 0.03384279475982533;
        result[2] += 0.0824235807860262;
        result[3] += 0.09115720524017468;
        result[4] += 0.10534934497816593;
        result[5] += 0.0665938864628821;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        result[0] += 0.025;
        result[1] += 0.025;
        result[2] += 0.05;
        result[3] += 0.175;
        result[4] += 0.175;
        result[5] += 0.55;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7027027027027027;
        result[3] += 0.10810810810810811;
        result[4] += 0;
        result[5] += 0.1891891891891892;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15789473684210525;
        result[3] += 0.3157894736842105;
        result[4] += 0;
        result[5] += 0.5263157894736842;
      } else {
        result[0] += 0.004602991944764097;
        result[1] += 0;
        result[2] += 0.9102416570771001;
        result[3] += 0.08285385500575373;
        result[4] += 0;
        result[5] += 0.0023014959723820483;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.02074688796680498;
        result[2] += 0.004149377593360996;
        result[3] += 0.029045643153526972;
        result[4] += 0.8755186721991701;
        result[5] += 0.07053941908713693;
      } else {
        result[0] += 0.04140625;
        result[1] += 0.0125;
        result[2] += 0.015625;
        result[3] += 0.1625;
        result[4] += 0.0546875;
        result[5] += 0.71328125;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6047671840354767;
        result[1] += 0.0393569844789357;
        result[2] += 0.07206208425720621;
        result[3] += 0.09700665188470066;
        result[4] += 0.11529933481152993;
        result[5] += 0.07150776053215077;
      } else {
        result[0] += 0.013544018058690745;
        result[1] += 0.9864559819413092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.043478260869565216;
        result[4] += 0.15217391304347827;
        result[5] += 0.8043478260869565;
      } else {
        result[0] += 0.025423728813559324;
        result[1] += 0.1440677966101695;
        result[2] += 0.3644067796610169;
        result[3] += 0.288135593220339;
        result[4] += 0.03389830508474576;
        result[5] += 0.1440677966101695;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.23170731707317074;
        result[1] += 0;
        result[2] += 0.6219512195121951;
        result[3] += 0.0975609756097561;
        result[4] += 0;
        result[5] += 0.04878048780487805;
      } else {
        result[0] += 0.007389162561576354;
        result[1] += 0;
        result[2] += 0.9298029556650246;
        result[3] += 0.06280788177339902;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003787878787878788;
        result[1] += 0.003787878787878788;
        result[2] += 0.007575757575757576;
        result[3] += 0;
        result[4] += 0.9166666666666666;
        result[5] += 0.06818181818181818;
      } else {
        result[0] += 0.047850770478507706;
        result[1] += 0.0186536901865369;
        result[2] += 0.008110300081103;
        result[3] += 0.14030819140308193;
        result[4] += 0.047850770478507706;
        result[5] += 0.7372262773722628;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.7889087656529516;
        result[2] += 0;
        result[3] += 0.03935599284436494;
        result[4] += 0.16636851520572452;
        result[5] += 0.005366726296958855;
      } else {
        result[0] += 0.6704260651629073;
        result[1] += 0.02819548872180451;
        result[2] += 0.05325814536340852;
        result[3] += 0.08458646616541353;
        result[4] += 0.08897243107769423;
        result[5] += 0.07456140350877193;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08450704225352113;
        result[3] += 0.18309859154929578;
        result[4] += 0;
        result[5] += 0.7323943661971831;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0.18421052631578946;
        result[2] += 0.5263157894736842;
        result[3] += 0;
        result[4] += 0.07894736842105263;
        result[5] += 0.10526315789473684;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6111111111111112;
        result[3] += 0.3111111111111111;
        result[4] += 0;
        result[5] += 0.07777777777777778;
      } else {
        result[0] += 0.020338983050847456;
        result[1] += 0;
        result[2] += 0.9107344632768362;
        result[3] += 0.05310734463276836;
        result[4] += 0;
        result[5] += 0.015819209039548022;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.024630541871921183;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9655172413793104;
        result[5] += 0.009852216748768473;
      } else {
        result[0] += 0.09375;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.578125;
        result[5] += 0.328125;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        result[0] += 0.033849129593810444;
        result[1] += 0.013539651837524178;
        result[2] += 0;
        result[3] += 0.0725338491295938;
        result[4] += 0.06673114119922631;
        result[5] += 0.8133462282398453;
      } else {
        result[0] += 0.00425531914893617;
        result[1] += 0;
        result[2] += 0.08936170212765958;
        result[3] += 0.6425531914893617;
        result[4] += 0.01702127659574468;
        result[5] += 0.24680851063829787;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0.0019455252918287938;
        result[1] += 0.9007782101167315;
        result[2] += 0.005836575875486381;
        result[3] += 0;
        result[4] += 0.0914396887159533;
        result[5] += 0;
      } else {
        result[0] += 0.705022250476796;
        result[1] += 0.021614748887476165;
        result[2] += 0.03242212333121425;
        result[3] += 0.05022250476795932;
        result[4] += 0.10171646535282901;
        result[5] += 0.08900190718372537;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.015625;
        result[1] += 0.1015625;
        result[2] += 0.29296875;
        result[3] += 0.30859375;
        result[4] += 0.09765625;
        result[5] += 0.18359375;
      } else {
        result[0] += 0.0454065469904963;
        result[1] += 0;
        result[2] += 0.8912354804646251;
        result[3] += 0.06019007391763464;
        result[4] += 0;
        result[5] += 0.0031678986272439284;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.05102040816326531;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8707482993197279;
        result[5] += 0.0782312925170068;
      } else {
        result[0] += 0.04170008019246191;
        result[1] += 0.0024057738572574178;
        result[2] += 0.012028869286287089;
        result[3] += 0.16519647153167602;
        result[4] += 0.04490777866880513;
        result[5] += 0.7337610264635124;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9767932489451476;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.023206751054852322;
        result[5] += 0;
      } else {
        result[0] += 0.6235224586288417;
        result[1] += 0.03250591016548464;
        result[2] += 0.049645390070921995;
        result[3] += 0.0839243498817967;
        result[4] += 0.10933806146572106;
        result[5] += 0.10106382978723405;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        result[0] += 0.005235602094240838;
        result[1] += 0;
        result[2] += 0.47643979057591623;
        result[3] += 0.38219895287958117;
        result[4] += 0;
        result[5] += 0.13612565445026178;
      } else {
        result[0] += 0.017857142857142856;
        result[1] += 0;
        result[2] += 0.8392857142857143;
        result[3] += 0.10714285714285714;
        result[4] += 0;
        result[5] += 0.03571428571428571;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.75;
      } else {
        result[0] += 0.012315270935960592;
        result[1] += 0;
        result[2] += 0.9470443349753694;
        result[3] += 0.04064039408866995;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.979253112033195;
        result[5] += 0.02074688796680498;
      } else {
        result[0] += 0.4147727272727273;
        result[1] += 0.017045454545454544;
        result[2] += 0;
        result[3] += 0.05113636363636364;
        result[4] += 0.3181818181818182;
        result[5] += 0.19886363636363635;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        result[0] += 0;
        result[1] += 0.004201680672268907;
        result[2] += 0.0021008403361344537;
        result[3] += 0.06827731092436974;
        result[4] += 0.07457983193277311;
        result[5] += 0.8508403361344538;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029315960912052116;
        result[3] += 0.5602605863192183;
        result[4] += 0;
        result[5] += 0.41042345276872966;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9655172413793104;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.034482758620689655;
        result[5] += 0;
      } else {
        result[0] += 0.7038062283737024;
        result[1] += 0.02906574394463668;
        result[2] += 0.04083044982698962;
        result[3] += 0.057439446366782006;
        result[4] += 0.10795847750865052;
        result[5] += 0.06089965397923876;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.029126213592233014;
        result[1] += 0.029126213592233014;
        result[2] += 0.29611650485436897;
        result[3] += 0.412621359223301;
        result[4] += 0.024271844660194178;
        result[5] += 0.20873786407766992;
      } else {
        result[0] += 0.0437375745526839;
        result[1] += 0;
        result[2] += 0.8886679920477137;
        result[3] += 0.06262425447316103;
        result[4] += 0.0019880715705765406;
        result[5] += 0.002982107355864811;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.006024096385542169;
        result[1] += 0.045180722891566265;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8614457831325302;
        result[5] += 0.08734939759036145;
      } else {
        result[0] += 0.041390728476821195;
        result[1] += 0.005794701986754967;
        result[2] += 0.015728476821192054;
        result[3] += 0.15562913907284767;
        result[4] += 0.050496688741721855;
        result[5] += 0.7309602649006622;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9373695198329853;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06263048016701461;
        result[5] += 0;
      } else {
        result[0] += 0.7223667100130039;
        result[1] += 0.035110533159947985;
        result[2] += 0.020156046814044214;
        result[3] += 0.056566970091027305;
        result[4] += 0.1046814044213264;
        result[5] += 0.0611183355006502;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09022556390977443;
        result[3] += 0.5488721804511278;
        result[4] += 0.03007518796992481;
        result[5] += 0.3308270676691729;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0.010309278350515464;
        result[1] += 0.07216494845360824;
        result[2] += 0.3711340206185567;
        result[3] += 0.20618556701030927;
        result[4] += 0.09278350515463918;
        result[5] += 0.24742268041237114;
      } else {
        result[0] += 0.021589793915603533;
        result[1] += 0;
        result[2] += 0.8920510304219823;
        result[3] += 0.07654563297350343;
        result[4] += 0.001962708537782139;
        result[5] += 0.007850834151128557;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.015444015444015444;
        result[2] += 0;
        result[3] += 0.019305019305019305;
        result[4] += 0.9073359073359073;
        result[5] += 0.05791505791505792;
      } else {
        result[0] += 0.04796747967479675;
        result[1] += 0.005691056910569106;
        result[2] += 0;
        result[3] += 0.15040650406504066;
        result[4] += 0.05447154471544716;
        result[5] += 0.7414634146341463;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8440860215053764;
        result[2] += 0;
        result[3] += 0.005376344086021506;
        result[4] += 0.14336917562724014;
        result[5] += 0.007168458781362007;
      } else {
        result[0] += 0.639623750734862;
        result[1] += 0.028806584362139922;
        result[2] += 0.07172251616696063;
        result[3] += 0.10758377425044093;
        result[4] += 0.08877131099353323;
        result[5] += 0.0634920634920635;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24;
        result[3] += 0.26666666666666666;
        result[4] += 0;
        result[5] += 0.49333333333333335;
      } else {
        result[0] += 0.13580246913580246;
        result[1] += 0.04938271604938271;
        result[2] += 0.7283950617283951;
        result[3] += 0.04938271604938271;
        result[4] += 0;
        result[5] += 0.037037037037037035;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.54;
        result[3] += 0.28;
        result[4] += 0.02;
        result[5] += 0.16;
      } else {
        result[0] += 0.0011467889908256881;
        result[1] += 0;
        result[2] += 0.9369266055045872;
        result[3] += 0.05619266055045872;
        result[4] += 0;
        result[5] += 0.005733944954128441;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9979035639412998;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0020964360587002098;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        result[0] += 0.04005252790544977;
        result[1] += 0.011162179908076166;
        result[2] += 0.015101772816808929;
        result[3] += 0.13328956007879186;
        result[4] += 0.20157583716349312;
        result[5] += 0.5988181221273802;
      } else {
        result[0] += 0.6279199110122359;
        result[1] += 0.03448275862068966;
        result[2] += 0.062291434927697446;
        result[3] += 0.08342602892102337;
        result[4] += 0.1323692992213571;
        result[5] += 0.05951056729699667;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        result[0] += 0.024390243902439025;
        result[1] += 0.12195121951219512;
        result[2] += 0.07317073170731707;
        result[3] += 0;
        result[4] += 0.14634146341463414;
        result[5] += 0.6341463414634146;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4251968503937008;
        result[3] += 0.41732283464566927;
        result[4] += 0;
        result[5] += 0.15748031496062992;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7727272727272727;
        result[3] += 0.20707070707070707;
        result[4] += 0;
        result[5] += 0.020202020202020204;
      } else {
        result[0] += 0.0060514372163388815;
        result[1] += 0.0030257186081694407;
        result[2] += 0.951588502269289;
        result[3] += 0.03328290468986385;
        result[4] += 0;
        result[5] += 0.0060514372163388815;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.025179856115107913;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9460431654676259;
        result[5] += 0.02877697841726619;
      } else {
        result[0] += 0.05818181818181818;
        result[1] += 0.019636363636363636;
        result[2] += 0;
        result[3] += 0.17527272727272727;
        result[4] += 0.05745454545454545;
        result[5] += 0.6894545454545454;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.008620689655172414;
        result[1] += 0.8413793103448276;
        result[2] += 0.0034482758620689655;
        result[3] += 0.008620689655172414;
        result[4] += 0.1310344827586207;
        result[5] += 0.006896551724137931;
      } else {
        result[0] += 0.6764144945963128;
        result[1] += 0.02542911633820725;
        result[2] += 0.06357279084551812;
        result[3] += 0.09980928162746344;
        result[4] += 0.0775588048315321;
        result[5] += 0.05721551176096631;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.044444444444444446;
        result[3] += 0.35555555555555557;
        result[4] += 0;
        result[5] += 0.6;
      } else {
        result[0] += 0.027777777777777776;
        result[1] += 0.25;
        result[2] += 0.5555555555555556;
        result[3] += 0.1111111111111111;
        result[4] += 0;
        result[5] += 0.05555555555555555;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
        result[0] += 0.025641025641025644;
        result[1] += 0;
        result[2] += 0.6666666666666667;
        result[3] += 0.20512820512820515;
        result[4] += 0.012820512820512822;
        result[5] += 0.08974358974358976;
      } else {
        result[0] += 0.002554278416347382;
        result[1] += 0;
        result[2] += 0.946360153256705;
        result[3] += 0.04469987228607918;
        result[4] += 0;
        result[5] += 0.006385696040868455;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.265625;
        result[1] += 0.04017857142857143;
        result[2] += 0;
        result[3] += 0.004464285714285714;
        result[4] += 0.5691964285714286;
        result[5] += 0.12053571428571429;
      } else {
        result[0] += 0.004835589941972921;
        result[1] += 0;
        result[2] += 0.0019342359767891683;
        result[3] += 0.09187620889748549;
        result[4] += 0.09381044487427466;
        result[5] += 0.8075435203094777;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.9478957915831663;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.052104208416833664;
        result[5] += 0;
      } else {
        result[0] += 0.6714100905562742;
        result[1] += 0.018111254851228976;
        result[2] += 0.04851228978007762;
        result[3] += 0.09508408796895214;
        result[4] += 0.06080206985769728;
        result[5] += 0.10608020698576973;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08875739644970414;
        result[3] += 0.5384615384615384;
        result[4] += 0.07692307692307693;
        result[5] += 0.2958579881656805;
      } else {
        result[0] += 0;
        result[1] += 0.10112359550561797;
        result[2] += 0.5674157303370787;
        result[3] += 0.17415730337078653;
        result[4] += 0.028089887640449437;
        result[5] += 0.12921348314606743;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
        result[0] += 0.12096774193548387;
        result[1] += 0.04032258064516129;
        result[2] += 0.5887096774193549;
        result[3] += 0.07258064516129033;
        result[4] += 0.11290322580645161;
        result[5] += 0.06451612903225806;
      } else {
        result[0] += 0.021739130434782608;
        result[1] += 0;
        result[2] += 0.9227053140096618;
        result[3] += 0.05555555555555555;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21266968325791857;
        result[1] += 0.002262443438914028;
        result[2] += 0;
        result[3] += 0.02036199095022625;
        result[4] += 0.6674208144796381;
        result[5] += 0.09728506787330318;
      } else {
        result[0] += 0.008982035928143712;
        result[1] += 0.0029940119760479044;
        result[2] += 0.001996007984031936;
        result[3] += 0.07884231536926148;
        result[4] += 0.10878243512974052;
        result[5] += 0.7984031936127745;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.0053285968028419185;
        result[1] += 0.9040852575488455;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0905861456483126;
        result[5] += 0;
      } else {
        result[0] += 0.6455026455026455;
        result[1] += 0.019988242210464434;
        result[2] += 0.06055261610817166;
        result[3] += 0.13932980599647266;
        result[4] += 0.0393885949441505;
        result[5] += 0.09523809523809523;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.0136986301369863;
        result[2] += 0.0684931506849315;
        result[3] += 0.0273972602739726;
        result[4] += 0.1643835616438356;
        result[5] += 0.726027397260274;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2916666666666667;
        result[3] += 0.4791666666666667;
        result[4] += 0.006944444444444444;
        result[5] += 0.2222222222222222;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.35294117647058826;
        result[1] += 0;
        result[2] += 0.35294117647058826;
        result[3] += 0.17647058823529413;
        result[4] += 0.029411764705882353;
        result[5] += 0.08823529411764706;
      } else {
        result[0] += 0.0023068050749711646;
        result[1] += 0;
        result[2] += 0.9238754325259514;
        result[3] += 0.0715109573241061;
        result[4] += 0;
        result[5] += 0.0023068050749711646;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0.23076923076923078;
        result[2] += 0;
        result[3] += 0.23076923076923078;
        result[4] += 0.3076923076923077;
        result[5] += 0.23076923076923078;
      } else {
        result[0] += 0.002197802197802198;
        result[1] += 0.9868131868131869;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01098901098901099;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
        result[0] += 0.022840827980014276;
        result[1] += 0.005710206995003569;
        result[2] += 0.004996431120628123;
        result[3] += 0.13276231263383298;
        result[4] += 0.2091363311920057;
        result[5] += 0.6245538900785154;
      } else {
        result[0] += 0.6029181865554977;
        result[1] += 0.05054715997915581;
        result[2] += 0.04325169359041167;
        result[3] += 0.07347576862949452;
        result[4] += 0.11985409067222512;
        result[5] += 0.10995310057321521;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        result[0] += 0.01666666666666667;
        result[1] += 0;
        result[2] += 0.2666666666666667;
        result[3] += 0.5416666666666667;
        result[4] += 0.008333333333333335;
        result[5] += 0.16666666666666669;
      } else {
        result[0] += 0.004807692307692308;
        result[1] += 0;
        result[2] += 0.8076923076923077;
        result[3] += 0.15384615384615385;
        result[4] += 0;
        result[5] += 0.03365384615384615;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        result[0] += 0.16666666666666669;
        result[1] += 0;
        result[2] += 0.6481481481481483;
        result[3] += 0.0925925925925926;
        result[4] += 0;
        result[5] += 0.0925925925925926;
      } else {
        result[0] += 0.006097560975609756;
        result[1] += 0;
        result[2] += 0.9634146341463414;
        result[3] += 0.03048780487804878;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.05204460966542751;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9219330855018587;
        result[5] += 0.026022304832713755;
      } else {
        result[0] += 0.04916732751784298;
        result[1] += 0.012688342585249802;
        result[2] += 0.0015860428231562252;
        result[3] += 0.15384615384615385;
        result[4] += 0.04440919904837431;
        result[5] += 0.7383029341792229;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6185037121644775;
        result[1] += 0.06510565391205027;
        result[2] += 0.03426613363792119;
        result[3] += 0.0679611650485437;
        result[4] += 0.13306681896059397;
        result[5] += 0.0810965162764135;
      } else {
        result[0] += 0.014527845036319613;
        result[1] += 0.9612590799031477;
        result[2] += 0;
        result[3] += 0.01694915254237288;
        result[4] += 0.007263922518159807;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0.6142857142857143;
        result[4] += 0;
        result[5] += 0.24285714285714285;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5393258426966293;
        result[3] += 0.24719101123595508;
        result[4] += 0;
        result[5] += 0.21348314606741575;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.09523809523809523;
        result[1] += 0;
        result[2] += 0.38095238095238093;
        result[3] += 0.30952380952380953;
        result[4] += 0.07142857142857142;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.011815252416756176;
        result[1] += 0;
        result[2] += 0.916219119226638;
        result[3] += 0.0644468313641246;
        result[4] += 0;
        result[5] += 0.007518796992481203;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.30555555555555564;
        result[1] += 0.02136752136752137;
        result[2] += 0.010683760683760686;
        result[3] += 0.012820512820512822;
        result[4] += 0.608974358974359;
        result[5] += 0.04059829059829061;
      } else {
        result[0] += 0.016976556184316895;
        result[1] += 0.012126111560226353;
        result[2] += 0.002425222312045271;
        result[3] += 0.11479385610347616;
        result[4] += 0.09377526273241714;
        result[5] += 0.7599029911075182;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        result[0] += 0.0081799591002045;
        result[1] += 0.8834355828220859;
        result[2] += 0;
        result[3] += 0.022494887525562373;
        result[4] += 0.08588957055214724;
        result[5] += 0;
      } else {
        result[0] += 0.5982587064676617;
        result[1] += 0.029228855721393034;
        result[2] += 0.0740049751243781;
        result[3] += 0.13432835820895522;
        result[4] += 0.05845771144278607;
        result[5] += 0.10572139303482588;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
        result[0] += 0.009615384615384618;
        result[1] += 0.08653846153846155;
        result[2] += 0.25000000000000006;
        result[3] += 0.3653846153846154;
        result[4] += 0.03846153846153847;
        result[5] += 0.25000000000000006;
      } else {
        result[0] += 0.375;
        result[1] += 0;
        result[2] += 0.6041666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.020833333333333332;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
        result[0] += 0.012690355329949238;
        result[1] += 0;
        result[2] += 0.8375634517766497;
        result[3] += 0.1319796954314721;
        result[4] += 0;
        result[5] += 0.017766497461928935;
      } else {
        result[0] += 0.0041841004184100415;
        result[1] += 0;
        result[2] += 0.9686192468619247;
        result[3] += 0.02092050209205021;
        result[4] += 0;
        result[5] += 0.006276150627615063;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.07260726072607261;
        result[2] += 0.006600660066006601;
        result[3] += 0;
        result[4] += 0.8547854785478548;
        result[5] += 0.066006600660066;
      } else {
        result[0] += 0.03462837837837838;
        result[1] += 0.0016891891891891893;
        result[2] += 0.004222972972972973;
        result[3] += 0.14864864864864866;
        result[4] += 0.06756756756756757;
        result[5] += 0.7432432432432432;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0038022813688212928;
        result[1] += 0.9049429657794676;
        result[2] += 0;
        result[3] += 0.005703422053231939;
        result[4] += 0.07604562737642585;
        result[5] += 0.009505703422053232;
      } else {
        result[0] += 0.6625074272133097;
        result[1] += 0.024955436720142606;
        result[2] += 0.04753416518122401;
        result[3] += 0.08080808080808083;
        result[4] += 0.07130124777183602;
        result[5] += 0.11289364230540702;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0.19736842105263158;
        result[1] += 0.039473684210526314;
        result[2] += 0.11842105263157894;
        result[3] += 0;
        result[4] += 0.07894736842105263;
        result[5] += 0.5657894736842105;
      } else {
        result[0] += 0.0425531914893617;
        result[1] += 0.05319148936170213;
        result[2] += 0.425531914893617;
        result[3] += 0.32978723404255317;
        result[4] += 0;
        result[5] += 0.14893617021276595;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.6875;
        result[4] += 0;
        result[5] += 0.1875;
      } else {
        result[0] += 0.00211864406779661;
        result[1] += 0;
        result[2] += 0.9141949152542372;
        result[3] += 0.07838983050847458;
        result[4] += 0;
        result[5] += 0.005296610169491525;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.015544041450777204;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9637305699481866;
        result[5] += 0.020725388601036274;
      } else {
        result[0] += 0;
        result[1] += 0.13953488372093026;
        result[2] += 0;
        result[3] += 0.0930232558139535;
        result[4] += 0.5348837209302326;
        result[5] += 0.23255813953488375;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        result[0] += 0.0377906976744186;
        result[1] += 0.003875968992248062;
        result[2] += 0;
        result[3] += 0.05426356589147287;
        result[4] += 0.0687984496124031;
        result[5] += 0.8352713178294574;
      } else {
        result[0] += 0.02459016393442623;
        result[1] += 0;
        result[2] += 0.00819672131147541;
        result[3] += 0.5573770491803278;
        result[4] += 0.012295081967213115;
        result[5] += 0.3975409836065574;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.007575757575757576;
        result[1] += 0.7954545454545454;
        result[2] += 0.001893939393939394;
        result[3] += 0.017045454545454544;
        result[4] += 0.16287878787878787;
        result[5] += 0.015151515151515152;
      } else {
        result[0] += 0.7240704500978474;
        result[1] += 0.03392041748206132;
        result[2] += 0.014350945857795174;
        result[3] += 0.0665362035225049;
        result[4] += 0.09719504240052186;
        result[5] += 0.06392694063926942;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.014084507042253521;
        result[1] += 0.004694835680751174;
        result[2] += 0.3333333333333333;
        result[3] += 0.3474178403755869;
        result[4] += 0.028169014084507043;
        result[5] += 0.27230046948356806;
      } else {
        result[0] += 0.026923076923076925;
        result[1] += 0;
        result[2] += 0.8826923076923077;
        result[3] += 0.07692307692307693;
        result[4] += 0;
        result[5] += 0.013461538461538462;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.016597510373443983;
        result[1] += 0.004149377593360996;
        result[2] += 0.004149377593360996;
        result[3] += 0;
        result[4] += 0.9336099585062241;
        result[5] += 0.04149377593360996;
      } else {
        result[0] += 0.03669724770642202;
        result[1] += 0.005351681957186544;
        result[2] += 0.0015290519877675841;
        result[3] += 0.15978593272171254;
        result[4] += 0.05122324159021407;
        result[5] += 0.7454128440366973;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.006;
        result[1] += 0.926;
        result[2] += 0;
        result[3] += 0.004;
        result[4] += 0.064;
        result[5] += 0;
      } else {
        result[0] += 0.6255002858776444;
        result[1] += 0.050314465408805034;
        result[2] += 0.05660377358490566;
        result[3] += 0.09548313321898227;
        result[4] += 0.10062893081761007;
        result[5] += 0.0714694110920526;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08955223880597014;
        result[3] += 0.43283582089552236;
        result[4] += 0;
        result[5] += 0.47761194029850745;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7555555555555555;
        result[3] += 0.022222222222222223;
        result[4] += 0;
        result[5] += 0.2222222222222222;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        result[0] += 0.010752688172043013;
        result[1] += 0.00806451612903226;
        result[2] += 0.7876344086021506;
        result[3] += 0.16935483870967744;
        result[4] += 0;
        result[5] += 0.024193548387096777;
      } else {
        result[0] += 0.0055147058823529415;
        result[1] += 0;
        result[2] += 0.9779411764705882;
        result[3] += 0.016544117647058824;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.011811023622047244;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9724409448818898;
        result[5] += 0.015748031496062992;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.07142857142857142;
        result[2] += 0;
        result[3] += 0.2857142857142857;
        result[4] += 0.23809523809523808;
        result[5] += 0.35714285714285715;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03691983122362869;
        result[1] += 0;
        result[2] += 0.002109704641350211;
        result[3] += 0.04430379746835443;
        result[4] += 0.08860759493670886;
        result[5] += 0.8280590717299579;
      } else {
        result[0] += 0.07769423558897243;
        result[1] += 0.015037593984962405;
        result[2] += 0.020050125313283207;
        result[3] += 0.44862155388471175;
        result[4] += 0.05764411027568922;
        result[5] += 0.38095238095238093;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.5789473684210527;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.42105263157894735;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        result[0] += 0.7609970674486805;
        result[1] += 0.028592375366568917;
        result[2] += 0.04105571847507332;
        result[3] += 0.040322580645161296;
        result[4] += 0.08284457478005866;
        result[5] += 0.046187683284457486;
      } else {
        result[0] += 0.040310077519379844;
        result[1] += 0.0069767441860465115;
        result[2] += 0.7542635658914729;
        result[3] += 0.12170542635658915;
        result[4] += 0.004651162790697674;
        result[5] += 0.07209302325581396;
      }
    }
  }
  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008163265306122451;
        result[1] += 0.08571428571428573;
        result[2] += 0;
        result[3] += 0.012244897959183675;
        result[4] += 0.8326530612244899;
        result[5] += 0.06122448979591837;
      } else {
        result[0] += 0.36619718309859156;
        result[1] += 0;
        result[2] += 0.07042253521126761;
        result[3] += 0.056338028169014086;
        result[4] += 0.2535211267605634;
        result[5] += 0.2535211267605634;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
        result[0] += 0.0011904761904761906;
        result[1] += 0.0011904761904761906;
        result[2] += 0.002380952380952381;
        result[3] += 0.055952380952380955;
        result[4] += 0.0880952380952381;
        result[5] += 0.8511904761904762;
      } else {
        result[0] += 0;
        result[1] += 0.04316546762589928;
        result[2] += 0.10431654676258993;
        result[3] += 0.4172661870503597;
        result[4] += 0.046762589928057555;
        result[5] += 0.38848920863309355;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
        result[0] += 0.008791208791208793;
        result[1] += 0.9494505494505495;
        result[2] += 0.008791208791208793;
        result[3] += 0.006593406593406594;
        result[4] += 0.02417582417582418;
        result[5] += 0.0021978021978021982;
      } else {
        result[0] += 0.6349570200573066;
        result[1] += 0.03954154727793696;
        result[2] += 0.020630372492836675;
        result[3] += 0.08080229226361031;
        result[4] += 0.14441260744985673;
        result[5] += 0.07965616045845272;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.05063291139240506;
        result[1] += 0.02531645569620253;
        result[2] += 0.37658227848101267;
        result[3] += 0.2974683544303797;
        result[4] += 0.022151898734177215;
        result[5] += 0.22784810126582278;
      } else {
        result[0] += 0.0045662100456621;
        result[1] += 0;
        result[2] += 0.9098173515981736;
        result[3] += 0.0730593607305936;
        result[4] += 0;
        result[5] += 0.012557077625570776;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.017142857142857144;
        result[4] += 0.8228571428571428;
        result[5] += 0.16;
      } else {
        result[0] += 0.037521815008726006;
        result[1] += 0.005235602094240838;
        result[2] += 0.006980802792321117;
        result[3] += 0.14659685863874344;
        result[4] += 0.05759162303664921;
        result[5] += 0.7460732984293194;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6625802685347345;
        result[1] += 0.06538237011091654;
        result[2] += 0.03969643899591361;
        result[3] += 0.06538237011091654;
        result[4] += 0.10683012259194397;
        result[5] += 0.06012842965557502;
      } else {
        result[0] += 0.009345794392523364;
        result[1] += 0.9813084112149533;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009345794392523364;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0;
        result[4] += 0.1875;
        result[5] += 0.6875;
      } else {
        result[0] += 0;
        result[1] += 0.007352941176470588;
        result[2] += 0.13970588235294118;
        result[3] += 0.6397058823529411;
        result[4] += 0;
        result[5] += 0.21323529411764705;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0.03260869565217391;
        result[1] += 0.10869565217391304;
        result[2] += 0.29347826086956524;
        result[3] += 0.1956521739130435;
        result[4] += 0.10869565217391304;
        result[5] += 0.2608695652173913;
      } else {
        result[0] += 0.011840688912809472;
        result[1] += 0;
        result[2] += 0.9031216361679225;
        result[3] += 0.077502691065662;
        result[4] += 0.004305705059203444;
        result[5] += 0.0032292787944025836;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.009389671361502348;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9530516431924883;
        result[5] += 0.03755868544600939;
      } else {
        result[0] += 0.038461538461538464;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5384615384615384;
        result[5] += 0.4230769230769231;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0450281425891182;
        result[1] += 0.025328330206378986;
        result[2] += 0.001876172607879925;
        result[3] += 0.07598499061913697;
        result[4] += 0.06191369606003752;
        result[5] += 0.7898686679174484;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06282722513089005;
        result[3] += 0.6230366492146597;
        result[4] += 0.010471204188481676;
        result[5] += 0.3036649214659686;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        result[0] += 0.02333931777378815;
        result[1] += 0.7648114901256733;
        result[2] += 0.00718132854578097;
        result[3] += 0.00718132854578097;
        result[4] += 0.18491921005385997;
        result[5] += 0.012567324955116697;
      } else {
        result[0] += 0.7148463047743624;
        result[1] += 0.03662524525833879;
        result[2] += 0.011118378024852847;
        result[3] += 0.06213211249182473;
        result[4] += 0.10137344669718772;
        result[5] += 0.07390451275343363;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.05166051660516605;
        result[1] += 0;
        result[2] += 0.35424354243542433;
        result[3] += 0.39114391143911437;
        result[4] += 0.01845018450184502;
        result[5] += 0.18450184501845018;
      } else {
        result[0] += 0.018499486125385406;
        result[1] += 0;
        result[2] += 0.880781089414183;
        result[3] += 0.07913669064748201;
        result[4] += 0;
        result[5] += 0.02158273381294964;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0037174721189591076;
        result[1] += 0.01486988847583643;
        result[2] += 0;
        result[3] += 0.007434944237918215;
        result[4] += 0.8513011152416357;
        result[5] += 0.12267657992565056;
      } else {
        result[0] += 0.029217719132893498;
        result[1] += 0.008482563619227144;
        result[2] += 0.00942507068803016;
        result[3] += 0.13760603204524033;
        result[4] += 0.06314797360980208;
        result[5] += 0.7521206409048068;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9435146443514645;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.056485355648535567;
        result[5] += 0;
      } else {
        result[0] += 0.605424769703173;
        result[1] += 0.028147389969293758;
        result[2] += 0.0655066530194473;
        result[3] += 0.08546571136131015;
        result[4] += 0.11566018423746163;
        result[5] += 0.09979529170931424;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0;
        result[4] += 0.15;
        result[5] += 0.65;
      } else {
        result[0] += 0.006993006993006993;
        result[1] += 0.08391608391608392;
        result[2] += 0.32867132867132864;
        result[3] += 0.42657342657342656;
        result[4] += 0.027972027972027972;
        result[5] += 0.1258741258741259;
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
        result[0] += 0.008027522935779817;
        result[1] += 0;
        result[2] += 0.9094036697247706;
        result[3] += 0.07339449541284404;
        result[4] += 0;
        result[5] += 0.009174311926605505;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.14285714285714285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6428571428571429;
        result[5] += 0.21428571428571427;
      } else {
        result[0] += 0;
        result[1] += 0.9954233409610984;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004576659038901602;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.4829683698296837;
        result[1] += 0.05474452554744526;
        result[2] += 0;
        result[3] += 0.015815085158150853;
        result[4] += 0.3929440389294404;
        result[5] += 0.0535279805352798;
      } else {
        result[0] += 0.07332624867162593;
        result[1] += 0.0334750265674814;
        result[2] += 0.03506907545164718;
        result[3] += 0.19606801275239108;
        result[4] += 0.10255047821466524;
        result[5] += 0.5595111583421891;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.9863013698630138;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.00856164383561644;
        result[4] += 0.005136986301369864;
        result[5] += 0;
      } else {
        result[0] += 0.11842105263157894;
        result[1] += 0;
        result[2] += 0.6842105263157895;
        result[3] += 0.13157894736842105;
        result[4] += 0;
        result[5] += 0.06578947368421052;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5309734513274337;
        result[3] += 0.37168141592920356;
        result[4] += 0;
        result[5] += 0.09734513274336283;
      } else {
        result[0] += 0.0467706013363029;
        result[1] += 0;
        result[2] += 0.9042316258351893;
        result[3] += 0.043429844097995544;
        result[4] += 0;
        result[5] += 0.005567928730512249;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.017391304347826087;
        result[1] += 0.013043478260869565;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9;
        result[5] += 0.06956521739130435;
      } else {
        result[0] += 0.04447974583002383;
        result[1] += 0.019857029388403495;
        result[2] += 0.019857029388403495;
        result[3] += 0.15091342335186655;
        result[4] += 0.04209690230341541;
        result[5] += 0.7227958697378872;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
        result[0] += 0.007339449541284404;
        result[1] += 0.9045871559633027;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08807339449541285;
        result[5] += 0;
      } else {
        result[0] += 0.6997471554993678;
        result[1] += 0.018331226295828066;
        result[2] += 0.04740834386852086;
        result[3] += 0.07458912768647281;
        result[4] += 0.09671302149178256;
        result[5] += 0.0632111251580278;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0.01639344262295082;
        result[1] += 0.00819672131147541;
        result[2] += 0.06557377049180328;
        result[3] += 0.5245901639344263;
        result[4] += 0.03278688524590164;
        result[5] += 0.3524590163934426;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0.24074074074074073;
        result[2] += 0.46296296296296297;
        result[3] += 0.07407407407407407;
        result[4] += 0.037037037037037035;
        result[5] += 0.12962962962962962;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.05405405405405406;
        result[1] += 0;
        result[2] += 0.24324324324324326;
        result[3] += 0.02702702702702703;
        result[4] += 0.16216216216216217;
        result[5] += 0.5135135135135135;
      } else {
        result[0] += 0.009027081243731194;
        result[1] += 0;
        result[2] += 0.8856569709127382;
        result[3] += 0.08625877632898696;
        result[4] += 0.0010030090270812437;
        result[5] += 0.01805416248746239;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004016064257028112;
        result[1] += 0.0321285140562249;
        result[2] += 0;
        result[3] += 0.008032128514056224;
        result[4] += 0.8835341365461847;
        result[5] += 0.07228915662650602;
      } else {
        result[0] += 0.04809286898839138;
        result[1] += 0.02155887230514096;
        result[2] += 0.014096185737976783;
        result[3] += 0.14262023217247097;
        result[4] += 0.0505804311774461;
        result[5] += 0.7230514096185738;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9390962671905698;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05697445972495089;
        result[5] += 0.003929273084479372;
      } else {
        result[0] += 0.6912039925140362;
        result[1] += 0.028696194635059263;
        result[2] += 0.031815346225826574;
        result[3] += 0.06862133499688085;
        result[4] += 0.12788521522145976;
        result[5] += 0.051777916406737366;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11111111111111112;
        result[3] += 0.5679012345679013;
        result[4] += 0;
        result[5] += 0.3209876543209877;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6744186046511628;
        result[3] += 0.18604651162790697;
        result[4] += 0.023255813953488372;
        result[5] += 0.11627906976744186;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.043835616438356165;
        result[1] += 0.021917808219178082;
        result[2] += 0.684931506849315;
        result[3] += 0.16986301369863013;
        result[4] += 0.010958904109589041;
        result[5] += 0.0684931506849315;
      } else {
        result[0] += 0.005805515239477504;
        result[1] += 0.001451378809869376;
        result[2] += 0.9433962264150944;
        result[3] += 0.03193033381712627;
        result[4] += 0.001451378809869376;
        result[5] += 0.015965166908563134;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0033783783783783786;
        result[1] += 0.037162162162162164;
        result[2] += 0;
        result[3] += 0.02027027027027027;
        result[4] += 0.8445945945945946;
        result[5] += 0.0945945945945946;
      } else {
        result[0] += 0.04459124690338563;
        result[1] += 0.002477291494632535;
        result[2] += 0.0008257638315441783;
        result[3] += 0.1676300578034682;
        result[4] += 0.04541701073492981;
        result[5] += 0.7390586292320397;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0035587188612099642;
        result[1] += 0.8345195729537367;
        result[2] += 0;
        result[3] += 0.014234875444839857;
        result[4] += 0.1423487544483986;
        result[5] += 0.005338078291814947;
      } else {
        result[0] += 0.644805571677307;
        result[1] += 0.02379570516540917;
        result[2] += 0.09170052234474753;
        result[3] += 0.09518282066163668;
        result[4] += 0.07312826465467208;
        result[5] += 0.0713871154962275;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0.02247191011235955;
        result[2] += 0.19101123595505617;
        result[3] += 0.48314606741573035;
        result[4] += 0.056179775280898875;
        result[5] += 0.24719101123595505;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6506024096385542;
        result[3] += 0.13253012048192772;
        result[4] += 0.04819277108433735;
        result[5] += 0.1686746987951807;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        result[0] += 0.00909090909090909;
        result[1] += 0;
        result[2] += 0.8121212121212121;
        result[3] += 0.14242424242424243;
        result[4] += 0;
        result[5] += 0.03636363636363636;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9755639097744361;
        result[3] += 0.02443609022556391;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.3230452674897119;
        result[1] += 0.01646090534979424;
        result[2] += 0;
        result[3] += 0.006172839506172839;
        result[4] += 0.5823045267489712;
        result[5] += 0.0720164609053498;
      } else {
        result[0] += 0.005843071786310518;
        result[1] += 0.00333889816360601;
        result[2] += 0;
        result[3] += 0.1018363939899833;
        result[4] += 0.09849749582637729;
        result[5] += 0.7904841402337228;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6820966643975492;
        result[1] += 0.06262763784887677;
        result[2] += 0.036759700476514626;
        result[3] += 0.09394145677331515;
        result[4] += 0.06262763784887677;
        result[5] += 0.06194690265486724;
      } else {
        result[0] += 0.009592326139088728;
        result[1] += 0.9904076738609112;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.010869565217391304;
        result[2] += 0.13043478260869565;
        result[3] += 0.5;
        result[4] += 0.04891304347826087;
        result[5] += 0.30978260869565216;
      } else {
        result[0] += 0.02608695652173913;
        result[1] += 0;
        result[2] += 0.6608695652173913;
        result[3] += 0.24347826086956523;
        result[4] += 0;
        result[5] += 0.06956521739130435;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
        result[0] += 0.14049586776859505;
        result[1] += 0.08264462809917356;
        result[2] += 0.5950413223140496;
        result[3] += 0.09917355371900827;
        result[4] += 0;
        result[5] += 0.08264462809917356;
      } else {
        result[0] += 0.01555023923444976;
        result[1] += 0;
        result[2] += 0.9413875598086124;
        result[3] += 0.041866028708133975;
        result[4] += 0;
        result[5] += 0.0011961722488038277;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03278688524590164;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.930327868852459;
        result[5] += 0.036885245901639344;
      } else {
        result[0] += 0.035498489425981876;
        result[1] += 0.00906344410876133;
        result[2] += 0.015861027190332326;
        result[3] += 0.17220543806646527;
        result[4] += 0.06042296072507553;
        result[5] += 0.7069486404833837;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9546436285097192;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04535637149028078;
        result[5] += 0;
      } else {
        result[0] += 0.5979268957992363;
        result[1] += 0.03873431533006002;
        result[2] += 0.06764866339334426;
        result[3] += 0.093835242771413;
        result[4] += 0.12165848336061104;
        result[5] += 0.08019639934533553;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1111111111111111;
        result[3] += 0.07407407407407407;
        result[4] += 0;
        result[5] += 0.8148148148148148;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0.008849557522123894;
        result[1] += 0.004424778761061947;
        result[2] += 0.7699115044247787;
        result[3] += 0.168141592920354;
        result[4] += 0;
        result[5] += 0.048672566371681415;
      } else {
        result[0] += 0.007112375533428165;
        result[1] += 0.001422475106685633;
        result[2] += 0.9630156472261735;
        result[3] += 0.025604551920341393;
        result[4] += 0;
        result[5] += 0.002844950213371266;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  
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
