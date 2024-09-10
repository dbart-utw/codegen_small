
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.011194029850746268;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9701492537313433;
          result[5] += 0.018656716417910446;
        } else {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010498687664041995;
          result[3] += 0.03674540682414698;
          result[4] += 0.02230971128608924;
          result[5] += 0.9304461942257218;
        } else {
          result[0] += 0.09612141652613827;
          result[1] += 0.01854974704890388;
          result[2] += 0.011804384485666104;
          result[3] += 0.33220910623946037;
          result[4] += 0.12141652613827993;
          result[5] += 0.41989881956155145;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
          result[0] += 0.00641025641025641;
          result[1] += 0.40384615384615385;
          result[2] += 0.01282051282051282;
          result[3] += 0.038461538461538464;
          result[4] += 0.4935897435897436;
          result[5] += 0.04487179487179487;
        } else {
          result[0] += 0;
          result[1] += 0.9976019184652278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002398081534772182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8347895154884829;
          result[1] += 0.030976965845909452;
          result[2] += 0.006354249404289118;
          result[3] += 0.020651310563939634;
          result[4] += 0.050833995234312944;
          result[5] += 0.056393963463065924;
        } else {
          result[0] += 0.1861198738170347;
          result[1] += 0.00946372239747634;
          result[2] += 0.21766561514195584;
          result[3] += 0.2807570977917981;
          result[4] += 0.050473186119873815;
          result[5] += 0.2555205047318612;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0.125;
          result[5] += 0.6875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15714285714285714;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4117647058823529;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0.23529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8166666666666667;
          result[3] += 0.18333333333333332;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8633093525179856;
          result[3] += 0.12589928057553956;
          result[4] += 0;
          result[5] += 0.01079136690647482;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.0019455252918287938;
          result[1] += 0;
          result[2] += 0.9863813229571985;
          result[3] += 0.009727626459143969;
          result[4] += 0;
          result[5] += 0.0019455252918287938;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0.007722007722007722;
          result[1] += 0;
          result[2] += 0.003861003861003861;
          result[3] += 0;
          result[4] += 0.9227799227799228;
          result[5] += 0.06563706563706563;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0.01405152224824356;
          result[1] += 0.01405152224824356;
          result[2] += 0.00234192037470726;
          result[3] += 0.04332552693208431;
          result[4] += 0.04566744730679157;
          result[5] += 0.8805620608899297;
        } else {
          result[0] += 0.0855457227138643;
          result[1] += 0.017699115044247787;
          result[2] += 0;
          result[3] += 0.45722713864306785;
          result[4] += 0.038348082595870206;
          result[5] += 0.40117994100294985;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
          result[0] += 0.41397379912663756;
          result[1] += 0.05851528384279476;
          result[2] += 0.09781659388646288;
          result[3] += 0.13100436681222707;
          result[4] += 0.15982532751091702;
          result[5] += 0.1388646288209607;
        } else {
          result[0] += 0.9170370370370371;
          result[1] += 0.0059259259259259265;
          result[2] += 0.03407407407407408;
          result[3] += 0.0014814814814814816;
          result[4] += 0.031111111111111114;
          result[5] += 0.010370370370370372;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9904076738609113;
          result[2] += 0.004796163069544365;
          result[3] += 0.004796163069544365;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0.05555555555555555;
          result[3] += 0.08333333333333333;
          result[4] += 0.1111111111111111;
          result[5] += 0.6944444444444444;
        } else {
          result[0] += 0;
          result[1] += 0.01694915254237288;
          result[2] += 0.22033898305084745;
          result[3] += 0.559322033898305;
          result[4] += 0.01694915254237288;
          result[5] += 0.1864406779661017;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0.09375;
          result[2] += 0.28125;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.03529411764705882;
          result[1] += 0;
          result[2] += 0.7764705882352941;
          result[3] += 0.12941176470588237;
          result[4] += 0.011764705882352941;
          result[5] += 0.047058823529411764;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.8857142857142857;
          result[3] += 0.08571428571428572;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9183673469387755;
          result[3] += 0.08163265306122448;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9977426636568849;
          result[3] += 0.002257336343115124;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.006289308176100629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9685534591194969;
          result[5] += 0.025157232704402517;
        } else {
          result[0] += 0;
          result[1] += 0.19047619047619047;
          result[2] += 0;
          result[3] += 0.07936507936507936;
          result[4] += 0.30158730158730157;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.029804727646454265;
          result[1] += 0.003083247687564234;
          result[2] += 0;
          result[3] += 0.050359712230215826;
          result[4] += 0.07091469681397738;
          result[5] += 0.8458376156217883;
        } else {
          result[0] += 0.08362369337979095;
          result[1] += 0.003484320557491289;
          result[2] += 0.0313588850174216;
          result[3] += 0.4529616724738676;
          result[4] += 0.027874564459930314;
          result[5] += 0.40069686411149824;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          result[0] += 0.007352941176470589;
          result[1] += 0.3308823529411765;
          result[2] += 0;
          result[3] += 0.007352941176470589;
          result[4] += 0.6323529411764707;
          result[5] += 0.02205882352941177;
        } else {
          result[0] += 0.004694835680751175;
          result[1] += 0.983568075117371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011737089201877935;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7974397590361446;
          result[1] += 0.02108433734939759;
          result[2] += 0.006024096385542169;
          result[3] += 0.045180722891566265;
          result[4] += 0.07003012048192771;
          result[5] += 0.060240963855421686;
        } else {
          result[0] += 0.2230971128608924;
          result[1] += 0.010498687664041995;
          result[2] += 0.29133858267716534;
          result[3] += 0.2440944881889764;
          result[4] += 0.03412073490813648;
          result[5] += 0.1968503937007874;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.08450704225352113;
          result[2] += 0.028169014084507043;
          result[3] += 0.18309859154929578;
          result[4] += 0.07042253521126761;
          result[5] += 0.6338028169014085;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0;
          result[4] += 0.45454545454545453;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30434782608695654;
          result[3] += 0.6956521739130435;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0.03296703296703297;
          result[1] += 0.08791208791208792;
          result[2] += 0.4175824175824176;
          result[3] += 0.31868131868131866;
          result[4] += 0.03296703296703297;
          result[5] += 0.10989010989010989;
        } else {
          result[0] += 0.028225806451612902;
          result[1] += 0;
          result[2] += 0.8306451612903226;
          result[3] += 0.13709677419354838;
          result[4] += 0;
          result[5] += 0.004032258064516129;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
          result[0] += 0.11538461538461539;
          result[1] += 0.07692307692307693;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0.19230769230769232;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0.005050505050505051;
          result[1] += 0;
          result[2] += 0.9629629629629629;
          result[3] += 0.02861952861952862;
          result[4] += 0;
          result[5] += 0.003367003367003367;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)106.5) ) ) {
          result[0] += 0.004310344827586208;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9870689655172414;
          result[5] += 0.008620689655172415;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0.012987012987012988;
          result[1] += 0;
          result[2] += 0.0010822510822510823;
          result[3] += 0.06168831168831169;
          result[4] += 0.03463203463203463;
          result[5] += 0.8896103896103896;
        } else {
          result[0] += 0.12331838565022421;
          result[1] += 0.03139013452914798;
          result[2] += 0.002242152466367713;
          result[3] += 0.36995515695067266;
          result[4] += 0.07623318385650224;
          result[5] += 0.3968609865470852;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.2735849056603774;
          result[2] += 0.028301886792452834;
          result[3] += 0.009433962264150945;
          result[4] += 0.6415094339622642;
          result[5] += 0.04716981132075473;
        } else {
          result[0] += 0;
          result[1] += 0.9887133182844243;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011286681715575621;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8615123194562445;
          result[1] += 0.028037383177570086;
          result[2] += 0.0033984706881903136;
          result[3] += 0.013593882752761254;
          result[4] += 0.08156329651656753;
          result[5] += 0.011894647408666097;
        } else {
          result[0] += 0.27816901408450706;
          result[1] += 0.0035211267605633804;
          result[2] += 0.17253521126760563;
          result[3] += 0.24295774647887325;
          result[4] += 0.05985915492957746;
          result[5] += 0.24295774647887325;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.044198895027624314;
          result[2] += 0.17679558011049726;
          result[3] += 0.5303867403314918;
          result[4] += 0.01657458563535912;
          result[5] += 0.23204419889502764;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0.41379310344827586;
          result[3] += 0.12643678160919541;
          result[4] += 0.11494252873563218;
          result[5] += 0.3103448275862069;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)116.5) ) ) {
          result[0] += 0.012012012012012012;
          result[1] += 0;
          result[2] += 0.7537537537537538;
          result[3] += 0.2042042042042042;
          result[4] += 0;
          result[5] += 0.03003003003003003;
        } else {
          result[0] += 0.631578947368421;
          result[1] += 0;
          result[2] += 0.3684210526315789;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8295454545454546;
          result[3] += 0.14772727272727273;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0.0041841004184100415;
          result[1] += 0;
          result[2] += 0.9748953974895398;
          result[3] += 0.01882845188284519;
          result[4] += 0;
          result[5] += 0.0020920502092050207;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.985981308411215;
          result[5] += 0.014018691588785047;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.04579339723109691;
          result[1] += 0.010649627263045794;
          result[2] += 0;
          result[3] += 0.0308839190628328;
          result[4] += 0.06602768903088392;
          result[5] += 0.8466453674121406;
        } else {
          result[0] += 0.003355704697986577;
          result[1] += 0;
          result[2] += 0.003355704697986577;
          result[3] += 0.5302013422818792;
          result[4] += 0.03691275167785235;
          result[5] += 0.4261744966442953;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.4666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.006993006993006993;
          result[1] += 0.9790209790209791;
          result[2] += 0;
          result[3] += 0.006993006993006993;
          result[4] += 0.006993006993006993;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.761094674556213;
          result[1] += 0.04659763313609468;
          result[2] += 0.014053254437869823;
          result[3] += 0.028106508875739646;
          result[4] += 0.13239644970414202;
          result[5] += 0.01775147928994083;
        } else {
          result[0] += 0.14657210401891252;
          result[1] += 0.03546099290780142;
          result[2] += 0.23877068557919623;
          result[3] += 0.2576832151300236;
          result[4] += 0.0425531914893617;
          result[5] += 0.2789598108747045;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.0375;
          result[2] += 0.1375;
          result[3] += 0.175;
          result[4] += 0.0625;
          result[5] += 0.5875;
        } else {
          result[0] += 0.0273972602739726;
          result[1] += 0.0136986301369863;
          result[2] += 0.3287671232876712;
          result[3] += 0.5068493150684932;
          result[4] += 0;
          result[5] += 0.1232876712328767;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.56;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0.12195121951219512;
          result[1] += 0.04878048780487805;
          result[2] += 0.7560975609756098;
          result[3] += 0.024390243902439025;
          result[4] += 0.024390243902439025;
          result[5] += 0.024390243902439025;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.007874015748031496;
          result[1] += 0;
          result[2] += 0.7913385826771654;
          result[3] += 0.19291338582677164;
          result[4] += 0;
          result[5] += 0.007874015748031496;
        } else {
          result[0] += 0.004601226993865031;
          result[1] += 0;
          result[2] += 0.9585889570552147;
          result[3] += 0.0352760736196319;
          result[4] += 0;
          result[5] += 0.0015337423312883436;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.003690036900369004;
          result[1] += 0.007380073800738008;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9852398523985241;
          result[5] += 0.003690036900369004;
        } else {
          result[0] += 0;
          result[1] += 0.04081632653061224;
          result[2] += 0;
          result[3] += 0.061224489795918366;
          result[4] += 0.4897959183673469;
          result[5] += 0.40816326530612246;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.6126126126126126;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.06306306306306306;
          result[4] += 0.2702702702702703;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.0010298661174047373;
          result[1] += 0.003089598352214212;
          result[2] += 0.0020597322348094747;
          result[3] += 0.06694129763130793;
          result[4] += 0.06694129763130793;
          result[5] += 0.8599382080329557;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.37037037037037035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6296296296296297;
          result[5] += 0;
        } else {
          result[0] += 0.008048289738430584;
          result[1] += 0.9859154929577465;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006036217303822937;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7824335213537468;
          result[1] += 0.024979854955680895;
          result[2] += 0.0112812248186946;
          result[3] += 0.0370668815471394;
          result[4] += 0.09266720386784849;
          result[5] += 0.05157131345688959;
        } else {
          result[0] += 0.16956521739130434;
          result[1] += 0.010869565217391304;
          result[2] += 0.17608695652173914;
          result[3] += 0.4369565217391304;
          result[4] += 0.03260869565217391;
          result[5] += 0.17391304347826086;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07317073170731707;
          result[5] += 0.926829268292683;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0.058823529411764705;
          result[5] += 0.6078431372549019;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4214876033057851;
          result[3] += 0.32231404958677684;
          result[4] += 0.008264462809917356;
          result[5] += 0.24793388429752067;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          result[0] += 0.011764705882352943;
          result[1] += 0;
          result[2] += 0.761764705882353;
          result[3] += 0.19411764705882356;
          result[4] += 0;
          result[5] += 0.0323529411764706;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016181229773462784;
          result[1] += 0;
          result[2] += 0.9660194174757282;
          result[3] += 0.02912621359223301;
          result[4] += 0;
          result[5] += 0.003236245954692557;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.0037174721189591076;
          result[1] += 0.040892193308550186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.929368029739777;
          result[5] += 0.026022304832713755;
        } else {
          result[0] += 0.7045454545454546;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.17045454545454544;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0040858018386108275;
          result[1] += 0.007150153217568948;
          result[2] += 0.006128702757916241;
          result[3] += 0.05515832482124617;
          result[4] += 0.08273748723186926;
          result[5] += 0.8447395301327886;
        } else {
          result[0] += 0.01509433962264151;
          result[1] += 0.018867924528301886;
          result[2] += 0.033962264150943396;
          result[3] += 0.5320754716981132;
          result[4] += 0.06415094339622641;
          result[5] += 0.33584905660377357;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.3230769230769231;
          result[2] += 0.046153846153846156;
          result[3] += 0.023076923076923078;
          result[4] += 0.5923076923076923;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0.002325581395348837;
          result[1] += 0.9953488372093023;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002325581395348837;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8405560098119379;
          result[1] += 0.025347506132461162;
          result[2] += 0;
          result[3] += 0.029435813573180702;
          result[4] += 0.07195421095666395;
          result[5] += 0.032706459525756335;
        } else {
          result[0] += 0.20711974110032363;
          result[1] += 0.009708737864077669;
          result[2] += 0.2588996763754045;
          result[3] += 0.22330097087378642;
          result[4] += 0.04854368932038835;
          result[5] += 0.2524271844660194;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0.03333333333333333;
          result[4] += 0.06666666666666667;
          result[5] += 0.75;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.8648648648648649;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4285714285714286;
          result[3] += 0.28571428571428575;
          result[4] += 0;
          result[5] += 0.28571428571428575;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)46.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107.5) ) ) {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0.5555555555555556;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.011049723756906079;
          result[1] += 0;
          result[2] += 0.6464088397790057;
          result[3] += 0.2707182320441989;
          result[4] += 0.01657458563535912;
          result[5] += 0.05524861878453039;
        } else {
          result[0] += 0.023142509135200974;
          result[1] += 0.001218026796589525;
          result[2] += 0.9183922046285018;
          result[3] += 0.047503045066991476;
          result[4] += 0;
          result[5] += 0.0097442143727162;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007168458781362007;
          result[1] += 0.007168458781362007;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96415770609319;
          result[5] += 0.021505376344086023;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018867924528301886;
          result[4] += 0.5660377358490566;
          result[5] += 0.41509433962264153;
        } else {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.6153846153846154;
          result[5] += 0.34615384615384615;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004026845637583893;
          result[3] += 0.032214765100671144;
          result[4] += 0.005369127516778523;
          result[5] += 0.9583892617449664;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          result[0] += 0.0787037037037037;
          result[1] += 0.023148148148148147;
          result[2] += 0;
          result[3] += 0.25925925925925924;
          result[4] += 0.11805555555555555;
          result[5] += 0.5208333333333334;
        } else {
          result[0] += 0.467966573816156;
          result[1] += 0.06128133704735376;
          result[2] += 0.04735376044568245;
          result[3] += 0.07799442896935933;
          result[4] += 0.10027855153203342;
          result[5] += 0.24512534818941503;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0.024096385542168676;
          result[1] += 0.40963855421686746;
          result[2] += 0;
          result[3] += 0.07228915662650602;
          result[4] += 0.4819277108433735;
          result[5] += 0.012048192771084338;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          result[0] += 0.030612244897959183;
          result[1] += 0;
          result[2] += 0.061224489795918366;
          result[3] += 0.3877551020408163;
          result[4] += 0.10204081632653061;
          result[5] += 0.41836734693877553;
        } else {
          result[0] += 0.8694029850746269;
          result[1] += 0.013992537313432836;
          result[2] += 0.011194029850746268;
          result[3] += 0.03917910447761194;
          result[4] += 0.04757462686567164;
          result[5] += 0.018656716417910446;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12666666666666668;
          result[3] += 0.6333333333333333;
          result[4] += 0.02;
          result[5] += 0.22;
        } else {
          result[0] += 0;
          result[1] += 0.011235955056179775;
          result[2] += 0.43820224719101125;
          result[3] += 0.23595505617977527;
          result[4] += 0.033707865168539325;
          result[5] += 0.2808988764044944;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0;
          result[2] += 0.6326530612244898;
          result[3] += 0.20408163265306123;
          result[4] += 0.07142857142857142;
          result[5] += 0.08163265306122448;
        } else {
          result[0] += 0.02903225806451613;
          result[1] += 0;
          result[2] += 0.9225806451612903;
          result[3] += 0.047311827956989246;
          result[4] += 0;
          result[5] += 0.001075268817204301;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.003787878787878788;
          result[4] += 0.9090909090909091;
          result[5] += 0.08712121212121213;
        } else {
          result[0] += 0;
          result[1] += 0.6428571428571429;
          result[2] += 0;
          result[3] += 0.21428571428571427;
          result[4] += 0.07142857142857142;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.03564356435643564;
          result[1] += 0.0049504950495049506;
          result[2] += 0;
          result[3] += 0.053465346534653464;
          result[4] += 0.061386138613861385;
          result[5] += 0.8445544554455445;
        } else {
          result[0] += 0.031496062992125984;
          result[1] += 0;
          result[2] += 0.023622047244094488;
          result[3] += 0.5039370078740157;
          result[4] += 0.003937007874015748;
          result[5] += 0.43700787401574803;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9934354485776805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006564551422319475;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7989337395277989;
          result[1] += 0.01904036557501904;
          result[2] += 0.012185833968012186;
          result[3] += 0.028941355674028942;
          result[4] += 0.115003808073115;
          result[5] += 0.025894897182025894;
        } else {
          result[0] += 0.1308641975308642;
          result[1] += 0.012345679012345678;
          result[2] += 0.26666666666666666;
          result[3] += 0.25679012345679014;
          result[4] += 0.12098765432098765;
          result[5] += 0.2123456790123457;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0989010989010989;
          result[3] += 0.5824175824175825;
          result[4] += 0.07692307692307693;
          result[5] += 0.24175824175824176;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8214285714285715;
          result[3] += 0.14285714285714288;
          result[4] += 0;
          result[5] += 0.03571428571428572;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          result[0] += 0.09433962264150944;
          result[1] += 0.07547169811320754;
          result[2] += 0.49056603773584906;
          result[3] += 0.1320754716981132;
          result[4] += 0;
          result[5] += 0.20754716981132076;
        } else {
          result[0] += 0.9333333333333333;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010830324909747292;
          result[1] += 0;
          result[2] += 0.779783393501805;
          result[3] += 0.16967509025270758;
          result[4] += 0;
          result[5] += 0.039711191335740074;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9629005059021922;
          result[3] += 0.03709949409780776;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)120) ) ) {
          result[0] += 0;
          result[1] += 0.007168458781362008;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9749103942652331;
          result[5] += 0.01792114695340502;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.872093023255814;
          result[1] += 0;
          result[2] += 0.011627906976744186;
          result[3] += 0;
          result[4] += 0.10465116279069768;
          result[5] += 0.011627906976744186;
        } else {
          result[0] += 0.004004004004004004;
          result[1] += 0.006006006006006006;
          result[2] += 0;
          result[3] += 0.08108108108108109;
          result[4] += 0.07107107107107107;
          result[5] += 0.8378378378378378;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.4098360655737705;
          result[2] += 0.01639344262295082;
          result[3] += 0.06557377049180328;
          result[4] += 0.4918032786885246;
          result[5] += 0.01639344262295082;
        } else {
          result[0] += 0.012468827930174564;
          result[1] += 0.9875311720698254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8096366508688784;
          result[1] += 0.05292259083728278;
          result[2] += 0.0071090047393364926;
          result[3] += 0.029225908372827805;
          result[4] += 0.07345971563981042;
          result[5] += 0.02764612954186414;
        } else {
          result[0] += 0.1212624584717608;
          result[1] += 0.016611295681063124;
          result[2] += 0.15448504983388706;
          result[3] += 0.3787375415282392;
          result[4] += 0.03986710963455149;
          result[5] += 0.28903654485049834;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.043478260869565216;
          result[2] += 0.043478260869565216;
          result[3] += 0.30434782608695654;
          result[4] += 0.17391304347826086;
          result[5] += 0.43478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07894736842105263;
          result[3] += 0.868421052631579;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0.3333333333333333;
          result[5] += 0.3888888888888889;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.8076923076923077;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
          result[0] += 0.275;
          result[1] += 0.025;
          result[2] += 0.3;
          result[3] += 0.075;
          result[4] += 0.075;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7132352941176471;
          result[3] += 0.2647058823529412;
          result[4] += 0;
          result[5] += 0.022058823529411766;
        } else {
          result[0] += 0.00830367734282325;
          result[1] += 0;
          result[2] += 0.9323843416370107;
          result[3] += 0.05693950177935943;
          result[4] += 0;
          result[5] += 0.002372479240806643;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01384083044982699;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9550173010380623;
          result[5] += 0.031141868512110725;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.9583333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.041666666666666664;
          result[5] += 0;
        } else {
          result[0] += 0.016295025728987993;
          result[1] += 0.012864493996569469;
          result[2] += 0.02058319039451115;
          result[3] += 0.09948542024013722;
          result[4] += 0.06174957118353345;
          result[5] += 0.7890222984562607;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.9790794979079498;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02092050209205021;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.15517241379310345;
          result[2] += 0.05172413793103448;
          result[3] += 0.10344827586206896;
          result[4] += 0.603448275862069;
          result[5] += 0.08620689655172414;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8152753108348135;
          result[1] += 0.046181172291296625;
          result[2] += 0.007104795737122558;
          result[3] += 0.043516873889875664;
          result[4] += 0.07371225577264653;
          result[5] += 0.014209591474245116;
        } else {
          result[0] += 0.14987714987714987;
          result[1] += 0.009828009828009828;
          result[2] += 0.2285012285012285;
          result[3] += 0.371007371007371;
          result[4] += 0.04914004914004914;
          result[5] += 0.19164619164619165;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.03508771929824562;
          result[1] += 0.026315789473684213;
          result[2] += 0.08771929824561404;
          result[3] += 0.15789473684210528;
          result[4] += 0.13157894736842107;
          result[5] += 0.5614035087719299;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6285714285714286;
          result[4] += 0;
          result[5] += 0.17142857142857143;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.02;
          result[2] += 0.8;
          result[3] += 0.12;
          result[4] += 0.02;
          result[5] += 0.04;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47297297297297297;
          result[3] += 0.36486486486486486;
          result[4] += 0;
          result[5] += 0.16216216216216217;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8275862068965517;
          result[3] += 0.14482758620689656;
          result[4] += 0;
          result[5] += 0.027586206896551724;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0014044943820224719;
          result[1] += 0;
          result[2] += 0.9564606741573034;
          result[3] += 0.04073033707865169;
          result[4] += 0;
          result[5] += 0.0014044943820224719;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9675925925925926;
          result[5] += 0.032407407407407406;
        } else {
          result[0] += 0.3364485981308411;
          result[1] += 0.102803738317757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2336448598130841;
          result[5] += 0.32710280373831774;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045572916666666664;
          result[4] += 0.03515625;
          result[5] += 0.9192708333333334;
        } else {
          result[0] += 0;
          result[1] += 0.03498542274052478;
          result[2] += 0.029154518950437316;
          result[3] += 0.37317784256559766;
          result[4] += 0.06997084548104957;
          result[5] += 0.49271137026239065;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
          result[0] += 0.016949152542372885;
          result[1] += 0.1610169491525424;
          result[2] += 0.050847457627118654;
          result[3] += 0.025423728813559327;
          result[4] += 0.728813559322034;
          result[5] += 0.016949152542372885;
        } else {
          result[0] += 0.0022727272727272726;
          result[1] += 0.9636363636363636;
          result[2] += 0.0022727272727272726;
          result[3] += 0.004545454545454545;
          result[4] += 0.02727272727272727;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0.3170289855072464;
          result[1] += 0.025362318840579712;
          result[2] += 0.07789855072463768;
          result[3] += 0.2463768115942029;
          result[4] += 0.09601449275362318;
          result[5] += 0.23731884057971014;
        } else {
          result[0] += 0.7863105175292153;
          result[1] += 0.021702838063439065;
          result[2] += 0.06844741235392321;
          result[3] += 0.02671118530884808;
          result[4] += 0.0676126878130217;
          result[5] += 0.02921535893155259;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.05;
          result[4] += 0.2;
          result[5] += 0.7;
        } else {
          result[0] += 0.007042253521126762;
          result[1] += 0;
          result[2] += 0.4225352112676057;
          result[3] += 0.47887323943661975;
          result[4] += 0;
          result[5] += 0.0915492957746479;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0.2608695652173913;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0.391304347826087;
        } else {
          result[0] += 0.019138755980861243;
          result[1] += 0.028708133971291867;
          result[2] += 0.8038277511961722;
          result[3] += 0.11961722488038277;
          result[4] += 0;
          result[5] += 0.028708133971291867;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)64.5) ) ) {
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
          result[4] += 0.2;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.946824224519941;
          result[3] += 0.050221565731166914;
          result[4] += 0;
          result[5] += 0.0029542097488921715;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.032362459546925564;
          result[1] += 0.061488673139158574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.86084142394822;
          result[5] += 0.045307443365695796;
        } else {
          result[0] += 0.7797619047619048;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.1488095238095238;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.014773776546629732;
          result[1] += 0.006463527239150508;
          result[2] += 0.0018467220683287165;
          result[3] += 0.05817174515235457;
          result[4] += 0.07479224376731301;
          result[5] += 0.8439519852262235;
        } else {
          result[0] += 0.03278688524590164;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5901639344262295;
          result[4] += 0;
          result[5] += 0.3770491803278688;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
          result[0] += 0.05454545454545454;
          result[1] += 0.2545454545454545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5636363636363636;
          result[5] += 0.12727272727272726;
        } else {
          result[0] += 0.0024330900243309003;
          result[1] += 0.9951338199513382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024330900243309003;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          result[0] += 0.3886075949367089;
          result[1] += 0.02531645569620253;
          result[2] += 0.13164556962025317;
          result[3] += 0.2430379746835443;
          result[4] += 0.0810126582278481;
          result[5] += 0.13037974683544304;
        } else {
          result[0] += 0.8907975460122699;
          result[1] += 0.0392638036809816;
          result[2] += 0.03067484662576687;
          result[3] += 0.0036809815950920245;
          result[4] += 0.033128834355828224;
          result[5] += 0.00245398773006135;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1590909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0.045454545454545456;
          result[5] += 0.7045454545454546;
        } else {
          result[0] += 0.027027027027027032;
          result[1] += 0.03603603603603604;
          result[2] += 0.22522522522522526;
          result[3] += 0.5855855855855857;
          result[4] += 0.03603603603603604;
          result[5] += 0.0900900900900901;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23333333333333334;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.5666666666666667;
        } else {
          result[0] += 0.07865168539325842;
          result[1] += 0.028089887640449437;
          result[2] += 0.7696629213483146;
          result[3] += 0.11797752808988764;
          result[4] += 0;
          result[5] += 0.0056179775280898875;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.7027027027027027;
          result[3] += 0.24324324324324326;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.952;
          result[3] += 0.048;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.0019801980198019802;
          result[1] += 0;
          result[2] += 0.9821782178217822;
          result[3] += 0.013861386138613862;
          result[4] += 0;
          result[5] += 0.0019801980198019802;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
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
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.935064935064935;
          result[5] += 0.06493506493506493;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.9911504424778761;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008849557522123894;
          result[5] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.15789473684210525;
          result[2] += 0.3157894736842105;
          result[3] += 0;
          result[4] += 0.42105263157894735;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.00984251968503937;
          result[1] += 0.004921259842519685;
          result[2] += 0.000984251968503937;
          result[3] += 0.054133858267716536;
          result[4] += 0.05216535433070866;
          result[5] += 0.8779527559055118;
        } else {
          result[0] += 0.005555555555555556;
          result[1] += 0.016666666666666666;
          result[2] += 0.037037037037037035;
          result[3] += 0.46111111111111114;
          result[4] += 0.1;
          result[5] += 0.37962962962962965;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.002457002457002457;
          result[1] += 0.9926289926289926;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004914004914004914;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
          result[0] += 0.8093699515347336;
          result[1] += 0.029886914378029084;
          result[2] += 0.008077544426494348;
          result[3] += 0.018578352180936997;
          result[4] += 0.11227786752827142;
          result[5] += 0.02180936995153474;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0.024258760107816704;
          result[1] += 0.000898472596585804;
          result[2] += 0.8499550763701705;
          result[3] += 0.09703504043126682;
          result[4] += 0.002695417789757412;
          result[5] += 0.02515723270440251;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.004694835680751175;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9671361502347419;
          result[5] += 0.028169014084507046;
        } else {
          result[0] += 0;
          result[1] += 0.4230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.2692307692307692;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003444316877152698;
          result[3] += 0.06659012629161883;
          result[4] += 0.05166475315729047;
          result[5] += 0.878300803673938;
        } else {
          result[0] += 0.11627906976744186;
          result[1] += 0.007751937984496124;
          result[2] += 0.0103359173126615;
          result[3] += 0.40310077519379844;
          result[4] += 0.09302325581395349;
          result[5] += 0.3695090439276486;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7894736842105263;
          result[5] += 0.010526315789473684;
        } else {
          result[0] += 0.004694835680751174;
          result[1] += 0.9859154929577465;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009389671361502348;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8274193548387097;
          result[1] += 0.02338709677419355;
          result[2] += 0.004032258064516129;
          result[3] += 0.016129032258064516;
          result[4] += 0.08870967741935484;
          result[5] += 0.04032258064516129;
        } else {
          result[0] += 0.21063829787234045;
          result[1] += 0.008510638297872342;
          result[2] += 0.25531914893617025;
          result[3] += 0.20851063829787236;
          result[4] += 0.03829787234042554;
          result[5] += 0.2787234042553192;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0.42857142857142855;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.8888888888888888;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0.6428571428571429;
          result[2] += 0;
          result[3] += 0.03571428571428571;
          result[4] += 0.03571428571428571;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0.01666666666666667;
          result[1] += 0;
          result[2] += 0.45000000000000007;
          result[3] += 0.42500000000000004;
          result[4] += 0.008333333333333335;
          result[5] += 0.10000000000000002;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.8119402985074626;
          result[3] += 0.1582089552238806;
          result[4] += 0;
          result[5] += 0.014925373134328358;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.6875;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005758157389635317;
          result[1] += 0;
          result[2] += 0.9750479846449136;
          result[3] += 0.009596928982725527;
          result[4] += 0;
          result[5] += 0.009596928982725527;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.04819277108433735;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9357429718875502;
          result[5] += 0.01606425702811245;
        } else {
          result[0] += 0.5662650602409639;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10843373493975904;
          result[5] += 0.3253012048192771;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0014044943820224719;
          result[2] += 0.0056179775280898875;
          result[3] += 0.025280898876404494;
          result[4] += 0.033707865168539325;
          result[5] += 0.9339887640449438;
        } else {
          result[0] += 0.004149377593360996;
          result[1] += 0.016597510373443983;
          result[2] += 0.022821576763485476;
          result[3] += 0.38381742738589214;
          result[4] += 0.0912863070539419;
          result[5] += 0.48132780082987553;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9974619289340102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025380710659898475;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
          result[0] += 0.4775828460038986;
          result[1] += 0.07017543859649122;
          result[2] += 0.04775828460038986;
          result[3] += 0.13742690058479531;
          result[4] += 0.14619883040935672;
          result[5] += 0.12085769980506822;
        } else {
          result[0] += 0.8880813953488372;
          result[1] += 0.00872093023255814;
          result[2] += 0.055232558139534885;
          result[3] += 0;
          result[4] += 0.04796511627906977;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0.1509433962264151;
          result[2] += 0.0660377358490566;
          result[3] += 0.16037735849056603;
          result[4] += 0.04716981132075472;
          result[5] += 0.5566037735849056;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24675324675324675;
          result[3] += 0.5454545454545454;
          result[4] += 0;
          result[5] += 0.2077922077922078;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0.8153846153846154;
          result[3] += 0.16923076923076924;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1282051282051282;
          result[3] += 0.5641025641025641;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.01773049645390071;
          result[1] += 0;
          result[2] += 0.8191489361702128;
          result[3] += 0.14184397163120568;
          result[4] += 0;
          result[5] += 0.02127659574468085;
        } else {
          result[0] += 0.00505902192242833;
          result[1] += 0;
          result[2] += 0.9662731871838112;
          result[3] += 0.026981450252951095;
          result[4] += 0;
          result[5] += 0.0016863406408094434;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
          result[0] += 0.009036144578313253;
          result[1] += 0.012048192771084338;
          result[2] += 0.015060240963855422;
          result[3] += 0.012048192771084338;
          result[4] += 0.8975903614457831;
          result[5] += 0.05421686746987952;
        } else {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06382978723404255;
          result[4] += 0.03629536921151439;
          result[5] += 0.899874843554443;
        } else {
          result[0] += 0.14092664092664095;
          result[1] += 0.005791505791505792;
          result[2] += 0.04054054054054055;
          result[3] += 0.3976833976833977;
          result[4] += 0.07335907335907338;
          result[5] += 0.34169884169884174;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.3448275862068966;
          result[2] += 0;
          result[3] += 0.05172413793103448;
          result[4] += 0.5517241379310345;
          result[5] += 0.05172413793103448;
        } else {
          result[0] += 0.0023148148148148147;
          result[1] += 0.9884259259259259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009259259259259259;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7806201550387598;
          result[1] += 0.04263565891472869;
          result[2] += 0;
          result[3] += 0.022480620155038763;
          result[4] += 0.1046511627906977;
          result[5] += 0.0496124031007752;
        } else {
          result[0] += 0.1762820512820513;
          result[1] += 0.00641025641025641;
          result[2] += 0.2916666666666667;
          result[3] += 0.25;
          result[4] += 0.022435897435897436;
          result[5] += 0.2532051282051282;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.029850746268656716;
          result[1] += 0.029850746268656716;
          result[2] += 0.04477611940298507;
          result[3] += 0.05970149253731343;
          result[4] += 0.23880597014925373;
          result[5] += 0.5970149253731343;
        } else {
          result[0] += 0;
          result[1] += 0.028169014084507043;
          result[2] += 0.2112676056338028;
          result[3] += 0.5774647887323944;
          result[4] += 0;
          result[5] += 0.18309859154929578;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9705882352941176;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.423728813559322;
          result[3] += 0.5254237288135594;
          result[4] += 0;
          result[5] += 0.05084745762711865;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.96;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04587155963302752;
          result[1] += 0.004587155963302752;
          result[2] += 0.7522935779816512;
          result[3] += 0.15596330275229356;
          result[4] += 0;
          result[5] += 0.041284403669724766;
        } else {
          result[0] += 0.0017271157167530226;
          result[1] += 0;
          result[2] += 0.9706390328151987;
          result[3] += 0.02763385146804836;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.00796812749003984;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9721115537848606;
          result[5] += 0.0199203187250996;
        } else {
          result[0] += 0.6991150442477876;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.035398230088495575;
          result[4] += 0.10619469026548672;
          result[5] += 0.1592920353982301;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.023809523809523808;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8809523809523809;
          result[5] += 0.09523809523809523;
        } else {
          result[0] += 0.001984126984126984;
          result[1] += 0.002976190476190476;
          result[2] += 0;
          result[3] += 0.08234126984126984;
          result[4] += 0.07043650793650794;
          result[5] += 0.8422619047619048;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 0.9913232104121475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008676789587852495;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4117647058823529;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5882352941176471;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8102189781021898;
          result[1] += 0.021897810218978103;
          result[2] += 0.008110300081103;
          result[3] += 0.034874290348742905;
          result[4] += 0.09164639091646391;
          result[5] += 0.0332522303325223;
        } else {
          result[0] += 0.1320754716981132;
          result[1] += 0.023060796645702306;
          result[2] += 0.15932914046121593;
          result[3] += 0.3668763102725367;
          result[4] += 0.050314465408805034;
          result[5] += 0.26834381551362685;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0.6153846153846154;
          result[4] += 0.038461538461538464;
          result[5] += 0.32051282051282054;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.16071428571428573;
          result[3] += 0.125;
          result[4] += 0.08928571428571429;
          result[5] += 0.5535714285714286;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.7368421052631579;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0.010309278350515464;
          result[1] += 0;
          result[2] += 0.4742268041237113;
          result[3] += 0.38144329896907214;
          result[4] += 0;
          result[5] += 0.13402061855670103;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.029661016949152543;
          result[1] += 0;
          result[2] += 0.7796610169491526;
          result[3] += 0.17796610169491525;
          result[4] += 0;
          result[5] += 0.012711864406779662;
        } else {
          result[0] += 0.010144927536231883;
          result[1] += 0;
          result[2] += 0.946376811594203;
          result[3] += 0.03768115942028986;
          result[4] += 0;
          result[5] += 0.005797101449275362;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
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
          result[1] += 0.008620689655172414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9741379310344828;
          result[5] += 0.017241379310344827;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.016766467065868262;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025149700598802394;
          result[4] += 0.04431137724550898;
          result[5] += 0.9137724550898204;
        } else {
          result[0] += 0.07764705882352942;
          result[1] += 0.02823529411764706;
          result[2] += 0.03529411764705882;
          result[3] += 0.31529411764705884;
          result[4] += 0.07294117647058823;
          result[5] += 0.47058823529411764;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.35443037974683544;
          result[2] += 0;
          result[3] += 0.012658227848101266;
          result[4] += 0.6329113924050633;
          result[5] += 0;
        } else {
          result[0] += 0.004106776180698152;
          result[1] += 0.9774127310061602;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018480492813141684;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.817104149026249;
          result[1] += 0.029635901778154106;
          result[2] += 0.005080440304826418;
          result[3] += 0.013547840812870448;
          result[4] += 0.09314140558848434;
          result[5] += 0.04149026248941575;
        } else {
          result[0] += 0.30038022813688214;
          result[1] += 0.015209125475285171;
          result[2] += 0.13688212927756654;
          result[3] += 0.3231939163498099;
          result[4] += 0.04182509505703422;
          result[5] += 0.18250950570342206;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0;
          result[4] += 0.16216216216216217;
          result[5] += 0.8108108108108109;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.525974025974026;
          result[4] += 0;
          result[5] += 0.2922077922077922;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6470588235294118;
          result[3] += 0.30392156862745096;
          result[4] += 0;
          result[5] += 0.049019607843137254;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0.02702702702702703;
          result[2] += 0.7297297297297297;
          result[3] += 0.12162162162162163;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        } else {
          result[0] += 0.625;
          result[1] += 0.0625;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8398692810457516;
          result[3] += 0.13071895424836602;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0.008038585209003215;
          result[1] += 0;
          result[2] += 0.9662379421221865;
          result[3] += 0.02572347266881029;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.030303030303030304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9696969696969697;
          result[5] += 0;
        } else {
          result[0] += 0.48717948717948717;
          result[1] += 0.05128205128205128;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.28205128205128205;
          result[5] += 0.1794871794871795;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.004694835680751174;
          result[1] += 0.01596244131455399;
          result[2] += 0;
          result[3] += 0.0676056338028169;
          result[4] += 0.06291079812206572;
          result[5] += 0.8488262910798122;
        } else {
          result[0] += 0.005813953488372093;
          result[1] += 0;
          result[2] += 0.005813953488372093;
          result[3] += 0.7151162790697675;
          result[4] += 0.01744186046511628;
          result[5] += 0.2558139534883721;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.5652173913043478;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.43478260869565216;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          result[0] += 0.08741258741258741;
          result[1] += 0.14685314685314685;
          result[2] += 0.07342657342657342;
          result[3] += 0.06293706293706294;
          result[4] += 0.5594405594405595;
          result[5] += 0.06993006993006994;
        } else {
          result[0] += 0.6784053156146179;
          result[1] += 0.009966777408637873;
          result[2] += 0.07043189368770764;
          result[3] += 0.08704318936877077;
          result[4] += 0.06445182724252492;
          result[5] += 0.08970099667774087;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12244897959183673;
          result[3] += 0.12244897959183673;
          result[4] += 0.04081632653061224;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0.011764705882352941;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0.5411764705882353;
          result[4] += 0;
          result[5] += 0.21176470588235294;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.1111111111111111;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869568;
          result[2] += 0.13043478260869568;
          result[3] += 0.5652173913043479;
          result[4] += 0;
          result[5] += 0.1739130434782609;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7608695652173914;
          result[3] += 0.2391304347826087;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2878787878787879;
          result[1] += 0.07575757575757576;
          result[2] += 0.6060606060606061;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013784461152882205;
          result[1] += 0;
          result[2] += 0.924812030075188;
          result[3] += 0.05764411027568922;
          result[4] += 0.0012531328320802004;
          result[5] += 0.002506265664160401;
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
