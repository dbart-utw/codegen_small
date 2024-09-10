
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.07196969696969698;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8333333333333334;
        result[5] += 0.0946969696969697;
      } else {
        result[0] += 0.03949579831932773;
        result[1] += 0;
        result[2] += 0.010084033613445379;
        result[3] += 0.1403361344537815;
        result[4] += 0.06134453781512605;
        result[5] += 0.7487394957983193;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6868622448979592;
        result[1] += 0.04974489795918367;
        result[2] += 0.02295918367346939;
        result[3] += 0.05102040816326531;
        result[4] += 0.10586734693877552;
        result[5] += 0.08354591836734694;
      } else {
        result[0] += 0.010810810810810811;
        result[1] += 0.9891891891891892;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1414141414141414;
        result[3] += 0.0707070707070707;
        result[4] += 0.16161616161616163;
        result[5] += 0.6262626262626263;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09493670886075951;
        result[3] += 0.6835443037974684;
        result[4] += 0.012658227848101267;
        result[5] += 0.20886075949367092;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        result[0] += 0.5000000000000001;
        result[1] += 0.0735294117647059;
        result[2] += 0.1911764705882353;
        result[3] += 0.13235294117647062;
        result[4] += 0;
        result[5] += 0.10294117647058824;
      } else {
        result[0] += 0.018034265103697024;
        result[1] += 0.005410279531109108;
        result[2] += 0.8431018935978359;
        result[3] += 0.1073038773669973;
        result[4] += 0.004508566275924256;
        result[5] += 0.02164111812443643;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.028688524590163935;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9549180327868853;
        result[5] += 0.01639344262295082;
      } else {
        result[0] += 0.038901601830663615;
        result[1] += 0.0030511060259344014;
        result[2] += 0.004576659038901602;
        result[3] += 0.15865751334858885;
        result[4] += 0.04271548436308162;
        result[5] += 0.7520976353928299;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.95625;
        result[2] += 0.0020833333333333333;
        result[3] += 0;
        result[4] += 0.03958333333333333;
        result[5] += 0.0020833333333333333;
      } else {
        result[0] += 0.6346265199768385;
        result[1] += 0.03590040532715692;
        result[2] += 0.06658946149392009;
        result[3] += 0.08511870295309786;
        result[4] += 0.10538506079907353;
        result[5] += 0.07237984944991314;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02702702702702703;
        result[1] += 0.07432432432432433;
        result[2] += 0.2702702702702703;
        result[3] += 0.2905405405405405;
        result[4] += 0.033783783783783786;
        result[5] += 0.30405405405405406;
      } else {
        result[0] += 0.0392156862745098;
        result[1] += 0;
        result[2] += 0.7352941176470589;
        result[3] += 0.19607843137254902;
        result[4] += 0;
        result[5] += 0.029411764705882353;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        result[0] += 0.019867549668874173;
        result[1] += 0;
        result[2] += 0.847682119205298;
        result[3] += 0.12582781456953643;
        result[4] += 0;
        result[5] += 0.006622516556291391;
      } else {
        result[0] += 0.0017825311942959;
        result[1] += 0;
        result[2] += 0.964349376114082;
        result[3] += 0.030303030303030304;
        result[4] += 0;
        result[5] += 0.0035650623885918;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.07037037037037037;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9148148148148149;
        result[5] += 0.014814814814814815;
      } else {
        result[0] += 0.0350076103500761;
        result[1] += 0.0060882800608828;
        result[2] += 0.0182648401826484;
        result[3] += 0.15220700152207;
        result[4] += 0.06621004566210045;
        result[5] += 0.7222222222222222;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006479481641468681;
        result[1] += 0.9330453563714901;
        result[2] += 0.008639308855291575;
        result[3] += 0.008639308855291575;
        result[4] += 0.043196544276457874;
        result[5] += 0;
      } else {
        result[0] += 0.6390160183066361;
        result[1] += 0.036613272311212815;
        result[2] += 0.05606407322654462;
        result[3] += 0.06807780320366133;
        result[4] += 0.11556064073226545;
        result[5] += 0.08466819221967964;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14960629921259844;
        result[3] += 0.31496062992125984;
        result[4] += 0.09448818897637795;
        result[5] += 0.4409448818897638;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9285714285714286;
        result[3] += 0.07142857142857142;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
        result[0] += 0.3902439024390244;
        result[1] += 0.12195121951219512;
        result[2] += 0.36585365853658536;
        result[3] += 0.04878048780487805;
        result[4] += 0;
        result[5] += 0.07317073170731707;
      } else {
        result[0] += 0.005988023952095809;
        result[1] += 0.00718562874251497;
        result[2] += 0.8826347305389222;
        result[3] += 0.09580838323353294;
        result[4] += 0.0011976047904191617;
        result[5] += 0.00718562874251497;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004524886877828055;
        result[1] += 0.049773755656108594;
        result[2] += 0;
        result[3] += 0.004524886877828055;
        result[4] += 0.9140271493212669;
        result[5] += 0.027149321266968326;
      } else {
        result[0] += 0.0311284046692607;
        result[1] += 0.010894941634241245;
        result[2] += 0.0023346303501945525;
        result[3] += 0.13852140077821012;
        result[4] += 0.05680933852140078;
        result[5] += 0.7603112840466926;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.860236220472441;
        result[2] += 0.001968503937007874;
        result[3] += 0.007874015748031496;
        result[4] += 0.12992125984251968;
        result[5] += 0;
      } else {
        result[0] += 0.6206303724928366;
        result[1] += 0.0320916905444126;
        result[2] += 0.064756446991404;
        result[3] += 0.10372492836676216;
        result[4] += 0.09111747851002865;
        result[5] += 0.08767908309455585;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.15517241379310345;
        result[2] += 0.08620689655172414;
        result[3] += 0.20689655172413793;
        result[4] += 0.05172413793103448;
        result[5] += 0.5;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5125000000000001;
        result[3] += 0.38750000000000007;
        result[4] += 0;
        result[5] += 0.10000000000000002;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.029801324503311258;
        result[1] += 0;
        result[2] += 0.7748344370860927;
        result[3] += 0.17549668874172186;
        result[4] += 0;
        result[5] += 0.019867549668874173;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9569377990430622;
        result[3] += 0.03508771929824561;
        result[4] += 0;
        result[5] += 0.007974481658692184;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10312500000000001;
        result[1] += 0.053125000000000006;
        result[2] += 0.0031250000000000006;
        result[3] += 0.009375000000000001;
        result[4] += 0.7250000000000001;
        result[5] += 0.10625000000000001;
      } else {
        result[0] += 0.0008665511265164644;
        result[1] += 0.009532062391681109;
        result[2] += 0.010398613518197574;
        result[3] += 0.16464471403812825;
        result[4] += 0.047660311958405546;
        result[5] += 0.766897746967071;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        result[0] += 0.5643513789581205;
        result[1] += 0.042390194075587334;
        result[2] += 0.0602655771195097;
        result[3] += 0.1041879468845761;
        result[4] += 0.12972420837589377;
        result[5] += 0.09908069458631256;
      } else {
        result[0] += 0.026905829596412557;
        result[1] += 0.9708520179372198;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002242152466367713;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        result[0] += 0.009615384615384616;
        result[1] += 0;
        result[2] += 0.4230769230769231;
        result[3] += 0.46153846153846156;
        result[4] += 0;
        result[5] += 0.10576923076923077;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0;
        result[2] += 0.9;
        result[3] += 0.03333333333333333;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.15384615384615385;
        result[4] += 0;
        result[5] += 0.34615384615384615;
      } else {
        result[0] += 0.007614213197969544;
        result[1] += 0;
        result[2] += 0.9454314720812184;
        result[3] += 0.039340101522842646;
        result[4] += 0;
        result[5] += 0.007614213197969544;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.14909090909090908;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.007272727272727273;
        result[4] += 0.7563636363636363;
        result[5] += 0.08727272727272728;
      } else {
        result[0] += 0.0032733224222585926;
        result[1] += 0.02536824877250409;
        result[2] += 0.011456628477905073;
        result[3] += 0.16612111292962356;
        result[4] += 0.04582651391162029;
        result[5] += 0.7479541734860884;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9869565217391304;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013043478260869565;
        result[5] += 0;
      } else {
        result[0] += 0.5889070146818923;
        result[1] += 0.027188689505165852;
        result[2] += 0.0799347471451876;
        result[3] += 0.10440456769983687;
        result[4] += 0.11745513866231648;
        result[5] += 0.08210984230560087;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0.1;
        result[2] += 0.05;
        result[3] += 0.05;
        result[4] += 0.15;
        result[5] += 0.65;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3898305084745763;
        result[3] += 0.4915254237288136;
        result[4] += 0;
        result[5] += 0.11864406779661017;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.02909090909090909;
        result[1] += 0.007272727272727273;
        result[2] += 0.7745454545454545;
        result[3] += 0.13454545454545455;
        result[4] += 0.01818181818181818;
        result[5] += 0.03636363636363636;
      } else {
        result[0] += 0.006097560975609756;
        result[1] += 0.001524390243902439;
        result[2] += 0.9557926829268293;
        result[3] += 0.03048780487804878;
        result[4] += 0;
        result[5] += 0.006097560975609756;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        result[0] += 0.109375;
        result[1] += 0.015625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.80078125;
        result[5] += 0.07421875;
      } else {
        result[0] += 0.0009881422924901185;
        result[1] += 0.030632411067193676;
        result[2] += 0.008893280632411068;
        result[3] += 0.11462450592885376;
        result[4] += 0.05138339920948617;
        result[5] += 0.7934782608695652;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9290322580645162;
        result[2] += 0;
        result[3] += 0.008602150537634409;
        result[4] += 0.05591397849462366;
        result[5] += 0.0064516129032258064;
      } else {
        result[0] += 0.623463687150838;
        result[1] += 0.024022346368715083;
        result[2] += 0.03407821229050279;
        result[3] += 0.07318435754189945;
        result[4] += 0.13016759776536313;
        result[5] += 0.11508379888268157;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.013986013986013986;
        result[2] += 0.07692307692307693;
        result[3] += 0.5314685314685315;
        result[4] += 0.013986013986013986;
        result[5] += 0.36363636363636365;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2653061224489796;
        result[3] += 0.04081632653061224;
        result[4] += 0.02040816326530612;
        result[5] += 0.673469387755102;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        result[0] += 0.25242718446601947;
        result[1] += 0.03883495145631068;
        result[2] += 0.4174757281553399;
        result[3] += 0.11650485436893207;
        result[4] += 0.029126213592233018;
        result[5] += 0.14563106796116507;
      } else {
        result[0] += 0.007936507936507938;
        result[1] += 0.0019841269841269845;
        result[2] += 0.884920634920635;
        result[3] += 0.08829365079365081;
        result[4] += 0.0019841269841269845;
        result[5] += 0.014880952380952382;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.002044989775051125;
        result[1] += 0.9938650306748467;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00408997955010225;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
        result[0] += 0.09107806691449814;
        result[1] += 0.004337050805452293;
        result[2] += 0.0012391573729863693;
        result[3] += 0.08798017348203221;
        result[4] += 0.20508054522924413;
        result[5] += 0.6102850061957868;
      } else {
        result[0] += 0.5896637608966376;
        result[1] += 0.037359900373599;
        result[2] += 0.07347447073474471;
        result[3] += 0.1307596513075965;
        result[4] += 0.08841843088418432;
        result[5] += 0.08032378580323786;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.009009009009009009;
        result[1] += 0.05405405405405406;
        result[2] += 0.15315315315315314;
        result[3] += 0.3063063063063063;
        result[4] += 0.05405405405405406;
        result[5] += 0.42342342342342343;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6969696969696969;
        result[3] += 0.2525252525252525;
        result[4] += 0;
        result[5] += 0.05050505050505049;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        result[0] += 0.09285714285714286;
        result[1] += 0;
        result[2] += 0.6714285714285714;
        result[3] += 0.20714285714285716;
        result[4] += 0;
        result[5] += 0.02857142857142857;
      } else {
        result[0] += 0.0013568521031207597;
        result[1] += 0;
        result[2] += 0.9470827679782904;
        result[3] += 0.04477611940298507;
        result[4] += 0;
        result[5] += 0.0067842605156037995;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007434944237918215;
        result[1] += 0.08178438661710037;
        result[2] += 0;
        result[3] += 0.011152416356877323;
        result[4] += 0.828996282527881;
        result[5] += 0.07063197026022305;
      } else {
        result[0] += 0.02763819095477387;
        result[1] += 0.0016750418760469012;
        result[2] += 0.010887772194304857;
        result[3] += 0.13819095477386933;
        result[4] += 0.0678391959798995;
        result[5] += 0.7537688442211056;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.001858736059479554;
        result[1] += 0.825278810408922;
        result[2] += 0.005576208178438662;
        result[3] += 0.007434944237918216;
        result[4] += 0.13754646840148702;
        result[5] += 0.02230483271375465;
      } else {
        result[0] += 0.6961633663366337;
        result[1] += 0.03032178217821782;
        result[2] += 0.043316831683168314;
        result[3] += 0.06002475247524752;
        result[4] += 0.06992574257425743;
        result[5] += 0.10024752475247525;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0784313725490196;
        result[3] += 0;
        result[4] += 0.13725490196078433;
        result[5] += 0.7843137254901961;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17037037037037037;
        result[3] += 0.5555555555555556;
        result[4] += 0;
        result[5] += 0.2740740740740741;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.1258741258741259;
        result[1] += 0.03496503496503497;
        result[2] += 0.4125874125874126;
        result[3] += 0.1888111888111888;
        result[4] += 0.055944055944055944;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0.002272727272727273;
        result[1] += 0;
        result[2] += 0.890909090909091;
        result[3] += 0.0965909090909091;
        result[4] += 0.0011363636363636365;
        result[5] += 0.009090909090909092;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.012448132780082988;
        result[1] += 0.04564315352697096;
        result[2] += 0;
        result[3] += 0.016597510373443987;
        result[4] += 0.8589211618257262;
        result[5] += 0.06639004149377595;
      } else {
        result[0] += 0.036720751494449186;
        result[1] += 0.0025619128949615714;
        result[2] += 0.011955593509820665;
        result[3] += 0.14602903501280956;
        result[4] += 0.06148590947907771;
        result[5] += 0.7412467976088813;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00338409475465313;
        result[1] += 0.8071065989847716;
        result[2] += 0.005076142131979695;
        result[3] += 0.005076142131979695;
        result[4] += 0.17766497461928935;
        result[5] += 0.001692047377326565;
      } else {
        result[0] += 0.6593078758949881;
        result[1] += 0.034606205250596656;
        result[2] += 0.06264916467780429;
        result[3] += 0.08472553699284009;
        result[4] += 0.06443914081145585;
        result[5] += 0.09427207637231504;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        result[0] += 0.0078125;
        result[1] += 0.0078125;
        result[2] += 0.0703125;
        result[3] += 0.375;
        result[4] += 0.109375;
        result[5] += 0.4296875;
      } else {
        result[0] += 0.24786324786324782;
        result[1] += 0.008547008547008546;
        result[2] += 0.5213675213675213;
        result[3] += 0.15384615384615383;
        result[4] += 0.025641025641025633;
        result[5] += 0.04273504273504273;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6861313868613139;
        result[3] += 0.23357664233576642;
        result[4] += 0;
        result[5] += 0.08029197080291971;
      } else {
        result[0] += 0.00261437908496732;
        result[1] += 0;
        result[2] += 0.9424836601307189;
        result[3] += 0.05359477124183006;
        result[4] += 0;
        result[5] += 0.00130718954248366;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.0125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7875;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
        result[0] += 0.04211557296767875;
        result[1] += 0.0039177277179236044;
        result[2] += 0.0039177277179236044;
        result[3] += 0.058765915768854066;
        result[4] += 0.03819784524975514;
        result[5] += 0.8530852105778648;
      } else {
        result[0] += 0.10361445783132531;
        result[1] += 0.014457831325301205;
        result[2] += 0.01927710843373494;
        result[3] += 0.4457831325301205;
        result[4] += 0.06506024096385542;
        result[5] += 0.35180722891566263;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0.010238907849829351;
        result[1] += 0.841296928327645;
        result[2] += 0;
        result[3] += 0.0034129692832764505;
        result[4] += 0.14505119453924914;
        result[5] += 0;
      } else {
        result[0] += 0.8226181254841208;
        result[1] += 0.03408210689388071;
        result[2] += 0.009295120061967466;
        result[3] += 0.03640588690937258;
        result[4] += 0.06351665375677769;
        result[5] += 0.03408210689388071;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        result[0] += 0.009389671361502348;
        result[1] += 0;
        result[2] += 0.4225352112676056;
        result[3] += 0.27230046948356806;
        result[4] += 0.014084507042253521;
        result[5] += 0.28169014084507044;
      } else {
        result[0] += 0.022351797862001945;
        result[1] += 0.001943634596695821;
        result[2] += 0.86977648202138;
        result[3] += 0.08746355685131195;
        result[4] += 0.0029154518950437317;
        result[5] += 0.015549076773566569;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0071174377224199285;
        result[1] += 0.06405693950177936;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8932384341637011;
        result[5] += 0.03558718861209965;
      } else {
        result[0] += 0.7412790697674418;
        result[1] += 0.01744186046511628;
        result[2] += 0;
        result[3] += 0.01744186046511628;
        result[4] += 0.09883720930232558;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0.0034403669724770644;
        result[2] += 0.0011467889908256881;
        result[3] += 0.026376146788990827;
        result[4] += 0.12270642201834862;
        result[5] += 0.8463302752293578;
      } else {
        result[0] += 0.05116959064327485;
        result[1] += 0.054093567251461985;
        result[2] += 0.03216374269005848;
        result[3] += 0.3815789473684211;
        result[4] += 0.08333333333333333;
        result[5] += 0.39766081871345027;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
        result[0] += 0;
        result[1] += 0.9481327800829875;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05186721991701245;
        result[5] += 0;
      } else {
        result[0] += 0.8918099089989887;
        result[1] += 0.008088978766430737;
        result[2] += 0.02527805864509605;
        result[3] += 0.02325581395348837;
        result[4] += 0.04145601617795753;
        result[5] += 0.01011122345803842;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0.008264462809917356;
        result[1] += 0;
        result[2] += 0.371900826446281;
        result[3] += 0.47107438016528924;
        result[4] += 0.024793388429752067;
        result[5] += 0.12396694214876033;
      } else {
        result[0] += 0.022792022792022793;
        result[1] += 0.001899335232668566;
        result[2] += 0.8641975308641975;
        result[3] += 0.08547008547008547;
        result[4] += 0.001899335232668566;
        result[5] += 0.023741690408357077;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0027100271002710027;
        result[1] += 0.02168021680216802;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9159891598915989;
        result[5] += 0.05962059620596206;
      } else {
        result[0] += 0.10304449648711944;
        result[1] += 0.00156128024980484;
        result[2] += 0;
        result[3] += 0.09679937548790007;
        result[4] += 0.06713505074160812;
        result[5] += 0.7314597970335676;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0020325203252032522;
        result[1] += 0.9776422764227642;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02032520325203252;
        result[5] += 0;
      } else {
        result[0] += 0.5893416927899686;
        result[1] += 0.030094043887147336;
        result[2] += 0.08025078369905957;
        result[3] += 0.135423197492163;
        result[4] += 0.06896551724137931;
        result[5] += 0.09592476489028214;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0.034482758620689655;
        result[2] += 0.06896551724137931;
        result[3] += 0;
        result[4] += 0.13793103448275862;
        result[5] += 0.7586206896551724;
      } else {
        result[0] += 0;
        result[1] += 0.10869565217391304;
        result[2] += 0.10869565217391304;
        result[3] += 0.5;
        result[4] += 0.10869565217391304;
        result[5] += 0.17391304347826086;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        result[0] += 0.0297029702970297;
        result[1] += 0.054455445544554455;
        result[2] += 0.5445544554455446;
        result[3] += 0.2623762376237624;
        result[4] += 0.009900990099009901;
        result[5] += 0.09900990099009901;
      } else {
        result[0] += 0.006157635467980296;
        result[1] += 0.0012315270935960591;
        result[2] += 0.9236453201970444;
        result[3] += 0.06157635467980296;
        result[4] += 0.0012315270935960591;
        result[5] += 0.006157635467980296;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007575757575757577;
        result[1] += 0.0643939393939394;
        result[2] += 0.007575757575757577;
        result[3] += 0;
        result[4] += 0.8712121212121213;
        result[5] += 0.04924242424242425;
      } else {
        result[0] += 0.04837490551776266;
        result[1] += 0.0022675736961451248;
        result[2] += 0.012093726379440665;
        result[3] += 0.16326530612244897;
        result[4] += 0.05668934240362812;
        result[5] += 0.7173091458805745;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5920679886685553;
        result[1] += 0.06062322946175638;
        result[2] += 0.04929178470254957;
        result[3] += 0.07025495750708215;
        result[4] += 0.11331444759206799;
        result[5] += 0.11444759206798867;
      } else {
        result[0] += 0.0199501246882793;
        result[1] += 0.9501246882793017;
        result[2] += 0.0024937655860349127;
        result[3] += 0.017456359102244388;
        result[4] += 0.00997506234413965;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18571428571428572;
        result[3] += 0.6285714285714286;
        result[4] += 0;
        result[5] += 0.18571428571428572;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7222222222222222;
        result[3] += 0.15079365079365079;
        result[4] += 0;
        result[5] += 0.12698412698412698;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0.03164556962025317;
        result[1] += 0;
        result[2] += 0.7784810126582279;
        result[3] += 0.16139240506329114;
        result[4] += 0.006329113924050633;
        result[5] += 0.022151898734177215;
      } else {
        result[0] += 0.0071301247771836;
        result[1] += 0;
        result[2] += 0.9607843137254902;
        result[3] += 0.026737967914438502;
        result[4] += 0;
        result[5] += 0.0053475935828877;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0075187969924812035;
        result[1] += 0.0075187969924812035;
        result[2] += 0;
        result[3] += 0.02255639097744361;
        result[4] += 0.8759398496240602;
        result[5] += 0.08646616541353384;
      } else {
        result[0] += 0.03194103194103194;
        result[1] += 0.022113022113022112;
        result[2] += 0.001638001638001638;
        result[3] += 0.16543816543816545;
        result[4] += 0.03849303849303849;
        result[5] += 0.7403767403767404;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.003629764065335753;
        result[1] += 0.911070780399274;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0852994555353902;
        result[5] += 0;
      } else {
        result[0] += 0.6376388077147866;
        result[1] += 0.025131502045587374;
        result[2] += 0.05669199298655757;
        result[3] += 0.07656341320864991;
        result[4] += 0.11747516072472239;
        result[5] += 0.08649912331969609;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.37681159420289856;
        result[3] += 0.5;
        result[4] += 0.007246376811594203;
        result[5] += 0.11594202898550725;
      } else {
        result[0] += 0.005555555555555556;
        result[1] += 0;
        result[2] += 0.7833333333333333;
        result[3] += 0.15;
        result[4] += 0;
        result[5] += 0.06111111111111111;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.05714285714285714;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0.34285714285714286;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.009668508287292819;
        result[1] += 0;
        result[2] += 0.9530386740331492;
        result[3] += 0.03176795580110498;
        result[4] += 0;
        result[5] += 0.005524861878453039;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9946808510638298;
        result[5] += 0.005319148936170213;
      } else {
        result[0] += 0.02857142857142857;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0.17142857142857143;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0.005376344086021506;
        result[1] += 0.004032258064516129;
        result[2] += 0.0013440860215053765;
        result[3] += 0.025537634408602152;
        result[4] += 0.03763440860215054;
        result[5] += 0.9260752688172043;
      } else {
        result[0] += 0.08274647887323944;
        result[1] += 0.022887323943661973;
        result[2] += 0.00528169014084507;
        result[3] += 0.31690140845070425;
        result[4] += 0.07922535211267606;
        result[5] += 0.49295774647887325;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        result[0] += 0.003883495145631068;
        result[1] += 0.9262135922330097;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06990291262135923;
        result[5] += 0;
      } else {
        result[0] += 0.6884615384615385;
        result[1] += 0.0391025641025641;
        result[2] += 0.03141025641025641;
        result[3] += 0.058333333333333334;
        result[4] += 0.11602564102564103;
        result[5] += 0.06666666666666667;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.012096774193548387;
        result[1] += 0.05241935483870968;
        result[2] += 0.2903225806451613;
        result[3] += 0.3225806451612903;
        result[4] += 0.0846774193548387;
        result[5] += 0.23790322580645162;
      } else {
        result[0] += 0.01859504132231405;
        result[1] += 0;
        result[2] += 0.8842975206611571;
        result[3] += 0.08884297520661157;
        result[4] += 0;
        result[5] += 0.008264462809917356;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.07420494699646643;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8939929328621908;
        result[5] += 0.03180212014134275;
      } else {
        result[0] += 0.06985294117647059;
        result[1] += 0.009558823529411765;
        result[2] += 0.011029411764705883;
        result[3] += 0.17205882352941176;
        result[4] += 0.05073529411764706;
        result[5] += 0.6867647058823529;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
        result[0] += 0.0034071550255536627;
        result[1] += 0.7836456558773425;
        result[2] += 0;
        result[3] += 0.017035775127768313;
        result[4] += 0.18057921635434412;
        result[5] += 0.015332197614991482;
      } else {
        result[0] += 0.6788563829787234;
        result[1] += 0.007313829787234043;
        result[2] += 0.07446808510638298;
        result[3] += 0.0711436170212766;
        result[4] += 0.08244680851063829;
        result[5] += 0.08577127659574468;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.125;
        result[2] += 0;
        result[3] += 0.041666666666666664;
        result[4] += 0.14583333333333334;
        result[5] += 0.6875;
      } else {
        result[0] += 0;
        result[1] += 0.015873015873015872;
        result[2] += 0.373015873015873;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.2777777777777778;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.041666666666666664;
        result[1] += 0;
        result[2] += 0.7175925925925926;
        result[3] += 0.2222222222222222;
        result[4] += 0.009259259259259259;
        result[5] += 0.009259259259259259;
      } else {
        result[0] += 0.007122507122507123;
        result[1] += 0;
        result[2] += 0.9344729344729344;
        result[3] += 0.05698005698005698;
        result[4] += 0;
        result[5] += 0.0014245014245014246;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9803921568627451;
        result[5] += 0.0196078431372549;
      } else {
        result[0] += 0;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.07293868921775898;
        result[4] += 0.05919661733615222;
        result[5] += 0.8678646934460887;
      } else {
        result[0] += 0.17674418604651163;
        result[1] += 0.027906976744186046;
        result[2] += 0.020930232558139535;
        result[3] += 0.3395348837209302;
        result[4] += 0.053488372093023255;
        result[5] += 0.3813953488372093;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
        result[0] += 0.01437699680511182;
        result[1] += 0.8210862619808307;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1597444089456869;
        result[5] += 0.004792332268370607;
      } else {
        result[0] += 0.744153082919915;
        result[1] += 0.03047484053862509;
        result[2] += 0.023387668320340185;
        result[3] += 0.06165839829907867;
        result[4] += 0.08575478384124734;
        result[5] += 0.05457122608079376;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0.0024271844660194173;
        result[1] += 0.009708737864077669;
        result[2] += 0.5533980582524272;
        result[3] += 0.28640776699029125;
        result[4] += 0.0024271844660194173;
        result[5] += 0.14563106796116504;
      } else {
        result[0] += 0.020151133501259445;
        result[1] += 0.0012594458438287153;
        result[2] += 0.9307304785894207;
        result[3] += 0.037783375314861464;
        result[4] += 0.003778337531486146;
        result[5] += 0.006297229219143577;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012;
        result[1] += 0;
        result[2] += 0.02;
        result[3] += 0;
        result[4] += 0.904;
        result[5] += 0.064;
      } else {
        result[0] += 0.04552980132450331;
        result[1] += 0.03145695364238411;
        result[2] += 0.0033112582781456954;
        result[3] += 0.11589403973509933;
        result[4] += 0.04718543046357616;
        result[5] += 0.7566225165562914;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.611049723756906;
        result[1] += 0.04696132596685083;
        result[2] += 0.025966850828729283;
        result[3] += 0.06408839779005525;
        result[4] += 0.1430939226519337;
        result[5] += 0.10883977900552486;
      } else {
        result[0] += 0.009876543209876543;
        result[1] += 0.9654320987654321;
        result[2] += 0.012345679012345678;
        result[3] += 0.0049382716049382715;
        result[4] += 0.007407407407407408;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2823529411764706;
        result[3] += 0.5294117647058824;
        result[4] += 0;
        result[5] += 0.18823529411764706;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0;
        result[2] += 0.7894736842105263;
        result[3] += 0.02631578947368421;
        result[4] += 0;
        result[5] += 0.07894736842105263;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.033492822966507185;
        result[1] += 0;
        result[2] += 0.791866028708134;
        result[3] += 0.15550239234449764;
        result[4] += 0;
        result[5] += 0.019138755980861247;
      } else {
        result[0] += 0.0056925996204933585;
        result[1] += 0;
        result[2] += 0.967741935483871;
        result[3] += 0.024667931688804556;
        result[4] += 0;
        result[5] += 0.0018975332068311196;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.125;
        result[1] += 0.08653846153846154;
        result[2] += 0.003205128205128205;
        result[3] += 0.041666666666666664;
        result[4] += 0.6217948717948718;
        result[5] += 0.12179487179487179;
      } else {
        result[0] += 0.0052585451358457495;
        result[1] += 0.0026292725679228747;
        result[2] += 0.0008764241893076249;
        result[3] += 0.17090271691498685;
        result[4] += 0.04645048203330412;
        result[5] += 0.7738825591586328;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        result[0] += 0.004201680672268908;
        result[1] += 0.9138655462184875;
        result[2] += 0.002100840336134454;
        result[3] += 0.004201680672268908;
        result[4] += 0.0735294117647059;
        result[5] += 0.002100840336134454;
      } else {
        result[0] += 0.6252100840336136;
        result[1] += 0.028571428571428574;
        result[2] += 0.0689075630252101;
        result[3] += 0.07563025210084034;
        result[4] += 0.10028011204481795;
        result[5] += 0.10140056022408965;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.046511627906976744;
        result[2] += 0.011627906976744186;
        result[3] += 0.09302325581395349;
        result[4] += 0.09302325581395349;
        result[5] += 0.7558139534883721;
      } else {
        result[0] += 0.04316546762589928;
        result[1] += 0;
        result[2] += 0.3381294964028777;
        result[3] += 0.5107913669064749;
        result[4] += 0;
        result[5] += 0.1079136690647482;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0.12096774193548387;
        result[1] += 0;
        result[2] += 0.6370967741935484;
        result[3] += 0.20161290322580644;
        result[4] += 0;
        result[5] += 0.04032258064516129;
      } else {
        result[0] += 0.02883355176933159;
        result[1] += 0;
        result[2] += 0.9121887287024902;
        result[3] += 0.05897771952817825;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9790575916230366;
        result[5] += 0.020942408376963352;
      } else {
        result[0] += 0.000998003992015968;
        result[1] += 0;
        result[2] += 0.005988023952095809;
        result[3] += 0.09081836327345309;
        result[4] += 0.054890219560878244;
        result[5] += 0.8473053892215568;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5438931297709924;
        result[1] += 0.0491412213740458;
        result[2] += 0.05868320610687023;
        result[3] += 0.1316793893129771;
        result[4] += 0.11498091603053436;
        result[5] += 0.10162213740458015;
      } else {
        result[0] += 0.006593406593406593;
        result[1] += 0.9934065934065934;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07407407407407407;
        result[3] += 0.07407407407407407;
        result[4] += 0.14814814814814814;
        result[5] += 0.7037037037037037;
      } else {
        result[0] += 0;
        result[1] += 0.08695652173913043;
        result[2] += 0.391304347826087;
        result[3] += 0.3826086956521739;
        result[4] += 0.008695652173913044;
        result[5] += 0.13043478260869565;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.040880503144654086;
        result[1] += 0;
        result[2] += 0.7578616352201258;
        result[3] += 0.20125786163522014;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008403361344537815;
        result[1] += 0;
        result[2] += 0.9680672268907563;
        result[3] += 0.023529411764705882;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00819672131147541;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8237704918032787;
        result[5] += 0.1680327868852459;
      } else {
        result[0] += 0.04811250925240563;
        result[1] += 0.026646928201332347;
        result[2] += 0.003700962250185048;
        result[3] += 0.14729829755736493;
        result[4] += 0.06365655070318282;
        result[5] += 0.7105847520355293;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.009380863039399626;
        result[1] += 0.8649155722326454;
        result[2] += 0.00375234521575985;
        result[3] += 0.0075046904315197;
        result[4] += 0.10694183864915573;
        result[5] += 0.0075046904315197;
      } else {
        result[0] += 0.6790281329923273;
        result[1] += 0.0159846547314578;
        result[2] += 0.06905370843989769;
        result[3] += 0.07672634271099744;
        result[4] += 0.08695652173913043;
        result[5] += 0.07225063938618925;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.02631578947368421;
        result[2] += 0.10526315789473684;
        result[3] += 0.3157894736842105;
        result[4] += 0.013157894736842105;
        result[5] += 0.5394736842105263;
      } else {
        result[0] += 0.0427807486631016;
        result[1] += 0.03208556149732621;
        result[2] += 0.5828877005347594;
        result[3] += 0.25668449197860965;
        result[4] += 0.0053475935828877;
        result[5] += 0.08021390374331551;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        result[0] += 0.023529411764705882;
        result[1] += 0;
        result[2] += 0.6705882352941176;
        result[3] += 0.2235294117647059;
        result[4] += 0;
        result[5] += 0.08235294117647059;
      } else {
        result[0] += 0.010178117048346057;
        result[1] += 0;
        result[2] += 0.9478371501272265;
        result[3] += 0.039440203562340966;
        result[4] += 0;
        result[5] += 0.002544529262086514;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.010256410256410256;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9538461538461539;
        result[5] += 0.035897435897435895;
      } else {
        result[0] += 0;
        result[1] += 0.14545454545454545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.45454545454545453;
        result[5] += 0.4;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
        result[0] += 0.011508951406649617;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04219948849104859;
        result[4] += 0.03964194373401535;
        result[5] += 0.9066496163682864;
      } else {
        result[0] += 0.05639913232104121;
        result[1] += 0;
        result[2] += 0.04772234273318872;
        result[3] += 0.3665943600867679;
        result[4] += 0.0737527114967462;
        result[5] += 0.455531453362256;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0.005235602094240839;
        result[1] += 0.7783595113438047;
        result[2] += 0.0017452006980802795;
        result[3] += 0.013961605584642236;
        result[4] += 0.1954624781849913;
        result[5] += 0.005235602094240839;
      } else {
        result[0] += 0.7747747747747747;
        result[1] += 0.030492030492030493;
        result[2] += 0.017325017325017324;
        result[3] += 0.04851004851004851;
        result[4] += 0.08038808038808039;
        result[5] += 0.04851004851004851;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1917808219178082;
        result[3] += 0.2922374429223744;
        result[4] += 0.0593607305936073;
        result[5] += 0.45662100456621;
      } else {
        result[0] += 0.01912568306010929;
        result[1] += 0.012750455373406194;
        result[2] += 0.825136612021858;
        result[3] += 0.11020036429872496;
        result[4] += 0.00819672131147541;
        result[5] += 0.02459016393442623;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.046153846153846156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9538461538461539;
        result[5] += 0;
      } else {
        result[0] += 0.03278688524590164;
        result[1] += 0.14754098360655737;
        result[2] += 0;
        result[3] += 0.03278688524590164;
        result[4] += 0.4426229508196721;
        result[5] += 0.3442622950819672;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.003968253968253968;
        result[3] += 0.03439153439153439;
        result[4] += 0.026455026455026454;
        result[5] += 0.9351851851851852;
      } else {
        result[0] += 0.1143740340030912;
        result[1] += 0.00463678516228748;
        result[2] += 0.00927357032457496;
        result[3] += 0.357032457496136;
        result[4] += 0.05100463678516229;
        result[5] += 0.46367851622874806;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.012237762237762238;
        result[1] += 0.798951048951049;
        result[2] += 0.006993006993006993;
        result[3] += 0.01048951048951049;
        result[4] += 0.1660839160839161;
        result[5] += 0.005244755244755245;
      } else {
        result[0] += 0.7279942279942281;
        result[1] += 0.03535353535353536;
        result[2] += 0.030303030303030307;
        result[3] += 0.07215007215007216;
        result[4] += 0.07936507936507937;
        result[5] += 0.05483405483405484;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.013157894736842106;
        result[2] += 0.4539473684210527;
        result[3] += 0.37500000000000006;
        result[4] += 0.006578947368421053;
        result[5] += 0.15131578947368424;
      } else {
        result[0] += 0.009072580645161291;
        result[1] += 0.011088709677419355;
        result[2] += 0.8891129032258065;
        result[3] += 0.07358870967741936;
        result[4] += 0.0030241935483870967;
        result[5] += 0.014112903225806451;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.026615969581749048;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9429657794676806;
        result[5] += 0.030418250950570342;
      } else {
        result[0] += 0.03467741935483871;
        result[1] += 0.008870967741935484;
        result[2] += 0.00967741935483871;
        result[3] += 0.14758064516129032;
        result[4] += 0.05241935483870968;
        result[5] += 0.7467741935483871;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8101933216168717;
        result[2] += 0;
        result[3] += 0.0017574692442882249;
        result[4] += 0.18101933216168717;
        result[5] += 0.007029876977152899;
      } else {
        result[0] += 0.6632344033918837;
        result[1] += 0.018170805572380374;
        result[2] += 0.04603270745003028;
        result[3] += 0.09327680193821926;
        result[4] += 0.07086614173228346;
        result[5] += 0.10841913991520291;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3023255813953488;
        result[3] += 0.5116279069767442;
        result[4] += 0;
        result[5] += 0.18604651162790697;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.761904761904762;
        result[3] += 0.19841269841269843;
        result[4] += 0;
        result[5] += 0.03968253968253969;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)92.5) ) ) {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0.12;
        result[4] += 0;
        result[5] += 0.08;
      } else {
        result[0] += 0.013513513513513514;
        result[1] += 0;
        result[2] += 0.9324324324324325;
        result[3] += 0.05;
        result[4] += 0;
        result[5] += 0.004054054054054054;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003984063745019921;
        result[1] += 0.015936254980079684;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9243027888446216;
        result[5] += 0.05577689243027889;
      } else {
        result[0] += 0.03052805280528053;
        result[1] += 0.0008250825082508251;
        result[2] += 0.006600660066006601;
        result[3] += 0.16006600660066006;
        result[4] += 0.06930693069306931;
        result[5] += 0.7326732673267327;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9148936170212766;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0851063829787234;
        result[5] += 0;
      } else {
        result[0] += 0.6389370306181398;
        result[1] += 0.022530329289428077;
        result[2] += 0.0681686886192952;
        result[3] += 0.09069901790872328;
        result[4] += 0.097631426920855;
        result[5] += 0.08203350664355864;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.022727272727272728;
        result[2] += 0.1590909090909091;
        result[3] += 0.4318181818181818;
        result[4] += 0.11363636363636363;
        result[5] += 0.2727272727272727;
      } else {
        result[0] += 0.011627906976744186;
        result[1] += 0.05813953488372093;
        result[2] += 0.6627906976744186;
        result[3] += 0.19767441860465115;
        result[4] += 0;
        result[5] += 0.06976744186046512;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.06083650190114069;
        result[1] += 0;
        result[2] += 0.7870722433460077;
        result[3] += 0.13688212927756657;
        result[4] += 0;
        result[5] += 0.015209125475285173;
      } else {
        result[0] += 0.003169572107765452;
        result[1] += 0;
        result[2] += 0.9683042789223455;
        result[3] += 0.028526148969889066;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.07058823529411765;
        result[1] += 0.07058823529411765;
        result[2] += 0.011764705882352941;
        result[3] += 0;
        result[4] += 0.7588235294117647;
        result[5] += 0.08823529411764706;
      } else {
        result[0] += 0.002912621359223301;
        result[1] += 0.001941747572815534;
        result[2] += 0.001941747572815534;
        result[3] += 0.16893203883495145;
        result[4] += 0.05825242718446602;
        result[5] += 0.7660194174757281;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        result[0] += 0.008213552361396304;
        result[1] += 0.9158110882956879;
        result[2] += 0;
        result[3] += 0.01026694045174538;
        result[4] += 0.06570841889117043;
        result[5] += 0;
      } else {
        result[0] += 0.6568457538994801;
        result[1] += 0.03870595031773541;
        result[2] += 0.03755054881571346;
        result[3] += 0.06701328711727325;
        result[4] += 0.09532062391681109;
        result[5] += 0.10456383593298671;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0546875;
        result[3] += 0.5;
        result[4] += 0.0234375;
        result[5] += 0.421875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23943661971830987;
        result[3] += 0.07042253521126762;
        result[4] += 0.15492957746478875;
        result[5] += 0.5352112676056339;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.018867924528301886;
        result[2] += 0.39622641509433965;
        result[3] += 0.4056603773584906;
        result[4] += 0.05660377358490566;
        result[5] += 0.12264150943396226;
      } else {
        result[0] += 0.011789924973204717;
        result[1] += 0.003215434083601286;
        result[2] += 0.8821007502679529;
        result[3] += 0.09110396570203644;
        result[4] += 0.0053590568060021436;
        result[5] += 0.006430868167202572;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004;
        result[1] += 0;
        result[2] += 0.032;
        result[3] += 0.012;
        result[4] += 0.904;
        result[5] += 0.048;
      } else {
        result[0] += 0.031476997578692496;
        result[1] += 0.003228410008071025;
        result[2] += 0.0008071025020177562;
        result[3] += 0.17594834543987087;
        result[4] += 0.04923325262308313;
        result[5] += 0.7393058918482648;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003795066413662239;
        result[1] += 0.8140417457305503;
        result[2] += 0.017077798861480076;
        result[3] += 0;
        result[4] += 0.16129032258064516;
        result[5] += 0.003795066413662239;
      } else {
        result[0] += 0.6809927360774818;
        result[1] += 0.030871670702179176;
        result[2] += 0.06658595641646489;
        result[3] += 0.0774818401937046;
        result[4] += 0.0811138014527845;
        result[5] += 0.06295399515738499;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0.10294117647058823;
        result[4] += 0.07352941176470588;
        result[5] += 0.7941176470588235;
      } else {
        result[0] += 0;
        result[1] += 0.014285714285714285;
        result[2] += 0.2857142857142857;
        result[3] += 0.4142857142857143;
        result[4] += 0;
        result[5] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.032846715328467155;
        result[1] += 0.032846715328467155;
        result[2] += 0.6642335766423357;
        result[3] += 0.18613138686131386;
        result[4] += 0.010948905109489052;
        result[5] += 0.072992700729927;
      } else {
        result[0] += 0.007396449704142012;
        result[1] += 0;
        result[2] += 0.9363905325443788;
        result[3] += 0.05177514792899409;
        result[4] += 0;
        result[5] += 0.004437869822485208;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        result[0] += 0.0060790273556231;
        result[1] += 0.0425531914893617;
        result[2] += 0.00911854103343465;
        result[3] += 0;
        result[4] += 0.9179331306990881;
        result[5] += 0.0243161094224924;
      } else {
        result[0] += 0.0021186440677966106;
        result[1] += 0.9766949152542374;
        result[2] += 0;
        result[3] += 0.004237288135593221;
        result[4] += 0.016949152542372885;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
        result[0] += 0.05034324942791762;
        result[1] += 0.0015255530129672007;
        result[2] += 0.01906941266209001;
        result[3] += 0.14874141876430205;
        result[4] += 0.06331045003813883;
        result[5] += 0.7170099160945843;
      } else {
        result[0] += 0.6924083769633509;
        result[1] += 0.03599476439790577;
        result[2] += 0.04384816753926702;
        result[3] += 0.07918848167539268;
        result[4] += 0.07329842931937174;
        result[5] += 0.07526178010471206;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08974358974358974;
        result[3] += 0.21794871794871795;
        result[4] += 0.05128205128205128;
        result[5] += 0.6410256410256411;
      } else {
        result[0] += 0.01875;
        result[1] += 0.0875;
        result[2] += 0.45625;
        result[3] += 0.31875;
        result[4] += 0.00625;
        result[5] += 0.1125;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.2903225806451613;
        result[2] += 0.06451612903225806;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.6451612903225806;
      } else {
        result[0] += 0.009814612868047985;
        result[1] += 0;
        result[2] += 0.9083969465648856;
        result[3] += 0.06979280261723012;
        result[4] += 0;
        result[5] += 0.011995637949836425;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        result[0] += 0.013824884792626729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8847926267281107;
        result[5] += 0.10138248847926268;
      } else {
        result[0] += 0.6956521739130435;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.014492753623188406;
        result[4] += 0.2898550724637681;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.038318912237330034;
        result[4] += 0.048207663782447466;
        result[5] += 0.9134734239802225;
      } else {
        result[0] += 0;
        result[1] += 0.07036247334754797;
        result[2] += 0.03411513859275053;
        result[3] += 0.31130063965884863;
        result[4] += 0.053304904051172705;
        result[5] += 0.5309168443496801;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9907834101382489;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009216589861751152;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.6914618369987063;
        result[1] += 0.037516170763260026;
        result[2] += 0.00517464424320828;
        result[3] += 0.05304010349288486;
        result[4] += 0.14683053040103494;
        result[5] += 0.06597671410090557;
      } else {
        result[0] += 0.020504731861198743;
        result[1] += 0.0023659305993690856;
        result[2] += 0.7563091482649843;
        result[3] += 0.1435331230283912;
        result[4] += 0.0055205047318612;
        result[5] += 0.0717665615141956;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15204678362573099;
        result[1] += 0.02631578947368421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7076023391812866;
        result[5] += 0.11403508771929824;
      } else {
        result[0] += 0.0016764459346186086;
        result[1] += 0.01173512154233026;
        result[2] += 0.012573344509639563;
        result[3] += 0.16093880972338642;
        result[4] += 0.03520536462699078;
        result[5] += 0.7778709136630344;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9815242494226328;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018475750577367205;
        result[5] += 0;
      } else {
        result[0] += 0.625;
        result[1] += 0.03662790697674419;
        result[2] += 0.06976744186046512;
        result[3] += 0.08488372093023255;
        result[4] += 0.1127906976744186;
        result[5] += 0.07093023255813953;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0.020833333333333332;
        result[1] += 0.22916666666666666;
        result[2] += 0.10416666666666667;
        result[3] += 0.020833333333333332;
        result[4] += 0.10416666666666667;
        result[5] += 0.5208333333333334;
      } else {
        result[0] += 0;
        result[1] += 0.01694915254237288;
        result[2] += 0.3220338983050847;
        result[3] += 0.5508474576271186;
        result[4] += 0;
        result[5] += 0.11016949152542373;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0.023391812865497075;
        result[1] += 0;
        result[2] += 0.6783625730994152;
        result[3] += 0.19883040935672514;
        result[4] += 0;
        result[5] += 0.09941520467836257;
      } else {
        result[0] += 0.01373283395755306;
        result[1] += 0.006242197253433208;
        result[2] += 0.9225967540574282;
        result[3] += 0.05493133583021224;
        result[4] += 0;
        result[5] += 0.0024968789013732834;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.029166666666666667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8916666666666667;
        result[5] += 0.07916666666666666;
      } else {
        result[0] += 0.03680501174628034;
        result[1] += 0.028974158183241974;
        result[2] += 0.030540328895849646;
        result[3] += 0.17384494909945183;
        result[4] += 0.04933437744714174;
        result[5] += 0.6805011746280345;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021141649048625794;
        result[1] += 0.945031712473573;
        result[2] += 0;
        result[3] += 0.010570824524312896;
        result[4] += 0.040169133192389;
        result[5] += 0.0021141649048625794;
      } else {
        result[0] += 0.6294444444444445;
        result[1] += 0.025555555555555557;
        result[2] += 0.05722222222222222;
        result[3] += 0.08722222222222223;
        result[4] += 0.11944444444444445;
        result[5] += 0.0811111111111111;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16279069767441862;
        result[3] += 0;
        result[4] += 0.18604651162790697;
        result[5] += 0.6511627906976745;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4090909090909091;
        result[3] += 0.4659090909090909;
        result[4] += 0.022727272727272728;
        result[5] += 0.10227272727272728;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.011627906976744186;
        result[1] += 0.007751937984496124;
        result[2] += 0.7364341085271318;
        result[3] += 0.19767441860465115;
        result[4] += 0;
        result[5] += 0.046511627906976744;
      } else {
        result[0] += 0.001545595054095827;
        result[1] += 0;
        result[2] += 0.9536321483771253;
        result[3] += 0.0340030911901082;
        result[4] += 0;
        result[5] += 0.01081916537867079;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.01485148514851485;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9752475247524752;
        result[5] += 0.009900990099009901;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0.022222222222222223;
        result[3] += 0.06666666666666667;
        result[4] += 0.37777777777777777;
        result[5] += 0.4222222222222222;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0.04540540540540541;
        result[1] += 0.02054054054054054;
        result[2] += 0.001081081081081081;
        result[3] += 0.034594594594594595;
        result[4] += 0.06594594594594595;
        result[5] += 0.8324324324324325;
      } else {
        result[0] += 0.019178082191780823;
        result[1] += 0.005479452054794521;
        result[2] += 0.04657534246575343;
        result[3] += 0.5123287671232877;
        result[4] += 0.0136986301369863;
        result[5] += 0.40273972602739727;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.005154639175257732;
        result[1] += 0.802405498281787;
        result[2] += 0.006872852233676976;
        result[3] += 0.012027491408934709;
        result[4] += 0.15807560137457044;
        result[5] += 0.015463917525773196;
      } else {
        result[0] += 0.7564625850340136;
        result[1] += 0.026530612244897958;
        result[2] += 0.006802721088435374;
        result[3] += 0.05374149659863946;
        result[4] += 0.09523809523809523;
        result[5] += 0.061224489795918366;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.007782101167315175;
        result[1] += 0.011673151750972763;
        result[2] += 0.3735408560311284;
        result[3] += 0.36186770428015563;
        result[4] += 0.0038910505836575876;
        result[5] += 0.24124513618677043;
      } else {
        result[0] += 0.028571428571428574;
        result[1] += 0;
        result[2] += 0.8775510204081634;
        result[3] += 0.07959183673469389;
        result[4] += 0.005102040816326531;
        result[5] += 0.009183673469387758;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
        result[0] += 0.012605042016806723;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9285714285714286;
        result[5] += 0.058823529411764705;
      } else {
        result[0] += 0.42748091603053434;
        result[1] += 0.007633587786259542;
        result[2] += 0;
        result[3] += 0.022900763358778626;
        result[4] += 0.17557251908396945;
        result[5] += 0.366412213740458;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.0010964912280701754;
        result[2] += 0.0010964912280701754;
        result[3] += 0.06469298245614036;
        result[4] += 0.05592105263157895;
        result[5] += 0.8771929824561403;
      } else {
        result[0] += 0.0024449877750611247;
        result[1] += 0.009779951100244499;
        result[2] += 0.029339853300733496;
        result[3] += 0.4547677261613692;
        result[4] += 0.07334963325183375;
        result[5] += 0.43031784841075793;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.010771992818671455;
        result[1] += 0.8671454219030521;
        result[2] += 0;
        result[3] += 0.003590664272890485;
        result[4] += 0.118491921005386;
        result[5] += 0;
      } else {
        result[0] += 0.7476835352815395;
        result[1] += 0.02993585174625802;
        result[2] += 0.039201710620099785;
        result[3] += 0.05131860299358518;
        result[4] += 0.08339272986457591;
        result[5] += 0.048467569493941556;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.05309734513274336;
        result[1] += 0.07964601769911504;
        result[2] += 0.3053097345132743;
        result[3] += 0.252212389380531;
        result[4] += 0.01327433628318584;
        result[5] += 0.29646017699115046;
      } else {
        result[0] += 0.010526315789473684;
        result[1] += 0.002105263157894737;
        result[2] += 0.8536842105263158;
        result[3] += 0.10842105263157895;
        result[4] += 0;
        result[5] += 0.02526315789473684;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0896358543417367;
        result[1] += 0.0028011204481792717;
        result[2] += 0;
        result[3] += 0.0196078431372549;
        result[4] += 0.742296918767507;
        result[5] += 0.14565826330532214;
      } else {
        result[0] += 0;
        result[1] += 0.006381039197812215;
        result[2] += 0;
        result[3] += 0.14767547857793983;
        result[4] += 0.056517775752051046;
        result[5] += 0.7894257064721969;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8720292504570384;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.12248628884826325;
        result[5] += 0.005484460694698354;
      } else {
        result[0] += 0.7200520833333334;
        result[1] += 0.020833333333333332;
        result[2] += 0.031901041666666664;
        result[3] += 0.06966145833333333;
        result[4] += 0.08528645833333333;
        result[5] += 0.072265625;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.008733624454148471;
        result[2] += 0.12663755458515283;
        result[3] += 0.5109170305676856;
        result[4] += 0.05240174672489083;
        result[5] += 0.30131004366812225;
      } else {
        result[0] += 0.01818181818181818;
        result[1] += 0;
        result[2] += 0.6909090909090909;
        result[3] += 0.2818181818181818;
        result[4] += 0;
        result[5] += 0.00909090909090909;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.20512820512820512;
        result[2] += 0.2564102564102564;
        result[3] += 0.1282051282051282;
        result[4] += 0.07692307692307693;
        result[5] += 0;
      } else {
        result[0] += 0.017563117453347973;
        result[1] += 0;
        result[2] += 0.9088913282107575;
        result[3] += 0.06476399560922065;
        result[4] += 0;
        result[5] += 0.008781558726673987;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.09310344827586207;
        result[1] += 0.013793103448275862;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7793103448275862;
        result[5] += 0.11379310344827587;
      } else {
        result[0] += 0.0008481764206955047;
        result[1] += 0.005937234944868533;
        result[2] += 0.0033927056827820186;
        result[3] += 0.1594571670907549;
        result[4] += 0.04580152671755725;
        result[5] += 0.7845631891433418;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9099804305283757;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09001956947162426;
        result[5] += 0;
      } else {
        result[0] += 0.6547619047619048;
        result[1] += 0.024376417233560092;
        result[2] += 0.06292517006802721;
        result[3] += 0.10600907029478458;
        result[4] += 0.0810657596371882;
        result[5] += 0.07086167800453515;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02564102564102564;
        result[3] += 0.19230769230769232;
        result[4] += 0.05128205128205128;
        result[5] += 0.7307692307692307;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.49056603773584906;
        result[3] += 0.32075471698113206;
        result[4] += 0;
        result[5] += 0.18867924528301888;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0.029850746268656716;
        result[1] += 0;
        result[2] += 0.4626865671641791;
        result[3] += 0.3582089552238806;
        result[4] += 0.029850746268656716;
        result[5] += 0.11940298507462686;
      } else {
        result[0] += 0.02262443438914027;
        result[1] += 0.010180995475113122;
        result[2] += 0.8914027149321267;
        result[3] += 0.06787330316742081;
        result[4] += 0;
        result[5] += 0.007918552036199095;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.004032258064516129;
        result[1] += 0.09274193548387097;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8911290322580645;
        result[5] += 0.012096774193548387;
      } else {
        result[0] += 0.46875;
        result[1] += 0.020833333333333332;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16666666666666666;
        result[5] += 0.34375;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.007231404958677686;
        result[1] += 0.002066115702479339;
        result[2] += 0;
        result[3] += 0.06508264462809918;
        result[4] += 0.060950413223140494;
        result[5] += 0.8646694214876033;
      } else {
        result[0] += 0.023255813953488372;
        result[1] += 0;
        result[2] += 0.04983388704318937;
        result[3] += 0.5249169435215947;
        result[4] += 0.0033222591362126247;
        result[5] += 0.39867109634551495;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0.009111617312072894;
        result[1] += 0.9407744874715263;
        result[2] += 0;
        result[3] += 0.006833712984054671;
        result[4] += 0.04328018223234625;
        result[5] += 0;
      } else {
        result[0] += 0.6823222439660795;
        result[1] += 0.04827136333985649;
        result[2] += 0.019569471624266144;
        result[3] += 0.0593607305936073;
        result[4] += 0.11545988258317025;
        result[5] += 0.07501630789302022;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0.04093567251461988;
        result[2] += 0.3713450292397661;
        result[3] += 0.3391812865497076;
        result[4] += 0.03508771929824561;
        result[5] += 0.1608187134502924;
      } else {
        result[0] += 0.024471635150166853;
        result[1] += 0;
        result[2] += 0.8921023359288098;
        result[3] += 0.08120133481646273;
        result[4] += 0;
        result[5] += 0.002224694104560623;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.986046511627907;
        result[5] += 0.013953488372093023;
      } else {
        result[0] += 0.03536977491961415;
        result[1] += 0.006430868167202572;
        result[2] += 0.005627009646302251;
        result[3] += 0.1567524115755627;
        result[4] += 0.04662379421221865;
        result[5] += 0.7491961414790996;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0.006884681583476765;
        result[1] += 0.8055077452667815;
        result[2] += 0.0034423407917383827;
        result[3] += 0.0017211703958691913;
        result[4] += 0.1772805507745267;
        result[5] += 0.005163511187607574;
      } else {
        result[0] += 0.7516339869281046;
        result[1] += 0.023529411764705882;
        result[2] += 0.04183006535947712;
        result[3] += 0.0738562091503268;
        result[4] += 0.0542483660130719;
        result[5] += 0.054901960784313725;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02857142857142857;
        result[3] += 0.11428571428571428;
        result[4] += 0.14285714285714285;
        result[5] += 0.7142857142857143;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07291666666666667;
        result[3] += 0.6770833333333334;
        result[4] += 0;
        result[5] += 0.25;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.022388059701492536;
        result[1] += 0.02736318407960199;
        result[2] += 0.6318407960199005;
        result[3] += 0.19900497512437812;
        result[4] += 0.022388059701492536;
        result[5] += 0.09701492537313433;
      } else {
        result[0] += 0.0027662517289073307;
        result[1] += 0;
        result[2] += 0.9446749654218534;
        result[3] += 0.04702627939142462;
        result[4] += 0;
        result[5] += 0.005532503457814661;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.003367003367003367;
        result[1] += 0.026936026936026935;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8484848484848485;
        result[5] += 0.12121212121212122;
      } else {
        result[0] += 0.0433996383363472;
        result[1] += 0.022603978300180832;
        result[2] += 0.013562386980108499;
        result[3] += 0.15280289330922242;
        result[4] += 0.034358047016274866;
        result[5] += 0.7332730560578662;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.00819672131147541;
        result[1] += 0.9159836065573771;
        result[2] += 0.018442622950819672;
        result[3] += 0;
        result[4] += 0.05737704918032787;
        result[5] += 0;
      } else {
        result[0] += 0.6674831598285365;
        result[1] += 0.04041641151255358;
        result[2] += 0.03061849357011635;
        result[3] += 0.06307409675443969;
        result[4] += 0.1132884262094305;
        result[5] += 0.08511941212492345;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.014492753623188406;
        result[1] += 0.014492753623188406;
        result[2] += 0.13043478260869565;
        result[3] += 0.043478260869565216;
        result[4] += 0.18840579710144928;
        result[5] += 0.6086956521739131;
      } else {
        result[0] += 0.004405286343612335;
        result[1] += 0.00881057268722467;
        result[2] += 0.27312775330396477;
        result[3] += 0.4669603524229075;
        result[4] += 0.01762114537444934;
        result[5] += 0.2290748898678414;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.5;
      } else {
        result[0] += 0.02631578947368421;
        result[1] += 0;
        result[2] += 0.8937246963562753;
        result[3] += 0.07388663967611336;
        result[4] += 0;
        result[5] += 0.006072874493927126;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004464285714285714;
        result[1] += 0.049107142857142856;
        result[2] += 0;
        result[3] += 0.022321428571428572;
        result[4] += 0.8705357142857143;
        result[5] += 0.05357142857142857;
      } else {
        result[0] += 0.04100227790432802;
        result[1] += 0.0037965072133637054;
        result[2] += 0.0015186028853454822;
        result[3] += 0.15945330296127563;
        result[4] += 0.0774487471526196;
        result[5] += 0.7167805618830676;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9318181818181818;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06611570247933884;
        result[5] += 0.002066115702479339;
      } else {
        result[0] += 0.6461095100864553;
        result[1] += 0.03861671469740634;
        result[2] += 0.07780979827089338;
        result[3] += 0.07550432276657061;
        result[4] += 0.09337175792507205;
        result[5] += 0.0685878962536023;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0.037037037037037035;
        result[3] += 0;
        result[4] += 0.07407407407407407;
        result[5] += 0.7777777777777778;
      } else {
        result[0] += 0.02247191011235955;
        result[1] += 0;
        result[2] += 0.34831460674157305;
        result[3] += 0.4943820224719101;
        result[4] += 0.011235955056179775;
        result[5] += 0.12359550561797752;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.016129032258064516;
        result[1] += 0.016129032258064516;
        result[2] += 0.717741935483871;
        result[3] += 0.19086021505376344;
        result[4] += 0.010752688172043012;
        result[5] += 0.04838709677419355;
      } else {
        result[0] += 0.0017301038062283738;
        result[1] += 0.005190311418685121;
        result[2] += 0.9446366782006921;
        result[3] += 0.03633217993079585;
        result[4] += 0;
        result[5] += 0.012110726643598616;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
        result[0] += 0.003745318352059925;
        result[1] += 0.011235955056179775;
        result[2] += 0.026217228464419477;
        result[3] += 0;
        result[4] += 0.8651685393258427;
        result[5] += 0.09363295880149813;
      } else {
        result[0] += 0;
        result[1] += 0.07692307692307694;
        result[2] += 0;
        result[3] += 0.6923076923076924;
        result[4] += 0.07692307692307694;
        result[5] += 0.15384615384615388;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        result[0] += 0.03236607142857143;
        result[1] += 0.014508928571428572;
        result[2] += 0.0011160714285714285;
        result[3] += 0.05022321428571429;
        result[4] += 0.05022321428571429;
        result[5] += 0.8515625;
      } else {
        result[0] += 0.008746355685131196;
        result[1] += 0.0058309037900874635;
        result[2] += 0.037900874635568516;
        result[3] += 0.5276967930029155;
        result[4] += 0.026239067055393587;
        result[5] += 0.3935860058309038;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.2647058823529412;
        result[2] += 0.029411764705882353;
        result[3] += 0.014705882352941176;
        result[4] += 0.6911764705882353;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9816091954022989;
        result[2] += 0;
        result[3] += 0.004597701149425287;
        result[4] += 0.013793103448275862;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.7100253807106599;
        result[1] += 0.04378172588832487;
        result[2] += 0.015862944162436547;
        result[3] += 0.057741116751269035;
        result[4] += 0.108502538071066;
        result[5] += 0.06408629441624365;
      } else {
        result[0] += 0.01710097719869707;
        result[1] += 0.004071661237785016;
        result[2] += 0.7214983713355049;
        result[3] += 0.14087947882736157;
        result[4] += 0.008957654723127036;
        result[5] += 0.10749185667752444;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.16780821917808222;
        result[1] += 0.04109589041095891;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7465753424657535;
        result[5] += 0.044520547945205484;
      } else {
        result[0] += 0.0016638935108153079;
        result[1] += 0.010815307820299502;
        result[2] += 0.009151414309484194;
        result[3] += 0.16306156405990016;
        result[4] += 0.04991680532445923;
        result[5] += 0.7653910149750416;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005172413793103449;
        result[1] += 0.8275862068965519;
        result[2] += 0.005172413793103449;
        result[3] += 0.008620689655172415;
        result[4] += 0.1448275862068966;
        result[5] += 0.008620689655172415;
      } else {
        result[0] += 0.6696428571428571;
        result[1] += 0.02738095238095238;
        result[2] += 0.060714285714285714;
        result[3] += 0.09285714285714286;
        result[4] += 0.06488095238095239;
        result[5] += 0.08452380952380953;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05714285714285714;
        result[3] += 0.2857142857142857;
        result[4] += 0.08571428571428572;
        result[5] += 0.5714285714285714;
      } else {
        result[0] += 0.04938271604938271;
        result[1] += 0.12345679012345678;
        result[2] += 0.49382716049382713;
        result[3] += 0.19753086419753085;
        result[4] += 0;
        result[5] += 0.13580246913580246;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.509090909090909;
        result[3] += 0.23636363636363636;
        result[4] += 0.05454545454545454;
        result[5] += 0.2;
      } else {
        result[0] += 0.006659267480577136;
        result[1] += 0;
        result[2] += 0.9167591564927858;
        result[3] += 0.07103218645948946;
        result[4] += 0;
        result[5] += 0.005549389567147614;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.010676156583629894;
        result[1] += 0.05693950177935943;
        result[2] += 0;
        result[3] += 0.0071174377224199285;
        result[4] += 0.8505338078291815;
        result[5] += 0.07473309608540925;
      } else {
        result[0] += 0.04984423676012461;
        result[1] += 0.017133956386292833;
        result[2] += 0.003894080996884735;
        result[3] += 0.15498442367601245;
        result[4] += 0.03115264797507788;
        result[5] += 0.7429906542056075;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 0.9216867469879518;
        result[2] += 0.002008032128514056;
        result[3] += 0.012048192771084338;
        result[4] += 0.0642570281124498;
        result[5] += 0;
      } else {
        result[0] += 0.6302816901408451;
        result[1] += 0.04107981220657277;
        result[2] += 0.07570422535211267;
        result[3] += 0.07511737089201878;
        result[4] += 0.09389671361502347;
        result[5] += 0.08392018779342723;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15625;
        result[3] += 0.6875;
        result[4] += 0;
        result[5] += 0.15625;
      } else {
        result[0] += 0.05825242718446603;
        result[1] += 0.03883495145631068;
        result[2] += 0.5048543689320389;
        result[3] += 0.10679611650485438;
        result[4] += 0.048543689320388356;
        result[5] += 0.24271844660194178;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6274509803921569;
        result[3] += 0.3235294117647059;
        result[4] += 0;
        result[5] += 0.049019607843137254;
      } else {
        result[0] += 0.0024330900243309003;
        result[1] += 0;
        result[2] += 0.9452554744525548;
        result[3] += 0.049878345498783457;
        result[4] += 0;
        result[5] += 0.0024330900243309003;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0035087719298245615;
        result[1] += 0.017543859649122806;
        result[2] += 0.010526315789473684;
        result[3] += 0.042105263157894736;
        result[4] += 0.8491228070175438;
        result[5] += 0.07719298245614035;
      } else {
        result[0] += 0.03648424543946932;
        result[1] += 0.013266998341625208;
        result[2] += 0.012437810945273632;
        result[3] += 0.15008291873963517;
        result[4] += 0.05472636815920398;
        result[5] += 0.7330016583747927;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        result[0] += 0.006960556844547564;
        result[1] += 0.9651972157772623;
        result[2] += 0;
        result[3] += 0.0023201856148491883;
        result[4] += 0.02552204176334107;
        result[5] += 0;
      } else {
        result[0] += 0.6801745635910224;
        result[1] += 0.04114713216957605;
        result[2] += 0.02556109725685785;
        result[3] += 0.05361596009975061;
        result[4] += 0.14276807980049872;
        result[5] += 0.05673316708229425;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.03571428571428571;
        result[2] += 0.15625;
        result[3] += 0.4375;
        result[4] += 0.026785714285714284;
        result[5] += 0.34375;
      } else {
        result[0] += 0;
        result[1] += 0.07058823529411765;
        result[2] += 0.7058823529411765;
        result[3] += 0.07058823529411765;
        result[4] += 0;
        result[5] += 0.15294117647058825;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.028199566160520606;
        result[1] += 0;
        result[2] += 0.7809110629067245;
        result[3] += 0.16702819956616052;
        result[4] += 0.0021691973969631237;
        result[5] += 0.021691973969631236;
      } else {
        result[0] += 0.0018867924528301887;
        result[1] += 0;
        result[2] += 0.9716981132075472;
        result[3] += 0.024528301886792454;
        result[4] += 0;
        result[5] += 0.0018867924528301887;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.13377926421404682;
        result[1] += 0.030100334448160536;
        result[2] += 0;
        result[3] += 0.016722408026755852;
        result[4] += 0.725752508361204;
        result[5] += 0.09364548494983277;
      } else {
        result[0] += 0.0041459369817578775;
        result[1] += 0.0041459369817578775;
        result[2] += 0.003316749585406302;
        result[3] += 0.15422885572139303;
        result[4] += 0.06301824212271974;
        result[5] += 0.7711442786069652;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.003472222222222221;
        result[1] += 0.8298611111111109;
        result[2] += 0.005208333333333332;
        result[3] += 0.008680555555555554;
        result[4] += 0.14583333333333331;
        result[5] += 0.006944444444444442;
      } else {
        result[0] += 0.6829113924050633;
        result[1] += 0.04177215189873418;
        result[2] += 0.043037974683544304;
        result[3] += 0.0810126582278481;
        result[4] += 0.08417721518987342;
        result[5] += 0.0670886075949367;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.011299435028248588;
        result[1] += 0.022598870056497175;
        result[2] += 0.1638418079096045;
        result[3] += 0.4463276836158192;
        result[4] += 0.04519774011299435;
        result[5] += 0.3107344632768362;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8297872340425533;
        result[3] += 0.12765957446808512;
        result[4] += 0;
        result[5] += 0.04255319148936171;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        result[0] += 0.00946372239747634;
        result[1] += 0;
        result[2] += 0.804416403785489;
        result[3] += 0.17034700315457413;
        result[4] += 0;
        result[5] += 0.015772870662460567;
      } else {
        result[0] += 0.035256410256410256;
        result[1] += 0.0016025641025641025;
        result[2] += 0.9391025641025641;
        result[3] += 0.020833333333333332;
        result[4] += 0;
        result[5] += 0.003205128205128205;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1649214659685864;
        result[1] += 0.08638743455497382;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6465968586387435;
        result[5] += 0.10209424083769633;
      } else {
        result[0] += 0.0025662959794696323;
        result[1] += 0.007698887938408896;
        result[2] += 0.007698887938408896;
        result[3] += 0.1770744225834046;
        result[4] += 0.05218135158254919;
        result[5] += 0.7527801539777588;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.007168458781362007;
        result[1] += 0.8297491039426523;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15770609318996415;
        result[5] += 0.005376344086021506;
      } else {
        result[0] += 0.6636141636141636;
        result[1] += 0.019536019536019536;
        result[2] += 0.06715506715506715;
        result[3] += 0.10195360195360195;
        result[4] += 0.061660561660561664;
        result[5] += 0.08608058608058608;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.011363636363636364;
        result[1] += 0.10227272727272728;
        result[2] += 0.11363636363636363;
        result[3] += 0.13636363636363635;
        result[4] += 0.09090909090909091;
        result[5] += 0.5454545454545454;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5135135135135135;
        result[3] += 0.32432432432432434;
        result[4] += 0;
        result[5] += 0.16216216216216217;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.01518987341772152;
        result[1] += 0;
        result[2] += 0.8303797468354431;
        result[3] += 0.13417721518987344;
        result[4] += 0;
        result[5] += 0.02025316455696203;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9770114942528736;
        result[3] += 0.022988505747126436;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15892420537897312;
        result[1] += 0;
        result[2] += 0.009779951100244499;
        result[3] += 0;
        result[4] += 0.7286063569682152;
        result[5] += 0.10268948655256724;
      } else {
        result[0] += 0.0008064516129032258;
        result[1] += 0.01129032258064516;
        result[2] += 0.0008064516129032258;
        result[3] += 0.16693548387096774;
        result[4] += 0.05725806451612903;
        result[5] += 0.7629032258064516;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.003766478342749529;
        result[1] += 0.864406779661017;
        result[2] += 0;
        result[3] += 0.0018832391713747645;
        result[4] += 0.11864406779661017;
        result[5] += 0.011299435028248588;
      } else {
        result[0] += 0.7689655172413793;
        result[1] += 0.04482758620689655;
        result[2] += 0.017241379310344827;
        result[3] += 0.03586206896551724;
        result[4] += 0.07724137931034483;
        result[5] += 0.05586206896551724;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.20179372197309417;
        result[3] += 0.5381165919282511;
        result[4] += 0;
        result[5] += 0.2600896860986547;
      } else {
        result[0] += 0.12307692307692308;
        result[1] += 0;
        result[2] += 0.6307692307692307;
        result[3] += 0.12307692307692308;
        result[4] += 0.015384615384615385;
        result[5] += 0.1076923076923077;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5316455696202532;
        result[3] += 0.40506329113924056;
        result[4] += 0;
        result[5] += 0.06329113924050635;
      } else {
        result[0] += 0.018094089264173704;
        result[1] += 0;
        result[2] += 0.9143546441495778;
        result[3] += 0.05307599517490953;
        result[4] += 0;
        result[5] += 0.014475271411338963;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004081632653061225;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9673469387755103;
        result[5] += 0.02857142857142857;
      } else {
        result[0] += 0.03745019920318725;
        result[1] += 0.009561752988047808;
        result[2] += 0.005577689243027889;
        result[3] += 0.15298804780876493;
        result[4] += 0.04860557768924303;
        result[5] += 0.7458167330677291;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005917159763313609;
        result[1] += 0.8560157790927022;
        result[2] += 0;
        result[3] += 0.005917159763313609;
        result[4] += 0.1282051282051282;
        result[5] += 0.0039447731755424065;
      } else {
        result[0] += 0.6839253461770017;
        result[1] += 0.03853100541842263;
        result[2] += 0.04274533413606261;
        result[3] += 0.09692956050571942;
        result[4] += 0.08368452739313666;
        result[5] += 0.05418422636965682;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        result[0] += 0.01694915254237288;
        result[1] += 0.03389830508474576;
        result[2] += 0.2627118644067797;
        result[3] += 0.2796610169491525;
        result[4] += 0.06779661016949153;
        result[5] += 0.3389830508474576;
      } else {
        result[0] += 0;
        result[1] += 0.05434782608695652;
        result[2] += 0.717391304347826;
        result[3] += 0.13043478260869565;
        result[4] += 0;
        result[5] += 0.09782608695652174;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.015822784810126583;
        result[1] += 0;
        result[2] += 0.7753164556962026;
        result[3] += 0.18670886075949367;
        result[4] += 0;
        result[5] += 0.022151898734177215;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9636075949367089;
        result[3] += 0.030063291139240507;
        result[4] += 0;
        result[5] += 0.006329113924050633;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004545454545454545;
        result[1] += 0.013636363636363636;
        result[2] += 0.01818181818181818;
        result[3] += 0;
        result[4] += 0.9409090909090909;
        result[5] += 0.022727272727272728;
      } else {
        result[0] += 0.03353396388650043;
        result[1] += 0.012037833190025795;
        result[2] += 0.0025795356835769563;
        result[3] += 0.13413585554600171;
        result[4] += 0.055030094582975066;
        result[5] += 0.7626827171109201;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9644351464435147;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03556485355648536;
        result[5] += 0;
      } else {
        result[0] += 0.6116965226554267;
        result[1] += 0.02528977871443625;
        result[2] += 0.06743940990516333;
        result[3] += 0.0874604847207587;
        result[4] += 0.10590094836670179;
        result[5] += 0.10221285563751317;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.075;
        result[3] += 0;
        result[4] += 0.375;
        result[5] += 0.55;
      } else {
        result[0] += 0.013888888888888888;
        result[1] += 0.09027777777777778;
        result[2] += 0.2916666666666667;
        result[3] += 0.3472222222222222;
        result[4] += 0.013888888888888888;
        result[5] += 0.24305555555555555;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.023255813953488372;
        result[1] += 0;
        result[2] += 0.6511627906976745;
        result[3] += 0.32558139534883723;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.007142857142857143;
        result[1] += 0;
        result[2] += 0.930952380952381;
        result[3] += 0.058333333333333334;
        result[4] += 0;
        result[5] += 0.0035714285714285713;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.09941520467836257;
        result[1] += 0.011695906432748537;
        result[2] += 0.017543859649122806;
        result[3] += 0;
        result[4] += 0.695906432748538;
        result[5] += 0.17543859649122806;
      } else {
        result[0] += 0;
        result[1] += 0.009683098591549295;
        result[2] += 0.00528169014084507;
        result[3] += 0.15580985915492956;
        result[4] += 0.03873239436619718;
        result[5] += 0.7904929577464789;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9302788844621513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0697211155378486;
        result[5] += 0;
      } else {
        result[0] += 0.6323042998897465;
        result[1] += 0.025909592061742006;
        result[2] += 0.04520396912899669;
        result[3] += 0.09095920617420065;
        result[4] += 0.10970231532524807;
        result[5] += 0.09592061742006615;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1272727272727273;
        result[3] += 0.5818181818181819;
        result[4] += 0.018181818181818184;
        result[5] += 0.27272727272727276;
      } else {
        result[0] += 0.09090909090909091;
        result[1] += 0;
        result[2] += 0.7575757575757576;
        result[3] += 0.09090909090909091;
        result[4] += 0;
        result[5] += 0.06060606060606061;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6936936936936937;
        result[3] += 0.2882882882882883;
        result[4] += 0;
        result[5] += 0.018018018018018018;
      } else {
        result[0] += 0.012004801920768308;
        result[1] += 0;
        result[2] += 0.9255702280912365;
        result[3] += 0.058823529411764705;
        result[4] += 0;
        result[5] += 0.003601440576230492;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  
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
