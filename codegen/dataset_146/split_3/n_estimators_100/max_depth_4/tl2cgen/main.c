
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.970873786407767;
          result[5] += 0.02912621359223301;
        } else {
          result[0] += 0.1;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52.5) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23333333333333334;
          result[4] += 0.7;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.019753086419753086;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02962962962962963;
          result[4] += 0.04567901234567901;
          result[5] += 0.9049382716049382;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0.022222222222222223;
          result[2] += 0.022222222222222223;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0.17777777777777778;
        } else {
          result[0] += 0.0026525198938992045;
          result[1] += 0.026525198938992047;
          result[2] += 0.045092838196286476;
          result[3] += 0.4694960212201592;
          result[4] += 0.01591511936339523;
          result[5] += 0.44031830238726793;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.1087866108786611;
          result[1] += 0.2594142259414226;
          result[2] += 0;
          result[3] += 0.0041841004184100415;
          result[4] += 0.5941422594142259;
          result[5] += 0.03347280334728033;
        } else {
          result[0] += 0.7438249823570925;
          result[1] += 0.009880028228652082;
          result[2] += 0.03669724770642202;
          result[3] += 0.08186309103740297;
          result[4] += 0.053634438955539876;
          result[5] += 0.07410021171489062;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0.9927536231884058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007246376811594203;
          result[5] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.05714285714285714;
          result[2] += 0.08571428571428572;
          result[3] += 0.21428571428571427;
          result[4] += 0.08571428571428572;
          result[5] += 0.5571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0.01990049751243781;
          result[2] += 0.42786069651741293;
          result[3] += 0.4427860696517413;
          result[4] += 0;
          result[5] += 0.10945273631840796;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.058823529411764705;
          result[2] += 0.49019607843137253;
          result[3] += 0;
          result[4] += 0.0392156862745098;
          result[5] += 0.0784313725490196;
        } else {
          result[0] += 0.007543103448275862;
          result[1] += 0;
          result[2] += 0.8997844827586207;
          result[3] += 0.07758620689655173;
          result[4] += 0;
          result[5] += 0.015086206896551725;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0045045045045045045;
          result[1] += 0.036036036036036036;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.954954954954955;
          result[5] += 0.0045045045045045045;
        } else {
          result[0] += 0.39814814814814814;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23148148148148148;
          result[5] += 0.37037037037037035;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013192612137203166;
          result[2] += 0;
          result[3] += 0.036939313984168866;
          result[4] += 0.0395778364116095;
          result[5] += 0.9221635883905013;
        } else {
          result[0] += 0;
          result[1] += 0.018867924528301886;
          result[2] += 0.005390835579514825;
          result[3] += 0.3935309973045822;
          result[4] += 0.05390835579514825;
          result[5] += 0.5283018867924528;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.9750566893424036;
          result[2] += 0;
          result[3] += 0.0045351473922902496;
          result[4] += 0.02040816326530612;
          result[5] += 0;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.728882833787466;
          result[1] += 0.06267029972752043;
          result[2] += 0.007493188010899182;
          result[3] += 0.021798365122615803;
          result[4] += 0.14373297002724797;
          result[5] += 0.035422343324250684;
        } else {
          result[0] += 0.170316301703163;
          result[1] += 0.0024330900243309003;
          result[2] += 0.17518248175182483;
          result[3] += 0.29683698296836986;
          result[4] += 0.09975669099756691;
          result[5] += 0.25547445255474455;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.7666666666666667;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.09210526315789473;
          result[1] += 0;
          result[2] += 0.868421052631579;
          result[3] += 0.02631578947368421;
          result[4] += 0;
          result[5] += 0.013157894736842105;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.9090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.009852216748768473;
          result[1] += 0;
          result[2] += 0.7635467980295566;
          result[3] += 0.21674876847290642;
          result[4] += 0;
          result[5] += 0.009852216748768473;
        } else {
          result[0] += 0.00463678516228748;
          result[1] += 0;
          result[2] += 0.9598145285935085;
          result[3] += 0.02936630602782071;
          result[4] += 0;
          result[5] += 0.0061823802163833074;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9140625;
          result[5] += 0.0234375;
        } else {
          result[0] += 0.08888888888888889;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0.17777777777777778;
          result[4] += 0.24444444444444444;
          result[5] += 0.37777777777777777;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.04305705059203445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04736275565123789;
          result[4] += 0.06781485468245425;
          result[5] += 0.8417653390742734;
        } else {
          result[0] += 0.04659498207885305;
          result[1] += 0;
          result[2] += 0.0035842293906810036;
          result[3] += 0.5591397849462365;
          result[4] += 0.02867383512544803;
          result[5] += 0.36200716845878134;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9931192660550459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006880733944954129;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7683982683982684;
          result[1] += 0.031746031746031744;
          result[2] += 0.006493506493506494;
          result[3] += 0.027417027417027416;
          result[4] += 0.10461760461760462;
          result[5] += 0.06132756132756133;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.05630630630630631;
          result[2] += 0.22972972972972974;
          result[3] += 0.3130630630630631;
          result[4] += 0.04954954954954955;
          result[5] += 0.18468468468468469;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11627906976744186;
          result[3] += 0.6511627906976745;
          result[4] += 0;
          result[5] += 0.23255813953488372;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22580645161290322;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0.7419354838709677;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8478260869565218;
          result[3] += 0.08695652173913045;
          result[4] += 0;
          result[5] += 0.06521739130434784;
        } else {
          result[0] += 0.25;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.23333333333333334;
          result[4] += 0;
          result[5] += 0.36666666666666664;
        } else {
          result[0] += 0;
          result[1] += 0.030303030303030304;
          result[2] += 0.7651515151515151;
          result[3] += 0.1893939393939394;
          result[4] += 0;
          result[5] += 0.015151515151515152;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008207934336525308;
          result[1] += 0;
          result[2] += 0.9288645690834473;
          result[3] += 0.06155950752393981;
          result[4] += 0;
          result[5] += 0.0013679890560875513;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.015957446808510637;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9787234042553191;
          result[5] += 0.005319148936170213;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6274509803921569;
          result[5] += 0.37254901960784315;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.96875;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.42857142857142855;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001088139281828074;
          result[2] += 0;
          result[3] += 0.058759521218716;
          result[4] += 0.04026115342763874;
          result[5] += 0.8998911860718172;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.19642857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017857142857142856;
          result[4] += 0.625;
          result[5] += 0.16071428571428573;
        } else {
          result[0] += 0.031073446327683617;
          result[1] += 0.005649717514124294;
          result[2] += 0.05084745762711865;
          result[3] += 0.4378531073446328;
          result[4] += 0.01694915254237288;
          result[5] += 0.4576271186440678;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 0.9680170575692963;
          result[2] += 0;
          result[3] += 0.0021321961620469083;
          result[4] += 0.0255863539445629;
          result[5] += 0.0042643923240938165;
        } else {
          result[0] += 0;
          result[1] += 0.2909090909090909;
          result[2] += 0;
          result[3] += 0.01818181818181818;
          result[4] += 0.6363636363636364;
          result[5] += 0.05454545454545454;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8567685589519651;
          result[1] += 0.031441048034934506;
          result[2] += 0.006986899563318778;
          result[3] += 0.0165938864628821;
          result[4] += 0.06986899563318778;
          result[5] += 0.018340611353711792;
        } else {
          result[0] += 0.2829581993569132;
          result[1] += 0.01929260450160772;
          result[2] += 0.15434083601286175;
          result[3] += 0.1832797427652733;
          result[4] += 0.08038585209003216;
          result[5] += 0.2797427652733119;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.006493506493506494;
          result[2] += 0.18181818181818182;
          result[3] += 0.5909090909090909;
          result[4] += 0.012987012987012988;
          result[5] += 0.2077922077922078;
        } else {
          result[0] += 0;
          result[1] += 0.07462686567164178;
          result[2] += 0.4626865671641791;
          result[3] += 0.08955223880597014;
          result[4] += 0.13432835820895522;
          result[5] += 0.23880597014925373;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          result[0] += 0.21495327102803738;
          result[1] += 0.018691588785046728;
          result[2] += 0.4953271028037383;
          result[3] += 0.1588785046728972;
          result[4] += 0.037383177570093455;
          result[5] += 0.07476635514018691;
        } else {
          result[0] += 0.005605381165919282;
          result[1] += 0.0011210762331838565;
          result[2] += 0.9035874439461884;
          result[3] += 0.08071748878923767;
          result[4] += 0;
          result[5] += 0.008968609865470852;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
          result[0] += 0.004;
          result[1] += 0.008;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96;
          result[5] += 0.028;
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
          result[2] += 0;
          result[3] += 0.0686936936936937;
          result[4] += 0.04504504504504504;
          result[5] += 0.8862612612612613;
        } else {
          result[0] += 0.1485148514851485;
          result[1] += 0.02574257425742574;
          result[2] += 0.007920792079207921;
          result[3] += 0.33861386138613864;
          result[4] += 0.08712871287128712;
          result[5] += 0.3920792079207921;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.011904761904761904;
          result[1] += 0.2857142857142857;
          result[2] += 0.011904761904761904;
          result[3] += 0.011904761904761904;
          result[4] += 0.6190476190476191;
          result[5] += 0.05952380952380952;
        } else {
          result[0] += 0;
          result[1] += 0.9763948497854077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023605150214592276;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8509212730318257;
          result[1] += 0.025963149078726967;
          result[2] += 0;
          result[3] += 0.03433835845896147;
          result[4] += 0.06365159128978225;
          result[5] += 0.02512562814070352;
        } else {
          result[0] += 0.22781065088757396;
          result[1] += 0.04437869822485207;
          result[2] += 0.23964497041420119;
          result[3] += 0.22189349112426035;
          result[4] += 0.09467455621301775;
          result[5] += 0.17159763313609466;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1951219512195122;
          result[3] += 0.7560975609756098;
          result[4] += 0;
          result[5] += 0.04878048780487805;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0.5652173913043478;
          result[4] += 0;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0.009615384615384616;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0.20192307692307693;
          result[4] += 0;
          result[5] += 0.019230769230769232;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.78125;
          result[3] += 0.171875;
          result[4] += 0;
          result[5] += 0.03125;
        } else {
          result[0] += 0.005931198102016607;
          result[1] += 0;
          result[2] += 0.9489916963226572;
          result[3] += 0.042704626334519574;
          result[4] += 0;
          result[5] += 0.002372479240806643;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9937106918238994;
          result[5] += 0.006289308176100629;
        } else {
          result[0] += 0.013888888888888888;
          result[1] += 0.013888888888888888;
          result[2] += 0.013888888888888888;
          result[3] += 0;
          result[4] += 0.7361111111111112;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05216426193118757;
          result[4] += 0.048834628190899;
          result[5] += 0.8801331853496115;
        } else {
          result[0] += 0.07493540051679587;
          result[1] += 0.06718346253229975;
          result[2] += 0.015503875968992248;
          result[3] += 0.4444444444444444;
          result[4] += 0.023255813953488372;
          result[5] += 0.37467700258397935;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0.0022624434389140274;
          result[1] += 0.9773755656108597;
          result[2] += 0;
          result[3] += 0.004524886877828055;
          result[4] += 0.01583710407239819;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7556200145032632;
          result[1] += 0.02610587382160986;
          result[2] += 0.0007251631617113851;
          result[3] += 0.03480783176214648;
          result[4] += 0.12907904278462654;
          result[5] += 0.05366207396664249;
        } else {
          result[0] += 0.14357682619647355;
          result[1] += 0.010075566750629723;
          result[2] += 0.27204030226700254;
          result[3] += 0.24937027707808565;
          result[4] += 0.06801007556675064;
          result[5] += 0.25692695214105793;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
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
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0.22580645161290322;
          result[2] += 0.0967741935483871;
          result[3] += 0.0967741935483871;
          result[4] += 0.0967741935483871;
          result[5] += 0.45161290322580644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.41975308641975306;
          result[3] += 0.5185185185185185;
          result[4] += 0;
          result[5] += 0.06172839506172839;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0.019801980198019802;
          result[2] += 0.6039603960396039;
          result[3] += 0.30198019801980197;
          result[4] += 0.0049504950495049506;
          result[5] += 0.06930693069306931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9464285714285714;
          result[3] += 0;
          result[4] += 0.05357142857142857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.007874015748031496;
          result[1] += 0;
          result[2] += 0.84251968503937;
          result[3] += 0.14960629921259844;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012477718360071301;
          result[1] += 0;
          result[2] += 0.9607843137254902;
          result[3] += 0.026737967914438502;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.004761904761904762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.45161290322580644;
          result[5] += 0.532258064516129;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.0282021151586369;
          result[1] += 0.025851938895417155;
          result[2] += 0;
          result[3] += 0.03055229142185664;
          result[4] += 0.04465334900117509;
          result[5] += 0.8707403055229143;
        } else {
          result[0] += 0;
          result[1] += 0.018796992481203006;
          result[2] += 0.011278195488721804;
          result[3] += 0.5601503759398496;
          result[4] += 0;
          result[5] += 0.40977443609022557;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.004555808656036446;
          result[1] += 0.958997722095672;
          result[2] += 0;
          result[3] += 0.01366742596810934;
          result[4] += 0.02050113895216401;
          result[5] += 0.002277904328018223;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7536636427076064;
          result[1] += 0.030006978367062107;
          result[2] += 0.0027913468248429866;
          result[3] += 0.023028611304954642;
          result[4] += 0.13398464759246337;
          result[5] += 0.056524773203070484;
        } else {
          result[0] += 0.16913319238900634;
          result[1] += 0.03382663847780127;
          result[2] += 0.26215644820295986;
          result[3] += 0.2854122621564482;
          result[4] += 0.052854122621564484;
          result[5] += 0.19661733615221988;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.25;
          result[4] += 0.078125;
          result[5] += 0.640625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5625;
          result[3] += 0.28125;
          result[4] += 0;
          result[5] += 0.15625;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.02564102564102564;
          result[2] += 0.6239316239316239;
          result[3] += 0.28205128205128205;
          result[4] += 0.008547008547008548;
          result[5] += 0.03418803418803419;
        } else {
          result[0] += 0.5526315789473685;
          result[1] += 0.05263157894736842;
          result[2] += 0.39473684210526316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6875;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0.045454545454545456;
          result[2] += 0.5454545454545454;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0.0013717421124828531;
          result[1] += 0;
          result[2] += 0.9478737997256516;
          result[3] += 0.04801097393689986;
          result[4] += 0;
          result[5] += 0.0027434842249657062;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9638009049773756;
          result[5] += 0.03167420814479638;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.2777777777777778;
          result[5] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0.03564727954971857;
          result[1] += 0.00375234521575985;
          result[2] += 0.0009380863039399625;
          result[3] += 0.06378986866791744;
          result[4] += 0.08161350844277673;
          result[5] += 0.8142589118198874;
        } else {
          result[0] += 0.024691358024691357;
          result[1] += 0.0205761316872428;
          result[2] += 0.00411522633744856;
          result[3] += 0.5967078189300411;
          result[4] += 0.02880658436213992;
          result[5] += 0.32510288065843623;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.016666666666666666;
          result[1] += 0.35833333333333334;
          result[2] += 0;
          result[3] += 0.016666666666666666;
          result[4] += 0.5833333333333334;
          result[5] += 0.025;
        } else {
          result[0] += 0;
          result[1] += 0.9827586206896551;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017241379310344827;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0.39575530586766544;
          result[1] += 0.05368289637952559;
          result[2] += 0.1198501872659176;
          result[3] += 0.1947565543071161;
          result[4] += 0.10237203495630462;
          result[5] += 0.13358302122347065;
        } else {
          result[0] += 0.8670588235294118;
          result[1] += 0.01647058823529412;
          result[2] += 0.03058823529411765;
          result[3] += 0.009411764705882352;
          result[4] += 0.07647058823529412;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.06;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0.04;
          result[5] += 0.86;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          result[0] += 0.1388888888888889;
          result[1] += 0.05555555555555555;
          result[2] += 0.19444444444444445;
          result[3] += 0.3055555555555556;
          result[4] += 0;
          result[5] += 0.3055555555555556;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.014705882352941176;
          result[2] += 0.47058823529411764;
          result[3] += 0.41911764705882354;
          result[4] += 0;
          result[5] += 0.09558823529411764;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0.03048780487804878;
          result[2] += 0.7439024390243902;
          result[3] += 0.10975609756097561;
          result[4] += 0;
          result[5] += 0.018292682926829267;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8521126760563381;
          result[3] += 0.11971830985915494;
          result[4] += 0;
          result[5] += 0.028169014084507046;
        } else {
          result[0] += 0.007233273056057866;
          result[1] += 0;
          result[2] += 0.9674502712477396;
          result[3] += 0.02531645569620253;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.010638297872340425;
          result[1] += 0.06028368794326241;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8617021276595744;
          result[5] += 0.0673758865248227;
        } else {
          result[0] += 0.6456692913385826;
          result[1] += 0.015748031496062992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1889763779527559;
          result[5] += 0.14960629921259844;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0316622691292876;
          result[4] += 0.03430079155672823;
          result[5] += 0.9340369393139841;
        } else {
          result[0] += 0.02072538860103627;
          result[1] += 0.018998272884283247;
          result[2] += 0.02936096718480138;
          result[3] += 0.37132987910189985;
          result[4] += 0.11744386873920552;
          result[5] += 0.4421416234887737;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9922279792746114;
          result[2] += 0;
          result[3] += 0.007772020725388601;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09574468085106384;
          result[1] += 0.3138297872340426;
          result[2] += 0.021276595744680854;
          result[3] += 0.026595744680851068;
          result[4] += 0.5000000000000001;
          result[5] += 0.04255319148936171;
        } else {
          result[0] += 0.7602591792656588;
          result[1] += 0.01079913606911447;
          result[2] += 0.0503959683225342;
          result[3] += 0.05327573794096472;
          result[4] += 0.040316774658027354;
          result[5] += 0.08495320374370051;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12162162162162163;
          result[3] += 0.7027027027027027;
          result[4] += 0;
          result[5] += 0.17567567567567569;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.2380952380952381;
          result[4] += 0;
          result[5] += 0.09523809523809525;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.2916666666666667;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.1875;
        } else {
          result[0] += 0.10526315789473684;
          result[1] += 0;
          result[2] += 0.8947368421052632;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7835820895522388;
          result[3] += 0.1791044776119403;
          result[4] += 0;
          result[5] += 0.03731343283582089;
        } else {
          result[0] += 0.005012531328320802;
          result[1] += 0;
          result[2] += 0.9385964912280702;
          result[3] += 0.04887218045112782;
          result[4] += 0;
          result[5] += 0.007518796992481203;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)47.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.8695652173913043;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011450381679389313;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9465648854961832;
          result[5] += 0.04198473282442748;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013157894736842105;
          result[2] += 0.0013157894736842105;
          result[3] += 0.038157894736842106;
          result[4] += 0.07631578947368421;
          result[5] += 0.8828947368421053;
        } else {
          result[0] += 0.15168539325842698;
          result[1] += 0.008426966292134831;
          result[2] += 0.056179775280898875;
          result[3] += 0.34269662921348315;
          result[4] += 0.10393258426966293;
          result[5] += 0.33707865168539325;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954648526077098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045351473922902496;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72) ) ) {
          result[0] += 0.17098445595854922;
          result[1] += 0.17616580310880828;
          result[2] += 0.06217616580310881;
          result[3] += 0.10362694300518134;
          result[4] += 0.45595854922279794;
          result[5] += 0.031088082901554404;
        } else {
          result[0] += 0.8045347928068803;
          result[1] += 0.00547302580140735;
          result[2] += 0.04691164972634871;
          result[3] += 0.053166536356528536;
          result[4] += 0.046129788897576234;
          result[5] += 0.0437842064112588;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
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
          result[2] += 0.0449438202247191;
          result[3] += 0.2808988764044944;
          result[4] += 0;
          result[5] += 0.6741573033707865;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0.10714285714285714;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.39285714285714285;
          result[4] += 0;
          result[5] += 0.21428571428571427;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)121) ) ) {
          result[0] += 0.057750759878419454;
          result[1] += 0.0060790273556231;
          result[2] += 0.6899696048632219;
          result[3] += 0.1884498480243161;
          result[4] += 0;
          result[5] += 0.057750759878419454;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0015174506828528073;
          result[1] += 0;
          result[2] += 0.9499241274658573;
          result[3] += 0.04704097116843703;
          result[4] += 0;
          result[5] += 0.0015174506828528073;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.004608294930875576;
          result[1] += 0.06912442396313365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8986175115207373;
          result[5] += 0.027649769585253458;
        } else {
          result[0] += 0.5316455696202532;
          result[1] += 0.012658227848101267;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10126582278481014;
          result[5] += 0.3544303797468355;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0020898641588296763;
          result[1] += 0.008359456635318705;
          result[2] += 0;
          result[3] += 0.06165099268547544;
          result[4] += 0.06374085684430512;
          result[5] += 0.864158829676071;
        } else {
          result[0] += 0;
          result[1] += 0.013157894736842105;
          result[2] += 0.013157894736842105;
          result[3] += 0.6447368421052632;
          result[4] += 0.008771929824561403;
          result[5] += 0.3201754385964912;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.06;
          result[1] += 0.276;
          result[2] += 0;
          result[3] += 0.004;
          result[4] += 0.608;
          result[5] += 0.052;
        } else {
          result[0] += 0.6636085626911316;
          result[1] += 0.012844036697247707;
          result[2] += 0.07400611620795107;
          result[3] += 0.10152905198776759;
          result[4] += 0.06850152905198777;
          result[5] += 0.07951070336391437;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0;
          result[5] += 0.975609756097561;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09433962264150944;
          result[3] += 0.3584905660377358;
          result[4] += 0.07547169811320754;
          result[5] += 0.4716981132075472;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6875;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.1875;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0391566265060241;
          result[1] += 0.018072289156626505;
          result[2] += 0.7740963855421686;
          result[3] += 0.16265060240963855;
          result[4] += 0;
          result[5] += 0.006024096385542169;
        } else {
          result[0] += 0.001718213058419244;
          result[1] += 0;
          result[2] += 0.9759450171821306;
          result[3] += 0.020618556701030927;
          result[4] += 0;
          result[5] += 0.001718213058419244;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
          result[0] += 0.19911504424778761;
          result[1] += 0.004424778761061947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7743362831858407;
          result[5] += 0.022123893805309734;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.07894736842105263;
          result[5] += 0.3157894736842105;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.004197271773347324;
          result[1] += 0.004197271773347324;
          result[2] += 0;
          result[3] += 0.048268625393494226;
          result[4] += 0.08604407135362015;
          result[5] += 0.857292759706191;
        } else {
          result[0] += 0.006944444444444444;
          result[1] += 0;
          result[2] += 0.024305555555555556;
          result[3] += 0.5625;
          result[4] += 0.04861111111111111;
          result[5] += 0.3576388888888889;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.19230769230769232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8076923076923077;
          result[5] += 0;
        } else {
          result[0] += 0.006756756756756757;
          result[1] += 0.9932432432432432;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7366071428571429;
          result[1] += 0.058779761904761904;
          result[2] += 0.008928571428571428;
          result[3] += 0.017857142857142856;
          result[4] += 0.14508928571428573;
          result[5] += 0.03273809523809524;
        } else {
          result[0] += 0.19704433497536947;
          result[1] += 0.009852216748768473;
          result[2] += 0.22660098522167488;
          result[3] += 0.29802955665024633;
          result[4] += 0.046798029556650245;
          result[5] += 0.22167487684729065;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06451612903225806;
          result[3] += 0.1935483870967742;
          result[4] += 0.06451612903225806;
          result[5] += 0.6774193548387096;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24285714285714285;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.15714285714285714;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          result[0] += 0.018518518518518517;
          result[1] += 0;
          result[2] += 0.5370370370370371;
          result[3] += 0.32407407407407407;
          result[4] += 0.009259259259259259;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9473684210526315;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)117) ) ) {
          result[0] += 0.47058823529411764;
          result[1] += 0.11764705882352941;
          result[2] += 0.4117647058823529;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.009950248756218907;
          result[2] += 0.8308457711442787;
          result[3] += 0.1492537313432836;
          result[4] += 0;
          result[5] += 0.009950248756218907;
        } else {
          result[0] += 0.0016474464579901153;
          result[1] += 0;
          result[2] += 0.9654036243822076;
          result[3] += 0.032948929159802305;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.017964071856287425;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8862275449101796;
          result[5] += 0.09580838323353294;
        } else {
          result[0] += 0;
          result[1] += 0.001349527665317139;
          result[2] += 0.004048582995951417;
          result[3] += 0.024291497975708502;
          result[4] += 0.05263157894736842;
          result[5] += 0.9176788124156545;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0.39375000000000004;
          result[1] += 0.037500000000000006;
          result[2] += 0;
          result[3] += 0.05000000000000001;
          result[4] += 0.41875000000000007;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0.008113590263691683;
          result[1] += 0.012170385395537525;
          result[2] += 0;
          result[3] += 0.3691683569979716;
          result[4] += 0.07099391480730223;
          result[5] += 0.539553752535497;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.5172413793103449;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4482758620689655;
          result[5] += 0.034482758620689655;
        } else {
          result[0] += 0;
          result[1] += 0.9976133651551312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002386634844868735;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7862176977290525;
          result[1] += 0.04385277995301488;
          result[2] += 0.0023492560689115116;
          result[3] += 0.021143304620203602;
          result[4] += 0.13625685199686766;
          result[5] += 0.010180109631949883;
        } else {
          result[0] += 0.13648293963254593;
          result[1] += 0.010498687664041995;
          result[2] += 0.29133858267716534;
          result[3] += 0.29396325459317585;
          result[4] += 0.05774278215223097;
          result[5] += 0.2099737532808399;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
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
          result[3] += 0.04;
          result[4] += 0.1;
          result[5] += 0.86;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.023809523809523808;
          result[2] += 0.23809523809523808;
          result[3] += 0.5357142857142857;
          result[4] += 0;
          result[5] += 0.20238095238095238;
        } else {
          result[0] += 0;
          result[1] += 0.1590909090909091;
          result[2] += 0.7727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06818181818181818;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
          result[0] += 0.0273972602739726;
          result[1] += 0;
          result[2] += 0.4931506849315068;
          result[3] += 0.4246575342465753;
          result[4] += 0;
          result[5] += 0.0547945205479452;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.823529411764706;
          result[3] += 0.16176470588235298;
          result[4] += 0;
          result[5] += 0.014705882352941178;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
          result[0] += 0.27450980392156865;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.0392156862745098;
          result[4] += 0.0196078431372549;
          result[5] += 0;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0.9462989840348331;
          result[3] += 0.03483309143686502;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9942528735632183;
          result[5] += 0.005747126436781609;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21951219512195122;
          result[4] += 0.4634146341463415;
          result[5] += 0.3170731707317073;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019230769230769232;
          result[4] += 0.038461538461538464;
          result[5] += 0.9423076923076923;
        } else {
          result[0] += 0.1044776119402985;
          result[1] += 0.006396588486140725;
          result[2] += 0.0042643923240938165;
          result[3] += 0.34754797441364604;
          result[4] += 0.11940298507462686;
          result[5] += 0.417910447761194;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0.3333333333333333;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.5166666666666667;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0.0022675736961451248;
          result[1] += 0.9954648526077098;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022675736961451248;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.789431545236189;
          result[1] += 0.05604483586869496;
          result[2] += 0.0032025620496397116;
          result[3] += 0.020816653322658127;
          result[4] += 0.11369095276220977;
          result[5] += 0.016813450760608487;
        } else {
          result[0] += 0.1353211009174312;
          result[1] += 0.03211009174311927;
          result[2] += 0.2018348623853211;
          result[3] += 0.24541284403669725;
          result[4] += 0.09174311926605505;
          result[5] += 0.29357798165137616;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0;
          result[3] += 0.09615384615384616;
          result[4] += 0.21153846153846154;
          result[5] += 0.6730769230769231;
        } else {
          result[0] += 0.055944055944055944;
          result[1] += 0.03496503496503497;
          result[2] += 0.13286713286713286;
          result[3] += 0.4195804195804196;
          result[4] += 0.04195804195804196;
          result[5] += 0.3146853146853147;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.64;
          result[4] += 0;
          result[5] += 0.16;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8135593220338984;
          result[3] += 0.1694915254237288;
          result[4] += 0;
          result[5] += 0.01694915254237288;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7991967871485943;
          result[3] += 0.18875502008032127;
          result[4] += 0;
          result[5] += 0.012048192771084338;
        } else {
          result[0] += 0.02192982456140351;
          result[1] += 0;
          result[2] += 0.9283625730994153;
          result[3] += 0.04532163742690059;
          result[4] += 0.0029239766081871348;
          result[5] += 0.0014619883040935674;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0.013043478260869565;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9739130434782609;
          result[5] += 0.013043478260869565;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1282051282051282;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1794871794871795;
          result[5] += 0.8205128205128205;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009302325581395349;
          result[4] += 0.02945736434108527;
          result[5] += 0.9612403100775194;
        } else {
          result[0] += 0;
          result[1] += 0.030303030303030304;
          result[2] += 0;
          result[3] += 0.17575757575757575;
          result[4] += 0.07272727272727272;
          result[5] += 0.7212121212121212;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0.030612244897959183;
          result[2] += 0.01020408163265306;
          result[3] += 0.20408163265306123;
          result[4] += 0.09693877551020408;
          result[5] += 0.6479591836734694;
        } else {
          result[0] += 0;
          result[1] += 0.008;
          result[2] += 0.056;
          result[3] += 0.552;
          result[4] += 0;
          result[5] += 0.384;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
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
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          result[0] += 0.1518324607329843;
          result[1] += 0.07853403141361257;
          result[2] += 0.02617801047120419;
          result[3] += 0.020942408376963352;
          result[4] += 0.6649214659685864;
          result[5] += 0.05759162303664921;
        } else {
          result[0] += 0.8268156424581006;
          result[1] += 0.015163607342378291;
          result[2] += 0.024740622505985636;
          result[3] += 0.05826017557861133;
          result[4] += 0.03671189146049481;
          result[5] += 0.03830806065442937;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
          result[0] += 0.03532608695652174;
          result[1] += 0.03532608695652174;
          result[2] += 0.34510869565217395;
          result[3] += 0.2771739130434783;
          result[4] += 0.08967391304347827;
          result[5] += 0.2173913043478261;
        } else {
          result[0] += 0.033190578158458245;
          result[1] += 0;
          result[2] += 0.8629550321199143;
          result[3] += 0.08886509635974305;
          result[4] += 0;
          result[5] += 0.014989293361884369;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.018518518518518517;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9212962962962963;
          result[5] += 0.06018518518518518;
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
          result[0] += 0.001440922190201729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027377521613832854;
          result[4] += 0.03314121037463977;
          result[5] += 0.9380403458213257;
        } else {
          result[0] += 0.05671077504725898;
          result[1] += 0.024574669187145556;
          result[2] += 0.005671077504725898;
          result[3] += 0.27977315689981097;
          result[4] += 0.07561436672967864;
          result[5] += 0.55765595463138;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.023255813953488372;
          result[1] += 0.23255813953488372;
          result[2] += 0.046511627906976744;
          result[3] += 0;
          result[4] += 0.6511627906976745;
          result[5] += 0.046511627906976744;
        } else {
          result[0] += 0.002277904328018223;
          result[1] += 0.9977220956719818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7163561076604554;
          result[1] += 0.05037957211870255;
          result[2] += 0.008281573498964804;
          result[3] += 0.029675638371290544;
          result[4] += 0.14699792960662525;
          result[5] += 0.04830917874396135;
        } else {
          result[0] += 0.15577889447236182;
          result[1] += 0.002512562814070352;
          result[2] += 0.2135678391959799;
          result[3] += 0.2814070351758794;
          result[4] += 0.07537688442211055;
          result[5] += 0.271356783919598;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18823529411764706;
          result[3] += 0.611764705882353;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.010101010101010102;
          result[1] += 0;
          result[2] += 0.5858585858585859;
          result[3] += 0.37373737373737376;
          result[4] += 0;
          result[5] += 0.030303030303030304;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.68;
          result[3] += 0.32;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.022988505747126436;
          result[1] += 0;
          result[2] += 0.9310344827586207;
          result[3] += 0.04597701149425287;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009708737864077669;
          result[1] += 0;
          result[2] += 0.9528432732316228;
          result[3] += 0.030513176144244106;
          result[4] += 0;
          result[5] += 0.006934812760055479;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          result[0] += 0.012195121951219514;
          result[1] += 0.03252032520325204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.951219512195122;
          result[5] += 0.004065040650406505;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.09375;
          result[3] += 0.1875;
          result[4] += 0.125;
          result[5] += 0.53125;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02401129943502825;
          result[4] += 0.05649717514124294;
          result[5] += 0.9194915254237288;
        } else {
          result[0] += 0.08050089445438283;
          result[1] += 0.023255813953488372;
          result[2] += 0.04114490161001789;
          result[3] += 0.2826475849731664;
          result[4] += 0.12164579606440072;
          result[5] += 0.45080500894454384;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.5102040816326531;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4897959183673469;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          result[0] += 0.45869565217391306;
          result[1] += 0.02717391304347826;
          result[2] += 0.09347826086956522;
          result[3] += 0.1532608695652174;
          result[4] += 0.12282608695652174;
          result[5] += 0.14456521739130435;
        } else {
          result[0] += 0.8829151732377537;
          result[1] += 0.020310633213859015;
          result[2] += 0.031063321385902024;
          result[3] += 0.002389486260454002;
          result[4] += 0.058542413381123044;
          result[5] += 0.004778972520908004;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06382978723404255;
          result[3] += 0.23404255319148937;
          result[4] += 0;
          result[5] += 0.7021276595744681;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.16;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20408163265306123;
          result[3] += 0.2857142857142857;
          result[4] += 0.14285714285714285;
          result[5] += 0.3673469387755102;
        } else {
          result[0] += 0.125;
          result[1] += 0.041666666666666664;
          result[2] += 0.6770833333333334;
          result[3] += 0.11458333333333333;
          result[4] += 0;
          result[5] += 0.041666666666666664;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0058309037900874635;
          result[2] += 0.8221574344023324;
          result[3] += 0.15451895043731778;
          result[4] += 0;
          result[5] += 0.01749271137026239;
        } else {
          result[0] += 0.0019801980198019802;
          result[1] += 0;
          result[2] += 0.9841584158415841;
          result[3] += 0.013861386138613862;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          result[0] += 0.024096385542168676;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9759036144578314;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.08;
          result[1] += 0.05333333333333334;
          result[2] += 0;
          result[3] += 0.08;
          result[4] += 0.52;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0.9558823529411766;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014705882352941178;
          result[4] += 0.014705882352941178;
          result[5] += 0.014705882352941178;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9411764705882353;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030211480362537766;
          result[4] += 0.012084592145015106;
          result[5] += 0.9577039274924471;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.013123359580052493;
          result[1] += 0.007874015748031496;
          result[2] += 0.0026246719160104987;
          result[3] += 0.16010498687664043;
          result[4] += 0.16535433070866143;
          result[5] += 0.6509186351706037;
        } else {
          result[0] += 0.019762845849802372;
          result[1] += 0.019762845849802372;
          result[2] += 0.011857707509881422;
          result[3] += 0.6284584980237155;
          result[4] += 0.007905138339920948;
          result[5] += 0.31225296442687744;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9974811083123426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025188916876574307;
          result[5] += 0;
        } else {
          result[0] += 0.017094017094017096;
          result[1] += 0.3504273504273504;
          result[2] += 0;
          result[3] += 0.017094017094017096;
          result[4] += 0.5811965811965812;
          result[5] += 0.03418803418803419;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
          result[0] += 0.8368962787015044;
          result[1] += 0.03642121931908155;
          result[2] += 0.001583531274742676;
          result[3] += 0.03721298495645289;
          result[4] += 0.06809184481393507;
          result[5] += 0.01979414093428345;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.017857142857142856;
          result[2] += 0.4642857142857143;
          result[3] += 0.14285714285714285;
          result[4] += 0.0625;
          result[5] += 0.16964285714285715;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8636363636363636;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.015479876160990712;
          result[1] += 0;
          result[2] += 0.3715170278637771;
          result[3] += 0.4055727554179567;
          result[4] += 0.006191950464396285;
          result[5] += 0.20123839009287925;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.36363636363636365;
          result[1] += 0.16363636363636364;
          result[2] += 0.2909090909090909;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.014332965821389198;
          result[1] += 0.009922822491730984;
          result[2] += 0.9095920617420067;
          result[3] += 0.05512679162072768;
          result[4] += 0;
          result[5] += 0.011025358324145536;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0.013100436681222707;
          result[1] += 0.017467248908296942;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.868995633187773;
          result[5] += 0.10043668122270742;
        } else {
          result[0] += 0.6343283582089553;
          result[1] += 0.007462686567164179;
          result[2] += 0;
          result[3] += 0.022388059701492536;
          result[4] += 0.3283582089552239;
          result[5] += 0.007462686567164179;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.0021598272138228943;
          result[1] += 0.005399568034557235;
          result[2] += 0;
          result[3] += 0.05183585313174946;
          result[4] += 0.08531317494600432;
          result[5] += 0.8552915766738661;
        } else {
          result[0] += 0.0022988505747126436;
          result[1] += 0.013793103448275862;
          result[2] += 0.01839080459770115;
          result[3] += 0.4896551724137931;
          result[4] += 0.04367816091954023;
          result[5] += 0.432183908045977;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
          result[0] += 0.00909090909090909;
          result[1] += 0.34545454545454546;
          result[2] += 0.00909090909090909;
          result[3] += 0.02727272727272727;
          result[4] += 0.6090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.004454342984409799;
          result[1] += 0.9732739420935412;
          result[2] += 0.0022271714922048997;
          result[3] += 0;
          result[4] += 0.0200445434298441;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.864957264957265;
          result[1] += 0.02735042735042735;
          result[2] += 0.0017094017094017094;
          result[3] += 0.023931623931623933;
          result[4] += 0.0641025641025641;
          result[5] += 0.017948717948717947;
        } else {
          result[0] += 0.19936708860759494;
          result[1] += 0.012658227848101266;
          result[2] += 0.34810126582278483;
          result[3] += 0.22151898734177214;
          result[4] += 0.05379746835443038;
          result[5] += 0.16455696202531644;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.1111111111111111;
          result[4] += 0.1111111111111111;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9444444444444444;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.8823529411764706;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0.29411764705882354;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.391304347826087;
          result[4] += 0;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0.009584664536741214;
          result[1] += 0.009584664536741214;
          result[2] += 0.7763578274760383;
          result[3] += 0.15654952076677317;
          result[4] += 0.01597444089456869;
          result[5] += 0.03194888178913738;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0015673981191222572;
          result[1] += 0.006269592476489029;
          result[2] += 0.9608150470219436;
          result[3] += 0.029780564263322887;
          result[4] += 0;
          result[5] += 0.0015673981191222572;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953917050691244;
          result[5] += 0.004608294930875576;
        } else {
          result[0] += 0.015625;
          result[1] += 0.0390625;
          result[2] += 0;
          result[3] += 0.0234375;
          result[4] += 0.609375;
          result[5] += 0.3125;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0036496350364963502;
          result[1] += 0.0036496350364963502;
          result[2] += 0.0012165450121654502;
          result[3] += 0.05596107055961071;
          result[4] += 0.014598540145985401;
          result[5] += 0.9209245742092458;
        } else {
          result[0] += 0.15618661257606492;
          result[1] += 0.014198782961460446;
          result[2] += 0.014198782961460446;
          result[3] += 0.3407707910750507;
          result[4] += 0.11359026369168357;
          result[5] += 0.36105476673427994;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9953051643192489;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004694835680751174;
          result[5] += 0;
        } else {
          result[0] += 0.02830188679245283;
          result[1] += 0.4056603773584906;
          result[2] += 0.009433962264150943;
          result[3] += 0.009433962264150943;
          result[4] += 0.5377358490566038;
          result[5] += 0.009433962264150943;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8788927335640137;
          result[1] += 0.02854671280276816;
          result[2] += 0.006055363321799306;
          result[3] += 0.01816608996539792;
          result[4] += 0.06141868512110725;
          result[5] += 0.006920415224913493;
        } else {
          result[0] += 0.26;
          result[1] += 0.03;
          result[2] += 0.17;
          result[3] += 0.24;
          result[4] += 0.07;
          result[5] += 0.23;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9696969696969697;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0.06363636363636363;
          result[2] += 0.08181818181818182;
          result[3] += 0.37272727272727274;
          result[4] += 0.08181818181818182;
          result[5] += 0.35454545454545455;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0.41714285714285715;
          result[4] += 0;
          result[5] += 0.10285714285714286;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04242424242424243;
          result[1] += 0;
          result[2] += 0.7545454545454545;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.021212121212121213;
        } else {
          result[0] += 0.0049261083743842365;
          result[1] += 0;
          result[2] += 0.9638752052545156;
          result[3] += 0.022988505747126436;
          result[4] += 0;
          result[5] += 0.008210180623973728;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.0037593984962406013;
          result[1] += 0.09022556390977443;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8796992481203008;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.5283018867924529;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2924528301886793;
          result[5] += 0.17924528301886794;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012690355329949238;
          result[3] += 0.050761421319796954;
          result[4] += 0.04060913705583756;
          result[5] += 0.9073604060913706;
        } else {
          result[0] += 0.013114754098360656;
          result[1] += 0.006557377049180328;
          result[2] += 0.006557377049180328;
          result[3] += 0.38688524590163936;
          result[4] += 0.10819672131147541;
          result[5] += 0.4786885245901639;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.2716049382716049;
          result[2] += 0.012345679012345678;
          result[3] += 0;
          result[4] += 0.7160493827160493;
          result[5] += 0;
        } else {
          result[0] += 0.0069124423963133645;
          result[1] += 0.988479262672811;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004608294930875576;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          result[0] += 0.14601769911504425;
          result[1] += 0.06637168141592921;
          result[2] += 0.017699115044247787;
          result[3] += 0.18141592920353983;
          result[4] += 0.10176991150442478;
          result[5] += 0.48672566371681414;
        } else {
          result[0] += 0.8065454545454546;
          result[1] += 0.024;
          result[2] += 0.02181818181818182;
          result[3] += 0.03709090909090909;
          result[4] += 0.08654545454545455;
          result[5] += 0.024;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
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
          result[2] += 0.1390728476821192;
          result[3] += 0.609271523178808;
          result[4] += 0.039735099337748346;
          result[5] += 0.2119205298013245;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6086956521739131;
        } else {
          result[0] += 0.05223880597014925;
          result[1] += 0;
          result[2] += 0.6119402985074627;
          result[3] += 0.30597014925373134;
          result[4] += 0;
          result[5] += 0.029850746268656716;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0.28125;
        } else {
          result[0] += 0.021739130434782605;
          result[1] += 0;
          result[2] += 0.9027459954233408;
          result[3] += 0.06750572082379862;
          result[4] += 0.0011441647597254002;
          result[5] += 0.006864988558352401;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99) ) ) {
          result[0] += 0.007168458781362007;
          result[1] += 0.010752688172043012;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9283154121863799;
          result[5] += 0.053763440860215055;
        } else {
          result[0] += 0;
          result[1] += 0.5348837209302325;
          result[2] += 0;
          result[3] += 0.3023255813953488;
          result[4] += 0.13953488372093023;
          result[5] += 0.023255813953488372;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04946996466431095;
          result[4] += 0.05418138987043581;
          result[5] += 0.8963486454652533;
        } else {
          result[0] += 0.15009746588693956;
          result[1] += 0.005847953216374269;
          result[2] += 0.031189083820662766;
          result[3] += 0.3216374269005848;
          result[4] += 0.10526315789473684;
          result[5] += 0.38596491228070173;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.78125;
          result[5] += 0.03125;
        } else {
          result[0] += 0;
          result[1] += 0.9614512471655329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03854875283446712;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8422436459246276;
          result[1] += 0.0175284837861525;
          result[2] += 0.0035056967572305;
          result[3] += 0.03330411919368975;
          result[4] += 0.0595968448729185;
          result[5] += 0.043821209465381254;
        } else {
          result[0] += 0.21782178217821782;
          result[1] += 0.034653465346534656;
          result[2] += 0.23514851485148514;
          result[3] += 0.21782178217821782;
          result[4] += 0.034653465346534656;
          result[5] += 0.2599009900990099;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.10869565217391304;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0.2608695652173913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6098901098901099;
          result[3] += 0.33516483516483514;
          result[4] += 0;
          result[5] += 0.054945054945054944;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01875;
          result[1] += 0;
          result[2] += 0.91875;
          result[3] += 0.05625;
          result[4] += 0;
          result[5] += 0.00625;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.6666666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008759124087591242;
          result[1] += 0;
          result[2] += 0.9547445255474453;
          result[3] += 0.032116788321167884;
          result[4] += 0;
          result[5] += 0.004379562043795621;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0.019138755980861243;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9234449760765551;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.4942528735632184;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011494252873563218;
          result[4] += 0.3448275862068966;
          result[5] += 0.14942528735632185;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0042796005706134095;
          result[3] += 0.02282453637660485;
          result[4] += 0.03138373751783167;
          result[5] += 0.9415121255349501;
        } else {
          result[0] += 0.004273504273504274;
          result[1] += 0.01282051282051282;
          result[2] += 0;
          result[3] += 0.37606837606837606;
          result[4] += 0.07478632478632478;
          result[5] += 0.532051282051282;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9929577464788732;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007042253521126761;
          result[5] += 0;
        } else {
          result[0] += 0.0064516129032258064;
          result[1] += 0.2903225806451613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6903225806451613;
          result[5] += 0.012903225806451613;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0.34639498432601873;
          result[1] += 0.010971786833855798;
          result[2] += 0.1489028213166144;
          result[3] += 0.22570532915360497;
          result[4] += 0.08620689655172413;
          result[5] += 0.1818181818181818;
        } else {
          result[0] += 0.8172231985940246;
          result[1] += 0.026362038664323375;
          result[2] += 0.05799648506151142;
          result[3] += 0.030755711775043937;
          result[4] += 0.05536028119507909;
          result[5] += 0.012302284710017574;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.27586206896551724;
          result[3] += 0.26436781609195403;
          result[4] += 0.06896551724137931;
          result[5] += 0.39080459770114945;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
          result[0] += 0.06593406593406594;
          result[1] += 0.02197802197802198;
          result[2] += 0.7362637362637363;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.02197802197802198;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6808510638297872;
          result[3] += 0.2553191489361702;
          result[4] += 0;
          result[5] += 0.06382978723404255;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03723404255319149;
          result[1] += 0;
          result[2] += 0.8138297872340425;
          result[3] += 0.14893617021276595;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.97;
          result[3] += 0.03;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996415770609319;
          result[5] += 0.0035842293906810036;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7333333333333333;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8165137614678899;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009174311926605505;
          result[4] += 0.12844036697247707;
          result[5] += 0.045871559633027525;
        } else {
          result[0] += 0.00546021840873635;
          result[1] += 0.00546021840873635;
          result[2] += 0.0046801872074883;
          result[3] += 0.20436817472698907;
          result[4] += 0.054602184087363496;
          result[5] += 0.7254290171606864;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9910714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008928571428571428;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2705882352941177;
          result[2] += 0.023529411764705885;
          result[3] += 0;
          result[4] += 0.6705882352941177;
          result[5] += 0.03529411764705883;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0.41362916006339145;
          result[1] += 0.060221870047543584;
          result[2] += 0.1410459587955626;
          result[3] += 0.13312202852614896;
          result[4] += 0.08240887480190175;
          result[5] += 0.16957210776545167;
        } else {
          result[0] += 0.880184331797235;
          result[1] += 0.02304147465437788;
          result[2] += 0.02534562211981567;
          result[3] += 0.009216589861751152;
          result[4] += 0.055299539170506916;
          result[5] += 0.0069124423963133645;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.4444444444444444;
          result[4] += 0.09523809523809523;
          result[5] += 0.23809523809523808;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0.35294117647058826;
          result[3] += 0.5588235294117647;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008385744234800839;
          result[1] += 0.0031446540880503146;
          result[2] += 0.9077568134171907;
          result[3] += 0.07756813417190776;
          result[4] += 0.0010482180293501049;
          result[5] += 0.0020964360587002098;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9844559585492227;
          result[5] += 0.015544041450777202;
        } else {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.4;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.7222222222222222;
          result[5] += 0.1388888888888889;
        } else {
          result[0] += 0.01195219123505976;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021248339973439574;
          result[4] += 0.017264276228419653;
          result[5] += 0.949535192563081;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.07961783439490445;
          result[1] += 0.07643312101910828;
          result[2] += 0.03184713375796178;
          result[3] += 0.15605095541401273;
          result[4] += 0.06050955414012739;
          result[5] += 0.5955414012738853;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0.6559139784946236;
          result[4] += 0.021505376344086023;
          result[5] += 0.2903225806451613;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.2675438596491228;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6228070175438597;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.7354497354497355;
          result[1] += 0.011243386243386243;
          result[2] += 0.01917989417989418;
          result[3] += 0.0787037037037037;
          result[4] += 0.06613756613756613;
          result[5] += 0.08928571428571429;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0026246719160104987;
          result[1] += 0.9973753280839895;
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
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12096774193548387;
          result[3] += 0.5725806451612904;
          result[4] += 0;
          result[5] += 0.3064516129032258;
        } else {
          result[0] += 0.11627906976744186;
          result[1] += 0;
          result[2] += 0.5697674418604651;
          result[3] += 0.2558139534883721;
          result[4] += 0.01744186046511628;
          result[5] += 0.040697674418604654;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0.006928406466512702;
          result[1] += 0.0011547344110854503;
          result[2] += 0.9214780600461894;
          result[3] += 0.06581986143187067;
          result[4] += 0;
          result[5] += 0.004618937644341801;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004310344827586208;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9612068965517242;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0.6439393939393939;
          result[1] += 0.015151515151515152;
          result[2] += 0;
          result[3] += 0.022727272727272728;
          result[4] += 0.21212121212121213;
          result[5] += 0.10606060606060606;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0010395010395010396;
          result[2] += 0.004158004158004158;
          result[3] += 0.05301455301455302;
          result[4] += 0.08523908523908524;
          result[5] += 0.8565488565488566;
        } else {
          result[0] += 0.011655011655011656;
          result[1] += 0.02097902097902098;
          result[2] += 0.023310023310023312;
          result[3] += 0.49184149184149184;
          result[4] += 0.04195804195804196;
          result[5] += 0.41025641025641024;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.1702127659574468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8297872340425532;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9895833333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010416666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8753339269813001;
          result[1] += 0.017809439002671415;
          result[2] += 0;
          result[3] += 0.008904719501335707;
          result[4] += 0.0854853072128228;
          result[5] += 0.012466607301869992;
        } else {
          result[0] += 0.2282051282051282;
          result[1] += 0.038461538461538464;
          result[2] += 0.2846153846153846;
          result[3] += 0.2153846153846154;
          result[4] += 0.05128205128205128;
          result[5] += 0.18205128205128204;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.95;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.0746268656716418;
          result[2] += 0.2985074626865672;
          result[3] += 0.4477611940298508;
          result[4] += 0;
          result[5] += 0.17910447761194032;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.84;
          result[3] += 0.12;
          result[4] += 0;
          result[5] += 0.04;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5178571428571429;
          result[3] += 0.4107142857142857;
          result[4] += 0.017857142857142856;
          result[5] += 0.05357142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006203473945409431;
          result[1] += 0.001240694789081886;
          result[2] += 0.9342431761786602;
          result[3] += 0.054590570719602986;
          result[4] += 0;
          result[5] += 0.003722084367245658;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.007874015748031496;
          result[1] += 0.027559055118110236;
          result[2] += 0.015748031496062992;
          result[3] += 0;
          result[4] += 0.9409448818897638;
          result[5] += 0.007874015748031496;
        } else {
          result[0] += 0.43529411764705883;
          result[1] += 0;
          result[2] += 0.023529411764705882;
          result[3] += 0;
          result[4] += 0.24705882352941178;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.015028901734104046;
          result[2] += 0;
          result[3] += 0.047398843930635835;
          result[4] += 0.05317919075144509;
          result[5] += 0.884393063583815;
        } else {
          result[0] += 0.0031347962382445144;
          result[1] += 0;
          result[2] += 0.031347962382445145;
          result[3] += 0.5266457680250785;
          result[4] += 0.012539184952978058;
          result[5] += 0.426332288401254;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9934497816593887;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006550218340611353;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.771343726800297;
          result[1] += 0.04083147735708983;
          result[2] += 0.009651076466221232;
          result[3] += 0.025241276911655532;
          result[4] += 0.11878247958426132;
          result[5] += 0.03414996288047513;
        } else {
          result[0] += 0.11943793911007025;
          result[1] += 0.01639344262295082;
          result[2] += 0.1873536299765808;
          result[3] += 0.2786885245901639;
          result[4] += 0.08665105386416862;
          result[5] += 0.3114754098360656;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1411764705882353;
          result[3] += 0.6705882352941176;
          result[4] += 0.011764705882352941;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6060606060606061;
          result[3] += 0.3939393939393939;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8083333333333333;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.43478260869565216;
          result[3] += 0.5652173913043478;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010380622837370242;
          result[1] += 0;
          result[2] += 0.8927335640138409;
          result[3] += 0.08304498269896193;
          result[4] += 0;
          result[5] += 0.01384083044982699;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004081632653061225;
          result[1] += 0;
          result[2] += 0.9755102040816327;
          result[3] += 0.02040816326530612;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          result[0] += 0.008733624454148471;
          result[1] += 0.07860262008733625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.868995633187773;
          result[5] += 0.043668122270742356;
        } else {
          result[0] += 0.6202531645569621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012658227848101267;
          result[4] += 0.13924050632911394;
          result[5] += 0.2278481012658228;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.003257328990228013;
          result[2] += 0;
          result[3] += 0.06514657980456026;
          result[4] += 0.06840390879478828;
          result[5] += 0.8631921824104235;
        } else {
          result[0] += 0.011811023622047244;
          result[1] += 0.01968503937007874;
          result[2] += 0.015748031496062992;
          result[3] += 0.562992125984252;
          result[4] += 0.023622047244094488;
          result[5] += 0.3661417322834646;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7401633259094285;
          result[1] += 0.0712694877505568;
          result[2] += 0.0029695619896065333;
          result[3] += 0.023014105419450634;
          result[4] += 0.13288789903489237;
          result[5] += 0.029695619896065333;
        } else {
          result[0] += 0.15514018691588785;
          result[1] += 0.03177570093457944;
          result[2] += 0.22803738317757008;
          result[3] += 0.2485981308411215;
          result[4] += 0.06728971962616823;
          result[5] += 0.2691588785046729;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.004819277108433735;
          result[1] += 0.9903614457831326;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004819277108433735;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.08823529411764706;
          result[4] += 0.20588235294117646;
          result[5] += 0.6176470588235294;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.05128205128205128;
          result[4] += 0;
          result[5] += 0.28205128205128205;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.08333333333333333;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.2916666666666667;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.6166666666666667;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7736842105263158;
          result[3] += 0.22105263157894736;
          result[4] += 0;
          result[5] += 0.005263157894736842;
        } else {
          result[0] += 0.0014705882352941178;
          result[1] += 0;
          result[2] += 0.9529411764705883;
          result[3] += 0.04558823529411765;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
          result[0] += 0.004032258064516129;
          result[1] += 0.008064516129032258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9596774193548387;
          result[5] += 0.028225806451612902;
        } else {
          result[0] += 0;
          result[1] += 0.34210526315789475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2631578947368421;
          result[5] += 0.39473684210526316;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03684210526315789;
          result[1] += 0.014736842105263158;
          result[2] += 0;
          result[3] += 0.05473684210526316;
          result[4] += 0.04;
          result[5] += 0.8536842105263158;
        } else {
          result[0] += 0.03184713375796178;
          result[1] += 0;
          result[2] += 0.04777070063694268;
          result[3] += 0.46178343949044587;
          result[4] += 0.01910828025477707;
          result[5] += 0.4394904458598726;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.06140350877192982;
          result[1] += 0.32894736842105265;
          result[2] += 0;
          result[3] += 0.0043859649122807015;
          result[4] += 0.6008771929824561;
          result[5] += 0.0043859649122807015;
        } else {
          result[0] += 0.6775850995504175;
          result[1] += 0.009633911368015413;
          result[2] += 0.07964033397559409;
          result[3] += 0.09120102761721259;
          result[4] += 0.06358381502890173;
          result[5] += 0.0783558124598587;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.980440097799511;
          result[2] += 0;
          result[3] += 0.004889975550122249;
          result[4] += 0.014669926650366748;
          result[5] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0.9130434782608695;
        } else {
          result[0] += 0;
          result[1] += 0.12000000000000001;
          result[2] += 0.12000000000000001;
          result[3] += 0.4600000000000001;
          result[4] += 0.08000000000000002;
          result[5] += 0.22000000000000003;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0.058823529411764705;
          result[3] += 0.7647058823529411;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.02346041055718475;
          result[1] += 0;
          result[2] += 0.7243401759530792;
          result[3] += 0.21407624633431085;
          result[4] += 0.005865102639296188;
          result[5] += 0.03225806451612903;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.64;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.06;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9144144144144144;
          result[3] += 0.08108108108108109;
          result[4] += 0;
          result[5] += 0.0045045045045045045;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
          result[0] += 0.0196078431372549;
          result[1] += 0;
          result[2] += 0.9019607843137255;
          result[3] += 0.0784313725490196;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
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
          result[4] += 0.9615384615384616;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0.01569506726457399;
          result[1] += 0.01233183856502242;
          result[2] += 0.0011210762331838565;
          result[3] += 0.03699551569506727;
          result[4] += 0.03699551569506727;
          result[5] += 0.8968609865470852;
        } else {
          result[0] += 0.008968609865470852;
          result[1] += 0.03587443946188341;
          result[2] += 0;
          result[3] += 0.5022421524663677;
          result[4] += 0.04035874439461883;
          result[5] += 0.4125560538116592;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9130434782608695;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9859484777517564;
          result[2] += 0;
          result[3] += 0.00702576112412178;
          result[4] += 0.00702576112412178;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7244039270687237;
          result[1] += 0.046984572230014024;
          result[2] += 0.005610098176718092;
          result[3] += 0.030154277699859747;
          result[4] += 0.1479663394109397;
          result[5] += 0.04488078541374474;
        } else {
          result[0] += 0.16346153846153846;
          result[1] += 0;
          result[2] += 0.17548076923076922;
          result[3] += 0.32211538461538464;
          result[4] += 0.0673076923076923;
          result[5] += 0.27163461538461536;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011627906976744186;
          result[2] += 0.023255813953488372;
          result[3] += 0.23255813953488372;
          result[4] += 0.05813953488372093;
          result[5] += 0.6744186046511628;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14814814814814814;
          result[3] += 0.7037037037037037;
          result[4] += 0;
          result[5] += 0.14814814814814814;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6578947368421053;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.13157894736842105;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0.3076923076923077;
          result[3] += 0.5641025641025641;
          result[4] += 0.02564102564102564;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7768595041322314;
          result[3] += 0.1652892561983471;
          result[4] += 0;
          result[5] += 0.05785123966942149;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.05660377358490566;
          result[1] += 0;
          result[2] += 0.8176100628930818;
          result[3] += 0.1069182389937107;
          result[4] += 0.006289308176100629;
          result[5] += 0.012578616352201259;
        } else {
          result[0] += 0.012195121951219513;
          result[1] += 0;
          result[2] += 0.967479674796748;
          result[3] += 0.018292682926829267;
          result[4] += 0;
          result[5] += 0.0020325203252032522;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.036458333333333336;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9635416666666666;
          result[5] += 0;
        } else {
          result[0] += 0.06896551724137931;
          result[1] += 0.13793103448275862;
          result[2] += 0;
          result[3] += 0.13793103448275862;
          result[4] += 0.3103448275862069;
          result[5] += 0.3448275862068966;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0235655737704918;
          result[1] += 0.0020491803278688526;
          result[2] += 0.0020491803278688526;
          result[3] += 0.05225409836065574;
          result[4] += 0.07684426229508197;
          result[5] += 0.8432377049180327;
        } else {
          result[0] += 0.05763688760806916;
          result[1] += 0.01440922190201729;
          result[2] += 0.008645533141210375;
          result[3] += 0.43804034582132567;
          result[4] += 0.040345821325648415;
          result[5] += 0.4409221902017291;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9842696629213483;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015730337078651686;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3237410071942446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6546762589928058;
          result[5] += 0.02158273381294964;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.845766974015088;
          result[1] += 0.02347024308466052;
          result[2] += 0.004191114836546521;
          result[3] += 0.01760268231349539;
          result[4] += 0.09136630343671416;
          result[5] += 0.01760268231349539;
        } else {
          result[0] += 0.2161520190023753;
          result[1] += 0.030878859857482184;
          result[2] += 0.19477434679334918;
          result[3] += 0.30403800475059384;
          result[4] += 0.04513064133016627;
          result[5] += 0.20902612826603326;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28125;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.09375;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0.009174311926605503;
          result[1] += 0;
          result[2] += 0.7522935779816512;
          result[3] += 0.17431192660550457;
          result[4] += 0;
          result[5] += 0.06422018348623852;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03214285714285714;
          result[1] += 0;
          result[2] += 0.8285714285714286;
          result[3] += 0.1392857142857143;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9844827586206897;
          result[3] += 0.015517241379310345;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.26666666666666666;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.35714285714285715;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0.003393665158371041;
          result[2] += 0;
          result[3] += 0.03733031674208145;
          result[4] += 0.053167420814479636;
          result[5] += 0.9061085972850679;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0425531914893617;
          result[3] += 0.1595744680851064;
          result[4] += 0.0425531914893617;
          result[5] += 0.7553191489361702;
        } else {
          result[0] += 0.011278195488721804;
          result[1] += 0.015037593984962405;
          result[2] += 0.06390977443609022;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.3383458646616541;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.6071428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.39285714285714285;
          result[5] += 0;
        } else {
          result[0] += 0.009302325581395349;
          result[1] += 0.9906976744186047;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.11956521739130435;
          result[1] += 0.15760869565217392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6793478260869565;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0.7441217150760719;
          result[1] += 0.008298755186721992;
          result[2] += 0.024204702627939143;
          result[3] += 0.05532503457814661;
          result[4] += 0.06085753803596127;
          result[5] += 0.10719225449515905;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07317073170731707;
          result[3] += 0.07317073170731707;
          result[4] += 0.3902439024390244;
          result[5] += 0.4634146341463415;
        } else {
          result[0] += 0.10619469026548672;
          result[1] += 0.09734513274336283;
          result[2] += 0.22123893805309736;
          result[3] += 0.46017699115044247;
          result[4] += 0.017699115044247787;
          result[5] += 0.09734513274336283;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.07784431137724553;
          result[1] += 0;
          result[2] += 0.5748502994011977;
          result[3] += 0.28143712574850305;
          result[4] += 0;
          result[5] += 0.06586826347305391;
        } else {
          result[0] += 0.028571428571428574;
          result[1] += 0;
          result[2] += 0.8982857142857144;
          result[3] += 0.06285714285714288;
          result[4] += 0;
          result[5] += 0.010285714285714287;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.004878048780487805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9707317073170731;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0.014084507042253523;
          result[1] += 0.014084507042253523;
          result[2] += 0.014084507042253523;
          result[3] += 0.07042253521126762;
          result[4] += 0.619718309859155;
          result[5] += 0.26760563380281693;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.78;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22;
          result[5] += 0;
        } else {
          result[0] += 0.0010438413361169101;
          result[1] += 0.009394572025052192;
          result[2] += 0.0010438413361169101;
          result[3] += 0.0720250521920668;
          result[4] += 0.0709812108559499;
          result[5] += 0.8455114822546973;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.20346320346320346;
          result[1] += 0.03896103896103896;
          result[2] += 0.08225108225108226;
          result[3] += 0.38311688311688313;
          result[4] += 0.05627705627705628;
          result[5] += 0.23593073593073594;
        } else {
          result[0] += 0.7089065894279507;
          result[1] += 0.06589427950760318;
          result[2] += 0.041998551774076756;
          result[3] += 0.04706734250543085;
          result[4] += 0.09123823316437364;
          result[5] += 0.04489500362056481;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.9976525821596244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002347417840375587;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07777777777777778;
          result[3] += 0.2222222222222222;
          result[4] += 0.08888888888888889;
          result[5] += 0.6111111111111112;
        } else {
          result[0] += 0.02531645569620253;
          result[1] += 0.1518987341772152;
          result[2] += 0.17721518987341772;
          result[3] += 0.5443037974683544;
          result[4] += 0.012658227848101266;
          result[5] += 0.08860759493670886;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30434782608695654;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0.017857142857142856;
          result[2] += 0.8214285714285714;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.03571428571428571;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0.01020408163265306;
          result[2] += 0.7925170068027211;
          result[3] += 0.1564625850340136;
          result[4] += 0;
          result[5] += 0.030612244897959183;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0;
          result[2] += 0.7966101694915254;
          result[3] += 0.16101694915254236;
          result[4] += 0;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0.003838771593090211;
          result[1] += 0;
          result[2] += 0.982725527831094;
          result[3] += 0.013435700575815739;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9104477611940298;
          result[5] += 0.08955223880597014;
        } else {
          result[0] += 0.03225806451612903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.45161290322580644;
          result[5] += 0.5161290322580645;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004160887656033287;
          result[3] += 0.036061026352288486;
          result[4] += 0.04022191400832178;
          result[5] += 0.9195561719833565;
        } else {
          result[0] += 0.060903732809430254;
          result[1] += 0.0137524557956778;
          result[2] += 0.005893909626719057;
          result[3] += 0.3713163064833006;
          result[4] += 0.10019646365422397;
          result[5] += 0.44793713163064836;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          result[0] += 0.008620689655172414;
          result[1] += 0.47413793103448276;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5086206896551724;
          result[5] += 0.008620689655172414;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0.9902912621359223;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0048543689320388345;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          result[0] += 0.41348973607038125;
          result[1] += 0.024926686217008796;
          result[2] += 0.11730205278592376;
          result[3] += 0.16862170087976538;
          result[4] += 0.07624633431085044;
          result[5] += 0.19941348973607037;
        } else {
          result[0] += 0.8317307692307693;
          result[1] += 0.023076923076923078;
          result[2] += 0.04519230769230769;
          result[3] += 0.010576923076923078;
          result[4] += 0.08076923076923077;
          result[5] += 0.008653846153846154;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.07352941176470588;
          result[2] += 0;
          result[3] += 0.22058823529411764;
          result[4] += 0.1323529411764706;
          result[5] += 0.5735294117647058;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3888888888888889;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.37777777777777777;
          result[4] += 0;
          result[5] += 0.08888888888888889;
        } else {
          result[0] += 0.17857142857142858;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03571428571428571;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.030100334448160536;
          result[1] += 0.006688963210702341;
          result[2] += 0.7892976588628763;
          result[3] += 0.14046822742474915;
          result[4] += 0;
          result[5] += 0.033444816053511704;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0.5625;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005008347245409015;
          result[1] += 0;
          result[2] += 0.9666110183639399;
          result[3] += 0.028380634390651086;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.004629629629629629;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9259259259259259;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.27586206896551724;
          result[5] += 0.7241379310344828;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
          result[0] += 0.39344262295081966;
          result[1] += 0.06557377049180328;
          result[2] += 0;
          result[3] += 0.02459016393442623;
          result[4] += 0.4672131147540984;
          result[5] += 0.04918032786885246;
        } else {
          result[0] += 0.0027002700270027003;
          result[1] += 0.0063006300630063005;
          result[2] += 0.004500450045004501;
          result[3] += 0.14491449144914492;
          result[4] += 0.0423042304230423;
          result[5] += 0.7992799279927992;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955156950672646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004484304932735426;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8050075872534144;
          result[1] += 0.02200303490136571;
          result[2] += 0.004552352048558423;
          result[3] += 0.015174506828528075;
          result[4] += 0.1229135053110774;
          result[5] += 0.03034901365705615;
        } else {
          result[0] += 0.21825396825396826;
          result[1] += 0.05555555555555555;
          result[2] += 0.08333333333333333;
          result[3] += 0.18253968253968253;
          result[4] += 0.09126984126984126;
          result[5] += 0.36904761904761907;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06578947368421052;
          result[3] += 0.6710526315789473;
          result[4] += 0.006578947368421052;
          result[5] += 0.2565789473684211;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9459459459459459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0.17307692307692307;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0.20689655172413793;
          result[1] += 0;
          result[2] += 0.6293103448275862;
          result[3] += 0.07758620689655173;
          result[4] += 0.04310344827586207;
          result[5] += 0.04310344827586207;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          result[0] += 0.008849557522123894;
          result[1] += 0;
          result[2] += 0.6637168141592921;
          result[3] += 0.2831858407079646;
          result[4] += 0;
          result[5] += 0.04424778761061947;
        } else {
          result[0] += 0.0011976047904191617;
          result[1] += 0;
          result[2] += 0.9221556886227545;
          result[3] += 0.0718562874251497;
          result[4] += 0;
          result[5] += 0.004790419161676647;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.035897435897435895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9384615384615385;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0.25;
          result[1] += 0.020833333333333332;
          result[2] += 0;
          result[3] += 0.06944444444444445;
          result[4] += 0.3472222222222222;
          result[5] += 0.3125;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.004373177842565598;
          result[2] += 0;
          result[3] += 0.033527696793002916;
          result[4] += 0.021865889212827987;
          result[5] += 0.9402332361516035;
        } else {
          result[0] += 0.007425742574257425;
          result[1] += 0.007425742574257425;
          result[2] += 0;
          result[3] += 0.3316831683168317;
          result[4] += 0.10148514851485149;
          result[5] += 0.551980198019802;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.09055118110236221;
          result[1] += 0.25196850393700787;
          result[2] += 0.011811023622047244;
          result[3] += 0.051181102362204724;
          result[4] += 0.5354330708661418;
          result[5] += 0.05905511811023622;
        } else {
          result[0] += 0.7246376811594203;
          result[1] += 0.011732229123533472;
          result[2] += 0.041407867494824016;
          result[3] += 0.07867494824016563;
          result[4] += 0.06694271911663216;
          result[5] += 0.07660455486542443;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03488372093023256;
          result[3] += 0.2441860465116279;
          result[4] += 0.03488372093023256;
          result[5] += 0.686046511627907;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16483516483516483;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.26373626373626374;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.02409638554216867;
          result[2] += 0.3132530120481927;
          result[3] += 0.5662650602409638;
          result[4] += 0;
          result[5] += 0.09638554216867468;
        } else {
          result[0] += 0.07092198581560286;
          result[1] += 0.06382978723404256;
          result[2] += 0.673758865248227;
          result[3] += 0.07801418439716314;
          result[4] += 0.056737588652482275;
          result[5] += 0.056737588652482275;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
          result[0] += 0.009009009009009009;
          result[1] += 0;
          result[2] += 0.7837837837837838;
          result[3] += 0.17117117117117117;
          result[4] += 0;
          result[5] += 0.036036036036036036;
        } else {
          result[0] += 0.6923076923076923;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9686028257456829;
          result[3] += 0.023547880690737835;
          result[4] += 0;
          result[5] += 0.007849293563579277;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004739336492890996;
          result[4] += 0.95260663507109;
          result[5] += 0.04265402843601896;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02890932982917214;
          result[4] += 0.03153745072273324;
          result[5] += 0.9395532194480947;
        } else {
          result[0] += 0.1;
          result[1] += 0.029166666666666667;
          result[2] += 0.008333333333333333;
          result[3] += 0.3229166666666667;
          result[4] += 0.08958333333333333;
          result[5] += 0.45;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.14457831325301204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8554216867469879;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9641350210970464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.035864978902953586;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8487841945288752;
          result[1] += 0.022036474164133735;
          result[2] += 0.002279635258358662;
          result[3] += 0.022036474164133735;
          result[4] += 0.08510638297872339;
          result[5] += 0.019756838905775072;
        } else {
          result[0] += 0.29554655870445345;
          result[1] += 0.05668016194331984;
          result[2] += 0.06882591093117409;
          result[3] += 0.18218623481781376;
          result[4] += 0.10121457489878542;
          result[5] += 0.29554655870445345;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.5151515151515151;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12631578947368421;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.07368421052631578;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.5454545454545454;
          result[4] += 0.13636363636363635;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.05172413793103448;
          result[1] += 0;
          result[2] += 0.7068965517241379;
          result[3] += 0.1206896551724138;
          result[4] += 0;
          result[5] += 0.1206896551724138;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)122.5) ) ) {
          result[0] += 0.021276595744680854;
          result[1] += 0;
          result[2] += 0.6778115501519758;
          result[3] += 0.2036474164133739;
          result[4] += 0.006079027355623101;
          result[5] += 0.09118541033434652;
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
          result[0] += 0.010638297872340427;
          result[1] += 0;
          result[2] += 0.8936170212765958;
          result[3] += 0.0921985815602837;
          result[4] += 0;
          result[5] += 0.003546099290780142;
        } else {
          result[0] += 0.007263922518159807;
          result[1] += 0;
          result[2] += 0.9806295399515739;
          result[3] += 0.012106537530266344;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0.4285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.28571428571428575;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.01171875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.94140625;
          result[5] += 0.046875;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011547344110854503;
          result[3] += 0.054272517321016164;
          result[4] += 0.049653579676674366;
          result[5] += 0.894919168591224;
        } else {
          result[0] += 0.11386138613861387;
          result[1] += 0.019801980198019802;
          result[2] += 0.0024752475247524753;
          result[3] += 0.37623762376237624;
          result[4] += 0.04950495049504951;
          result[5] += 0.4381188118811881;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.994750656167979;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005249343832020997;
          result[5] += 0;
        } else {
          result[0] += 0.13636363636363635;
          result[1] += 0.4090909090909091;
          result[2] += 0.045454545454545456;
          result[3] += 0.09090909090909091;
          result[4] += 0.3181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.04419889502762431;
          result[1] += 0.43646408839779005;
          result[2] += 0.03867403314917127;
          result[3] += 0.022099447513812154;
          result[4] += 0.43646408839779005;
          result[5] += 0.022099447513812154;
        } else {
          result[0] += 0.6723700887198987;
          result[1] += 0.017743979721166037;
          result[2] += 0.06083650190114069;
          result[3] += 0.09252217997465147;
          result[4] += 0.07667934093789608;
          result[5] += 0.07984790874524716;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.7647058823529411;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.918918918918919;
          result[3] += 0.08108108108108109;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.0037174721189591076;
          result[1] += 0;
          result[2] += 0.7620817843866171;
          result[3] += 0.18587360594795538;
          result[4] += 0;
          result[5] += 0.048327137546468404;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001303780964797914;
          result[1] += 0;
          result[2] += 0.9582790091264668;
          result[3] += 0.03650586701434159;
          result[4] += 0;
          result[5] += 0.003911342894393742;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011538461538461539;
          result[1] += 0;
          result[2] += 0.007692307692307693;
          result[3] += 0;
          result[4] += 0.9076923076923077;
          result[5] += 0.07307692307692308;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022099447513812154;
          result[4] += 0.013812154696132596;
          result[5] += 0.9640883977900553;
        } else {
          result[0] += 0.06989247311827956;
          result[1] += 0.05734767025089606;
          result[2] += 0.044802867383512544;
          result[3] += 0.2831541218637993;
          result[4] += 0.09498207885304659;
          result[5] += 0.449820788530466;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9852579852579852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014742014742014743;
          result[5] += 0;
        } else {
          result[0] += 0.03184713375796178;
          result[1] += 0.3184713375796178;
          result[2] += 0;
          result[3] += 0.09554140127388536;
          result[4] += 0.5031847133757962;
          result[5] += 0.050955414012738856;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8528241845664281;
          result[1] += 0.011137629276054098;
          result[2] += 0.0031821797931583136;
          result[3] += 0.027048528241845664;
          result[4] += 0.07637231503579953;
          result[5] += 0.0294351630867144;
        } else {
          result[0] += 0.1388235294117647;
          result[1] += 0.04470588235294118;
          result[2] += 0.21176470588235294;
          result[3] += 0.24705882352941178;
          result[4] += 0.06352941176470588;
          result[5] += 0.29411764705882354;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26153846153846155;
          result[3] += 0.5692307692307692;
          result[4] += 0;
          result[5] += 0.16923076923076924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7553191489361702;
          result[3] += 0.22340425531914893;
          result[4] += 0;
          result[5] += 0.02127659574468085;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0.45;
          result[1] += 0.25;
          result[2] += 0.1;
          result[3] += 0.05;
          result[4] += 0.05;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.71875;
          result[3] += 0.125;
          result[4] += 0.0625;
          result[5] += 0.09375;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9496124031007752;
          result[3] += 0.04780361757105943;
          result[4] += 0;
          result[5] += 0.002583979328165375;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.016260162601626018;
          result[1] += 0.06097560975609756;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9186991869918699;
          result[5] += 0.0040650406504065045;
        } else {
          result[0] += 0.6682692307692307;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004807692307692308;
          result[4] += 0.18269230769230768;
          result[5] += 0.14423076923076922;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011641443538998836;
          result[2] += 0;
          result[3] += 0.027939464493597205;
          result[4] += 0.06635622817229336;
          result[5] += 0.9045401629802096;
        } else {
          result[0] += 0.028277634961439587;
          result[1] += 0.010282776349614395;
          result[2] += 0.002570694087403599;
          result[3] += 0.32390745501285345;
          result[4] += 0.10282776349614396;
          result[5] += 0.532133676092545;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9927536231884058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004830917874396135;
          result[5] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7619439868204284;
          result[1] += 0.05930807248764416;
          result[2] += 0.02553542009884679;
          result[3] += 0.03459637561779243;
          result[4] += 0.08649093904448107;
          result[5] += 0.032125205930807255;
        } else {
          result[0] += 0.14115308151093442;
          result[1] += 0.003976143141153082;
          result[2] += 0.2604373757455269;
          result[3] += 0.3598409542743539;
          result[4] += 0.07554671968190856;
          result[5] += 0.1590457256461233;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0.125;
          result[3] += 0.3125;
          result[4] += 0.15625;
          result[5] += 0.28125;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.021897810218978103;
          result[2] += 0.6496350364963503;
          result[3] += 0.27007299270072993;
          result[4] += 0;
          result[5] += 0.058394160583941604;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.049689440993788817;
          result[1] += 0.006211180124223602;
          result[2] += 0.7701863354037267;
          result[3] += 0.16770186335403728;
          result[4] += 0;
          result[5] += 0.006211180124223602;
        } else {
          result[0] += 0.0033277870216306157;
          result[1] += 0;
          result[2] += 0.9700499168053245;
          result[3] += 0.026622296173044926;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.008968609865470852;
          result[1] += 0.03139013452914798;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9372197309417041;
          result[5] += 0.02242152466367713;
        } else {
          result[0] += 0.47191011235955055;
          result[1] += 0.0898876404494382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10112359550561797;
          result[5] += 0.33707865168539325;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.009861932938856016;
          result[2] += 0.004930966469428008;
          result[3] += 0.0670611439842209;
          result[4] += 0.045364891518737675;
          result[5] += 0.8727810650887574;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.008130081300813009;
          result[2] += 0.032520325203252036;
          result[3] += 0.6829268292682927;
          result[4] += 0;
          result[5] += 0.25203252032520324;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
          result[0] += 0.004796163069544365;
          result[1] += 0.9664268585131895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023980815347721826;
          result[5] += 0.004796163069544365;
        } else {
          result[0] += 0.00684931506849315;
          result[1] += 0.4041095890410959;
          result[2] += 0;
          result[3] += 0.0273972602739726;
          result[4] += 0.541095890410959;
          result[5] += 0.02054794520547945;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8452768729641694;
          result[1] += 0.014657980456026058;
          result[2] += 0;
          result[3] += 0.02768729641693811;
          result[4] += 0.08631921824104234;
          result[5] += 0.026058631921824105;
        } else {
          result[0] += 0.18577981651376146;
          result[1] += 0.045871559633027525;
          result[2] += 0.20871559633027523;
          result[3] += 0.231651376146789;
          result[4] += 0.10779816513761468;
          result[5] += 0.22018348623853212;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09836065573770492;
          result[3] += 0.09836065573770492;
          result[4] += 0;
          result[5] += 0.8032786885245902;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.5166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.589041095890411;
          result[3] += 0.3424657534246575;
          result[4] += 0;
          result[5] += 0.0684931506849315;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.6923076923076923;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0.6464646464646465;
          result[3] += 0.24242424242424243;
          result[4] += 0;
          result[5] += 0.020202020202020204;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.015950920245398775;
          result[1] += 0;
          result[2] += 0.9190184049079755;
          result[3] += 0.051533742331288344;
          result[4] += 0.001226993865030675;
          result[5] += 0.012269938650306749;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9216589861751152;
          result[5] += 0.07834101382488479;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.029017857142857144;
          result[1] += 0.002232142857142857;
          result[2] += 0;
          result[3] += 0.04575892857142857;
          result[4] += 0.06584821428571429;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0.05026455026455026;
          result[1] += 0.08994708994708994;
          result[2] += 0.09259259259259259;
          result[3] += 0.3994708994708995;
          result[4] += 0.013227513227513227;
          result[5] += 0.3544973544973545;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
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
          result[0] += 0.7708018154311649;
          result[1] += 0.023449319213313162;
          result[2] += 0.0007564296520423601;
          result[3] += 0.01588502269288956;
          result[4] += 0.13842662632375188;
          result[5] += 0.05068078668683813;
        } else {
          result[0] += 0.24590163934426224;
          result[1] += 0.039344262295081964;
          result[2] += 0.17377049180327866;
          result[3] += 0.30163934426229505;
          result[4] += 0.022950819672131143;
          result[5] += 0.21639344262295077;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009615384615384616;
          result[3] += 0.22115384615384615;
          result[4] += 0.09615384615384616;
          result[5] += 0.6730769230769231;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35;
          result[3] += 0.15;
          result[4] += 0.4;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16037735849056606;
          result[3] += 0.6603773584905661;
          result[4] += 0.009433962264150945;
          result[5] += 0.169811320754717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.005263157894736842;
          result[1] += 0.005263157894736842;
          result[2] += 0.6263157894736842;
          result[3] += 0.30526315789473685;
          result[4] += 0.010526315789473684;
          result[5] += 0.04736842105263158;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9024390243902439;
          result[3] += 0.0975609756097561;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0.14285714285714285;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0.020895522388059702;
          result[1] += 0;
          result[2] += 0.9417910447761194;
          result[3] += 0.03134328358208955;
          result[4] += 0;
          result[5] += 0.005970149253731343;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.012096774193548387;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9193548387096774;
          result[5] += 0.06854838709677419;
        } else {
          result[0] += 0;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
          result[0] += 0.004555808656036446;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05580865603644647;
          result[4] += 0.06036446469248292;
          result[5] += 0.8792710706150342;
        } else {
          result[0] += 0.13353115727002968;
          result[1] += 0.02967359050445104;
          result[2] += 0.02373887240356083;
          result[3] += 0.35014836795252224;
          result[4] += 0.11275964391691394;
          result[5] += 0.35014836795252224;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.00209643605870021;
          result[1] += 0.9601677148846961;
          result[2] += 0;
          result[3] += 0.01048218029350105;
          result[4] += 0.01677148846960168;
          result[5] += 0.01048218029350105;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8081264108352144;
          result[1] += 0.030097817908201655;
          result[2] += 0.0007524454477050414;
          result[3] += 0.012791572610985704;
          result[4] += 0.10609480812641084;
          result[5] += 0.042136945071482315;
        } else {
          result[0] += 0.14446952595936793;
          result[1] += 0.040632054176072234;
          result[2] += 0.2528216704288939;
          result[3] += 0.2595936794582393;
          result[4] += 0.07223476297968397;
          result[5] += 0.23024830699774265;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0.2;
          result[3] += 0.2;
          result[4] += 0.26666666666666666;
          result[5] += 0.2;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.9230769230769231;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          result[0] += 0.018181818181818184;
          result[1] += 0.03636363636363637;
          result[2] += 0.14545454545454548;
          result[3] += 0.5636363636363637;
          result[4] += 0.018181818181818184;
          result[5] += 0.2181818181818182;
        } else {
          result[0] += 0.061224489795918366;
          result[1] += 0.02040816326530612;
          result[2] += 0.6122448979591837;
          result[3] += 0.20408163265306123;
          result[4] += 0;
          result[5] += 0.10204081632653061;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7616580310880829;
          result[3] += 0.22797927461139897;
          result[4] += 0;
          result[5] += 0.010362694300518135;
        } else {
          result[0] += 0.6470588235294118;
          result[1] += 0;
          result[2] += 0.35294117647058826;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0072992700729927005;
          result[1] += 0;
          result[2] += 0.8832116788321168;
          result[3] += 0.08759124087591241;
          result[4] += 0;
          result[5] += 0.021897810218978103;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9791666666666666;
          result[3] += 0.017361111111111112;
          result[4] += 0;
          result[5] += 0.003472222222222222;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9884393063583815;
          result[5] += 0.011560693641618497;
        } else {
          result[0] += 0.08490566037735849;
          result[1] += 0.018867924528301886;
          result[2] += 0.02830188679245283;
          result[3] += 0.09433962264150944;
          result[4] += 0.42452830188679247;
          result[5] += 0.3490566037735849;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.018558951965065504;
          result[2] += 0.001091703056768559;
          result[3] += 0.055676855895196505;
          result[4] += 0.048034934497816595;
          result[5] += 0.8766375545851528;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.032520325203252036;
          result[3] += 0.6910569105691057;
          result[4] += 0.008130081300813009;
          result[5] += 0.2682926829268293;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.03267973856209151;
          result[1] += 0.24183006535947715;
          result[2] += 0;
          result[3] += 0.013071895424836603;
          result[4] += 0.6666666666666667;
          result[5] += 0.04575163398692811;
        } else {
          result[0] += 0.6631578947368422;
          result[1] += 0.029824561403508774;
          result[2] += 0.026315789473684213;
          result[3] += 0.09064327485380118;
          result[4] += 0.06959064327485381;
          result[5] += 0.12046783625730996;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0.0022935779816513763;
          result[1] += 0.9931192660550459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045871559633027525;
          result[5] += 0;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
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
          result[2] += 0.17045454545454544;
          result[3] += 0.6931818181818182;
          result[4] += 0;
          result[5] += 0.13636363636363635;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.39473684210526316;
          result[3] += 0.02631578947368421;
          result[4] += 0.05263157894736842;
          result[5] += 0.5263157894736842;
        } else {
          result[0] += 0.0898876404494382;
          result[1] += 0;
          result[2] += 0.5056179775280899;
          result[3] += 0.3595505617977528;
          result[4] += 0;
          result[5] += 0.0449438202247191;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46808510638297873;
          result[3] += 0.23404255319148937;
          result[4] += 0;
          result[5] += 0.2978723404255319;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8488372093023255;
          result[3] += 0.12790697674418605;
          result[4] += 0;
          result[5] += 0.023255813953488372;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.35714285714285715;
          result[1] += 0;
          result[2] += 0.6428571428571429;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012311901504787962;
          result[1] += 0;
          result[2] += 0.9630642954856361;
          result[3] += 0.02051983584131327;
          result[4] += 0;
          result[5] += 0.004103967168262654;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.987012987012987;
          result[5] += 0.012987012987012988;
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
          result[0] += 0.032397408207343416;
          result[1] += 0.0032397408207343412;
          result[2] += 0.0010799136069114472;
          result[3] += 0.024838012958963283;
          result[4] += 0.05723542116630669;
          result[5] += 0.8812095032397408;
        } else {
          result[0] += 0.04294478527607362;
          result[1] += 0.018404907975460124;
          result[2] += 0.03067484662576687;
          result[3] += 0.44171779141104295;
          result[4] += 0.049079754601226995;
          result[5] += 0.4171779141104294;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.046511627906976744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9534883720930233;
          result[5] += 0;
        } else {
          result[0] += 0.0022988505747126436;
          result[1] += 0.9632183908045977;
          result[2] += 0;
          result[3] += 0.01839080459770115;
          result[4] += 0.016091954022988506;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7972027972027973;
          result[1] += 0.03574203574203575;
          result[2] += 0.0031080031080031084;
          result[3] += 0.017871017871017875;
          result[4] += 0.1118881118881119;
          result[5] += 0.0341880341880342;
        } else {
          result[0] += 0.23202614379084968;
          result[1] += 0.032679738562091505;
          result[2] += 0.1437908496732026;
          result[3] += 0.24183006535947713;
          result[4] += 0.042483660130718956;
          result[5] += 0.30718954248366015;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106) ) ) {
          result[0] += 0;
          result[1] += 0.057971014492753624;
          result[2] += 0.057971014492753624;
          result[3] += 0.21739130434782608;
          result[4] += 0.08695652173913043;
          result[5] += 0.5797101449275363;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.01282051282051282;
          result[2] += 0.11538461538461539;
          result[3] += 0.6666666666666666;
          result[4] += 0.05128205128205128;
          result[5] += 0.1282051282051282;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5757575757575758;
          result[3] += 0.3409090909090909;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.3793103448275862;
          result[1] += 0;
          result[2] += 0.4482758620689655;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0.002257336343115124;
          result[1] += 0;
          result[2] += 0.9108352144469526;
          result[3] += 0.07223476297968397;
          result[4] += 0.002257336343115124;
          result[5] += 0.012415349887133182;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          result[0] += 0.8421052631578949;
          result[1] += 0.05263157894736843;
          result[2] += 0.05263157894736843;
          result[3] += 0;
          result[4] += 0.05263157894736843;
          result[5] += 0;
        } else {
          result[0] += 0.11363636363636363;
          result[1] += 0;
          result[2] += 0.8863636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.7894736842105263;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21052631578947367;
          result[5] += 0;
        } else {
          result[0] += 0.02252252252252252;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9234234234234234;
          result[5] += 0.05405405405405406;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0.5454545454545454;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003592814371257485;
          result[2] += 0;
          result[3] += 0.037125748502994015;
          result[4] += 0.022754491017964073;
          result[5] += 0.9365269461077844;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96) ) ) {
          result[0] += 0.003424657534246575;
          result[1] += 0.02054794520547945;
          result[2] += 0.0136986301369863;
          result[3] += 0.5547945205479452;
          result[4] += 0.05821917808219178;
          result[5] += 0.3493150684931507;
        } else {
          result[0] += 0.057692307692307696;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.057692307692307696;
          result[4] += 0.09615384615384616;
          result[5] += 0.5384615384615384;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004830917874396135;
          result[1] += 0.9951690821256038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.09375;
          result[1] += 0.265625;
          result[2] += 0.00390625;
          result[3] += 0.046875;
          result[4] += 0.46875;
          result[5] += 0.12109375;
        } else {
          result[0] += 0.7632331902718169;
          result[1] += 0.008583690987124463;
          result[2] += 0.026466380543633764;
          result[3] += 0.06580829756795423;
          result[4] += 0.05507868383404864;
          result[5] += 0.08082975679542204;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20863309352517986;
          result[3] += 0.4460431654676259;
          result[4] += 0.014388489208633094;
          result[5] += 0.33093525179856115;
        } else {
          result[0] += 0.006711409395973154;
          result[1] += 0.040268456375838924;
          result[2] += 0.6442953020134228;
          result[3] += 0.21476510067114093;
          result[4] += 0;
          result[5] += 0.09395973154362416;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.2962962962962963;
          result[1] += 0.2222222222222222;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.25925925925925924;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.016357688113413305;
          result[1] += 0;
          result[2] += 0.9116684841875682;
          result[3] += 0.06324972737186478;
          result[4] += 0.0010905125408942203;
          result[5] += 0.007633587786259542;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
          result[0] += 0.01092896174863388;
          result[1] += 0.00546448087431694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9781420765027322;
          result[5] += 0.00546448087431694;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0.8372093023255814;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16279069767441862;
          result[5] += 0;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.08108108108108109;
          result[4] += 0.40540540540540543;
          result[5] += 0.4594594594594595;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0.19047619047619047;
          result[4] += 0.4523809523809524;
          result[5] += 0.2619047619047619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0010515247108307045;
          result[3] += 0.05993690851735016;
          result[4] += 0.029442691903259727;
          result[5] += 0.9095688748685594;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0.9032258064516129;
        } else {
          result[0] += 0.0056179775280898875;
          result[1] += 0;
          result[2] += 0.016853932584269662;
          result[3] += 0.7865168539325843;
          result[4] += 0.0056179775280898875;
          result[5] += 0.1853932584269663;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.05660377358490566;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9056603773584906;
          result[5] += 0.03773584905660377;
        } else {
          result[0] += 0;
          result[1] += 0.8695652173913043;
          result[2] += 0.021739130434782608;
          result[3] += 0;
          result[4] += 0.10869565217391304;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.9615384615384616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.038461538461538464;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
          result[0] += 0.6524390243902438;
          result[1] += 0.08384146341463414;
          result[2] += 0.015243902439024386;
          result[3] += 0.01219512195121951;
          result[4] += 0.2012195121951219;
          result[5] += 0.035060975609756094;
        } else {
          result[0] += 0.027522935779816515;
          result[1] += 0.01834862385321101;
          result[2] += 0.12232415902140673;
          result[3] += 0.3761467889908257;
          result[4] += 0.12538226299694188;
          result[5] += 0.3302752293577982;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          result[0] += 0.9210526315789473;
          result[1] += 0;
          result[2] += 0.03216374269005848;
          result[3] += 0.023391812865497075;
          result[4] += 0.008771929824561403;
          result[5] += 0.014619883040935672;
        } else {
          result[0] += 0.034545454545454546;
          result[1] += 0;
          result[2] += 0.8245454545454546;
          result[3] += 0.11090909090909092;
          result[4] += 0.0009090909090909091;
          result[5] += 0.02909090909090909;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0038461538461538464;
          result[1] += 0.04230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.926923076923077;
          result[5] += 0.026923076923076925;
        } else {
          result[0] += 0.494949494949495;
          result[1] += 0.04040404040404041;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08080808080808081;
          result[5] += 0.3838383838383838;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03970223325062035;
          result[4] += 0.031017369727047148;
          result[5] += 0.9292803970223326;
        } else {
          result[0] += 0.0028735632183908046;
          result[1] += 0.05747126436781609;
          result[2] += 0;
          result[3] += 0.39655172413793105;
          result[4] += 0.031609195402298854;
          result[5] += 0.5114942528735632;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.00702576112412178;
          result[1] += 0.9882903981264637;
          result[2] += 0;
          result[3] += 0.00234192037470726;
          result[4] += 0.00234192037470726;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.03611111111111111;
          result[2] += 0.08148148148148149;
          result[3] += 0.11851851851851852;
          result[4] += 0.17222222222222222;
          result[5] += 0.14722222222222223;
        } else {
          result[0] += 0.9395866454689984;
          result[1] += 0.012718600953895072;
          result[2] += 0.02384737678855326;
          result[3] += 0;
          result[4] += 0.02066772655007949;
          result[5] += 0.003179650238473768;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.037037037037037035;
          result[2] += 0.037037037037037035;
          result[3] += 0.1111111111111111;
          result[4] += 0.07407407407407407;
          result[5] += 0.7407407407407407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.7948717948717948;
          result[4] += 0;
          result[5] += 0.1282051282051282;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.42105263157894735;
          result[4] += 0;
          result[5] += 0.3684210526315789;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81.5) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.4393939393939394;
          result[4] += 0.015151515151515152;
          result[5] += 0.30303030303030304;
        } else {
          result[0] += 0.3728813559322034;
          result[1] += 0.01694915254237288;
          result[2] += 0.5932203389830508;
          result[3] += 0;
          result[4] += 0.01694915254237288;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.021276595744680854;
          result[1] += 0.014184397163120569;
          result[2] += 0.7695035460992908;
          result[3] += 0.1843971631205674;
          result[4] += 0;
          result[5] += 0.010638297872340427;
        } else {
          result[0] += 0.0016207455429497568;
          result[1] += 0;
          result[2] += 0.9627228525121556;
          result[3] += 0.03241491085899514;
          result[4] += 0;
          result[5] += 0.0032414910858995136;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004048582995951417;
          result[1] += 0.004048582995951417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9878542510121457;
          result[5] += 0.004048582995951417;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6071428571428571;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0.001303780964797914;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03129074315514994;
          result[4] += 0.02216427640156454;
          result[5] += 0.9452411994784876;
        } else {
          result[0] += 0.1323529411764706;
          result[1] += 0.008823529411764706;
          result[2] += 0.016176470588235296;
          result[3] += 0.34558823529411764;
          result[4] += 0.06911764705882353;
          result[5] += 0.4279411764705882;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.05;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.65;
          result[5] += 0;
        } else {
          result[0] += 0.0024390243902439024;
          result[1] += 0.9902439024390244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007317073170731708;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.05586592178770948;
          result[1] += 0.44692737430167584;
          result[2] += 0.016759776536312845;
          result[3] += 0.005586592178770949;
          result[4] += 0.45251396648044684;
          result[5] += 0.022346368715083796;
        } else {
          result[0] += 0.7128642501776832;
          result[1] += 0.0049751243781094535;
          result[2] += 0.09310589907604834;
          result[3] += 0.09239516702203271;
          result[4] += 0.041933191186922535;
          result[5] += 0.05472636815920399;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11392405063291139;
          result[3] += 0.2911392405063291;
          result[4] += 0.06329113924050633;
          result[5] += 0.5316455696202531;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.896551724137931;
          result[3] += 0.034482758620689655;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.9444444444444444;
        } else {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04651162790697675;
          result[1] += 0;
          result[2] += 0.7267441860465117;
          result[3] += 0.22674418604651164;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030864197530864196;
          result[1] += 0;
          result[2] += 0.9521604938271605;
          result[3] += 0.038580246913580245;
          result[4] += 0;
          result[5] += 0.006172839506172839;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.7692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.011049723756906077;
          result[1] += 0.027624309392265192;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9033149171270718;
          result[5] += 0.058011049723756904;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          result[0] += 0.581081081081081;
          result[1] += 0.12162162162162163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20270270270270271;
          result[5] += 0.0945945945945946;
        } else {
          result[0] += 0;
          result[1] += 0.004859086491739553;
          result[2] += 0;
          result[3] += 0.12730806608357628;
          result[4] += 0.03012633624878523;
          result[5] += 0.8377065111758989;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8573784006595219;
          result[1] += 0.020610057708161583;
          result[2] += 0.00741962077493817;
          result[3] += 0.025556471558120363;
          result[4] += 0.0585325638911789;
          result[5] += 0.030502885408079144;
        } else {
          result[0] += 0.15587529976019185;
          result[1] += 0.016786570743405275;
          result[2] += 0.09832134292565947;
          result[3] += 0.24700239808153476;
          result[4] += 0.11750599520383694;
          result[5] += 0.3645083932853717;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0.9230769230769231;
        } else {
          result[0] += 0;
          result[1] += 0.0196078431372549;
          result[2] += 0.10457516339869281;
          result[3] += 0.6339869281045751;
          result[4] += 0.026143790849673203;
          result[5] += 0.21568627450980393;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          result[0] += 0.03333333333333333;
          result[1] += 0.1;
          result[2] += 0.26666666666666666;
          result[3] += 0.06666666666666667;
          result[4] += 0.06666666666666667;
          result[5] += 0.4666666666666667;
        } else {
          result[0] += 0.013245033112582783;
          result[1] += 0.006622516556291392;
          result[2] += 0.6225165562913908;
          result[3] += 0.29139072847682124;
          result[4] += 0.013245033112582783;
          result[5] += 0.05298013245033113;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.95;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.029520295202952032;
          result[1] += 0.011070110701107012;
          result[2] += 0.7084870848708488;
          result[3] += 0.21402214022140223;
          result[4] += 0.003690036900369004;
          result[5] += 0.03321033210332104;
        } else {
          result[0] += 0.0015748031496062992;
          result[1] += 0;
          result[2] += 0.9511811023622048;
          result[3] += 0.04566929133858268;
          result[4] += 0;
          result[5] += 0.0015748031496062992;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0.004184100418410042;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9623430962343097;
          result[5] += 0.03347280334728034;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.031936127744510975;
          result[1] += 0.00499001996007984;
          result[2] += 0;
          result[3] += 0.05089820359281437;
          result[4] += 0.029940119760479042;
          result[5] += 0.8822355289421158;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012987012987012988;
          result[3] += 0.47186147186147187;
          result[4] += 0.04329004329004329;
          result[5] += 0.47186147186147187;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7361211247296323;
          result[1] += 0.05335255948089401;
          result[2] += 0.012256669069935111;
          result[3] += 0.023071377072819033;
          result[4] += 0.14419610670511895;
          result[5] += 0.031002162941600575;
        } else {
          result[0] += 0.16800000000000004;
          result[1] += 0.04266666666666667;
          result[2] += 0.19733333333333336;
          result[3] += 0.31200000000000006;
          result[4] += 0.10133333333333334;
          result[5] += 0.1786666666666667;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
          result[0] += 0.002469135802469136;
          result[1] += 0.9925925925925927;
          result[2] += 0;
          result[3] += 0.002469135802469136;
          result[4] += 0.002469135802469136;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04918032786885246;
          result[3] += 0.08196721311475409;
          result[4] += 0.09836065573770492;
          result[5] += 0.7704918032786885;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30952380952380953;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.6190476190476191;
        } else {
          result[0] += 0;
          result[1] += 0.022988505747126436;
          result[2] += 0.5287356321839081;
          result[3] += 0.3275862068965517;
          result[4] += 0.034482758620689655;
          result[5] += 0.08620689655172414;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103) ) ) {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.4;
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
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001191895113230036;
          result[1] += 0;
          result[2] += 0.9237187127532778;
          result[3] += 0.06674612634088202;
          result[4] += 0;
          result[5] += 0.008343265792610252;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.008368200836820083;
          result[1] += 0.0041841004184100415;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9246861924686193;
          result[5] += 0.06276150627615062;
        } else {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.32142857142857145;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024926686217008796;
          result[4] += 0.02785923753665689;
          result[5] += 0.9472140762463344;
        } else {
          result[0] += 0.07708333333333334;
          result[1] += 0.010416666666666666;
          result[2] += 0;
          result[3] += 0.35833333333333334;
          result[4] += 0.04375;
          result[5] += 0.5104166666666666;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.45454545454545453;
          result[5] += 0;
        } else {
          result[0] += 0.004796163069544364;
          result[1] += 0.9928057553956835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002398081534772182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7621082621082621;
          result[1] += 0.06766381766381767;
          result[2] += 0.009259259259259259;
          result[3] += 0.019943019943019943;
          result[4] += 0.11823361823361823;
          result[5] += 0.022792022792022793;
        } else {
          result[0] += 0.16473988439306358;
          result[1] += 0.031791907514450865;
          result[2] += 0.2254335260115607;
          result[3] += 0.25722543352601157;
          result[4] += 0.07225433526011561;
          result[5] += 0.24855491329479767;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08108108108108109;
          result[3] += 0;
          result[4] += 0.02702702702702703;
          result[5] += 0.8918918918918919;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38095238095238093;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10714285714285714;
          result[3] += 0.6607142857142857;
          result[4] += 0;
          result[5] += 0.23214285714285715;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3448275862068966;
          result[3] += 0.13793103448275862;
          result[4] += 0;
          result[5] += 0.5172413793103449;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0196078431372549;
          result[2] += 0.49019607843137253;
          result[3] += 0.4215686274509804;
          result[4] += 0;
          result[5] += 0.06862745098039216;
        } else {
          result[0] += 0.03663003663003663;
          result[1] += 0.02564102564102564;
          result[2] += 0.8058608058608059;
          result[3] += 0.09523809523809523;
          result[4] += 0.014652014652014652;
          result[5] += 0.02197802197802198;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0029895366218236174;
          result[1] += 0;
          result[2] += 0.9596412556053812;
          result[3] += 0.03139013452914798;
          result[4] += 0;
          result[5] += 0.005979073243647235;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.008771929824561403;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9342105263157895;
          result[5] += 0.05701754385964912;
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
          result[2] += 0.005148005148005148;
          result[3] += 0.04118404118404118;
          result[4] += 0.03732303732303732;
          result[5] += 0.9163449163449163;
        } else {
          result[0] += 0.10429447852760736;
          result[1] += 0.03680981595092025;
          result[2] += 0.03680981595092025;
          result[3] += 0.3496932515337423;
          result[4] += 0.05930470347648262;
          result[5] += 0.4130879345603272;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7572046109510084;
          result[1] += 0.01801152737752161;
          result[2] += 0.0014409221902017288;
          result[3] += 0.04034582132564841;
          result[4] += 0.14913544668587894;
          result[5] += 0.033861671469740624;
        } else {
          result[0] += 0.18138424821002386;
          result[1] += 0.0405727923627685;
          result[2] += 0.24821002386634844;
          result[3] += 0.2577565632458234;
          result[4] += 0.07398568019093078;
          result[5] += 0.19809069212410502;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0.058823529411764705;
          result[5] += 0.8235294117647058;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.6470588235294118;
          result[1] += 0;
          result[2] += 0.29411764705882354;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.04347826086956522;
          result[2] += 0.27536231884057977;
          result[3] += 0.5652173913043479;
          result[4] += 0;
          result[5] += 0.11594202898550726;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.725;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.075;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7695473251028807;
          result[3] += 0.2139917695473251;
          result[4] += 0;
          result[5] += 0.01646090534979424;
        } else {
          result[0] += 0.007776049766718507;
          result[1] += 0;
          result[2] += 0.9393468118195957;
          result[3] += 0.05287713841368585;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.981651376146789;
          result[5] += 0.01834862385321101;
        } else {
          result[0] += 0.4716981132075472;
          result[1] += 0;
          result[2] += 0.018867924528301886;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.1761006289308176;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013850415512465374;
          result[2] += 0;
          result[3] += 0.030470914127423823;
          result[4] += 0.037396121883656507;
          result[5] += 0.9307479224376731;
        } else {
          result[0] += 0.0037243947858473;
          result[1] += 0.01675977653631285;
          result[2] += 0.0111731843575419;
          result[3] += 0.3575418994413408;
          result[4] += 0.08752327746741155;
          result[5] += 0.5232774674115456;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          result[0] += 0.018518518518518517;
          result[1] += 0.12962962962962962;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8148148148148148;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.0020920502092050207;
          result[1] += 0.9811715481171548;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016736401673640166;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8567921440261866;
          result[1] += 0.03927986906710312;
          result[2] += 0.0016366612111292965;
          result[3] += 0.013093289689034372;
          result[4] += 0.0761047463175123;
          result[5] += 0.013093289689034372;
        } else {
          result[0] += 0.1752021563342318;
          result[1] += 0.01078167115902965;
          result[2] += 0.2749326145552561;
          result[3] += 0.25336927223719674;
          result[4] += 0.026954177897574125;
          result[5] += 0.2587601078167116;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34146341463414637;
          result[4] += 0;
          result[5] += 0.6585365853658537;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3620689655172414;
          result[3] += 0.5172413793103449;
          result[4] += 0;
          result[5] += 0.1206896551724138;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0.4722222222222222;
          result[3] += 0.4722222222222222;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.04888888888888889;
          result[1] += 0;
          result[2] += 0.8266666666666667;
          result[3] += 0.09333333333333334;
          result[4] += 0;
          result[5] += 0.03111111111111111;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8421052631578947;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)110) ) ) {
          result[0] += 0.002207505518763797;
          result[1] += 0;
          result[2] += 0.9448123620309051;
          result[3] += 0.052980132450331126;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956140350877193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0043859649122807015;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.2964824120603015;
          result[1] += 0.04020100502512563;
          result[2] += 0;
          result[3] += 0.002512562814070352;
          result[4] += 0.5979899497487438;
          result[5] += 0.06281407035175879;
        } else {
          result[0] += 0.007774538386783284;
          result[1] += 0.006802721088435374;
          result[2] += 0;
          result[3] += 0.1010689990281827;
          result[4] += 0.07094266277939747;
          result[5] += 0.8134110787172012;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          result[0] += 0.24430379746835443;
          result[1] += 0.021518987341772152;
          result[2] += 0.10253164556962026;
          result[3] += 0.31139240506329113;
          result[4] += 0.08354430379746836;
          result[5] += 0.23670886075949368;
        } else {
          result[0] += 0.78515625;
          result[1] += 0.052734375;
          result[2] += 0.0439453125;
          result[3] += 0.0263671875;
          result[4] += 0.080078125;
          result[5] += 0.01171875;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.05405405405405406;
          result[4] += 0.10810810810810811;
          result[5] += 0.7837837837837838;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08888888888888889;
          result[3] += 0.5777777777777777;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.10526315789473684;
          result[1] += 0.05263157894736842;
          result[2] += 0.5526315789473685;
          result[3] += 0.25263157894736843;
          result[4] += 0.010526315789473684;
          result[5] += 0.02631578947368421;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7947368421052632;
          result[3] += 0.17894736842105263;
          result[4] += 0;
          result[5] += 0.02631578947368421;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.010416666666666666;
          result[1] += 0;
          result[2] += 0.84375;
          result[3] += 0.14583333333333334;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9815157116451017;
          result[3] += 0.018484288354898338;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9324324324324325;
          result[5] += 0.06756756756756757;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.036275695284159616;
          result[4] += 0.049576783555018135;
          result[5] += 0.9141475211608222;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
          result[0] += 0.22560975609756098;
          result[1] += 0.17073170731707318;
          result[2] += 0;
          result[3] += 0.006097560975609756;
          result[4] += 0.5182926829268293;
          result[5] += 0.07926829268292683;
        } else {
          result[0] += 0;
          result[1] += 0.02466367713004484;
          result[2] += 0;
          result[3] += 0.4484304932735426;
          result[4] += 0.033632286995515695;
          result[5] += 0.49327354260089684;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7383246849518161;
          result[1] += 0.05782060785767235;
          result[2] += 0.0007412898443291327;
          result[3] += 0.02223869532987398;
          result[4] += 0.15492957746478872;
          result[5] += 0.025945144551519646;
        } else {
          result[0] += 0.1859903381642512;
          result[1] += 0.016908212560386472;
          result[2] += 0.21739130434782608;
          result[3] += 0.2536231884057971;
          result[4] += 0.04830917874396135;
          result[5] += 0.2777777777777778;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.6363636363636364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1466666666666667;
          result[3] += 0.7733333333333334;
          result[4] += 0;
          result[5] += 0.08000000000000002;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.14;
          result[4] += 0;
          result[5] += 0.06;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
          result[0] += 0.052132701421800945;
          result[1] += 0;
          result[2] += 0.7251184834123223;
          result[3] += 0.1848341232227488;
          result[4] += 0;
          result[5] += 0.037914691943127965;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6000000000000001;
          result[3] += 0.30000000000000004;
          result[4] += 0;
          result[5] += 0.10000000000000002;
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.00823045267489712;
          result[1] += 0.09053497942386832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0.3308270676691729;
          result[1] += 0.03007518796992481;
          result[2] += 0.045112781954887216;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.3082706766917293;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.0012135922330097086;
          result[2] += 0.0024271844660194173;
          result[3] += 0.04854368932038835;
          result[4] += 0.05946601941747573;
          result[5] += 0.8883495145631068;
        } else {
          result[0] += 0.02639296187683285;
          result[1] += 0.017595307917888568;
          result[2] += 0.008797653958944284;
          result[3] += 0.5337243401759532;
          result[4] += 0.029325513196480944;
          result[5] += 0.38416422287390034;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7774458551157581;
          result[1] += 0.06198655713218821;
          result[2] += 0.012696041822255416;
          result[3] += 0.025392083644510833;
          result[4] += 0.10380881254667663;
          result[5] += 0.018670649738610906;
        } else {
          result[0] += 0.13856812933025403;
          result[1] += 0.04157043879907621;
          result[2] += 0.15704387990762125;
          result[3] += 0.21016166281755197;
          result[4] += 0.08775981524249422;
          result[5] += 0.3648960739030023;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3305084745762712;
          result[3] += 0.5508474576271186;
          result[4] += 0;
          result[5] += 0.11864406779661017;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.25;
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
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02768166089965398;
          result[1] += 0;
          result[2] += 0.7993079584775087;
          result[3] += 0.14186851211072665;
          result[4] += 0;
          result[5] += 0.031141868512110725;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9828125;
          result[3] += 0.0171875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.01754385964912281;
          result[2] += 0.004385964912280702;
          result[3] += 0.008771929824561405;
          result[4] += 0.912280701754386;
          result[5] += 0.05701754385964913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002680965147453083;
          result[3] += 0.02680965147453083;
          result[4] += 0.03351206434316354;
          result[5] += 0.9369973190348525;
        } else {
          result[0] += 0.05732484076433121;
          result[1] += 0.03184713375796178;
          result[2] += 0.021231422505307854;
          result[3] += 0.32696390658174096;
          result[4] += 0.09129511677282377;
          result[5] += 0.4713375796178344;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.26;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.74;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9915433403805497;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008456659619450317;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8133935289691498;
          result[1] += 0.02558314522197141;
          result[2] += 0.012791572610985706;
          result[3] += 0.02558314522197141;
          result[4] += 0.08577878103837473;
          result[5] += 0.036869826937547034;
        } else {
          result[0] += 0.1412556053811659;
          result[1] += 0.02466367713004484;
          result[2] += 0.13901345291479822;
          result[3] += 0.25112107623318386;
          result[4] += 0.11659192825112108;
          result[5] += 0.3273542600896861;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0.6785714285714286;
        } else {
          result[0] += 0.08163265306122448;
          result[1] += 0;
          result[2] += 0.32653061224489793;
          result[3] += 0.4489795918367347;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.41379310344827586;
          result[3] += 0.5862068965517241;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.017857142857142853;
          result[1] += 0;
          result[2] += 0.7678571428571427;
          result[3] += 0.17499999999999996;
          result[4] += 0;
          result[5] += 0.03928571428571428;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8048780487804879;
          result[3] += 0.1951219512195122;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006600660066006602;
          result[1] += 0;
          result[2] += 0.9653465346534654;
          result[3] += 0.021452145214521455;
          result[4] += 0;
          result[5] += 0.006600660066006602;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0.8846153846153846;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11538461538461539;
          result[5] += 0;
        } else {
          result[0] += 0.0037453183520599256;
          result[1] += 0.01872659176029963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9363295880149813;
          result[5] += 0.04119850187265918;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8909090909090909;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10909090909090909;
          result[5] += 0;
        } else {
          result[0] += 0.005887300252312868;
          result[1] += 0.005046257359125316;
          result[2] += 0.017661900756938603;
          result[3] += 0.1581160639192599;
          result[4] += 0.04709840201850295;
          result[5] += 0.7661900756938604;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          result[0] += 0.015267175572519083;
          result[1] += 0.24427480916030533;
          result[2] += 0.03816793893129771;
          result[3] += 0.015267175572519083;
          result[4] += 0.6183206106870229;
          result[5] += 0.06870229007633588;
        } else {
          result[0] += 0.0048543689320388345;
          result[1] += 0.9951456310679612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8158756137479543;
          result[1] += 0.04500818330605565;
          result[2] += 0.0016366612111292965;
          result[3] += 0.02782324058919804;
          result[4] += 0.07446808510638299;
          result[5] += 0.03518821603927988;
        } else {
          result[0] += 0.23964497041420119;
          result[1] += 0.026627218934911243;
          result[2] += 0.1863905325443787;
          result[3] += 0.3136094674556213;
          result[4] += 0.03550295857988166;
          result[5] += 0.19822485207100593;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.15789473684210525;
          result[5] += 0.7894736842105263;
        } else {
          result[0] += 0;
          result[1] += 0.09876543209876544;
          result[2] += 0.07407407407407408;
          result[3] += 0.54320987654321;
          result[4] += 0.01234567901234568;
          result[5] += 0.271604938271605;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.07017543859649122;
          result[1] += 0;
          result[2] += 0.631578947368421;
          result[3] += 0.07017543859649122;
          result[4] += 0.017543859649122806;
          result[5] += 0.21052631578947367;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.6304347826086957;
          result[4] += 0;
          result[5] += 0.13043478260869565;
        } else {
          result[0] += 0.041237113402061855;
          result[1] += 0;
          result[2] += 0.6597938144329897;
          result[3] += 0.27835051546391754;
          result[4] += 0;
          result[5] += 0.020618556701030927;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.07981220657276995;
          result[1] += 0;
          result[2] += 0.7370892018779343;
          result[3] += 0.14553990610328638;
          result[4] += 0;
          result[5] += 0.03755868544600939;
        } else {
          result[0] += 0.001579778830963665;
          result[1] += 0;
          result[2] += 0.9478672985781991;
          result[3] += 0.045813586097946286;
          result[4] += 0;
          result[5] += 0.004739336492890996;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.015306122448979591;
          result[1] += 0.01020408163265306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9489795918367347;
          result[5] += 0.025510204081632654;
        } else {
          result[0] += 0.5522388059701493;
          result[1] += 0.13432835820895522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19402985074626866;
          result[5] += 0.11940298507462686;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.016824395373291272;
          result[2] += 0;
          result[3] += 0.04942166140904311;
          result[4] += 0.060988433228180865;
          result[5] += 0.8727655099894848;
        } else {
          result[0] += 0.003236245954692557;
          result[1] += 0.006472491909385114;
          result[2] += 0.045307443365695796;
          result[3] += 0.4627831715210356;
          result[4] += 0.04854368932038835;
          result[5] += 0.4336569579288026;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.05000000000000001;
          result[1] += 0.1416666666666667;
          result[2] += 0;
          result[3] += 0.04166666666666667;
          result[4] += 0.7333333333333334;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0.9817767653758542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018223234624145785;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0.14093959731543623;
          result[1] += 0.04697986577181208;
          result[2] += 0.006711409395973154;
          result[3] += 0.2751677852348993;
          result[4] += 0.15436241610738255;
          result[5] += 0.37583892617449666;
        } else {
          result[0] += 0.7618715083798883;
          result[1] += 0.02863128491620112;
          result[2] += 0.05377094972067039;
          result[3] += 0.05726256983240224;
          result[4] += 0.06773743016759777;
          result[5] += 0.030726256983240222;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666669;
          result[2] += 0;
          result[3] += 0.5000000000000001;
          result[4] += 0.16666666666666669;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.044444444444444446;
          result[3] += 0.06666666666666667;
          result[4] += 0.022222222222222223;
          result[5] += 0.8666666666666667;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09859154929577464;
          result[3] += 0.6338028169014085;
          result[4] += 0;
          result[5] += 0.2676056338028169;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0.16666666666666666;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.025862068965517244;
          result[1] += 0.008620689655172415;
          result[2] += 0.5086206896551725;
          result[3] += 0.30172413793103453;
          result[4] += 0;
          result[5] += 0.15517241379310348;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7175925925925927;
          result[3] += 0.26388888888888895;
          result[4] += 0;
          result[5] += 0.01851851851851852;
        } else {
          result[0] += 0.011764705882352941;
          result[1] += 0;
          result[2] += 0.9308823529411765;
          result[3] += 0.051470588235294115;
          result[4] += 0;
          result[5] += 0.0058823529411764705;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9780701754385965;
          result[5] += 0.013157894736842105;
        } else {
          result[0] += 0.49411764705882355;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3235294117647059;
          result[5] += 0.18235294117647058;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.007438894792773645;
          result[2] += 0;
          result[3] += 0.05100956429330499;
          result[4] += 0.07120085015940489;
          result[5] += 0.8703506907545164;
        } else {
          result[0] += 0.0072992700729927005;
          result[1] += 0.01824817518248175;
          result[2] += 0.021897810218978103;
          result[3] += 0.5328467153284672;
          result[4] += 0.05474452554744526;
          result[5] += 0.36496350364963503;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
          result[0] += 0.0022471910112359553;
          result[1] += 0.9820224719101124;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015730337078651686;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3225806451612903;
          result[2] += 0;
          result[3] += 0.021505376344086023;
          result[4] += 0.6559139784946236;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8816254416961131;
          result[1] += 0.030035335689045935;
          result[2] += 0;
          result[3] += 0.01678445229681979;
          result[4] += 0.0627208480565371;
          result[5] += 0.0088339222614841;
        } else {
          result[0] += 0.29460580912863066;
          result[1] += 0.012448132780082983;
          result[2] += 0.2448132780082987;
          result[3] += 0.1701244813278008;
          result[4] += 0.04979253112033193;
          result[5] += 0.2282157676348547;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.024844720496894408;
          result[2] += 0.055900621118012424;
          result[3] += 0.4968944099378882;
          result[4] += 0.043478260869565216;
          result[5] += 0.37888198757763975;
        } else {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0.15;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.018518518518518517;
          result[2] += 0.4444444444444444;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.48148148148148145;
        } else {
          result[0] += 0.2;
          result[1] += 0.022222222222222223;
          result[2] += 0.6444444444444445;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)111.5) ) ) {
          result[0] += 0.26315789473684215;
          result[1] += 0;
          result[2] += 0.6315789473684211;
          result[3] += 0.07894736842105264;
          result[4] += 0.026315789473684213;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32558139534883723;
          result[3] += 0.3023255813953488;
          result[4] += 0;
          result[5] += 0.37209302325581395;
        } else {
          result[0] += 0.004310344827586207;
          result[1] += 0;
          result[2] += 0.896551724137931;
          result[3] += 0.09590517241379311;
          result[4] += 0;
          result[5] += 0.003232758620689655;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011583011583011582;
          result[3] += 0;
          result[4] += 0.9768339768339769;
          result[5] += 0.011583011583011582;
        } else {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03679369250985545;
          result[4] += 0.03810775295663601;
          result[5] += 0.9250985545335085;
        } else {
          result[0] += 0.12099644128113879;
          result[1] += 0.0071174377224199285;
          result[2] += 0.005338078291814947;
          result[3] += 0.33807829181494664;
          result[4] += 0.05338078291814947;
          result[5] += 0.4750889679715303;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9907192575406032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009280742459396751;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4380165289256198;
          result[2] += 0;
          result[3] += 0.008264462809917356;
          result[4] += 0.5289256198347108;
          result[5] += 0.024793388429752067;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8583403185247276;
          result[1] += 0.03352891869237217;
          result[2] += 0.00586756077116513;
          result[3] += 0.019279128248113998;
          result[4] += 0.06621961441743504;
          result[5] += 0.016764459346186086;
        } else {
          result[0] += 0.2253968253968254;
          result[1] += 0.0031746031746031746;
          result[2] += 0.15555555555555556;
          result[3] += 0.24761904761904763;
          result[4] += 0.09206349206349207;
          result[5] += 0.2761904761904762;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0975609756097561;
          result[3] += 0.7154471544715447;
          result[4] += 0.008130081300813009;
          result[5] += 0.17886178861788618;
        } else {
          result[0] += 0.07216494845360825;
          result[1] += 0;
          result[2] += 0.5051546391752578;
          result[3] += 0.288659793814433;
          result[4] += 0;
          result[5] += 0.13402061855670105;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9038461538461539;
          result[3] += 0.057692307692307696;
          result[4] += 0;
          result[5] += 0.038461538461538464;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25925925925925924;
          result[3] += 0.25925925925925924;
          result[4] += 0;
          result[5] += 0.48148148148148145;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.855072463768116;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0.057971014492753624;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7241379310344828;
          result[3] += 0.27586206896551724;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012903225806451613;
          result[1] += 0;
          result[2] += 0.9406451612903226;
          result[3] += 0.04129032258064516;
          result[4] += 0;
          result[5] += 0.005161290322580645;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.04602510460251046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9121338912133892;
          result[5] += 0.04184100418410042;
        } else {
          result[0] += 0.01694915254237288;
          result[1] += 0.06779661016949153;
          result[2] += 0;
          result[3] += 0.05084745762711865;
          result[4] += 0.3728813559322034;
          result[5] += 0.4915254237288136;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0.01288659793814433;
          result[1] += 0.001288659793814433;
          result[2] += 0;
          result[3] += 0.05283505154639175;
          result[4] += 0.04381443298969072;
          result[5] += 0.8891752577319587;
        } else {
          result[0] += 0.08590308370044053;
          result[1] += 0.004405286343612335;
          result[2] += 0.05286343612334802;
          result[3] += 0.3568281938325991;
          result[4] += 0.09251101321585903;
          result[5] += 0.40748898678414097;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0.00211864406779661;
          result[1] += 0.9745762711864406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023305084745762712;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7764976958525346;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.03917050691244239;
          result[4] += 0.09370199692780339;
          result[5] += 0.05837173579109063;
        } else {
          result[0] += 0.2354948805460751;
          result[1] += 0.017064846416382253;
          result[2] += 0.24232081911262798;
          result[3] += 0.2525597269624573;
          result[4] += 0.10921501706484642;
          result[5] += 0.14334470989761092;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.025;
          result[4] += 0;
          result[5] += 0.925;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08536585365853659;
          result[3] += 0.573170731707317;
          result[4] += 0.024390243902439025;
          result[5] += 0.3170731707317073;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5666666666666667;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.36666666666666664;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0.10606060606060606;
          result[2] += 0.30303030303030304;
          result[3] += 0.25757575757575757;
          result[4] += 0;
          result[5] += 0.2878787878787879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7075471698113208;
          result[3] += 0.26415094339622647;
          result[4] += 0;
          result[5] += 0.028301886792452834;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.65;
        } else {
          result[0] += 0.017667844522968202;
          result[1] += 0.00706713780918728;
          result[2] += 0.9163722025912839;
          result[3] += 0.057714958775029454;
          result[4] += 0;
          result[5] += 0.0011778563015312133;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83.5) ) ) {
          result[0] += 0.054901960784313725;
          result[1] += 0.00784313725490196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8431372549019608;
          result[5] += 0.09411764705882353;
        } else {
          result[0] += 0.5829787234042553;
          result[1] += 0.01702127659574468;
          result[2] += 0;
          result[3] += 0.00425531914893617;
          result[4] += 0.32340425531914896;
          result[5] += 0.07234042553191489;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.36619718309859156;
          result[2] += 0.014084507042253521;
          result[3] += 0.056338028169014086;
          result[4] += 0.39436619718309857;
          result[5] += 0.16901408450704225;
        } else {
          result[0] += 0.003686635944700461;
          result[1] += 0.0027649769585253456;
          result[2] += 0.013824884792626729;
          result[3] += 0.11889400921658987;
          result[4] += 0.04423963133640553;
          result[5] += 0.8165898617511521;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9904076738609112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009592326139088728;
          result[5] += 0;
        } else {
          result[0] += 0.04597701149425287;
          result[1] += 0.26436781609195403;
          result[2] += 0;
          result[3] += 0.12643678160919541;
          result[4] += 0.5402298850574713;
          result[5] += 0.022988505747126436;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8976744186046511;
          result[1] += 0.013023255813953489;
          result[2] += 0.0065116279069767444;
          result[3] += 0.024186046511627906;
          result[4] += 0.04744186046511628;
          result[5] += 0.011162790697674419;
        } else {
          result[0] += 0.1426056338028169;
          result[1] += 0.05457746478873239;
          result[2] += 0.1936619718309859;
          result[3] += 0.3274647887323944;
          result[4] += 0.06866197183098592;
          result[5] += 0.2130281690140845;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05128205128205128;
          result[3] += 0;
          result[4] += 0.358974358974359;
          result[5] += 0.5897435897435898;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06976744186046512;
          result[3] += 0.627906976744186;
          result[4] += 0.023255813953488372;
          result[5] += 0.27906976744186046;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0.03225806451612904;
          result[1] += 0;
          result[2] += 0.8064516129032259;
          result[3] += 0;
          result[4] += 0.03225806451612904;
          result[5] += 0.12903225806451615;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.01639344262295082;
          result[2] += 0.5409836065573771;
          result[3] += 0.4098360655737705;
          result[4] += 0;
          result[5] += 0.03278688524590164;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7926829268292683;
          result[3] += 0.18902439024390244;
          result[4] += 0;
          result[5] += 0.018292682926829267;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0029542097488921715;
          result[1] += 0;
          result[2] += 0.9527326440177253;
          result[3] += 0.033973412112259974;
          result[4] += 0;
          result[5] += 0.0103397341211226;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9563636363636364;
          result[5] += 0.04363636363636364;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04377431906614786;
          result[1] += 0.006809338521400778;
          result[2] += 0.0009727626459143969;
          result[3] += 0.07198443579766536;
          result[4] += 0.07392996108949416;
          result[5] += 0.8025291828793775;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021897810218978103;
          result[3] += 0.7445255474452555;
          result[4] += 0.0072992700729927005;
          result[5] += 0.22627737226277372;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.24489795918367346;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7551020408163265;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9761904761904762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023809523809523808;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0.2572463768115942;
          result[1] += 0.06521739130434782;
          result[2] += 0.010869565217391304;
          result[3] += 0.213768115942029;
          result[4] += 0.11956521739130435;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.8016975308641976;
          result[1] += 0.027006172839506175;
          result[2] += 0.014660493827160495;
          result[3] += 0.027006172839506175;
          result[4] += 0.1080246913580247;
          result[5] += 0.02160493827160494;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.21818181818181817;
          result[3] += 0.21818181818181817;
          result[4] += 0.05454545454545454;
          result[5] += 0.4909090909090909;
        } else {
          result[0] += 0.019417475728155338;
          result[1] += 0;
          result[2] += 0.05825242718446602;
          result[3] += 0.6796116504854369;
          result[4] += 0;
          result[5] += 0.24271844660194175;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.6875;
          result[4] += 0;
          result[5] += 0.1875;
        } else {
          result[0] += 0.024793388429752067;
          result[1] += 0;
          result[2] += 0.7107438016528925;
          result[3] += 0.2066115702479339;
          result[4] += 0.008264462809917356;
          result[5] += 0.049586776859504134;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0.43478260869565216;
        } else {
          result[0] += 0.042316258351893093;
          result[1] += 0.0066815144766146995;
          result[2] += 0.821826280623608;
          result[3] += 0.11358574610244988;
          result[4] += 0;
          result[5] += 0.015590200445434299;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9818181818181818;
          result[3] += 0.01818181818181818;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9818181818181818;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.016666666666666666;
          result[4] += 0.75;
          result[5] += 0.23333333333333334;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005319148936170213;
          result[3] += 0.02925531914893617;
          result[4] += 0.02127659574468085;
          result[5] += 0.9441489361702128;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9242424242424242;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07575757575757576;
          result[5] += 0;
        } else {
          result[0] += 0.008488964346349746;
          result[1] += 0.015280135823429542;
          result[2] += 0.0050933786078098476;
          result[3] += 0.3599320882852292;
          result[4] += 0.0899830220713073;
          result[5] += 0.5212224108658744;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0.05844155844155844;
          result[1] += 0.4090909090909091;
          result[2] += 0;
          result[3] += 0.025974025974025976;
          result[4] += 0.5;
          result[5] += 0.006493506493506494;
        } else {
          result[0] += 0.005115089514066497;
          result[1] += 0.989769820971867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005115089514066497;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8803418803418803;
          result[1] += 0.028205128205128206;
          result[2] += 0.002564102564102564;
          result[3] += 0.011965811965811967;
          result[4] += 0.06068376068376068;
          result[5] += 0.01623931623931624;
        } else {
          result[0] += 0.41919191919191917;
          result[1] += 0.015151515151515152;
          result[2] += 0.11616161616161616;
          result[3] += 0.25757575757575757;
          result[4] += 0.07575757575757576;
          result[5] += 0.11616161616161616;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
          result[0] += 0.01875;
          result[1] += 0.075;
          result[2] += 0.10625;
          result[3] += 0.43125;
          result[4] += 0.0625;
          result[5] += 0.30625;
        } else {
          result[0] += 0.03676470588235294;
          result[1] += 0;
          result[2] += 0.5808823529411765;
          result[3] += 0.20588235294117646;
          result[4] += 0.029411764705882353;
          result[5] += 0.14705882352941177;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0.054313099041533544;
          result[1] += 0.019169329073482427;
          result[2] += 0.6964856230031949;
          result[3] += 0.18849840255591055;
          result[4] += 0;
          result[5] += 0.04153354632587859;
        } else {
          result[0] += 0.004885993485342019;
          result[1] += 0;
          result[2] += 0.9625407166123778;
          result[3] += 0.03257328990228013;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.027874564459930314;
          result[1] += 0.017421602787456445;
          result[2] += 0.003484320557491289;
          result[3] += 0.013937282229965157;
          result[4] += 0.8606271777003485;
          result[5] += 0.07665505226480836;
        } else {
          result[0] += 0.6666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011111111111111113;
          result[4] += 0.16111111111111115;
          result[5] += 0.16111111111111115;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011095700416088766;
          result[3] += 0.0319001386962552;
          result[4] += 0.04854368932038835;
          result[5] += 0.9084604715672677;
        } else {
          result[0] += 0.007281553398058253;
          result[1] += 0.014563106796116505;
          result[2] += 0.0048543689320388345;
          result[3] += 0.308252427184466;
          result[4] += 0.15048543689320387;
          result[5] += 0.5145631067961165;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.5866666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.0024630541871921183;
          result[1] += 0.9901477832512315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007389162561576354;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8247978436657682;
          result[1] += 0.03504043126684636;
          result[2] += 0.01078167115902965;
          result[3] += 0.03324348607367475;
          result[4] += 0.055705300988319856;
          result[5] += 0.04043126684636118;
        } else {
          result[0] += 0.18051575931232092;
          result[1] += 0.011461318051575931;
          result[2] += 0.1833810888252149;
          result[3] += 0.38108882521489973;
          result[4] += 0.04011461318051576;
          result[5] += 0.2034383954154728;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08024691358024692;
          result[3] += 0.40740740740740744;
          result[4] += 0.01851851851851852;
          result[5] += 0.4938271604938272;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.21428571428571427;
          result[5] += 0.5357142857142857;
        } else {
          result[0] += 0.007042253521126761;
          result[1] += 0;
          result[2] += 0.6338028169014085;
          result[3] += 0.34507042253521125;
          result[4] += 0;
          result[5] += 0.014084507042253521;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.01533406352683461;
          result[1] += 0;
          result[2] += 0.9342825848849945;
          result[3] += 0.047097480832420595;
          result[4] += 0;
          result[5] += 0.0032858707557502738;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.005076142131979695;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9898477157360406;
          result[5] += 0.005076142131979695;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018518518518518517;
          result[4] += 0.7777777777777778;
          result[5] += 0.2037037037037037;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
          result[0] += 0.11111111111111112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666667;
          result[5] += 0.22222222222222224;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0450070323488045;
          result[4] += 0.014064697609001406;
          result[5] += 0.9409282700421941;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.1188118811881188;
          result[1] += 0.04950495049504951;
          result[2] += 0.026402640264026403;
          result[3] += 0.11551155115511551;
          result[4] += 0.06930693069306931;
          result[5] += 0.6204620462046204;
        } else {
          result[0] += 0;
          result[1] += 0.026666666666666672;
          result[2] += 0.03555555555555556;
          result[3] += 0.5955555555555556;
          result[4] += 0;
          result[5] += 0.34222222222222226;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
          result[0] += 0.03428571428571429;
          result[1] += 0.18285714285714286;
          result[2] += 0.011428571428571429;
          result[3] += 0.005714285714285714;
          result[4] += 0.7371428571428571;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0.19254658385093168;
          result[1] += 0.09316770186335403;
          result[2] += 0.018633540372670808;
          result[3] += 0.2608695652173913;
          result[4] += 0.18633540372670807;
          result[5] += 0.2484472049689441;
        } else {
          result[0] += 0.8129829984544049;
          result[1] += 0.02936630602782071;
          result[2] += 0.030911901081916538;
          result[3] += 0.03245749613601236;
          result[4] += 0.06723338485316847;
          result[5] += 0.02704791344667697;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.033707865168539325;
          result[1] += 0.06741573033707865;
          result[2] += 0.0898876404494382;
          result[3] += 0.011235955056179775;
          result[4] += 0.0898876404494382;
          result[5] += 0.7078651685393258;
        } else {
          result[0] += 0.01932367149758454;
          result[1] += 0.014492753623188406;
          result[2] += 0.3526570048309179;
          result[3] += 0.40096618357487923;
          result[4] += 0.024154589371980676;
          result[5] += 0.18840579710144928;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.032188841201716736;
          result[1] += 0;
          result[2] += 0.796137339055794;
          result[3] += 0.15236051502145923;
          result[4] += 0;
          result[5] += 0.019313304721030045;
        } else {
          result[0] += 0.0038167938931297713;
          result[1] += 0;
          result[2] += 0.9751908396946566;
          result[3] += 0.017175572519083974;
          result[4] += 0;
          result[5] += 0.0038167938931297713;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.00975609756097561;
          result[1] += 0.00975609756097561;
          result[2] += 0;
          result[3] += 0.004878048780487805;
          result[4] += 0.9365853658536586;
          result[5] += 0.03902439024390244;
        } else {
          result[0] += 0.03125;
          result[1] += 0.03125;
          result[2] += 0.09375;
          result[3] += 0.0625;
          result[4] += 0.4375;
          result[5] += 0.34375;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.01544943820224719;
          result[2] += 0;
          result[3] += 0.046348314606741575;
          result[4] += 0.01544943820224719;
          result[5] += 0.922752808988764;
        } else {
          result[0] += 0.08710801393728224;
          result[1] += 0.02264808362369338;
          result[2] += 0.005226480836236934;
          result[3] += 0.32752613240418116;
          result[4] += 0.07665505226480836;
          result[5] += 0.4808362369337979;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.997737556561086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022624434389140274;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7848882035466461;
          result[1] += 0.015420200462606014;
          result[2] += 0.005397070161912105;
          result[3] += 0.018504240555127217;
          result[4] += 0.14109483423284502;
          result[5] += 0.03469545104086353;
        } else {
          result[0] += 0.22244897959183674;
          result[1] += 0.04081632653061224;
          result[2] += 0.20204081632653062;
          result[3] += 0.2510204081632653;
          result[4] += 0.06326530612244897;
          result[5] += 0.22040816326530613;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.9117647058823529;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2962962962962963;
          result[3] += 0.25925925925925924;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8714285714285714;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.041176470588235294;
          result[1] += 0;
          result[2] += 0.7058823529411765;
          result[3] += 0.18823529411764706;
          result[4] += 0;
          result[5] += 0.06470588235294118;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9215686274509803;
          result[3] += 0.0784313725490196;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8703703703703705;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.01851851851851852;
        } else {
          result[0] += 0.006423982869379015;
          result[1] += 0;
          result[2] += 0.987152034261242;
          result[3] += 0.004282655246252677;
          result[4] += 0;
          result[5] += 0.0021413276231263384;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00904977375565611;
          result[3] += 0;
          result[4] += 0.9592760180995475;
          result[5] += 0.03167420814479638;
        } else {
          result[0] += 0;
          result[1] += 0.6363636363636364;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.18181818181818182;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02531645569620253;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04833141542002301;
          result[4] += 0.05063291139240506;
          result[5] += 0.8757192174913694;
        } else {
          result[0] += 0.09018567639257294;
          result[1] += 0.03713527851458886;
          result[2] += 0.002652519893899204;
          result[3] += 0.41909814323607425;
          result[4] += 0.03183023872679045;
          result[5] += 0.41909814323607425;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7476835352815396;
          result[1] += 0.049180327868852465;
          result[2] += 0.012829650748396296;
          result[3] += 0.024946543121881687;
          result[4] += 0.15253029223093373;
          result[5] += 0.012829650748396296;
        } else {
          result[0] += 0.13559322033898305;
          result[1] += 0.01694915254237288;
          result[2] += 0.2076271186440678;
          result[3] += 0.2923728813559322;
          result[4] += 0.08898305084745763;
          result[5] += 0.2584745762711864;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0.9777227722772277;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017326732673267328;
          result[5] += 0.0049504950495049506;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20000000000000004;
          result[3] += 0;
          result[4] += 0.7000000000000001;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.15476190476190477;
          result[4] += 0.023809523809523808;
          result[5] += 0.7380952380952381;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.023333333333333338;
          result[1] += 0;
          result[2] += 0.7100000000000001;
          result[3] += 0.23333333333333336;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0.0031397174254317113;
          result[1] += 0;
          result[2] += 0.9638932496075353;
          result[3] += 0.0282574568288854;
          result[4] += 0;
          result[5] += 0.004709576138147566;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
          result[4] += 0.625;
          result[5] += 0.375;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9800995024875622;
          result[5] += 0.01990049751243781;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
          result[0] += 0.004914004914004914;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029484029484029485;
          result[4] += 0.03931203931203931;
          result[5] += 0.9262899262899262;
        } else {
          result[0] += 0.19718309859154928;
          result[1] += 0.028169014084507043;
          result[2] += 0.014084507042253521;
          result[3] += 0.04225352112676056;
          result[4] += 0.2676056338028169;
          result[5] += 0.4507042253521127;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
          result[0] += 0.13478260869565217;
          result[1] += 0.004347826086956522;
          result[2] += 0.06956521739130435;
          result[3] += 0.24347826086956523;
          result[4] += 0.08260869565217391;
          result[5] += 0.4652173913043478;
        } else {
          result[0] += 0;
          result[1] += 0.03980099502487562;
          result[2] += 0.03482587064676617;
          result[3] += 0.6915422885572139;
          result[4] += 0.004975124378109453;
          result[5] += 0.22885572139303484;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)70.5) ) ) {
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
          result[0] += 0.1320754716981132;
          result[1] += 0.012578616352201259;
          result[2] += 0.006289308176100629;
          result[3] += 0.2389937106918239;
          result[4] += 0.13836477987421383;
          result[5] += 0.4716981132075472;
        } else {
          result[0] += 0.7559224694903087;
          result[1] += 0.04450825556353195;
          result[2] += 0.006460875807609476;
          result[3] += 0.03374012921751615;
          result[4] += 0.12419239052404882;
          result[5] += 0.035175879396984924;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2635135135135135;
          result[3] += 0.5067567567567568;
          result[4] += 0.006756756756756757;
          result[5] += 0.22297297297297297;
        } else {
          result[0] += 0.03054101221640489;
          result[1] += 0.003490401396160559;
          result[2] += 0.8080279232111693;
          result[3] += 0.09773123909249565;
          result[4] += 0.004363001745200699;
          result[5] += 0.05584642233856894;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.01098901098901099;
          result[1] += 0.014652014652014652;
          result[2] += 0.02197802197802198;
          result[3] += 0.003663003663003663;
          result[4] += 0.8791208791208791;
          result[5] += 0.0695970695970696;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.022779043280182234;
          result[1] += 0.0011389521640091116;
          result[2] += 0;
          result[3] += 0.04441913439635535;
          result[4] += 0.04100227790432802;
          result[5] += 0.8906605922551253;
        } else {
          result[0] += 0.006289308176100629;
          result[1] += 0.006289308176100629;
          result[2] += 0.006289308176100629;
          result[3] += 0.5974842767295597;
          result[4] += 0.018867924528301886;
          result[5] += 0.36477987421383645;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956989247311828;
          result[2] += 0;
          result[3] += 0.004301075268817204;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0.11581920903954802;
          result[1] += 0.07062146892655367;
          result[2] += 0.059322033898305086;
          result[3] += 0.1751412429378531;
          result[4] += 0.16666666666666666;
          result[5] += 0.4124293785310734;
        } else {
          result[0] += 0.738831615120275;
          result[1] += 0.03505154639175258;
          result[2] += 0.028178694158075602;
          result[3] += 0.0577319587628866;
          result[4] += 0.10584192439862543;
          result[5] += 0.03436426116838488;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7547169811320755;
          result[4] += 0.018867924528301886;
          result[5] += 0.22641509433962265;
        } else {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0.1388888888888889;
          result[3] += 0.3333333333333333;
          result[4] += 0.027777777777777776;
          result[5] += 0.4444444444444444;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.0078125;
          result[2] += 0.1796875;
          result[3] += 0.25;
          result[4] += 0.125;
          result[5] += 0.4375;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0;
          result[2] += 0.7363636363636363;
          result[3] += 0.06363636363636363;
          result[4] += 0.01818181818181818;
          result[5] += 0.14545454545454545;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
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
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.021844660194174758;
          result[1] += 0;
          result[2] += 0.7961165048543689;
          result[3] += 0.16019417475728157;
          result[4] += 0.0048543689320388345;
          result[5] += 0.01699029126213592;
        } else {
          result[0] += 0.006369426751592357;
          result[1] += 0;
          result[2] += 0.970276008492569;
          result[3] += 0.021231422505307854;
          result[4] += 0;
          result[5] += 0.0021231422505307855;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9836734693877551;
          result[5] += 0.0163265306122449;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04595404595404595;
          result[1] += 0.006993006993006993;
          result[2] += 0.006993006993006993;
          result[3] += 0.04095904095904096;
          result[4] += 0.03996003996003996;
          result[5] += 0.8591408591408591;
        } else {
          result[0] += 0.004291845493562232;
          result[1] += 0.008583690987124463;
          result[2] += 0;
          result[3] += 0.5536480686695279;
          result[4] += 0.04721030042918455;
          result[5] += 0.38626609442060084;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.13043478260869565;
          result[1] += 0.17391304347826086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6521739130434783;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0.002544529262086514;
          result[1] += 0.9974554707379135;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7177954847277558;
          result[1] += 0.06706507304116867;
          result[2] += 0.01925630810092962;
          result[3] += 0.03917662682602922;
          result[4] += 0.12151394422310759;
          result[5] += 0.035192563081009307;
        } else {
          result[0] += 0.14545454545454545;
          result[1] += 0;
          result[2] += 0.2883116883116883;
          result[3] += 0.34285714285714286;
          result[4] += 0.05194805194805195;
          result[5] += 0.17142857142857143;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0.9411764705882353;
          result[2] += 0;
          result[3] += 0.058823529411764705;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.012345679012345678;
          result[2] += 0.09876543209876543;
          result[3] += 0.2345679012345679;
          result[4] += 0.07407407407407407;
          result[5] += 0.5802469135802469;
        } else {
          result[0] += 0.10000000000000002;
          result[1] += 0;
          result[2] += 0.6000000000000001;
          result[3] += 0.18000000000000002;
          result[4] += 0;
          result[5] += 0.12000000000000001;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5333333333333333;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0.00819672131147541;
          result[1] += 0;
          result[2] += 0.914519906323185;
          result[3] += 0.07259953161592506;
          result[4] += 0;
          result[5] += 0.00468384074941452;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00796812749003984;
          result[1] += 0.0199203187250996;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.900398406374502;
          result[5] += 0.07171314741035857;
        } else {
          result[0] += 0.028125;
          result[1] += 0.00234375;
          result[2] += 0.00390625;
          result[3] += 0.140625;
          result[4] += 0.0734375;
          result[5] += 0.7515625;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7683307332293292;
          result[1] += 0.05538221528861154;
          result[2] += 0;
          result[3] += 0.01638065522620905;
          result[4] += 0.12870514820592824;
          result[5] += 0.031201248049921998;
        } else {
          result[0] += 0.15774647887323945;
          result[1] += 0.07605633802816901;
          result[2] += 0.2028169014084507;
          result[3] += 0.2647887323943662;
          result[4] += 0.09859154929577464;
          result[5] += 0.2;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.03488372093023256;
          result[1] += 0.011627906976744186;
          result[2] += 0;
          result[3] += 0.19767441860465115;
          result[4] += 0.08139534883720931;
          result[5] += 0.6744186046511628;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04285714285714286;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.3142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.046153846153846156;
          result[2] += 0.6923076923076923;
          result[3] += 0.18461538461538463;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7516556291390729;
          result[3] += 0.21192052980132453;
          result[4] += 0;
          result[5] += 0.036423841059602655;
        } else {
          result[0] += 0.3898305084745763;
          result[1] += 0.06779661016949153;
          result[2] += 0.4576271186440678;
          result[3] += 0.05084745762711865;
          result[4] += 0.03389830508474576;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.0032154340836012866;
          result[1] += 0;
          result[2] += 0.9710610932475885;
          result[3] += 0.025723472668810293;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.010869565217391304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9836956521739131;
          result[5] += 0.005434782608695652;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0.4444444444444444;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          result[0] += 0.00881057268722467;
          result[1] += 0.0011013215859030838;
          result[2] += 0;
          result[3] += 0.04955947136563876;
          result[4] += 0.040748898678414094;
          result[5] += 0.8997797356828194;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5373134328358209;
          result[4] += 0.05970149253731343;
          result[5] += 0.40298507462686567;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2962962962962963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7037037037037037;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9770833333333334;
          result[2] += 0;
          result[3] += 0.0041666666666666675;
          result[4] += 0.010416666666666668;
          result[5] += 0.008333333333333335;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.6989664082687339;
          result[1] += 0.05490956072351422;
          result[2] += 0.007105943152454781;
          result[3] += 0.03423772609819122;
          result[4] += 0.13824289405684756;
          result[5] += 0.06653746770025841;
        } else {
          result[0] += 0.09380530973451327;
          result[1] += 0.03716814159292035;
          result[2] += 0.2176991150442478;
          result[3] += 0.384070796460177;
          result[4] += 0.04601769911504425;
          result[5] += 0.22123893805309736;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19607843137254902;
          result[4] += 0.0784313725490196;
          result[5] += 0.7254901960784313;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.20833333333333334;
          result[4] += 0;
          result[5] += 0.20833333333333334;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.39473684210526316;
          result[3] += 0.5263157894736842;
          result[4] += 0;
          result[5] += 0.07894736842105263;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.024271844660194174;
          result[1] += 0.024271844660194174;
          result[2] += 0.7621359223300971;
          result[3] += 0.1650485436893204;
          result[4] += 0.014563106796116505;
          result[5] += 0.009708737864077669;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.7708333333333334;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.003134796238244514;
          result[1] += 0;
          result[2] += 0.9717868338557993;
          result[3] += 0.025078369905956112;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)109.5) ) ) {
          result[0] += 0.013157894736842105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9429824561403509;
          result[5] += 0.043859649122807015;
        } else {
          result[0] += 0;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.034830430797433545;
          result[1] += 0.0036663611365719525;
          result[2] += 0.0009165902841429881;
          result[3] += 0.05957836846929423;
          result[4] += 0.06049495875343722;
          result[5] += 0.84051329055912;
        } else {
          result[0] += 0.005747126436781609;
          result[1] += 0.028735632183908046;
          result[2] += 0.022988505747126436;
          result[3] += 0.5229885057471264;
          result[4] += 0.022988505747126436;
          result[5] += 0.39655172413793105;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.11462450592885376;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5059288537549407;
          result[5] += 0.015810276679841896;
        } else {
          result[0] += 0.7154255319148937;
          result[1] += 0.022606382978723406;
          result[2] += 0.03856382978723404;
          result[3] += 0.07845744680851063;
          result[4] += 0.07180851063829788;
          result[5] += 0.07313829787234043;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.9954441913439636;
          result[2] += 0;
          result[3] += 0.004555808656036446;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.6790123456790124;
          result[4] += 0;
          result[5] += 0.20987654320987653;
        } else {
          result[0] += 0.01639344262295082;
          result[1] += 0;
          result[2] += 0.5081967213114754;
          result[3] += 0.36065573770491804;
          result[4] += 0;
          result[5] += 0.11475409836065574;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9;
        } else {
          result[0] += 0.06593406593406594;
          result[1] += 0;
          result[2] += 0.8296703296703297;
          result[3] += 0.0989010989010989;
          result[4] += 0.005494505494505495;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8387096774193549;
          result[3] += 0.13548387096774195;
          result[4] += 0;
          result[5] += 0.025806451612903226;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9850746268656716;
          result[3] += 0.014925373134328358;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0.012500000000000002;
          result[1] += 0;
          result[2] += 0.8875000000000001;
          result[3] += 0.10000000000000002;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0027397260273972603;
          result[1] += 0;
          result[2] += 0.9945205479452055;
          result[3] += 0.0027397260273972603;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9644670050761421;
          result[5] += 0.03553299492385787;
        } else {
          result[0] += 0.58;
          result[1] += 0.02;
          result[2] += 0;
          result[3] += 0.01;
          result[4] += 0.19;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04311377245508982;
          result[4] += 0.058682634730538925;
          result[5] += 0.8982035928143712;
        } else {
          result[0] += 0;
          result[1] += 0.015015015015015015;
          result[2] += 0.009009009009009009;
          result[3] += 0.3993993993993994;
          result[4] += 0.10810810810810811;
          result[5] += 0.46846846846846846;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107.5) ) ) {
          result[0] += 0.7301387137452712;
          result[1] += 0.018915510718789406;
          result[2] += 0.014501891551071878;
          result[3] += 0.044136191677175286;
          result[4] += 0.12988650693568726;
          result[5] += 0.06242118537200504;
        } else {
          result[0] += 0.04123711340206186;
          result[1] += 0.8556701030927836;
          result[2] += 0.010309278350515465;
          result[3] += 0.010309278350515465;
          result[4] += 0.08247422680412372;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.9828850855745721;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017114914425427872;
          result[5] += 0;
        } else {
          result[0] += 0.6153846153846154;
          result[1] += 0.38461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08571428571428572;
          result[3] += 0.6071428571428571;
          result[4] += 0;
          result[5] += 0.30714285714285716;
        } else {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0.25;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.6363636363636364;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7294117647058823;
          result[3] += 0.21176470588235294;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.3181818181818182;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.6309523809523809;
          result[3] += 0.23809523809523808;
          result[4] += 0.023809523809523808;
          result[5] += 0.03571428571428571;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0;
          result[2] += 0.8160535117056856;
          result[3] += 0.11705685618729098;
          result[4] += 0;
          result[5] += 0.023411371237458192;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9736379613356766;
          result[3] += 0.026362038664323375;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.009433962264150943;
          result[1] += 0.0047169811320754715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9811320754716981;
          result[5] += 0.0047169811320754715;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.65;
          result[5] += 0.35;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002306805074971165;
          result[2] += 0.0034602076124567475;
          result[3] += 0.040369088811995385;
          result[4] += 0.04152249134948097;
          result[5] += 0.9123414071510957;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.1326530612244898;
          result[1] += 0.16326530612244897;
          result[2] += 0;
          result[3] += 0.02040816326530612;
          result[4] += 0.15306122448979592;
          result[5] += 0.5306122448979592;
        } else {
          result[0] += 0.017793594306049824;
          result[1] += 0.017793594306049824;
          result[2] += 0.03202846975088968;
          result[3] += 0.5338078291814946;
          result[4] += 0.0035587188612099642;
          result[5] += 0.39501779359430605;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.16;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.82;
          result[5] += 0.02;
        } else {
          result[0] += 0;
          result[1] += 0.9977220956719818;
          result[2] += 0.002277904328018223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7796610169491526;
          result[1] += 0.01926040061633282;
          result[2] += 0.0030816640986132513;
          result[3] += 0.039291217257318954;
          result[4] += 0.12557781201849;
          result[5] += 0.03312788906009245;
        } else {
          result[0] += 0.2030075187969925;
          result[1] += 0.04135338345864662;
          result[2] += 0.1766917293233083;
          result[3] += 0.25563909774436094;
          result[4] += 0.08646616541353384;
          result[5] += 0.2368421052631579;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06818181818181818;
          result[3] += 0.045454545454545456;
          result[4] += 0.11363636363636363;
          result[5] += 0.7727272727272727;
        } else {
          result[0] += 0.03111111111111111;
          result[1] += 0.022222222222222223;
          result[2] += 0.26666666666666666;
          result[3] += 0.4177777777777778;
          result[4] += 0.06666666666666667;
          result[5] += 0.19555555555555557;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.4722222222222222;
          result[1] += 0;
          result[2] += 0.3611111111111111;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.006430868167202572;
          result[1] += 0;
          result[2] += 0.9163987138263665;
          result[3] += 0.06752411575562701;
          result[4] += 0;
          result[5] += 0.00964630225080386;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.01293103448275862;
          result[2] += 0;
          result[3] += 0.017241379310344827;
          result[4] += 0.896551724137931;
          result[5] += 0.07327586206896551;
        } else {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11538461538461539;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.047322540473225407;
          result[4] += 0.029887920298879204;
          result[5] += 0.9227895392278954;
        } else {
          result[0] += 0.042682926829268296;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0.23170731707317074;
          result[4] += 0.18902439024390244;
          result[5] += 0.524390243902439;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.64625;
          result[1] += 0.053125;
          result[2] += 0.015625;
          result[3] += 0.049375;
          result[4] += 0.133125;
          result[5] += 0.1025;
        } else {
          result[0] += 0.10534351145038168;
          result[1] += 0.0366412213740458;
          result[2] += 0.23053435114503817;
          result[3] += 0.3480916030534351;
          result[4] += 0.04580152671755725;
          result[5] += 0.233587786259542;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.36363636363636365;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0.125;
          result[3] += 0.1875;
          result[4] += 0.0625;
          result[5] += 0.59375;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        } else {
          result[0] += 0.08823529411764706;
          result[1] += 0;
          result[2] += 0.8823529411764706;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8171206225680934;
          result[3] += 0.16731517509727625;
          result[4] += 0;
          result[5] += 0.01556420233463035;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.021052631578947368;
          result[1] += 0;
          result[2] += 0.8631578947368421;
          result[3] += 0.11578947368421053;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002178649237472767;
          result[1] += 0;
          result[2] += 0.9869281045751634;
          result[3] += 0.010893246187363835;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.987012987012987;
          result[5] += 0.012987012987012988;
        } else {
          result[0] += 0.32592592592592595;
          result[1] += 0.022222222222222223;
          result[2] += 0.037037037037037035;
          result[3] += 0.06666666666666667;
          result[4] += 0.1925925925925926;
          result[5] += 0.35555555555555557;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.001142857142857143;
          result[2] += 0;
          result[3] += 0.06285714285714286;
          result[4] += 0.05828571428571429;
          result[5] += 0.8777142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.008438818565400843;
          result[2] += 0.012658227848101266;
          result[3] += 0.5358649789029536;
          result[4] += 0.02109704641350211;
          result[5] += 0.4219409282700422;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.23076923076923078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0.002136752136752137;
          result[1] += 0.9935897435897436;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004273504273504274;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.746969696969697;
          result[1] += 0.05454545454545454;
          result[2] += 0.013636363636363636;
          result[3] += 0.021212121212121213;
          result[4] += 0.12878787878787878;
          result[5] += 0.03484848484848485;
        } else {
          result[0] += 0.21804511278195488;
          result[1] += 0.022556390977443608;
          result[2] += 0.24060150375939848;
          result[3] += 0.2681704260651629;
          result[4] += 0.03258145363408521;
          result[5] += 0.21804511278195488;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5714285714285715;
          result[4] += 0.14285714285714288;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0;
          result[2] += 0.28846153846153844;
          result[3] += 0.09615384615384616;
          result[4] += 0.038461538461538464;
          result[5] += 0.5576923076923077;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3492063492063492;
          result[3] += 0.6190476190476191;
          result[4] += 0;
          result[5] += 0.031746031746031744;
        } else {
          result[0] += 0.05970149253731344;
          result[1] += 0;
          result[2] += 0.6865671641791046;
          result[3] += 0.20895522388059704;
          result[4] += 0.01492537313432836;
          result[5] += 0.02985074626865672;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03785488958990536;
          result[1] += 0.0031545741324921135;
          result[2] += 0.8264984227129337;
          result[3] += 0.11987381703470032;
          result[4] += 0;
          result[5] += 0.012618296529968454;
        } else {
          result[0] += 0.0017094017094017094;
          result[1] += 0;
          result[2] += 0.9794871794871794;
          result[3] += 0.018803418803418803;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.04247104247104247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9459459459459459;
          result[5] += 0.011583011583011582;
        } else {
          result[0] += 0.1095890410958904;
          result[1] += 0.0273972602739726;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4794520547945205;
          result[5] += 0.3835616438356164;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
          result[0] += 0.009922822491730982;
          result[1] += 0.002205071664829107;
          result[2] += 0;
          result[3] += 0.07938257993384785;
          result[4] += 0.037486218302094816;
          result[5] += 0.8710033076074972;
        } else {
          result[0] += 0.3404255319148936;
          result[1] += 0.00911854103343465;
          result[2] += 0.00911854103343465;
          result[3] += 0.1337386018237082;
          result[4] += 0.16717325227963525;
          result[5] += 0.3404255319148936;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
          result[0] += 0.008528784648187633;
          result[1] += 0.9829424307036247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008528784648187633;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5405405405405406;
          result[2] += 0.02702702702702703;
          result[3] += 0;
          result[4] += 0.43243243243243246;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0.23413897280966767;
          result[1] += 0.03927492447129909;
          result[2] += 0.1042296072507553;
          result[3] += 0.3640483383685801;
          result[4] += 0.052870090634441085;
          result[5] += 0.2054380664652568;
        } else {
          result[0] += 0.7899716177861874;
          result[1] += 0.02365184484389783;
          result[2] += 0.06622516556291393;
          result[3] += 0.02365184484389783;
          result[4] += 0.08420056764427626;
          result[5] += 0.012298959318826871;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.25;
          result[4] += 0.5;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0.046511627906976744;
          result[3] += 0.18604651162790697;
          result[4] += 0.023255813953488372;
          result[5] += 0.7209302325581395;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.17857142857142858;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02631578947368421;
          result[3] += 0.21052631578947367;
          result[4] += 0.05263157894736842;
          result[5] += 0.7105263157894737;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0.019011406844106463;
          result[1] += 0;
          result[2] += 0.8022813688212928;
          result[3] += 0.16730038022813687;
          result[4] += 0;
          result[5] += 0.011406844106463879;
        } else {
          result[0] += 0.0017064846416382253;
          result[1] += 0;
          result[2] += 0.9709897610921502;
          result[3] += 0.027303754266211604;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.6153846153846154;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0.004098360655737705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9426229508196722;
          result[5] += 0.05327868852459016;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.0024968789013732834;
          result[2] += 0.003745318352059925;
          result[3] += 0.03245942571785269;
          result[4] += 0.03495630461922597;
          result[5] += 0.9263420724094882;
        } else {
          result[0] += 0.1090146750524109;
          result[1] += 0.006289308176100629;
          result[2] += 0.039832285115303984;
          result[3] += 0.350104821802935;
          result[4] += 0.1069182389937107;
          result[5] += 0.38784067085953877;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7313432835820896;
          result[1] += 0.06467661691542288;
          result[2] += 0.0035536602700781805;
          result[3] += 0.028429282160625444;
          result[4] += 0.11940298507462686;
          result[5] += 0.052594171997157074;
        } else {
          result[0] += 0.24494949494949494;
          result[1] += 0.012626262626262626;
          result[2] += 0.25252525252525254;
          result[3] += 0.2676767676767677;
          result[4] += 0.050505050505050504;
          result[5] += 0.1717171717171717;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
          result[0] += 0.004705882352941176;
          result[1] += 0.9788235294117648;
          result[2] += 0;
          result[3] += 0.002352941176470588;
          result[4] += 0.01411764705882353;
          result[5] += 0;
        } else {
          result[0] += 0.6666666666666667;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02631578947368421;
          result[4] += 0.05263157894736842;
          result[5] += 0.9210526315789473;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2909090909090909;
          result[3] += 0.34545454545454546;
          result[4] += 0.01818181818181818;
          result[5] += 0.34545454545454546;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
        } else {
          result[0] += 0.04597701149425287;
          result[1] += 0.022988505747126436;
          result[2] += 0.6206896551724138;
          result[3] += 0.21839080459770116;
          result[4] += 0;
          result[5] += 0.09195402298850575;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6333333333333333;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8662420382165605;
          result[3] += 0.10828025477707007;
          result[4] += 0;
          result[5] += 0.025477707006369428;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0024271844660194173;
          result[1] += 0;
          result[2] += 0.9878640776699029;
          result[3] += 0.007281553398058253;
          result[4] += 0;
          result[5] += 0.0024271844660194173;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0.07092198581560284;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8297872340425532;
          result[5] += 0.09929078014184398;
        } else {
          result[0] += 0.43243243243243246;
          result[1] += 0.35135135135135137;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21621621621621623;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.01325301204819277;
          result[2] += 0;
          result[3] += 0.02891566265060241;
          result[4] += 0.056626506024096385;
          result[5] += 0.9012048192771084;
        } else {
          result[0] += 0.0034482758620689655;
          result[1] += 0.013793103448275862;
          result[2] += 0.0034482758620689655;
          result[3] += 0.5241379310344828;
          result[4] += 0.010344827586206896;
          result[5] += 0.44482758620689655;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
          result[0] += 0.014184397163120567;
          result[1] += 0.2624113475177305;
          result[2] += 0.03546099290780142;
          result[3] += 0.04964539007092199;
          result[4] += 0.6028368794326241;
          result[5] += 0.03546099290780142;
        } else {
          result[0] += 0.0022675736961451243;
          result[1] += 0.9773242630385486;
          result[2] += 0.006802721088435372;
          result[3] += 0;
          result[4] += 0.009070294784580497;
          result[5] += 0.004535147392290249;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8453267162944582;
          result[1] += 0.02481389578163772;
          result[2] += 0.0016542597187758478;
          result[3] += 0.02481389578163772;
          result[4] += 0.08354011579818031;
          result[5] += 0.019851116625310174;
        } else {
          result[0] += 0.19718309859154928;
          result[1] += 0.008048289738430584;
          result[2] += 0.22937625754527163;
          result[3] += 0.289738430583501;
          result[4] += 0.05432595573440644;
          result[5] += 0.22132796780684105;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0.16901408450704225;
          result[4] += 0.014084507042253521;
          result[5] += 0.7887323943661971;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.09090909090909091;
          result[4] += 0.18181818181818182;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.23076923076923078;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0.020338983050847456;
          result[1] += 0;
          result[2] += 0.7762711864406779;
          result[3] += 0.17288135593220338;
          result[4] += 0;
          result[5] += 0.030508474576271188;
        } else {
          result[0] += 0.008902077151335312;
          result[1] += 0.001483679525222552;
          result[2] += 0.9554896142433235;
          result[3] += 0.026706231454005934;
          result[4] += 0;
          result[5] += 0.00741839762611276;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.07723577235772358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9146341463414634;
          result[5] += 0.008130081300813009;
        } else {
          result[0] += 0.5648854961832062;
          result[1] += 0;
          result[2] += 0.007633587786259542;
          result[3] += 0;
          result[4] += 0.2366412213740458;
          result[5] += 0.19083969465648856;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0009551098376313276;
          result[1] += 0.0057306590257879654;
          result[2] += 0.015281757402101241;
          result[3] += 0.06685768863419293;
          result[4] += 0.07163323782234957;
          result[5] += 0.839541547277937;
        } else {
          result[0] += 0.030042918454935622;
          result[1] += 0;
          result[2] += 0.004291845493562232;
          result[3] += 0.592274678111588;
          result[4] += 0.017167381974248927;
          result[5] += 0.3562231759656652;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7817896389324961;
          result[1] += 0.0282574568288854;
          result[2] += 0.003924646781789639;
          result[3] += 0.030612244897959183;
          result[4] += 0.10518053375196232;
          result[5] += 0.05023547880690738;
        } else {
          result[0] += 0.21311475409836067;
          result[1] += 0.05327868852459017;
          result[2] += 0.20491803278688528;
          result[3] += 0.25000000000000006;
          result[4] += 0.10655737704918034;
          result[5] += 0.17213114754098363;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0.02702702702702703;
          result[3] += 0.04054054054054054;
          result[4] += 0.12162162162162163;
          result[5] += 0.7837837837837838;
        } else {
          result[0] += 0;
          result[1] += 0.35294117647058826;
          result[2] += 0.17647058823529413;
          result[3] += 0.23529411764705882;
          result[4] += 0.23529411764705882;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21782178217821782;
          result[3] += 0.594059405940594;
          result[4] += 0.009900990099009901;
          result[5] += 0.1782178217821782;
        } else {
          result[0] += 0.1590909090909091;
          result[1] += 0;
          result[2] += 0.6590909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0.022727272727272728;
          result[5] += 0.06818181818181818;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
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
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0;
          result[2] += 0.5609756097560976;
          result[3] += 0.3902439024390244;
          result[4] += 0.012195121951219513;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0.012910798122065728;
          result[1] += 0;
          result[2] += 0.931924882629108;
          result[3] += 0.0539906103286385;
          result[4] += 0;
          result[5] += 0.0011737089201877935;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.019083969465648856;
          result[2] += 0;
          result[3] += 0.003816793893129771;
          result[4] += 0.9236641221374046;
          result[5] += 0.05343511450381679;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0014124293785310734;
          result[1] += 0;
          result[2] += 0.00847457627118644;
          result[3] += 0.026836158192090395;
          result[4] += 0.03248587570621469;
          result[5] += 0.9307909604519774;
        } else {
          result[0] += 0.12045889101338432;
          result[1] += 0.0038240917782026767;
          result[2] += 0.011472275334608031;
          result[3] += 0.2887189292543021;
          result[4] += 0.1491395793499044;
          result[5] += 0.42638623326959846;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
          result[0] += 0.010416666666666666;
          result[1] += 0.3020833333333333;
          result[2] += 0;
          result[3] += 0.03125;
          result[4] += 0.5729166666666666;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.9796380090497738;
          result[2] += 0;
          result[3] += 0.004524886877828056;
          result[4] += 0.011312217194570137;
          result[5] += 0.004524886877828056;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
          result[0] += 0.5533854166666666;
          result[1] += 0.044270833333333336;
          result[2] += 0.041666666666666664;
          result[3] += 0.07421875;
          result[4] += 0.14192708333333334;
          result[5] += 0.14453125;
        } else {
          result[0] += 0.9140625;
          result[1] += 0.005208333333333333;
          result[2] += 0.033854166666666664;
          result[3] += 0.0234375;
          result[4] += 0.016927083333333332;
          result[5] += 0.006510416666666667;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.021739130434782608;
          result[2] += 0;
          result[3] += 0.10869565217391304;
          result[4] += 0.17391304347826086;
          result[5] += 0.6956521739130435;
        } else {
          result[0] += 0.008658008658008658;
          result[1] += 0;
          result[2] += 0.2597402597402597;
          result[3] += 0.5454545454545454;
          result[4] += 0.017316017316017316;
          result[5] += 0.16883116883116883;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8947368421052632;
          result[3] += 0.08771929824561403;
          result[4] += 0;
          result[5] += 0.017543859649122806;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.36666666666666664;
          result[1] += 0;
          result[2] += 0.23333333333333334;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8614457831325302;
          result[3] += 0.11144578313253012;
          result[4] += 0;
          result[5] += 0.02710843373493976;
        } else {
          result[0] += 0.001996007984031936;
          result[1] += 0;
          result[2] += 0.9780439121756487;
          result[3] += 0.017964071856287425;
          result[4] += 0;
          result[5] += 0.001996007984031936;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.94921875;
          result[5] += 0.05078125;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0502283105022831;
          result[4] += 0.04680365296803653;
          result[5] += 0.9029680365296804;
        } else {
          result[0] += 0.12173913043478261;
          result[1] += 0.008695652173913044;
          result[2] += 0.014492753623188406;
          result[3] += 0.34782608695652173;
          result[4] += 0.06086956521739131;
          result[5] += 0.4463768115942029;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.010416666666666668;
          result[1] += 0.13541666666666669;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8437500000000001;
          result[5] += 0.010416666666666668;
        } else {
          result[0] += 0.0020833333333333333;
          result[1] += 0.9583333333333334;
          result[2] += 0.0020833333333333333;
          result[3] += 0.004166666666666667;
          result[4] += 0.03333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8425849212924607;
          result[1] += 0.035625517812758904;
          result[2] += 0.0024855012427506215;
          result[3] += 0.021541010770505385;
          result[4] += 0.08036454018227009;
          result[5] += 0.01739850869925435;
        } else {
          result[0] += 0.18427518427518427;
          result[1] += 0.04914004914004914;
          result[2] += 0.1891891891891892;
          result[3] += 0.2113022113022113;
          result[4] += 0.08845208845208845;
          result[5] += 0.27764127764127766;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.023809523809523808;
          result[4] += 0.2857142857142857;
          result[5] += 0.6428571428571429;
        } else {
          result[0] += 0;
          result[1] += 0.12962962962962962;
          result[2] += 0.05555555555555555;
          result[3] += 0.6481481481481481;
          result[4] += 0.05555555555555555;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2765957446808511;
          result[3] += 0.3617021276595745;
          result[4] += 0;
          result[5] += 0.3617021276595745;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7924528301886793;
          result[3] += 0.09433962264150944;
          result[4] += 0.018867924528301886;
          result[5] += 0.09433962264150944;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.08571428571428572;
          result[1] += 0.05714285714285714;
          result[2] += 0.3142857142857143;
          result[3] += 0.45714285714285713;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        } else {
          result[0] += 0.01845018450184502;
          result[1] += 0;
          result[2] += 0.7933579335793358;
          result[3] += 0.17343173431734318;
          result[4] += 0;
          result[5] += 0.014760147601476014;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0.15789473684210525;
          result[1] += 0;
          result[2] += 0.5789473684210527;
          result[3] += 0.10526315789473684;
          result[4] += 0.10526315789473684;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.0015923566878980893;
          result[1] += 0;
          result[2] += 0.9633757961783439;
          result[3] += 0.03343949044585987;
          result[4] += 0;
          result[5] += 0.0015923566878980893;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
          result[0] += 0.06779661016949153;
          result[1] += 0;
          result[2] += 0.013559322033898305;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.11864406779661017;
        } else {
          result[0] += 0.6768060836501902;
          result[1] += 0.10456273764258557;
          result[2] += 0.0019011406844106466;
          result[3] += 0;
          result[4] += 0.2129277566539924;
          result[5] += 0.003802281368821293;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.005780346820809248;
          result[1] += 0.0011560693641618498;
          result[2] += 0;
          result[3] += 0.05317919075144509;
          result[4] += 0.047398843930635835;
          result[5] += 0.892485549132948;
        } else {
          result[0] += 0.14882226980728053;
          result[1] += 0.023554603854389723;
          result[2] += 0.07066381156316917;
          result[3] += 0.3426124197002141;
          result[4] += 0.10171306209850108;
          result[5] += 0.31263383297644537;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9855072463768116;
          result[1] += 0;
          result[2] += 0.004830917874396135;
          result[3] += 0.004830917874396135;
          result[4] += 0.004830917874396135;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0.1;
          result[5] += 0.2;
        } else {
          result[0] += 0.1346153846153846;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09615384615384616;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.012345679012345678;
          result[1] += 0;
          result[2] += 0.6604938271604939;
          result[3] += 0.2345679012345679;
          result[4] += 0.006172839506172839;
          result[5] += 0.08641975308641975;
        } else {
          result[0] += 0.022432113341204252;
          result[1] += 0;
          result[2] += 0.9220779220779222;
          result[3] += 0.05548996458087368;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9861111111111112;
          result[5] += 0.013888888888888888;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
          result[0] += 0.9444444444444444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.0410958904109589;
          result[1] += 0.0958904109589041;
          result[2] += 0;
          result[3] += 0.1095890410958904;
          result[4] += 0.1917808219178082;
          result[5] += 0.5616438356164384;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7333333333333333;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.007416563658838072;
          result[2] += 0.003708281829419036;
          result[3] += 0.05315203955500618;
          result[4] += 0.04573547589616811;
          result[5] += 0.8899876390605687;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.005208333333333333;
          result[2] += 0.046875;
          result[3] += 0.18229166666666666;
          result[4] += 0.08333333333333333;
          result[5] += 0.6822916666666666;
        } else {
          result[0] += 0.016042780748663103;
          result[1] += 0;
          result[2] += 0.03208556149732621;
          result[3] += 0.6951871657754011;
          result[4] += 0;
          result[5] += 0.25668449197860965;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
          result[0] += 0.012658227848101267;
          result[1] += 0.10126582278481014;
          result[2] += 0;
          result[3] += 0.025316455696202535;
          result[4] += 0.8481012658227849;
          result[5] += 0.012658227848101267;
        } else {
          result[0] += 0.002178649237472767;
          result[1] += 0.9586056644880174;
          result[2] += 0;
          result[3] += 0.010893246187363835;
          result[4] += 0.02832244008714597;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8368506493506493;
          result[1] += 0.030032467532467532;
          result[2] += 0.0016233766233766235;
          result[3] += 0.012987012987012988;
          result[4] += 0.07548701298701299;
          result[5] += 0.04301948051948052;
        } else {
          result[0] += 0.24584717607973422;
          result[1] += 0.023255813953488372;
          result[2] += 0.18272425249169436;
          result[3] += 0.23920265780730898;
          result[4] += 0.04318936877076412;
          result[5] += 0.26578073089701;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.1323529411764706;
          result[2] += 0.08823529411764706;
          result[3] += 0.5735294117647058;
          result[4] += 0.029411764705882353;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.05714285714285714;
          result[4] += 0.2571428571428571;
          result[5] += 0.44285714285714284;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0.005063291139240506;
          result[1] += 0;
          result[2] += 0.7265822784810126;
          result[3] += 0.22784810126582278;
          result[4] += 0;
          result[5] += 0.04050632911392405;
        } else {
          result[0] += 0.034023668639053255;
          result[1] += 0;
          result[2] += 0.9289940828402367;
          result[3] += 0.03106508875739645;
          result[4] += 0;
          result[5] += 0.005917159763313609;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.0040650406504065045;
          result[1] += 0.012195121951219513;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.943089430894309;
          result[5] += 0.04065040650406504;
        } else {
          result[0] += 0.5196078431372548;
          result[1] += 0.1372549019607843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352938;
          result[5] += 0.22549019607843132;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011890606420927466;
          result[2] += 0;
          result[3] += 0.0356718192627824;
          result[4] += 0.05112960760998811;
          result[5] += 0.9120095124851367;
        } else {
          result[0] += 0.007633587786259542;
          result[1] += 0.09923664122137404;
          result[2] += 0.015267175572519083;
          result[3] += 0.366412213740458;
          result[4] += 0.03816793893129771;
          result[5] += 0.4732824427480916;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01694915254237288;
          result[1] += 0.3559322033898305;
          result[2] += 0;
          result[3] += 0.03389830508474576;
          result[4] += 0.5932203389830508;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
          result[0] += 0.33669185558354325;
          result[1] += 0.052057094878253565;
          result[2] += 0.07892527287993283;
          result[3] += 0.2031905961376994;
          result[4] += 0.1309823677581864;
          result[5] += 0.19815281276238456;
        } else {
          result[0] += 0.8759493670886076;
          result[1] += 0.020253164556962026;
          result[2] += 0.03417721518987342;
          result[3] += 0.017721518987341773;
          result[4] += 0.04683544303797468;
          result[5] += 0.005063291139240506;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02857142857142857;
          result[3] += 0.05714285714285714;
          result[4] += 0.08571428571428572;
          result[5] += 0.8285714285714286;
        } else {
          result[0] += 0;
          result[1] += 0.04285714285714286;
          result[2] += 0.18571428571428572;
          result[3] += 0.5857142857142857;
          result[4] += 0.02857142857142857;
          result[5] += 0.15714285714285714;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0.10344827586206896;
          result[1] += 0.005747126436781609;
          result[2] += 0.5517241379310345;
          result[3] += 0.28160919540229884;
          result[4] += 0;
          result[5] += 0.05747126436781609;
        } else {
          result[0] += 0.011111111111111112;
          result[1] += 0.016666666666666666;
          result[2] += 0.8388888888888889;
          result[3] += 0.11666666666666667;
          result[4] += 0;
          result[5] += 0.016666666666666666;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8787878787878788;
          result[3] += 0.12121212121212122;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.004149377593360996;
          result[1] += 0;
          result[2] += 0.9896265560165975;
          result[3] += 0.006224066390041493;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0.009900990099009901;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9801980198019802;
          result[5] += 0.009900990099009901;
        } else {
          result[0] += 0;
          result[1] += 0.018867924528301886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8301886792452831;
          result[5] += 0.1509433962264151;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.9370629370629371;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06293706293706294;
          result[5] += 0;
        } else {
          result[0] += 0.10294117647058823;
          result[1] += 0.014705882352941176;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4117647058823529;
          result[5] += 0.47058823529411764;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008169934640522876;
          result[4] += 0.006535947712418301;
          result[5] += 0.9852941176470589;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0.14516129032258066;
          result[4] += 0.14516129032258066;
          result[5] += 0.6774193548387096;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.03309692671394799;
          result[2] += 0.018912529550827423;
          result[3] += 0.18912529550827423;
          result[4] += 0.16312056737588654;
          result[5] += 0.5957446808510638;
        } else {
          result[0] += 0.006211180124223602;
          result[1] += 0.006211180124223602;
          result[2] += 0.046583850931677016;
          result[3] += 0.577639751552795;
          result[4] += 0;
          result[5] += 0.36335403726708076;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          result[0] += 0.007653061224489796;
          result[1] += 0.9693877551020408;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02295918367346939;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.21311475409836064;
          result[2] += 0.00819672131147541;
          result[3] += 0.01639344262295082;
          result[4] += 0.7295081967213115;
          result[5] += 0.03278688524590164;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.9008498583569405;
          result[1] += 0.03210576015108593;
          result[2] += 0.0009442870632672333;
          result[3] += 0.013220018885741265;
          result[4] += 0.04815864022662889;
          result[5] += 0.004721435316336166;
        } else {
          result[0] += 0.14912280701754385;
          result[1] += 0.017543859649122806;
          result[2] += 0.3333333333333333;
          result[3] += 0.2543859649122807;
          result[4] += 0.03508771929824561;
          result[5] += 0.21052631578947367;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          result[0] += 0.0038910505836575876;
          result[1] += 0.05058365758754864;
          result[2] += 0.35797665369649806;
          result[3] += 0.33073929961089493;
          result[4] += 0.0622568093385214;
          result[5] += 0.19455252918287938;
        } else {
          result[0] += 0.6037735849056604;
          result[1] += 0.05660377358490566;
          result[2] += 0.32075471698113206;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.018867924528301886;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7008928571428571;
          result[3] += 0.23660714285714285;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.01388888888888889;
          result[1] += 0;
          result[2] += 0.9472222222222223;
          result[3] += 0.036111111111111115;
          result[4] += 0;
          result[5] += 0.0027777777777777783;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.020348837209302327;
          result[1] += 0.0377906976744186;
          result[2] += 0.00872093023255814;
          result[3] += 0;
          result[4] += 0.877906976744186;
          result[5] += 0.055232558139534885;
        } else {
          result[0] += 0.7772020725388601;
          result[1] += 0.0051813471502590676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09844559585492228;
          result[5] += 0.11917098445595854;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0072254335260115606;
          result[3] += 0.028901734104046242;
          result[4] += 0.030346820809248554;
          result[5] += 0.9335260115606936;
        } else {
          result[0] += 0.01579778830963665;
          result[1] += 0.036334913112164295;
          result[2] += 0.020537124802527645;
          result[3] += 0.3175355450236967;
          result[4] += 0.11058451816745656;
          result[5] += 0.49921011058451814;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.784452296819788;
          result[1] += 0.045936395759717315;
          result[2] += 0.00265017667844523;
          result[3] += 0.04063604240282685;
          result[4] += 0.0812720848056537;
          result[5] += 0.045053003533568906;
        } else {
          result[0] += 0.17880794701986755;
          result[1] += 0.0033112582781456954;
          result[2] += 0.31125827814569534;
          result[3] += 0.30132450331125826;
          result[4] += 0.029801324503311258;
          result[5] += 0.17549668874172186;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
          result[0] += 0.008948545861297539;
          result[1] += 0.9865771812080537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0044742729306487695;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0;
          result[4] += 0.037037037037037035;
          result[5] += 0.9259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14705882352941177;
          result[3] += 0.7352941176470589;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6315789473684211;
          result[3] += 0.052631578947368425;
          result[4] += 0;
          result[5] += 0.31578947368421056;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59) ) ) {
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
          result[3] += 0.25;
          result[4] += 0.5833333333333334;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0.003367003367003367;
          result[1] += 0;
          result[2] += 0.8047138047138047;
          result[3] += 0.1717171717171717;
          result[4] += 0;
          result[5] += 0.020202020202020204;
        } else {
          result[0] += 0.004524886877828055;
          result[1] += 0;
          result[2] += 0.9622926093514329;
          result[3] += 0.033182503770739065;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.01675977653631285;
          result[1] += 0.0111731843575419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9441340782122905;
          result[5] += 0.027932960893854747;
        } else {
          result[0] += 0.44144144144144143;
          result[1] += 0.2072072072072072;
          result[2] += 0;
          result[3] += 0.04504504504504504;
          result[4] += 0.1891891891891892;
          result[5] += 0.11711711711711711;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0.002798507462686567;
          result[1] += 0.0018656716417910447;
          result[2] += 0.0046641791044776115;
          result[3] += 0.06343283582089553;
          result[4] += 0.07369402985074627;
          result[5] += 0.8535447761194029;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0.05714285714285714;
          result[3] += 0.6;
          result[4] += 0.02857142857142857;
          result[5] += 0.3047619047619048;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2545454545454545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7454545454545455;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9906103286384976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009389671361502348;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7980480480480481;
          result[1] += 0.013513513513513514;
          result[2] += 0.0037537537537537537;
          result[3] += 0.03153153153153153;
          result[4] += 0.11936936936936937;
          result[5] += 0.033783783783783786;
        } else {
          result[0] += 0.1752021563342318;
          result[1] += 0.05121293800539083;
          result[2] += 0.24528301886792453;
          result[3] += 0.3288409703504043;
          result[4] += 0.04851752021563342;
          result[5] += 0.1509433962264151;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
          result[0] += 0.09302325581395349;
          result[1] += 0.06976744186046512;
          result[2] += 0.13953488372093023;
          result[3] += 0.16279069767441862;
          result[4] += 0.11627906976744186;
          result[5] += 0.4186046511627907;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23376623376623376;
          result[3] += 0.5844155844155844;
          result[4] += 0.05194805194805195;
          result[5] += 0.12987012987012986;
        } else {
          result[0] += 0.014084507042253521;
          result[1] += 0;
          result[2] += 0.7464788732394366;
          result[3] += 0.19718309859154928;
          result[4] += 0;
          result[5] += 0.04225352112676056;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0.6666666666666666;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.025889967637540454;
          result[1] += 0.003236245954692557;
          result[2] += 0.7993527508090615;
          result[3] += 0.15857605177993528;
          result[4] += 0;
          result[5] += 0.012944983818770227;
        } else {
          result[0] += 0.003787878787878788;
          result[1] += 0;
          result[2] += 0.9696969696969697;
          result[3] += 0.022727272727272728;
          result[4] += 0;
          result[5] += 0.003787878787878788;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007692307692307694;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.003846153846153847;
          result[4] += 0.9192307692307693;
          result[5] += 0.06923076923076925;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0025940337224383916;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04798962386511025;
          result[4] += 0.03631647211413749;
          result[5] += 0.9130998702983139;
        } else {
          result[0] += 0.100418410041841;
          result[1] += 0.05230125523012552;
          result[2] += 0.006276150627615063;
          result[3] += 0.3389121338912134;
          result[4] += 0.060669456066945605;
          result[5] += 0.44142259414225943;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          result[0] += 0.15613382899628253;
          result[1] += 0.20074349442379183;
          result[2] += 0.0037174721189591076;
          result[3] += 0.007434944237918215;
          result[4] += 0.6059479553903345;
          result[5] += 0.026022304832713755;
        } else {
          result[0] += 0.6656151419558359;
          result[1] += 0.015141955835962145;
          result[2] += 0.05993690851735016;
          result[3] += 0.10410094637223975;
          result[4] += 0.06435331230283911;
          result[5] += 0.09085173501577287;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14666666666666667;
          result[3] += 0.6133333333333333;
          result[4] += 0;
          result[5] += 0.24;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.42105263157894735;
          result[4] += 0;
          result[5] += 0.3684210526315789;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7851239669421488;
          result[3] += 0.2066115702479339;
          result[4] += 0;
          result[5] += 0.008264462809917356;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.005312084993359893;
          result[1] += 0;
          result[2] += 0.9601593625498008;
          result[3] += 0.033200531208499334;
          result[4] += 0;
          result[5] += 0.0013280212483399733;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.003937007874015748;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9448818897637795;
          result[5] += 0.051181102362204724;
        } else {
          result[0] += 0;
          result[1] += 0.16666666666666669;
          result[2] += 0;
          result[3] += 0.6666666666666667;
          result[4] += 0.16666666666666669;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          result[0] += 0.9493670886075949;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05063291139240506;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004658385093167702;
          result[1] += 0.008540372670807454;
          result[2] += 0.005434782608695652;
          result[3] += 0.15683229813664595;
          result[4] += 0.06521739130434782;
          result[5] += 0.7593167701863354;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9772209567198178;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022779043280182234;
          result[5] += 0;
        } else {
          result[0] += 0.020689655172413793;
          result[1] += 0.296551724137931;
          result[2] += 0.027586206896551724;
          result[3] += 0.006896551724137931;
          result[4] += 0.6344827586206897;
          result[5] += 0.013793103448275862;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8599464763603925;
          result[1] += 0.036574487065120426;
          result[2] += 0.0044603033006244425;
          result[3] += 0.024977698483496878;
          result[4] += 0.05530776092774309;
          result[5] += 0.01873327386262266;
        } else {
          result[0] += 0.30094043887147337;
          result[1] += 0.07523510971786834;
          result[2] += 0.14106583072100312;
          result[3] += 0.23510971786833856;
          result[4] += 0.05329153605015674;
          result[5] += 0.19435736677115986;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.7373737373737373;
          result[4] += 0;
          result[5] += 0.1717171717171717;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.4666666666666667;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.057692307692307696;
          result[1] += 0;
          result[2] += 0.8269230769230769;
          result[3] += 0.057692307692307696;
          result[4] += 0;
          result[5] += 0.057692307692307696;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6451612903225806;
          result[4] += 0.06451612903225806;
          result[5] += 0.2903225806451613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6615384615384615;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.13846153846153847;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.82;
          result[3] += 0.168;
          result[4] += 0;
          result[5] += 0.012;
        } else {
          result[0] += 0.019726858877086497;
          result[1] += 0;
          result[2] += 0.9423368740515934;
          result[3] += 0.033383915022761765;
          result[4] += 0;
          result[5] += 0.004552352048558423;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          result[0] += 0.014925373134328358;
          result[1] += 0.009950248756218905;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9353233830845771;
          result[5] += 0.03980099502487562;
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
          result[0] += 0.6986301369863014;
          result[1] += 0.0273972602739726;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.273972602739726;
          result[5] += 0;
        } else {
          result[0] += 0.0034393809114359416;
          result[1] += 0.005159071367153913;
          result[2] += 0.004299226139294927;
          result[3] += 0.15219260533104043;
          result[4] += 0.04557179707652623;
          result[5] += 0.7893379191745485;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.27450980392156865;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6372549019607843;
          result[5] += 0.08823529411764706;
        } else {
          result[0] += 0.0021231422505307855;
          result[1] += 0.9596602972399151;
          result[2] += 0.004246284501061571;
          result[3] += 0.006369426751592357;
          result[4] += 0.027600849256900213;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7821011673151751;
          result[1] += 0.022568093385214007;
          result[2] += 0.007003891050583658;
          result[3] += 0.03735408560311284;
          result[4] += 0.09649805447470818;
          result[5] += 0.054474708171206226;
        } else {
          result[0] += 0.2696078431372549;
          result[1] += 0.022058823529411766;
          result[2] += 0.20588235294117646;
          result[3] += 0.2426470588235294;
          result[4] += 0.049019607843137254;
          result[5] += 0.2107843137254902;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16883116883116883;
          result[3] += 0.7012987012987013;
          result[4] += 0;
          result[5] += 0.12987012987012986;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3448275862068966;
          result[3] += 0.2413793103448276;
          result[4] += 0;
          result[5] += 0.41379310344827586;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.9473684210526315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.775;
          result[3] += 0.20416666666666666;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.056074766355140186;
          result[1] += 0;
          result[2] += 0.9252336448598131;
          result[3] += 0.018691588785046728;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0.0068846815834767644;
          result[1] += 0;
          result[2] += 0.9759036144578314;
          result[3] += 0.013769363166953529;
          result[4] += 0;
          result[5] += 0.0034423407917383822;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.0051813471502590676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9948186528497409;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.868421052631579;
          result[5] += 0.13157894736842105;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
          result[0] += 0.01575757575757576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01818181818181818;
          result[4] += 0.07151515151515152;
          result[5] += 0.8945454545454545;
        } else {
          result[0] += 0.07912087912087912;
          result[1] += 0.01978021978021978;
          result[2] += 0.013186813186813187;
          result[3] += 0.34725274725274724;
          result[4] += 0.03296703296703297;
          result[5] += 0.5076923076923077;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0.031578947368421054;
          result[1] += 0.24210526315789474;
          result[2] += 0;
          result[3] += 0.010526315789473684;
          result[4] += 0.6631578947368421;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.004405286343612335;
          result[1] += 0.9449339207048458;
          result[2] += 0;
          result[3] += 0.00881057268722467;
          result[4] += 0.03524229074889868;
          result[5] += 0.006607929515418502;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8502057613168724;
          result[1] += 0.024691358024691357;
          result[2] += 0.00411522633744856;
          result[3] += 0.01646090534979424;
          result[4] += 0.07983539094650206;
          result[5] += 0.024691358024691357;
        } else {
          result[0] += 0.17883211678832117;
          result[1] += 0.04744525547445255;
          result[2] += 0.13503649635036497;
          result[3] += 0.27007299270072993;
          result[4] += 0.051094890510948905;
          result[5] += 0.3175182481751825;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.16666666666666666;
          result[5] += 0.6944444444444444;
        } else {
          result[0] += 0;
          result[1] += 0.007874015748031496;
          result[2] += 0.14173228346456693;
          result[3] += 0.5748031496062992;
          result[4] += 0.007874015748031496;
          result[5] += 0.2677165354330709;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          result[0] += 0.01834862385321101;
          result[1] += 0;
          result[2] += 0.44036697247706424;
          result[3] += 0.3669724770642202;
          result[4] += 0.027522935779816515;
          result[5] += 0.14678899082568808;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.8285714285714286;
          result[3] += 0.1;
          result[4] += 0.04285714285714286;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7254901960784313;
          result[3] += 0.0784313725490196;
          result[4] += 0.0392156862745098;
          result[5] += 0.1568627450980392;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.804733727810651;
          result[3] += 0.18343195266272191;
          result[4] += 0;
          result[5] += 0.01183431952662722;
        } else {
          result[0] += 0.005988023952095809;
          result[1] += 0;
          result[2] += 0.9610778443113772;
          result[3] += 0.03143712574850299;
          result[4] += 0;
          result[5] += 0.0014970059880239522;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.015873015873015872;
          result[2] += 0;
          result[3] += 0.003968253968253968;
          result[4] += 0.9206349206349206;
          result[5] += 0.05952380952380952;
        } else {
          result[0] += 0.6183206106870229;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17557251908396945;
          result[5] += 0.20610687022900764;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03565891472868217;
          result[4] += 0.018604651162790697;
          result[5] += 0.9457364341085271;
        } else {
          result[0] += 0.006688963210702341;
          result[1] += 0.010033444816053512;
          result[2] += 0.010033444816053512;
          result[3] += 0.1605351170568562;
          result[4] += 0.1605351170568562;
          result[5] += 0.6521739130434783;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0.00684931506849315;
          result[1] += 0.9748858447488584;
          result[2] += 0;
          result[3] += 0.00684931506849315;
          result[4] += 0.01141552511415525;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5714285714285714;
          result[4] += 0.42857142857142855;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7887963663890991;
          result[1] += 0.05677517032551098;
          result[2] += 0.000757002271006813;
          result[3] += 0.026495079485238455;
          result[4] += 0.0984102952308857;
          result[5] += 0.028766086298258896;
        } else {
          result[0] += 0.11182108626198083;
          result[1] += 0.01437699680511182;
          result[2] += 0.2124600638977636;
          result[3] += 0.35942492012779553;
          result[4] += 0.027156549520766772;
          result[5] += 0.2747603833865815;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11904761904761904;
          result[3] += 0.07142857142857142;
          result[4] += 0.09523809523809523;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16326530612244897;
          result[3] += 0.5714285714285714;
          result[4] += 0.02040816326530612;
          result[5] += 0.24489795918367346;
        } else {
          result[0] += 0;
          result[1] += 0.02;
          result[2] += 0.65;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0.027027027027027032;
          result[1] += 0;
          result[2] += 0.6351351351351352;
          result[3] += 0.27027027027027034;
          result[4] += 0;
          result[5] += 0.06756756756756759;
        } else {
          result[0] += 0.01932367149758454;
          result[1] += 0.0024154589371980675;
          result[2] += 0.9335748792270532;
          result[3] += 0.042270531400966184;
          result[4] += 0;
          result[5] += 0.0024154589371980675;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.004310344827586207;
          result[2] += 0;
          result[3] += 0.008620689655172414;
          result[4] += 0.9568965517241379;
          result[5] += 0.03017241379310345;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0.024096385542168676;
          result[1] += 0.004819277108433735;
          result[2] += 0.0012048192771084338;
          result[3] += 0.04216867469879518;
          result[4] += 0.051807228915662654;
          result[5] += 0.8759036144578313;
        } else {
          result[0] += 0.06842105263157895;
          result[1] += 0.005263157894736842;
          result[2] += 0.005263157894736842;
          result[3] += 0.3473684210526316;
          result[4] += 0.08157894736842106;
          result[5] += 0.4921052631578947;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0.020202020202020204;
          result[1] += 0.10101010101010101;
          result[2] += 0.020202020202020204;
          result[3] += 0.020202020202020204;
          result[4] += 0.8181818181818182;
          result[5] += 0.020202020202020204;
        } else {
          result[0] += 0.0019230769230769232;
          result[1] += 0.9461538461538461;
          result[2] += 0;
          result[3] += 0.0057692307692307696;
          result[4] += 0.046153846153846156;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.87751677852349;
          result[1] += 0.028523489932885907;
          result[2] += 0;
          result[3] += 0.02348993288590604;
          result[4] += 0.061241610738255035;
          result[5] += 0.009228187919463088;
        } else {
          result[0] += 0.21910112359550563;
          result[1] += 0.016853932584269662;
          result[2] += 0.2247191011235955;
          result[3] += 0.23876404494382023;
          result[4] += 0.047752808988764044;
          result[5] += 0.25280898876404495;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017857142857142856;
          result[3] += 0.03571428571428571;
          result[4] += 0.32142857142857145;
          result[5] += 0.625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05813953488372093;
          result[3] += 0.6046511627906976;
          result[4] += 0.046511627906976744;
          result[5] += 0.29069767441860467;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.046511627906976744;
          result[2] += 0.29069767441860467;
          result[3] += 0.46511627906976744;
          result[4] += 0;
          result[5] += 0.19767441860465115;
        } else {
          result[0] += 0.08411214953271028;
          result[1] += 0;
          result[2] += 0.6915887850467289;
          result[3] += 0.16822429906542055;
          result[4] += 0.04672897196261682;
          result[5] += 0.009345794392523364;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.005025125628140704;
          result[2] += 0.7889447236180904;
          result[3] += 0.19095477386934673;
          result[4] += 0.005025125628140704;
          result[5] += 0.010050251256281407;
        } else {
          result[0] += 0.004615384615384616;
          result[1] += 0;
          result[2] += 0.9538461538461539;
          result[3] += 0.03538461538461538;
          result[4] += 0;
          result[5] += 0.006153846153846154;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0.00851063829787234;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9829787234042553;
          result[5] += 0.00851063829787234;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0026845637583892616;
          result[2] += 0.004026845637583893;
          result[3] += 0.04697986577181208;
          result[4] += 0.04161073825503356;
          result[5] += 0.9046979865771813;
        } else {
          result[0] += 0.09221311475409837;
          result[1] += 0.010245901639344262;
          result[2] += 0.01639344262295082;
          result[3] += 0.32991803278688525;
          result[4] += 0.05942622950819672;
          result[5] += 0.4918032786885246;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.11290322580645161;
          result[2] += 0.016129032258064516;
          result[3] += 0;
          result[4] += 0.8709677419354839;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9932735426008968;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006726457399103139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8245749613601236;
          result[1] += 0.02936630602782071;
          result[2] += 0;
          result[3] += 0.023956723338485315;
          result[4] += 0.09659969088098919;
          result[5] += 0.025502318392581144;
        } else {
          result[0] += 0.21993127147766323;
          result[1] += 0.03436426116838488;
          result[2] += 0.18213058419243985;
          result[3] += 0.25773195876288657;
          result[4] += 0.09621993127147767;
          result[5] += 0.20962199312714777;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0.7941176470588235;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0782608695652174;
          result[3] += 0.5478260869565217;
          result[4] += 0;
          result[5] += 0.3739130434782609;
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4827586206896552;
          result[3] += 0.42758620689655175;
          result[4] += 0;
          result[5] += 0.0896551724137931;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.08695652173913043;
          result[2] += 0.7478260869565218;
          result[3] += 0.06086956521739131;
          result[4] += 0.02608695652173913;
          result[5] += 0.034782608695652174;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007518796992481203;
          result[1] += 0;
          result[2] += 0.9323308270676691;
          result[3] += 0.05012531328320802;
          result[4] += 0.002506265664160401;
          result[5] += 0.007518796992481203;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.014634146341463415;
          result[1] += 0.03414634146341464;
          result[2] += 0.014634146341463415;
          result[3] += 0;
          result[4] += 0.8878048780487805;
          result[5] += 0.04878048780487805;
        } else {
          result[0] += 0.3142857142857143;
          result[1] += 0;
          result[2] += 0.009523809523809525;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.3904761904761905;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.012048192771084338;
          result[2] += 0;
          result[3] += 0.03493975903614458;
          result[4] += 0.046987951807228916;
          result[5] += 0.9060240963855422;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.3681159420289855;
          result[4] += 0.020289855072463767;
          result[5] += 0.5449275362318841;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.967005076142132;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.030456852791878177;
          result[5] += 0.002538071065989848;
        } else {
          result[0] += 0;
          result[1] += 0.30057803468208094;
          result[2] += 0;
          result[3] += 0.10404624277456648;
          result[4] += 0.5722543352601156;
          result[5] += 0.023121387283236993;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8496420047732699;
          result[1] += 0.019093078758949885;
          result[2] += 0.0031821797931583145;
          result[3] += 0.02068416865552904;
          result[4] += 0.08273667462211616;
          result[5] += 0.024661893396976935;
        } else {
          result[0] += 0.19387755102040816;
          result[1] += 0.023809523809523808;
          result[2] += 0.1292517006802721;
          result[3] += 0.2585034013605442;
          result[4] += 0.08843537414965986;
          result[5] += 0.30612244897959184;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024691358024691357;
          result[3] += 0.20987654320987653;
          result[4] += 0.07407407407407407;
          result[5] += 0.691358024691358;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07792207792207792;
          result[3] += 0.8051948051948052;
          result[4] += 0;
          result[5] += 0.11688311688311688;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.5882352941176471;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.20588235294117646;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.004405286343612335;
          result[2] += 0.6343612334801763;
          result[3] += 0.28634361233480177;
          result[4] += 0.00881057268722467;
          result[5] += 0.06607929515418502;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9454545454545454;
          result[3] += 0.05454545454545454;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        } else {
          result[0] += 0.015781922525107604;
          result[1] += 0;
          result[2] += 0.9239598278335724;
          result[3] += 0.043041606886657105;
          result[4] += 0.00430416068866571;
          result[5] += 0.01291248206599713;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  
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
