
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          result[0] += 0.0078125;
          result[1] += 0.00390625;
          result[2] += 0.01171875;
          result[3] += 0.0078125;
          result[4] += 0.94140625;
          result[5] += 0.02734375;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.01791713325867861;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.032474804031354984;
          result[4] += 0.05263157894736842;
          result[5] += 0.896976483762598;
        } else {
          result[0] += 0.12903225806451613;
          result[1] += 0.008797653958944282;
          result[2] += 0.03519061583577713;
          result[3] += 0.3812316715542522;
          result[4] += 0.07917888563049853;
          result[5] += 0.36656891495601174;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.23076923076923078;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.7051282051282052;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0;
          result[1] += 0.9956140350877193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0043859649122807015;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
          result[0] += 0.14112903225806453;
          result[1] += 0.008064516129032258;
          result[2] += 0.08064516129032258;
          result[3] += 0.24596774193548387;
          result[4] += 0.08870967741935484;
          result[5] += 0.43548387096774194;
        } else {
          result[0] += 0.762878787878788;
          result[1] += 0.030303030303030307;
          result[2] += 0.040909090909090916;
          result[3] += 0.04545454545454546;
          result[4] += 0.09393939393939395;
          result[5] += 0.02651515151515152;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.0273972602739726;
          result[2] += 0.0547945205479452;
          result[3] += 0.821917808219178;
          result[4] += 0;
          result[5] += 0.0958904109589041;
        } else {
          result[0] += 0;
          result[1] += 0.026143790849673203;
          result[2] += 0.3137254901960784;
          result[3] += 0.2679738562091503;
          result[4] += 0.013071895424836602;
          result[5] += 0.3790849673202614;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6375000000000001;
          result[3] += 0.28750000000000003;
          result[4] += 0;
          result[5] += 0.07500000000000001;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8282208588957055;
          result[3] += 0.15337423312883436;
          result[4] += 0.006134969325153374;
          result[5] += 0.012269938650306749;
        } else {
          result[0] += 0.019886363636363636;
          result[1] += 0;
          result[2] += 0.9417613636363636;
          result[3] += 0.036931818181818184;
          result[4] += 0;
          result[5] += 0.0014204545454545455;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008298755186721992;
          result[1] += 0.016597510373443983;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.970954356846473;
          result[5] += 0.004149377593360996;
        } else {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0.07407407407407407;
          result[4] += 0.2962962962962963;
          result[5] += 0.4074074074074074;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.026602176541717048;
          result[1] += 0;
          result[2] += 0.0036275695284159614;
          result[3] += 0.03869407496977025;
          result[4] += 0.07134220072551391;
          result[5] += 0.8597339782345829;
        } else {
          result[0] += 0.0472636815920398;
          result[1] += 0.03731343283582089;
          result[2] += 0.0024875621890547263;
          result[3] += 0.4054726368159204;
          result[4] += 0.014925373134328358;
          result[5] += 0.4925373134328358;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.29411764705882354;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.5882352941176471;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.995260663507109;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004739336492890996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7289244186046513;
          result[1] += 0.026889534883720933;
          result[2] += 0.02107558139534884;
          result[3] += 0.03197674418604652;
          result[4] += 0.13880813953488375;
          result[5] += 0.05232558139534885;
        } else {
          result[0] += 0.15428571428571428;
          result[1] += 0.04285714285714286;
          result[2] += 0.3142857142857143;
          result[3] += 0.26285714285714284;
          result[4] += 0.05714285714285714;
          result[5] += 0.16857142857142857;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112) ) ) {
          result[0] += 0.031578947368421054;
          result[1] += 0;
          result[2] += 0.12631578947368421;
          result[3] += 0.24210526315789474;
          result[4] += 0.11578947368421053;
          result[5] += 0.4842105263157895;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.8095238095238095;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.68;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0.04;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8076923076923077;
          result[1] += 0;
          result[2] += 0.19230769230769232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005605381165919283;
          result[1] += 0;
          result[2] += 0.9316143497757848;
          result[3] += 0.06053811659192826;
          result[4] += 0;
          result[5] += 0.0022421524663677134;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
          result[0] += 0.010273972602739725;
          result[1] += 0.02054794520547945;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8972602739726028;
          result[5] += 0.07191780821917808;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0013315579227696406;
          result[1] += 0;
          result[2] += 0.002663115845539281;
          result[3] += 0.047936085219707054;
          result[4] += 0.022636484687083888;
          result[5] += 0.9254327563249002;
        } else {
          result[0] += 0.1359773371104816;
          result[1] += 0.0113314447592068;
          result[2] += 0.014164305949008499;
          result[3] += 0.32011331444759206;
          result[4] += 0.07932011331444759;
          result[5] += 0.43909348441926344;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0.9900497512437811;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009950248756218905;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.6;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7336647727272727;
          result[1] += 0.05042613636363636;
          result[2] += 0.009943181818181818;
          result[3] += 0.03125;
          result[4] += 0.11931818181818182;
          result[5] += 0.05539772727272727;
        } else {
          result[0] += 0.1921921921921922;
          result[1] += 0.021021021021021023;
          result[2] += 0.26426426426426425;
          result[3] += 0.26126126126126126;
          result[4] += 0.06906906906906907;
          result[5] += 0.1921921921921922;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.11764705882352941;
          result[5] += 0.7647058823529411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07843137254901962;
          result[3] += 0.6862745098039217;
          result[4] += 0.03921568627450981;
          result[5] += 0.19607843137254904;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.11666666666666667;
          result[4] += 0.25;
          result[5] += 0.5833333333333334;
        } else {
          result[0] += 0.0847457627118644;
          result[1] += 0.0847457627118644;
          result[2] += 0.4915254237288136;
          result[3] += 0.06779661016949153;
          result[4] += 0.0847457627118644;
          result[5] += 0.1864406779661017;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0.047619047619047616;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.6190476190476191;
        } else {
          result[0] += 0.03325942350332594;
          result[1] += 0;
          result[2] += 0.7405764966740577;
          result[3] += 0.19955654101995565;
          result[4] += 0;
          result[5] += 0.026607538802660754;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9756592292089249;
          result[3] += 0.02434077079107505;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0.9933184855233853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0066815144766146995;
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
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
          result[0] += 0.11504424778761062;
          result[1] += 0.0029498525073746312;
          result[2] += 0.0058997050147492625;
          result[3] += 0.02359882005899705;
          result[4] += 0.7256637168141593;
          result[5] += 0.12684365781710916;
        } else {
          result[0] += 0.6126482213438735;
          result[1] += 0.14031620553359683;
          result[2] += 0.005928853754940711;
          result[3] += 0.017786561264822136;
          result[4] += 0.20553359683794467;
          result[5] += 0.017786561264822136;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0023094688221709007;
          result[2] += 0.003464203233256351;
          result[3] += 0.046189376443418015;
          result[4] += 0.08314087759815242;
          result[5] += 0.8648960739030023;
        } else {
          result[0] += 0.12449255751014884;
          result[1] += 0.012178619756427604;
          result[2] += 0.013531799729364006;
          result[3] += 0.33558863328822736;
          result[4] += 0.15020297699594046;
          result[5] += 0.36400541271989173;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.9792332268370607;
          result[1] += 0;
          result[2] += 0.001597444089456869;
          result[3] += 0.003194888178913738;
          result[4] += 0.011182108626198083;
          result[5] += 0.004792332268370607;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30303030303030304;
          result[3] += 0.30303030303030304;
          result[4] += 0;
          result[5] += 0.3939393939393939;
        } else {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16279069767441862;
          result[3] += 0.7558139534883721;
          result[4] += 0;
          result[5] += 0.08139534883720931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5365853658536586;
          result[3] += 0.2926829268292683;
          result[4] += 0;
          result[5] += 0.17073170731707318;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0.34615384615384615;
          result[1] += 0;
          result[2] += 0.47115384615384615;
          result[3] += 0.09615384615384616;
          result[4] += 0.028846153846153848;
          result[5] += 0.057692307692307696;
        } else {
          result[0] += 0.023880597014925373;
          result[1] += 0;
          result[2] += 0.8786069651741294;
          result[3] += 0.08557213930348259;
          result[4] += 0;
          result[5] += 0.011940298507462687;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0.0091324200913242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9863013698630136;
          result[5] += 0.0045662100456621;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.2;
          result[4] += 0.3333333333333333;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024691358024691357;
          result[4] += 0.0438957475994513;
          result[5] += 0.9314128943758574;
        } else {
          result[0] += 0.07644628099173553;
          result[1] += 0.026859504132231406;
          result[2] += 0.014462809917355372;
          result[3] += 0.3367768595041322;
          result[4] += 0.07644628099173553;
          result[5] += 0.4690082644628099;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.026143790849673203;
          result[1] += 0.12418300653594772;
          result[2] += 0.006535947712418301;
          result[3] += 0.026143790849673203;
          result[4] += 0.7581699346405228;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.0022172949002217295;
          result[1] += 0.975609756097561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022172949002217297;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8440221694378465;
          result[1] += 0.028503562945368176;
          result[2] += 0;
          result[3] += 0.03562945368171022;
          result[4] += 0.08392715756136185;
          result[5] += 0.007917656373713382;
        } else {
          result[0] += 0.18604651162790697;
          result[1] += 0.012684989429175475;
          result[2] += 0.2219873150105708;
          result[3] += 0.24101479915433405;
          result[4] += 0.05708245243128964;
          result[5] += 0.28118393234672306;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0.8823529411764706;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5977011494252874;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.08888888888888889;
          result[2] += 0.15555555555555556;
          result[3] += 0.15555555555555556;
          result[4] += 0.06666666666666667;
          result[5] += 0.5333333333333333;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.7666666666666667;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02766798418972332;
          result[1] += 0.007905138339920948;
          result[2] += 0.7944664031620553;
          result[3] += 0.16600790513833993;
          result[4] += 0;
          result[5] += 0.003952569169960474;
        } else {
          result[0] += 0.0034482758620689655;
          result[1] += 0;
          result[2] += 0.9620689655172414;
          result[3] += 0.034482758620689655;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.023411371237458192;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.939799331103679;
          result[5] += 0.03678929765886288;
        } else {
          result[0] += 0.5189873417721519;
          result[1] += 0;
          result[2] += 0.02531645569620253;
          result[3] += 0;
          result[4] += 0.2911392405063291;
          result[5] += 0.16455696202531644;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001160092807424594;
          result[3] += 0.042923433874709975;
          result[4] += 0.0568445475638051;
          result[5] += 0.8990719257540604;
        } else {
          result[0] += 0.009009009009009009;
          result[1] += 0.05405405405405406;
          result[2] += 0;
          result[3] += 0.2972972972972973;
          result[4] += 0.1891891891891892;
          result[5] += 0.45045045045045046;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          result[0] += 0.06358381502890174;
          result[1] += 0.06647398843930637;
          result[2] += 0.07514450867052025;
          result[3] += 0.4421965317919076;
          result[4] += 0.04335260115606937;
          result[5] += 0.30924855491329484;
        } else {
          result[0] += 0.7488789237668162;
          result[1] += 0.052316890881913304;
          result[2] += 0.029895366218236172;
          result[3] += 0.05007473841554559;
          result[4] += 0.08445440956651719;
          result[5] += 0.0343796711509716;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.9976076555023924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023923444976076554;
          result[5] += 0;
        } else {
          result[0] += 0.3076923076923077;
          result[1] += 0.46153846153846156;
          result[2] += 0;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.027777777777777776;
          result[2] += 0.027777777777777776;
          result[3] += 0.027777777777777776;
          result[4] += 0.5277777777777778;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17073170731707318;
          result[4] += 0.04878048780487805;
          result[5] += 0.7804878048780488;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0.015037593984962407;
          result[1] += 0;
          result[2] += 0.16541353383458648;
          result[3] += 0.6165413533834587;
          result[4] += 0.0075187969924812035;
          result[5] += 0.1954887218045113;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0.09090909090909091;
          result[2] += 0.5303030303030303;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8421052631578947;
          result[3] += 0.15789473684210525;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8770614692653673;
          result[3] += 0.10194902548725637;
          result[4] += 0;
          result[5] += 0.020989505247376312;
        } else {
          result[0] += 0.016181229773462782;
          result[1] += 0;
          result[2] += 0.9773462783171522;
          result[3] += 0.006472491909385114;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)31.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037037037037037043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.951851851851852;
          result[5] += 0.04444444444444445;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02491506228765572;
          result[1] += 0.004530011325028313;
          result[2] += 0.0022650056625141564;
          result[3] += 0.03397508493771234;
          result[4] += 0.05436013590033975;
          result[5] += 0.8799546998867497;
        } else {
          result[0] += 0.028423772609819122;
          result[1] += 0.020671834625323;
          result[2] += 0.01808785529715762;
          result[3] += 0.3953488372093023;
          result[4] += 0.05167958656330749;
          result[5] += 0.48578811369509045;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.3162393162393162;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6837606837606838;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9865470852017937;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013452914798206279;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8227654698242934;
          result[1] += 0.015278838808250575;
          result[2] += 0.015278838808250575;
          result[3] += 0.03896103896103897;
          result[4] += 0.08708938120702828;
          result[5] += 0.020626432391138278;
        } else {
          result[0] += 0.16080402010050251;
          result[1] += 0.017587939698492462;
          result[2] += 0.2135678391959799;
          result[3] += 0.2989949748743719;
          result[4] += 0.12311557788944724;
          result[5] += 0.18592964824120603;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1346153846153846;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0.4807692307692308;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5315315315315315;
          result[3] += 0.3063063063063063;
          result[4] += 0.009009009009009009;
          result[5] += 0.15315315315315314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9016393442622951;
          result[3] += 0.04918032786885246;
          result[4] += 0;
          result[5] += 0.04918032786885246;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)114) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0.25;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.006825938566552901;
          result[1] += 0;
          result[2] += 0.8498293515358362;
          result[3] += 0.12286689419795221;
          result[4] += 0.0034129692832764505;
          result[5] += 0.017064846416382253;
        } else {
          result[0] += 0.010438413361169102;
          result[1] += 0;
          result[2] += 0.9707724425887265;
          result[3] += 0.018789144050104383;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.00684931506849315;
          result[2] += 0;
          result[3] += 0.0136986301369863;
          result[4] += 0.9486301369863014;
          result[5] += 0.030821917808219176;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.28125;
          result[4] += 0;
          result[5] += 0.21875;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          result[0] += 0.03474178403755868;
          result[1] += 0.006572769953051643;
          result[2] += 0.0028169014084507044;
          result[3] += 0.0647887323943662;
          result[4] += 0.0676056338028169;
          result[5] += 0.8234741784037559;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05921052631578947;
          result[3] += 0.6973684210526315;
          result[4] += 0;
          result[5] += 0.24342105263157895;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.03;
          result[1] += 0.06;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.91;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.987012987012987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012987012987012988;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8562717770034843;
          result[1] += 0.0156794425087108;
          result[2] += 0.006097560975609756;
          result[3] += 0.03484320557491289;
          result[4] += 0.05574912891986063;
          result[5] += 0.0313588850174216;
        } else {
          result[0] += 0.16230366492146597;
          result[1] += 0.02356020942408377;
          result[2] += 0.20680628272251309;
          result[3] += 0.21727748691099477;
          result[4] += 0.06544502617801047;
          result[5] += 0.32460732984293195;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.044444444444444446;
          result[4] += 0.2;
          result[5] += 0.6444444444444445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.27380952380952384;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0.20238095238095238;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0.8928571428571429;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.1282051282051282;
          result[3] += 0.41025641025641024;
          result[4] += 0.10256410256410256;
          result[5] += 0.28205128205128205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0;
          result[4] += 0.2380952380952381;
          result[5] += 0.09523809523809525;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8407079646017699;
          result[3] += 0.1415929203539823;
          result[4] += 0.0029498525073746312;
          result[5] += 0.014749262536873156;
        } else {
          result[0] += 0.01929260450160772;
          result[1] += 0.001607717041800643;
          result[2] += 0.9453376205787781;
          result[3] += 0.03054662379421222;
          result[4] += 0.001607717041800643;
          result[5] += 0.001607717041800643;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
          result[0] += 0.015936254980079684;
          result[1] += 0.003984063745019921;
          result[2] += 0;
          result[3] += 0.007968127490039842;
          result[4] += 0.9322709163346614;
          result[5] += 0.03984063745019921;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0.14285714285714285;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0.6285714285714286;
          result[1] += 0.02857142857142857;
          result[2] += 0;
          result[3] += 0.05714285714285714;
          result[4] += 0.2571428571428571;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0.003401360544217687;
          result[1] += 0;
          result[2] += 0.0011337868480725624;
          result[3] += 0.04308390022675737;
          result[4] += 0.04421768707482993;
          result[5] += 0.9081632653061225;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
          result[0] += 0.5324675324675324;
          result[1] += 0.06493506493506493;
          result[2] += 0;
          result[3] += 0.2077922077922078;
          result[4] += 0.11688311688311688;
          result[5] += 0.07792207792207792;
        } else {
          result[0] += 0.02027027027027027;
          result[1] += 0.01126126126126126;
          result[2] += 0.02702702702702703;
          result[3] += 0.481981981981982;
          result[4] += 0.02927927927927928;
          result[5] += 0.43018018018018017;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9863013698630136;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0136986301369863;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.30434782608695654;
          result[2] += 0.021739130434782608;
          result[3] += 0;
          result[4] += 0.6739130434782609;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
          result[0] += 0.13846153846153847;
          result[1] += 0.2153846153846154;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6230769230769231;
          result[5] += 0.023076923076923078;
        } else {
          result[0] += 0.8235759493670886;
          result[1] += 0.0031645569620253164;
          result[2] += 0.030063291139240507;
          result[3] += 0.049841772151898736;
          result[4] += 0.048259493670886076;
          result[5] += 0.04509493670886076;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0.3291139240506329;
          result[3] += 0.3987341772151899;
          result[4] += 0.006329113924050633;
          result[5] += 0.25316455696202533;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0.018518518518518517;
          result[2] += 0.7592592592592593;
          result[3] += 0.07407407407407407;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.04938271604938271;
          result[2] += 0.3950617283950617;
          result[3] += 0.41975308641975306;
          result[4] += 0.037037037037037035;
          result[5] += 0.09876543209876543;
        } else {
          result[0] += 0.031180400890868598;
          result[1] += 0.0066815144766146995;
          result[2] += 0.8942093541202673;
          result[3] += 0.05902004454342984;
          result[4] += 0.004454342984409799;
          result[5] += 0.004454342984409799;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.061224489795918366;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7346938775510204;
          result[5] += 0.20408163265306123;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.625;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0020304568527918783;
          result[1] += 0.0020304568527918783;
          result[2] += 0;
          result[3] += 0.04263959390862944;
          result[4] += 0.0700507614213198;
          result[5] += 0.883248730964467;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027586206896551724;
          result[3] += 0.5172413793103449;
          result[4] += 0.013793103448275862;
          result[5] += 0.4413793103448276;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
          result[0] += 0.7214377406931964;
          result[1] += 0.01540436456996149;
          result[2] += 0.05006418485237484;
          result[3] += 0.055198973042362;
          result[4] += 0.12195121951219512;
          result[5] += 0.03594351732991014;
        } else {
          result[0] += 0.03921568627450981;
          result[1] += 0.9019607843137256;
          result[2] += 0.009803921568627453;
          result[3] += 0.009803921568627453;
          result[4] += 0.03921568627450981;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.4166666666666667;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4166666666666667;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.04375;
          result[1] += 0.075;
          result[2] += 0.13125;
          result[3] += 0.38125;
          result[4] += 0.025;
          result[5] += 0.34375;
        } else {
          result[0] += 0.14285714285714288;
          result[1] += 0;
          result[2] += 0.6753246753246754;
          result[3] += 0.14285714285714288;
          result[4] += 0;
          result[5] += 0.03896103896103897;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3488372093023256;
          result[3] += 0.3023255813953488;
          result[4] += 0.023255813953488372;
          result[5] += 0.32558139534883723;
        } else {
          result[0] += 0.0048721071863581;
          result[1] += 0.0036540803897685747;
          result[2] += 0.9037758830694276;
          result[3] += 0.07064555420219244;
          result[4] += 0;
          result[5] += 0.01705237515225335;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6111111111111112;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9618320610687023;
          result[5] += 0.03816793893129771;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.001392757660167131;
          result[1] += 0.001392757660167131;
          result[2] += 0;
          result[3] += 0.020891364902506964;
          result[4] += 0.037604456824512536;
          result[5] += 0.9387186629526463;
        } else {
          result[0] += 0.08206106870229007;
          result[1] += 0.003816793893129771;
          result[2] += 0.0057251908396946565;
          result[3] += 0.31297709923664124;
          result[4] += 0.09732824427480916;
          result[5] += 0.49809160305343514;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.036585365853658534;
          result[1] += 0.34146341463414637;
          result[2] += 0;
          result[3] += 0.036585365853658534;
          result[4] += 0.5853658536585366;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022727272727272726;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8136942675159236;
          result[1] += 0.035828025477707005;
          result[2] += 0.006369426751592357;
          result[3] += 0.028662420382165606;
          result[4] += 0.09474522292993631;
          result[5] += 0.020700636942675158;
        } else {
          result[0] += 0.13849765258215962;
          result[1] += 0.014084507042253521;
          result[2] += 0.23943661971830985;
          result[3] += 0.2981220657276995;
          result[4] += 0.11737089201877934;
          result[5] += 0.19248826291079812;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.1038961038961039;
          result[2] += 0.22077922077922077;
          result[3] += 0.18181818181818182;
          result[4] += 0.07792207792207792;
          result[5] += 0.3246753246753247;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.19047619047619047;
          result[3] += 0.7380952380952381;
          result[4] += 0;
          result[5] += 0.023809523809523808;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.27272727272727276;
          result[1] += 0;
          result[2] += 0.27272727272727276;
          result[3] += 0.030303030303030307;
          result[4] += 0.030303030303030307;
          result[5] += 0.393939393939394;
        } else {
          result[0] += 0.0390625;
          result[1] += 0;
          result[2] += 0.765625;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.0078125;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8701298701298701;
          result[3] += 0.11688311688311688;
          result[4] += 0;
          result[5] += 0.012987012987012988;
        } else {
          result[0] += 0.0053475935828877;
          result[1] += 0;
          result[2] += 0.9803921568627451;
          result[3] += 0.008912655971479501;
          result[4] += 0;
          result[5] += 0.0053475935828877;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0.013157894736842105;
          result[1] += 0.017543859649122806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9429824561403509;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0.32075471698113206;
          result[2] += 0;
          result[3] += 0.1320754716981132;
          result[4] += 0.24528301886792453;
          result[5] += 0.3018867924528302;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
          result[0] += 0.013138686131386862;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027737226277372264;
          result[4] += 0.06715328467153285;
          result[5] += 0.891970802919708;
        } else {
          result[0] += 0.059027777777777776;
          result[1] += 0.008680555555555556;
          result[2] += 0.03993055555555555;
          result[3] += 0.3229166666666667;
          result[4] += 0.0625;
          result[5] += 0.5069444444444444;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.3050847457627119;
          result[2] += 0;
          result[3] += 0.1694915254237288;
          result[4] += 0.5084745762711864;
          result[5] += 0.01694915254237288;
        } else {
          result[0] += 0;
          result[1] += 0.9901719901719902;
          result[2] += 0;
          result[3] += 0.004914004914004914;
          result[4] += 0.004914004914004914;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
          result[0] += 0.3935309973045822;
          result[1] += 0.03504043126684636;
          result[2] += 0.0880503144654088;
          result[3] += 0.16621743036837378;
          result[4] += 0.1761006289308176;
          result[5] += 0.14106019766397124;
        } else {
          result[0] += 0.8434670116429496;
          result[1] += 0.014230271668822769;
          result[2] += 0.09573091849935317;
          result[3] += 0.0038809831824062097;
          result[4] += 0.04139715394566624;
          result[5] += 0.00129366106080207;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08108108108108109;
          result[3] += 0.05405405405405406;
          result[4] += 0.13513513513513514;
          result[5] += 0.7297297297297297;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1935483870967742;
          result[3] += 0.5483870967741935;
          result[4] += 0;
          result[5] += 0.25806451612903225;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.5714285714285715;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0.14285714285714288;
          result[4] += 0;
          result[5] += 0.14285714285714288;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006142506142506143;
          result[1] += 0;
          result[2] += 0.9250614250614252;
          result[3] += 0.06633906633906635;
          result[4] += 0;
          result[5] += 0.0024570024570024574;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96) ) ) {
          result[0] += 0.006289308176100629;
          result[1] += 0.0031446540880503146;
          result[2] += 0;
          result[3] += 0.015723270440251572;
          result[4] += 0.940251572327044;
          result[5] += 0.03459119496855346;
        } else {
          result[0] += 0;
          result[1] += 0.8095238095238095;
          result[2] += 0;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.9207920792079208;
          result[1] += 0;
          result[2] += 0.009900990099009901;
          result[3] += 0;
          result[4] += 0.06930693069306931;
          result[5] += 0;
        } else {
          result[0] += 0.010128913443830571;
          result[1] += 0.003683241252302026;
          result[2] += 0.013812154696132596;
          result[3] += 0.08195211786372007;
          result[4] += 0.08287292817679558;
          result[5] += 0.8075506445672191;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.44472361809045224;
          result[1] += 0.0728643216080402;
          result[2] += 0.031407035175879394;
          result[3] += 0.16834170854271358;
          result[4] += 0.15954773869346733;
          result[5] += 0.12311557788944724;
        } else {
          result[0] += 0.9170013386880858;
          result[1] += 0.005354752342704151;
          result[2] += 0.04149933065595717;
          result[3] += 0.01874163319946453;
          result[4] += 0.014725568942436413;
          result[5] += 0.0026773761713520753;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0023094688221709007;
          result[1] += 0.9884526558891455;
          result[2] += 0;
          result[3] += 0.009237875288683603;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3425925925925926;
          result[4] += 0.06481481481481481;
          result[5] += 0.5925925925925926;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0.011764705882352941;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.7058823529411765;
          result[4] += 0;
          result[5] += 0.16470588235294117;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5578947368421052;
          result[3] += 0.38421052631578945;
          result[4] += 0.005263157894736842;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.13333333333333333;
          result[4] += 0.06666666666666667;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
          result[0] += 0.2641509433962264;
          result[1] += 0;
          result[2] += 0.5849056603773585;
          result[3] += 0.018867924528301886;
          result[4] += 0.09433962264150944;
          result[5] += 0.03773584905660377;
        } else {
          result[0] += 0.0024600246002460025;
          result[1] += 0.0012300123001230013;
          result[2] += 0.932349323493235;
          result[3] += 0.05043050430504305;
          result[4] += 0;
          result[5] += 0.013530135301353014;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.03703703703703704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9296296296296297;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0.45652173913043476;
          result[1] += 0.010869565217391304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2391304347826087;
          result[5] += 0.29347826086956524;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04842931937172775;
          result[4] += 0.031413612565445025;
          result[5] += 0.9201570680628273;
        } else {
          result[0] += 0.009950248756218905;
          result[1] += 0.01990049751243781;
          result[2] += 0.07462686567164178;
          result[3] += 0.39303482587064675;
          result[4] += 0.08706467661691543;
          result[5] += 0.4154228855721393;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.5681818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4318181818181818;
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
          result[0] += 0.7556071152358855;
          result[1] += 0.025522041763341066;
          result[2] += 0.0015467904098994587;
          result[3] += 0.016241299303944315;
          result[4] += 0.12374323279195669;
          result[5] += 0.07733952049497293;
        } else {
          result[0] += 0.19742489270386265;
          result[1] += 0.019313304721030045;
          result[2] += 0.2017167381974249;
          result[3] += 0.3133047210300429;
          result[4] += 0.06223175965665236;
          result[5] += 0.20600858369098712;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666669;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666667;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17391304347826086;
          result[3] += 0.7391304347826086;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0.06382978723404255;
          result[2] += 0.574468085106383;
          result[3] += 0.14893617021276595;
          result[4] += 0.0425531914893617;
          result[5] += 0.1702127659574468;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6818181818181819;
          result[3] += 0.29090909090909095;
          result[4] += 0;
          result[5] += 0.027272727272727275;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
          result[0] += 0.10714285714285714;
          result[1] += 0;
          result[2] += 0.6785714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0.00752823086574655;
          result[1] += 0;
          result[2] += 0.9335006273525722;
          result[3] += 0.058971141781681315;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0056179775280898875;
          result[1] += 0.011235955056179775;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9719101123595506;
          result[5] += 0.011235955056179775;
        } else {
          result[0] += 0.3359375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.40625;
          result[5] += 0.2578125;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0023781212841854932;
          result[2] += 0.0011890606420927466;
          result[3] += 0.04994054696789536;
          result[4] += 0.06420927467300833;
          result[5] += 0.882282996432818;
        } else {
          result[0] += 0.006802721088435374;
          result[1] += 0.09183673469387756;
          result[2] += 0.023809523809523808;
          result[3] += 0.5170068027210885;
          result[4] += 0.02040816326530612;
          result[5] += 0.3401360544217687;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953161592505855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00468384074941452;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7328767123287672;
          result[1] += 0.026027397260273973;
          result[2] += 0.010273972602739725;
          result[3] += 0.02671232876712329;
          result[4] += 0.16301369863013698;
          result[5] += 0.0410958904109589;
        } else {
          result[0] += 0.13672922252010725;
          result[1] += 0.02680965147453083;
          result[2] += 0.22788203753351208;
          result[3] += 0.28418230563002683;
          result[4] += 0.064343163538874;
          result[5] += 0.26005361930294907;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.6419753086419753;
          result[4] += 0;
          result[5] += 0.13580246913580246;
        } else {
          result[0] += 0.35;
          result[1] += 0;
          result[2] += 0.45;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.15;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.008547008547008548;
          result[1] += 0;
          result[2] += 0.8717948717948718;
          result[3] += 0.09401709401709402;
          result[4] += 0;
          result[5] += 0.02564102564102564;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0029585798816568047;
          result[1] += 0;
          result[2] += 0.8520710059171598;
          result[3] += 0.1301775147928994;
          result[4] += 0;
          result[5] += 0.014792899408284023;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.013435700575815739;
          result[1] += 0;
          result[2] += 0.9539347408829175;
          result[3] += 0.03262955854126679;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008888888888888889;
          result[1] += 0.03111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9466666666666667;
          result[5] += 0.013333333333333334;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0784313725490196;
          result[4] += 0.20588235294117646;
          result[5] += 0.38235294117647056;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0031847133757961785;
          result[1] += 0.006369426751592357;
          result[2] += 0;
          result[3] += 0.049893842887473464;
          result[4] += 0.058386411889596604;
          result[5] += 0.8821656050955414;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6036585365853658;
          result[4] += 0;
          result[5] += 0.39634146341463417;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.972972972972973;
          result[2] += 0;
          result[3] += 0.0022522522522522522;
          result[4] += 0.024774774774774775;
          result[5] += 0;
        } else {
          result[0] += 0.46153846153846156;
          result[1] += 0.15384615384615385;
          result[2] += 0.07692307692307693;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8030303030303031;
          result[1] += 0.04015151515151516;
          result[2] += 0.0030303030303030307;
          result[3] += 0.021969696969696972;
          result[4] += 0.1196969696969697;
          result[5] += 0.012121212121212123;
        } else {
          result[0] += 0.20181818181818184;
          result[1] += 0.021818181818181823;
          result[2] += 0.21272727272727276;
          result[3] += 0.26363636363636367;
          result[4] += 0.06181818181818183;
          result[5] += 0.23818181818181822;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.7027027027027027;
          result[4] += 0;
          result[5] += 0.24324324324324326;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7708333333333334;
          result[3] += 0.20833333333333334;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.013477088948787063;
          result[1] += 0;
          result[2] += 0.9460916442048517;
          result[3] += 0.03773584905660377;
          result[4] += 0;
          result[5] += 0.0026954177897574125;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.0036363636363636364;
          result[2] += 0.02181818181818182;
          result[3] += 0.0036363636363636364;
          result[4] += 0.9527272727272728;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5370370370370371;
          result[5] += 0.42592592592592593;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0026109660574412533;
          result[2] += 0.0026109660574412533;
          result[3] += 0.037859007832898174;
          result[4] += 0.031331592689295036;
          result[5] += 0.9255874673629243;
        } else {
          result[0] += 0.1263001485884101;
          result[1] += 0.01337295690936107;
          result[2] += 0;
          result[3] += 0.3313521545319465;
          result[4] += 0.0549777117384844;
          result[5] += 0.4739970282317979;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.995433789954338;
          result[2] += 0;
          result[3] += 0.0022831050228310505;
          result[4] += 0.0022831050228310505;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
          result[0] += 0.17948717948717952;
          result[1] += 0.1730769230769231;
          result[2] += 0;
          result[3] += 0.025641025641025644;
          result[4] += 0.576923076923077;
          result[5] += 0.04487179487179488;
        } else {
          result[0] += 0.7675507020280812;
          result[1] += 0.038221528861154444;
          result[2] += 0.0405616224648986;
          result[3] += 0.0483619344773791;
          result[4] += 0.06630265210608424;
          result[5] += 0.0390015600624025;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14393939393939395;
          result[3] += 0.6060606060606061;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.04411764705882354;
          result[1] += 0;
          result[2] += 0.5441176470588236;
          result[3] += 0.32352941176470595;
          result[4] += 0.01470588235294118;
          result[5] += 0.0735294117647059;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)118.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8393574297188755;
          result[3] += 0.13253012048192772;
          result[4] += 0;
          result[5] += 0.028112449799196786;
        } else {
          result[0] += 0.6428571428571429;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
          result[0] += 0.008733624454148471;
          result[1] += 0;
          result[2] += 0.9039301310043668;
          result[3] += 0.07423580786026202;
          result[4] += 0;
          result[5] += 0.013100436681222707;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0.4583333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9778270509977828;
          result[3] += 0.019955654101995568;
          result[4] += 0;
          result[5] += 0.00221729490022173;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0.12269938650306748;
          result[1] += 0.003067484662576687;
          result[2] += 0;
          result[3] += 0.015337423312883436;
          result[4] += 0.7515337423312883;
          result[5] += 0.10736196319018405;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0.22448979591836735;
          result[4] += 0.04081632653061224;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014347202295552368;
          result[3] += 0.018651362984218076;
          result[4] += 0.028694404591104734;
          result[5] += 0.9512195121951219;
        } else {
          result[0] += 0.010416666666666666;
          result[1] += 0;
          result[2] += 0.022916666666666665;
          result[3] += 0.3333333333333333;
          result[4] += 0.10833333333333334;
          result[5] += 0.525;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9771689497716894;
          result[2] += 0;
          result[3] += 0.0045662100456621;
          result[4] += 0.01598173515981735;
          result[5] += 0.00228310502283105;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7469269703543022;
          result[1] += 0.044107013738250184;
          result[2] += 0.0014461315979754157;
          result[3] += 0.024584237165582067;
          result[4] += 0.13449023861171366;
          result[5] += 0.04844540853217643;
        } else {
          result[0] += 0.1485148514851485;
          result[1] += 0.009900990099009901;
          result[2] += 0.23267326732673269;
          result[3] += 0.349009900990099;
          result[4] += 0.034653465346534656;
          result[5] += 0.22524752475247525;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06060606060606061;
          result[3] += 0.030303030303030304;
          result[4] += 0.030303030303030304;
          result[5] += 0.8787878787878788;
        } else {
          result[0] += 0.05660377358490567;
          result[1] += 0.009433962264150945;
          result[2] += 0.22641509433962267;
          result[3] += 0.5660377358490567;
          result[4] += 0.01886792452830189;
          result[5] += 0.12264150943396228;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.10638297872340426;
          result[1] += 0.02127659574468085;
          result[2] += 0.3829787234042553;
          result[3] += 0.2978723404255319;
          result[4] += 0.02127659574468085;
          result[5] += 0.1702127659574468;
        } else {
          result[0] += 0.05732484076433121;
          result[1] += 0;
          result[2] += 0.8152866242038217;
          result[3] += 0.12101910828025478;
          result[4] += 0;
          result[5] += 0.006369426751592357;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0.20512820512820512;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04729729729729731;
          result[1] += 0;
          result[2] += 0.8581081081081082;
          result[3] += 0.0810810810810811;
          result[4] += 0;
          result[5] += 0.013513513513513516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9881889763779528;
          result[3] += 0.011811023622047244;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.0036101083032490976;
          result[2] += 0.010830324909747292;
          result[3] += 0.007220216606498195;
          result[4] += 0.9675090252707581;
          result[5] += 0.010830324909747292;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01291248206599713;
          result[4] += 0.03299856527977044;
          result[5] += 0.9540889526542324;
        } else {
          result[0] += 0.09555189456342669;
          result[1] += 0.008237232289950576;
          result[2] += 0.07084019769357495;
          result[3] += 0.30971993410214166;
          result[4] += 0.12685337726523888;
          result[5] += 0.38879736408566723;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0.005952380952380952;
          result[4] += 0.47023809523809523;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.6898034398034397;
          result[1] += 0.01044226044226044;
          result[2] += 0.0608108108108108;
          result[3] += 0.08660933660933659;
          result[4] += 0.06265356265356264;
          result[5] += 0.08968058968058967;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.002631578947368421;
          result[1] += 0.9868421052631579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010526315789473684;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.3875;
          result[4] += 0.0625;
          result[5] += 0.4875;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.06493506493506493;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.06493506493506493;
          result[4] += 0.012987012987012988;
          result[5] += 0.22077922077922077;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2916666666666667;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.01650943396226415;
          result[1] += 0;
          result[2] += 0.9091981132075472;
          result[3] += 0.0660377358490566;
          result[4] += 0;
          result[5] += 0.008254716981132075;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
          result[0] += 0.011494252873563218;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9655172413793104;
          result[5] += 0.022988505747126436;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.9523809523809523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.047619047619047616;
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
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          result[0] += 0.7672413793103449;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11206896551724138;
          result[5] += 0.1206896551724138;
        } else {
          result[0] += 0.009137055837563452;
          result[1] += 0.005076142131979695;
          result[2] += 0;
          result[3] += 0.06192893401015229;
          result[4] += 0.06192893401015229;
          result[5] += 0.8619289340101522;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.12903225806451613;
          result[1] += 0;
          result[2] += 0.016129032258064516;
          result[3] += 0.08064516129032258;
          result[4] += 0.03225806451612903;
          result[5] += 0.7419354838709677;
        } else {
          result[0] += 0.006309148264984227;
          result[1] += 0;
          result[2] += 0.028391167192429023;
          result[3] += 0.6971608832807571;
          result[4] += 0;
          result[5] += 0.26813880126182965;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
          result[0] += 0.05384615384615385;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.007692307692307693;
          result[4] += 0.5153846153846153;
          result[5] += 0.023076923076923078;
        } else {
          result[0] += 0.5273865414710485;
          result[1] += 0.028169014084507043;
          result[2] += 0.04225352112676056;
          result[3] += 0.12519561815336464;
          result[4] += 0.1643192488262911;
          result[5] += 0.11267605633802817;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          result[0] += 0.18546845124282985;
          result[1] += 0;
          result[2] += 0.6806883365200765;
          result[3] += 0.11567877629063099;
          result[4] += 0.002868068833652008;
          result[5] += 0.015296367112810709;
        } else {
          result[0] += 0.6615969581749049;
          result[1] += 0;
          result[2] += 0.3231939163498099;
          result[3] += 0.005069708491761723;
          result[4] += 0.008871989860583017;
          result[5] += 0.0012674271229404308;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.020242914979757085;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9392712550607287;
          result[5] += 0.04048582995951417;
        } else {
          result[0] += 0;
          result[1] += 0.9130434782608695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04386839481555334;
          result[1] += 0.0029910269192422734;
          result[2] += 0.005982053838484547;
          result[3] += 0.053838484546360914;
          result[4] += 0.05782652043868395;
          result[5] += 0.8354935194416749;
        } else {
          result[0] += 0;
          result[1] += 0.014354066985645933;
          result[2] += 0.05741626794258373;
          result[3] += 0.5454545454545454;
          result[4] += 0.03827751196172249;
          result[5] += 0.3444976076555024;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.06;
          result[3] += 0;
          result[4] += 0.74;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953379953379954;
          result[2] += 0;
          result[3] += 0.002331002331002331;
          result[4] += 0.002331002331002331;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0.19823788546255505;
          result[1] += 0.0881057268722467;
          result[2] += 0.039647577092511016;
          result[3] += 0.24669603524229075;
          result[4] += 0.09691629955947137;
          result[5] += 0.3303964757709251;
        } else {
          result[0] += 0.7813884785819794;
          result[1] += 0.03249630723781388;
          result[2] += 0.026587887740029542;
          result[3] += 0.03323485967503693;
          result[4] += 0.103397341211226;
          result[5] += 0.022895125553914326;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011627906976744186;
          result[3] += 0.5232558139534884;
          result[4] += 0.03488372093023256;
          result[5] += 0.43023255813953487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30434782608695654;
          result[3] += 0.6376811594202898;
          result[4] += 0;
          result[5] += 0.057971014492753624;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08571428571428572;
          result[3] += 0.05714285714285714;
          result[4] += 0.02857142857142857;
          result[5] += 0.8285714285714286;
        } else {
          result[0] += 0;
          result[1] += 0.12698412698412698;
          result[2] += 0.5555555555555556;
          result[3] += 0.12698412698412698;
          result[4] += 0.07936507936507936;
          result[5] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)124.5) ) ) {
          result[0] += 0.01891891891891892;
          result[1] += 0;
          result[2] += 0.7891891891891892;
          result[3] += 0.15135135135135136;
          result[4] += 0;
          result[5] += 0.04054054054054054;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.7073170731707317;
          result[3] += 0.2682926829268293;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9768211920529801;
          result[3] += 0.023178807947019868;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64.5) ) ) {
          result[0] += 0.016877637130801686;
          result[1] += 0.029535864978902954;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9156118143459916;
          result[5] += 0.0379746835443038;
        } else {
          result[0] += 0.5068493150684932;
          result[1] += 0.0136986301369863;
          result[2] += 0;
          result[3] += 0.06164383561643835;
          result[4] += 0.21232876712328766;
          result[5] += 0.2054794520547945;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0020898641588296763;
          result[1] += 0;
          result[2] += 0.0020898641588296763;
          result[3] += 0.06165099268547544;
          result[4] += 0.05747126436781609;
          result[5] += 0.8766980146290491;
        } else {
          result[0] += 0.005115089514066497;
          result[1] += 0.017902813299232736;
          result[2] += 0.010230179028132993;
          result[3] += 0.4859335038363171;
          result[4] += 0.04092071611253197;
          result[5] += 0.4398976982097187;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9047619047619048;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0.0069124423963133645;
          result[1] += 0.9585253456221198;
          result[2] += 0;
          result[3] += 0.004608294930875576;
          result[4] += 0.029953917050691243;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.06770833333333333;
          result[1] += 0.34375;
          result[2] += 0.005208333333333333;
          result[3] += 0.010416666666666666;
          result[4] += 0.5364583333333334;
          result[5] += 0.036458333333333336;
        } else {
          result[0] += 0.7607090103397339;
          result[1] += 0.0022156573116691282;
          result[2] += 0.05908419497784341;
          result[3] += 0.06203840472673559;
          result[4] += 0.0605612998522895;
          result[5] += 0.0553914327917282;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2719298245614035;
          result[3] += 0.5175438596491229;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0;
          result[2] += 0.6753246753246753;
          result[3] += 0.24675324675324675;
          result[4] += 0;
          result[5] += 0.06493506493506493;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
          result[0] += 0.014084507042253523;
          result[1] += 0;
          result[2] += 0.8732394366197184;
          result[3] += 0.0915492957746479;
          result[4] += 0;
          result[5] += 0.021126760563380285;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7789473684210526;
          result[3] += 0.22105263157894736;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9318885448916409;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.009287925696594427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9968454258675079;
          result[3] += 0.0031545741324921135;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
          result[0] += 0.004132231404958678;
          result[1] += 0.004132231404958678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9421487603305785;
          result[5] += 0.049586776859504134;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.038018433179723504;
          result[1] += 0.009216589861751152;
          result[2] += 0;
          result[3] += 0.02304147465437788;
          result[4] += 0.0587557603686636;
          result[5] += 0.8709677419354839;
        } else {
          result[0] += 0.007042253521126761;
          result[1] += 0;
          result[2] += 0.0035211267605633804;
          result[3] += 0.573943661971831;
          result[4] += 0;
          result[5] += 0.4154929577464789;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.09556313993174063;
          result[1] += 0.22525597269624575;
          result[2] += 0.037542662116040966;
          result[3] += 0.03412969283276451;
          result[4] += 0.5733788395904438;
          result[5] += 0.03412969283276451;
        } else {
          result[0] += 0.6523898199875853;
          result[1] += 0.0024829298572315328;
          result[2] += 0.08441961514587211;
          result[3] += 0.11235257603972686;
          result[4] += 0.054624456859093715;
          result[5] += 0.09373060211049036;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0.9874055415617129;
          result[2] += 0;
          result[3] += 0.0025188916876574307;
          result[4] += 0.005037783375314861;
          result[5] += 0.005037783375314861;
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.16666666666666666;
          result[4] += 0.03333333333333333;
          result[5] += 0.6833333333333333;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8125;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.11764705882352941;
          result[1] += 0;
          result[2] += 0.7254901960784313;
          result[3] += 0.09803921568627451;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.0070921985815602835;
          result[2] += 0.4326241134751773;
          result[3] += 0.46808510638297873;
          result[4] += 0;
          result[5] += 0.09219858156028368;
        } else {
          result[0] += 0.01775147928994083;
          result[1] += 0.01775147928994083;
          result[2] += 0.8402366863905325;
          result[3] += 0.07100591715976332;
          result[4] += 0;
          result[5] += 0.05325443786982249;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9654135338345865;
          result[3] += 0.03458646616541353;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.0044444444444444444;
          result[2] += 0.013333333333333334;
          result[3] += 0;
          result[4] += 0.9733333333333334;
          result[5] += 0.008888888888888889;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.3888888888888889;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02233502538071066;
          result[1] += 0.008121827411167513;
          result[2] += 0;
          result[3] += 0.03959390862944162;
          result[4] += 0.06192893401015229;
          result[5] += 0.868020304568528;
        } else {
          result[0] += 0.16056338028169015;
          result[1] += 0.04507042253521127;
          result[2] += 0.03943661971830986;
          result[3] += 0.39436619718309857;
          result[4] += 0.059154929577464786;
          result[5] += 0.30140845070422534;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.4367219917012448;
          result[1] += 0.0487551867219917;
          result[2] += 0.023858921161825725;
          result[3] += 0.11514522821576763;
          result[4] += 0.21161825726141079;
          result[5] += 0.16390041493775934;
        } else {
          result[0] += 0.9229651162790697;
          result[1] += 0;
          result[2] += 0.05232558139534884;
          result[3] += 0.01308139534883721;
          result[4] += 0.011627906976744186;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12;
          result[3] += 0.65;
          result[4] += 0;
          result[5] += 0.23;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0.1111111111111111;
          result[4] += 0.08333333333333333;
          result[5] += 0.3888888888888889;
        } else {
          result[0] += 0.010526315789473684;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.28421052631578947;
          result[4] += 0;
          result[5] += 0.021052631578947368;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7407407407407407;
          result[3] += 0.1925925925925926;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01646090534979424;
          result[1] += 0;
          result[2] += 0.9286694101508917;
          result[3] += 0.04663923182441701;
          result[4] += 0.0027434842249657062;
          result[5] += 0.0054869684499314125;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9666666666666667;
          result[5] += 0.03333333333333333;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03203342618384401;
          result[4] += 0.01532033426183844;
          result[5] += 0.9526462395543176;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.18604651162790697;
          result[4] += 0.3023255813953488;
          result[5] += 0.4883720930232558;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          result[0] += 0.791044776119403;
          result[1] += 0.06716417910447763;
          result[2] += 0;
          result[3] += 0.05223880597014926;
          result[4] += 0.06716417910447763;
          result[5] += 0.02238805970149254;
        } else {
          result[0] += 0.016366612111292964;
          result[1] += 0.009819967266775777;
          result[2] += 0.01309328968903437;
          result[3] += 0.3911620294599018;
          result[4] += 0.054009819967266774;
          result[5] += 0.5155482815057283;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0.288135593220339;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6610169491525424;
          result[5] += 0.01694915254237288;
        } else {
          result[0] += 0;
          result[1] += 0.9707207207207207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02927927927927928;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8873626373626375;
          result[1] += 0.011904761904761908;
          result[2] += 0.001831501831501832;
          result[3] += 0.014652014652014655;
          result[4] += 0.07600732600732601;
          result[5] += 0.008241758241758244;
        } else {
          result[0] += 0.29304029304029305;
          result[1] += 0.018315018315018316;
          result[2] += 0.25274725274725274;
          result[3] += 0.21245421245421245;
          result[4] += 0.054945054945054944;
          result[5] += 0.1684981684981685;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108) ) ) {
          result[0] += 0.02727272727272727;
          result[1] += 0.16363636363636364;
          result[2] += 0.24545454545454545;
          result[3] += 0.21818181818181817;
          result[4] += 0.16363636363636364;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0.038461538461538464;
          result[2] += 0.038461538461538464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5163934426229508;
          result[3] += 0.319672131147541;
          result[4] += 0;
          result[5] += 0.16393442622950818;
        } else {
          result[0] += 0.015116279069767442;
          result[1] += 0;
          result[2] += 0.9174418604651163;
          result[3] += 0.06279069767441861;
          result[4] += 0;
          result[5] += 0.004651162790697674;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.7;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0.03921568627450981;
          result[1] += 0.1316526610644258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.792717086834734;
          result[5] += 0.03641456582633054;
        } else {
          result[0] += 0.7573839662447257;
          result[1] += 0.06329113924050633;
          result[2] += 0;
          result[3] += 0.006329113924050633;
          result[4] += 0.09282700421940929;
          result[5] += 0.08016877637130802;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04936854190585534;
          result[4] += 0.05625717566016074;
          result[5] += 0.894374282433984;
        } else {
          result[0] += 0.1421161825726141;
          result[1] += 0.01867219917012448;
          result[2] += 0.056016597510373446;
          result[3] += 0.35477178423236516;
          result[4] += 0.13278008298755187;
          result[5] += 0.29564315352697096;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
          result[0] += 0.9847457627118644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.003389830508474576;
          result[4] += 0.011864406779661017;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.1;
          result[4] += 0.4;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)117) ) ) {
          result[0] += 0.02702702702702702;
          result[1] += 0;
          result[2] += 0.8108108108108106;
          result[3] += 0.08108108108108107;
          result[4] += 0;
          result[5] += 0.08108108108108107;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.9189189189189187;
          result[1] += 0;
          result[2] += 0.040540540540540536;
          result[3] += 0.02702702702702702;
          result[4] += 0.01351351351351351;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.021582733812949645;
          result[1] += 0;
          result[2] += 0.6690647482014389;
          result[3] += 0.2517985611510792;
          result[4] += 0;
          result[5] += 0.057553956834532384;
        } else {
          result[0] += 0.016222479721900347;
          result[1] += 0;
          result[2] += 0.9316338354577057;
          result[3] += 0.04982618771726535;
          result[4] += 0;
          result[5] += 0.002317497103128621;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          result[0] += 0.003205128205128205;
          result[1] += 0.003205128205128205;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0.07051282051282051;
        } else {
          result[0] += 0.0625;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007451564828614009;
          result[3] += 0.020864381520119227;
          result[4] += 0.020864381520119227;
          result[5] += 0.9508196721311475;
        } else {
          result[0] += 0.06835443037974684;
          result[1] += 0.020253164556962026;
          result[2] += 0.02531645569620253;
          result[3] += 0.3620253164556962;
          result[4] += 0.0759493670886076;
          result[5] += 0.4481012658227848;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91.5) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0.24324324324324326;
          result[2] += 0;
          result[3] += 0.018018018018018018;
          result[4] += 0.7027027027027027;
          result[5] += 0.009009009009009009;
        } else {
          result[0] += 0.0023148148148148147;
          result[1] += 0.9652777777777778;
          result[2] += 0;
          result[3] += 0.009259259259259259;
          result[4] += 0.023148148148148147;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0.42065009560229444;
          result[1] += 0.0038240917782026767;
          result[2] += 0.06118546845124283;
          result[3] += 0.19120458891013384;
          result[4] += 0.11281070745697896;
          result[5] += 0.21032504780114722;
        } else {
          result[0] += 0.8528846153846155;
          result[1] += 0.034615384615384624;
          result[2] += 0.02115384615384616;
          result[3] += 0.012500000000000002;
          result[4] += 0.06730769230769232;
          result[5] += 0.01153846153846154;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.005050505050505051;
          result[1] += 0.030303030303030304;
          result[2] += 0.050505050505050504;
          result[3] += 0.4494949494949495;
          result[4] += 0.05555555555555555;
          result[5] += 0.4090909090909091;
        } else {
          result[0] += 0.10909090909090909;
          result[1] += 0;
          result[2] += 0.5636363636363636;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.05454545454545454;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          result[0] += 0.043343653250774;
          result[1] += 0;
          result[2] += 0.6996904024767803;
          result[3] += 0.18575851393188858;
          result[4] += 0.006191950464396286;
          result[5] += 0.065015479876161;
        } else {
          result[0] += 0.9259259259259259;
          result[1] += 0;
          result[2] += 0.07407407407407407;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5161290322580645;
          result[3] += 0.4838709677419355;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013333333333333334;
          result[2] += 0.86;
          result[3] += 0.09333333333333334;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0018484288354898336;
          result[1] += 0;
          result[2] += 0.9907578558225508;
          result[3] += 0.0073937153419593345;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95.5) ) ) {
          result[0] += 0.007220216606498195;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9675090252707581;
          result[5] += 0.02527075812274368;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          result[0] += 0.015267175572519083;
          result[1] += 0.0021810250817884407;
          result[2] += 0.0010905125408942203;
          result[3] += 0.05888767720828789;
          result[4] += 0.04362050163576881;
          result[5] += 0.8789531079607416;
        } else {
          result[0] += 0.36666666666666664;
          result[1] += 0.06666666666666667;
          result[2] += 0.013333333333333334;
          result[3] += 0.09333333333333334;
          result[4] += 0.14;
          result[5] += 0.32;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9873949579831933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012605042016806723;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7917637917637919;
          result[1] += 0.019425019425019428;
          result[2] += 0.007770007770007771;
          result[3] += 0.04273504273504274;
          result[4] += 0.0916860916860917;
          result[5] += 0.04662004662004663;
        } else {
          result[0] += 0.1270358306188925;
          result[1] += 0.014657980456026058;
          result[2] += 0.17100977198697068;
          result[3] += 0.36319218241042345;
          result[4] += 0.0732899022801303;
          result[5] += 0.250814332247557;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.10344827586206896;
          result[2] += 0.13793103448275862;
          result[3] += 0;
          result[4] += 0.06896551724137931;
          result[5] += 0.6896551724137931;
        } else {
          result[0] += 0.014705882352941176;
          result[1] += 0.029411764705882353;
          result[2] += 0.19117647058823528;
          result[3] += 0.4264705882352941;
          result[4] += 0.014705882352941176;
          result[5] += 0.3235294117647059;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5161290322580645;
          result[3] += 0.46774193548387094;
          result[4] += 0;
          result[5] += 0.016129032258064516;
        } else {
          result[0] += 0.08;
          result[1] += 0;
          result[2] += 0.92;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          result[0] += 0.0012453300124533001;
          result[1] += 0;
          result[2] += 0.937733499377335;
          result[3] += 0.05105853051058531;
          result[4] += 0;
          result[5] += 0.009962640099626401;
        } else {
          result[0] += 0.46153846153846156;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9914893617021276;
          result[5] += 0.00851063829787234;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.10714285714285714;
          result[3] += 0.21428571428571427;
          result[4] += 0.17857142857142858;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04410441044104411;
          result[1] += 0.0009000900090009;
          result[2] += 0;
          result[3] += 0.063006300630063;
          result[4] += 0.08640864086408641;
          result[5] += 0.8055805580558055;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02631578947368421;
          result[3] += 0.6776315789473685;
          result[4] += 0.006578947368421052;
          result[5] += 0.2894736842105263;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.06589147286821706;
          result[1] += 0.4883720930232558;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.44573643410852715;
          result[5] += 0;
        } else {
          result[0] += 0.7398160315374507;
          result[1] += 0.011826544021024968;
          result[2] += 0.035479632063074903;
          result[3] += 0.08607095926412615;
          result[4] += 0.06176084099868594;
          result[5] += 0.06504599211563732;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08029197080291971;
          result[3] += 0.656934306569343;
          result[4] += 0.0072992700729927005;
          result[5] += 0.25547445255474455;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.08571428571428572;
          result[4] += 0.08571428571428572;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
          result[0] += 0.004;
          result[1] += 0;
          result[2] += 0.776;
          result[3] += 0.184;
          result[4] += 0;
          result[5] += 0.036;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0.8714285714285714;
          result[3] += 0.10952380952380952;
          result[4] += 0;
          result[5] += 0.009523809523809525;
        } else {
          result[0] += 0.0019880715705765406;
          result[1] += 0;
          result[2] += 0.9821073558648111;
          result[3] += 0.013916500994035786;
          result[4] += 0;
          result[5] += 0.0019880715705765406;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00749063670411985;
          result[4] += 0.9812734082397003;
          result[5] += 0.011235955056179775;
        } else {
          result[0] += 0;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.045454545454545456;
          result[2] += 0.1590909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0.4318181818181818;
          result[5] += 0.18181818181818182;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9411764705882353;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.004207573632538569;
          result[1] += 0.001402524544179523;
          result[2] += 0.005610098176718092;
          result[3] += 0.028050490883590462;
          result[4] += 0.02664796633941094;
          result[5] += 0.9340813464235624;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.23863636363636365;
          result[1] += 0.005681818181818182;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.20454545454545456;
          result[5] += 0.48863636363636365;
        } else {
          result[0] += 0.0058309037900874635;
          result[1] += 0.0029154518950437317;
          result[2] += 0.029154518950437316;
          result[3] += 0.6064139941690962;
          result[4] += 0.0058309037900874635;
          result[5] += 0.3498542274052478;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          result[0] += 0.4528735632183909;
          result[1] += 0.10804597701149428;
          result[2] += 0.04597701149425288;
          result[3] += 0.11494252873563221;
          result[4] += 0.17471264367816094;
          result[5] += 0.10344827586206899;
        } else {
          result[0] += 0.8501984126984125;
          result[1] += 0.029761904761904753;
          result[2] += 0.01686507936507936;
          result[3] += 0.01587301587301587;
          result[4] += 0.08035714285714285;
          result[5] += 0.006944444444444442;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0.012987012987012984;
          result[1] += 0.012987012987012984;
          result[2] += 0.43722943722943713;
          result[3] += 0.3636363636363636;
          result[4] += 0.0476190476190476;
          result[5] += 0.1255411255411255;
        } else {
          result[0] += 0.022604951560818085;
          result[1] += 0.0032292787944025836;
          result[2] += 0.8858988159311088;
          result[3] += 0.061356297093649086;
          result[4] += 0.006458557588805167;
          result[5] += 0.02045209903121636;
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
