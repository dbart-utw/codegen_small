
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.016483516483516484;
          result[1] += 0.03296703296703297;
          result[2] += 0;
          result[3] += 0.02197802197802198;
          result[4] += 0.8324175824175825;
          result[5] += 0.09615384615384616;
        } else {
          result[0] += 0.1319358816276202;
          result[1] += 0.006165228113440197;
          result[2] += 0.011713933415536375;
          result[3] += 0.15906288532675708;
          result[4] += 0.08199753390875462;
          result[5] += 0.6091245376078915;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
          result[0] += 0.02459016393442623;
          result[1] += 0.5655737704918032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4098360655737705;
          result[5] += 0;
        } else {
          result[0] += 0.757679180887372;
          result[1] += 0.010238907849829351;
          result[2] += 0.07167235494880546;
          result[3] += 0.07167235494880546;
          result[4] += 0.03668941979522184;
          result[5] += 0.05204778156996587;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16901408450704225;
          result[3] += 0.5774647887323944;
          result[4] += 0.028169014084507043;
          result[5] += 0.22535211267605634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7633587786259542;
          result[3] += 0.20610687022900764;
          result[4] += 0;
          result[5] += 0.030534351145038167;
        } else {
          result[0] += 0.3953488372093023;
          result[1] += 0;
          result[2] += 0.6046511627906976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.525;
          result[3] += 0.45;
          result[4] += 0;
          result[5] += 0.025;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9777777777777777;
          result[3] += 0.022222222222222223;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
          result[0] += 0.33333333333333337;
          result[1] += 0;
          result[2] += 0.33333333333333337;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.22222222222222224;
        } else {
          result[0] += 0.0028129395218002813;
          result[1] += 0;
          result[2] += 0.9437412095639943;
          result[3] += 0.04781997187060478;
          result[4] += 0;
          result[5] += 0.005625879043600563;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
          result[0] += 0.012448132780082987;
          result[1] += 0.024896265560165973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9585062240663901;
          result[5] += 0.004149377593360996;
        } else {
          result[0] += 0;
          result[1] += 0.21875;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0.34375;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.016778523489932886;
          result[1] += 0.0011185682326621924;
          result[2] += 0;
          result[3] += 0.04138702460850112;
          result[4] += 0.06375838926174497;
          result[5] += 0.8769574944071589;
        } else {
          result[0] += 0.06506849315068493;
          result[1] += 0.010273972602739725;
          result[2] += 0.017123287671232876;
          result[3] += 0.4554794520547945;
          result[4] += 0.0547945205479452;
          result[5] += 0.3972602739726027;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004807692307692308;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7719298245614035;
          result[1] += 0.05415713196033562;
          result[2] += 0.0015255530129672007;
          result[3] += 0.02440884820747521;
          result[4] += 0.10907704042715484;
          result[5] += 0.038901601830663615;
        } else {
          result[0] += 0.11920529801324503;
          result[1] += 0.01545253863134658;
          result[2] += 0.15011037527593818;
          result[3] += 0.24503311258278146;
          result[4] += 0.16556291390728478;
          result[5] += 0.304635761589404;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.006329113924050633;
          result[1] += 0.0759493670886076;
          result[2] += 0.10759493670886076;
          result[3] += 0.4810126582278481;
          result[4] += 0.0379746835443038;
          result[5] += 0.2911392405063291;
        } else {
          result[0] += 0.11363636363636363;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.06818181818181818;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8611111111111112;
          result[3] += 0.06944444444444445;
          result[4] += 0;
          result[5] += 0.06944444444444445;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.47058823529411764;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0.13793103448275862;
          result[1] += 0.034482758620689655;
          result[2] += 0.27586206896551724;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0.3448275862068966;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0.09134615384615384;
          result[1] += 0;
          result[2] += 0.7836538461538461;
          result[3] += 0.1201923076923077;
          result[4] += 0;
          result[5] += 0.004807692307692308;
        } else {
          result[0] += 0.00322061191626409;
          result[1] += 0;
          result[2] += 0.9581320450885669;
          result[3] += 0.03864734299516908;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.04564315352697095;
          result[2] += 0;
          result[3] += 0.008298755186721992;
          result[4] += 0.8589211618257261;
          result[5] += 0.08713692946058091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.020757020757020756;
          result[1] += 0.002442002442002442;
          result[2] += 0.004884004884004884;
          result[3] += 0.0231990231990232;
          result[4] += 0.08424908424908426;
          result[5] += 0.8644688644688645;
        } else {
          result[0] += 0.10975609756097561;
          result[1] += 0.006097560975609756;
          result[2] += 0.04573170731707317;
          result[3] += 0.38414634146341464;
          result[4] += 0.08841463414634146;
          result[5] += 0.36585365853658536;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91) ) ) {
          result[0] += 0.030927835051546393;
          result[1] += 0.14432989690721648;
          result[2] += 0.020618556701030927;
          result[3] += 0.010309278350515464;
          result[4] += 0.7835051546391752;
          result[5] += 0.010309278350515464;
        } else {
          result[0] += 0.0021097046413502112;
          result[1] += 0.9599156118143461;
          result[2] += 0.0021097046413502112;
          result[3] += 0.0042194092827004225;
          result[4] += 0.029535864978902957;
          result[5] += 0.0021097046413502112;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0.011834319526627219;
          result[2] += 0.005917159763313609;
          result[3] += 0.2603550295857988;
          result[4] += 0.07692307692307693;
          result[5] += 0.4911242603550296;
        } else {
          result[0] += 0.7885756676557863;
          result[1] += 0.028189910979228485;
          result[2] += 0.028931750741839762;
          result[3] += 0.04302670623145401;
          result[4] += 0.07492581602373888;
          result[5] += 0.03635014836795252;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03409090909090909;
          result[2] += 0.022727272727272728;
          result[3] += 0.23863636363636365;
          result[4] += 0.011363636363636364;
          result[5] += 0.6931818181818182;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0.2;
          result[3] += 0.03333333333333333;
          result[4] += 0.1;
          result[5] += 0.6333333333333333;
        } else {
          result[0] += 0.004807692307692308;
          result[1] += 0.009615384615384616;
          result[2] += 0.34615384615384615;
          result[3] += 0.5576923076923077;
          result[4] += 0.004807692307692308;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
          result[0] += 0.2;
          result[1] += 0.3333333333333333;
          result[2] += 0.26666666666666666;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.9302325581395349;
          result[1] += 0;
          result[2] += 0.06976744186046512;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6788990825688074;
          result[3] += 0.25688073394495414;
          result[4] += 0;
          result[5] += 0.06422018348623854;
        } else {
          result[0] += 0.023837902264600717;
          result[1] += 0;
          result[2] += 0.9141835518474375;
          result[3] += 0.05244338498212158;
          result[4] += 0;
          result[5] += 0.009535160905840287;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957627118644068;
          result[5] += 0.00423728813559322;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08196721311475409;
          result[4] += 0.5245901639344263;
          result[5] += 0.39344262295081966;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02938090241343127;
          result[1] += 0.005246589716684155;
          result[2] += 0.001049317943336831;
          result[3] += 0.055613850996852045;
          result[4] += 0.060860440713536204;
          result[5] += 0.8478488982161595;
        } else {
          result[0] += 0.03802281368821293;
          result[1] += 0.0038022813688212928;
          result[2] += 0.034220532319391636;
          result[3] += 0.5019011406844106;
          result[4] += 0.026615969581749048;
          result[5] += 0.39543726235741444;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7149627623561273;
          result[1] += 0.05754908598510494;
          result[2] += 0.015572105619498984;
          result[3] += 0.03588354773188896;
          result[4] += 0.15233581584292485;
          result[5] += 0.023696682464454975;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0.016483516483516484;
          result[2] += 0.2857142857142857;
          result[3] += 0.28296703296703296;
          result[4] += 0.07417582417582418;
          result[5] += 0.18681318681318682;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0;
        } else {
          result[0] += 0.002457002457002457;
          result[1] += 0.9975429975429976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.9375;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6956521739130435;
          result[4] += 0;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0.4523809523809524;
          result[3] += 0.32142857142857145;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012249443207126948;
          result[1] += 0.0011135857461024498;
          result[2] += 0.8897550111358574;
          result[3] += 0.0801781737193764;
          result[4] += 0;
          result[5] += 0.01670378619153675;
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
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007633587786259542;
          result[4] += 0.9809160305343512;
          result[5] += 0.011450381679389313;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.037486218302094816;
          result[1] += 0.0011025358324145535;
          result[2] += 0.0011025358324145535;
          result[3] += 0.050716648291069456;
          result[4] += 0.04630650496141125;
          result[5] += 0.8632855567805954;
        } else {
          result[0] += 0.05945945945945946;
          result[1] += 0.005405405405405406;
          result[2] += 0;
          result[3] += 0.4243243243243243;
          result[4] += 0.02972972972972973;
          result[5] += 0.4810810810810811;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.13761467889908258;
          result[2] += 0.009174311926605505;
          result[3] += 0.03669724770642202;
          result[4] += 0.7798165137614679;
          result[5] += 0.03669724770642202;
        } else {
          result[0] += 0;
          result[1] += 0.9844789356984479;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015521064301552107;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7770992366412214;
          result[1] += 0.035114503816793895;
          result[2] += 0.01984732824427481;
          result[3] += 0.0366412213740458;
          result[4] += 0.08854961832061069;
          result[5] += 0.042748091603053436;
        } else {
          result[0] += 0.12096774193548387;
          result[1] += 0.013440860215053764;
          result[2] += 0.2768817204301075;
          result[3] += 0.3064516129032258;
          result[4] += 0.10215053763440861;
          result[5] += 0.18010752688172044;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10810810810810811;
          result[3] += 0.43243243243243246;
          result[4] += 0.013513513513513514;
          result[5] += 0.44594594594594594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.053333333333333344;
          result[1] += 0.026666666666666672;
          result[2] += 0.8400000000000001;
          result[3] += 0.013333333333333336;
          result[4] += 0;
          result[5] += 0.06666666666666668;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.75;
        } else {
          result[0] += 0.011363636363636364;
          result[1] += 0;
          result[2] += 0.7926136363636364;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.008522727272727272;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008048289738430584;
          result[1] += 0;
          result[2] += 0.9517102615694165;
          result[3] += 0.04024144869215292;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.024691358024691357;
          result[1] += 0.09567901234567901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8364197530864198;
          result[5] += 0.043209876543209874;
        } else {
          result[0] += 0.7212643678160919;
          result[1] += 0.04597701149425287;
          result[2] += 0;
          result[3] += 0.014367816091954023;
          result[4] += 0.13218390804597702;
          result[5] += 0.08620689655172414;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0022650056625141564;
          result[1] += 0.006795016987542469;
          result[2] += 0.013590033975084938;
          result[3] += 0.05096262740656852;
          result[4] += 0.0985277463193658;
          result[5] += 0.8278595696489242;
        } else {
          result[0] += 0.051351351351351354;
          result[1] += 0.02702702702702703;
          result[2] += 0.024324324324324326;
          result[3] += 0.4081081081081081;
          result[4] += 0.10810810810810811;
          result[5] += 0.3810810810810811;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.35714285714285715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6428571428571429;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.9519343493552169;
          result[1] += 0;
          result[2] += 0.010550996483001172;
          result[3] += 0.009378663540445486;
          result[4] += 0.021101992966002344;
          result[5] += 0.007033997655334115;
        } else {
          result[0] += 0.23870967741935484;
          result[1] += 0.01935483870967742;
          result[2] += 0.33548387096774196;
          result[3] += 0.09032258064516129;
          result[4] += 0.18064516129032257;
          result[5] += 0.13548387096774195;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16393442622950818;
          result[3] += 0.5573770491803278;
          result[4] += 0.01639344262295082;
          result[5] += 0.26229508196721313;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5913978494623656;
          result[3] += 0.3870967741935484;
          result[4] += 0;
          result[5] += 0.021505376344086023;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.009900990099009901;
          result[1] += 0;
          result[2] += 0.8910891089108911;
          result[3] += 0.07920792079207921;
          result[4] += 0;
          result[5] += 0.019801980198019802;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72) ) ) {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8885350318471338;
          result[3] += 0.09872611464968153;
          result[4] += 0;
          result[5] += 0.012738853503184714;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          result[0] += 0.2962962962962963;
          result[1] += 0;
          result[2] += 0.7037037037037037;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013215859030837005;
          result[1] += 0;
          result[2] += 0.960352422907489;
          result[3] += 0.02643171806167401;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104) ) ) {
          result[0] += 0.003424657534246575;
          result[1] += 0.003424657534246575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.910958904109589;
          result[5] += 0.0821917808219178;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06846473029045644;
          result[1] += 0.013485477178423237;
          result[2] += 0;
          result[3] += 0.04149377593360996;
          result[4] += 0.044605809128630707;
          result[5] += 0.8319502074688797;
        } else {
          result[0] += 0.027210884353741496;
          result[1] += 0;
          result[2] += 0.04081632653061224;
          result[3] += 0.6258503401360545;
          result[4] += 0.01020408163265306;
          result[5] += 0.29591836734693877;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.4642857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5357142857142857;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7292929292929294;
          result[1] += 0.030303030303030307;
          result[2] += 0.006734006734006735;
          result[3] += 0.03905723905723906;
          result[4] += 0.15555555555555559;
          result[5] += 0.03905723905723906;
        } else {
          result[0] += 0.1490909090909091;
          result[1] += 0.007272727272727274;
          result[2] += 0.35636363636363644;
          result[3] += 0.2981818181818182;
          result[4] += 0.04000000000000001;
          result[5] += 0.1490909090909091;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.717948717948718;
          result[4] += 0;
          result[5] += 0.28205128205128205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1388888888888889;
          result[3] += 0.19444444444444445;
          result[4] += 0.027777777777777776;
          result[5] += 0.6388888888888888;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.009174311926605505;
          result[2] += 0.8073394495412844;
          result[3] += 0.1437308868501529;
          result[4] += 0.0061162079510703364;
          result[5] += 0.03363914373088685;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8478260869565217;
          result[3] += 0.15217391304347827;
          result[4] += 0;
          result[5] += 0;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
          result[0] += 0.003401360544217687;
          result[1] += 0.01020408163265306;
          result[2] += 0;
          result[3] += 0.006802721088435374;
          result[4] += 0.9013605442176871;
          result[5] += 0.0782312925170068;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.008284023668639054;
          result[2] += 0.011834319526627219;
          result[3] += 0.047337278106508875;
          result[4] += 0.05798816568047337;
          result[5] += 0.8745562130177514;
        } else {
          result[0] += 0.15894039735099338;
          result[1] += 0.016556291390728478;
          result[2] += 0.046357615894039736;
          result[3] += 0.3708609271523179;
          result[4] += 0.08940397350993377;
          result[5] += 0.31788079470198677;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9833729216152018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0166270783847981;
          result[5] += 0;
        } else {
          result[0] += 0.02484472049689441;
          result[1] += 0.24223602484472054;
          result[2] += 0.01863354037267081;
          result[3] += 0.04968944099378882;
          result[4] += 0.6335403726708075;
          result[5] += 0.031055900621118016;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0.2599118942731278;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19383259911894274;
          result[4] += 0.07048458149779736;
          result[5] += 0.47577092511013214;
        } else {
          result[0] += 0.8481632653061224;
          result[1] += 0.019591836734693877;
          result[2] += 0.0163265306122449;
          result[3] += 0.036734693877551024;
          result[4] += 0.06612244897959184;
          result[5] += 0.013061224489795919;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10714285714285714;
          result[3] += 0.19047619047619047;
          result[4] += 0.07142857142857142;
          result[5] += 0.6309523809523809;
        } else {
          result[0] += 0.13333333333333333;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          result[0] += 0.00847457627118644;
          result[1] += 0;
          result[2] += 0.0847457627118644;
          result[3] += 0.7457627118644068;
          result[4] += 0;
          result[5] += 0.16101694915254236;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          result[0] += 0.018518518518518517;
          result[1] += 0.07407407407407407;
          result[2] += 0.3425925925925926;
          result[3] += 0.2222222222222222;
          result[4] += 0.018518518518518517;
          result[5] += 0.32407407407407407;
        } else {
          result[0] += 0.7678571428571429;
          result[1] += 0;
          result[2] += 0.19642857142857142;
          result[3] += 0.017857142857142856;
          result[4] += 0.017857142857142856;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5887850467289719;
          result[3] += 0.37383177570093457;
          result[4] += 0;
          result[5] += 0.037383177570093455;
        } else {
          result[0] += 0.014150943396226415;
          result[1] += 0;
          result[2] += 0.9186320754716981;
          result[3] += 0.06485849056603774;
          result[4] += 0;
          result[5] += 0.0023584905660377358;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107.5) ) ) {
          result[0] += 0.00796812749003984;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9322709163346613;
          result[5] += 0.05976095617529881;
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
          result[2] += 0.002911208151382824;
          result[3] += 0.03202328966521106;
          result[4] += 0.03784570596797671;
          result[5] += 0.9272197962154294;
        } else {
          result[0] += 0.08456659619450317;
          result[1] += 0.0507399577167019;
          result[2] += 0.02748414376321353;
          result[3] += 0.2727272727272727;
          result[4] += 0.0613107822410148;
          result[5] += 0.5031712473572939;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.055350553505535055;
          result[1] += 0.36531365313653136;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5645756457564576;
          result[5] += 0.014760147601476014;
        } else {
          result[0] += 0.7810734463276836;
          result[1] += 0.013418079096045197;
          result[2] += 0.019067796610169493;
          result[3] += 0.06850282485875706;
          result[4] += 0.0635593220338983;
          result[5] += 0.054378531073446326;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26666666666666666;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041666666666666664;
          result[4] += 0.125;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.011764705882352941;
          result[1] += 0.01764705882352941;
          result[2] += 0.07647058823529412;
          result[3] += 0.7176470588235294;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.021739130434782608;
          result[2] += 0.2826086956521739;
          result[3] += 0.17391304347826086;
          result[4] += 0.1956521739130435;
          result[5] += 0.32608695652173914;
        } else {
          result[0] += 0.1623931623931624;
          result[1] += 0;
          result[2] += 0.7008547008547008;
          result[3] += 0.08547008547008547;
          result[4] += 0.017094017094017096;
          result[5] += 0.03418803418803419;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.19230769230769232;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7807486631016043;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.0374331550802139;
        } else {
          result[0] += 0.011544011544011544;
          result[1] += 0;
          result[2] += 0.9393939393939394;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.001443001443001443;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
          result[0] += 0.024271844660194174;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9223300970873787;
          result[5] += 0.05339805825242718;
        } else {
          result[0] += 0.4567901234567901;
          result[1] += 0.2962962962962963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24691358024691357;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01764705882352941;
          result[4] += 0.04411764705882353;
          result[5] += 0.9382352941176471;
        } else {
          result[0] += 0.001976284584980237;
          result[1] += 0.03557312252964427;
          result[2] += 0.03359683794466403;
          result[3] += 0.30434782608695654;
          result[4] += 0.09288537549407115;
          result[5] += 0.5316205533596838;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955456570155902;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004454342984409799;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0.4556213017751479;
          result[1] += 0.054240631163708086;
          result[2] += 0.01873767258382643;
          result[3] += 0.10552268244575937;
          result[4] += 0.22189349112426035;
          result[5] += 0.14398422090729784;
        } else {
          result[0] += 0.9319620253164557;
          result[1] += 0;
          result[2] += 0.04430379746835443;
          result[3] += 0.011075949367088608;
          result[4] += 0.00949367088607595;
          result[5] += 0.0031645569620253164;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.8095238095238095;
          result[5] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0.041666666666666664;
          result[4] += 0.125;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0.013245033112582781;
          result[1] += 0.013245033112582781;
          result[2] += 0.1456953642384106;
          result[3] += 0.5894039735099338;
          result[4] += 0.013245033112582781;
          result[5] += 0.2251655629139073;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5370370370370371;
          result[3] += 0.2222222222222222;
          result[4] += 0.05555555555555555;
          result[5] += 0.18518518518518517;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112.5) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.2631578947368421;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
          result[0] += 0.01149425287356322;
          result[1] += 0;
          result[2] += 0.6551724137931035;
          result[3] += 0.2183908045977012;
          result[4] += 0;
          result[5] += 0.1149425287356322;
        } else {
          result[0] += 0.008130081300813009;
          result[1] += 0;
          result[2] += 0.9175377468060395;
          result[3] += 0.07200929152148665;
          result[4] += 0;
          result[5] += 0.0023228803716608595;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0091324200913242;
          result[1] += 0.0091324200913242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9817351598173516;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7333333333333333;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 1;
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.1;
        } else {
          result[0] += 0.002466091245376079;
          result[1] += 0;
          result[2] += 0.002466091245376079;
          result[3] += 0.05425400739827373;
          result[4] += 0.029593094944512947;
          result[5] += 0.9112207151664612;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8194444444444444;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09722222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.008021390374331552;
          result[1] += 0.0053475935828877;
          result[2] += 0.040106951871657755;
          result[3] += 0.3663101604278075;
          result[4] += 0.0962566844919786;
          result[5] += 0.4839572192513369;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7545317220543807;
          result[1] += 0.04154078549848943;
          result[2] += 0.0007552870090634441;
          result[3] += 0.02416918429003021;
          result[4] += 0.13141993957703926;
          result[5] += 0.04758308157099698;
        } else {
          result[0] += 0.20212765957446807;
          result[1] += 0.031914893617021274;
          result[2] += 0.1702127659574468;
          result[3] += 0.3882978723404255;
          result[4] += 0.06914893617021277;
          result[5] += 0.13829787234042554;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.03761755485893417;
          result[1] += 0.012539184952978056;
          result[2] += 0.3103448275862069;
          result[3] += 0.335423197492163;
          result[4] += 0.03761755485893417;
          result[5] += 0.2664576802507837;
        } else {
          result[0] += 0.0311587147030185;
          result[1] += 0.004868549172346641;
          result[2] += 0.8636806231742941;
          result[3] += 0.07400194741966894;
          result[4] += 0.0009737098344693282;
          result[5] += 0.02531645569620253;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0.8518518518518519;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14814814814814814;
          result[5] += 0;
        } else {
          result[0] += 0.010344827586206896;
          result[1] += 0.010344827586206896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8551724137931035;
          result[5] += 0.12413793103448276;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.04293193717277487;
          result[1] += 0.010471204188481676;
          result[2] += 0;
          result[3] += 0.05549738219895288;
          result[4] += 0.04712041884816754;
          result[5] += 0.8439790575916231;
        } else {
          result[0] += 0.003861003861003861;
          result[1] += 0;
          result[2] += 0.07335907335907337;
          result[3] += 0.555984555984556;
          result[4] += 0.011583011583011582;
          result[5] += 0.3552123552123552;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.739385065885798;
          result[1] += 0.03733528550512445;
          result[2] += 0.0021961932650073207;
          result[3] += 0.02562225475841874;
          result[4] += 0.13250366032210834;
          result[5] += 0.0629575402635432;
        } else {
          result[0] += 0.14182692307692307;
          result[1] += 0.016826923076923076;
          result[2] += 0.2668269230769231;
          result[3] += 0.34134615384615385;
          result[4] += 0.07692307692307693;
          result[5] += 0.15625;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.05128205128205128;
          result[3] += 0.15384615384615385;
          result[4] += 0.07692307692307693;
          result[5] += 0.6410256410256411;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08888888888888889;
          result[3] += 0.6888888888888889;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
          result[0] += 0.032448377581120944;
          result[1] += 0.008849557522123894;
          result[2] += 0.7138643067846607;
          result[3] += 0.20648967551622419;
          result[4] += 0;
          result[5] += 0.038348082595870206;
        } else {
          result[0] += 0.8260869565217391;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7846153846153846;
          result[3] += 0.2153846153846154;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9654545454545455;
          result[3] += 0.03090909090909091;
          result[4] += 0;
          result[5] += 0.0036363636363636364;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.004201680672268907;
          result[1] += 0.004201680672268907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9411764705882353;
          result[5] += 0.05042016806722689;
        } else {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02871410736579276;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04868913857677903;
          result[4] += 0.03495630461922597;
          result[5] += 0.8876404494382022;
        } else {
          result[0] += 0.06927710843373494;
          result[1] += 0.0391566265060241;
          result[2] += 0.015060240963855422;
          result[3] += 0.42771084337349397;
          result[4] += 0.05120481927710843;
          result[5] += 0.39759036144578314;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97.5) ) ) {
          result[0] += 0.005347593582887699;
          result[1] += 0.24598930481283418;
          result[2] += 0;
          result[3] += 0.0160427807486631;
          result[4] += 0.7058823529411764;
          result[5] += 0.026737967914438495;
        } else {
          result[0] += 0;
          result[1] += 0.9949748743718594;
          result[2] += 0.0025125628140703522;
          result[3] += 0;
          result[4] += 0.0025125628140703522;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8054711246200608;
          result[1] += 0.04559270516717325;
          result[2] += 0.007598784194528876;
          result[3] += 0.04179331306990881;
          result[4] += 0.07218844984802432;
          result[5] += 0.02735562310030395;
        } else {
          result[0] += 0.20588235294117646;
          result[1] += 0.03361344537815126;
          result[2] += 0.05042016806722689;
          result[3] += 0.24789915966386555;
          result[4] += 0.11764705882352941;
          result[5] += 0.3445378151260504;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12658227848101267;
          result[3] += 0.6708860759493671;
          result[4] += 0;
          result[5] += 0.20253164556962025;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03048780487804878;
          result[1] += 0;
          result[2] += 0.725609756097561;
          result[3] += 0.21341463414634146;
          result[4] += 0;
          result[5] += 0.03048780487804878;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)109) ) ) {
          result[0] += 0.02272727272727273;
          result[1] += 0;
          result[2] += 0.6742424242424243;
          result[3] += 0.16666666666666669;
          result[4] += 0.02272727272727273;
          result[5] += 0.11363636363636365;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0024691358024691358;
          result[1] += 0;
          result[2] += 0.9395061728395062;
          result[3] += 0.05308641975308642;
          result[4] += 0;
          result[5] += 0.0049382716049382715;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0.007905138339920948;
          result[1] += 0.03162055335968379;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9565217391304348;
          result[5] += 0.003952569169960474;
        } else {
          result[0] += 0.4074074074074074;
          result[1] += 0;
          result[2] += 0.009259259259259259;
          result[3] += 0.037037037037037035;
          result[4] += 0.28703703703703703;
          result[5] += 0.25925925925925924;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.007063572149344097;
          result[2] += 0.007063572149344097;
          result[3] += 0.06559031281533804;
          result[4] += 0.07568113017154389;
          result[5] += 0.8446014127144299;
        } else {
          result[0] += 0.007633587786259542;
          result[1] += 0.022900763358778626;
          result[2] += 0;
          result[3] += 0.6412213740458015;
          result[4] += 0.007633587786259542;
          result[5] += 0.32061068702290074;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.30120481927710846;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6987951807228916;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9912854030501089;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008714596949891068;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8061708860759493;
          result[1] += 0.027689873417721517;
          result[2] += 0.007120253164556962;
          result[3] += 0.0245253164556962;
          result[4] += 0.1060126582278481;
          result[5] += 0.028481012658227847;
        } else {
          result[0] += 0.17597765363128492;
          result[1] += 0.0223463687150838;
          result[2] += 0.11173184357541899;
          result[3] += 0.2681564245810056;
          result[4] += 0.06424581005586592;
          result[5] += 0.3575418994413408;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0.7727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1346153846153846;
          result[3] += 0.6634615384615384;
          result[4] += 0.019230769230769232;
          result[5] += 0.18269230769230768;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.02531645569620253;
          result[1] += 0;
          result[2] += 0.7468354430379747;
          result[3] += 0.21518987341772153;
          result[4] += 0;
          result[5] += 0.012658227848101266;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.033482142857142856;
          result[1] += 0;
          result[2] += 0.8147321428571429;
          result[3] += 0.13616071428571427;
          result[4] += 0;
          result[5] += 0.015625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.984251968503937;
          result[3] += 0.013779527559055118;
          result[4] += 0;
          result[5] += 0.001968503937007874;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
          result[0] += 0.013071895424836602;
          result[1] += 0.0032679738562091504;
          result[2] += 0;
          result[3] += 0.013071895424836602;
          result[4] += 0.934640522875817;
          result[5] += 0.03594771241830065;
        } else {
          result[0] += 0;
          result[1] += 0.7222222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2777777777777778;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.5828877005347594;
          result[1] += 0.03208556149732621;
          result[2] += 0;
          result[3] += 0.0106951871657754;
          result[4] += 0.22994652406417113;
          result[5] += 0.1443850267379679;
        } else {
          result[0] += 0.009398496240601503;
          result[1] += 0.006578947368421052;
          result[2] += 0.02913533834586466;
          result[3] += 0.11654135338345864;
          result[4] += 0.06484962406015038;
          result[5] += 0.7734962406015038;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55) ) ) {
          result[0] += 0;
          result[1] += 0.9976019184652278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002398081534772182;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4852941176470588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5147058823529411;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8529411764705883;
          result[1] += 0.023172905525846707;
          result[2] += 0;
          result[3] += 0.03297682709447416;
          result[4] += 0.05704099821746881;
          result[5] += 0.03386809269162211;
        } else {
          result[0] += 0.19322033898305085;
          result[1] += 0.01694915254237288;
          result[2] += 0.14915254237288136;
          result[3] += 0.33559322033898303;
          result[4] += 0.061016949152542375;
          result[5] += 0.2440677966101695;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.008403361344537815;
          result[2] += 0.058823529411764705;
          result[3] += 0.24369747899159663;
          result[4] += 0.07563025210084033;
          result[5] += 0.6134453781512605;
        } else {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8656716417910447;
          result[4] += 0;
          result[5] += 0.13432835820895522;
        } else {
          result[0] += 0.021276595744680854;
          result[1] += 0;
          result[2] += 0.4893617021276596;
          result[3] += 0.34042553191489366;
          result[4] += 0.010638297872340427;
          result[5] += 0.13829787234042556;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
          result[0] += 0.10000000000000002;
          result[1] += 0;
          result[2] += 0.7000000000000001;
          result[3] += 0.10000000000000002;
          result[4] += 0.10000000000000002;
          result[5] += 0;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00891089108910891;
          result[1] += 0;
          result[2] += 0.9148514851485149;
          result[3] += 0.06732673267326733;
          result[4] += 0;
          result[5] += 0.00891089108910891;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.00904977375565611;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9638009049773756;
          result[5] += 0.027149321266968326;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4722222222222222;
          result[5] += 0.2777777777777778;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0.9240506329113924;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06329113924050633;
          result[5] += 0.012658227848101266;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25925925925925924;
          result[5] += 0.7407407407407407;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018867924528301886;
          result[4] += 0.6981132075471698;
          result[5] += 0.2830188679245283;
        } else {
          result[0] += 0;
          result[1] += 0.008316008316008316;
          result[2] += 0.002079002079002079;
          result[3] += 0.057172557172557176;
          result[4] += 0.038461538461538464;
          result[5] += 0.893970893970894;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.016304347826086956;
          result[2] += 0;
          result[3] += 0.7119565217391305;
          result[4] += 0.02717391304347826;
          result[5] += 0.24456521739130435;
        } else {
          result[0] += 0;
          result[1] += 0.031007751937984496;
          result[2] += 0.023255813953488372;
          result[3] += 0.3178294573643411;
          result[4] += 0.046511627906976744;
          result[5] += 0.5813953488372093;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.3023255813953488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6976744186046512;
          result[5] += 0;
        } else {
          result[0] += 0.004618937644341801;
          result[1] += 0.9930715935334873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023094688221709007;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
          result[0] += 0.05343511450381679;
          result[1] += 0.20610687022900764;
          result[2] += 0.015267175572519083;
          result[3] += 0.030534351145038167;
          result[4] += 0.6641221374045801;
          result[5] += 0.030534351145038167;
        } else {
          result[0] += 0.7805232558139533;
          result[1] += 0.022529069767441855;
          result[2] += 0.026162790697674413;
          result[3] += 0.04869186046511627;
          result[4] += 0.07267441860465115;
          result[5] += 0.049418604651162774;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.8947368421052632;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.015957446808510637;
          result[1] += 0.005319148936170213;
          result[2] += 0.2127659574468085;
          result[3] += 0.48404255319148937;
          result[4] += 0.0797872340425532;
          result[5] += 0.20212765957446807;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6847290640394089;
          result[3] += 0.22167487684729065;
          result[4] += 0.009852216748768473;
          result[5] += 0.08374384236453201;
        } else {
          result[0] += 0.03638814016172507;
          result[1] += 0;
          result[2] += 0.9029649595687331;
          result[3] += 0.05121293800539083;
          result[4] += 0.0013477088948787063;
          result[5] += 0.008086253369272238;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014652014652014652;
          result[3] += 0.007326007326007326;
          result[4] += 0.9633699633699634;
          result[5] += 0.014652014652014652;
        } else {
          result[0] += 0;
          result[1] += 0.8636363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13636363636363635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03214695752009185;
          result[1] += 0.001148105625717566;
          result[2] += 0;
          result[3] += 0.045924225028702644;
          result[4] += 0.05625717566016074;
          result[5] += 0.8645235361653272;
        } else {
          result[0] += 0.09446254071661238;
          result[1] += 0.009771986970684038;
          result[2] += 0.026058631921824105;
          result[3] += 0.4527687296416938;
          result[4] += 0.11400651465798045;
          result[5] += 0.30293159609120524;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.1511627906976744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8372093023255814;
          result[5] += 0.011627906976744186;
        } else {
          result[0] += 0;
          result[1] += 0.9439461883408071;
          result[2] += 0;
          result[3] += 0.006726457399103139;
          result[4] += 0.04035874439461883;
          result[5] += 0.008968609865470852;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.83454398708636;
          result[1] += 0.026634382566585957;
          result[2] += 0.002421307506053269;
          result[3] += 0.021791767554479417;
          result[4] += 0.08071025020177562;
          result[5] += 0.03389830508474576;
        } else {
          result[0] += 0.2301980198019802;
          result[1] += 0.04950495049504951;
          result[2] += 0.09900990099009901;
          result[3] += 0.2623762376237624;
          result[4] += 0.04207920792079208;
          result[5] += 0.31683168316831684;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.140625;
          result[3] += 0.5234375;
          result[4] += 0;
          result[5] += 0.3359375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)121) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7734375;
          result[3] += 0.1796875;
          result[4] += 0;
          result[5] += 0.046875;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
          result[0] += 0.025;
          result[1] += 0;
          result[2] += 0.7333333333333333;
          result[3] += 0.19166666666666668;
          result[4] += 0.016666666666666666;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
          result[0] += 0.0013089005235602095;
          result[1] += 0;
          result[2] += 0.943717277486911;
          result[3] += 0.05366492146596859;
          result[4] += 0;
          result[5] += 0.0013089005235602095;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9902912621359223;
          result[5] += 0.009708737864077669;
        } else {
          result[0] += 0.25;
          result[1] += 0.1171875;
          result[2] += 0.0234375;
          result[3] += 0;
          result[4] += 0.2734375;
          result[5] += 0.3359375;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031914893617021274;
          result[4] += 0.04654255319148936;
          result[5] += 0.9215425531914894;
        } else {
          result[0] += 0;
          result[1] += 0.07308970099667775;
          result[2] += 0.05647840531561462;
          result[3] += 0.4053156146179402;
          result[4] += 0.029900332225913623;
          result[5] += 0.43521594684385384;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0.35585585585585583;
          result[1] += 0.03153153153153153;
          result[2] += 0.006006006006006006;
          result[3] += 0.15765765765765766;
          result[4] += 0.23723723723723725;
          result[5] += 0.21171171171171171;
        } else {
          result[0] += 0.8207171314741036;
          result[1] += 0.025896414342629483;
          result[2] += 0.04183266932270916;
          result[3] += 0.02091633466135458;
          result[4] += 0.07270916334661355;
          result[5] += 0.017928286852589643;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017857142857142856;
          result[2] += 0.05357142857142857;
          result[3] += 0.08928571428571429;
          result[4] += 0.2857142857142857;
          result[5] += 0.5535714285714286;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.037037037037037035;
          result[2] += 0.1037037037037037;
          result[3] += 0.5851851851851851;
          result[4] += 0.022222222222222223;
          result[5] += 0.2518518518518518;
        } else {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0.4864864864864865;
          result[3] += 0.44594594594594594;
          result[4] += 0;
          result[5] += 0.04054054054054054;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.016574585635359112;
          result[1] += 0.005524861878453038;
          result[2] += 0.729281767955801;
          result[3] += 0.12154696132596682;
          result[4] += 0.02209944751381215;
          result[5] += 0.1049723756906077;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0749063670411985;
          result[1] += 0;
          result[2] += 0.7752808988764045;
          result[3] += 0.14232209737827714;
          result[4] += 0;
          result[5] += 0.00749063670411985;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.972318339100346;
          result[3] += 0.02422145328719723;
          result[4] += 0;
          result[5] += 0.0034602076124567475;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.02214022140221402;
          result[1] += 0.02214022140221402;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.933579335793358;
          result[5] += 0.02214022140221402;
        } else {
          result[0] += 0.6360424028268552;
          result[1] += 0.010600706713780921;
          result[2] += 0.010600706713780921;
          result[3] += 0.042402826855123685;
          result[4] += 0.1943462897526502;
          result[5] += 0.1060070671378092;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0030864197530864196;
          result[1] += 0.00102880658436214;
          result[2] += 0;
          result[3] += 0.051440329218107;
          result[4] += 0.08333333333333333;
          result[5] += 0.8611111111111112;
        } else {
          result[0] += 0.025362318840579712;
          result[1] += 0.021739130434782608;
          result[2] += 0.025362318840579712;
          result[3] += 0.4891304347826087;
          result[4] += 0.057971014492753624;
          result[5] += 0.3804347826086957;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
          result[0] += 0.00228310502283105;
          result[1] += 0.9885844748858448;
          result[2] += 0;
          result[3] += 0.00228310502283105;
          result[4] += 0.00684931506849315;
          result[5] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.38095238095238093;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5476190476190477;
          result[5] += 0.023809523809523808;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8436606291706388;
          result[1] += 0.049571020019065784;
          result[2] += 0.010486177311725454;
          result[3] += 0.025738798856053388;
          result[4] += 0.049571020019065784;
          result[5] += 0.020972354623450908;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.14227642276422764;
          result[3] += 0.35772357723577236;
          result[4] += 0.08130081300813008;
          result[5] += 0.25203252032520324;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0379746835443038;
          result[3] += 0.45569620253164556;
          result[4] += 0.012658227848101266;
          result[5] += 0.4936708860759494;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0.8214285714285715;
          result[4] += 0;
          result[5] += 0.03571428571428572;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.014705882352941178;
          result[1] += 0;
          result[2] += 0.661764705882353;
          result[3] += 0.25000000000000006;
          result[4] += 0;
          result[5] += 0.0735294117647059;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
          result[0] += 0.012077294685990338;
          result[1] += 0;
          result[2] += 0.7681159420289855;
          result[3] += 0.15942028985507245;
          result[4] += 0.007246376811594203;
          result[5] += 0.05314009661835749;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006250000000000001;
          result[1] += 0;
          result[2] += 0.9656250000000001;
          result[3] += 0.028125000000000004;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0037313432835820895;
          result[4] += 0.917910447761194;
          result[5] += 0.07835820895522388;
        } else {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0.6923076923076923;
          result[4] += 0.15384615384615385;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.04369414101290963;
          result[1] += 0.0009930486593843098;
          result[2] += 0;
          result[3] += 0.05660377358490566;
          result[4] += 0.05461767626613704;
          result[5] += 0.8440913604766633;
        } else {
          result[0] += 0;
          result[1] += 0.0035587188612099642;
          result[2] += 0.03914590747330961;
          result[3] += 0.4875444839857651;
          result[4] += 0.060498220640569395;
          result[5] += 0.4092526690391459;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7700534759358288;
          result[1] += 0.0374331550802139;
          result[2] += 0.009167303284950344;
          result[3] += 0.02826585179526356;
          result[4] += 0.13674560733384264;
          result[5] += 0.01833460656990069;
        } else {
          result[0] += 0.2388758782201405;
          result[1] += 0.00468384074941452;
          result[2] += 0.22482435597189696;
          result[3] += 0.31381733021077285;
          result[4] += 0.02810304449648712;
          result[5] += 0.18969555035128804;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.12;
          result[4] += 0.04;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08571428571428572;
          result[3] += 0.7714285714285715;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47058823529411764;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5232558139534884;
          result[3] += 0.38372093023255816;
          result[4] += 0.023255813953488372;
          result[5] += 0.06976744186046512;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014379084967320262;
          result[1] += 0;
          result[2] += 0.9202614379084968;
          result[3] += 0.060130718954248374;
          result[4] += 0;
          result[5] += 0.005228758169934641;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.01937984496124031;
          result[1] += 0.011627906976744186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9496124031007752;
          result[5] += 0.01937984496124031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0.45454545454545453;
        }
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0.047619047619047616;
          result[4] += 0.5714285714285714;
          result[5] += 0.23809523809523808;
        } else {
          result[0] += 0.0030911901081916537;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015455950540958269;
          result[4] += 0.02009273570324575;
          result[5] += 0.9613601236476044;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.09409190371991247;
          result[1] += 0.015317286652078774;
          result[2] += 0.04814004376367615;
          result[3] += 0.1838074398249453;
          result[4] += 0.12910284463894967;
          result[5] += 0.5295404814004376;
        } else {
          result[0] += 0;
          result[1] += 0.030973451327433628;
          result[2] += 0.048672566371681415;
          result[3] += 0.6637168141592921;
          result[4] += 0.022123893805309734;
          result[5] += 0.2345132743362832;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9923664122137404;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007633587786259542;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.19587628865979384;
          result[2] += 0;
          result[3] += 0.06185567010309279;
          result[4] += 0.6701030927835052;
          result[5] += 0.07216494845360825;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          result[0] += 0.2073170731707317;
          result[1] += 0.04878048780487805;
          result[2] += 0.06910569105691057;
          result[3] += 0.25203252032520324;
          result[4] += 0.08943089430894309;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.8245315161839865;
          result[1] += 0.02640545144804089;
          result[2] += 0.017035775127768316;
          result[3] += 0.0374787052810903;
          result[4] += 0.07836456558773426;
          result[5] += 0.0161839863713799;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.10869565217391304;
          result[1] += 0.17391304347826086;
          result[2] += 0.021739130434782608;
          result[3] += 0.10869565217391304;
          result[4] += 0.13043478260869565;
          result[5] += 0.45652173913043476;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32432432432432434;
          result[3] += 0.5027027027027027;
          result[4] += 0.010810810810810811;
          result[5] += 0.16216216216216217;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.375;
          result[1] += 0.375;
          result[2] += 0.20833333333333334;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02247191011235955;
          result[1] += 0.0030643513789581204;
          result[2] += 0.9019407558733401;
          result[3] += 0.056179775280898875;
          result[4] += 0;
          result[5] += 0.01634320735444331;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
          result[0] += 0.03322259136212625;
          result[1] += 0.0033222591362126247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9302325581395349;
          result[5] += 0.03322259136212625;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.9296482412060302;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06030150753768844;
          result[5] += 0.010050251256281407;
        } else {
          result[0] += 0.17525773195876287;
          result[1] += 0.1134020618556701;
          result[2] += 0.020618556701030927;
          result[3] += 0.1134020618556701;
          result[4] += 0.32989690721649484;
          result[5] += 0.24742268041237114;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          result[0] += 0.003215434083601286;
          result[1] += 0.0021436227224008574;
          result[2] += 0;
          result[3] += 0.03644158628081458;
          result[4] += 0.06966773847802786;
          result[5] += 0.8885316184351554;
        } else {
          result[0] += 0.08;
          result[1] += 0.10285714285714286;
          result[2] += 0.04;
          result[3] += 0.14285714285714285;
          result[4] += 0.32;
          result[5] += 0.3142857142857143;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0707070707070707;
          result[3] += 0.26262626262626265;
          result[4] += 0.020202020202020204;
          result[5] += 0.6464646464646465;
        } else {
          result[0] += 0.046822742474916385;
          result[1] += 0.0033444816053511705;
          result[2] += 0.046822742474916385;
          result[3] += 0.6220735785953178;
          result[4] += 0;
          result[5] += 0.2809364548494983;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9931662870159453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00683371298405467;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8995584988962473;
          result[1] += 0.017660044150110375;
          result[2] += 0.018763796909492272;
          result[3] += 0.011037527593818985;
          result[4] += 0.05187637969094923;
          result[5] += 0.0011037527593818985;
        } else {
          result[0] += 0.28426395939086296;
          result[1] += 0;
          result[2] += 0.25888324873096447;
          result[3] += 0.2436548223350254;
          result[4] += 0.1116751269035533;
          result[5] += 0.10152284263959391;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          result[0] += 0.0390625;
          result[1] += 0.0078125;
          result[2] += 0.390625;
          result[3] += 0.21875;
          result[4] += 0.0234375;
          result[5] += 0.3203125;
        } else {
          result[0] += 0.4897959183673469;
          result[1] += 0.3469387755102041;
          result[2] += 0.061224489795918366;
          result[3] += 0;
          result[4] += 0.10204081632653061;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.6060606060606061;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.012752391073326248;
          result[1] += 0;
          result[2] += 0.8884165781083954;
          result[3] += 0.09032943676939426;
          result[4] += 0;
          result[5] += 0.008501594048884165;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.01639344262295082;
          result[1] += 0.05573770491803279;
          result[2] += 0;
          result[3] += 0.01639344262295082;
          result[4] += 0.839344262295082;
          result[5] += 0.07213114754098361;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08181818181818182;
          result[5] += 0.19090909090909092;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.001201923076923077;
          result[2] += 0;
          result[3] += 0.052884615384615384;
          result[4] += 0.028846153846153848;
          result[5] += 0.9170673076923077;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0.20085470085470086;
          result[4] += 0.23931623931623933;
          result[5] += 0.4829059829059829;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9845132743362832;
          result[2] += 0;
          result[3] += 0.01327433628318584;
          result[4] += 0.0022123893805309734;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.45161290322580644;
          result[2] += 0;
          result[3] += 0.016129032258064516;
          result[4] += 0.532258064516129;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8025316455696203;
          result[1] += 0.04050632911392406;
          result[2] += 0.027004219409282704;
          result[3] += 0.025316455696202535;
          result[4] += 0.06751054852320676;
          result[5] += 0.03713080168776372;
        } else {
          result[0] += 0.17582417582417584;
          result[1] += 0.045787545787545784;
          result[2] += 0.1794871794871795;
          result[3] += 0.36996336996337;
          result[4] += 0.045787545787545784;
          result[5] += 0.18315018315018314;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.030303030303030304;
          result[4] += 0.15151515151515152;
          result[5] += 0.7878787878787878;
        } else {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0.08333333333333333;
          result[3] += 0.48333333333333334;
          result[4] += 0.05;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8823529411764706;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0.7777777777777778;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0.18362282878411912;
          result[4] += 0;
          result[5] += 0.01488833746898263;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9643605870020965;
          result[3] += 0.03563941299790356;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004310344827586207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9827586206896551;
          result[5] += 0.01293103448275862;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.017410228509249184;
          result[1] += 0.004352557127312296;
          result[2] += 0;
          result[3] += 0.03808487486398259;
          result[4] += 0.05005440696409141;
          result[5] += 0.8900979325353645;
        } else {
          result[0] += 0.03115264797507788;
          result[1] += 0.01557632398753894;
          result[2] += 0.01557632398753894;
          result[3] += 0.48598130841121495;
          result[4] += 0.04984423676012461;
          result[5] += 0.40186915887850466;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0.3701923076923077;
          result[2] += 0;
          result[3] += 0.009615384615384616;
          result[4] += 0.5576923076923077;
          result[5] += 0;
        } else {
          result[0] += 0.7199236155315086;
          result[1] += 0.01336728198599618;
          result[2] += 0.05983450031826862;
          result[3] += 0.08656906429026098;
          result[4] += 0.050922978994271166;
          result[5] += 0.06938255887969447;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0.9975903614457832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024096385542168677;
          result[5] += 0;
        } else {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.2857142857142857;
          result[2] += 0.08571428571428572;
          result[3] += 0.02857142857142857;
          result[4] += 0.45714285714285713;
          result[5] += 0;
        } else {
          result[0] += 0.028169014084507043;
          result[1] += 0.056338028169014086;
          result[2] += 0.014084507042253521;
          result[3] += 0.19718309859154928;
          result[4] += 0.07042253521126761;
          result[5] += 0.6338028169014085;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8055555555555556;
          result[4] += 0;
          result[5] += 0.19444444444444445;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.5222222222222223;
          result[3] += 0.32222222222222224;
          result[4] += 0.03333333333333333;
          result[5] += 0.08888888888888889;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0.002544529262086514;
          result[1] += 0;
          result[2] += 0.8244274809160306;
          result[3] += 0.1450381679389313;
          result[4] += 0;
          result[5] += 0.027989821882951654;
        } else {
          result[0] += 0.009633911368015413;
          result[1] += 0;
          result[2] += 0.9614643545279383;
          result[3] += 0.028901734104046242;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)44.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00411522633744856;
          result[1] += 0.012345679012345678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9547325102880658;
          result[5] += 0.02880658436213992;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02570093457943925;
          result[1] += 0.002336448598130841;
          result[2] += 0;
          result[3] += 0.03387850467289719;
          result[4] += 0.038551401869158876;
          result[5] += 0.8995327102803738;
        } else {
          result[0] += 0.03003003003003003;
          result[1] += 0.06006006006006006;
          result[2] += 0.012012012012012012;
          result[3] += 0.48348348348348347;
          result[4] += 0.03303303303303303;
          result[5] += 0.3813813813813814;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.08733624454148471;
          result[1] += 0.25327510917030566;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6419213973799127;
          result[5] += 0.017467248908296942;
        } else {
          result[0] += 0.6552757793764988;
          result[1] += 0.01498800959232614;
          result[2] += 0.07014388489208633;
          result[3] += 0.10611510791366907;
          result[4] += 0.06414868105515588;
          result[5] += 0.08932853717026379;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
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
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10344827586206896;
          result[3] += 0.06896551724137931;
          result[4] += 0.1724137931034483;
          result[5] += 0.6551724137931034;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.07317073170731707;
          result[2] += 0.12195121951219512;
          result[3] += 0.5609756097560976;
          result[4] += 0.024390243902439025;
          result[5] += 0.1951219512195122;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5074626865671642;
          result[3] += 0.31343283582089554;
          result[4] += 0;
          result[5] += 0.1791044776119403;
        } else {
          result[0] += 0.04347826086956522;
          result[1] += 0;
          result[2] += 0.8130434782608696;
          result[3] += 0.1347826086956522;
          result[4] += 0;
          result[5] += 0.008695652173913045;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)122.5) ) ) {
          result[0] += 0.005;
          result[1] += 0;
          result[2] += 0.895;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9186046511627907;
          result[3] += 0.08139534883720931;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004975124378109453;
          result[1] += 0;
          result[2] += 0.9950248756218906;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.959349593495935;
          result[5] += 0.04065040650406504;
        } else {
          result[0] += 0;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0.5263157894736842;
          result[4] += 0.2631578947368421;
          result[5] += 0.15789473684210525;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)78.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.021739130434782608;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.30434782608695654;
          result[5] += 0.6521739130434783;
        } else {
          result[0] += 0.6933333333333334;
          result[1] += 0;
          result[2] += 0.013333333333333334;
          result[3] += 0.03333333333333333;
          result[4] += 0.23333333333333334;
          result[5] += 0.02666666666666667;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007246376811594203;
          result[3] += 0.017391304347826087;
          result[4] += 0.014492753623188406;
          result[5] += 0.9608695652173913;
        } else {
          result[0] += 0.003257328990228013;
          result[1] += 0.011400651465798045;
          result[2] += 0.011400651465798045;
          result[3] += 0.4153094462540717;
          result[4] += 0.050488599348534204;
          result[5] += 0.50814332247557;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0.05172413793103449;
          result[1] += 0.31034482758620696;
          result[2] += 0.025862068965517244;
          result[3] += 0;
          result[4] += 0.5862068965517242;
          result[5] += 0.025862068965517244;
        } else {
          result[0] += 0.7819660014781966;
          result[1] += 0.03695491500369549;
          result[2] += 0.022172949002217297;
          result[3] += 0.04878048780487805;
          result[4] += 0.07243163340724317;
          result[5] += 0.037694013303769404;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9974554707379135;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002544529262086514;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.025;
          result[2] += 0.1375;
          result[3] += 0.625;
          result[4] += 0.0125;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5762711864406781;
          result[3] += 0.35593220338983056;
          result[4] += 0.016949152542372885;
          result[5] += 0.050847457627118654;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0.078125;
          result[1] += 0.0625;
          result[2] += 0.46875;
          result[3] += 0.171875;
          result[4] += 0.046875;
          result[5] += 0.171875;
        } else {
          result[0] += 0.01639344262295082;
          result[1] += 0;
          result[2] += 0.8985655737704918;
          result[3] += 0.07479508196721311;
          result[4] += 0.0030737704918032786;
          result[5] += 0.007172131147540984;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.005494505494505495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9945054945054945;
          result[5] += 0;
        } else {
          result[0] += 0.03896103896103896;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7792207792207793;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015503875968992248;
          result[3] += 0.02945736434108527;
          result[4] += 0.024806201550387597;
          result[5] += 0.9441860465116279;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.03636363636363636;
          result[2] += 0.00909090909090909;
          result[3] += 0.32545454545454544;
          result[4] += 0.07636363636363637;
          result[5] += 0.4618181818181818;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.42105263157894735;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5789473684210527;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.08839779005524862;
          result[1] += 0.11602209944751381;
          result[2] += 0.03867403314917127;
          result[3] += 0.027624309392265192;
          result[4] += 0.6574585635359116;
          result[5] += 0.0718232044198895;
        } else {
          result[0] += 0.7168674698795181;
          result[1] += 0.019410977242302542;
          result[2] += 0.03614457831325301;
          result[3] += 0.07228915662650602;
          result[4] += 0.0642570281124498;
          result[5] += 0.09103078982597054;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03703703703703704;
          result[3] += 0.7407407407407408;
          result[4] += 0;
          result[5] += 0.22222222222222224;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.5128205128205128;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3023255813953488;
          result[3] += 0.3488372093023256;
          result[4] += 0;
          result[5] += 0.3488372093023256;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.7439024390243902;
          result[3] += 0.18292682926829268;
          result[4] += 0;
          result[5] += 0.04878048780487805;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40816326530612246;
          result[3] += 0.4897959183673469;
          result[4] += 0;
          result[5] += 0.10204081632653061;
        } else {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.7304347826086957;
          result[3] += 0.0782608695652174;
          result[4] += 0.017391304347826087;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.5625;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0012315270935960591;
          result[1] += 0;
          result[2] += 0.9334975369458128;
          result[3] += 0.06280788177339902;
          result[4] += 0;
          result[5] += 0.0024630541871921183;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4166666666666667;
          result[5] += 0.5833333333333334;
        } else {
          result[0] += 0.003968253968253969;
          result[1] += 0.007936507936507938;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9484126984126985;
          result[5] += 0.03968253968253969;
        }
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0.3;
        } else {
          result[0] += 0.0013513513513513514;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02702702702702703;
          result[4] += 0.025675675675675677;
          result[5] += 0.9459459459459459;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          result[0] += 0.68;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.13333333333333333;
          result[5] += 0.04;
        } else {
          result[0] += 0.0020964360587002098;
          result[1] += 0.018867924528301886;
          result[2] += 0.0041928721174004195;
          result[3] += 0.37945492662473795;
          result[4] += 0.0440251572327044;
          result[5] += 0.5513626834381551;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.3793103448275862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6206896551724138;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954128440366973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045871559633027525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.17218543046357615;
          result[1] += 0.12582781456953643;
          result[2] += 0;
          result[3] += 0.046357615894039736;
          result[4] += 0.6357615894039735;
          result[5] += 0.019867549668874173;
        } else {
          result[0] += 0.7891207153502235;
          result[1] += 0.01639344262295082;
          result[2] += 0.02608047690014903;
          result[3] += 0.05588673621460507;
          result[4] += 0.05812220566318927;
          result[5] += 0.05439642324888227;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.09302325581395349;
          result[2] += 0.13953488372093023;
          result[3] += 0.42441860465116277;
          result[4] += 0.12209302325581395;
          result[5] += 0.22093023255813954;
        } else {
          result[0] += 0.07228915662650602;
          result[1] += 0;
          result[2] += 0.572289156626506;
          result[3] += 0.25903614457831325;
          result[4] += 0;
          result[5] += 0.0963855421686747;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.7317073170731707;
          result[1] += 0;
          result[2] += 0.21951219512195122;
          result[3] += 0.04878048780487805;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01091703056768559;
          result[1] += 0;
          result[2] += 0.8820960698689957;
          result[3] += 0.09279475982532752;
          result[4] += 0;
          result[5] += 0.014192139737991268;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004081632653061225;
          result[4] += 0.9836734693877551;
          result[5] += 0.012244897959183673;
        } else {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0.16666666666666666;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.6056338028169014;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.39436619718309857;
          result[5] += 0;
        } else {
          result[0] += 0.0008438818565400844;
          result[1] += 0.0016877637130801688;
          result[2] += 0.008438818565400843;
          result[3] += 0.14430379746835442;
          result[4] += 0.039662447257383965;
          result[5] += 0.8050632911392405;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.07983193277310924;
          result[1] += 0.3697478991596639;
          result[2] += 0;
          result[3] += 0.025210084033613446;
          result[4] += 0.5042016806722689;
          result[5] += 0.02100840336134454;
        } else {
          result[0] += 0.8130841121495327;
          result[1] += 0.008626887131560028;
          result[2] += 0.029475197699496764;
          result[3] += 0.06182602444284687;
          result[4] += 0.04888569374550683;
          result[5] += 0.038102084831056794;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.9880952380952381;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011904761904761904;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14705882352941177;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0.7647058823529411;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09615384615384616;
          result[3] += 0.6730769230769231;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37735849056603776;
          result[3] += 0.16981132075471697;
          result[4] += 0.018867924528301886;
          result[5] += 0.4339622641509434;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0.21052631578947367;
          result[3] += 0.39473684210526316;
          result[4] += 0.13157894736842105;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6958762886597938;
          result[3] += 0.28350515463917525;
          result[4] += 0;
          result[5] += 0.020618556701030927;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0.01019108280254777;
          result[1] += 0.0025477707006369425;
          result[2] += 0.9159235668789809;
          result[3] += 0.05987261146496815;
          result[4] += 0.005095541401273885;
          result[5] += 0.006369426751592357;
        } else {
          result[0] += 0.425;
          result[1] += 0;
          result[2] += 0.55;
          result[3] += 0;
          result[4] += 0.025;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.011235955056179775;
          result[2] += 0;
          result[3] += 0.00749063670411985;
          result[4] += 0.9550561797752809;
          result[5] += 0.026217228464419477;
        } else {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.696969696969697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06060606060606061;
          result[4] += 0.19696969696969696;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.0008688097306689834;
          result[1] += 0.0034752389226759338;
          result[2] += 0.0008688097306689834;
          result[3] += 0.14335360556038226;
          result[4] += 0.05386620330147698;
          result[5] += 0.7975673327541268;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.04201680672268908;
          result[1] += 0.2184873949579832;
          result[2] += 0;
          result[3] += 0.008403361344537815;
          result[4] += 0.7310924369747899;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.984375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8309294871794872;
          result[1] += 0.04807692307692308;
          result[2] += 0.011217948717948718;
          result[3] += 0.027243589743589744;
          result[4] += 0.06490384615384616;
          result[5] += 0.017628205128205128;
        } else {
          result[0] += 0.11818181818181818;
          result[1] += 0.025;
          result[2] += 0.2840909090909091;
          result[3] += 0.2909090909090909;
          result[4] += 0.07045454545454545;
          result[5] += 0.21136363636363636;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.16;
          result[2] += 0.24;
          result[3] += 0;
          result[4] += 0.36;
          result[5] += 0.24;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.875;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36;
          result[3] += 0.53;
          result[4] += 0;
          result[5] += 0.11;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0.7346938775510204;
          result[3] += 0.1836734693877551;
          result[4] += 0;
          result[5] += 0.061224489795918366;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6071428571428571;
          result[3] += 0.32142857142857145;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.030716723549488054;
          result[1] += 0;
          result[2] += 0.8156996587030717;
          result[3] += 0.13993174061433447;
          result[4] += 0;
          result[5] += 0.013651877133105802;
        } else {
          result[0] += 0.003703703703703704;
          result[1] += 0;
          result[2] += 0.9666666666666667;
          result[3] += 0.02962962962962963;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.004366812227074236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9737991266375546;
          result[5] += 0.021834061135371178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08695652173913043;
          result[4] += 0.6086956521739131;
          result[5] += 0.30434782608695654;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.8255813953488372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13953488372093023;
          result[5] += 0.03488372093023256;
        } else {
          result[0] += 0.0024154589371980675;
          result[1] += 0.008051529790660225;
          result[2] += 0.011272141706924315;
          result[3] += 0.17391304347826086;
          result[4] += 0.05636070853462158;
          result[5] += 0.7479871175523349;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.18681318681318682;
          result[2] += 0.02197802197802198;
          result[3] += 0.01098901098901099;
          result[4] += 0.7802197802197802;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9683544303797469;
          result[2] += 0;
          result[3] += 0.004219409282700422;
          result[4] += 0.027426160337552744;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8308580858085809;
          result[1] += 0.0429042904290429;
          result[2] += 0.0165016501650165;
          result[3] += 0.019801980198019802;
          result[4] += 0.066006600660066;
          result[5] += 0.02392739273927393;
        } else {
          result[0] += 0.18622448979591838;
          result[1] += 0.025510204081632654;
          result[2] += 0.26785714285714285;
          result[3] += 0.24744897959183673;
          result[4] += 0.08928571428571429;
          result[5] += 0.1836734693877551;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)48) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24242424242424243;
          result[3] += 0;
          result[4] += 0.12121212121212122;
          result[5] += 0.6363636363636364;
        } else {
          result[0] += 0.03278688524590164;
          result[1] += 0;
          result[2] += 0.32786885245901637;
          result[3] += 0.4262295081967213;
          result[4] += 0;
          result[5] += 0.21311475409836064;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0.7741935483870968;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00916380297823597;
          result[1] += 0;
          result[2] += 0.9198167239404353;
          result[3] += 0.06529209621993129;
          result[4] += 0;
          result[5] += 0.00572737686139748;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9516129032258065;
          result[5] += 0.016129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0.0784313725490196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5294117647058824;
          result[5] += 0.39215686274509803;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.04056795131845842;
          result[1] += 0.007099391480730223;
          result[2] += 0;
          result[3] += 0.04259634888438134;
          result[4] += 0.057809330628803245;
          result[5] += 0.8519269776876268;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.625;
          result[4] += 0.016666666666666666;
          result[5] += 0.3416666666666667;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7564841498559078;
          result[1] += 0.04755043227665707;
          result[2] += 0;
          result[3] += 0.025216138328530265;
          result[4] += 0.1426512968299712;
          result[5] += 0.02809798270893372;
        } else {
          result[0] += 0.1593625498007968;
          result[1] += 0.0199203187250996;
          result[2] += 0.25697211155378485;
          result[3] += 0.26095617529880477;
          result[4] += 0.09362549800796813;
          result[5] += 0.20916334661354583;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6060606060606061;
          result[4] += 0;
          result[5] += 0.3939393939393939;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.045454545454545456;
          result[4] += 0.045454545454545456;
          result[5] += 0.7272727272727273;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5573770491803279;
          result[3] += 0.3606557377049181;
          result[4] += 0;
          result[5] += 0.0819672131147541;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.7;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.6000000000000001;
          result[1] += 0.30000000000000004;
          result[2] += 0;
          result[3] += 0.10000000000000002;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0012004801920768304;
          result[1] += 0;
          result[2] += 0.9195678271308522;
          result[3] += 0.06842737094837933;
          result[4] += 0.0012004801920768304;
          result[5] += 0.009603841536614643;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.004424778761061947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9823008849557522;
          result[5] += 0.01327433628318584;
        } else {
          result[0] += 0.10344827586206896;
          result[1] += 0.1724137931034483;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3793103448275862;
          result[5] += 0.3448275862068966;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029411764705882353;
          result[4] += 0.38235294117647056;
          result[5] += 0.5882352941176471;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.6153846153846154;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.34615384615384615;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03075030750307503;
          result[4] += 0.04551045510455105;
          result[5] += 0.923739237392374;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0.052083333333333336;
          result[1] += 0.026041666666666668;
          result[2] += 0.020833333333333332;
          result[3] += 0.17708333333333334;
          result[4] += 0.13541666666666666;
          result[5] += 0.5885416666666666;
        } else {
          result[0] += 0.03829787234042553;
          result[1] += 0.01702127659574468;
          result[2] += 0.02127659574468085;
          result[3] += 0.6;
          result[4] += 0.02127659574468085;
          result[5] += 0.3021276595744681;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9974293059125964;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002570694087403599;
          result[5] += 0;
        } else {
          result[0] += 0.006289308176100629;
          result[1] += 0.4025157232704403;
          result[2] += 0;
          result[3] += 0.025157232704402517;
          result[4] += 0.559748427672956;
          result[5] += 0.006289308176100629;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8582342954159593;
          result[1] += 0.02461799660441426;
          result[2] += 0.0050933786078098476;
          result[3] += 0.022071307300509338;
          result[4] += 0.07640067911714771;
          result[5] += 0.013582342954159592;
        } else {
          result[0] += 0.3552631578947369;
          result[1] += 0.052631578947368425;
          result[2] += 0.02192982456140351;
          result[3] += 0.23245614035087722;
          result[4] += 0.13157894736842107;
          result[5] += 0.206140350877193;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16233766233766234;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.2662337662337662;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5974025974025974;
          result[3] += 0.2987012987012987;
          result[4] += 0;
          result[5] += 0.1038961038961039;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.6614583333333334;
          result[3] += 0.203125;
          result[4] += 0.010416666666666666;
          result[5] += 0.10416666666666667;
        } else {
          result[0] += 0.023755656108597284;
          result[1] += 0;
          result[2] += 0.917420814479638;
          result[3] += 0.049773755656108594;
          result[4] += 0.0011312217194570137;
          result[5] += 0.007918552036199095;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
          result[0] += 0.012;
          result[1] += 0.008;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.948;
          result[5] += 0.032;
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
          result[0] += 0.05307855626326964;
          result[1] += 0.013800424628450107;
          result[2] += 0;
          result[3] += 0.03078556263269639;
          result[4] += 0.054140127388535034;
          result[5] += 0.8481953290870489;
        } else {
          result[0] += 0.03283582089552239;
          result[1] += 0;
          result[2] += 0.01791044776119403;
          result[3] += 0.5402985074626866;
          result[4] += 0.0029850746268656717;
          result[5] += 0.4059701492537313;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9725400457665904;
          result[2] += 0;
          result[3] += 0.004576659038901602;
          result[4] += 0.018306636155606407;
          result[5] += 0.004576659038901602;
        } else {
          result[0] += 0.027210884353741496;
          result[1] += 0.2925170068027211;
          result[2] += 0.04081632653061224;
          result[3] += 0.006802721088435374;
          result[4] += 0.6122448979591837;
          result[5] += 0.02040816326530612;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.07246376811594203;
          result[1] += 0.26811594202898553;
          result[2] += 0.057971014492753624;
          result[3] += 0.014492753623188406;
          result[4] += 0.5507246376811594;
          result[5] += 0.036231884057971016;
        } else {
          result[0] += 0.7498207885304659;
          result[1] += 0.0028673835125448024;
          result[2] += 0.03799283154121863;
          result[3] += 0.08315412186379927;
          result[4] += 0.04874551971326164;
          result[5] += 0.07741935483870967;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0.16923076923076924;
          result[2] += 0.12307692307692308;
          result[3] += 0.15384615384615385;
          result[4] += 0.046153846153846156;
          result[5] += 0.49230769230769234;
        } else {
          result[0] += 0.03529411764705882;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.18823529411764706;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7090909090909091;
          result[3] += 0.23636363636363636;
          result[4] += 0;
          result[5] += 0.05454545454545454;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.9285714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0.8106060606060606;
          result[3] += 0.14898989898989898;
          result[4] += 0;
          result[5] += 0.025252525252525252;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02376599634369287;
          result[1] += 0;
          result[2] += 0.9506398537477148;
          result[3] += 0.021937842778793418;
          result[4] += 0;
          result[5] += 0.003656307129798903;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0033112582781456954;
          result[4] += 0.8841059602649006;
          result[5] += 0.11258278145695365;
        } else {
          result[0] += 0;
          result[1] += 0.72;
          result[2] += 0;
          result[3] += 0.16;
          result[4] += 0.08;
          result[5] += 0.04;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.023310023310023312;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.046620046620046623;
          result[5] += 0.8846153846153846;
        } else {
          result[0] += 0.0708955223880597;
          result[1] += 0.011194029850746268;
          result[2] += 0.018656716417910446;
          result[3] += 0.4962686567164179;
          result[4] += 0.0708955223880597;
          result[5] += 0.332089552238806;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0.006493506493506495;
          result[1] += 0.9653679653679654;
          result[2] += 0;
          result[3] += 0.01731601731601732;
          result[4] += 0.010822510822510824;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0.36832740213523135;
          result[1] += 0.007117437722419929;
          result[2] += 0.017793594306049827;
          result[3] += 0.21530249110320288;
          result[4] += 0.11387900355871887;
          result[5] += 0.2775800711743773;
        } else {
          result[0] += 0.7845744680851063;
          result[1] += 0.04609929078014184;
          result[2] += 0.05230496453900709;
          result[3] += 0.012411347517730497;
          result[4] += 0.08953900709219859;
          result[5] += 0.015070921985815602;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.025;
          result[1] += 0.025;
          result[2] += 0.25;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.65;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11475409836065574;
          result[3] += 0.680327868852459;
          result[4] += 0;
          result[5] += 0.20491803278688525;
        } else {
          result[0] += 0.30434782608695654;
          result[1] += 0;
          result[2] += 0.6086956521739131;
          result[3] += 0;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.23076923076923078;
          result[1] += 0.7692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0.06852791878172589;
          result[1] += 0;
          result[2] += 0.7233502538071066;
          result[3] += 0.18781725888324874;
          result[4] += 0;
          result[5] += 0.02030456852791878;
        } else {
          result[0] += 0.020477815699658702;
          result[1] += 0;
          result[2] += 0.947098976109215;
          result[3] += 0.032423208191126277;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0.012658227848101266;
          result[1] += 0.029535864978902954;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9578059071729957;
          result[5] += 0;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0.008403361344537815;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.2184873949579832;
          result[5] += 0.3025210084033613;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.0034129692832764505;
          result[1] += 0.006825938566552901;
          result[2] += 0;
          result[3] += 0.034129692832764506;
          result[4] += 0.09215017064846416;
          result[5] += 0.863481228668942;
        } else {
          result[0] += 0.019801980198019802;
          result[1] += 0;
          result[2] += 0.052805280528052806;
          result[3] += 0.5478547854785478;
          result[4] += 0;
          result[5] += 0.3795379537953795;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.20833333333333334;
          result[4] += 0.7083333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975961538461539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002403846153846154;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7676161919040481;
          result[1] += 0.05922038980509746;
          result[2] += 0.002248875562218891;
          result[3] += 0.010494752623688158;
          result[4] += 0.11769115442278862;
          result[5] += 0.04272863568215893;
        } else {
          result[0] += 0.17225950782997762;
          result[1] += 0.026845637583892617;
          result[2] += 0.17225950782997762;
          result[3] += 0.2595078299776286;
          result[4] += 0.06711409395973154;
          result[5] += 0.30201342281879195;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.45;
          result[4] += 0;
          result[5] += 0.55;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21621621621621623;
          result[3] += 0.6756756756756757;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.7580645161290323;
          result[3] += 0.20967741935483872;
          result[4] += 0;
          result[5] += 0.016129032258064516;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04152249134948097;
          result[1] += 0;
          result[2] += 0.8408304498269896;
          result[3] += 0.10726643598615918;
          result[4] += 0;
          result[5] += 0.010380622837370242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.974025974025974;
          result[3] += 0.024350649350649352;
          result[4] += 0;
          result[5] += 0.0016233766233766235;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.02962962962962963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9407407407407408;
          result[5] += 0.02962962962962963;
        } else {
          result[0] += 0.26785714285714285;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4017857142857143;
          result[5] += 0.29464285714285715;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02745664739884393;
          result[4] += 0.028901734104046242;
          result[5] += 0.9436416184971098;
        } else {
          result[0] += 0.01876675603217158;
          result[1] += 0.010723860589812333;
          result[2] += 0.05093833780160858;
          result[3] += 0.3378016085790885;
          result[4] += 0.14209115281501342;
          result[5] += 0.43967828418230565;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.24324324324324326;
          result[2] += 0;
          result[3] += 0.02702702702702703;
          result[4] += 0.7297297297297297;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.968609865470852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03139013452914798;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8100961538461539;
          result[1] += 0.030448717948717948;
          result[2] += 0.004807692307692308;
          result[3] += 0.02403846153846154;
          result[4] += 0.0889423076923077;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0.26519337016574585;
          result[1] += 0.0055248618784530384;
          result[2] += 0.1132596685082873;
          result[3] += 0.27900552486187846;
          result[4] += 0.09116022099447514;
          result[5] += 0.24585635359116023;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.056818181818181816;
          result[3] += 0.2159090909090909;
          result[4] += 0;
          result[5] += 0.7272727272727273;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8484848484848485;
          result[4] += 0;
          result[5] += 0.15151515151515152;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5076923076923077;
          result[3] += 0.27692307692307694;
          result[4] += 0.015384615384615385;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0.17391304347826086;
          result[3] += 0.41304347826086957;
          result[4] += 0.17391304347826086;
          result[5] += 0.15217391304347827;
        } else {
          result[0] += 0.2545454545454545;
          result[1] += 0.03636363636363636;
          result[2] += 0.6181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7490909090909091;
          result[3] += 0.21818181818181817;
          result[4] += 0.01090909090909091;
          result[5] += 0.02181818181818182;
        } else {
          result[0] += 0.0013927576601671311;
          result[1] += 0;
          result[2] += 0.9428969359331477;
          result[3] += 0.05431754874651811;
          result[4] += 0;
          result[5] += 0.0013927576601671311;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.011152416356877323;
          result[2] += 0.011152416356877323;
          result[3] += 0;
          result[4] += 0.9442379182156134;
          result[5] += 0.03345724907063197;
        } else {
          result[0] += 0.5906735751295337;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20725388601036268;
          result[5] += 0.20207253886010362;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0011061946902654867;
          result[1] += 0.0055309734513274336;
          result[2] += 0.0022123893805309734;
          result[3] += 0.04314159292035398;
          result[4] += 0.061946902654867256;
          result[5] += 0.8860619469026548;
        } else {
          result[0] += 0.013986013986013986;
          result[1] += 0.02097902097902098;
          result[2] += 0;
          result[3] += 0.3986013986013986;
          result[4] += 0.15384615384615385;
          result[5] += 0.4125874125874126;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9844444444444445;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7830188679245284;
          result[1] += 0.04009433962264151;
          result[2] += 0.008647798742138365;
          result[3] += 0.04245283018867924;
          result[4] += 0.08883647798742138;
          result[5] += 0.036949685534591194;
        } else {
          result[0] += 0.1434426229508197;
          result[1] += 0.024590163934426233;
          result[2] += 0.16598360655737707;
          result[3] += 0.3688524590163935;
          result[4] += 0.05737704918032788;
          result[5] += 0.23975409836065575;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0.7678571428571429;
          result[4] += 0.05357142857142857;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45833333333333337;
          result[3] += 0.37500000000000006;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
          result[0] += 0.08823529411764706;
          result[1] += 0;
          result[2] += 0.6176470588235294;
          result[3] += 0.20588235294117646;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9038461538461539;
          result[3] += 0.08653846153846154;
          result[4] += 0;
          result[5] += 0.009615384615384616;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.017482517482517484;
          result[1] += 0;
          result[2] += 0.8286713286713286;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9755671902268761;
          result[3] += 0.02443280977312391;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9615384615384616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.038461538461538464;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.024822695035460994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9539007092198581;
          result[5] += 0.02127659574468085;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04810360777058279;
          result[1] += 0.0018501387604070306;
          result[2] += 0.01757631822386679;
          result[3] += 0.07955596669750231;
          result[4] += 0.06753006475485661;
          result[5] += 0.7853839037927844;
        } else {
          result[0] += 0.005747126436781609;
          result[1] += 0;
          result[2] += 0.005747126436781609;
          result[3] += 0.7126436781609196;
          result[4] += 0.028735632183908046;
          result[5] += 0.2471264367816092;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9851116625310173;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01488833746898263;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2743362831858407;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7168141592920354;
          result[5] += 0.008849557522123894;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8365145228215768;
          result[1] += 0.021576763485477178;
          result[2] += 0;
          result[3] += 0.021576763485477178;
          result[4] += 0.07551867219917012;
          result[5] += 0.044813278008298756;
        } else {
          result[0] += 0.21884498480243164;
          result[1] += 0.024316109422492405;
          result[2] += 0.2522796352583587;
          result[3] += 0.28571428571428575;
          result[4] += 0.04255319148936171;
          result[5] += 0.17629179331306993;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.075;
          result[5] += 0.825;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10909090909090909;
          result[3] += 0.6454545454545455;
          result[4] += 0.03636363636363636;
          result[5] += 0.20909090909090908;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
          result[0] += 0.008130081300813009;
          result[1] += 0;
          result[2] += 0.5040650406504065;
          result[3] += 0.36585365853658536;
          result[4] += 0;
          result[5] += 0.12195121951219512;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)110.5) ) ) {
          result[0] += 0.71875;
          result[1] += 0.0625;
          result[2] += 0.1875;
          result[3] += 0;
          result[4] += 0.03125;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03713527851458886;
          result[1] += 0;
          result[2] += 0.8090185676392573;
          result[3] += 0.15119363395225463;
          result[4] += 0;
          result[5] += 0.002652519893899204;
        } else {
          result[0] += 0.0039603960396039604;
          result[1] += 0;
          result[2] += 0.9821782178217822;
          result[3] += 0.013861386138613862;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80) ) ) {
          result[0] += 0.004166666666666667;
          result[1] += 0.008333333333333333;
          result[2] += 0;
          result[3] += 0.004166666666666667;
          result[4] += 0.975;
          result[5] += 0.008333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02131979695431472;
          result[1] += 0.0010152284263959391;
          result[2] += 0;
          result[3] += 0.05989847715736041;
          result[4] += 0.048730964467005075;
          result[5] += 0.8690355329949239;
        } else {
          result[0] += 0.05154639175257732;
          result[1] += 0.01718213058419244;
          result[2] += 0.01718213058419244;
          result[3] += 0.46735395189003437;
          result[4] += 0.048109965635738834;
          result[5] += 0.39862542955326463;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
          result[0] += 0.006802721088435374;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6598639455782312;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953271028037384;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004672897196261682;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8648874061718098;
          result[1] += 0.025020850708924104;
          result[2] += 0.0025020850708924102;
          result[3] += 0.019182652210175146;
          result[4] += 0.07172643869891576;
          result[5] += 0.016680567139282735;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.01984126984126984;
          result[2] += 0.10714285714285714;
          result[3] += 0.2777777777777778;
          result[4] += 0.13095238095238096;
          result[5] += 0.24206349206349206;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.088;
          result[3] += 0.728;
          result[4] += 0;
          result[5] += 0.184;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.44;
          result[3] += 0.3466666666666667;
          result[4] += 0;
          result[5] += 0.21333333333333335;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8809523809523809;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.023809523809523808;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7478260869565218;
          result[3] += 0.11304347826086956;
          result[4] += 0;
          result[5] += 0.1391304347826087;
        } else {
          result[0] += 0.78125;
          result[1] += 0;
          result[2] += 0.15625;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.012755102040816327;
          result[1] += 0;
          result[2] += 0.8418367346938775;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9898785425101214;
          result[3] += 0.010121457489878543;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0041841004184100415;
          result[3] += 0.02092050209205021;
          result[4] += 0.9372384937238494;
          result[5] += 0.03765690376569038;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011248593925759281;
          result[3] += 0.05511811023622047;
          result[4] += 0.0562429696287964;
          result[5] += 0.8875140607424072;
        } else {
          result[0] += 0.1021671826625387;
          result[1] += 0.02786377708978328;
          result[2] += 0.030959752321981424;
          result[3] += 0.3746130030959752;
          result[4] += 0.10526315789473684;
          result[5] += 0.3591331269349845;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8125;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9510022271714923;
          result[2] += 0;
          result[3] += 0.0155902004454343;
          result[4] += 0.03340757238307351;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7603930461073318;
          result[1] += 0.03476946334089191;
          result[2] += 0.0030234315948601664;
          result[3] += 0.027966742252456538;
          result[4] += 0.1292517006802721;
          result[5] += 0.044595616024187455;
        } else {
          result[0] += 0.22580645161290322;
          result[1] += 0.002932551319648094;
          result[2] += 0.1348973607038123;
          result[3] += 0.2785923753665689;
          result[4] += 0.06744868035190615;
          result[5] += 0.2903225806451613;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10576923076923078;
          result[3] += 0.701923076923077;
          result[4] += 0;
          result[5] += 0.19230769230769235;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.9;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6875;
          result[3] += 0.22916666666666666;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.010638297872340425;
          result[1] += 0;
          result[2] += 0.7836879432624113;
          result[3] += 0.19148936170212766;
          result[4] += 0;
          result[5] += 0.014184397163120567;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00563380281690141;
          result[1] += 0;
          result[2] += 0.9521126760563381;
          result[3] += 0.03802816901408451;
          result[4] += 0;
          result[5] += 0.004225352112676057;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.991869918699187;
          result[5] += 0.008130081300813009;
        } else {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.5064935064935064;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4935064935064935;
          result[5] += 0;
        } else {
          result[0] += 0.0011918951132300357;
          result[1] += 0.0059594755661501785;
          result[2] += 0;
          result[3] += 0.02264600715137068;
          result[4] += 0.06912991656734208;
          result[5] += 0.901072705601907;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05670103092783505;
          result[3] += 0.21649484536082475;
          result[4] += 0.06701030927835051;
          result[5] += 0.6597938144329897;
        } else {
          result[0] += 0.04048582995951417;
          result[1] += 0;
          result[2] += 0.11336032388663968;
          result[3] += 0.6234817813765182;
          result[4] += 0.004048582995951417;
          result[5] += 0.21862348178137653;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.0967741935483871;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9032258064516129;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6153846153846154;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.19230769230769232;
          result[5] += 0.11538461538461539;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
          result[0] += 0.1317365269461078;
          result[1] += 0.04790419161676647;
          result[2] += 0;
          result[3] += 0.23353293413173654;
          result[4] += 0.11976047904191617;
          result[5] += 0.46706586826347307;
        } else {
          result[0] += 0.8102481985588469;
          result[1] += 0.04083266613290632;
          result[2] += 0.009607686148919133;
          result[3] += 0.027221777421937543;
          result[4] += 0.09047237790232185;
          result[5] += 0.021617293835068052;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.007246376811594203;
          result[2] += 0.22826086956521738;
          result[3] += 0.43478260869565216;
          result[4] += 0.010869565217391304;
          result[5] += 0.3188405797101449;
        } else {
          result[0] += 0.04198473282442749;
          result[1] += 0.0009541984732824428;
          result[2] += 0.8549618320610688;
          result[3] += 0.0734732824427481;
          result[4] += 0.011450381679389315;
          result[5] += 0.017175572519083974;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.71875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0.09375;
        } else {
          result[0] += 0;
          result[1] += 0.003021148036253777;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9395770392749245;
          result[5] += 0.05740181268882176;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05916585838991271;
          result[1] += 0.0038797284190106693;
          result[2] += 0.004849660523763337;
          result[3] += 0.061105722599418044;
          result[4] += 0.058195926285160036;
          result[5] += 0.8128031037827352;
        } else {
          result[0] += 0.03508771929824561;
          result[1] += 0;
          result[2] += 0.0456140350877193;
          result[3] += 0.6210526315789474;
          result[4] += 0;
          result[5] += 0.2982456140350877;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.2631578947368421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5263157894736842;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0;
          result[1] += 0.9824945295404814;
          result[2] += 0;
          result[3] += 0.00437636761487965;
          result[4] += 0.010940919037199124;
          result[5] += 0.002188183807439825;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.043859649122807015;
          result[1] += 0.2982456140350877;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6140350877192983;
          result[5] += 0.043859649122807015;
        } else {
          result[0] += 0.6937704918032787;
          result[1] += 0.015737704918032787;
          result[2] += 0.05377049180327869;
          result[3] += 0.08131147540983606;
          result[4] += 0.06295081967213115;
          result[5] += 0.09245901639344262;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)125.5) ) ) {
          result[0] += 0.009615384615384616;
          result[1] += 0;
          result[2] += 0.6634615384615384;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.07692307692307693;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.012437810945273632;
          result[1] += 0;
          result[2] += 0.9514925373134329;
          result[3] += 0.033582089552238806;
          result[4] += 0;
          result[5] += 0.0024875621890547263;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014388489208633094;
          result[4] += 0.9532374100719424;
          result[5] += 0.03237410071942446;
        } else {
          result[0] += 0;
          result[1] += 0.2692307692307692;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.19230769230769232;
          result[5] += 0.46153846153846156;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021367521367521368;
          result[4] += 0.06267806267806268;
          result[5] += 0.915954415954416;
        } else {
          result[0] += 0.08128544423440454;
          result[1] += 0.005671077504725898;
          result[2] += 0.017013232514177693;
          result[3] += 0.29867674858223064;
          result[4] += 0.09829867674858223;
          result[5] += 0.499054820415879;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.15476190476190477;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7261904761904762;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.002320185614849188;
          result[1] += 0.9791183294663574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018561484918793503;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0.26296296296296295;
          result[1] += 0.04814814814814815;
          result[2] += 0.1037037037037037;
          result[3] += 0.25925925925925924;
          result[4] += 0.0962962962962963;
          result[5] += 0.22962962962962963;
        } else {
          result[0] += 0.8034398034398035;
          result[1] += 0.03521703521703522;
          result[2] += 0.04013104013104013;
          result[3] += 0.031122031122031123;
          result[4] += 0.07534807534807535;
          result[5] += 0.014742014742014743;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.034482758620689655;
          result[4] += 0.06896551724137931;
          result[5] += 0.896551724137931;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07534246575342467;
          result[3] += 0.6849315068493151;
          result[4] += 0;
          result[5] += 0.2397260273972603;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.9615384615384616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.06666666666666667;
          result[4] += 0.28888888888888886;
          result[5] += 0.6222222222222222;
        } else {
          result[0] += 0.031055900621118012;
          result[1] += 0;
          result[2] += 0.577639751552795;
          result[3] += 0.36645962732919257;
          result[4] += 0;
          result[5] += 0.024844720496894408;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.30952380952380953;
          result[1] += 0.14285714285714285;
          result[2] += 0.19047619047619047;
          result[3] += 0.047619047619047616;
          result[4] += 0.19047619047619047;
          result[5] += 0.11904761904761904;
        } else {
          result[0] += 0.003605769230769231;
          result[1] += 0;
          result[2] += 0.9146634615384616;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.004807692307692308;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.0040650406504065045;
          result[1] += 0.008130081300813009;
          result[2] += 0;
          result[3] += 0.0040650406504065045;
          result[4] += 0.9634146341463414;
          result[5] += 0.02032520325203252;
        } else {
          result[0] += 0;
          result[1] += 0.6363636363636364;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          result[0] += 0.022613065326633167;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03768844221105527;
          result[4] += 0.05402010050251256;
          result[5] += 0.885678391959799;
        } else {
          result[0] += 0.08676789587852494;
          result[1] += 0.008676789587852495;
          result[2] += 0.008676789587852495;
          result[3] += 0.37310195227765725;
          result[4] += 0.06290672451193059;
          result[5] += 0.4598698481561822;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7235659986178301;
          result[1] += 0.06081548030407741;
          result[2] += 0.009675190048375953;
          result[3] += 0.03524533517622668;
          result[4] += 0.13545266067726333;
          result[5] += 0.03524533517622668;
        } else {
          result[0] += 0.14534883720930236;
          result[1] += 0.008720930232558141;
          result[2] += 0.3052325581395349;
          result[3] += 0.27034883720930236;
          result[4] += 0.0930232558139535;
          result[5] += 0.17732558139534887;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05;
          result[2] += 0.1;
          result[3] += 0.075;
          result[4] += 0.05;
          result[5] += 0.725;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.052083333333333336;
          result[2] += 0.2604166666666667;
          result[3] += 0.5729166666666666;
          result[4] += 0.020833333333333332;
          result[5] += 0.09375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.706766917293233;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.08270676691729323;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007272727272727273;
          result[1] += 0;
          result[2] += 0.9357575757575758;
          result[3] += 0.052121212121212124;
          result[4] += 0;
          result[5] += 0.0048484848484848485;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9793388429752066;
          result[5] += 0.02066115702479339;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0.039153439153439155;
          result[1] += 0.009523809523809525;
          result[2] += 0;
          result[3] += 0.06772486772486773;
          result[4] += 0.044444444444444446;
          result[5] += 0.8391534391534392;
        } else {
          result[0] += 0.03409090909090909;
          result[1] += 0;
          result[2] += 0.028409090909090908;
          result[3] += 0.6477272727272727;
          result[4] += 0.03409090909090909;
          result[5] += 0.2556818181818182;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.6296296296296297;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.37037037037037035;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.058479532163742694;
          result[1] += 0.16959064327485382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.736842105263158;
          result[5] += 0.03508771929824562;
        } else {
          result[0] += 0.7036290322580645;
          result[1] += 0.012768817204301076;
          result[2] += 0.04502688172043011;
          result[3] += 0.07795698924731183;
          result[4] += 0.08400537634408602;
          result[5] += 0.07661290322580645;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.05747126436781609;
          result[2] += 0.034482758620689655;
          result[3] += 0.16091954022988506;
          result[4] += 0.14942528735632185;
          result[5] += 0.5977011494252874;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0.005376344086021506;
          result[2] += 0.15053763440860216;
          result[3] += 0.6290322580645161;
          result[4] += 0.005376344086021506;
          result[5] += 0.1935483870967742;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9411764705882353;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4782608695652174;
          result[3] += 0.043478260869565216;
          result[4] += 0.08695652173913043;
          result[5] += 0.391304347826087;
        } else {
          result[0] += 0.8604651162790697;
          result[1] += 0;
          result[2] += 0.11627906976744186;
          result[3] += 0;
          result[4] += 0.023255813953488372;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5474452554744526;
          result[3] += 0.3284671532846715;
          result[4] += 0;
          result[5] += 0.12408759124087591;
        } else {
          result[0] += 0.02214022140221402;
          result[1] += 0.0012300123001230013;
          result[2] += 0.9188191881918819;
          result[3] += 0.055350553505535055;
          result[4] += 0;
          result[5] += 0.0024600246002460025;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0.004694835680751174;
          result[1] += 0.023474178403755867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9483568075117371;
          result[5] += 0.023474178403755867;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.030211480362537766;
          result[1] += 0.011077542799597181;
          result[2] += 0.002014098690835851;
          result[3] += 0.07351460221550855;
          result[4] += 0.06042296072507553;
          result[5] += 0.8227593152064451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.601010101010101;
          result[4] += 0.015151515151515152;
          result[5] += 0.3838383838383838;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9917355371900827;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008264462809917356;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          result[0] += 0.3981288981288981;
          result[1] += 0.04781704781704782;
          result[2] += 0.037422037422037424;
          result[3] += 0.12993762993762994;
          result[4] += 0.20893970893970895;
          result[5] += 0.17775467775467776;
        } else {
          result[0] += 0.8784810126582279;
          result[1] += 0.02911392405063291;
          result[2] += 0.030379746835443037;
          result[3] += 0.0037974683544303796;
          result[4] += 0.05569620253164557;
          result[5] += 0.002531645569620253;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10309278350515463;
          result[3] += 0.5567010309278351;
          result[4] += 0;
          result[5] += 0.3402061855670103;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2903225806451613;
          result[3] += 0.5806451612903226;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0.7283950617283951;
          result[3] += 0.13580246913580246;
          result[4] += 0.024691358024691357;
          result[5] += 0.07407407407407407;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6296296296296297;
          result[3] += 0.3148148148148148;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7115384615384616;
          result[3] += 0.2692307692307692;
          result[4] += 0;
          result[5] += 0.019230769230769232;
        } else {
          result[0] += 0.014686248331108145;
          result[1] += 0;
          result[2] += 0.9425901201602137;
          result[3] += 0.03604806408544727;
          result[4] += 0;
          result[5] += 0.006675567423230976;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0.028;
          result[4] += 0.916;
          result[5] += 0.016;
        } else {
          result[0] += 0.4696969696969697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25757575757575757;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0044943820224719105;
          result[2] += 0;
          result[3] += 0.05730337078651685;
          result[4] += 0.051685393258426963;
          result[5] += 0.8865168539325843;
        } else {
          result[0] += 0.005154639175257732;
          result[1] += 0;
          result[2] += 0.005154639175257732;
          result[3] += 0.5670103092783505;
          result[4] += 0.020618556701030927;
          result[5] += 0.4020618556701031;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.2777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.00683371298405467;
          result[1] += 0.979498861047836;
          result[2] += 0.002277904328018223;
          result[3] += 0.009111617312072893;
          result[4] += 0.002277904328018223;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7748031496062993;
          result[1] += 0.049606299212598425;
          result[2] += 0;
          result[3] += 0.01889763779527559;
          result[4] += 0.13858267716535433;
          result[5] += 0.01811023622047244;
        } else {
          result[0] += 0.20670391061452514;
          result[1] += 0.01675977653631285;
          result[2] += 0.20391061452513967;
          result[3] += 0.25139664804469275;
          result[4] += 0.07262569832402235;
          result[5] += 0.24860335195530725;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13793103448275862;
          result[4] += 0;
          result[5] += 0.8620689655172413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1509433962264151;
          result[3] += 0.6415094339622641;
          result[4] += 0.009433962264150943;
          result[5] += 0.19811320754716982;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
          result[0] += 0.046511627906976744;
          result[1] += 0;
          result[2] += 0.2558139534883721;
          result[3] += 0.13953488372093023;
          result[4] += 0.023255813953488372;
          result[5] += 0.5348837209302325;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7671232876712328;
          result[3] += 0.136986301369863;
          result[4] += 0;
          result[5] += 0.0958904109589041;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6351351351351351;
          result[3] += 0.33783783783783783;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.0625;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0.4375;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.32432432432432434;
          result[1] += 0;
          result[2] += 0.5945945945945946;
          result[3] += 0;
          result[4] += 0.05405405405405406;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.005688282138794084;
          result[1] += 0;
          result[2] += 0.931740614334471;
          result[3] += 0.05460750853242321;
          result[4] += 0;
          result[5] += 0.007963594994311717;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.004524886877828055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995475113122172;
          result[5] += 0;
        } else {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.26785714285714285;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0029498525073746312;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.035398230088495575;
          result[4] += 0.017699115044247787;
          result[5] += 0.943952802359882;
        } else {
          result[0] += 0.09191176470588236;
          result[1] += 0.058823529411764705;
          result[2] += 0.014705882352941176;
          result[3] += 0.3161764705882353;
          result[4] += 0.08088235294117647;
          result[5] += 0.4375;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0.9785714285714285;
          result[2] += 0.002380952380952381;
          result[3] += 0;
          result[4] += 0.01904761904761905;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.749271137026239;
          result[1] += 0.048833819241982504;
          result[2] += 0.0058309037900874635;
          result[3] += 0.03279883381924198;
          result[4] += 0.14212827988338192;
          result[5] += 0.021137026239067054;
        } else {
          result[0] += 0.1122715404699739;
          result[1] += 0;
          result[2] += 0.2245430809399478;
          result[3] += 0.2558746736292428;
          result[4] += 0.13315926892950392;
          result[5] += 0.2741514360313316;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0.11363636363636363;
          result[4] += 0.022727272727272728;
          result[5] += 0.8409090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0.11764705882352941;
          result[3] += 0.7352941176470589;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0.050505050505050504;
          result[2] += 0.48484848484848486;
          result[3] += 0.2828282828282828;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8571428571428572;
          result[1] += 0.07142857142857144;
          result[2] += 0.07142857142857144;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0.012263099219620958;
          result[1] += 0;
          result[2] += 0.9219620958751393;
          result[3] += 0.055741360089186176;
          result[4] += 0.0033444816053511705;
          result[5] += 0.006688963210702341;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0.0036496350364963507;
          result[1] += 0.010948905109489053;
          result[2] += 0.0036496350364963507;
          result[3] += 0.010948905109489053;
          result[4] += 0.8941605839416059;
          result[5] += 0.07664233576642338;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0.17857142857142858;
          result[3] += 0;
          result[4] += 0.10714285714285714;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0375234521575985;
          result[1] += 0.004690431519699813;
          result[2] += 0;
          result[3] += 0.054409005628517824;
          result[4] += 0.07598499061913697;
          result[5] += 0.8273921200750469;
        } else {
          result[0] += 0.01098901098901099;
          result[1] += 0;
          result[2] += 0.08791208791208792;
          result[3] += 0.6923076923076923;
          result[4] += 0;
          result[5] += 0.2087912087912088;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.1323529411764706;
          result[2] += 0;
          result[3] += 0.022058823529411766;
          result[4] += 0.8308823529411765;
          result[5] += 0.014705882352941176;
        } else {
          result[0] += 0;
          result[1] += 0.9839816933638444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016018306636155607;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0.35842293906810035;
          result[1] += 0.008960573476702509;
          result[2] += 0.13261648745519714;
          result[3] += 0.1971326164874552;
          result[4] += 0.07526881720430108;
          result[5] += 0.22759856630824374;
        } else {
          result[0] += 0.8330134357005758;
          result[1] += 0.02015355086372361;
          result[2] += 0.044145873320537425;
          result[3] += 0.02495201535508637;
          result[4] += 0.0690978886756238;
          result[5] += 0.008637236084452975;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0.11363636363636363;
          result[4] += 0.18181818181818182;
          result[5] += 0.6818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.07692307692307693;
          result[4] += 0.15384615384615385;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)116.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5925925925925926;
          result[4] += 0;
          result[5] += 0.4074074074074074;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0.11764705882352941;
          result[1] += 0.11764705882352941;
          result[2] += 0.29411764705882354;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.016597510373443983;
          result[1] += 0.006224066390041493;
          result[2] += 0.8993775933609959;
          result[3] += 0.07365145228215768;
          result[4] += 0;
          result[5] += 0.004149377593360996;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.01652892561983471;
          result[1] += 0.024793388429752067;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9297520661157025;
          result[5] += 0.028925619834710745;
        } else {
          result[0] += 0.5643564356435643;
          result[1] += 0.039603960396039604;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1188118811881188;
          result[5] += 0.27722772277227725;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023448275862068966;
          result[4] += 0.044137931034482755;
          result[5] += 0.9324137931034483;
        } else {
          result[0] += 0.01006036217303823;
          result[1] += 0.04024144869215292;
          result[2] += 0.014084507042253521;
          result[3] += 0.386317907444668;
          result[4] += 0.026156941649899398;
          result[5] += 0.5231388329979879;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9891067538126361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010893246187363835;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7820015515903801;
          result[1] += 0.035686578743211794;
          result[2] += 0.005430566330488751;
          result[3] += 0.035686578743211794;
          result[4] += 0.11947245927075252;
          result[5] += 0.021722265321955005;
        } else {
          result[0] += 0.1675531914893617;
          result[1] += 0.0026595744680851063;
          result[2] += 0.2845744680851064;
          result[3] += 0.18882978723404256;
          result[4] += 0.13031914893617022;
          result[5] += 0.22606382978723405;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0.06722689075630252;
          result[1] += 0.025210084033613446;
          result[2] += 0.17647058823529413;
          result[3] += 0.5378151260504201;
          result[4] += 0.025210084033613446;
          result[5] += 0.16806722689075632;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0.04424778761061947;
          result[1] += 0;
          result[2] += 0.8141592920353983;
          result[3] += 0.08849557522123894;
          result[4] += 0.017699115044247787;
          result[5] += 0.035398230088495575;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          result[0] += 0.006265664160401002;
          result[1] += 0;
          result[2] += 0.9335839598997494;
          result[3] += 0.06015037593984962;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.22448979591836735;
          result[1] += 0;
          result[2] += 0.7755102040816326;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0.10256410256410256;
          result[4] += 0.41025641025641024;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02753303964757709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03634361233480176;
          result[4] += 0.06607929515418502;
          result[5] += 0.8700440528634361;
        } else {
          result[0] += 0.04746835443037975;
          result[1] += 0.0031645569620253164;
          result[2] += 0.03164556962025317;
          result[3] += 0.4525316455696203;
          result[4] += 0.04430379746835443;
          result[5] += 0.4208860759493671;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.9882697947214076;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011730205278592375;
          result[5] += 0;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.030837004405286344;
          result[1] += 0.5330396475770925;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41409691629955947;
          result[5] += 0.022026431718061675;
        } else {
          result[0] += 0.7331189710610932;
          result[1] += 0.019935691318327974;
          result[2] += 0.03729903536977492;
          result[3] += 0.08038585209003216;
          result[4] += 0.06688102893890675;
          result[5] += 0.062379421221864954;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06349206349206349;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.5079365079365079;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5041322314049588;
          result[3] += 0.3801652892561984;
          result[4] += 0.016528925619834715;
          result[5] += 0.09917355371900828;
        } else {
          result[0] += 0.010989010989010992;
          result[1] += 0;
          result[2] += 0.8461538461538463;
          result[3] += 0.09890109890109891;
          result[4] += 0;
          result[5] += 0.043956043956043966;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0.7321428571428571;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.782608695652174;
          result[3] += 0.18840579710144928;
          result[4] += 0;
          result[5] += 0.007246376811594203;
        } else {
          result[0] += 0.005547850208044383;
          result[1] += 0;
          result[2] += 0.9445214979195562;
          result[3] += 0.047156726768377254;
          result[4] += 0;
          result[5] += 0.0027739251040221915;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0049261083743842365;
          result[4] += 0.9950738916256158;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06976744186046512;
          result[4] += 0.6976744186046512;
          result[5] += 0.23255813953488372;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8636363636363636;
          result[5] += 0.11363636363636363;
        } else {
          result[0] += 0.030176899063475548;
          result[1] += 0.002081165452653486;
          result[2] += 0.007284079084287201;
          result[3] += 0.053069719042663895;
          result[4] += 0.046826222684703434;
          result[5] += 0.8605619146722164;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.1348314606741573;
          result[1] += 0;
          result[2] += 0.033707865168539325;
          result[3] += 0.20224719101123595;
          result[4] += 0.011235955056179775;
          result[5] += 0.6179775280898876;
        } else {
          result[0] += 0;
          result[1] += 0.005434782608695653;
          result[2] += 0.038043478260869575;
          result[3] += 0.673913043478261;
          result[4] += 0.038043478260869575;
          result[5] += 0.24456521739130438;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978070175438597;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021929824561403508;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
          result[0] += 0.04504504504504504;
          result[1] += 0.3063063063063063;
          result[2] += 0;
          result[3] += 0.05405405405405406;
          result[4] += 0.5765765765765766;
          result[5] += 0.018018018018018018;
        } else {
          result[0] += 0.7484053862508859;
          result[1] += 0.011339475549255847;
          result[2] += 0.03614457831325301;
          result[3] += 0.06945428773919206;
          result[4] += 0.07299787384833452;
          result[5] += 0.06165839829907867;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0.006060606060606061;
          result[1] += 0.04242424242424243;
          result[2] += 0.1393939393939394;
          result[3] += 0.6303030303030303;
          result[4] += 0.07272727272727272;
          result[5] += 0.10909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5686274509803921;
          result[3] += 0.058823529411764705;
          result[4] += 0.0784313725490196;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.5581395348837209;
          result[1] += 0.16279069767441862;
          result[2] += 0.11627906976744186;
          result[3] += 0.046511627906976744;
          result[4] += 0.09302325581395349;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0.011764705882352943;
          result[1] += 0.0009803921568627453;
          result[2] += 0.8862745098039216;
          result[3] += 0.07254901960784316;
          result[4] += 0.003921568627450981;
          result[5] += 0.02450980392156863;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.09395973154362416;
          result[2] += 0;
          result[3] += 0.010067114093959731;
          result[4] += 0.87248322147651;
          result[5] += 0.02348993288590604;
        } else {
          result[0] += 0.7006802721088435;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013605442176870748;
          result[4] += 0.12244897959183673;
          result[5] += 0.16326530612244897;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.005945303210463734;
          result[1] += 0.0035671819262782403;
          result[2] += 0;
          result[3] += 0.027348394768133173;
          result[4] += 0.08204518430439953;
          result[5] += 0.8810939357907254;
        } else {
          result[0] += 0.020100502512562814;
          result[1] += 0;
          result[2] += 0.035175879396984924;
          result[3] += 0.38190954773869346;
          result[4] += 0.01507537688442211;
          result[5] += 0.5477386934673367;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955257270693513;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0044742729306487695;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8057432432432432;
          result[1] += 0.019425675675675675;
          result[2] += 0.006756756756756757;
          result[3] += 0.028716216216216218;
          result[4] += 0.10304054054054054;
          result[5] += 0.036317567567567564;
        } else {
          result[0] += 0.2484076433121019;
          result[1] += 0.01910828025477707;
          result[2] += 0.09872611464968153;
          result[3] += 0.35987261146496813;
          result[4] += 0.08917197452229299;
          result[5] += 0.18471337579617833;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.05555555555555556;
          result[2] += 0.11111111111111112;
          result[3] += 0;
          result[4] += 0.6666666666666667;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.06666666666666667;
          result[4] += 0.044444444444444446;
          result[5] += 0.8666666666666667;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12658227848101267;
          result[3] += 0.6919831223628692;
          result[4] += 0.008438818565400843;
          result[5] += 0.1729957805907173;
        } else {
          result[0] += 0.007518796992481203;
          result[1] += 0;
          result[2] += 0.5789473684210527;
          result[3] += 0.3007518796992481;
          result[4] += 0;
          result[5] += 0.11278195488721804;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0.625;
        } else {
          result[0] += 0.12903225806451615;
          result[1] += 0.03225806451612904;
          result[2] += 0.38709677419354843;
          result[3] += 0.03225806451612904;
          result[4] += 0.2580645161290323;
          result[5] += 0.16129032258064518;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          result[0] += 0.3928571428571429;
          result[1] += 0.10714285714285715;
          result[2] += 0.3928571428571429;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10714285714285715;
        } else {
          result[0] += 0.012971698113207548;
          result[1] += 0;
          result[2] += 0.9091981132075472;
          result[3] += 0.07193396226415094;
          result[4] += 0;
          result[5] += 0.00589622641509434;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9947916666666666;
          result[5] += 0.005208333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4375;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0.25;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.5862068965517242;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01724137931034483;
          result[4] += 0.36206896551724144;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0.0011890606420927466;
          result[1] += 0.0047562425683709865;
          result[2] += 0.0011890606420927466;
          result[3] += 0.026159334126040427;
          result[4] += 0.04994054696789536;
          result[5] += 0.9167657550535078;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1643835616438356;
          result[4] += 0.0136986301369863;
          result[5] += 0.821917808219178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07905138339920949;
          result[3] += 0.6086956521739131;
          result[4] += 0.011857707509881422;
          result[5] += 0.30039525691699603;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.007936507936507936;
          result[1] += 0.11904761904761904;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8492063492063492;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0;
          result[1] += 0.9934354485776805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006564551422319475;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          result[0] += 0.2184873949579832;
          result[1] += 0.058823529411764705;
          result[2] += 0.008403361344537815;
          result[3] += 0.31932773109243695;
          result[4] += 0.17647058823529413;
          result[5] += 0.2184873949579832;
        } else {
          result[0] += 0.834271922767498;
          result[1] += 0.013676588897827836;
          result[2] += 0.0249396621078037;
          result[3] += 0.029766693483507644;
          result[4] += 0.0756234915526951;
          result[5] += 0.02172164119066774;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.03164556962025317;
          result[1] += 0.04113924050632911;
          result[2] += 0.0949367088607595;
          result[3] += 0.3924050632911392;
          result[4] += 0.13291139240506328;
          result[5] += 0.3069620253164557;
        } else {
          result[0] += 0.01834862385321101;
          result[1] += 0;
          result[2] += 0.8073394495412844;
          result[3] += 0.08256880733944955;
          result[4] += 0;
          result[5] += 0.09174311926605505;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.029045643153526972;
          result[1] += 0;
          result[2] += 0.8765560165975104;
          result[3] += 0.08195020746887967;
          result[4] += 0;
          result[5] += 0.012448132780082987;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0038314176245210726;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007662835249042145;
          result[4] += 0.9655172413793104;
          result[5] += 0.022988505747126436;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.21153846153846154;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.4423076923076923;
          result[5] += 0.2692307692307692;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012610340479192938;
          result[3] += 0.03278688524590164;
          result[4] += 0.05170239596469105;
          result[5] += 0.914249684741488;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.08928571428571429;
          result[1] += 0.11607142857142858;
          result[2] += 0;
          result[3] += 0.08928571428571429;
          result[4] += 0.20535714285714285;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08144796380090498;
          result[3] += 0.6380090497737556;
          result[4] += 0;
          result[5] += 0.28054298642533937;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9908675799086758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0091324200913242;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.43859649122807015;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5614035087719298;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8016;
          result[1] += 0.0264;
          result[2] += 0.0048;
          result[3] += 0.028;
          result[4] += 0.1136;
          result[5] += 0.0256;
        } else {
          result[0] += 0.247557003257329;
          result[1] += 0.006514657980456026;
          result[2] += 0.10097719869706841;
          result[3] += 0.31596091205211724;
          result[4] += 0.0781758957654723;
          result[5] += 0.250814332247557;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          result[0] += 0.016260162601626018;
          result[1] += 0;
          result[2] += 0.0975609756097561;
          result[3] += 0.45528455284552843;
          result[4] += 0.06504065040650407;
          result[5] += 0.36585365853658536;
        } else {
          result[0] += 0.28476821192052987;
          result[1] += 0.03311258278145696;
          result[2] += 0.49668874172185434;
          result[3] += 0.14569536423841062;
          result[4] += 0.013245033112582783;
          result[5] += 0.026490066225165566;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0;
          result[2] += 0.07894736842105263;
          result[3] += 0.39473684210526316;
          result[4] += 0.13157894736842105;
          result[5] += 0.3684210526315789;
        } else {
          result[0] += 0.014659685863874346;
          result[1] += 0;
          result[2] += 0.8921465968586387;
          result[3] += 0.07853403141361257;
          result[4] += 0;
          result[5] += 0.014659685863874346;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012096774193548387;
          result[4] += 0.8870967741935484;
          result[5] += 0.10080645161290322;
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
          result[0] += 0.004076086956521739;
          result[1] += 0;
          result[2] += 0.006793478260869565;
          result[3] += 0.025815217391304348;
          result[4] += 0.0625;
          result[5] += 0.9008152173913043;
        } else {
          result[0] += 0.08085106382978724;
          result[1] += 0.010638297872340425;
          result[2] += 0.014893617021276596;
          result[3] += 0.30851063829787234;
          result[4] += 0.10851063829787234;
          result[5] += 0.4765957446808511;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.3482142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6517857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9821029082774049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017897091722595078;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8319198149575945;
          result[1] += 0.027756360832690823;
          result[2] += 0.013107170393215111;
          result[3] += 0.030069390902081727;
          result[4] += 0.08712413261372398;
          result[5] += 0.010023130300693909;
        } else {
          result[0] += 0.22267206477732793;
          result[1] += 0.008097165991902834;
          result[2] += 0.13765182186234817;
          result[3] += 0.3481781376518219;
          result[4] += 0.048582995951417005;
          result[5] += 0.23481781376518218;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0.03225806451612903;
          result[4] += 0.03225806451612903;
          result[5] += 0.9032258064516129;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004166666666666667;
          result[1] += 0;
          result[2] += 0.2791666666666667;
          result[3] += 0.45;
          result[4] += 0.03333333333333333;
          result[5] += 0.23333333333333334;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.8157894736842105;
          result[3] += 0.13157894736842105;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.01674641148325359;
          result[1] += 0;
          result[2] += 0.8038277511961722;
          result[3] += 0.15311004784688995;
          result[4] += 0;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9680638722554891;
          result[3] += 0.02594810379241517;
          result[4] += 0;
          result[5] += 0.005988023952095809;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96) ) ) {
          result[0] += 0.004484304932735426;
          result[1] += 0.004484304932735426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9641255605381166;
          result[5] += 0.026905829596412557;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0.017543859649122806;
          result[1] += 0;
          result[2] += 0.0011695906432748538;
          result[3] += 0.03859649122807018;
          result[4] += 0.04912280701754386;
          result[5] += 0.8935672514619883;
        } else {
          result[0] += 0.02926829268292683;
          result[1] += 0.04390243902439024;
          result[2] += 0.036585365853658534;
          result[3] += 0.4073170731707317;
          result[4] += 0.05609756097560976;
          result[5] += 0.4268292682926829;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.20833333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7916666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9908045977011494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009195402298850575;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.10416666666666667;
          result[1] += 0.16145833333333334;
          result[2] += 0.015625;
          result[3] += 0;
          result[4] += 0.6822916666666666;
          result[5] += 0.036458333333333336;
        } else {
          result[0] += 0.6567635903919089;
          result[1] += 0.02465233881163084;
          result[2] += 0.07016434892541086;
          result[3] += 0.09102402022756004;
          result[4] += 0.08407079646017698;
          result[5] += 0.07332490518331225;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8421052631578947;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0;
          result[1] += 0.037037037037037035;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.8518518518518519;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0.00909090909090909;
          result[2] += 0.34545454545454546;
          result[3] += 0.39090909090909093;
          result[4] += 0.00909090909090909;
          result[5] += 0.2;
        } else {
          result[0] += 0.04477611940298507;
          result[1] += 0;
          result[2] += 0.8059701492537313;
          result[3] += 0.1044776119402985;
          result[4] += 0;
          result[5] += 0.04477611940298507;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.6470588235294118;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7669172932330828;
          result[3] += 0.2180451127819549;
          result[4] += 0;
          result[5] += 0.015037593984962407;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0.005594405594405594;
          result[1] += 0;
          result[2] += 0.9398601398601398;
          result[3] += 0.05454545454545454;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.017341040462427744;
          result[1] += 0.028901734104046242;
          result[2] += 0.023121387283236993;
          result[3] += 0;
          result[4] += 0.9046242774566474;
          result[5] += 0.02601156069364162;
        } else {
          result[0] += 0;
          result[1] += 0.8983050847457628;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1016949152542373;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          result[0] += 0.0011013215859030838;
          result[1] += 0.0011013215859030838;
          result[2] += 0.007709251101321586;
          result[3] += 0.06387665198237885;
          result[4] += 0.06497797356828194;
          result[5] += 0.8612334801762115;
        } else {
          result[0] += 0.4061624649859944;
          result[1] += 0.0196078431372549;
          result[2] += 0.012138188608776844;
          result[3] += 0.2203548085901027;
          result[4] += 0.11671335200746966;
          result[5] += 0.2250233426704015;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.9974874371859297;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002512562814070352;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.5238095238095238;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.9682539682539683;
          result[1] += 0;
          result[2] += 0.007215007215007215;
          result[3] += 0.007215007215007215;
          result[4] += 0.017316017316017316;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0.35;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0.025;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.022267206477732792;
          result[1] += 0;
          result[2] += 0.6032388663967612;
          result[3] += 0.27530364372469635;
          result[4] += 0.008097165991902834;
          result[5] += 0.09109311740890688;
        } else {
          result[0] += 0.6111111111111112;
          result[1] += 0;
          result[2] += 0.24074074074074073;
          result[3] += 0.037037037037037035;
          result[4] += 0.07407407407407407;
          result[5] += 0.037037037037037035;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.0014285714285714286;
          result[1] += 0;
          result[2] += 0.9557142857142857;
          result[3] += 0.04285714285714286;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0.06461538461538462;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8923076923076924;
          result[5] += 0.027692307692307693;
        } else {
          result[0] += 0.7626262626262627;
          result[1] += 0.015151515151515152;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13131313131313133;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0.002472187886279357;
          result[1] += 0.0012360939431396785;
          result[2] += 0.0012360939431396785;
          result[3] += 0.034610630407911;
          result[4] += 0.07045735475896168;
          result[5] += 0.8899876390605687;
        } else {
          result[0] += 0.03505154639175258;
          result[1] += 0.012371134020618556;
          result[2] += 0.016494845360824743;
          result[3] += 0.334020618556701;
          result[4] += 0.09690721649484536;
          result[5] += 0.5051546391752577;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0.0125;
          result[1] += 0.375;
          result[2] += 0.0125;
          result[3] += 0.0125;
          result[4] += 0.575;
          result[5] += 0.0125;
        } else {
          result[0] += 0;
          result[1] += 0.9977426636568849;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002257336343115124;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0.302158273381295;
          result[1] += 0.03117505995203837;
          result[2] += 0.1486810551558753;
          result[3] += 0.3069544364508393;
          result[4] += 0.05755395683453238;
          result[5] += 0.15347721822541965;
        } else {
          result[0] += 0.8560924369747899;
          result[1] += 0.0063025210084033615;
          result[2] += 0.05042016806722689;
          result[3] += 0.01680672268907563;
          result[4] += 0.06302521008403361;
          result[5] += 0.007352941176470588;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.07142857142857142;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.5714285714285714;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0945945945945946;
          result[3] += 0.6216216216216216;
          result[4] += 0;
          result[5] += 0.28378378378378377;
        } else {
          result[0] += 0.29411764705882354;
          result[1] += 0;
          result[2] += 0.5294117647058824;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.0196078431372549;
          result[2] += 0.49019607843137253;
          result[3] += 0.43137254901960786;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.07203389830508475;
          result[1] += 0;
          result[2] += 0.7923728813559322;
          result[3] += 0.13559322033898305;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.004545454545454546;
          result[1] += 0;
          result[2] += 0.9484848484848486;
          result[3] += 0.04545454545454546;
          result[4] += 0;
          result[5] += 0.0015151515151515154;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.022435897435897436;
          result[2] += 0;
          result[3] += 0.003205128205128205;
          result[4] += 0.8365384615384616;
          result[5] += 0.11217948717948718;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007566204287515763;
          result[3] += 0.0403530895334174;
          result[4] += 0.05296343001261034;
          result[5] += 0.8991172761664565;
        } else {
          result[0] += 0.14135338345864662;
          result[1] += 0.021052631578947368;
          result[2] += 0.031578947368421054;
          result[3] += 0.33383458646616543;
          result[4] += 0.08721804511278196;
          result[5] += 0.3849624060150376;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
          result[0] += 0.015037593984962405;
          result[1] += 0.23308270676691728;
          result[2] += 0.015037593984962405;
          result[3] += 0.03759398496240601;
          result[4] += 0.6917293233082706;
          result[5] += 0.007518796992481203;
        } else {
          result[0] += 0;
          result[1] += 0.9772209567198178;
          result[2] += 0;
          result[3] += 0.00683371298405467;
          result[4] += 0.011389521640091117;
          result[5] += 0.004555808656036446;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8608470181503887;
          result[1] += 0.022471910112359546;
          result[2] += 0.012964563526361276;
          result[3] += 0.02938634399308556;
          result[4] += 0.05704407951598962;
          result[5] += 0.017286084701815037;
        } else {
          result[0] += 0.12318840579710146;
          result[1] += 0.018115942028985508;
          result[2] += 0.2644927536231884;
          result[3] += 0.2572463768115942;
          result[4] += 0.07971014492753623;
          result[5] += 0.2572463768115942;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.075;
          result[3] += 0.15;
          result[4] += 0.025;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117.5) ) ) {
          result[0] += 0.007547169811320755;
          result[1] += 0.022641509433962263;
          result[2] += 0.5849056603773585;
          result[3] += 0.3018867924528302;
          result[4] += 0.0037735849056603774;
          result[5] += 0.07924528301886792;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.28888888888888886;
          result[3] += 0.022222222222222223;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0.9035087719298246;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.0043859649122807015;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0.07692307692307693;
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.0033898305084745766;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9254237288135594;
          result[5] += 0.07118644067796612;
        } else {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07407407407407407;
          result[5] += 0.037037037037037035;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.001440922190201729;
          result[2] += 0.002881844380403458;
          result[3] += 0.023054755043227664;
          result[4] += 0.021613832853025938;
          result[5] += 0.9510086455331412;
        } else {
          result[0] += 0.10567010309278352;
          result[1] += 0.005154639175257733;
          result[2] += 0.025773195876288662;
          result[3] += 0.288659793814433;
          result[4] += 0.06701030927835053;
          result[5] += 0.5077319587628867;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.007263922518159807;
          result[1] += 0.9830508474576272;
          result[2] += 0;
          result[3] += 0.002421307506053269;
          result[4] += 0.007263922518159807;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          result[0] += 0.11702127659574468;
          result[1] += 0.061170212765957445;
          result[2] += 0.010638297872340425;
          result[3] += 0.2845744680851064;
          result[4] += 0.15159574468085107;
          result[5] += 0.375;
        } else {
          result[0] += 0.7198917456021652;
          result[1] += 0.042625169147496624;
          result[2] += 0.04127198917456022;
          result[3] += 0.05886332882273343;
          result[4] += 0.10893098782138026;
          result[5] += 0.028416779431664416;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.02666666666666667;
          result[2] += 0.08;
          result[3] += 0.4666666666666667;
          result[4] += 0.03333333333333333;
          result[5] += 0.3933333333333333;
        } else {
          result[0] += 0.05660377358490566;
          result[1] += 0;
          result[2] += 0.5283018867924528;
          result[3] += 0.37735849056603776;
          result[4] += 0;
          result[5] += 0.03773584905660377;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.017523364485981307;
          result[1] += 0;
          result[2] += 0.9018691588785047;
          result[3] += 0.07242990654205607;
          result[4] += 0;
          result[5] += 0.008177570093457943;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.0423728813559322;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9491525423728814;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0.4574468085106383;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19148936170212766;
          result[5] += 0.35106382978723405;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0029585798816568047;
          result[1] += 0.015779092702169626;
          result[2] += 0;
          result[3] += 0.06804733727810651;
          result[4] += 0.04240631163708087;
          result[5] += 0.8708086785009862;
        } else {
          result[0] += 0.004545454545454546;
          result[1] += 0;
          result[2] += 0.02272727272727273;
          result[3] += 0.7000000000000001;
          result[4] += 0.004545454545454546;
          result[5] += 0.26818181818181824;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0.04081632653061224;
          result[1] += 0.17006802721088435;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.782312925170068;
          result[5] += 0.006802721088435374;
        } else {
          result[0] += 0;
          result[1] += 0.963302752293578;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03669724770642202;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8628127696289906;
          result[1] += 0.0060396893874029335;
          result[2] += 0.003451251078515962;
          result[3] += 0.030198446937014668;
          result[4] += 0.06816220880069025;
          result[5] += 0.029335634167385678;
        } else {
          result[0] += 0.23529411764705885;
          result[1] += 0.03571428571428572;
          result[2] += 0.2563025210084034;
          result[3] += 0.25000000000000006;
          result[4] += 0.029411764705882356;
          result[5] += 0.19327731092436978;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9545454545454546;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 1;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5510204081632653;
          result[3] += 0.30612244897959184;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.005617977528089888;
          result[1] += 0;
          result[2] += 0.9303370786516855;
          result[3] += 0.05730337078651686;
          result[4] += 0;
          result[5] += 0.006741573033707866;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004694835680751174;
          result[1] += 0.004694835680751174;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9859154929577465;
          result[5] += 0.004694835680751174;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.010869565217391304;
          result[2] += 0.010869565217391304;
          result[3] += 0.09782608695652174;
          result[4] += 0.34782608695652173;
          result[5] += 0.4673913043478261;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.020070838252656435;
          result[1] += 0;
          result[2] += 0.0023612750885478157;
          result[3] += 0.03896103896103896;
          result[4] += 0.04604486422668241;
          result[5] += 0.8925619834710744;
        } else {
          result[0] += 0.05759162303664921;
          result[1] += 0.02617801047120419;
          result[2] += 0.007853403141361256;
          result[3] += 0.41361256544502617;
          result[4] += 0.034031413612565446;
          result[5] += 0.4607329842931937;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
          result[0] += 0.011627906976744186;
          result[1] += 0.2441860465116279;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7325581395348837;
          result[5] += 0.011627906976744186;
        } else {
          result[0] += 0.002169197396963124;
          result[1] += 0.9522776572668114;
          result[2] += 0;
          result[3] += 0.002169197396963124;
          result[4] += 0.04338394793926248;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8418604651162789;
          result[1] += 0.032558139534883714;
          result[2] += 0.007751937984496122;
          result[3] += 0.027131782945736427;
          result[4] += 0.07364341085271317;
          result[5] += 0.01705426356589147;
        } else {
          result[0] += 0.15112540192926047;
          result[1] += 0.028938906752411578;
          result[2] += 0.13504823151125406;
          result[3] += 0.29581993569131837;
          result[4] += 0.13504823151125406;
          result[5] += 0.2540192926045017;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.0625;
          result[4] += 0.0625;
          result[5] += 0.8125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1774193548387097;
          result[3] += 0.6290322580645161;
          result[4] += 0.008064516129032258;
          result[5] += 0.18548387096774194;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
          result[0] += 0.010548523206751054;
          result[1] += 0;
          result[2] += 0.8143459915611815;
          result[3] += 0.1518987341772152;
          result[4] += 0;
          result[5] += 0.023206751054852322;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9238095238095239;
          result[3] += 0.0761904761904762;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9973544973544973;
          result[3] += 0.0026455026455026454;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9762845849802372;
          result[5] += 0.023715415019762844;
        } else {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.001379310344827586;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023448275862068966;
          result[4] += 0.04275862068965517;
          result[5] += 0.9324137931034483;
        } else {
          result[0] += 0.06881720430107527;
          result[1] += 0.06881720430107527;
          result[2] += 0.03655913978494624;
          result[3] += 0.2860215053763441;
          result[4] += 0.10752688172043011;
          result[5] += 0.432258064516129;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956521739130435;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004347826086956522;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.1179245283018868;
          result[1] += 0.13679245283018868;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7264150943396226;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0.761521580102414;
          result[1] += 0.010241404535479151;
          result[2] += 0.020482809070958303;
          result[3] += 0.08119970738844184;
          result[4] += 0.04901243599122165;
          result[5] += 0.07754206291148501;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0.057971014492753624;
          result[3] += 0.2318840579710145;
          result[4] += 0.07246376811594203;
          result[5] += 0.5507246376811594;
        } else {
          result[0] += 0.006578947368421052;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.6710526315789473;
          result[4] += 0;
          result[5] += 0.19736842105263158;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0.030303030303030304;
          result[2] += 0.18181818181818182;
          result[3] += 0.015151515151515152;
          result[4] += 0.3484848484848485;
          result[5] += 0.3939393939393939;
        } else {
          result[0] += 0.11971830985915492;
          result[1] += 0.007042253521126761;
          result[2] += 0.6338028169014085;
          result[3] += 0.1619718309859155;
          result[4] += 0.007042253521126761;
          result[5] += 0.07042253521126761;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13513513513513514;
          result[3] += 0.8108108108108109;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.008849557522123894;
          result[1] += 0;
          result[2] += 0.8171091445427728;
          result[3] += 0.1710914454277286;
          result[4] += 0;
          result[5] += 0.0029498525073746312;
        } else {
          result[0] += 0.007858546168958742;
          result[1] += 0;
          result[2] += 0.962671905697446;
          result[3] += 0.0275049115913556;
          result[4] += 0;
          result[5] += 0.0019646365422396855;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008130081300813009;
          result[1] += 0.02032520325203252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.967479674796748;
          result[5] += 0.0040650406504065045;
        } else {
          result[0] += 0.4745762711864407;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022598870056497175;
          result[4] += 0.2768361581920904;
          result[5] += 0.22598870056497175;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0054869684499314125;
          result[2] += 0.0013717421124828531;
          result[3] += 0.023319615912208505;
          result[4] += 0.05212620027434842;
          result[5] += 0.9176954732510288;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0.055232558139534885;
          result[2] += 0.03488372093023256;
          result[3] += 0.2877906976744186;
          result[4] += 0.09302325581395349;
          result[5] += 0.5058139534883721;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.41304347826086957;
          result[2] += 0.10869565217391304;
          result[3] += 0.043478260869565216;
          result[4] += 0.32608695652173914;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0.9905437352245863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009456264775413711;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.814262023217247;
          result[1] += 0.01824212271973466;
          result[2] += 0;
          result[3] += 0.04145936981757877;
          result[4] += 0.10364842454394693;
          result[5] += 0.022388059701492536;
        } else {
          result[0] += 0.19339622641509435;
          result[1] += 0.04245283018867924;
          result[2] += 0.10377358490566038;
          result[3] += 0.33254716981132076;
          result[4] += 0.10613207547169812;
          result[5] += 0.22169811320754718;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.38461538461538464;
          result[3] += 0.038461538461538464;
          result[4] += 0.5384615384615384;
          result[5] += 0;
        } else {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.03636363636363636;
          result[3] += 0.14545454545454545;
          result[4] += 0.03636363636363636;
          result[5] += 0.7636363636363637;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.6833333333333333;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0.007042253521126761;
          result[1] += 0;
          result[2] += 0.7183098591549296;
          result[3] += 0.21830985915492956;
          result[4] += 0;
          result[5] += 0.056338028169014086;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.03278688524590165;
          result[1] += 0.03278688524590165;
          result[2] += 0.5573770491803279;
          result[3] += 0.09836065573770493;
          result[4] += 0.0819672131147541;
          result[5] += 0.19672131147540986;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0.00684931506849315;
          result[1] += 0;
          result[2] += 0.821917808219178;
          result[3] += 0.13013698630136986;
          result[4] += 0;
          result[5] += 0.0410958904109589;
        } else {
          result[0] += 0.00746268656716418;
          result[1] += 0;
          result[2] += 0.9522388059701493;
          result[3] += 0.03432835820895523;
          result[4] += 0.001492537313432836;
          result[5] += 0.004477611940298509;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.007518796992481203;
          result[1] += 0.045112781954887216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9473684210526315;
          result[5] += 0;
        } else {
          result[0] += 0.4752475247524753;
          result[1] += 0.10891089108910892;
          result[2] += 0.019801980198019806;
          result[3] += 0.05940594059405941;
          result[4] += 0.12871287128712874;
          result[5] += 0.20792079207920794;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.002304147465437788;
          result[1] += 0.00576036866359447;
          result[2] += 0.001152073732718894;
          result[3] += 0.056451612903225805;
          result[4] += 0.06336405529953917;
          result[5] += 0.8709677419354839;
        } else {
          result[0] += 0.017730496453900714;
          result[1] += 0.007092198581560284;
          result[2] += 0.07801418439716314;
          result[3] += 0.5035460992907802;
          result[4] += 0.08865248226950356;
          result[5] += 0.30496453900709225;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.07114624505928854;
          result[1] += 0.31620553359683795;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5731225296442688;
          result[5] += 0.039525691699604744;
        } else {
          result[0] += 0.6783980582524272;
          result[1] += 0.00424757281553398;
          result[2] += 0.06614077669902912;
          result[3] += 0.09587378640776699;
          result[4] += 0.05946601941747573;
          result[5] += 0.09587378640776699;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.018518518518518517;
          result[1] += 0;
          result[2] += 0.09259259259259259;
          result[3] += 0.24074074074074073;
          result[4] += 0.018518518518518517;
          result[5] += 0.6296296296296297;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.43478260869565216;
          result[3] += 0.42028985507246375;
          result[4] += 0;
          result[5] += 0.14492753623188406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9318181818181818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06818181818181818;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.020895522388059702;
          result[1] += 0;
          result[2] += 0.8298507462686567;
          result[3] += 0.14925373134328357;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9707602339181286;
          result[3] += 0.02729044834307992;
          result[4] += 0;
          result[5] += 0.001949317738791423;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68) ) ) {
          result[0] += 0.01858736059479554;
          result[1] += 0.01486988847583643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9553903345724907;
          result[5] += 0.011152416356877323;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0;
          result[4] += 0.26666666666666666;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.024832855778414518;
          result[1] += 0.017191977077363897;
          result[2] += 0;
          result[3] += 0.05157593123209169;
          result[4] += 0.07163323782234957;
          result[5] += 0.8347659980897804;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06432748538011696;
          result[3] += 0.6432748538011696;
          result[4] += 0.017543859649122806;
          result[5] += 0.27485380116959063;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9913232104121475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008676789587852495;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.09826589595375723;
          result[1] += 0.13872832369942195;
          result[2] += 0;
          result[3] += 0.017341040462427744;
          result[4] += 0.7167630057803468;
          result[5] += 0.028901734104046242;
        } else {
          result[0] += 0.7483636363636365;
          result[1] += 0.02036363636363637;
          result[2] += 0.01381818181818182;
          result[3] += 0.06181818181818183;
          result[4] += 0.06181818181818183;
          result[5] += 0.09381818181818183;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06766917293233082;
          result[3] += 0.631578947368421;
          result[4] += 0;
          result[5] += 0.3007518796992481;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.4666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03431372549019609;
          result[1] += 0;
          result[2] += 0.5049019607843138;
          result[3] += 0.2843137254901961;
          result[4] += 0.009803921568627453;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.006993006993006993;
          result[1] += 0;
          result[2] += 0.8671328671328671;
          result[3] += 0.1258741258741259;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          result[0] += 0.0925925925925926;
          result[1] += 0;
          result[2] += 0.7685185185185186;
          result[3] += 0.06481481481481483;
          result[4] += 0.00925925925925926;
          result[5] += 0.06481481481481483;
        } else {
          result[0] += 0.01171303074670571;
          result[1] += 0;
          result[2] += 0.9385065885797951;
          result[3] += 0.048316251830161056;
          result[4] += 0;
          result[5] += 0.0014641288433382138;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9464285714285714;
          result[5] += 0.05357142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0.1875;
          result[5] += 0.1875;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03640256959314775;
          result[1] += 0.004282655246252677;
          result[2] += 0.0021413276231263384;
          result[3] += 0.03961456102783726;
          result[4] += 0.07815845824411134;
          result[5] += 0.8394004282655246;
        } else {
          result[0] += 0.02694610778443114;
          result[1] += 0.038922155688622756;
          result[2] += 0.0658682634730539;
          result[3] += 0.49101796407185627;
          result[4] += 0.03592814371257485;
          result[5] += 0.3413173652694611;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.3888888888888889;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        } else {
          result[0] += 0.004784688995215311;
          result[1] += 0.9832535885167464;
          result[2] += 0.004784688995215311;
          result[3] += 0.007177033492822967;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0.03994082840236687;
          result[2] += 0.0029585798816568047;
          result[3] += 0.015532544378698224;
          result[4] += 0.13757396449704143;
          result[5] += 0.03476331360946745;
        } else {
          result[0] += 0.1545253863134658;
          result[1] += 0;
          result[2] += 0.26048565121412803;
          result[3] += 0.2913907284768212;
          result[4] += 0.09492273730684327;
          result[5] += 0.1986754966887417;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0.9473684210526315;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.12121212121212122;
          result[2] += 0.18181818181818182;
          result[3] += 0.19696969696969696;
          result[4] += 0.06060606060606061;
          result[5] += 0.4393939393939394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5887850467289719;
          result[3] += 0.3364485981308411;
          result[4] += 0;
          result[5] += 0.07476635514018691;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
          result[0] += 0.4838709677419355;
          result[1] += 0;
          result[2] += 0.41935483870967744;
          result[3] += 0.0967741935483871;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.012244897959183673;
          result[1] += 0;
          result[2] += 0.8367346938775511;
          result[3] += 0.1306122448979592;
          result[4] += 0;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0.001669449081803005;
          result[1] += 0;
          result[2] += 0.9632721202003339;
          result[3] += 0.03005008347245409;
          result[4] += 0;
          result[5] += 0.005008347245409015;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0033333333333333335;
          result[1] += 0;
          result[2] += 0.0033333333333333335;
          result[3] += 0.006666666666666667;
          result[4] += 0.9633333333333334;
          result[5] += 0.023333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0.9411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.7481481481481482;
          result[1] += 0.0074074074074074086;
          result[2] += 0;
          result[3] += 0.04444444444444445;
          result[4] += 0.11111111111111112;
          result[5] += 0.0888888888888889;
        } else {
          result[0] += 0.008289374529012811;
          result[1] += 0.0037678975131876413;
          result[2] += 0.00452147701582517;
          result[3] += 0.17030896759608138;
          result[4] += 0.03843255463451394;
          result[5] += 0.774679728711379;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.20952380952380953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.780952380952381;
          result[5] += 0.009523809523809525;
        } else {
          result[0] += 0;
          result[1] += 0.9909297052154195;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009070294784580499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8523852385238525;
          result[1] += 0.015301530153015303;
          result[2] += 0.015301530153015303;
          result[3] += 0.027902790279027905;
          result[4] += 0.06390639063906392;
          result[5] += 0.025202520252025205;
        } else {
          result[0] += 0.2968036529680365;
          result[1] += 0.0365296803652968;
          result[2] += 0.2237442922374429;
          result[3] += 0.1643835616438356;
          result[4] += 0.1461187214611872;
          result[5] += 0.1324200913242009;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.07317073170731707;
          result[3] += 0.17073170731707318;
          result[4] += 0.14634146341463414;
          result[5] += 0.5853658536585366;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0.07142857142857142;
          result[2] += 0.14285714285714285;
          result[3] += 0.5476190476190477;
          result[4] += 0;
          result[5] += 0.20238095238095238;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6422018348623854;
          result[3] += 0.30275229357798167;
          result[4] += 0;
          result[5] += 0.05504587155963303;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)120) ) ) {
          result[0] += 0.029411764705882356;
          result[1] += 0;
          result[2] += 0.8264705882352942;
          result[3] += 0.13529411764705884;
          result[4] += 0;
          result[5] += 0.008823529411764707;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.6984126984126984;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.06349206349206349;
        } else {
          result[0] += 0.009746588693957114;
          result[1] += 0;
          result[2] += 0.9649122807017544;
          result[3] += 0.025341130604288498;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93) ) ) {
          result[0] += 0.004545454545454545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.990909090909091;
          result[5] += 0.004545454545454545;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.32142857142857145;
          result[5] += 0.4642857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.052631578947368425;
          result[4] += 0.7719298245614036;
          result[5] += 0.1754385964912281;
        } else {
          result[0] += 0.029115341545352745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0425531914893617;
          result[4] += 0.025755879059350503;
          result[5] += 0.9025755879059351;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0.13846153846153847;
          result[1] += 0.023076923076923078;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0.13076923076923078;
          result[5] += 0.6307692307692307;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0.6008403361344538;
          result[4] += 0.012605042016806723;
          result[5] += 0.35714285714285715;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9858299595141701;
          result[2] += 0;
          result[3] += 0.0020242914979757085;
          result[4] += 0.012145748987854251;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
          result[0] += 0.15476190476190477;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.05952380952380952;
          result[4] += 0.5952380952380952;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.8044943820224719;
          result[1] += 0.018726591760299626;
          result[2] += 0.00599250936329588;
          result[3] += 0.060674157303370786;
          result[4] += 0.0696629213483146;
          result[5] += 0.04044943820224719;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1746987951807229;
          result[3] += 0.6265060240963856;
          result[4] += 0;
          result[5] += 0.19879518072289157;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4126984126984127;
          result[3] += 0.12698412698412698;
          result[4] += 0;
          result[5] += 0.4603174603174603;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.32954545454545453;
          result[1] += 0;
          result[2] += 0.4772727272727273;
          result[3] += 0.07954545454545454;
          result[4] += 0.03409090909090909;
          result[5] += 0.07954545454545454;
        } else {
          result[0] += 0.012320328542094456;
          result[1] += 0;
          result[2] += 0.8891170431211499;
          result[3] += 0.07392197125256673;
          result[4] += 0.006160164271047228;
          result[5] += 0.018480492813141684;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.0625;
          result[5] += 0;
        } else {
          result[0] += 0.006968641114982578;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006968641114982578;
          result[4] += 0.9616724738675958;
          result[5] += 0.024390243902439025;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.8636363636363636;
          result[1] += 0.08181818181818182;
          result[2] += 0;
          result[3] += 0.03636363636363636;
          result[4] += 0;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.022084805653710248;
          result[1] += 0.00441696113074205;
          result[2] += 0.0088339222614841;
          result[3] += 0.09098939929328621;
          result[4] += 0.07243816254416961;
          result[5] += 0.8012367491166078;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.1896551724137931;
          result[2] += 0;
          result[3] += 0.1724137931034483;
          result[4] += 0.5689655172413793;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0.9946236559139785;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005376344086021506;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8176519567027477;
          result[1] += 0.03164029975020816;
          result[2] += 0.004163197335553705;
          result[3] += 0.020815986677768527;
          result[4] += 0.093255620316403;
          result[5] += 0.0324729392173189;
        } else {
          result[0] += 0.11743772241992882;
          result[1] += 0.008896797153024912;
          result[2] += 0.1903914590747331;
          result[3] += 0.3505338078291815;
          result[4] += 0.09252669039145907;
          result[5] += 0.2402135231316726;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)57) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0.00980392156862745;
          result[2] += 0.0784313725490196;
          result[3] += 0.39215686274509803;
          result[4] += 0.049019607843137254;
          result[5] += 0.4411764705882353;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.524390243902439;
          result[3] += 0.43902439024390244;
          result[4] += 0;
          result[5] += 0.036585365853658534;
        } else {
          result[0] += 0.25490196078431376;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.03921568627450981;
          result[4] += 0;
          result[5] += 0.03921568627450981;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.01734104046242774;
          result[1] += 0;
          result[2] += 0.8439306358381501;
          result[3] += 0.12716763005780343;
          result[4] += 0;
          result[5] += 0.011560693641618495;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8805970149253731;
          result[3] += 0.11940298507462686;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9772727272727273;
          result[3] += 0.020833333333333332;
          result[4] += 0;
          result[5] += 0.001893939393939394;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0.009933774834437087;
          result[1] += 0.006622516556291391;
          result[2] += 0;
          result[3] += 0.013245033112582781;
          result[4] += 0.8874172185430463;
          result[5] += 0.08278145695364239;
        } else {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0011947431302270011;
          result[1] += 0;
          result[2] += 0.008363201911589008;
          result[3] += 0.04181600955794504;
          result[4] += 0.06929510155316607;
          result[5] += 0.8793309438470729;
        } else {
          result[0] += 0.16743119266055045;
          result[1] += 0.01834862385321101;
          result[2] += 0.022935779816513763;
          result[3] += 0.3738532110091743;
          result[4] += 0.08027522935779817;
          result[5] += 0.33715596330275227;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.5833333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4166666666666667;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          result[0] += 0.315359477124183;
          result[1] += 0.05228758169934641;
          result[2] += 0.1111111111111111;
          result[3] += 0.18137254901960784;
          result[4] += 0.10784313725490197;
          result[5] += 0.23202614379084968;
        } else {
          result[0] += 0.8007279344858963;
          result[1] += 0.020928116469517744;
          result[2] += 0.04549590536851683;
          result[3] += 0.03002729754322111;
          result[4] += 0.09918107370336669;
          result[5] += 0.003639672429481347;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0.9047619047619048;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10909090909090909;
          result[3] += 0.6909090909090909;
          result[4] += 0.01818181818181818;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.015463917525773196;
          result[2] += 0.6185567010309279;
          result[3] += 0.30412371134020616;
          result[4] += 0;
          result[5] += 0.061855670103092786;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.005714285714285714;
          result[1] += 0;
          result[2] += 0.8057142857142857;
          result[3] += 0.18857142857142858;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006993006993006993;
          result[1] += 0;
          result[2] += 0.9685314685314685;
          result[3] += 0.024475524475524476;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003076923076923077;
          result[1] += 0;
          result[2] += 0.9907692307692307;
          result[3] += 0.006153846153846154;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
          result[0] += 0.008547008547008548;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9572649572649573;
          result[5] += 0.03418803418803419;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.061938061938061936;
          result[1] += 0.011988011988011988;
          result[2] += 0;
          result[3] += 0.03396603396603397;
          result[4] += 0.05094905094905095;
          result[5] += 0.8411588411588412;
        } else {
          result[0] += 0.013736263736263736;
          result[1] += 0.013736263736263736;
          result[2] += 0.10164835164835165;
          result[3] += 0.5027472527472527;
          result[4] += 0.04120879120879121;
          result[5] += 0.3269230769230769;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978494623655914;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002150537634408602;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.023868312757201648;
          result[2] += 0.0024691358024691358;
          result[3] += 0.022222222222222223;
          result[4] += 0.14156378600823044;
          result[5] += 0.03209876543209877;
        } else {
          result[0] += 0.1810344827586207;
          result[1] += 0.01939655172413793;
          result[2] += 0.20689655172413793;
          result[3] += 0.2823275862068966;
          result[4] += 0.08620689655172414;
          result[5] += 0.22413793103448276;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0.25;
          result[4] += 0.045454545454545456;
          result[5] += 0.6590909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0.3;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6686390532544378;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.023668639053254437;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)126) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0.660377358490566;
          result[3] += 0.20754716981132076;
          result[4] += 0.018867924528301886;
          result[5] += 0.09433962264150944;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006666666666666667;
          result[1] += 0;
          result[2] += 0.9426666666666667;
          result[3] += 0.050666666666666665;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.003257328990228013;
          result[2] += 0;
          result[3] += 0.006514657980456026;
          result[4] += 0.9576547231270358;
          result[5] += 0.03257328990228013;
        } else {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.21428571428571427;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.9836065573770492;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01639344262295082;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0050200803212851405;
          result[1] += 0.0030120481927710845;
          result[2] += 0.001004016064257028;
          result[3] += 0.04317269076305221;
          result[4] += 0.0853413654618474;
          result[5] += 0.8624497991967871;
        } else {
          result[0] += 0.06525573192239859;
          result[1] += 0.02821869488536155;
          result[2] += 0.03527336860670194;
          result[3] += 0.43386243386243384;
          result[4] += 0.08641975308641975;
          result[5] += 0.3509700176366843;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.997920997920998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002079002079002079;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.484375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.515625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.9118303571428571;
          result[1] += 0.010044642857142858;
          result[2] += 0.005580357142857143;
          result[3] += 0.015625;
          result[4] += 0.05357142857142857;
          result[5] += 0.0033482142857142855;
        } else {
          result[0] += 0.26717557251908397;
          result[1] += 0.04580152671755725;
          result[2] += 0.1297709923664122;
          result[3] += 0.20610687022900764;
          result[4] += 0.13740458015267176;
          result[5] += 0.21374045801526717;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0.45;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9130434782608696;
          result[1] += 0.02173913043478261;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06521739130434784;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.05239179954441914;
          result[1] += 0;
          result[2] += 0.6651480637813212;
          result[3] += 0.20956719817767655;
          result[4] += 0.004555808656036446;
          result[5] += 0.0683371298405467;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9510703363914373;
          result[3] += 0.045871559633027525;
          result[4] += 0;
          result[5] += 0.0030581039755351682;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.011363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9507575757575758;
          result[5] += 0.03787878787878788;
        } else {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.125;
          result[5] += 0.3125;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0.020642201834862386;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04128440366972477;
          result[4] += 0.05963302752293578;
          result[5] += 0.8784403669724771;
        } else {
          result[0] += 0.08031088082901554;
          result[1] += 0.015544041450777202;
          result[2] += 0.010362694300518135;
          result[3] += 0.3860103626943005;
          result[4] += 0.05699481865284974;
          result[5] += 0.45077720207253885;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.08092485549132948;
          result[1] += 0.2543352601156069;
          result[2] += 0;
          result[3] += 0.017341040462427744;
          result[4] += 0.6416184971098265;
          result[5] += 0.005780346820809248;
        } else {
          result[0] += 0;
          result[1] += 0.9888392857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011160714285714286;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8501742160278746;
          result[1] += 0.0078397212543554;
          result[2] += 0.013066202090592335;
          result[3] += 0.028745644599303136;
          result[4] += 0.06968641114982578;
          result[5] += 0.03048780487804878;
        } else {
          result[0] += 0.30383480825958703;
          result[1] += 0.02654867256637168;
          result[2] += 0.19469026548672566;
          result[3] += 0.23893805309734514;
          result[4] += 0.05309734513274336;
          result[5] += 0.18289085545722714;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.08333333333333333;
          result[4] += 0.125;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03333333333333333;
          result[3] += 0.7833333333333333;
          result[4] += 0;
          result[5] += 0.18333333333333332;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4482758620689655;
          result[3] += 0.3448275862068966;
          result[4] += 0;
          result[5] += 0.20689655172413793;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0.006711409395973154;
          result[1] += 0;
          result[2] += 0.5973154362416108;
          result[3] += 0.348993288590604;
          result[4] += 0;
          result[5] += 0.04697986577181208;
        } else {
          result[0] += 0.014925373134328358;
          result[1] += 0.014925373134328358;
          result[2] += 0.835820895522388;
          result[3] += 0.08955223880597014;
          result[4] += 0;
          result[5] += 0.04477611940298507;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014647137150466045;
          result[1] += 0;
          result[2] += 0.9387483355525965;
          result[3] += 0.043941411451398134;
          result[4] += 0;
          result[5] += 0.002663115845539281;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.003663003663003663;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9597069597069597;
          result[5] += 0.03663003663003663;
        } else {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02062975027144408;
          result[1] += 0.0010857763300760044;
          result[2] += 0;
          result[3] += 0.04451682953311618;
          result[4] += 0.05537459283387622;
          result[5] += 0.8783930510314875;
        } else {
          result[0] += 0.051194539249146756;
          result[1] += 0;
          result[2] += 0.0034129692832764505;
          result[3] += 0.46075085324232085;
          result[4] += 0.030716723549488054;
          result[5] += 0.4539249146757679;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7451957295373666;
          result[1] += 0.06548042704626335;
          result[2] += 0.008540925266903915;
          result[3] += 0.04128113879003559;
          result[4] += 0.12597864768683273;
          result[5] += 0.013523131672597865;
        } else {
          result[0] += 0.1834862385321101;
          result[1] += 0.02981651376146789;
          result[2] += 0.27522935779816515;
          result[3] += 0.25;
          result[4] += 0.06651376146788991;
          result[5] += 0.19495412844036697;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0.5555555555555556;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.8666666666666667;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21333333333333335;
          result[3] += 0.6;
          result[4] += 0.02666666666666667;
          result[5] += 0.16;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6637168141592921;
          result[3] += 0.3274336283185841;
          result[4] += 0;
          result[5] += 0.008849557522123894;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
          result[0] += 0.6923076923076923;
          result[1] += 0.23076923076923078;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.20000000000000004;
          result[1] += 0;
          result[2] += 0.7000000000000001;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8805309734513275;
          result[3] += 0.1084070796460177;
          result[4] += 0;
          result[5] += 0.011061946902654867;
        } else {
          result[0] += 0.005050505050505052;
          result[1] += 0.002525252525252526;
          result[2] += 0.9747474747474748;
          result[3] += 0.01767676767676768;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004132231404958678;
          result[1] += 0.012396694214876033;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9504132231404959;
          result[5] += 0.03305785123966942;
        } else {
          result[0] += 0.45985401459854014;
          result[1] += 0;
          result[2] += 0.0364963503649635;
          result[3] += 0;
          result[4] += 0.25547445255474455;
          result[5] += 0.24817518248175183;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03495630461922597;
          result[4] += 0.05742821473158552;
          result[5] += 0.9076154806491885;
        } else {
          result[0] += 0.0025188916876574307;
          result[1] += 0.027707808564231738;
          result[2] += 0.03526448362720403;
          result[3] += 0.44836272040302266;
          result[4] += 0.06297229219143577;
          result[5] += 0.42317380352644834;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.26785714285714285;
          result[2] += 0;
          result[3] += 0.03571428571428571;
          result[4] += 0.6964285714285714;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9833729216152018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0166270783847981;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.02654867256637168;
          result[1] += 0.37168141592920356;
          result[2] += 0.008849557522123894;
          result[3] += 0.061946902654867256;
          result[4] += 0.5309734513274337;
          result[5] += 0;
        } else {
          result[0] += 0.7840579710144928;
          result[1] += 0.022463768115942032;
          result[2] += 0.025362318840579715;
          result[3] += 0.05000000000000001;
          result[4] += 0.06666666666666668;
          result[5] += 0.051449275362318844;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046511627906976744;
          result[3] += 0.09302325581395349;
          result[4] += 0.09302325581395349;
          result[5] += 0.7674418604651163;
        } else {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0.08571428571428572;
          result[3] += 0.5571428571428572;
          result[4] += 0;
          result[5] += 0.32857142857142857;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.31666666666666665;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8837209302325582;
          result[3] += 0.09302325581395349;
          result[4] += 0;
          result[5] += 0.023255813953488372;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.05454545454545454;
          result[2] += 0.2;
          result[3] += 0.2727272727272727;
          result[4] += 0.05454545454545454;
          result[5] += 0.32727272727272727;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.86;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.41379310344827586;
          result[1] += 0;
          result[2] += 0.41379310344827586;
          result[3] += 0;
          result[4] += 0.10344827586206896;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.004305705059203444;
          result[1] += 0;
          result[2] += 0.9246501614639397;
          result[3] += 0.062432723358449946;
          result[4] += 0.001076426264800861;
          result[5] += 0.007534983853606028;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.014492753623188406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9855072463768116;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03225806451612903;
          result[4] += 0.6290322580645161;
          result[5] += 0.3387096774193548;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03639240506329114;
          result[4] += 0.022151898734177215;
          result[5] += 0.9414556962025317;
        } else {
          result[0] += 0.09265734265734266;
          result[1] += 0.038461538461538464;
          result[2] += 0.02972027972027972;
          result[3] += 0.26048951048951047;
          result[4] += 0.08566433566433566;
          result[5] += 0.493006993006993;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.972972972972973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02702702702702703;
          result[5] += 0;
        } else {
          result[0] += 0.04;
          result[1] += 0.192;
          result[2] += 0;
          result[3] += 0.008;
          result[4] += 0.704;
          result[5] += 0.056;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8571428571428572;
          result[1] += 0.01469387755102041;
          result[2] += 0.00489795918367347;
          result[3] += 0.03183673469387756;
          result[4] += 0.07836734693877552;
          result[5] += 0.01306122448979592;
        } else {
          result[0] += 0.3463035019455253;
          result[1] += 0.03501945525291829;
          result[2] += 0.12062256809338522;
          result[3] += 0.24124513618677043;
          result[4] += 0.08949416342412451;
          result[5] += 0.16731517509727625;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.9285714285714286;
        } else {
          result[0] += 0;
          result[1] += 0.046511627906976744;
          result[2] += 0.09302325581395349;
          result[3] += 0.6046511627906976;
          result[4] += 0.007751937984496124;
          result[5] += 0.24806201550387597;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.009900990099009901;
          result[1] += 0;
          result[2] += 0.3465346534653465;
          result[3] += 0.39603960396039606;
          result[4] += 0.07920792079207921;
          result[5] += 0.16831683168316833;
        } else {
          result[0] += 0.037383177570093455;
          result[1] += 0;
          result[2] += 0.822429906542056;
          result[3] += 0.102803738317757;
          result[4] += 0.009345794392523364;
          result[5] += 0.028037383177570093;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          result[0] += 0.011461318051575933;
          result[1] += 0;
          result[2] += 0.7965616045845273;
          result[3] += 0.16618911174785103;
          result[4] += 0;
          result[5] += 0.02578796561604585;
        } else {
          result[0] += 0.6470588235294118;
          result[1] += 0.17647058823529413;
          result[2] += 0.17647058823529413;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
          result[0] += 0.005309734513274336;
          result[1] += 0;
          result[2] += 0.9716814159292035;
          result[3] += 0.023008849557522124;
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
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
          result[0] += 0.006600660066006601;
          result[1] += 0.013201320132013201;
          result[2] += 0;
          result[3] += 0.006600660066006601;
          result[4] += 0.900990099009901;
          result[5] += 0.07260726072607261;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          result[0] += 0.7916666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666669;
          result[5] += 0.04166666666666667;
        } else {
          result[0] += 0.005946481665014866;
          result[1] += 0.005946481665014866;
          result[2] += 0.002973240832507433;
          result[3] += 0.08424182358771061;
          result[4] += 0.06937561942517344;
          result[5] += 0.8315163528245788;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2608695652173913;
          result[2] += 0.043478260869565216;
          result[3] += 0;
          result[4] += 0.6956521739130435;
          result[5] += 0;
        } else {
          result[0] += 0.002364066193853428;
          result[1] += 0.9858156028368794;
          result[2] += 0;
          result[3] += 0.009456264775413711;
          result[4] += 0.002364066193853428;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.26497005988023953;
          result[1] += 0.01347305389221557;
          result[2] += 0.05389221556886228;
          result[3] += 0.31137724550898205;
          result[4] += 0.09580838323353294;
          result[5] += 0.26047904191616766;
        } else {
          result[0] += 0.802245250431779;
          result[1] += 0.044905008635578586;
          result[2] += 0.027633851468048358;
          result[3] += 0.0069084628670120895;
          result[4] += 0.10362694300518134;
          result[5] += 0.01468048359240069;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0.62;
          result[4] += 0;
          result[5] += 0.23;
        } else {
          result[0] += 0.15909090909090912;
          result[1] += 0;
          result[2] += 0.5454545454545455;
          result[3] += 0.18181818181818185;
          result[4] += 0;
          result[5] += 0.11363636363636365;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)120) ) ) {
          result[0] += 0.013793103448275862;
          result[1] += 0;
          result[2] += 0.7724137931034483;
          result[3] += 0.16551724137931034;
          result[4] += 0;
          result[5] += 0.04827586206896552;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4642857142857143;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0.02926829268292683;
          result[1] += 0;
          result[2] += 0.8341463414634146;
          result[3] += 0.1073170731707317;
          result[4] += 0;
          result[5] += 0.02926829268292683;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.004918032786885246;
          result[1] += 0;
          result[2] += 0.9737704918032787;
          result[3] += 0.019672131147540985;
          result[4] += 0;
          result[5] += 0.001639344262295082;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  
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
