
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          result[0] += 0.022813688212927757;
          result[1] += 0.06463878326996197;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8669201520912547;
          result[5] += 0.045627376425855515;
        } else {
          result[0] += 0.5523255813953488;
          result[1] += 0.01744186046511628;
          result[2] += 0.005813953488372093;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.1744186046511628;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.034974093264248704;
          result[4] += 0.034974093264248704;
          result[5] += 0.9300518134715026;
        } else {
          result[0] += 0.03133903133903134;
          result[1] += 0.005698005698005698;
          result[2] += 0.037037037037037035;
          result[3] += 0.18233618233618235;
          result[4] += 0.18233618233618235;
          result[5] += 0.5612535612535613;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.002257336343115124;
          result[1] += 0.9683972911963883;
          result[2] += 0;
          result[3] += 0.004514672686230248;
          result[4] += 0.024830699774266364;
          result[5] += 0;
        } else {
          result[0] += 0.3125;
          result[1] += 0.125;
          result[2] += 0.125;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7934426229508197;
          result[1] += 0.04180327868852459;
          result[2] += 0.003278688524590164;
          result[3] += 0.03278688524590164;
          result[4] += 0.08934426229508197;
          result[5] += 0.03934426229508197;
        } else {
          result[0] += 0.16523605150214593;
          result[1] += 0.034334763948497854;
          result[2] += 0.13733905579399142;
          result[3] += 0.4291845493562232;
          result[4] += 0.04721030042918455;
          result[5] += 0.18669527896995708;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.8666666666666667;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.028037383177570093;
          result[2] += 0.17757009345794392;
          result[3] += 0.5514018691588785;
          result[4] += 0.009345794392523364;
          result[5] += 0.2336448598130841;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0.03488372093023256;
          result[2] += 0.6511627906976745;
          result[3] += 0.20930232558139536;
          result[4] += 0;
          result[5] += 0.08139534883720931;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7908163265306123;
          result[3] += 0.1836734693877551;
          result[4] += 0;
          result[5] += 0.025510204081632654;
        } else {
          result[0] += 0.019667170953101366;
          result[1] += 0;
          result[2] += 0.9379727685325265;
          result[3] += 0.03328290468986385;
          result[4] += 0.0015128593040847204;
          result[5] += 0.007564296520423602;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.010380622837370242;
          result[2] += 0;
          result[3] += 0.03806228373702422;
          result[4] += 0.8858131487889274;
          result[5] += 0.0657439446366782;
        } else {
          result[0] += 0;
          result[1] += 0.8387096774193549;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0.0967741935483871;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.07114624505928854;
          result[1] += 0.0009881422924901185;
          result[2] += 0;
          result[3] += 0.06818181818181818;
          result[4] += 0.07608695652173914;
          result[5] += 0.7835968379446641;
        } else {
          result[0] += 0.04777070063694268;
          result[1] += 0;
          result[2] += 0.025477707006369428;
          result[3] += 0.6337579617834395;
          result[4] += 0.009554140127388535;
          result[5] += 0.28343949044585987;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.4666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.002512562814070352;
          result[1] += 0.9974874371859297;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8559027777777778;
          result[1] += 0.0234375;
          result[2] += 0.003472222222222222;
          result[3] += 0.028645833333333332;
          result[4] += 0.07552083333333333;
          result[5] += 0.013020833333333334;
        } else {
          result[0] += 0.14375;
          result[1] += 0.035416666666666666;
          result[2] += 0.25625;
          result[3] += 0.19166666666666668;
          result[4] += 0.06458333333333334;
          result[5] += 0.30833333333333335;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.03125;
          result[4] += 0.0625;
          result[5] += 0.71875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)90.5) ) ) {
          result[0] += 0.10309278350515463;
          result[1] += 0.08247422680412371;
          result[2] += 0.20618556701030927;
          result[3] += 0.4742268041237113;
          result[4] += 0.061855670103092786;
          result[5] += 0.07216494845360824;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.9230769230769231;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0.016;
          result[1] += 0;
          result[2] += 0.728;
          result[3] += 0.224;
          result[4] += 0;
          result[5] += 0.032;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0;
          result[2] += 0.9019607843137255;
          result[3] += 0.0784313725490196;
          result[4] += 0;
          result[5] += 0.00980392156862745;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.985663082437276;
          result[3] += 0.014336917562724014;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.004291845493562232;
          result[2] += 0.008583690987124463;
          result[3] += 0;
          result[4] += 0.9785407725321889;
          result[5] += 0.004291845493562232;
        } else {
          result[0] += 0.2711864406779661;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2033898305084746;
          result[5] += 0.5254237288135594;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025925925925925925;
          result[4] += 0.028395061728395062;
          result[5] += 0.945679012345679;
        } else {
          result[0] += 0;
          result[1] += 0.03076923076923077;
          result[2] += 0.007692307692307693;
          result[3] += 0.4461538461538462;
          result[4] += 0.046153846153846156;
          result[5] += 0.46923076923076923;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.030303030303030304;
          result[2] += 0;
          result[3] += 0.06060606060606061;
          result[4] += 0.9090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.0022935779816513763;
          result[1] += 0.9564220183486238;
          result[2] += 0;
          result[3] += 0.013761467889908258;
          result[4] += 0.027522935779816515;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0.2874354561101549;
          result[1] += 0.022375215146299483;
          result[2] += 0.022375215146299483;
          result[3] += 0.24784853700516352;
          result[4] += 0.13080895008605853;
          result[5] += 0.2891566265060241;
        } else {
          result[0] += 0.7407126611068992;
          result[1] += 0.0356330553449583;
          result[2] += 0.06747536012130402;
          result[3] += 0.04473085670962851;
          result[4] += 0.09097801364670205;
          result[5] += 0.02047005307050796;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.05;
          result[4] += 0.3;
          result[5] += 0.45;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09722222222222222;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.1527777777777778;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.03125;
          result[5] += 0.59375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6475409836065574;
          result[3] += 0.2786885245901639;
          result[4] += 0;
          result[5] += 0.07377049180327869;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.6;
        } else {
          result[0] += 0.008454106280193236;
          result[1] += 0;
          result[2] += 0.9359903381642513;
          result[3] += 0.05314009661835749;
          result[4] += 0;
          result[5] += 0.0024154589371980675;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9253112033195021;
          result[5] += 0.07468879668049792;
        } else {
          result[0] += 0;
          result[1] += 0.4444444444444445;
          result[2] += 0;
          result[3] += 0.33333333333333337;
          result[4] += 0;
          result[5] += 0.22222222222222224;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9117647058823529;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.029411764705882353;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07407407407407407;
          result[3] += 0.1111111111111111;
          result[4] += 0.2962962962962963;
          result[5] += 0.5185185185185185;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0282574568288854;
          result[4] += 0.015698587127158554;
          result[5] += 0.9560439560439561;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.05466237942122187;
          result[2] += 0.003215434083601286;
          result[3] += 0.1864951768488746;
          result[4] += 0.14790996784565916;
          result[5] += 0.6077170418006431;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0.6833333333333333;
          result[4] += 0.016666666666666666;
          result[5] += 0.24444444444444444;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0.03125;
          result[1] += 0.1640625;
          result[2] += 0;
          result[3] += 0.015625;
          result[4] += 0.78125;
          result[5] += 0.0078125;
        } else {
          result[0] += 0;
          result[1] += 0.9445727482678984;
          result[2] += 0.023094688221709007;
          result[3] += 0;
          result[4] += 0.03002309468822171;
          result[5] += 0.0023094688221709007;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.875;
          result[1] += 0.02027027027027027;
          result[2] += 0;
          result[3] += 0.008445945945945946;
          result[4] += 0.0785472972972973;
          result[5] += 0.017736486486486486;
        } else {
          result[0] += 0.17971014492753623;
          result[1] += 0.008695652173913044;
          result[2] += 0.12753623188405797;
          result[3] += 0.23478260869565218;
          result[4] += 0.06666666666666667;
          result[5] += 0.3826086956521739;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.02158273381294964;
          result[1] += 0.050359712230215826;
          result[2] += 0.4316546762589928;
          result[3] += 0.3381294964028777;
          result[4] += 0.017985611510791366;
          result[5] += 0.14028776978417265;
        } else {
          result[0] += 0.7121212121212122;
          result[1] += 0.13636363636363635;
          result[2] += 0.09090909090909091;
          result[3] += 0.045454545454545456;
          result[4] += 0.015151515151515152;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.029197080291970802;
          result[1] += 0;
          result[2] += 0.6496350364963503;
          result[3] += 0.2773722627737226;
          result[4] += 0;
          result[5] += 0.043795620437956206;
        } else {
          result[0] += 0.005134788189987163;
          result[1] += 0.0038510911424903724;
          result[2] += 0.9409499358151476;
          result[3] += 0.043645699614890884;
          result[4] += 0;
          result[5] += 0.006418485237483954;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          result[0] += 0.004739336492890996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.933649289099526;
          result[5] += 0.061611374407582936;
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
          result[0] += 0.02774813233724653;
          result[1] += 0.0021344717182497333;
          result[2] += 0;
          result[3] += 0.04695837780149413;
          result[4] += 0.05656350053361793;
          result[5] += 0.8665955176093917;
        } else {
          result[0] += 0.06613756613756615;
          result[1] += 0.04761904761904762;
          result[2] += 0.052910052910052914;
          result[3] += 0.4444444444444445;
          result[4] += 0.026455026455026457;
          result[5] += 0.3624338624338625;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)52) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.004842615012106538;
          result[1] += 0.9830508474576272;
          result[2] += 0.007263922518159807;
          result[3] += 0.002421307506053269;
          result[4] += 0.002421307506053269;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.125;
          result[1] += 0.17410714285714285;
          result[2] += 0.008928571428571428;
          result[3] += 0.026785714285714284;
          result[4] += 0.6071428571428571;
          result[5] += 0.05803571428571429;
        } else {
          result[0] += 0.6892834495878251;
          result[1] += 0.0038046924540266333;
          result[2] += 0.07482561826252379;
          result[3] += 0.09067850348763476;
          result[4] += 0.058972733037412815;
          result[5] += 0.08243500317057706;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.07317073170731707;
          result[2] += 0;
          result[3] += 0.04878048780487805;
          result[4] += 0.024390243902439025;
          result[5] += 0.8536585365853658;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
          result[0] += 0.015625;
          result[1] += 0.046875;
          result[2] += 0.25;
          result[3] += 0.40625;
          result[4] += 0.125;
          result[5] += 0.15625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.16071428571428573;
          result[4] += 0;
          result[5] += 0.08928571428571429;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6444444444444445;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9401709401709402;
          result[3] += 0.017094017094017096;
          result[4] += 0;
          result[5] += 0.042735042735042736;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0.4166666666666667;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0053475935828877;
          result[1] += 0;
          result[2] += 0.9590017825311943;
          result[3] += 0.035650623885918005;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0.026595744680851068;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9627659574468086;
          result[5] += 0.010638297872340427;
        } else {
          result[0] += 0.47435897435897434;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2948717948717949;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.007470651013874066;
          result[2] += 0.0010672358591248667;
          result[3] += 0.054429028815368194;
          result[4] += 0.06296691568836713;
          result[5] += 0.8740661686232657;
        } else {
          result[0] += 0;
          result[1] += 0.007326007326007326;
          result[2] += 0.003663003663003663;
          result[3] += 0.45054945054945056;
          result[4] += 0.09157509157509157;
          result[5] += 0.4468864468864469;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9827956989247312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017204301075268817;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4032258064516129;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5967741935483871;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8627946127946129;
          result[1] += 0.01767676767676768;
          result[2] += 0;
          result[3] += 0.010942760942760945;
          result[4] += 0.09680134680134682;
          result[5] += 0.011784511784511786;
        } else {
          result[0] += 0.22591362126245848;
          result[1] += 0.013289036544850499;
          result[2] += 0.25249169435215946;
          result[3] += 0.23255813953488372;
          result[4] += 0.04983388704318937;
          result[5] += 0.22591362126245848;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.20634920634920634;
          result[5] += 0.746031746031746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10434782608695653;
          result[3] += 0.5652173913043479;
          result[4] += 0;
          result[5] += 0.3304347826086957;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0;
          result[2] += 0.07894736842105263;
          result[3] += 0.3157894736842105;
          result[4] += 0.2894736842105263;
          result[5] += 0.2894736842105263;
        } else {
          result[0] += 0.015625;
          result[1] += 0.0234375;
          result[2] += 0.71875;
          result[3] += 0.1875;
          result[4] += 0.015625;
          result[5] += 0.0390625;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.6720430107526881;
          result[3] += 0.2956989247311828;
          result[4] += 0;
          result[5] += 0.016129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9425287356321839;
          result[3] += 0.05747126436781609;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0046439628482972135;
          result[1] += 0;
          result[2] += 0.9473684210526315;
          result[3] += 0.04489164086687306;
          result[4] += 0;
          result[5] += 0.0030959752321981426;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0.06666666666666667;
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0.006734006734006734;
          result[1] += 0.006734006734006734;
          result[2] += 0.016835016835016835;
          result[3] += 0.026936026936026935;
          result[4] += 0.8821548821548821;
          result[5] += 0.06060606060606061;
        } else {
          result[0] += 0.10934636530238241;
          result[1] += 0.00855222968845449;
          result[2] += 0.014660965180207697;
          result[3] += 0.1594379963347587;
          result[4] += 0.07269395235186317;
          result[5] += 0.6353084911423336;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          result[0] += 0.4791666666666667;
          result[1] += 0.1375;
          result[2] += 0.07361111111111111;
          result[3] += 0.07361111111111111;
          result[4] += 0.18194444444444444;
          result[5] += 0.05416666666666667;
        } else {
          result[0] += 0.9316493313521546;
          result[1] += 0.019316493313521546;
          result[2] += 0.019316493313521546;
          result[3] += 0;
          result[4] += 0.029717682020802376;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0784313725490196;
          result[3] += 0.5882352941176471;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5294117647058824;
          result[3] += 0.058823529411764705;
          result[4] += 0.11764705882352941;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6982758620689656;
          result[3] += 0.26724137931034486;
          result[4] += 0;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0.060240963855421686;
          result[1] += 0;
          result[2] += 0.927710843373494;
          result[3] += 0.012048192771084338;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.8602941176470589;
          result[3] += 0.09558823529411764;
          result[4] += 0;
          result[5] += 0.014705882352941176;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9812734082397003;
          result[3] += 0.016853932584269662;
          result[4] += 0;
          result[5] += 0.0018726591760299626;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.97165991902834;
          result[5] += 0.02834008097165992;
        } else {
          result[0] += 0.4935064935064935;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19480519480519481;
          result[5] += 0.3116883116883117;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.007494646680942184;
          result[2] += 0;
          result[3] += 0.06745182012847965;
          result[4] += 0.04925053533190578;
          result[5] += 0.8758029978586723;
        } else {
          result[0] += 0;
          result[1] += 0.0045871559633027525;
          result[2] += 0.01834862385321101;
          result[3] += 0.5963302752293578;
          result[4] += 0.0045871559633027525;
          result[5] += 0.3761467889908257;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.2530120481927711;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7228915662650603;
          result[5] += 0.02409638554216868;
        } else {
          result[0] += 0.0022522522522522522;
          result[1] += 0.9977477477477478;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8443017656500803;
          result[1] += 0.02247191011235955;
          result[2] += 0.0040128410914927765;
          result[3] += 0.026484751203852328;
          result[4] += 0.08587479935794542;
          result[5] += 0.016853932584269662;
        } else {
          result[0] += 0.17964071856287425;
          result[1] += 0.011976047904191617;
          result[2] += 0.17664670658682635;
          result[3] += 0.25748502994011974;
          result[4] += 0.1407185628742515;
          result[5] += 0.23353293413173654;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010101010101010102;
          result[3] += 0.13131313131313133;
          result[4] += 0.04040404040404041;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.05454545454545454;
          result[2] += 0.03636363636363636;
          result[3] += 0.5272727272727272;
          result[4] += 0;
          result[5] += 0.38181818181818183;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5647058823529412;
          result[3] += 0.2823529411764706;
          result[4] += 0;
          result[5] += 0.15294117647058825;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6804123711340206;
          result[3] += 0.25773195876288657;
          result[4] += 0;
          result[5] += 0.061855670103092786;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.05501618122977346;
          result[1] += 0;
          result[2] += 0.8090614886731392;
          result[3] += 0.11326860841423948;
          result[4] += 0;
          result[5] += 0.022653721682847898;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0;
          result[2] += 0.9655797101449275;
          result[3] += 0.02355072463768116;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.008583690987124463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9613733905579399;
          result[5] += 0.030042918454935622;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013175230566534915;
          result[3] += 0.03293807641633729;
          result[4] += 0.03689064558629776;
          result[5] += 0.9288537549407114;
        } else {
          result[0] += 0.1001926782273603;
          result[1] += 0.01348747591522158;
          result[2] += 0.0038535645472061657;
          result[3] += 0.325626204238921;
          result[4] += 0.07707129094412331;
          result[5] += 0.4797687861271676;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.15625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.84375;
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
          result[0] += 0.8318794607454402;
          result[1] += 0.0317208564631245;
          result[2] += 0.0015860428231562252;
          result[3] += 0.017446471054718478;
          result[4] += 0.10547184773988898;
          result[5] += 0.011895321173671689;
        } else {
          result[0] += 0.2072892938496583;
          result[1] += 0.029612756264236904;
          result[2] += 0.17312072892938496;
          result[3] += 0.28018223234624146;
          result[4] += 0.05011389521640091;
          result[5] += 0.25968109339407747;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05357142857142857;
          result[3] += 0.6071428571428571;
          result[4] += 0.017857142857142856;
          result[5] += 0.32142857142857145;
        } else {
          result[0] += 0.048387096774193554;
          result[1] += 0;
          result[2] += 0.5000000000000001;
          result[3] += 0.30645161290322587;
          result[4] += 0;
          result[5] += 0.14516129032258068;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.96;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.632;
          result[3] += 0.344;
          result[4] += 0;
          result[5] += 0.024;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9692307692307692;
          result[3] += 0.03076923076923077;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0.047244094488188976;
          result[1] += 0;
          result[2] += 0.8031496062992126;
          result[3] += 0.14173228346456693;
          result[4] += 0;
          result[5] += 0.007874015748031496;
        } else {
          result[0] += 0.0017301038062283738;
          result[1] += 0;
          result[2] += 0.9550173010380623;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0.01384083044982699;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        } else {
          result[0] += 0.0031746031746031746;
          result[1] += 0.012698412698412698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9142857142857143;
          result[5] += 0.06984126984126984;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0014903129657228018;
          result[2] += 0;
          result[3] += 0.026825633383010434;
          result[4] += 0.020864381520119227;
          result[5] += 0.9508196721311475;
        } else {
          result[0] += 0.136986301369863;
          result[1] += 0.02054794520547945;
          result[2] += 0;
          result[3] += 0.3287671232876712;
          result[4] += 0.07363013698630137;
          result[5] += 0.4400684931506849;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7821939586645469;
          result[1] += 0.07074721780604133;
          result[2] += 0.003179650238473768;
          result[3] += 0.015103338632750398;
          result[4] += 0.10095389507154214;
          result[5] += 0.02782193958664547;
        } else {
          result[0] += 0.20212765957446807;
          result[1] += 0.018617021276595744;
          result[2] += 0.1702127659574468;
          result[3] += 0.26861702127659576;
          result[4] += 0.06382978723404255;
          result[5] += 0.2765957446808511;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0.9978118161925602;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002188183807439825;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.25;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.022222222222222223;
          result[4] += 0.044444444444444446;
          result[5] += 0.9111111111111111;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07407407407407407;
          result[3] += 0.7407407407407407;
          result[4] += 0;
          result[5] += 0.18518518518518517;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7058823529411765;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.23529411764705882;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0.20689655172413793;
          result[3] += 0.1724137931034483;
          result[4] += 0.13793103448275862;
          result[5] += 0.4482758620689655;
        } else {
          result[0] += 0.0036231884057971015;
          result[1] += 0.0036231884057971015;
          result[2] += 0.7246376811594203;
          result[3] += 0.2318840579710145;
          result[4] += 0;
          result[5] += 0.036231884057971016;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          result[0] += 0.008797653958944282;
          result[1] += 0;
          result[2] += 0.9472140762463344;
          result[3] += 0.02785923753665689;
          result[4] += 0.004398826979472141;
          result[5] += 0.011730205278592375;
        } else {
          result[0] += 0.3125;
          result[1] += 0.03125;
          result[2] += 0.65625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
