
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0045045045045045045;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9864864864864865;
          result[5] += 0.009009009009009009;
        } else {
          result[0] += 0.4873417721518987;
          result[1] += 0.05063291139240506;
          result[2] += 0.006329113924050633;
          result[3] += 0.02531645569620253;
          result[4] += 0.13924050632911392;
          result[5] += 0.2911392405063291;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.002224694104560623;
          result[2] += 0.002224694104560623;
          result[3] += 0.04560622914349277;
          result[4] += 0.06229143492769744;
          result[5] += 0.8876529477196885;
        } else {
          result[0] += 0.0034965034965034965;
          result[1] += 0;
          result[2] += 0.01048951048951049;
          result[3] += 0.5629370629370629;
          result[4] += 0.027972027972027972;
          result[5] += 0.3951048951048951;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0.07555555555555556;
          result[1] += 0.3511111111111111;
          result[2] += 0;
          result[3] += 0.013333333333333334;
          result[4] += 0.5377777777777778;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0.7690179806362379;
          result[1] += 0.004149377593360996;
          result[2] += 0.06085753803596127;
          result[3] += 0.0636237897648686;
          result[4] += 0.04910096818810512;
          result[5] += 0.05325034578146611;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.9949622166246852;
          result[2] += 0;
          result[3] += 0.002518891687657431;
          result[4] += 0.002518891687657431;
          result[5] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06521739130434782;
          result[4] += 0.043478260869565216;
          result[5] += 0.8913043478260869;
        } else {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.41935483870967744;
          result[4] += 0;
          result[5] += 0.5483870967741935;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0364963503649635;
          result[2] += 0.40875912408759124;
          result[3] += 0.35036496350364965;
          result[4] += 0.021897810218978103;
          result[5] += 0.18248175182481752;
        } else {
          result[0] += 0.2777777777777778;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          result[0] += 0.015789473684210527;
          result[1] += 0;
          result[2] += 0.8315789473684211;
          result[3] += 0.1394736842105263;
          result[4] += 0;
          result[5] += 0.013157894736842105;
        } else {
          result[0] += 0.8125;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3142857142857143;
          result[1] += 0;
          result[2] += 0.6571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9676190476190476;
          result[3] += 0.03238095238095238;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8552631578947368;
          result[5] += 0.11842105263157894;
        } else {
          result[0] += 0.5064935064935064;
          result[1] += 0.1038961038961039;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0.025974025974025976;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.00954653937947494;
          result[2] += 0.003579952267303103;
          result[3] += 0.05250596658711217;
          result[4] += 0.07875894988066826;
          result[5] += 0.8556085918854416;
        } else {
          result[0] += 0.01718213058419244;
          result[1] += 0.006872852233676976;
          result[2] += 0.013745704467353952;
          result[3] += 0.44673539518900346;
          result[4] += 0.01718213058419244;
          result[5] += 0.49828178694158076;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9874213836477987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012578616352201259;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.05603448275862069;
          result[1] += 0.22413793103448276;
          result[2] += 0.008620689655172414;
          result[3] += 0.02586206896551724;
          result[4] += 0.6379310344827587;
          result[5] += 0.04741379310344827;
        } else {
          result[0] += 0.7732851985559567;
          result[1] += 0.020216606498194945;
          result[2] += 0.02527075812274368;
          result[3] += 0.05776173285198556;
          result[4] += 0.0592057761732852;
          result[5] += 0.06425992779783393;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.7391304347826086;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15476190476190477;
          result[3] += 0.7083333333333334;
          result[4] += 0;
          result[5] += 0.13690476190476192;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.023255813953488375;
          result[1] += 0.011627906976744188;
          result[2] += 0.6627906976744187;
          result[3] += 0.12790697674418608;
          result[4] += 0;
          result[5] += 0.17441860465116282;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18518518518518517;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.48148148148148145;
        } else {
          result[0] += 0.042735042735042736;
          result[1] += 0;
          result[2] += 0.7264957264957265;
          result[3] += 0.06837606837606838;
          result[4] += 0.05128205128205128;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.025787965616045846;
          result[1] += 0;
          result[2] += 0.8252148997134671;
          result[3] += 0.14613180515759314;
          result[4] += 0.0028653295128939827;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9784313725490196;
          result[3] += 0.0196078431372549;
          result[4] += 0;
          result[5] += 0.00196078431372549;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0.012658227848101267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9578059071729959;
          result[5] += 0.029535864978902957;
        } else {
          result[0] += 0.47183098591549294;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.31690140845070425;
          result[5] += 0.2112676056338028;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02962962962962963;
          result[4] += 0.028148148148148148;
          result[5] += 0.9422222222222222;
        } else {
          result[0] += 0.003745318352059925;
          result[1] += 0.0056179775280898875;
          result[2] += 0.009363295880149813;
          result[3] += 0.3857677902621723;
          result[4] += 0.11235955056179775;
          result[5] += 0.48314606741573035;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.776;
          result[1] += 0.06545454545454546;
          result[2] += 0.005090909090909091;
          result[3] += 0.024;
          result[4] += 0.11272727272727273;
          result[5] += 0.016727272727272726;
        } else {
          result[0] += 0.14393939393939395;
          result[1] += 0.017676767676767676;
          result[2] += 0.25757575757575757;
          result[3] += 0.20454545454545456;
          result[4] += 0.1111111111111111;
          result[5] += 0.26515151515151514;
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.045454545454545456;
          result[2] += 0.06060606060606061;
          result[3] += 0.3181818181818182;
          result[4] += 0.16666666666666666;
          result[5] += 0.4090909090909091;
        } else {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0.6292134831460674;
          result[3] += 0.23595505617977527;
          result[4] += 0;
          result[5] += 0.12359550561797752;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0.1282051282051282;
          result[1] += 0;
          result[2] += 0.41025641025641024;
          result[3] += 0.4358974358974359;
          result[4] += 0;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0.03787878787878789;
          result[1] += 0.015151515151515154;
          result[2] += 0.7727272727272728;
          result[3] += 0.15151515151515155;
          result[4] += 0;
          result[5] += 0.02272727272727273;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84.5) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003430531732418525;
          result[1] += 0;
          result[2] += 0.9622641509433962;
          result[3] += 0.03430531732418525;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.016877637130801686;
          result[2] += 0.008438818565400843;
          result[3] += 0.008438818565400843;
          result[4] += 0.9493670886075949;
          result[5] += 0.016877637130801686;
        } else {
          result[0] += 0;
          result[1] += 0.6190476190476191;
          result[2] += 0;
          result[3] += 0.2619047619047619;
          result[4] += 0.11904761904761904;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0025412960609911056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.043202033036848796;
          result[4] += 0.04193138500635324;
          result[5] += 0.9123252858958069;
        } else {
          result[0] += 0.10393258426966293;
          result[1] += 0.0056179775280898875;
          result[2] += 0.014044943820224719;
          result[3] += 0.2893258426966292;
          result[4] += 0.1601123595505618;
          result[5] += 0.42696629213483145;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7806201550387597;
          result[1] += 0.07054263565891473;
          result[2] += 0.002325581395348837;
          result[3] += 0.017829457364341085;
          result[4] += 0.11085271317829458;
          result[5] += 0.017829457364341085;
        } else {
          result[0] += 0.13493975903614458;
          result[1] += 0.05542168674698795;
          result[2] += 0.12771084337349398;
          result[3] += 0.24096385542168675;
          result[4] += 0.07710843373493977;
          result[5] += 0.363855421686747;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.9901234567901235;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007407407407407408;
          result[5] += 0.0024691358024691358;
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12727272727272726;
          result[3] += 0.45454545454545453;
          result[4] += 0.06666666666666667;
          result[5] += 0.3515151515151515;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3118279569892473;
          result[3] += 0.5806451612903226;
          result[4] += 0.010752688172043012;
          result[5] += 0.0967741935483871;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7682926829268293;
          result[3] += 0.21951219512195122;
          result[4] += 0;
          result[5] += 0.012195121951219513;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
          result[0] += 0.32432432432432434;
          result[1] += 0;
          result[2] += 0.32432432432432434;
          result[3] += 0;
          result[4] += 0.08108108108108109;
          result[5] += 0.2702702702702703;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7384615384615385;
          result[3] += 0.2153846153846154;
          result[4] += 0;
          result[5] += 0.046153846153846156;
        } else {
          result[0] += 0.006622516556291391;
          result[1] += 0;
          result[2] += 0.9298013245033112;
          result[3] += 0.052980132450331126;
          result[4] += 0;
          result[5] += 0.010596026490066225;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0049261083743842365;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9704433497536946;
          result[5] += 0.024630541871921183;
        } else {
          result[0] += 0;
          result[1] += 0.17391304347826086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5869565217391305;
          result[5] += 0.2391304347826087;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0691588785046729;
          result[1] += 0.003738317757009346;
          result[2] += 0;
          result[3] += 0.05420560747663551;
          result[4] += 0.08504672897196262;
          result[5] += 0.7878504672897196;
        } else {
          result[0] += 0.0034482758620689655;
          result[1] += 0.010344827586206896;
          result[2] += 0.03103448275862069;
          result[3] += 0.5482758620689655;
          result[4] += 0.04482758620689655;
          result[5] += 0.3620689655172414;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7662434652725916;
          result[1] += 0.08140403286034355;
          result[2] += 0.0059746079163554905;
          result[3] += 0.02016430171769978;
          result[4] += 0.111277072442121;
          result[5] += 0.014936519790888725;
        } else {
          result[0] += 0.15315315315315314;
          result[1] += 0.036036036036036036;
          result[2] += 0.24924924924924924;
          result[3] += 0.2132132132132132;
          result[4] += 0.05405405405405406;
          result[5] += 0.29429429429429427;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07547169811320754;
          result[3] += 0.7735849056603774;
          result[4] += 0;
          result[5] += 0.1509433962264151;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6071428571428571;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.32142857142857145;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
          result[0] += 0.017441860465116275;
          result[1] += 0;
          result[2] += 0.7674418604651161;
          result[3] += 0.15697674418604649;
          result[4] += 0.011627906976744184;
          result[5] += 0.04651162790697674;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8693877551020408;
          result[3] += 0.12244897959183673;
          result[4] += 0;
          result[5] += 0.00816326530612245;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9668989547038328;
          result[3] += 0.033101045296167246;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0.00784313725490196;
          result[4] += 0.9176470588235294;
          result[5] += 0.01568627450980392;
        } else {
          result[0] += 0.5405405405405406;
          result[1] += 0.018018018018018018;
          result[2] += 0;
          result[3] += 0.036036036036036036;
          result[4] += 0.22972972972972974;
          result[5] += 0.17567567567567569;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0014641288433382138;
          result[2] += 0.0014641288433382138;
          result[3] += 0.03074670571010249;
          result[4] += 0.055636896046852125;
          result[5] += 0.9106881405563689;
        } else {
          result[0] += 0.014598540145985401;
          result[1] += 0.012165450121654502;
          result[2] += 0.004866180048661801;
          result[3] += 0.26034063260340634;
          result[4] += 0.17518248175182483;
          result[5] += 0.5328467153284672;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9953917050691244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004608294930875576;
          result[5] += 0;
        } else {
          result[0] += 0.06818181818181818;
          result[1] += 0.45454545454545453;
          result[2] += 0.011363636363636364;
          result[3] += 0.03409090909090909;
          result[4] += 0.4318181818181818;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8658892128279884;
          result[1] += 0.04470359572400389;
          result[2] += 0;
          result[3] += 0.012633624878522837;
          result[4] += 0.057337220602526724;
          result[5] += 0.019436345966958212;
        } else {
          result[0] += 0.15853658536585366;
          result[1] += 0.005226480836236934;
          result[2] += 0.20209059233449478;
          result[3] += 0.37456445993031356;
          result[4] += 0.02264808362369338;
          result[5] += 0.23693379790940766;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.18421052631578946;
          result[5] += 0.7631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0.14285714285714285;
          result[3] += 0.42857142857142855;
          result[4] += 0.023809523809523808;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.5833333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.03787878787878788;
          result[1] += 0.007575757575757576;
          result[2] += 0.5984848484848485;
          result[3] += 0.24242424242424243;
          result[4] += 0;
          result[5] += 0.11363636363636363;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.36363636363636365;
          result[4] += 0.09090909090909091;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.003289473684210526;
          result[1] += 0;
          result[2] += 0.8256578947368421;
          result[3] += 0.1611842105263158;
          result[4] += 0;
          result[5] += 0.009868421052631578;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8674698795180723;
          result[3] += 0.12048192771084337;
          result[4] += 0;
          result[5] += 0.012048192771084338;
        } else {
          result[0] += 0.001968503937007874;
          result[1] += 0;
          result[2] += 0.9783464566929134;
          result[3] += 0.01968503937007874;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9906103286384976;
          result[5] += 0.009389671361502348;
        } else {
          result[0] += 0.047058823529411764;
          result[1] += 0.023529411764705882;
          result[2] += 0;
          result[3] += 0.011764705882352941;
          result[4] += 0.6705882352941176;
          result[5] += 0.24705882352941178;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.7272727272727273;
          result[1] += 0.01818181818181818;
          result[2] += 0;
          result[3] += 0.01818181818181818;
          result[4] += 0.18181818181818182;
          result[5] += 0.05454545454545454;
        } else {
          result[0] += 0.001072961373390558;
          result[1] += 0.003218884120171674;
          result[2] += 0.002145922746781116;
          result[3] += 0.06545064377682404;
          result[4] += 0.06330472103004292;
          result[5] += 0.8648068669527897;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.775;
          result[1] += 0.052941176470588235;
          result[2] += 0.011029411764705883;
          result[3] += 0.03308823529411765;
          result[4] += 0.09338235294117647;
          result[5] += 0.03455882352941177;
        } else {
          result[0] += 0.15512465373961218;
          result[1] += 0.019390581717451522;
          result[2] += 0.13573407202216067;
          result[3] += 0.3767313019390582;
          result[4] += 0.060941828254847646;
          result[5] += 0.2520775623268698;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.0684931506849315;
          result[2] += 0.02054794520547945;
          result[3] += 0.2602739726027397;
          result[4] += 0.0410958904109589;
          result[5] += 0.6095890410958904;
        } else {
          result[0] += 0.01020408163265306;
          result[1] += 0;
          result[2] += 0.12244897959183673;
          result[3] += 0.5612244897959183;
          result[4] += 0;
          result[5] += 0.30612244897959184;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7608695652173914;
          result[3] += 0.2391304347826087;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
          result[0] += 0.06976744186046512;
          result[1] += 0.023255813953488372;
          result[2] += 0.6162790697674418;
          result[3] += 0.1511627906976744;
          result[4] += 0.05813953488372093;
          result[5] += 0.08139534883720931;
        } else {
          result[0] += 0.6764705882352942;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.11764705882352941;
          result[4] += 0.029411764705882353;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6625;
          result[3] += 0.29375;
          result[4] += 0;
          result[5] += 0.04375;
        } else {
          result[0] += 0.003778337531486146;
          result[1] += 0;
          result[2] += 0.9458438287153652;
          result[3] += 0.0491183879093199;
          result[4] += 0;
          result[5] += 0.0012594458438287153;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01834862385321101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9724770642201835;
          result[5] += 0.009174311926605505;
        } else {
          result[0] += 0.5285714285714286;
          result[1] += 0;
          result[2] += 0.014285714285714285;
          result[3] += 0.010714285714285714;
          result[4] += 0.2392857142857143;
          result[5] += 0.20714285714285716;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0024906600249066002;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037359900373599;
          result[4] += 0.07347447073474471;
          result[5] += 0.8866749688667497;
        } else {
          result[0] += 0.022792022792022793;
          result[1] += 0.09116809116809117;
          result[2] += 0.008547008547008548;
          result[3] += 0.27635327635327633;
          result[4] += 0.07122507122507123;
          result[5] += 0.5299145299145299;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 0.9948186528497409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0051813471502590676;
          result[5] += 0;
        } else {
          result[0] += 0.07207207207207207;
          result[1] += 0.40540540540540543;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5135135135135135;
          result[5] += 0.009009009009009009;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8434065934065934;
          result[1] += 0.015567765567765568;
          result[2] += 0.009157509157509158;
          result[3] += 0.04395604395604396;
          result[4] += 0.05036630036630037;
          result[5] += 0.037545787545787544;
        } else {
          result[0] += 0.2717678100263852;
          result[1] += 0.018469656992084433;
          result[2] += 0.18733509234828497;
          result[3] += 0.3324538258575198;
          result[4] += 0.055408970976253295;
          result[5] += 0.1345646437994723;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.05;
          result[2] += 0.025;
          result[3] += 0.125;
          result[4] += 0.275;
          result[5] += 0.525;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014285714285714285;
          result[3] += 0.7857142857142857;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36486486486486486;
          result[3] += 0.3918918918918919;
          result[4] += 0;
          result[5] += 0.24324324324324326;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.0975609756097561;
          result[1] += 0.0975609756097561;
          result[2] += 0.07317073170731707;
          result[3] += 0.024390243902439025;
          result[4] += 0.2926829268292683;
          result[5] += 0.4146341463414634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5631067961165048;
          result[3] += 0.3300970873786408;
          result[4] += 0;
          result[5] += 0.10679611650485436;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.6111111111111112;
          result[1] += 0;
          result[2] += 0.3888888888888889;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0059594755661501785;
          result[1] += 0;
          result[2] += 0.9046483909415971;
          result[3] += 0.08224076281287247;
          result[4] += 0.0023837902264600714;
          result[5] += 0.004767580452920143;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9519230769230769;
          result[5] += 0.04807692307692308;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21428571428571427;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.6987951807228916;
          result[1] += 0;
          result[2] += 0.060240963855421686;
          result[3] += 0;
          result[4] += 0.24096385542168675;
          result[5] += 0;
        } else {
          result[0] += 0.001710863986313088;
          result[1] += 0.000855431993156544;
          result[2] += 0.005988023952095809;
          result[3] += 0.14285714285714285;
          result[4] += 0.04961505560307956;
          result[5] += 0.7989734816082121;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.777529761904762;
          result[1] += 0.0386904761904762;
          result[2] += 0.0037202380952380955;
          result[3] += 0.030505952380952384;
          result[4] += 0.13392857142857145;
          result[5] += 0.015625000000000003;
        } else {
          result[0] += 0.21678321678321677;
          result[1] += 0.006993006993006993;
          result[2] += 0.16783216783216784;
          result[3] += 0.24825174825174826;
          result[4] += 0.08391608391608392;
          result[5] += 0.2762237762237762;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0.12244897959183673;
          result[2] += 0.05102040816326531;
          result[3] += 0.15306122448979592;
          result[4] += 0.1326530612244898;
          result[5] += 0.5204081632653061;
        } else {
          result[0] += 0.008333333333333333;
          result[1] += 0;
          result[2] += 0.10833333333333334;
          result[3] += 0.65;
          result[4] += 0;
          result[5] += 0.23333333333333334;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5135135135135135;
          result[3] += 0.35135135135135137;
          result[4] += 0.013513513513513514;
          result[5] += 0.12162162162162163;
        } else {
          result[0] += 0.0967741935483871;
          result[1] += 0;
          result[2] += 0.9032258064516129;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.695364238410596;
          result[3] += 0.25165562913907286;
          result[4] += 0.006622516556291391;
          result[5] += 0.046357615894039736;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.01288659793814433;
          result[1] += 0;
          result[2] += 0.9226804123711341;
          result[3] += 0.05670103092783505;
          result[4] += 0;
          result[5] += 0.007731958762886598;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019230769230769232;
          result[3] += 0.019230769230769232;
          result[4] += 0.7884615384615384;
          result[5] += 0.17307692307692307;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010479041916167664;
          result[4] += 0.019461077844311378;
          result[5] += 0.9700598802395209;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0.08127208480565372;
          result[1] += 0.05653710247349824;
          result[2] += 0;
          result[3] += 0.12014134275618375;
          result[4] += 0.15547703180212016;
          result[5] += 0.5865724381625442;
        } else {
          result[0] += 0.005524861878453039;
          result[1] += 0;
          result[2] += 0.10497237569060774;
          result[3] += 0.5303867403314918;
          result[4] += 0.022099447513812157;
          result[5] += 0.33701657458563544;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0.22580645161290322;
          result[2] += 0;
          result[3] += 0.11290322580645161;
          result[4] += 0.5967741935483871;
          result[5] += 0.03225806451612903;
        } else {
          result[0] += 0.009216589861751154;
          result[1] += 0.9815668202764978;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009216589861751154;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8103855232100708;
          result[1] += 0.021243115656963022;
          result[2] += 0.004720692368214005;
          result[3] += 0.024390243902439025;
          result[4] += 0.0975609756097561;
          result[5] += 0.041699449252557044;
        } else {
          result[0] += 0.2509090909090909;
          result[1] += 0.06909090909090909;
          result[2] += 0.08363636363636363;
          result[3] += 0.27636363636363637;
          result[4] += 0.10545454545454545;
          result[5] += 0.21454545454545454;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0.004464285714285714;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.39285714285714285;
          result[4] += 0.022321428571428572;
          result[5] += 0.45535714285714285;
        } else {
          result[0] += 0;
          result[1] += 0.023076923076923078;
          result[2] += 0.6692307692307692;
          result[3] += 0.2230769230769231;
          result[4] += 0;
          result[5] += 0.08461538461538462;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.24;
          result[1] += 0.14666666666666667;
          result[2] += 0.29333333333333333;
          result[3] += 0.08;
          result[4] += 0.09333333333333334;
          result[5] += 0.14666666666666667;
        } else {
          result[0] += 0.010752688172043012;
          result[1] += 0;
          result[2] += 0.9096774193548387;
          result[3] += 0.07526881720430108;
          result[4] += 0;
          result[5] += 0.004301075268817204;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.972972972972973;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.3103448275862069;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3218390804597701;
          result[5] += 0.367816091954023;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.005688282138794084;
          result[2] += 0;
          result[3] += 0.040955631399317405;
          result[4] += 0.048919226393629126;
          result[5] += 0.9044368600682594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007782101167315176;
          result[3] += 0.5680933852140079;
          result[4] += 0.011673151750972765;
          result[5] += 0.4124513618677043;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.20238095238095238;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7738095238095238;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.002369668246445498;
          result[1] += 0.981042654028436;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016587677725118485;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8320783132530122;
          result[1] += 0.032379518072289164;
          result[2] += 0.004518072289156627;
          result[3] += 0.023343373493975906;
          result[4] += 0.08584337349397592;
          result[5] += 0.021837349397590366;
        } else {
          result[0] += 0.15811088295687886;
          result[1] += 0.01642710472279261;
          result[2] += 0.19301848049281314;
          result[3] += 0.26283367556468173;
          result[4] += 0.0944558521560575;
          result[5] += 0.2751540041067762;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.875;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1320754716981132;
          result[3] += 0.7924528301886793;
          result[4] += 0;
          result[5] += 0.07547169811320754;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0;
          result[2] += 0.6086956521739131;
          result[3] += 0.15217391304347827;
          result[4] += 0.08695652173913043;
          result[5] += 0.08695652173913043;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6134453781512605;
          result[3] += 0.2773109243697479;
          result[4] += 0.008403361344537815;
          result[5] += 0.10084033613445378;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0;
          result[2] += 0.7865853658536586;
          result[3] += 0.17073170731707318;
          result[4] += 0;
          result[5] += 0.03048780487804878;
        } else {
          result[0] += 0.009287925696594427;
          result[1] += 0;
          result[2] += 0.9566563467492261;
          result[3] += 0.034055727554179564;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008368200836820083;
          result[1] += 0.012552301255230125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9539748953974896;
          result[5] += 0.02510460251046025;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26666666666666666;
          result[5] += 0.3047619047619048;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.001004016064257028;
          result[1] += 0.007028112449799197;
          result[2] += 0.001004016064257028;
          result[3] += 0.0783132530120482;
          result[4] += 0.050200803212851405;
          result[5] += 0.8624497991967871;
        } else {
          result[0] += 0.006024096385542169;
          result[1] += 0.006024096385542169;
          result[2] += 0.018072289156626505;
          result[3] += 0.6566265060240963;
          result[4] += 0.024096385542168676;
          result[5] += 0.2891566265060241;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.3023255813953488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6744186046511628;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0;
          result[1] += 0.9821826280623608;
          result[2] += 0.004454342984409799;
          result[3] += 0;
          result[4] += 0.013363028953229399;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8039056143205859;
          result[1] += 0.03173311635475998;
          result[2] += 0.010577705451586657;
          result[3] += 0.02685109845402767;
          result[4] += 0.11716842961757527;
          result[5] += 0.009764035801464607;
        } else {
          result[0] += 0.23095238095238096;
          result[1] += 0.030952380952380953;
          result[2] += 0.19523809523809524;
          result[3] += 0.24285714285714285;
          result[4] += 0.08333333333333333;
          result[5] += 0.21666666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857144;
          result[2] += 0.28571428571428575;
          result[3] += 0.42857142857142866;
          result[4] += 0.14285714285714288;
          result[5] += 0.07142857142857144;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08;
          result[5] += 0.92;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13114754098360656;
          result[3] += 0.6885245901639344;
          result[4] += 0;
          result[5] += 0.18032786885245902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4594594594594595;
          result[3] += 0.32432432432432434;
          result[4] += 0;
          result[5] += 0.21621621621621623;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.4166666666666667;
        } else {
          result[0] += 0.019999999999999997;
          result[1] += 0.009999999999999998;
          result[2] += 0.5599999999999999;
          result[3] += 0.31999999999999995;
          result[4] += 0.009999999999999998;
          result[5] += 0.07999999999999999;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          result[0] += 0.009324009324009324;
          result[1] += 0;
          result[2] += 0.8321678321678322;
          result[3] += 0.11655011655011654;
          result[4] += 0.004662004662004662;
          result[5] += 0.037296037296037296;
        } else {
          result[0] += 0.0019960079840319355;
          result[1] += 0;
          result[2] += 0.9720558882235527;
          result[3] += 0.021956087824351295;
          result[4] += 0;
          result[5] += 0.003992015968063871;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          result[0] += 0.0038022813688212928;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9619771863117871;
          result[5] += 0.034220532319391636;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.9743589743589743;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02564102564102564;
          result[5] += 0;
        } else {
          result[0] += 0.07547169811320754;
          result[1] += 0.018867924528301886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09433962264150944;
          result[5] += 0.8113207547169812;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.016845329249617153;
          result[4] += 0.013782542113323124;
          result[5] += 0.9693721286370597;
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
          result[0] += 0;
          result[1] += 0.008771929824561403;
          result[2] += 0.008771929824561403;
          result[3] += 0.12719298245614036;
          result[4] += 0.11403508771929824;
          result[5] += 0.7412280701754386;
        } else {
          result[0] += 0;
          result[1] += 0.033950617283950615;
          result[2] += 0.030864197530864196;
          result[3] += 0.4876543209876543;
          result[4] += 0.046296296296296294;
          result[5] += 0.4012345679012346;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.16923076923076924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8307692307692308;
          result[5] += 0;
        } else {
          result[0] += 0.002242152466367713;
          result[1] += 0.9910313901345291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006726457399103139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7850393700787403;
          result[1] += 0.03149606299212599;
          result[2] += 0.007086614173228347;
          result[3] += 0.03700787401574804;
          result[4] += 0.11023622047244096;
          result[5] += 0.02913385826771654;
        } else {
          result[0] += 0.1801470588235294;
          result[1] += 0.003676470588235294;
          result[2] += 0.10294117647058823;
          result[3] += 0.25735294117647056;
          result[4] += 0.09191176470588236;
          result[5] += 0.3639705882352941;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.4230769230769231;
          result[5] += 0.5;
        } else {
          result[0] += 0.025;
          result[1] += 0.04;
          result[2] += 0.325;
          result[3] += 0.435;
          result[4] += 0.015;
          result[5] += 0.16;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01780104712041885;
          result[1] += 0;
          result[2] += 0.9036649214659686;
          result[3] += 0.0712041884816754;
          result[4] += 0.0010471204188481676;
          result[5] += 0.0062827225130890054;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.97;
          result[5] += 0.025;
        } else {
          result[0] += 0;
          result[1] += 0.6842105263157895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3157894736842105;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          result[0] += 0.014557670772676373;
          result[1] += 0.0011198208286674132;
          result[2] += 0.014557670772676373;
          result[3] += 0.029115341545352745;
          result[4] += 0.04591265397536394;
          result[5] += 0.8947368421052632;
        } else {
          result[0] += 0;
          result[1] += 0.025;
          result[2] += 0.025;
          result[3] += 0.6;
          result[4] += 0.0125;
          result[5] += 0.3375;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.17391304347826086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8260869565217391;
          result[5] += 0;
        } else {
          result[0] += 0.002369668246445498;
          result[1] += 0.9881516587677726;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009478672985781991;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6873760740251157;
          result[1] += 0.03040317250495704;
          result[2] += 0.01255783212161269;
          result[3] += 0.048909451421017845;
          result[4] += 0.14540647719762062;
          result[5] += 0.07534699272967614;
        } else {
          result[0] += 0.14464285714285716;
          result[1] += 0.010714285714285714;
          result[2] += 0.1732142857142857;
          result[3] += 0.40535714285714286;
          result[4] += 0.05178571428571429;
          result[5] += 0.21428571428571427;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)51) ) ) {
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
          result[3] += 0.05172413793103448;
          result[4] += 0.08620689655172414;
          result[5] += 0.8620689655172413;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.39682539682539686;
          result[3] += 0.3730158730158731;
          result[4] += 0;
          result[5] += 0.23015873015873017;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          result[0] += 0.007722007722007722;
          result[1] += 0;
          result[2] += 0.7837837837837838;
          result[3] += 0.1969111969111969;
          result[4] += 0;
          result[5] += 0.011583011583011582;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7213114754098361;
          result[3] += 0.2786885245901639;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016891891891891895;
          result[1] += 0;
          result[2] += 0.9712837837837839;
          result[3] += 0.018581081081081086;
          result[4] += 0;
          result[5] += 0.008445945945945948;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.84;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16;
        } else {
          result[0] += 0;
          result[1] += 0.03463203463203463;
          result[2] += 0;
          result[3] += 0.025974025974025976;
          result[4] += 0.8658008658008658;
          result[5] += 0.0735930735930736;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          result[0] += 0.001430615164520744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04864091559370529;
          result[4] += 0.0357653791130186;
          result[5] += 0.9141630901287554;
        } else {
          result[0] += 0.07509157509157509;
          result[1] += 0.005494505494505495;
          result[2] += 0.029304029304029304;
          result[3] += 0.3076923076923077;
          result[4] += 0.08791208791208792;
          result[5] += 0.4945054945054945;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
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
          result[0] += 0.7397719651240778;
          result[1] += 0.030181086519114688;
          result[2] += 0.004024144869215292;
          result[3] += 0.038900067069081154;
          result[4] += 0.14621059691482227;
          result[5] += 0.0409121395036888;
        } else {
          result[0] += 0.14864864864864866;
          result[1] += 0.03783783783783784;
          result[2] += 0.31891891891891894;
          result[3] += 0.25675675675675674;
          result[4] += 0.03513513513513514;
          result[5] += 0.20270270270270271;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.10810810810810811;
          result[2] += 0.08108108108108109;
          result[3] += 0.02702702702702703;
          result[4] += 0;
          result[5] += 0.7837837837837838;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.02;
          result[2] += 0.22;
          result[3] += 0.56;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)107.5) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0.026785714285714284;
          result[2] += 0.49107142857142855;
          result[3] += 0.36607142857142855;
          result[4] += 0.017857142857142856;
          result[5] += 0.08035714285714286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9444444444444444;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.011029411764705883;
          result[1] += 0;
          result[2] += 0.8639705882352942;
          result[3] += 0.11397058823529412;
          result[4] += 0.003676470588235294;
          result[5] += 0.007352941176470588;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9738562091503268;
          result[3] += 0.023965141612200435;
          result[4] += 0;
          result[5] += 0.002178649237472767;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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
