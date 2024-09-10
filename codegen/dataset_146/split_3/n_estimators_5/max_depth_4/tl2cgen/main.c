
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05144694533762058;
          result[1] += 0.00964630225080386;
          result[2] += 0;
          result[3] += 0.006430868167202572;
          result[4] += 0.7813504823151125;
          result[5] += 0.15112540192926044;
        } else {
          result[0] += 0.5567010309278351;
          result[1] += 0.06701030927835051;
          result[2] += 0;
          result[3] += 0.05154639175257732;
          result[4] += 0.31443298969072164;
          result[5] += 0.010309278350515464;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
          result[0] += 0.001310615989515072;
          result[1] += 0.001310615989515072;
          result[2] += 0;
          result[3] += 0.03669724770642202;
          result[4] += 0.04325032765399738;
          result[5] += 0.9174311926605505;
        } else {
          result[0] += 0.029333333333333333;
          result[1] += 0.021333333333333333;
          result[2] += 0.005333333333333333;
          result[3] += 0.2906666666666667;
          result[4] += 0.11733333333333333;
          result[5] += 0.536;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.9908883826879271;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009111617312072893;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.807829181494662;
          result[1] += 0.03202846975088969;
          result[2] += 0.007117437722419929;
          result[3] += 0.04982206405693951;
          result[4] += 0.07473309608540926;
          result[5] += 0.028469750889679717;
        } else {
          result[0] += 0.16109422492401215;
          result[1] += 0.0547112462006079;
          result[2] += 0.11550151975683891;
          result[3] += 0.3252279635258359;
          result[4] += 0.0790273556231003;
          result[5] += 0.26443768996960487;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285715;
          result[2] += 0;
          result[3] += 0.14285714285714288;
          result[4] += 0.28571428571428575;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018518518518518517;
          result[3] += 0.05555555555555555;
          result[4] += 0.037037037037037035;
          result[5] += 0.8888888888888888;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.18571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47058823529411764;
          result[3] += 0.20588235294117646;
          result[4] += 0;
          result[5] += 0.3235294117647059;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24;
          result[3] += 0.5733333333333334;
          result[4] += 0.013333333333333334;
          result[5] += 0.17333333333333334;
        } else {
          result[0] += 0.04;
          result[1] += 0.06;
          result[2] += 0.68;
          result[3] += 0.02;
          result[4] += 0.08;
          result[5] += 0.12;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.3870967741935484;
          result[1] += 0;
          result[2] += 0.4838709677419355;
          result[3] += 0.12903225806451613;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0062827225130890054;
          result[1] += 0;
          result[2] += 0.9193717277486911;
          result[3] += 0.0712041884816754;
          result[4] += 0;
          result[5] += 0.0031413612565445027;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.021551724137931036;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9698275862068966;
          result[5] += 0.008620689655172414;
        } else {
          result[0] += 0.5670103092783505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13402061855670103;
          result[5] += 0.29896907216494845;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.0010482180293501049;
          result[1] += 0.006289308176100629;
          result[2] += 0;
          result[3] += 0.0649895178197065;
          result[4] += 0.057651991614255764;
          result[5] += 0.870020964360587;
        } else {
          result[0] += 0;
          result[1] += 0.0045045045045045045;
          result[2] += 0.013513513513513514;
          result[3] += 0.5405405405405406;
          result[4] += 0.009009009009009009;
          result[5] += 0.43243243243243246;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9766899766899767;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02097902097902098;
          result[5] += 0.002331002331002331;
        } else {
          result[0] += 0.02830188679245283;
          result[1] += 0.27358490566037735;
          result[2] += 0;
          result[3] += 0.009433962264150943;
          result[4] += 0.6698113207547169;
          result[5] += 0.018867924528301886;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8635634028892456;
          result[1] += 0.03531300160513644;
          result[2] += 0.0040128410914927765;
          result[3] += 0.015248796147672551;
          result[4] += 0.07624398073836276;
          result[5] += 0.0056179775280898875;
        } else {
          result[0] += 0.27358490566037735;
          result[1] += 0.006289308176100629;
          result[2] += 0.1918238993710692;
          result[3] += 0.23270440251572327;
          result[4] += 0.0220125786163522;
          result[5] += 0.27358490566037735;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.07936507936507936;
          result[2] += 0.06349206349206349;
          result[3] += 0.1746031746031746;
          result[4] += 0.12698412698412698;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16;
          result[3] += 0.7466666666666667;
          result[4] += 0;
          result[5] += 0.09333333333333334;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28846153846153844;
          result[3] += 0.4423076923076923;
          result[4] += 0;
          result[5] += 0.2692307692307692;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8292682926829268;
          result[3] += 0.10975609756097561;
          result[4] += 0;
          result[5] += 0.06097560975609756;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0.7368421052631579;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          result[0] += 0.06400000000000002;
          result[1] += 0;
          result[2] += 0.7573333333333334;
          result[3] += 0.16266666666666668;
          result[4] += 0.008000000000000002;
          result[5] += 0.008000000000000002;
        } else {
          result[0] += 0.0036166365280289334;
          result[1] += 0.0054249547920434005;
          result[2] += 0.9566003616636529;
          result[3] += 0.027124773960217;
          result[4] += 0.0036166365280289334;
          result[5] += 0.0036166365280289334;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0035087719298245615;
          result[1] += 0.017543859649122806;
          result[2] += 0.007017543859649123;
          result[3] += 0;
          result[4] += 0.9578947368421052;
          result[5] += 0.014035087719298246;
        } else {
          result[0] += 0;
          result[1] += 0.029850746268656716;
          result[2] += 0;
          result[3] += 0.08955223880597014;
          result[4] += 0.3880597014925373;
          result[5] += 0.4925373134328358;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0.9540229885057471;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04597701149425287;
          result[5] += 0;
        } else {
          result[0] += 0.0042643923240938165;
          result[1] += 0.006396588486140725;
          result[2] += 0;
          result[3] += 0.057569296375266525;
          result[4] += 0.05970149253731343;
          result[5] += 0.8720682302771855;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
          result[0] += 0.004651162790697674;
          result[1] += 0.9953488372093023;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.20000000000000004;
          result[2] += 0;
          result[3] += 0.7000000000000001;
          result[4] += 0.10000000000000002;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.776416539050536;
          result[1] += 0.045941807044410414;
          result[2] += 0.0038284839203675345;
          result[3] += 0.03445635528330781;
          result[4] += 0.09494640122511486;
          result[5] += 0.0444104134762634;
        } else {
          result[0] += 0.11467889908256881;
          result[1] += 0.04357798165137615;
          result[2] += 0.1651376146788991;
          result[3] += 0.38073394495412843;
          result[4] += 0.0871559633027523;
          result[5] += 0.20871559633027523;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117.5) ) ) {
          result[0] += 0;
          result[1] += 0.010752688172043012;
          result[2] += 0.053763440860215055;
          result[3] += 0.15053763440860216;
          result[4] += 0.021505376344086023;
          result[5] += 0.7634408602150538;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09803921568627451;
          result[3] += 0.7254901960784313;
          result[4] += 0.058823529411764705;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0;
          result[4] += 0.041666666666666664;
          result[5] += 0.375;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)114.5) ) ) {
          result[0] += 0.06640625;
          result[1] += 0.02734375;
          result[2] += 0.54296875;
          result[3] += 0.265625;
          result[4] += 0.01171875;
          result[5] += 0.0859375;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.822429906542056;
          result[3] += 0.16199376947040497;
          result[4] += 0;
          result[5] += 0.01557632398753894;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9778672032193159;
          result[3] += 0.018108651911468814;
          result[4] += 0;
          result[5] += 0.004024144869215292;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
          result[0] += 0.1;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.023715415019762844;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9169960474308301;
          result[5] += 0.05928853754940711;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0013227513227513227;
          result[1] += 0.0013227513227513227;
          result[2] += 0;
          result[3] += 0.041005291005291;
          result[4] += 0.04497354497354497;
          result[5] += 0.9113756613756614;
        } else {
          result[0] += 0.12979890310786105;
          result[1] += 0.016453382084095063;
          result[2] += 0.014625228519195612;
          result[3] += 0.3510054844606947;
          result[4] += 0.14625228519195613;
          result[5] += 0.34186471663619744;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.3673469387755102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6326530612244898;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8362573099415205;
          result[1] += 0.020885547201336674;
          result[2] += 0.003341687552213868;
          result[3] += 0.013366750208855471;
          result[4] += 0.09189640768588136;
          result[5] += 0.034252297410192145;
        } else {
          result[0] += 0.18619246861924685;
          result[1] += 0.029288702928870293;
          result[2] += 0.25523012552301255;
          result[3] += 0.18619246861924685;
          result[4] += 0.0502092050209205;
          result[5] += 0.2928870292887029;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113) ) ) {
          result[0] += 0;
          result[1] += 0.012658227848101266;
          result[2] += 0.06329113924050633;
          result[3] += 0.31645569620253167;
          result[4] += 0.11392405063291139;
          result[5] += 0.4936708860759494;
        } else {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4722222222222222;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8409090909090909;
          result[3] += 0.11363636363636363;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.41935483870967744;
          result[1] += 0;
          result[2] += 0.45161290322580644;
          result[3] += 0.03225806451612903;
          result[4] += 0.06451612903225806;
          result[5] += 0.03225806451612903;
        } else {
          result[0] += 0.005861664712778429;
          result[1] += 0;
          result[2] += 0.9425556858147714;
          result[3] += 0.04337631887456037;
          result[4] += 0;
          result[5] += 0.008206330597889801;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04545454545454546;
          result[5] += 0.04545454545454546;
        } else {
          result[0] += 0;
          result[1] += 0.0035460992907801418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9042553191489362;
          result[5] += 0.09219858156028368;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05201698513800425;
          result[1] += 0.0021231422505307855;
          result[2] += 0;
          result[3] += 0.059447983014861996;
          result[4] += 0.040339702760084924;
          result[5] += 0.8460721868365181;
        } else {
          result[0] += 0.015;
          result[1] += 0.035;
          result[2] += 0.01;
          result[3] += 0.58;
          result[4] += 0.01;
          result[5] += 0.35;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0.6363636363636364;
          result[5] += 0;
        } else {
          result[0] += 0.0025974025974025974;
          result[1] += 0.9974025974025974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7672727272727273;
          result[1] += 0.03927272727272728;
          result[2] += 0.0029090909090909093;
          result[3] += 0.026909090909090914;
          result[4] += 0.12800000000000003;
          result[5] += 0.03563636363636365;
        } else {
          result[0] += 0.12727272727272726;
          result[1] += 0.020202020202020204;
          result[2] += 0.2585858585858586;
          result[3] += 0.21212121212121213;
          result[4] += 0.06868686868686869;
          result[5] += 0.31313131313131315;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.09259259259259259;
          result[4] += 0.2037037037037037;
          result[5] += 0.5370370370370371;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2777777777777778;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7096774193548387;
          result[3] += 0.22580645161290322;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.015723270440251572;
          result[1] += 0;
          result[2] += 0.8081761006289309;
          result[3] += 0.16352201257861634;
          result[4] += 0;
          result[5] += 0.012578616352201259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9709618874773139;
          result[3] += 0.02722323049001815;
          result[4] += 0;
          result[5] += 0.0018148820326678765;
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
