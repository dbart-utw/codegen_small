
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.015544041450777202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9740932642487047;
          result[5] += 0.010362694300518135;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.40384615384615385;
          result[5] += 0.5576923076923077;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02607561929595828;
          result[4] += 0.05736636245110821;
          result[5] += 0.9165580182529335;
        } else {
          result[0] += 0.07304785894206549;
          result[1] += 0.012594458438287154;
          result[2] += 0.005037783375314861;
          result[3] += 0.34005037783375314;
          result[4] += 0.09571788413098237;
          result[5] += 0.473551637279597;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0.03571428571428571;
          result[4] += 0.6071428571428571;
          result[5] += 0.17857142857142858;
        } else {
          result[0] += 0.0064794816414686825;
          result[1] += 0.9848812095032398;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008639308855291577;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
          result[0] += 0.366702937976061;
          result[1] += 0.04134929270946682;
          result[2] += 0.12078346028291623;
          result[3] += 0.19477693144722527;
          result[4] += 0.14689880304679;
          result[5] += 0.12948857453754084;
        } else {
          result[0] += 0.826039387308534;
          result[1] += 0.03719912472647703;
          result[2] += 0.025164113785557992;
          result[3] += 0.009846827133479214;
          result[4] += 0.09737417943107222;
          result[5] += 0.004376367614879651;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0.05128205128205128;
          result[5] += 0.7948717948717948;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.05263157894736842;
          result[2] += 0.10526315789473684;
          result[3] += 0.5789473684210527;
          result[4] += 0;
          result[5] += 0.2631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0.14473684210526316;
          result[2] += 0.5921052631578947;
          result[3] += 0.14473684210526316;
          result[4] += 0;
          result[5] += 0.11842105263157894;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116.5) ) ) {
          result[0] += 0.04736842105263159;
          result[1] += 0;
          result[2] += 0.736842105263158;
          result[3] += 0.19473684210526318;
          result[4] += 0;
          result[5] += 0.02105263157894737;
        } else {
          result[0] += 0.6923076923076923;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.07692307692307693;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.18571428571428572;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0045662100456621;
          result[1] += 0;
          result[2] += 0.9771689497716894;
          result[3] += 0.0182648401826484;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004524886877828055;
          result[4] += 0.9411764705882353;
          result[5] += 0.049773755656108594;
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
          result[2] += 0.002894356005788712;
          result[3] += 0.024602026049204053;
          result[4] += 0.023154848046309694;
          result[5] += 0.9493487698986975;
        } else {
          result[0] += 0.0898876404494382;
          result[1] += 0.04868913857677903;
          result[2] += 0.0056179775280898875;
          result[3] += 0.3333333333333333;
          result[4] += 0.06554307116104868;
          result[5] += 0.45692883895131087;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.004484304932735426;
          result[1] += 0.9775784753363229;
          result[2] += 0.006726457399103139;
          result[3] += 0.006726457399103139;
          result[4] += 0.004484304932735426;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.1324200913242009;
          result[1] += 0.2100456621004566;
          result[2] += 0;
          result[3] += 0.0091324200913242;
          result[4] += 0.634703196347032;
          result[5] += 0.0136986301369863;
        } else {
          result[0] += 0.7396610169491525;
          result[1] += 0.015593220338983051;
          result[2] += 0.031864406779661014;
          result[3] += 0.07864406779661016;
          result[4] += 0.062372881355932205;
          result[5] += 0.07186440677966102;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09166666666666666;
          result[3] += 0.5916666666666667;
          result[4] += 0;
          result[5] += 0.31666666666666665;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7037037037037037;
          result[3] += 0.25925925925925924;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5595238095238095;
          result[3] += 0.2976190476190476;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.03296703296703297;
          result[1] += 0;
          result[2] += 0.7802197802197802;
          result[3] += 0.10989010989010989;
          result[4] += 0.02197802197802198;
          result[5] += 0.054945054945054944;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.009269988412514486;
          result[1] += 0;
          result[2] += 0.9443800695249132;
          result[3] += 0.03939745075318656;
          result[4] += 0.0011587485515643107;
          result[5] += 0.005793742757821554;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.7857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0.0038910505836575876;
          result[1] += 0.007782101167315175;
          result[2] += 0;
          result[3] += 0.01556420233463035;
          result[4] += 0.9416342412451362;
          result[5] += 0.0311284046692607;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00922266139657444;
          result[3] += 0.030303030303030304;
          result[4] += 0.043478260869565216;
          result[5] += 0.9169960474308301;
        } else {
          result[0] += 0.09034907597535935;
          result[1] += 0.012320328542094456;
          result[2] += 0.024640657084188913;
          result[3] += 0.3408624229979466;
          result[4] += 0.1273100616016427;
          result[5] += 0.40451745379876797;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9911504424778761;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008849557522123894;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.43333333333333335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7769953051643192;
          result[1] += 0.06416275430359937;
          result[2] += 0.003912363067292645;
          result[3] += 0.025039123630672927;
          result[4] += 0.1189358372456964;
          result[5] += 0.010954616588419406;
        } else {
          result[0] += 0.12806539509536785;
          result[1] += 0.005449591280653951;
          result[2] += 0.23160762942779292;
          result[3] += 0.2670299727520436;
          result[4] += 0.08719346049046321;
          result[5] += 0.28065395095367845;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.1111111111111111;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.026845637583892617;
          result[1] += 0.020134228187919462;
          result[2] += 0.20134228187919462;
          result[3] += 0.5167785234899329;
          result[4] += 0.026845637583892617;
          result[5] += 0.2080536912751678;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.7083333333333334;
        } else {
          result[0] += 0.1377245508982036;
          result[1] += 0.04790419161676647;
          result[2] += 0.6946107784431138;
          result[3] += 0.059880239520958084;
          result[4] += 0;
          result[5] += 0.059880239520958084;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3888888888888889;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8176100628930818;
          result[3] += 0.18238993710691823;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8873239436619719;
          result[3] += 0.09154929577464789;
          result[4] += 0;
          result[5] += 0.02112676056338028;
        } else {
          result[0] += 0.005797101449275362;
          result[1] += 0;
          result[2] += 0.9884057971014493;
          result[3] += 0.005797101449275362;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.003703703703703704;
          result[1] += 0.011111111111111112;
          result[2] += 0;
          result[3] += 0.003703703703703704;
          result[4] += 0.9481481481481482;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03398692810457516;
          result[4] += 0.03137254901960784;
          result[5] += 0.934640522875817;
        } else {
          result[0] += 0.1267056530214425;
          result[1] += 0.003898635477582846;
          result[2] += 0.003898635477582846;
          result[3] += 0.3001949317738791;
          result[4] += 0.06627680311890838;
          result[5] += 0.49902534113060426;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.37254901960784315;
          result[2] += 0;
          result[3] += 0.0392156862745098;
          result[4] += 0.5490196078431373;
          result[5] += 0.0392156862745098;
        } else {
          result[0] += 0.002288329519450801;
          result[1] += 0.9977116704805492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.29009433962264153;
          result[1] += 0.02358490566037736;
          result[2] += 0.05188679245283019;
          result[3] += 0.2617924528301887;
          result[4] += 0.1721698113207547;
          result[5] += 0.20047169811320756;
        } else {
          result[0] += 0.7526636225266362;
          result[1] += 0.04033485540334855;
          result[2] += 0.04642313546423135;
          result[3] += 0.0395738203957382;
          result[4] += 0.08599695585996955;
          result[5] += 0.0350076103500761;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03448275862068966;
          result[3] += 0.9310344827586208;
          result[4] += 0;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.125;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46;
          result[3] += 0.36;
          result[4] += 0;
          result[5] += 0.18;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012847965738758032;
          result[1] += 0;
          result[2] += 0.9100642398286939;
          result[3] += 0.0663811563169165;
          result[4] += 0;
          result[5] += 0.010706638115631693;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          result[0] += 0.02531645569620253;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012658227848101266;
          result[4] += 0.9451476793248945;
          result[5] += 0.016877637130801686;
        } else {
          result[0] += 0;
          result[1] += 0.43478260869565216;
          result[2] += 0;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.391304347826087;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0.016574585635359115;
          result[1] += 0;
          result[2] += 0.0033149171270718232;
          result[3] += 0.055248618784530384;
          result[4] += 0.07845303867403315;
          result[5] += 0.8464088397790055;
        } else {
          result[0] += 0.07823960880195599;
          result[1] += 0.012224938875305624;
          result[2] += 0.03667481662591687;
          result[3] += 0.42053789731051344;
          result[4] += 0.05378973105134474;
          result[5] += 0.39853300733496333;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.3076923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6923076923076923;
          result[5] += 0;
        } else {
          result[0] += 0.0072992700729927005;
          result[1] += 0.9829683698296837;
          result[2] += 0;
          result[3] += 0.004866180048661801;
          result[4] += 0.004866180048661801;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7560087399854332;
          result[1] += 0.03714493809176984;
          result[2] += 0.008011653313911142;
          result[3] += 0.02767662053896576;
          result[4] += 0.13037144938091766;
          result[5] += 0.040786598689002175;
        } else {
          result[0] += 0.15048543689320387;
          result[1] += 0.04854368932038835;
          result[2] += 0.25;
          result[3] += 0.28640776699029125;
          result[4] += 0.08495145631067962;
          result[5] += 0.1796116504854369;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666667;
          result[2] += 0.16666666666666669;
          result[3] += 0;
          result[4] += 0.16666666666666669;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3508771929824561;
          result[3] += 0.6140350877192983;
          result[4] += 0;
          result[5] += 0.03508771929824561;
        } else {
          result[0] += 0;
          result[1] += 0.017857142857142856;
          result[2] += 0.6607142857142857;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.25;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02109704641350211;
          result[1] += 0;
          result[2] += 0.8143459915611815;
          result[3] += 0.12658227848101267;
          result[4] += 0;
          result[5] += 0.0379746835443038;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0015503875968992248;
          result[1] += 0;
          result[2] += 0.9674418604651163;
          result[3] += 0.031007751937984496;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0.007722007722007722;
          result[1] += 0.03088803088803089;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.861003861003861;
          result[5] += 0.10038610038610038;
        } else {
          result[0] += 0.5737704918032787;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08196721311475409;
          result[4] += 0.1885245901639344;
          result[5] += 0.1557377049180328;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.004750593824228029;
          result[1] += 0.0011876484560570072;
          result[2] += 0;
          result[3] += 0.052256532066508314;
          result[4] += 0.09026128266033254;
          result[5] += 0.8515439429928741;
        } else {
          result[0] += 0.0060790273556231;
          result[1] += 0.015197568389057751;
          result[2] += 0.0060790273556231;
          result[3] += 0.46504559270516715;
          result[4] += 0.0182370820668693;
          result[5] += 0.48936170212765956;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.004357298474945534;
          result[1] += 0.9803921568627451;
          result[2] += 0.002178649237472767;
          result[3] += 0.002178649237472767;
          result[4] += 0.010893246187363835;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7732035928143713;
          result[1] += 0.05089820359281438;
          result[2] += 0.0014970059880239524;
          result[3] += 0.02170658682634731;
          result[4] += 0.13997005988023956;
          result[5] += 0.012724550898203594;
        } else {
          result[0] += 0.11011904761904762;
          result[1] += 0.005952380952380952;
          result[2] += 0.34523809523809523;
          result[3] += 0.2976190476190476;
          result[4] += 0.047619047619047616;
          result[5] += 0.19345238095238096;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6444444444444445;
          result[4] += 0.1111111111111111;
          result[5] += 0.24444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          result[0] += 0.33333333333333337;
          result[1] += 0;
          result[2] += 0.5000000000000001;
          result[3] += 0;
          result[4] += 0.16666666666666669;
          result[5] += 0;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0.10638297872340426;
          result[1] += 0.06382978723404255;
          result[2] += 0.3617021276595745;
          result[3] += 0.2978723404255319;
          result[4] += 0;
          result[5] += 0.1702127659574468;
        } else {
          result[0] += 0.004464285714285715;
          result[1] += 0;
          result[2] += 0.7946428571428572;
          result[3] += 0.17410714285714288;
          result[4] += 0;
          result[5] += 0.026785714285714288;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
          result[0] += 0.009569377990430622;
          result[1] += 0;
          result[2] += 0.8995215311004785;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012259194395796848;
          result[1] += 0;
          result[2] += 0.9702276707530648;
          result[3] += 0.017513134851138354;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.011560693641618497;
          result[1] += 0.011560693641618497;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9653179190751445;
          result[5] += 0.011560693641618497;
        } else {
          result[0] += 0.42391304347826086;
          result[1] += 0.021739130434782608;
          result[2] += 0.03260869565217391;
          result[3] += 0;
          result[4] += 0.33695652173913043;
          result[5] += 0.18478260869565216;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021212121212121213;
          result[4] += 0.02727272727272727;
          result[5] += 0.9515151515151515;
        } else {
          result[0] += 0;
          result[1] += 0.08499095840867993;
          result[2] += 0.0216998191681736;
          result[3] += 0.3309222423146474;
          result[4] += 0.09584086799276673;
          result[5] += 0.4665461121157324;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.006564551422319475;
          result[1] += 0.962800875273523;
          result[2] += 0;
          result[3] += 0.02188183807439825;
          result[4] += 0.0087527352297593;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          result[0] += 0.17391304347826086;
          result[1] += 0.03804347826086957;
          result[2] += 0.024456521739130436;
          result[3] += 0.21195652173913043;
          result[4] += 0.26358695652173914;
          result[5] += 0.28804347826086957;
        } else {
          result[0] += 0.7252897068847989;
          result[1] += 0.04021813224267212;
          result[2] += 0.06134969325153374;
          result[3] += 0.05521472392638037;
          result[4] += 0.08725289706884799;
          result[5] += 0.03067484662576687;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17857142857142858;
          result[3] += 0.6071428571428571;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08823529411764706;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.8529411764705882;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18518518518518517;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.5925925925925926;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6521739130434783;
          result[3] += 0.13043478260869565;
          result[4] += 0;
          result[5] += 0.21739130434782608;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7299270072992701;
          result[3] += 0.21897810218978103;
          result[4] += 0;
          result[5] += 0.051094890510948905;
        } else {
          result[0] += 0.010256410256410258;
          result[1] += 0;
          result[2] += 0.9487179487179488;
          result[3] += 0.03846153846153847;
          result[4] += 0;
          result[5] += 0.0025641025641025645;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0033003300330033004;
          result[2] += 0;
          result[3] += 0.013201320132013201;
          result[4] += 0.8778877887788779;
          result[5] += 0.10561056105610561;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030959752321981424;
          result[4] += 0.02631578947368421;
          result[5] += 0.9427244582043344;
        } else {
          result[0] += 0.10093457943925234;
          result[1] += 0;
          result[2] += 0.026168224299065422;
          result[3] += 0.35700934579439253;
          result[4] += 0.11962616822429907;
          result[5] += 0.39626168224299063;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.25806451612903225;
          result[2] += 0;
          result[3] += 0.08064516129032258;
          result[4] += 0.5806451612903226;
          result[5] += 0.08064516129032258;
        } else {
          result[0] += 0;
          result[1] += 0.9863325740318907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00683371298405467;
          result[5] += 0.00683371298405467;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8114689709347996;
          result[1] += 0.05027494108405342;
          result[2] += 0.003142183817753339;
          result[3] += 0.028279654359780047;
          result[4] += 0.08641005498821681;
          result[5] += 0.0204241948153967;
        } else {
          result[0] += 0.146484375;
          result[1] += 0.015625;
          result[2] += 0.2421875;
          result[3] += 0.26171875;
          result[4] += 0.04296875;
          result[5] += 0.291015625;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.057692307692307696;
          result[3] += 0.09615384615384616;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.04651162790697675;
          result[2] += 0.23255813953488375;
          result[3] += 0.6744186046511629;
          result[4] += 0;
          result[5] += 0.04651162790697675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.030837004405286344;
          result[1] += 0.013215859030837005;
          result[2] += 0.7136563876651982;
          result[3] += 0.15859030837004406;
          result[4] += 0.039647577092511016;
          result[5] += 0.04405286343612335;
        } else {
          result[0] += 0.001443001443001443;
          result[1] += 0;
          result[2] += 0.9754689754689755;
          result[3] += 0.020202020202020204;
          result[4] += 0;
          result[5] += 0.002886002886002886;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        } else {
          result[0] += 0.00819672131147541;
          result[1] += 0.004098360655737705;
          result[2] += 0;
          result[3] += 0.004098360655737705;
          result[4] += 0.9467213114754098;
          result[5] += 0.036885245901639344;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.003472222222222222;
          result[1] += 0.006944444444444444;
          result[2] += 0.016203703703703703;
          result[3] += 0.05439814814814815;
          result[4] += 0.06481481481481481;
          result[5] += 0.8541666666666666;
        } else {
          result[0] += 0.16375198728139906;
          result[1] += 0.006359300476947536;
          result[2] += 0.04133545310015898;
          result[3] += 0.32591414944356123;
          result[4] += 0.12559618441971382;
          result[5] += 0.3370429252782194;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9882903981264637;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0117096018735363;
          result[5] += 0;
        } else {
          result[0] += 0.08148148148148149;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.562962962962963;
          result[5] += 0.022222222222222223;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8670212765957447;
          result[1] += 0.00975177304964539;
          result[2] += 0.0017730496453900709;
          result[3] += 0.028368794326241134;
          result[4] += 0.04875886524822695;
          result[5] += 0.044326241134751775;
        } else {
          result[0] += 0.31958762886597936;
          result[1] += 0.07216494845360824;
          result[2] += 0.25773195876288657;
          result[3] += 0.15979381443298968;
          result[4] += 0.05154639175257732;
          result[5] += 0.13917525773195877;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16379310344827586;
          result[3] += 0.29310344827586204;
          result[4] += 0;
          result[5] += 0.5431034482758621;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.013986013986013986;
          result[1] += 0.04895104895104895;
          result[2] += 0.6153846153846154;
          result[3] += 0.2727272727272727;
          result[4] += 0.006993006993006993;
          result[5] += 0.04195804195804196;
        } else {
          result[0] += 0.8484848484848485;
          result[1] += 0;
          result[2] += 0.12121212121212122;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.03571428571428571;
          result[2] += 0.42857142857142855;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0.0034802784222737818;
          result[1] += 0;
          result[2] += 0.9211136890951276;
          result[3] += 0.06844547563805105;
          result[4] += 0;
          result[5] += 0.0069605568445475635;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.006493506493506495;
          result[1] += 0.06493506493506494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8701298701298702;
          result[5] += 0.05844155844155845;
        } else {
          result[0] += 0.7428571428571429;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12380952380952381;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.002127659574468085;
          result[1] += 0.018085106382978722;
          result[2] += 0.002127659574468085;
          result[3] += 0.0574468085106383;
          result[4] += 0.09148936170212765;
          result[5] += 0.8287234042553191;
        } else {
          result[0] += 0.06934306569343066;
          result[1] += 0;
          result[2] += 0.01824817518248175;
          result[3] += 0.5802919708029197;
          result[4] += 0;
          result[5] += 0.33211678832116787;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.04597701149425287;
          result[1] += 0.2413793103448276;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.5402298850574713;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0;
          result[1] += 0.9956140350877193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0043859649122807015;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0.17791411042944785;
          result[1] += 0.012269938650306749;
          result[2] += 0.024539877300613498;
          result[3] += 0.27607361963190186;
          result[4] += 0.049079754601226995;
          result[5] += 0.4601226993865031;
        } else {
          result[0] += 0.8113964686998395;
          result[1] += 0.027287319422150885;
          result[2] += 0.04253611556982344;
          result[3] += 0.028892455858747994;
          result[4] += 0.06420545746388442;
          result[5] += 0.025682182985553772;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.47368421052631576;
          result[2] += 0.15789473684210525;
          result[3] += 0.15789473684210525;
          result[4] += 0.21052631578947367;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05172413793103448;
          result[4] += 0.05172413793103448;
          result[5] += 0.896551724137931;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06382978723404255;
          result[3] += 0.7553191489361702;
          result[4] += 0;
          result[5] += 0.18085106382978725;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.5106382978723404;
          result[3] += 0.2127659574468085;
          result[4] += 0.031914893617021274;
          result[5] += 0.22340425531914893;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118.5) ) ) {
          result[0] += 0.02272727272727273;
          result[1] += 0;
          result[2] += 0.787878787878788;
          result[3] += 0.15909090909090912;
          result[4] += 0;
          result[5] += 0.030303030303030307;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8787878787878788;
          result[3] += 0.12121212121212122;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003125;
          result[1] += 0;
          result[2] += 0.96875;
          result[3] += 0.0265625;
          result[4] += 0;
          result[5] += 0.0015625;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.02252252252252252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9684684684684685;
          result[5] += 0.009009009009009009;
        } else {
          result[0] += 0.3188405797101449;
          result[1] += 0;
          result[2] += 0.028985507246376812;
          result[3] += 0;
          result[4] += 0.2753623188405797;
          result[5] += 0.37681159420289856;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.013268998793727383;
          result[2] += 0;
          result[3] += 0.045838359469240045;
          result[4] += 0.05186972255729795;
          result[5] += 0.8890229191797346;
        } else {
          result[0] += 0.007352941176470589;
          result[1] += 0;
          result[2] += 0.007352941176470589;
          result[3] += 0.5698529411764707;
          result[4] += 0.011029411764705885;
          result[5] += 0.4044117647058824;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.47540983606557374;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5245901639344263;
          result[5] += 0;
        } else {
          result[0] += 0.004357298474945534;
          result[1] += 0.9847494553376906;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010893246187363835;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7967914438502673;
          result[1] += 0.01833460656990069;
          result[2] += 0.006875477463712758;
          result[3] += 0.03590527119938885;
          result[4] += 0.11077158135981666;
          result[5] += 0.03132161955691368;
        } else {
          result[0] += 0.1648106904231626;
          result[1] += 0.0267260579064588;
          result[2] += 0.2115812917594655;
          result[3] += 0.25167037861915376;
          result[4] += 0.0579064587973274;
          result[5] += 0.28730512249443213;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.09333333333333334;
          result[3] += 0.21333333333333335;
          result[4] += 0.09333333333333334;
          result[5] += 0.56;
        } else {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.359375;
          result[3] += 0.53125;
          result[4] += 0;
          result[5] += 0.09375;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
          result[0] += 0.13333333333333333;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0.13333333333333333;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.07317073170731708;
          result[1] += 0;
          result[2] += 0.853658536585366;
          result[3] += 0.07317073170731708;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.012422360248447204;
          result[1] += 0;
          result[2] += 0.7329192546583851;
          result[3] += 0.18633540372670807;
          result[4] += 0;
          result[5] += 0.06832298136645963;
        } else {
          result[0] += 0.004172461752433937;
          result[1] += 0;
          result[2] += 0.956884561891516;
          result[3] += 0.03755215577190543;
          result[4] += 0;
          result[5] += 0.0013908205841446455;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0049261083743842365;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.916256157635468;
          result[5] += 0.07881773399014778;
        } else {
          result[0] += 0.4;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0024600246002460025;
          result[2] += 0.0024600246002460025;
          result[3] += 0.038130381303813035;
          result[4] += 0.07872078720787208;
          result[5] += 0.8782287822878229;
        } else {
          result[0] += 0;
          result[1] += 0.13565891472868216;
          result[2] += 0.03488372093023256;
          result[3] += 0.43023255813953487;
          result[4] += 0.031007751937984496;
          result[5] += 0.3682170542635659;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)50) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8636363636363636;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.002212389380530974;
          result[1] += 0.9756637168141594;
          result[2] += 0;
          result[3] += 0.015486725663716816;
          result[4] += 0.006637168141592921;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7026657552973342;
          result[1] += 0.034859876965140126;
          result[2] += 0.002734107997265892;
          result[3] += 0.045112781954887216;
          result[4] += 0.15105946684894053;
          result[5] += 0.063568010936432;
        } else {
          result[0] += 0.15768463073852296;
          result[1] += 0.03792415169660679;
          result[2] += 0.16167664670658682;
          result[3] += 0.2834331337325349;
          result[4] += 0.10379241516966067;
          result[5] += 0.2554890219560878;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1044776119402985;
          result[3] += 0.7014925373134329;
          result[4] += 0;
          result[5] += 0.19402985074626866;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.8043478260869565;
          result[3] += 0.15217391304347827;
          result[4] += 0;
          result[5] += 0.021739130434782608;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8888888888888888;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04778156996587031;
          result[1] += 0;
          result[2] += 0.7849829351535836;
          result[3] += 0.1296928327645051;
          result[4] += 0;
          result[5] += 0.03754266211604096;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9765258215962441;
          result[3] += 0.023474178403755867;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.9565217391304348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0;
        } else {
          result[0] += 0.09230769230769231;
          result[1] += 0.033846153846153845;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7538461538461538;
          result[5] += 0.12;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.007927519818799546;
          result[1] += 0.0011325028312570782;
          result[2] += 0.0011325028312570782;
          result[3] += 0.03850509626274066;
          result[4] += 0.07701019252548132;
          result[5] += 0.8742921857304643;
        } else {
          result[0] += 0.014778325123152709;
          result[1] += 0.0049261083743842365;
          result[2] += 0.024630541871921183;
          result[3] += 0.5270935960591133;
          result[4] += 0.019704433497536946;
          result[5] += 0.4088669950738916;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0.06451612903225806;
          result[1] += 0.1827956989247312;
          result[2] += 0;
          result[3] += 0.021505376344086023;
          result[4] += 0.6881720430107527;
          result[5] += 0.043010752688172046;
        } else {
          result[0] += 0.006578947368421052;
          result[1] += 0.9758771929824561;
          result[2] += 0.0043859649122807015;
          result[3] += 0;
          result[4] += 0.013157894736842105;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8237704918032788;
          result[1] += 0.03934426229508198;
          result[2] += 0.0024590163934426236;
          result[3] += 0.0319672131147541;
          result[4] += 0.0737704918032787;
          result[5] += 0.02868852459016394;
        } else {
          result[0] += 0.24444444444444444;
          result[1] += 0.012698412698412698;
          result[2] += 0.09206349206349207;
          result[3] += 0.29523809523809524;
          result[4] += 0.06349206349206349;
          result[5] += 0.2920634920634921;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16216216216216217;
          result[3] += 0.16216216216216217;
          result[4] += 0.17567567567567569;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09574468085106383;
          result[3] += 0.7659574468085106;
          result[4] += 0.02127659574468085;
          result[5] += 0.11702127659574468;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
          result[0] += 0.11688311688311688;
          result[1] += 0.09090909090909091;
          result[2] += 0.22077922077922077;
          result[3] += 0.16883116883116883;
          result[4] += 0.15584415584415584;
          result[5] += 0.24675324675324675;
        } else {
          result[0] += 0.24193548387096775;
          result[1] += 0;
          result[2] += 0.7096774193548387;
          result[3] += 0.016129032258064516;
          result[4] += 0;
          result[5] += 0.03225806451612903;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3409090909090909;
          result[3] += 0.3181818181818182;
          result[4] += 0;
          result[5] += 0.3409090909090909;
        } else {
          result[0] += 0.007194244604316547;
          result[1] += 0;
          result[2] += 0.7949640287769785;
          result[3] += 0.18345323741007194;
          result[4] += 0;
          result[5] += 0.014388489208633094;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.28125;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.03125;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.00463678516228748;
          result[1] += 0;
          result[2] += 0.9536321483771252;
          result[3] += 0.04173106646058733;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.02054794520547945;
          result[1] += 0.0684931506849315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8801369863013698;
          result[5] += 0.030821917808219176;
        } else {
          result[0] += 0.7068965517241379;
          result[1] += 0.005747126436781609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.1206896551724138;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011682242990654205;
          result[2] += 0;
          result[3] += 0.0689252336448598;
          result[4] += 0.0689252336448598;
          result[5] += 0.860981308411215;
        } else {
          result[0] += 0.0499001996007984;
          result[1] += 0.007984031936127744;
          result[2] += 0.03792415169660679;
          result[3] += 0.4431137724550898;
          result[4] += 0.11177644710578842;
          result[5] += 0.34930139720558884;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.1951219512195122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8048780487804879;
          result[5] += 0;
        } else {
          result[0] += 0.0021141649048625794;
          result[1] += 0.9767441860465116;
          result[2] += 0.004228329809725159;
          result[3] += 0;
          result[4] += 0.016913319238900635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8252853380158033;
          result[1] += 0.021071115013169446;
          result[2] += 0.009657594381035996;
          result[3] += 0.030728709394205442;
          result[4] += 0.07462686567164178;
          result[5] += 0.038630377524143986;
        } else {
          result[0] += 0.21455938697318008;
          result[1] += 0.05747126436781609;
          result[2] += 0.21455938697318008;
          result[3] += 0.1685823754789272;
          result[4] += 0.0842911877394636;
          result[5] += 0.26053639846743293;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)107.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1276595744680851;
          result[3] += 0.7021276595744681;
          result[4] += 0;
          result[5] += 0.1702127659574468;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.021897810218978103;
          result[1] += 0;
          result[2] += 0.7299270072992701;
          result[3] += 0.2116788321167883;
          result[4] += 0.0036496350364963502;
          result[5] += 0.032846715328467155;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8429752066115702;
          result[3] += 0.14049586776859505;
          result[4] += 0;
          result[5] += 0.01652892561983471;
        } else {
          result[0] += 0.009009009009009009;
          result[1] += 0;
          result[2] += 0.990990990990991;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.986;
          result[3] += 0.012;
          result[4] += 0;
          result[5] += 0.002;
        } else {
          result[0] += 0.2631578947368421;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04761904761904762;
          result[4] += 0.870748299319728;
          result[5] += 0.0816326530612245;
        } else {
          result[0] += 0.0014245014245014246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.03561253561253561;
          result[5] += 0.9245014245014245;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
          result[0] += 0.29924242424242425;
          result[1] += 0.10606060606060606;
          result[2] += 0;
          result[3] += 0.007575757575757576;
          result[4] += 0.5492424242424242;
          result[5] += 0.03787878787878788;
        } else {
          result[0] += 0.015904572564612324;
          result[1] += 0.005964214711729622;
          result[2] += 0.03578528827037773;
          result[3] += 0.27634194831013914;
          result[4] += 0.09145129224652088;
          result[5] += 0.5745526838966203;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.55;
          result[5] += 0.05;
        } else {
          result[0] += 0.009501187648456057;
          result[1] += 0.9881235154394299;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023752969121140144;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.12121212121212122;
          result[1] += 0.18181818181818182;
          result[2] += 0.010101010101010102;
          result[3] += 0.04040404040404041;
          result[4] += 0.6161616161616161;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.7796610169491526;
          result[1] += 0.026964560862865947;
          result[2] += 0.03697996918335902;
          result[3] += 0.053158705701078585;
          result[4] += 0.06394453004622497;
          result[5] += 0.039291217257318954;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015873015873015872;
          result[3] += 0.047619047619047616;
          result[4] += 0.20634920634920634;
          result[5] += 0.7301587301587301;
        } else {
          result[0] += 0.12244897959183675;
          result[1] += 0.163265306122449;
          result[2] += 0.28571428571428575;
          result[3] += 0.163265306122449;
          result[4] += 0.0816326530612245;
          result[5] += 0.18367346938775514;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10497237569060774;
          result[3] += 0.5801104972375691;
          result[4] += 0.011049723756906079;
          result[5] += 0.3038674033149172;
        } else {
          result[0] += 0.03773584905660378;
          result[1] += 0.01886792452830189;
          result[2] += 0.6603773584905661;
          result[3] += 0.13207547169811323;
          result[4] += 0;
          result[5] += 0.15094339622641512;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.6190476190476191;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0.8823529411764706;
          result[1] += 0;
          result[2] += 0.09803921568627451;
          result[3] += 0.0196078431372549;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          result[0] += 0.037383177570093455;
          result[1] += 0;
          result[2] += 0.7975077881619937;
          result[3] += 0.14953271028037382;
          result[4] += 0;
          result[5] += 0.01557632398753894;
        } else {
          result[0] += 0.0032679738562091504;
          result[1] += 0;
          result[2] += 0.9591503267973857;
          result[3] += 0.03758169934640523;
          result[4] += 0;
          result[5] += 0;
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
