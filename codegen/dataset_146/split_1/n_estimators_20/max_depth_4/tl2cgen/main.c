
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0.007220216606498195;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0036101083032490976;
          result[4] += 0.9169675090252708;
          result[5] += 0.07220216606498195;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.13333333333333333;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0014084507042253522;
          result[1] += 0;
          result[2] += 0.0014084507042253522;
          result[3] += 0.022535211267605635;
          result[4] += 0.02676056338028169;
          result[5] += 0.9478873239436619;
        } else {
          result[0] += 0.11926605504587157;
          result[1] += 0.035168195718654434;
          result[2] += 0.03211009174311927;
          result[3] += 0.3256880733944954;
          result[4] += 0.06880733944954129;
          result[5] += 0.41896024464831805;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)50.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8059701492537313;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19402985074626866;
          result[5] += 0;
        } else {
          result[0] += 0.012437810945273632;
          result[1] += 0.9676616915422885;
          result[2] += 0.0024875621890547263;
          result[3] += 0;
          result[4] += 0.017412935323383085;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.08898305084745764;
          result[1] += 0.32627118644067804;
          result[2] += 0;
          result[3] += 0.025423728813559327;
          result[4] += 0.516949152542373;
          result[5] += 0.04237288135593221;
        } else {
          result[0] += 0.6868613138686132;
          result[1] += 0.006569343065693431;
          result[2] += 0.08029197080291971;
          result[3] += 0.09927007299270073;
          result[4] += 0.061313868613138686;
          result[5] += 0.06569343065693431;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0.8055555555555556;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20689655172413793;
          result[5] += 0.7931034482758621;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7358490566037736;
          result[3] += 0.11320754716981134;
          result[4] += 0;
          result[5] += 0.15094339622641512;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.359375;
          result[3] += 0.53125;
          result[4] += 0;
          result[5] += 0.109375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8105263157894737;
          result[3] += 0.14736842105263157;
          result[4] += 0;
          result[5] += 0.042105263157894736;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88) ) ) {
          result[0] += 0.26666666666666666;
          result[1] += 0.06666666666666667;
          result[2] += 0.4;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010012515644555695;
          result[1] += 0;
          result[2] += 0.951188986232791;
          result[3] += 0.03754693366708386;
          result[4] += 0;
          result[5] += 0.0012515644555694619;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
          result[0] += 0.004048582995951417;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9554655870445344;
          result[5] += 0.04048582995951417;
        } else {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.012471655328798186;
          result[1] += 0.0022675736961451248;
          result[2] += 0.0022675736961451248;
          result[3] += 0.03741496598639456;
          result[4] += 0.046485260770975055;
          result[5] += 0.8990929705215419;
        } else {
          result[0] += 0.06377551020408163;
          result[1] += 0.03316326530612245;
          result[2] += 0.015306122448979591;
          result[3] += 0.42091836734693877;
          result[4] += 0.04336734693877551;
          result[5] += 0.42346938775510207;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9333333333333333;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.004514672686230248;
          result[1] += 0.9841986455981941;
          result[2] += 0.004514672686230248;
          result[3] += 0;
          result[4] += 0.006772009029345372;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7513725490196078;
          result[1] += 0.042352941176470586;
          result[2] += 0.001568627450980392;
          result[3] += 0.012549019607843137;
          result[4] += 0.14588235294117646;
          result[5] += 0.04627450980392157;
        } else {
          result[0] += 0.2306034482758621;
          result[1] += 0.04741379310344828;
          result[2] += 0.1831896551724138;
          result[3] += 0.2629310344827587;
          result[4] += 0.04741379310344828;
          result[5] += 0.228448275862069;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05970149253731344;
          result[3] += 0.7611940298507464;
          result[4] += 0;
          result[5] += 0.17910447761194032;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36;
          result[3] += 0.48;
          result[4] += 0;
          result[5] += 0.16;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0;
          result[2] += 0.8648648648648649;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2777777777777778;
          result[3] += 0.6111111111111112;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.7837837837837838;
          result[3] += 0.08108108108108109;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013605442176870748;
          result[1] += 0;
          result[2] += 0.9421768707482994;
          result[3] += 0.034013605442176874;
          result[4] += 0;
          result[5] += 0.01020408163265306;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0.01282051282051282;
          result[1] += 0.01282051282051282;
          result[2] += 0;
          result[3] += 0.004273504273504274;
          result[4] += 0.9316239316239316;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.05454545454545454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2909090909090909;
          result[5] += 0.6545454545454545;
        } else {
          result[0] += 0.76;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.13333333333333333;
          result[5] += 0.04;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.59375;
          result[5] += 0.34375;
        } else {
          result[0] += 0.003036437246963563;
          result[1] += 0.005060728744939271;
          result[2] += 0.00708502024291498;
          result[3] += 0.0931174089068826;
          result[4] += 0.05161943319838057;
          result[5] += 0.840080971659919;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.03333333333333333;
          result[4] += 0.03333333333333333;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01904761904761905;
          result[3] += 0.7857142857142857;
          result[4] += 0;
          result[5] += 0.19523809523809524;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9975786924939467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002421307506053269;
          result[5] += 0;
        } else {
          result[0] += 0.02112676056338028;
          result[1] += 0.2605633802816901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7183098591549296;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8941176470588236;
          result[1] += 0.009954751131221719;
          result[2] += 0.0009049773755656109;
          result[3] += 0.011764705882352941;
          result[4] += 0.058823529411764705;
          result[5] += 0.024434389140271493;
        } else {
          result[0] += 0.386046511627907;
          result[1] += 0.03255813953488372;
          result[2] += 0.12558139534883722;
          result[3] += 0.24186046511627907;
          result[4] += 0.013953488372093023;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20080321285140562;
          result[3] += 0.37751004016064255;
          result[4] += 0.04819277108433735;
          result[5] += 0.37349397590361444;
        } else {
          result[0] += 0;
          result[1] += 0.85;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0;
          result[2] += 0.7655502392344498;
          result[3] += 0.215311004784689;
          result[4] += 0;
          result[5] += 0.014354066985645933;
        } else {
          result[0] += 0.023631840796019904;
          result[1] += 0;
          result[2] += 0.9353233830845772;
          result[3] += 0.03606965174129354;
          result[4] += 0;
          result[5] += 0.0049751243781094535;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.026041666666666668;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9739583333333334;
          result[5] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.06818181818181818;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.4090909090909091;
          result[5] += 0.38636363636363635;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04019607843137255;
          result[1] += 0.008823529411764706;
          result[2] += 0;
          result[3] += 0.041176470588235294;
          result[4] += 0.061764705882352944;
          result[5] += 0.8480392156862745;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5778688524590164;
          result[4] += 0.04918032786885246;
          result[5] += 0.3729508196721312;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0.022598870056497175;
          result[1] += 0.2598870056497175;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6949152542372882;
          result[5] += 0.022598870056497175;
        } else {
          result[0] += 0;
          result[1] += 0.9887640449438202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011235955056179775;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8263422818791947;
          result[1] += 0.024328859060402684;
          result[2] += 0;
          result[3] += 0.02181208053691275;
          result[4] += 0.09815436241610738;
          result[5] += 0.02936241610738255;
        } else {
          result[0] += 0.12588652482269502;
          result[1] += 0.008865248226950355;
          result[2] += 0.3102836879432624;
          result[3] += 0.31560283687943264;
          result[4] += 0.02127659574468085;
          result[5] += 0.21808510638297873;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32558139534883723;
          result[3] += 0.5581395348837209;
          result[4] += 0;
          result[5] += 0.11627906976744186;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.024390243902439025;
          result[2] += 0.8170731707317073;
          result[3] += 0.04878048780487805;
          result[4] += 0;
          result[5] += 0.08536585365853659;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004608294930875576;
          result[1] += 0;
          result[2] += 0.8663594470046083;
          result[3] += 0.11981566820276497;
          result[4] += 0;
          result[5] += 0.009216589861751152;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9299363057324841;
          result[3] += 0.05732484076433121;
          result[4] += 0;
          result[5] += 0.012738853503184714;
        } else {
          result[0] += 0.002314814814814815;
          result[1] += 0;
          result[2] += 0.9953703703703705;
          result[3] += 0.002314814814814815;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00423728813559322;
          result[1] += 0.07627118644067797;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9110169491525424;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0.37815126050420167;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2605042016806723;
          result[5] += 0.36134453781512604;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0036809815950920245;
          result[1] += 0.0036809815950920245;
          result[2] += 0.013496932515337423;
          result[3] += 0.04539877300613497;
          result[4] += 0.053987730061349694;
          result[5] += 0.8797546012269939;
        } else {
          result[0] += 0.00821917808219178;
          result[1] += 0.021917808219178082;
          result[2] += 0;
          result[3] += 0.4712328767123288;
          result[4] += 0.06575342465753424;
          result[5] += 0.4328767123287671;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0.05714285714285714;
          result[2] += 0.002197802197802198;
          result[3] += 0.01098901098901099;
          result[4] += 0.12893772893772895;
          result[5] += 0.0315018315018315;
        } else {
          result[0] += 0.18276762402088775;
          result[1] += 0.023498694516971282;
          result[2] += 0.18798955613577026;
          result[3] += 0.3002610966057442;
          result[4] += 0.02088772845953003;
          result[5] += 0.28459530026109664;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.6538461538461539;
        } else {
          result[0] += 0.02531645569620253;
          result[1] += 0;
          result[2] += 0.2911392405063291;
          result[3] += 0.620253164556962;
          result[4] += 0;
          result[5] += 0.06329113924050633;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8759124087591241;
          result[3] += 0.08759124087591241;
          result[4] += 0;
          result[5] += 0.0364963503649635;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0.5769230769230769;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          result[0] += 0.47619047619047616;
          result[1] += 0;
          result[2] += 0.47619047619047616;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        } else {
          result[0] += 0.003978779840848806;
          result[1] += 0;
          result[2] += 0.9615384615384616;
          result[3] += 0.03183023872679045;
          result[4] += 0;
          result[5] += 0.002652519893899204;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
          result[0] += 0.00625;
          result[1] += 0.003125;
          result[2] += 0;
          result[3] += 0.003125;
          result[4] += 0.95625;
          result[5] += 0.03125;
        } else {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          result[0] += 0.7931034482758621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20689655172413793;
          result[5] += 0;
        } else {
          result[0] += 0.007063572149344097;
          result[1] += 0;
          result[2] += 0.014127144298688193;
          result[3] += 0.08779011099899092;
          result[4] += 0.06760847628657922;
          result[5] += 0.8234106962663976;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9411764705882353;
          result[5] += 0;
        } else {
          result[0] += 0.0045045045045045045;
          result[1] += 0.9752252252252253;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02027027027027027;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7820710973724884;
          result[1] += 0.03323029366306028;
          result[2] += 0.0007727975270479134;
          result[3] += 0.030139103554868624;
          result[4] += 0.07727975270479134;
          result[5] += 0.07650695517774343;
        } else {
          result[0] += 0.10064935064935066;
          result[1] += 0.0016233766233766235;
          result[2] += 0.2012987012987013;
          result[3] += 0.4237012987012987;
          result[4] += 0.03409090909090909;
          result[5] += 0.23863636363636365;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.2222222222222222;
          result[4] += 0.022222222222222223;
          result[5] += 0.6222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0.08536585365853659;
          result[2] += 0.2682926829268293;
          result[3] += 0.524390243902439;
          result[4] += 0;
          result[5] += 0.12195121951219512;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.12;
          result[1] += 0;
          result[2] += 0.72;
          result[3] += 0;
          result[4] += 0.04;
          result[5] += 0.12;
        } else {
          result[0] += 0.5263157894736843;
          result[1] += 0;
          result[2] += 0.44736842105263164;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.026315789473684213;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6455696202531646;
          result[3] += 0.31645569620253167;
          result[4] += 0;
          result[5] += 0.0379746835443038;
        } else {
          result[0] += 0.017045454545454544;
          result[1] += 0;
          result[2] += 0.8693181818181818;
          result[3] += 0.10227272727272728;
          result[4] += 0;
          result[5] += 0.011363636363636364;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.986159169550173;
          result[3] += 0.01384083044982699;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0.02040816326530612;
          result[2] += 0;
          result[3] += 0.006802721088435374;
          result[4] += 0.8945578231292517;
          result[5] += 0.06802721088435375;
        } else {
          result[0] += 0.6893939393939394;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007575757575757576;
          result[4] += 0.12121212121212122;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0010449320794148381;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04597701149425287;
          result[4] += 0.07210031347962383;
          result[5] += 0.8808777429467085;
        } else {
          result[0] += 0.004761904761904762;
          result[1] += 0.016666666666666666;
          result[2] += 0.01904761904761905;
          result[3] += 0.5357142857142857;
          result[4] += 0.05714285714285714;
          result[5] += 0.36666666666666664;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.46875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.53125;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976303317535545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002369668246445498;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          result[0] += 0.4695652173913044;
          result[1] += 0.037681159420289864;
          result[2] += 0.11594202898550726;
          result[3] += 0.13913043478260873;
          result[4] += 0.13333333333333336;
          result[5] += 0.10434782608695653;
        } else {
          result[0] += 0.8557213930348259;
          result[1] += 0.05970149253731343;
          result[2] += 0.03855721393034826;
          result[3] += 0.0012437810945273632;
          result[4] += 0.04228855721393035;
          result[5] += 0.0024875621890547263;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19148936170212766;
          result[3] += 0.3191489361702128;
          result[4] += 0.07446808510638298;
          result[5] += 0.4148936170212766;
        } else {
          result[0] += 0.02727272727272727;
          result[1] += 0.04090909090909091;
          result[2] += 0.6909090909090909;
          result[3] += 0.18636363636363637;
          result[4] += 0;
          result[5] += 0.05454545454545454;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.025477707006369428;
          result[1] += 0;
          result[2] += 0.9235668789808917;
          result[3] += 0.050955414012738856;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.967741935483871;
          result[3] += 0.03225806451612903;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
          result[0] += 0.0036363636363636364;
          result[1] += 0.007272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9527272727272728;
          result[5] += 0.03636363636363636;
        } else {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03111111111111111;
          result[4] += 0.04;
          result[5] += 0.9288888888888889;
        } else {
          result[0] += 0.10324483775811209;
          result[1] += 0;
          result[2] += 0.035398230088495575;
          result[3] += 0.30383480825958703;
          result[4] += 0.0943952802359882;
          result[5] += 0.4631268436578171;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.13725490196078433;
          result[2] += 0.0392156862745098;
          result[3] += 0.1568627450980392;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9507494646680942;
          result[2] += 0;
          result[3] += 0.0021413276231263384;
          result[4] += 0.02569593147751606;
          result[5] += 0.021413276231263382;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8305676855895197;
          result[1] += 0.013100436681222707;
          result[2] += 0;
          result[3] += 0.016593886462882096;
          result[4] += 0.11004366812227075;
          result[5] += 0.029694323144104803;
        } else {
          result[0] += 0.21649484536082475;
          result[1] += 0.03350515463917526;
          result[2] += 0.27319587628865977;
          result[3] += 0.23711340206185566;
          result[4] += 0.05670103092783505;
          result[5] += 0.18298969072164947;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11392405063291139;
          result[3] += 0.25316455696202533;
          result[4] += 0.012658227848101266;
          result[5] += 0.620253164556962;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          result[0] += 0.03361344537815126;
          result[1] += 0.025210084033613446;
          result[2] += 0.5966386554621849;
          result[3] += 0.2689075630252101;
          result[4] += 0.01680672268907563;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.8846153846153846;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0.006535947712418301;
          result[1] += 0.0196078431372549;
          result[2] += 0.7908496732026143;
          result[3] += 0.1503267973856209;
          result[4] += 0;
          result[5] += 0.032679738562091505;
        } else {
          result[0] += 0.0014347202295552368;
          result[1] += 0;
          result[2] += 0.9612625538020086;
          result[3] += 0.03299856527977044;
          result[4] += 0;
          result[5] += 0.00430416068866571;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)116.5) ) ) {
          result[0] += 0;
          result[1] += 0.02197802197802198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9523809523809523;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013245033112582781;
          result[2] += 0.009271523178807948;
          result[3] += 0.02384105960264901;
          result[4] += 0.045033112582781455;
          result[5] += 0.9205298013245033;
        } else {
          result[0] += 0.09811320754716982;
          result[1] += 0.013207547169811321;
          result[2] += 0.026415094339622643;
          result[3] += 0.35094339622641507;
          result[4] += 0.10943396226415095;
          result[5] += 0.4018867924528302;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6875;
          result[5] += 0;
        } else {
          result[0] += 0.0022935779816513763;
          result[1] += 0.9977064220183486;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7855421686746986;
          result[1] += 0.03694779116465863;
          result[2] += 0.007228915662650601;
          result[3] += 0.025702811244979914;
          result[4] += 0.11405622489959837;
          result[5] += 0.03052208835341365;
        } else {
          result[0] += 0.1953125;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.3125;
          result[4] += 0.10546875;
          result[5] += 0.19921875;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011627906976744186;
          result[3] += 0.12790697674418605;
          result[4] += 0.023255813953488372;
          result[5] += 0.8372093023255814;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.02127659574468085;
          result[2] += 0.20212765957446807;
          result[3] += 0.7021276595744681;
          result[4] += 0;
          result[5] += 0.07446808510638298;
        } else {
          result[0] += 0.04201680672268908;
          result[1] += 0.09243697478991597;
          result[2] += 0.46218487394957986;
          result[3] += 0.14285714285714285;
          result[4] += 0.058823529411764705;
          result[5] += 0.20168067226890757;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0.38095238095238093;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7333333333333333;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7864077669902912;
          result[3] += 0.18446601941747573;
          result[4] += 0;
          result[5] += 0.02912621359223301;
        } else {
          result[0] += 0.003937007874015748;
          result[1] += 0;
          result[2] += 0.9435695538057742;
          result[3] += 0.04199475065616798;
          result[4] += 0;
          result[5] += 0.010498687664041995;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9375;
          result[5] += 0.05416666666666667;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8533333333333334;
          result[1] += 0.02666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08;
          result[5] += 0.04;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0.07462686567164178;
          result[2] += 0.029850746268656716;
          result[3] += 0.04477611940298507;
          result[4] += 0.5373134328358209;
          result[5] += 0.2835820895522388;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0.42424242424242425;
          result[2] += 0;
          result[3] += 0.030303030303030304;
          result[4] += 0.36363636363636365;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.009489916963226572;
          result[1] += 0.0035587188612099642;
          result[2] += 0.0011862396204033216;
          result[3] += 0.042704626334519574;
          result[4] += 0.03795966785290629;
          result[5] += 0.9051008303677343;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18947368421052632;
          result[4] += 0;
          result[5] += 0.8105263157894737;
        } else {
          result[0] += 0.01483679525222552;
          result[1] += 0.011869436201780416;
          result[2] += 0.05934718100890208;
          result[3] += 0.5934718100890207;
          result[4] += 0.020771513353115726;
          result[5] += 0.2997032640949555;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714288;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.761904761904762;
          result[5] += 0.09523809523809525;
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
          result[1] += 0.9459459459459459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05405405405405406;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          result[0] += 0.23660714285714285;
          result[1] += 0.13839285714285715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6071428571428571;
          result[5] += 0.017857142857142856;
        } else {
          result[0] += 0.9074446680080482;
          result[1] += 0.005030181086519115;
          result[2] += 0.008048289738430584;
          result[3] += 0.03621730382293763;
          result[4] += 0.030181086519114688;
          result[5] += 0.013078470824949699;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.0325;
          result[1] += 0.04;
          result[2] += 0.2025;
          result[3] += 0.305;
          result[4] += 0.0825;
          result[5] += 0.3375;
        } else {
          result[0] += 0.039473684210526314;
          result[1] += 0;
          result[2] += 0.8928571428571429;
          result[3] += 0.05357142857142857;
          result[4] += 0;
          result[5] += 0.014097744360902255;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.008547008547008548;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9572649572649573;
          result[5] += 0.03418803418803419;
        } else {
          result[0] += 0.7941176470588235;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0.08823529411764706;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.006349206349206349;
          result[2] += 0;
          result[3] += 0.04867724867724868;
          result[4] += 0.08783068783068783;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6509433962264151;
          result[4] += 0.018867924528301886;
          result[5] += 0.330188679245283;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0.004651162790697674;
          result[1] += 0.986046511627907;
          result[2] += 0.0069767441860465115;
          result[3] += 0;
          result[4] += 0.002325581395348837;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.782051282051282;
          result[1] += 0.0641025641025641;
          result[2] += 0.0017094017094017094;
          result[3] += 0.023931623931623933;
          result[4] += 0.12051282051282051;
          result[5] += 0.007692307692307693;
        } else {
          result[0] += 0.18374558303886926;
          result[1] += 0.0035335689045936395;
          result[2] += 0.18021201413427562;
          result[3] += 0.2226148409893993;
          result[4] += 0.09540636042402827;
          result[5] += 0.31448763250883394;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.009174311926605505;
          result[1] += 0.1559633027522936;
          result[2] += 0.03669724770642202;
          result[3] += 0.07339449541284404;
          result[4] += 0.1834862385321101;
          result[5] += 0.5412844036697247;
        } else {
          result[0] += 0.007194244604316547;
          result[1] += 0.014388489208633094;
          result[2] += 0.014388489208633094;
          result[3] += 0.7553956834532374;
          result[4] += 0;
          result[5] += 0.20863309352517986;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0.031746031746031744;
          result[1] += 0;
          result[2] += 0.3412698412698413;
          result[3] += 0.48412698412698413;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.1836734693877551;
          result[1] += 0;
          result[2] += 0.6836734693877551;
          result[3] += 0.10204081632653061;
          result[4] += 0.02040816326530612;
          result[5] += 0.01020408163265306;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2692307692307692;
          result[3] += 0.19230769230769232;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0.03571428571428572;
          result[1] += 0;
          result[2] += 0.7857142857142858;
          result[3] += 0.10714285714285715;
          result[4] += 0;
          result[5] += 0.07142857142857144;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8421052631578947;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        } else {
          result[0] += 0.005482456140350877;
          result[1] += 0;
          result[2] += 0.9298245614035088;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.0021929824561403508;
        }
      }
    }
  }
  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          result[0] += 0.03070175438596491;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9429824561403509;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.4393939393939394;
          result[1] += 0.10606060606060606;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4090909090909091;
          result[5] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.9333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.05;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.675;
          result[5] += 0.275;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0.7307692307692307;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.19230769230769232;
          result[5] += 0;
        } else {
          result[0] += 0.0010706638115631692;
          result[1] += 0.008565310492505354;
          result[2] += 0.019271948608137045;
          result[3] += 0.08458244111349036;
          result[4] += 0.033190578158458245;
          result[5] += 0.8533190578158458;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.7116279069767442;
          result[4] += 0;
          result[5] += 0.2651162790697674;
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.04032258064516129;
          result[1] += 0.20967741935483872;
          result[2] += 0;
          result[3] += 0.008064516129032258;
          result[4] += 0.7338709677419355;
          result[5] += 0.008064516129032258;
        } else {
          result[0] += 0;
          result[1] += 0.9812332439678284;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01876675603217158;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0.21105527638190955;
          result[1] += 0.010050251256281407;
          result[2] += 0.01507537688442211;
          result[3] += 0.22110552763819097;
          result[4] += 0.11557788944723618;
          result[5] += 0.4271356783919598;
        } else {
          result[0] += 0.8078740157480315;
          result[1] += 0.029921259842519685;
          result[2] += 0.026771653543307086;
          result[3] += 0.03700787401574803;
          result[4] += 0.07874015748031496;
          result[5] += 0.01968503937007874;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.023346303501945526;
          result[2] += 0.12840466926070038;
          result[3] += 0.4396887159533074;
          result[4] += 0.0622568093385214;
          result[5] += 0.3463035019455253;
        } else {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0.7341772151898734;
          result[3] += 0.05063291139240506;
          result[4] += 0.10126582278481013;
          result[5] += 0.10126582278481013;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.07419354838709677;
          result[1] += 0.00967741935483871;
          result[2] += 0.7;
          result[3] += 0.17419354838709677;
          result[4] += 0;
          result[5] += 0.041935483870967745;
        } else {
          result[0] += 0.0015060240963855425;
          result[1] += 0.004518072289156627;
          result[2] += 0.9457831325301206;
          result[3] += 0.042168674698795185;
          result[4] += 0;
          result[5] += 0.00602409638554217;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.006920415224913495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9515570934256056;
          result[5] += 0.04152249134948097;
        } else {
          result[0] += 0.3829787234042553;
          result[1] += 0.0851063829787234;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22340425531914893;
          result[5] += 0.30851063829787234;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004437869822485207;
          result[3] += 0.029585798816568046;
          result[4] += 0.028106508875739646;
          result[5] += 0.9378698224852071;
        } else {
          result[0] += 0;
          result[1] += 0.02335456475583864;
          result[2] += 0.036093418259023353;
          result[3] += 0.3503184713375796;
          result[4] += 0.06794055201698514;
          result[5] += 0.5222929936305732;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.23333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.0022988505747126436;
          result[1] += 0.993103448275862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004597701149425287;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7719167904903418;
          result[1] += 0.03789004457652303;
          result[2] += 0.011144130757800892;
          result[3] += 0.030460624071322436;
          result[4] += 0.13224368499257058;
          result[5] += 0.01634472511144131;
        } else {
          result[0] += 0.15339233038348082;
          result[1] += 0.017699115044247787;
          result[2] += 0.18289085545722714;
          result[3] += 0.30383480825958703;
          result[4] += 0.0855457227138643;
          result[5] += 0.25663716814159293;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0.05128205128205128;
          result[2] += 0.01282051282051282;
          result[3] += 0.15384615384615385;
          result[4] += 0.038461538461538464;
          result[5] += 0.7435897435897436;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0.008849557522123895;
          result[1] += 0.01769911504424779;
          result[2] += 0.24778761061946905;
          result[3] += 0.6106194690265487;
          result[4] += 0;
          result[5] += 0.11504424778761063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7101449275362319;
          result[3] += 0.2318840579710145;
          result[4] += 0;
          result[5] += 0.057971014492753624;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.38095238095238093;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7391304347826088;
          result[3] += 0.2173913043478261;
          result[4] += 0;
          result[5] += 0.04347826086956522;
        } else {
          result[0] += 0.006640106241699867;
          result[1] += 0;
          result[2] += 0.949535192563081;
          result[3] += 0.033200531208499334;
          result[4] += 0;
          result[5] += 0.010624169986719787;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
          result[0] += 0;
          result[1] += 0.02214022140221402;
          result[2] += 0;
          result[3] += 0.0036900369003690036;
          result[4] += 0.9372693726937269;
          result[5] += 0.03690036900369004;
        } else {
          result[0] += 0;
          result[1] += 0.78125;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0.03125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022972972972972974;
          result[4] += 0.032432432432432434;
          result[5] += 0.9445945945945946;
        } else {
          result[0] += 0.08285163776493257;
          result[1] += 0;
          result[2] += 0.005780346820809248;
          result[3] += 0.35452793834296725;
          result[4] += 0.12716763005780346;
          result[5] += 0.4296724470134875;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.30434782608695654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6956521739130435;
          result[5] += 0;
        } else {
          result[0] += 0.005194805194805195;
          result[1] += 0.9922077922077922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025974025974025974;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7549923195084486;
          result[1] += 0.03302611367127496;
          result[2] += 0.014592933947772658;
          result[3] += 0.0314900153609831;
          result[4] += 0.10138248847926268;
          result[5] += 0.06451612903225806;
        } else {
          result[0] += 0.14390243902439023;
          result[1] += 0.046341463414634146;
          result[2] += 0.28780487804878047;
          result[3] += 0.24390243902439024;
          result[4] += 0.04878048780487805;
          result[5] += 0.22926829268292684;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
          result[0] += 0.07407407407407407;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.48148148148148145;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21348314606741572;
          result[3] += 0.6292134831460674;
          result[4] += 0;
          result[5] += 0.15730337078651685;
        } else {
          result[0] += 0.016393442622950824;
          result[1] += 0;
          result[2] += 0.7540983606557378;
          result[3] += 0.1639344262295082;
          result[4] += 0;
          result[5] += 0.0655737704918033;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.10810810810810811;
          result[2] += 0.13513513513513514;
          result[3] += 0.2702702702702703;
          result[4] += 0;
          result[5] += 0.4864864864864865;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0041666666666666675;
          result[1] += 0.006250000000000001;
          result[2] += 0.8520833333333334;
          result[3] += 0.12500000000000003;
          result[4] += 0.006250000000000001;
          result[5] += 0.006250000000000001;
        } else {
          result[0] += 0.01937046004842615;
          result[1] += 0.002421307506053269;
          result[2] += 0.9709443099273608;
          result[3] += 0.007263922518159807;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.008583690987124463;
          result[1] += 0.004291845493562232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9785407725321889;
          result[5] += 0.008583690987124463;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3028169014084507;
          result[5] += 0.19718309859154928;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.003393665158371041;
          result[2] += 0;
          result[3] += 0.06108597285067873;
          result[4] += 0.05203619909502263;
          result[5] += 0.8834841628959276;
        } else {
          result[0] += 0;
          result[1] += 0.016317016317016316;
          result[2] += 0.006993006993006993;
          result[3] += 0.4522144522144522;
          result[4] += 0.06526806526806526;
          result[5] += 0.4592074592074592;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2222222222222222;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0.002331002331002331;
          result[1] += 0.9883449883449883;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009324009324009324;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)111.5) ) ) {
          result[0] += 0.4595070422535211;
          result[1] += 0.07746478873239436;
          result[2] += 0.10651408450704225;
          result[3] += 0.125;
          result[4] += 0.1522887323943662;
          result[5] += 0.07922535211267606;
        } else {
          result[0] += 0.9294990723562152;
          result[1] += 0;
          result[2] += 0.03896103896103896;
          result[3] += 0;
          result[4] += 0.025974025974025976;
          result[5] += 0.0055658627087198514;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0.9696969696969697;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.05813953488372093;
          result[2] += 0.23255813953488372;
          result[3] += 0.4883720930232558;
          result[4] += 0.05813953488372093;
          result[5] += 0.16279069767441862;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.5952380952380952;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.2619047619047619;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.65625;
          result[3] += 0.1875;
          result[4] += 0.03125;
          result[5] += 0.0625;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          result[0] += 0.00425531914893617;
          result[1] += 0;
          result[2] += 0.9042553191489362;
          result[3] += 0.08936170212765958;
          result[4] += 0;
          result[5] += 0.002127659574468085;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9943019943019943;
          result[3] += 0.005698005698005698;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.0106951871657754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9786096256684492;
          result[5] += 0.0106951871657754;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0.10256410256410256;
          result[2] += 0;
          result[3] += 0.23076923076923078;
          result[4] += 0.15384615384615385;
          result[5] += 0.48717948717948717;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02014846235418876;
          result[1] += 0.003181336161187699;
          result[2] += 0.0021208907741251328;
          result[3] += 0.03499469777306469;
          result[4] += 0.07635206786850478;
          result[5] += 0.8632025450689289;
        } else {
          result[0] += 0.02403846153846154;
          result[1] += 0;
          result[2] += 0.014423076923076924;
          result[3] += 0.4567307692307692;
          result[4] += 0.02403846153846154;
          result[5] += 0.4807692307692308;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.4722222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5277777777777778;
          result[5] += 0;
        } else {
          result[0] += 0.004484304932735426;
          result[1] += 0.9955156950672646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7246904588492352;
          result[1] += 0.04661325564457393;
          result[2] += 0.005826656955571741;
          result[3] += 0.03860160233066278;
          result[4] += 0.15003641660597233;
          result[5] += 0.03423160961398398;
        } else {
          result[0] += 0.1393596986817326;
          result[1] += 0.009416195856873822;
          result[2] += 0.2297551789077213;
          result[3] += 0.3050847457627119;
          result[4] += 0.1167608286252354;
          result[5] += 0.19962335216572505;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.09615384615384616;
          result[1] += 0.038461538461538464;
          result[2] += 0.057692307692307696;
          result[3] += 0.057692307692307696;
          result[4] += 0.15384615384615385;
          result[5] += 0.5961538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.725;
          result[4] += 0;
          result[5] += 0.225;
        } else {
          result[0] += 0;
          result[1] += 0.014925373134328358;
          result[2] += 0.5373134328358209;
          result[3] += 0.34328358208955223;
          result[4] += 0;
          result[5] += 0.1044776119402985;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.8061538461538461;
          result[3] += 0.1476923076923077;
          result[4] += 0;
          result[5] += 0.015384615384615385;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7333333333333333;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9800362976406534;
          result[3] += 0.019963702359346643;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.03985507246376812;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9456521739130436;
          result[5] += 0.014492753623188408;
        } else {
          result[0] += 0.5592105263157896;
          result[1] += 0.006578947368421053;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1973684210526316;
          result[5] += 0.2368421052631579;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019169329073482427;
          result[4] += 0.022364217252396165;
          result[5] += 0.9584664536741214;
        } else {
          result[0] += 0.018255578093306288;
          result[1] += 0.030425963488843813;
          result[2] += 0.02434077079107505;
          result[3] += 0.22515212981744423;
          result[4] += 0.11561866125760649;
          result[5] += 0.5862068965517241;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.25806451612903225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7419354838709677;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978768577494692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021231422505307855;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7811725846407928;
          result[1] += 0.03137902559867878;
          result[2] += 0.0016515276630883566;
          result[3] += 0.02972749793559042;
          result[4] += 0.10404624277456648;
          result[5] += 0.05202312138728324;
        } else {
          result[0] += 0.1693227091633466;
          result[1] += 0.013944223107569721;
          result[2] += 0.22111553784860558;
          result[3] += 0.3745019920318725;
          result[4] += 0.025896414342629483;
          result[5] += 0.1952191235059761;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.8235294117647058;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11111111111111113;
          result[3] += 0.814814814814815;
          result[4] += 0.03703703703703704;
          result[5] += 0.03703703703703704;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.041666666666666664;
          result[4] += 0.25;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.06593406593406594;
          result[1] += 0.02197802197802198;
          result[2] += 0.6593406593406593;
          result[3] += 0.1978021978021978;
          result[4] += 0.02197802197802198;
          result[5] += 0.03296703296703297;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4090909090909091;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8362573099415205;
          result[3] += 0.08771929824561403;
          result[4] += 0.011695906432748537;
          result[5] += 0.06432748538011696;
        } else {
          result[0] += 0.003076923076923077;
          result[1] += 0;
          result[2] += 0.9661538461538461;
          result[3] += 0.03076923076923077;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.0078125;
          result[1] += 0.03515625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9140625;
          result[5] += 0.04296875;
        } else {
          result[0] += 0.4854368932038835;
          result[1] += 0.07766990291262135;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22330097087378642;
          result[5] += 0.21359223300970873;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0010471204188481676;
          result[1] += 0.007329842931937173;
          result[2] += 0;
          result[3] += 0.06492146596858639;
          result[4] += 0.08586387434554973;
          result[5] += 0.8408376963350785;
        } else {
          result[0] += 0.021929824561403508;
          result[1] += 0;
          result[2] += 0.008771929824561403;
          result[3] += 0.6228070175438597;
          result[4] += 0.0043859649122807015;
          result[5] += 0.34210526315789475;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7547021943573667;
          result[1] += 0.06347962382445141;
          result[2] += 0.0023510971786833857;
          result[3] += 0.01567398119122257;
          result[4] += 0.13401253918495298;
          result[5] += 0.029780564263322883;
        } else {
          result[0] += 0.18658280922431866;
          result[1] += 0.023060796645702306;
          result[2] += 0.23060796645702306;
          result[3] += 0.2431865828092243;
          result[4] += 0.039832285115303984;
          result[5] += 0.27672955974842767;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.989159891598916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01084010840108401;
          result[5] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
          result[0] += 0.05660377358490566;
          result[1] += 0.1320754716981132;
          result[2] += 0.09433962264150944;
          result[3] += 0;
          result[4] += 0.20754716981132076;
          result[5] += 0.5094339622641509;
        } else {
          result[0] += 0.03896103896103896;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)115) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.825;
          result[3] += 0.05;
          result[4] += 0.05;
          result[5] += 0.075;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4857142857142857;
          result[3] += 0.4857142857142857;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.797979797979798;
          result[3] += 0.20202020202020202;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0.24;
          result[4] += 0;
          result[5] += 0.02;
        } else {
          result[0] += 0.0025477707006369425;
          result[1] += 0;
          result[2] += 0.9579617834394905;
          result[3] += 0.03694267515923567;
          result[4] += 0;
          result[5] += 0.0025477707006369425;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.004694835680751174;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953051643192489;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.045454545454545456;
          result[2] += 0;
          result[3] += 0.13636363636363635;
          result[4] += 0.3181818181818182;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.035538005923000986;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05824284304047384;
          result[4] += 0.09279368213228036;
          result[5] += 0.8134254689042448;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0.023809523809523808;
          result[2] += 0;
          result[3] += 0.5158730158730159;
          result[4] += 0.04365079365079365;
          result[5] += 0.38095238095238093;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004454342984409799;
          result[1] += 0.9910913140311804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004454342984409799;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7415316642120766;
          result[1] += 0.03460972017673049;
          result[2] += 0.0014727540500736377;
          result[3] += 0.03313696612665685;
          result[4] += 0.15095729013254786;
          result[5] += 0.03829160530191458;
        } else {
          result[0] += 0.17;
          result[1] += 0.0175;
          result[2] += 0.295;
          result[3] += 0.28;
          result[4] += 0.04;
          result[5] += 0.1975;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0.8823529411764706;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22988505747126436;
          result[3] += 0.5632183908045977;
          result[4] += 0.022988505747126436;
          result[5] += 0.1839080459770115;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.2;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.050359712230215826;
          result[1] += 0.007194244604316547;
          result[2] += 0.762589928057554;
          result[3] += 0.1510791366906475;
          result[4] += 0;
          result[5] += 0.02877697841726619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9623493975903615;
          result[3] += 0.03313253012048194;
          result[4] += 0;
          result[5] += 0.004518072289156627;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9947368421052631;
          result[5] += 0.005263157894736842;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.9166666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0.5384615384615384;
          result[5] += 0.15384615384615385;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
          result[0] += 0.4020618556701031;
          result[1] += 0.061855670103092786;
          result[2] += 0;
          result[3] += 0.010309278350515464;
          result[4] += 0.3917525773195876;
          result[5] += 0.13402061855670103;
        } else {
          result[0] += 0.004008016032064128;
          result[1] += 0.001002004008016032;
          result[2] += 0;
          result[3] += 0.05511022044088176;
          result[4] += 0.06513026052104208;
          result[5] += 0.874749498997996;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.06493506493506493;
          result[1] += 0;
          result[2] += 0.03896103896103896;
          result[3] += 0.2987012987012987;
          result[4] += 0;
          result[5] += 0.5974025974025974;
        } else {
          result[0] += 0.015957446808510637;
          result[1] += 0;
          result[2] += 0.010638297872340425;
          result[3] += 0.7553191489361702;
          result[4] += 0;
          result[5] += 0.21808510638297873;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.014598540145985401;
          result[1] += 0.27007299270072993;
          result[2] += 0.014598540145985401;
          result[3] += 0.029197080291970802;
          result[4] += 0.656934306569343;
          result[5] += 0.014598540145985401;
        } else {
          result[0] += 0.0024096385542168677;
          result[1] += 0.9783132530120482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01927710843373494;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8385761589403974;
          result[1] += 0.03559602649006623;
          result[2] += 0.0008278145695364238;
          result[3] += 0.024006622516556293;
          result[4] += 0.07533112582781457;
          result[5] += 0.02566225165562914;
        } else {
          result[0] += 0.20155038759689922;
          result[1] += 0.046511627906976744;
          result[2] += 0.12790697674418605;
          result[3] += 0.20155038759689922;
          result[4] += 0.12015503875968993;
          result[5] += 0.3023255813953488;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.03763440860215054;
          result[2] += 0.1935483870967742;
          result[3] += 0.5053763440860215;
          result[4] += 0.03225806451612903;
          result[5] += 0.23118279569892472;
        } else {
          result[0] += 0;
          result[1] += 0.017241379310344827;
          result[2] += 0.7241379310344828;
          result[3] += 0.13793103448275862;
          result[4] += 0;
          result[5] += 0.1206896551724138;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
          result[0] += 0.09352517985611511;
          result[1] += 0.03597122302158273;
          result[2] += 0.5755395683453237;
          result[3] += 0.10071942446043165;
          result[4] += 0.02877697841726619;
          result[5] += 0.16546762589928057;
        } else {
          result[0] += 0.008264462809917356;
          result[1] += 0;
          result[2] += 0.935064935064935;
          result[3] += 0.05194805194805195;
          result[4] += 0;
          result[5] += 0.004722550177095631;
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
