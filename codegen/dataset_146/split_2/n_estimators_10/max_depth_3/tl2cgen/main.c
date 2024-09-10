
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007434944237918215;
        result[1] += 0.12267657992565056;
        result[2] += 0;
        result[3] += 0.01858736059479554;
        result[4] += 0.7620817843866171;
        result[5] += 0.08921933085501858;
      } else {
        result[0] += 0.03162393162393162;
        result[1] += 0.002564102564102564;
        result[2] += 0.015384615384615385;
        result[3] += 0.15042735042735042;
        result[4] += 0.06068376068376068;
        result[5] += 0.7393162393162394;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9591346153846154;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.040865384615384616;
        result[5] += 0;
      } else {
        result[0] += 0.6151790486370925;
        result[1] += 0.019241047568145375;
        result[2] += 0.06413682522715125;
        result[3] += 0.0956707642971673;
        result[4] += 0.11598075895243186;
        result[5] += 0.08979155531801176;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
        result[0] += 0.04081632653061224;
        result[1] += 0.08163265306122448;
        result[2] += 0.32653061224489793;
        result[3] += 0;
        result[4] += 0.12244897959183673;
        result[5] += 0.42857142857142855;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21978021978021978;
        result[3] += 0.6153846153846154;
        result[4] += 0.02197802197802198;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        result[0] += 0.15789473684210528;
        result[1] += 0.1842105263157895;
        result[2] += 0.2894736842105264;
        result[3] += 0.026315789473684213;
        result[4] += 0.026315789473684213;
        result[5] += 0.31578947368421056;
      } else {
        result[0] += 0.004338394793926247;
        result[1] += 0;
        result[2] += 0.9240780911062907;
        result[3] += 0.06616052060737528;
        result[4] += 0;
        result[5] += 0.005422993492407809;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2421875;
        result[1] += 0.020833333333333332;
        result[2] += 0;
        result[3] += 0.005208333333333333;
        result[4] += 0.625;
        result[5] += 0.10677083333333333;
      } else {
        result[0] += 0.0029455081001472753;
        result[1] += 0.005154639175257732;
        result[2] += 0.007363770250368188;
        result[3] += 0.16053019145802652;
        result[4] += 0.06921944035346098;
        result[5] += 0.7547864506627393;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005671077504725898;
        result[1] += 0.8657844990548205;
        result[2] += 0;
        result[3] += 0.001890359168241966;
        result[4] += 0.1266540642722117;
        result[5] += 0;
      } else {
        result[0] += 0.7622377622377622;
        result[1] += 0.03146853146853147;
        result[2] += 0.043356643356643354;
        result[3] += 0.04825174825174825;
        result[4] += 0.07412587412587412;
        result[5] += 0.04055944055944056;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.20754716981132076;
        result[3] += 0.4528301886792453;
        result[4] += 0;
        result[5] += 0.33962264150943394;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7018348623853211;
        result[3] += 0.26146788990825687;
        result[4] += 0;
        result[5] += 0.03669724770642202;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        result[0] += 0.004761904761904763;
        result[1] += 0;
        result[2] += 0.8238095238095239;
        result[3] += 0.16666666666666669;
        result[4] += 0;
        result[5] += 0.004761904761904763;
      } else {
        result[0] += 0.015228426395939087;
        result[1] += 0;
        result[2] += 0.9576988155668359;
        result[3] += 0.02030456852791878;
        result[4] += 0;
        result[5] += 0.00676818950930626;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.011235955056179775;
        result[1] += 0.003745318352059925;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8801498127340824;
        result[5] += 0.10486891385767791;
      } else {
        result[0] += 0.013711151736745886;
        result[1] += 0.010054844606946984;
        result[2] += 0.008226691042047532;
        result[3] += 0.11974405850091407;
        result[4] += 0.04570383912248629;
        result[5] += 0.8025594149908593;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9652777777777778;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.034722222222222224;
        result[5] += 0;
      } else {
        result[0] += 0.6047409040793826;
        result[1] += 0.03307607497243661;
        result[2] += 0.023153252480705624;
        result[3] += 0.1207276736493936;
        result[4] += 0.12238147739801543;
        result[5] += 0.09592061742006615;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10638297872340426;
        result[3] += 0.574468085106383;
        result[4] += 0;
        result[5] += 0.3191489361702128;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5777777777777777;
        result[3] += 0.13333333333333333;
        result[4] += 0.08888888888888889;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04347826086956522;
        result[1] += 0;
        result[2] += 0.7774936061381075;
        result[3] += 0.14833759590792842;
        result[4] += 0;
        result[5] += 0.03069053708439898;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9593613933236574;
        result[3] += 0.040638606676342524;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9719626168224299;
        result[5] += 0.028037383177570093;
      } else {
        result[0] += 0.3227848101265823;
        result[1] += 0.012658227848101266;
        result[2] += 0.006329113924050633;
        result[3] += 0.08860759493670886;
        result[4] += 0.27848101265822783;
        result[5] += 0.2911392405063291;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.004214963119072708;
        result[2] += 0.007376185458377239;
        result[3] += 0.08324552160168598;
        result[4] += 0.05584826132771338;
        result[5] += 0.8493150684931506;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00796812749003984;
        result[3] += 0.5298804780876494;
        result[4] += 0.027888446215139442;
        result[5] += 0.4342629482071713;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6883870967741935;
        result[1] += 0.05548387096774193;
        result[2] += 0.031612903225806455;
        result[3] += 0.06322580645161291;
        result[4] += 0.11548387096774193;
        result[5] += 0.045806451612903226;
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
        result[0] += 0;
        result[1] += 0.04048582995951417;
        result[2] += 0.3117408906882591;
        result[3] += 0.3724696356275304;
        result[4] += 0.012145748987854251;
        result[5] += 0.2631578947368421;
      } else {
        result[0] += 0.0356111645813282;
        result[1] += 0.0019249278152069298;
        result[2] += 0.8662175168431184;
        result[3] += 0.07507218479307026;
        result[4] += 0.004812319538017324;
        result[5] += 0.016361886429258902;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009478672985781991;
        result[3] += 0;
        result[4] += 0.9383886255924171;
        result[5] += 0.052132701421800945;
      } else {
        result[0] += 0.03204601479046836;
        result[1] += 0.024650780608052588;
        result[2] += 0.030402629416598194;
        result[3] += 0.12736236647493837;
        result[4] += 0.04272801972062449;
        result[5] += 0.7428101889893179;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8410714285714286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15892857142857142;
        result[5] += 0;
      } else {
        result[0] += 0.7180327868852459;
        result[1] += 0.018360655737704918;
        result[2] += 0.04065573770491803;
        result[3] += 0.07344262295081967;
        result[4] += 0.0740983606557377;
        result[5] += 0.07540983606557378;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.055248618784530384;
        result[3] += 0.4143646408839779;
        result[4] += 0.11049723756906077;
        result[5] += 0.4198895027624309;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.75;
        result[3] += 0.027777777777777776;
        result[4] += 0;
        result[5] += 0.2222222222222222;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.39361702127659576;
        result[3] += 0.425531914893617;
        result[4] += 0.05319148936170213;
        result[5] += 0.1276595744680851;
      } else {
        result[0] += 0.010978043912175647;
        result[1] += 0.0029940119760479035;
        result[2] += 0.8952095808383231;
        result[3] += 0.07684630738522953;
        result[4] += 0.0019960079840319355;
        result[5] += 0.011976047904191614;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.01171875;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.96875;
        result[5] += 0.01953125;
      } else {
        result[0] += 0.05328185328185328;
        result[1] += 0.012355212355212355;
        result[2] += 0.0015444015444015444;
        result[3] += 0.14517374517374518;
        result[4] += 0.05405405405405406;
        result[5] += 0.7335907335907336;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.002074688796680498;
        result[1] += 0.9107883817427386;
        result[2] += 0;
        result[3] += 0.004149377593360996;
        result[4] += 0.08298755186721991;
        result[5] += 0;
      } else {
        result[0] += 0.7221847606203642;
        result[1] += 0.02629804450438301;
        result[2] += 0.04517869184086312;
        result[3] += 0.04113283884018881;
        result[4] += 0.10182063385030345;
        result[5] += 0.06338503034389752;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.007751937984496124;
        result[1] += 0.011627906976744186;
        result[2] += 0.15503875968992248;
        result[3] += 0.40310077519379844;
        result[4] += 0.050387596899224806;
        result[5] += 0.37209302325581395;
      } else {
        result[0] += 0.29375;
        result[1] += 0.00625;
        result[2] += 0.51875;
        result[3] += 0.15625;
        result[4] += 0.00625;
        result[5] += 0.01875;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.014336917562724014;
        result[1] += 0;
        result[2] += 0.7598566308243727;
        result[3] += 0.18996415770609318;
        result[4] += 0;
        result[5] += 0.035842293906810034;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.964110929853181;
        result[3] += 0.03588907014681892;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.25738396624472576;
        result[1] += 0.04430379746835443;
        result[2] += 0;
        result[3] += 0.012658227848101266;
        result[4] += 0.6012658227848101;
        result[5] += 0.08438818565400844;
      } else {
        result[0] += 0.023509655751469353;
        result[1] += 0.005877413937867338;
        result[2] += 0;
        result[3] += 0.12678421494542402;
        result[4] += 0.07976490344248531;
        result[5] += 0.764063811922754;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.006109979633401223;
        result[1] += 0.8778004073319756;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11608961303462323;
        result[5] += 0;
      } else {
        result[0] += 0.6368253968253968;
        result[1] += 0.010158730158730159;
        result[2] += 0.08444444444444445;
        result[3] += 0.13142857142857142;
        result[4] += 0.04634920634920635;
        result[5] += 0.09079365079365079;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0.01020408163265306;
        result[1] += 0.02040816326530612;
        result[2] += 0.21428571428571427;
        result[3] += 0.2653061224489796;
        result[4] += 0.02040816326530612;
        result[5] += 0.46938775510204084;
      } else {
        result[0] += 0.0165016501650165;
        result[1] += 0;
        result[2] += 0.7095709570957096;
        result[3] += 0.24752475247524752;
        result[4] += 0;
        result[5] += 0.026402640264026403;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.5714285714285715;
        result[2] += 0.14285714285714288;
        result[3] += 0.28571428571428575;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9606986899563319;
        result[3] += 0.033478893740902474;
        result[4] += 0;
        result[5] += 0.005822416302765648;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.05327868852459016;
        result[2] += 0;
        result[3] += 0.00819672131147541;
        result[4] += 0.9180327868852459;
        result[5] += 0.020491803278688523;
      } else {
        result[0] += 0.027552674230145867;
        result[1] += 0.0016207455429497568;
        result[2] += 0.014586709886547812;
        result[3] += 0.1426256077795786;
        result[4] += 0.07779578606158834;
        result[5] += 0.7358184764991896;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6431637032495402;
        result[1] += 0.0539546290619252;
        result[2] += 0.03740036787247088;
        result[3] += 0.061925199264255056;
        result[4] += 0.13733905579399142;
        result[5] += 0.06621704475781728;
      } else {
        result[0] += 0.007407407407407408;
        result[1] += 0.9925925925925926;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
        result[0] += 0.022857142857142857;
        result[1] += 0;
        result[2] += 0.07428571428571429;
        result[3] += 0.32;
        result[4] += 0.05142857142857143;
        result[5] += 0.5314285714285715;
      } else {
        result[0] += 0.07878787878787878;
        result[1] += 0.11515151515151516;
        result[2] += 0.5393939393939394;
        result[3] += 0.21818181818181817;
        result[4] += 0.006060606060606061;
        result[5] += 0.04242424242424243;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.532608695652174;
        result[3] += 0.41304347826086957;
        result[4] += 0;
        result[5] += 0.05434782608695652;
      } else {
        result[0] += 0.005681818181818182;
        result[1] += 0;
        result[2] += 0.9352272727272727;
        result[3] += 0.05227272727272727;
        result[4] += 0;
        result[5] += 0.006818181818181818;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.09125475285171103;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.870722433460076;
        result[5] += 0.03802281368821293;
      } else {
        result[0] += 0.0387263339070568;
        result[1] += 0.011187607573149742;
        result[2] += 0.0034423407917383822;
        result[3] += 0.14629948364888123;
        result[4] += 0.047332185886402756;
        result[5] += 0.7530120481927711;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.005385996409335727;
        result[1] += 0.7827648114901257;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2118491921005386;
        result[5] += 0;
      } else {
        result[0] += 0.707843137254902;
        result[1] += 0.01437908496732026;
        result[2] += 0.041176470588235294;
        result[3] += 0.06797385620915032;
        result[4] += 0.0803921568627451;
        result[5] += 0.08823529411764706;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        result[0] += 0.00819672131147541;
        result[1] += 0.00819672131147541;
        result[2] += 0.1598360655737705;
        result[3] += 0.46311475409836067;
        result[4] += 0.04918032786885246;
        result[5] += 0.3114754098360656;
      } else {
        result[0] += 0.1676300578034682;
        result[1] += 0.07514450867052024;
        result[2] += 0.5433526011560693;
        result[3] += 0.07514450867052024;
        result[4] += 0.005780346820809248;
        result[5] += 0.1329479768786127;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.05063291139240506;
        result[1] += 0;
        result[2] += 0.5316455696202531;
        result[3] += 0.35443037974683544;
        result[4] += 0;
        result[5] += 0.06329113924050633;
      } else {
        result[0] += 0.004889975550122249;
        result[1] += 0;
        result[2] += 0.9278728606356969;
        result[3] += 0.06356968215158924;
        result[4] += 0;
        result[5] += 0.003667481662591687;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.22330097087378642;
        result[1] += 0.021844660194174758;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6553398058252428;
        result[5] += 0.09951456310679611;
      } else {
        result[0] += 0.0018467220683287165;
        result[1] += 0.00554016620498615;
        result[2] += 0.002770083102493075;
        result[3] += 0.0886426592797784;
        result[4] += 0.07756232686980609;
        result[5] += 0.8236380424746076;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9744680851063829;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02553191489361702;
        result[5] += 0;
      } else {
        result[0] += 0.5720645520311631;
        result[1] += 0.028937117417918757;
        result[2] += 0.08235948803561492;
        result[3] += 0.14357262103505847;
        result[4] += 0.07790762381747358;
        result[5] += 0.0951585976627713;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.007194244604316547;
        result[2] += 0.2733812949640288;
        result[3] += 0.48201438848920863;
        result[4] += 0.02158273381294964;
        result[5] += 0.2158273381294964;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9565217391304348;
        result[3] += 0;
        result[4] += 0.043478260869565216;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.05714285714285714;
        result[2] += 0.2857142857142857;
        result[3] += 0.14285714285714285;
        result[4] += 0.05714285714285714;
        result[5] += 0.45714285714285713;
      } else {
        result[0] += 0.006920415224913495;
        result[1] += 0.00461361014994233;
        result[2] += 0.9123414071510957;
        result[3] += 0.06689734717416378;
        result[4] += 0.0011534025374855825;
        result[5] += 0.008073817762399077;
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
