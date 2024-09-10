
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008583690987124463;
          result[3] += 0.004291845493562232;
          result[4] += 0.9570815450643777;
          result[5] += 0.030042918454935622;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.001287001287001287;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029601029601029602;
          result[4] += 0.04247104247104247;
          result[5] += 0.9266409266409267;
        } else {
          result[0] += 0.10557768924302789;
          result[1] += 0.035856573705179286;
          result[2] += 0;
          result[3] += 0.30278884462151395;
          result[4] += 0.1254980079681275;
          result[5] += 0.4302788844621514;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.005194805194805195;
          result[1] += 0.974025974025974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02077922077922078;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7592446892210858;
          result[1] += 0.05114083398898505;
          result[2] += 0.003933910306845004;
          result[3] += 0.01730920535011802;
          result[4] += 0.13768686073957515;
          result[5] += 0.03068450039339103;
        } else {
          result[0] += 0.18840579710144928;
          result[1] += 0.03260869565217391;
          result[2] += 0.20833333333333334;
          result[3] += 0.26992753623188404;
          result[4] += 0.05615942028985507;
          result[5] += 0.24456521739130435;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0.609375;
          result[4] += 0;
          result[5] += 0.078125;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.01851851851851852;
          result[1] += 0;
          result[2] += 0.888888888888889;
          result[3] += 0.01851851851851852;
          result[4] += 0;
          result[5] += 0.07407407407407408;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.18181818181818182;
          result[4] += 0.45454545454545453;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.004608294930875576;
          result[1] += 0;
          result[2] += 0.934331797235023;
          result[3] += 0.052995391705069124;
          result[4] += 0;
          result[5] += 0.008064516129032258;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978021978021978;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002197802197802198;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0036101083032490976;
          result[1] += 0.02888086642599278;
          result[2] += 0.0036101083032490976;
          result[3] += 0.0036101083032490976;
          result[4] += 0.924187725631769;
          result[5] += 0.036101083032490974;
        } else {
          result[0] += 0.023076923076923078;
          result[1] += 0.019230769230769232;
          result[2] += 0.019230769230769232;
          result[3] += 0.16846153846153847;
          result[4] += 0.04846153846153846;
          result[5] += 0.7215384615384616;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7395982783357246;
          result[1] += 0.0351506456241033;
          result[2] += 0.005738880918220947;
          result[3] += 0.040172166427546625;
          result[4] += 0.133428981348637;
          result[5] += 0.04591104734576758;
        } else {
          result[0] += 0.16666666666666669;
          result[1] += 0.04687500000000001;
          result[2] += 0.26562500000000006;
          result[3] += 0.25000000000000006;
          result[4] += 0.03385416666666667;
          result[5] += 0.23697916666666669;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.0967741935483871;
          result[3] += 0.7419354838709677;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46808510638297873;
          result[3] += 0.2127659574468085;
          result[4] += 0;
          result[5] += 0.3191489361702128;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7356321839080461;
          result[3] += 0.2298850574712644;
          result[4] += 0;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0.0038119440914866584;
          result[1] += 0;
          result[2] += 0.9453621346886912;
          result[3] += 0.04701397712833545;
          result[4] += 0;
          result[5] += 0.0038119440914866584;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0.0037593984962406013;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0037593984962406013;
          result[4] += 0.9323308270676691;
          result[5] += 0.06015037593984962;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.002677376171352075;
          result[1] += 0;
          result[2] += 0.006693440428380187;
          result[3] += 0.028112449799196786;
          result[4] += 0.020080321285140562;
          result[5] += 0.9424364123159303;
        } else {
          result[0] += 0.08361774744027303;
          result[1] += 0.03924914675767918;
          result[2] += 0.03583617747440273;
          result[3] += 0.3225255972696246;
          result[4] += 0.07337883959044368;
          result[5] += 0.4453924914675768;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0.11666666666666667;
          result[1] += 0.08333333333333333;
          result[2] += 0.027777777777777776;
          result[3] += 0.011111111111111112;
          result[4] += 0.7444444444444445;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0.6763565891472868;
          result[1] += 0.01808785529715762;
          result[2] += 0.06330749354005168;
          result[3] += 0.10077519379844961;
          result[4] += 0.06395348837209303;
          result[5] += 0.07751937984496124;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9642857142857143;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.03529411764705882;
          result[2] += 0.15294117647058825;
          result[3] += 0.6823529411764706;
          result[4] += 0;
          result[5] += 0.12941176470588237;
        } else {
          result[0] += 0.06493506493506493;
          result[1] += 0;
          result[2] += 0.7402597402597403;
          result[3] += 0.1038961038961039;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2777777777777778;
          result[3] += 0.3888888888888889;
          result[4] += 0.05555555555555555;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7868852459016393;
          result[3] += 0.09836065573770492;
          result[4] += 0;
          result[5] += 0.11475409836065574;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0.8544303797468354;
          result[3] += 0.13291139240506328;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001584786053882726;
          result[1] += 0;
          result[2] += 0.971473851030111;
          result[3] += 0.025356576862123614;
          result[4] += 0;
          result[5] += 0.001584786053882726;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006920415224913495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9550173010380623;
          result[5] += 0.03806228373702422;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027377521613832854;
          result[4] += 0.027377521613832854;
          result[5] += 0.9452449567723343;
        } else {
          result[0] += 0.09671179883945841;
          result[1] += 0.04642166344294004;
          result[2] += 0;
          result[3] += 0.3036750483558994;
          result[4] += 0.1218568665377176;
          result[5] += 0.43133462282398455;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.4794520547945205;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5205479452054794;
          result[5] += 0;
        } else {
          result[0] += 0.0023529411764705876;
          result[1] += 0.9788235294117645;
          result[2] += 0.004705882352941175;
          result[3] += 0.004705882352941175;
          result[4] += 0.00941176470588235;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0.3584905660377358;
          result[1] += 0.030660377358490566;
          result[2] += 0.025943396226415096;
          result[3] += 0.1509433962264151;
          result[4] += 0.11556603773584906;
          result[5] += 0.31839622641509435;
        } else {
          result[0] += 0.8194044188280499;
          result[1] += 0.04514889529298751;
          result[2] += 0.01440922190201729;
          result[3] += 0.025936599423631124;
          result[4] += 0.08069164265129683;
          result[5] += 0.01440922190201729;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0.1724137931034483;
          result[4] += 0.08620689655172414;
          result[5] += 0.7068965517241379;
        } else {
          result[0] += 0;
          result[1] += 0.024691358024691357;
          result[2] += 0.07407407407407407;
          result[3] += 0.7654320987654321;
          result[4] += 0.037037037037037035;
          result[5] += 0.09876543209876543;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0.013333333333333334;
          result[1] += 0.13333333333333333;
          result[2] += 0.09333333333333334;
          result[3] += 0.4666666666666667;
          result[4] += 0.04;
          result[5] += 0.25333333333333335;
        } else {
          result[0] += 0.013333333333333334;
          result[1] += 0;
          result[2] += 0.68;
          result[3] += 0.22666666666666666;
          result[4] += 0;
          result[5] += 0.08;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.008771929824561403;
          result[1] += 0.0021929824561403508;
          result[2] += 0.8135964912280702;
          result[3] += 0.14692982456140352;
          result[4] += 0.0043859649122807015;
          result[5] += 0.02412280701754386;
        } else {
          result[0] += 0.7209302325581395;
          result[1] += 0;
          result[2] += 0.20930232558139536;
          result[3] += 0.06976744186046512;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
          result[0] += 0.0379746835443038;
          result[1] += 0;
          result[2] += 0.7721518987341772;
          result[3] += 0.12658227848101267;
          result[4] += 0;
          result[5] += 0.06329113924050633;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9857433808553971;
          result[3] += 0.014256619144602852;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9951923076923077;
          result[5] += 0.004807692307692308;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6896551724137931;
          result[5] += 0.27586206896551724;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19444444444444445;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.0022598870056497176;
          result[1] += 0.0022598870056497176;
          result[2] += 0.003389830508474576;
          result[3] += 0.031638418079096044;
          result[4] += 0.03954802259887006;
          result[5] += 0.9209039548022598;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.099601593625498;
          result[1] += 0.01593625498007968;
          result[2] += 0.01195219123505976;
          result[3] += 0.20318725099601595;
          result[4] += 0.08366533864541832;
          result[5] += 0.5856573705179283;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0.027932960893854747;
          result[2] += 0.00558659217877095;
          result[3] += 0.7262569832402235;
          result[4] += 0;
          result[5] += 0.2346368715083799;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
          result[0] += 0.03529411764705882;
          result[1] += 0.3352941176470588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.611764705882353;
          result[5] += 0.01764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0.9950980392156863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004901960784313725;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
          result[0] += 0.16891891891891891;
          result[1] += 0.11486486486486487;
          result[2] += 0;
          result[3] += 0.28378378378378377;
          result[4] += 0.08108108108108109;
          result[5] += 0.35135135135135137;
        } else {
          result[0] += 0.8377425044091711;
          result[1] += 0.020282186948853614;
          result[2] += 0.007936507936507936;
          result[3] += 0.03350970017636684;
          result[4] += 0.08112874779541446;
          result[5] += 0.019400352733686066;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.018450184501845022;
          result[2] += 0.27675276752767536;
          result[3] += 0.5018450184501846;
          result[4] += 0.003690036900369004;
          result[5] += 0.19926199261992622;
        } else {
          result[0] += 0.010526315789473686;
          result[1] += 0.02105263157894737;
          result[2] += 0.736842105263158;
          result[3] += 0.16842105263157897;
          result[4] += 0;
          result[5] += 0.06315789473684212;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          result[0] += 0.34146341463414637;
          result[1] += 0;
          result[2] += 0.5121951219512195;
          result[3] += 0.012195121951219513;
          result[4] += 0.07317073170731707;
          result[5] += 0.06097560975609756;
        } else {
          result[0] += 0.003260869565217391;
          result[1] += 0;
          result[2] += 0.9304347826086956;
          result[3] += 0.05217391304347826;
          result[4] += 0.003260869565217391;
          result[5] += 0.010869565217391304;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)47.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          result[0] += 0.003703703703703704;
          result[1] += 0.014814814814814815;
          result[2] += 0;
          result[3] += 0.003703703703703704;
          result[4] += 0.9666666666666667;
          result[5] += 0.011111111111111112;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7647058823529411;
          result[5] += 0.23529411764705882;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9387755102040817;
          result[5] += 0.061224489795918366;
        } else {
          result[0] += 0.022962112514351322;
          result[1] += 0.001148105625717566;
          result[2] += 0;
          result[3] += 0.03788748564867968;
          result[4] += 0.04822043628013777;
          result[5] += 0.8897818599311137;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
          result[0] += 0.5272727272727273;
          result[1] += 0.2181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2545454545454546;
          result[5] += 0;
        } else {
          result[0] += 0.011560693641618497;
          result[1] += 0.011560693641618497;
          result[2] += 0.0838150289017341;
          result[3] += 0.4624277456647399;
          result[4] += 0.028901734104046242;
          result[5] += 0.40173410404624277;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004524886877828055;
          result[1] += 0.9932126696832579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022624434389140274;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.1142857142857143;
          result[1] += 0.1942857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6457142857142858;
          result[5] += 0.04571428571428572;
        } else {
          result[0] += 0.7501794687724336;
          result[1] += 0.010050251256281407;
          result[2] += 0.027279253409906678;
          result[3] += 0.061019382627422826;
          result[4] += 0.06389088298636038;
          result[5] += 0.08758076094759512;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.06282722513089005;
          result[2] += 0.2513089005235602;
          result[3] += 0.518324607329843;
          result[4] += 0.02617801047120419;
          result[5] += 0.14136125654450263;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0.03508771929824561;
          result[2] += 0.5964912280701754;
          result[3] += 0.017543859649122806;
          result[4] += 0.08771929824561403;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6914893617021277;
          result[3] += 0.19148936170212766;
          result[4] += 0.010638297872340425;
          result[5] += 0.10638297872340426;
        } else {
          result[0] += 0.021251475796930347;
          result[1] += 0;
          result[2] += 0.9220779220779222;
          result[3] += 0.04958677685950414;
          result[4] += 0;
          result[5] += 0.007083825265643448;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.014035087719298246;
          result[2] += 0;
          result[3] += 0.007017543859649123;
          result[4] += 0.9403508771929825;
          result[5] += 0.03859649122807018;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03917910447761194;
          result[1] += 0.011194029850746268;
          result[2] += 0.0009328358208955224;
          result[3] += 0.04664179104477612;
          result[4] += 0.10354477611940298;
          result[5] += 0.7985074626865671;
        } else {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.034782608695652174;
          result[3] += 0.6695652173913044;
          result[4] += 0;
          result[5] += 0.27391304347826084;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98.5) ) ) {
          result[0] += 0.008620689655172415;
          result[1] += 0.19827586206896555;
          result[2] += 0;
          result[3] += 0.03448275862068966;
          result[4] += 0.7327586206896552;
          result[5] += 0.025862068965517244;
        } else {
          result[0] += 0.0049382716049382715;
          result[1] += 0.9950617283950617;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8125;
          result[1] += 0.05393835616438356;
          result[2] += 0.0017123287671232876;
          result[3] += 0.023116438356164382;
          result[4] += 0.08647260273972603;
          result[5] += 0.02226027397260274;
        } else {
          result[0] += 0.15301724137931033;
          result[1] += 0.02586206896551724;
          result[2] += 0.14655172413793102;
          result[3] += 0.27155172413793105;
          result[4] += 0.04956896551724138;
          result[5] += 0.35344827586206895;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8260869565217391;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45833333333333337;
          result[3] += 0.37500000000000006;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8064516129032259;
          result[3] += 0.06451612903225808;
          result[4] += 0;
          result[5] += 0.12903225806451615;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26086956521739135;
          result[3] += 0.5217391304347827;
          result[4] += 0;
          result[5] += 0.2173913043478261;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0.7317073170731707;
          result[3] += 0.17073170731707318;
          result[4] += 0;
          result[5] += 0.04878048780487805;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05056179775280899;
          result[1] += 0;
          result[2] += 0.7808988764044944;
          result[3] += 0.15168539325842698;
          result[4] += 0;
          result[5] += 0.016853932584269662;
        } else {
          result[0] += 0.007215007215007216;
          result[1] += 0;
          result[2] += 0.9653679653679654;
          result[3] += 0.02308802308802309;
          result[4] += 0;
          result[5] += 0.00432900432900433;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101) ) ) {
          result[0] += 0.007246376811594203;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007246376811594203;
          result[4] += 0.8840579710144928;
          result[5] += 0.10144927536231885;
        } else {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0.4090909090909091;
          result[4] += 0.13636363636363635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.07127659574468086;
          result[1] += 0.0010638297872340426;
          result[2] += 0.0010638297872340426;
          result[3] += 0.03829787234042553;
          result[4] += 0.07127659574468086;
          result[5] += 0.8170212765957446;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0.0029239766081871343;
          result[2] += 0.008771929824561403;
          result[3] += 0.5467836257309941;
          result[4] += 0.005847953216374269;
          result[5] += 0.4269005847953216;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7607461476074615;
          result[1] += 0.05190592051905921;
          result[2] += 0.0008110300081103001;
          result[3] += 0.025141930251419302;
          result[4] += 0.1386861313868613;
          result[5] += 0.0227088402270884;
        } else {
          result[0] += 0.21535181236673773;
          result[1] += 0.023454157782515993;
          result[2] += 0.26865671641791045;
          result[3] += 0.27292110874200426;
          result[4] += 0.042643923240938165;
          result[5] += 0.17697228144989338;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0.5454545454545454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13846153846153847;
          result[3] += 0.7538461538461538;
          result[4] += 0;
          result[5] += 0.1076923076923077;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.041666666666666664;
          result[5] += 0.7916666666666666;
        } else {
          result[0] += 0.06153846153846154;
          result[1] += 0;
          result[2] += 0.7076923076923077;
          result[3] += 0.1076923076923077;
          result[4] += 0;
          result[5] += 0.12307692307692308;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5824175824175826;
          result[3] += 0.3626373626373627;
          result[4] += 0.010989010989010992;
          result[5] += 0.043956043956043966;
        } else {
          result[0] += 0.01079136690647482;
          result[1] += 0;
          result[2] += 0.8633093525179856;
          result[3] += 0.10431654676258993;
          result[4] += 0;
          result[5] += 0.02158273381294964;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0018315018315018315;
          result[1] += 0;
          result[2] += 0.9761904761904762;
          result[3] += 0.016483516483516484;
          result[4] += 0;
          result[5] += 0.005494505494505495;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004629629629629629;
          result[1] += 0.009259259259259259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9861111111111112;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.9770114942528736;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022988505747126436;
          result[5] += 0;
        } else {
          result[0] += 0.03816793893129771;
          result[1] += 0.007633587786259542;
          result[2] += 0;
          result[3] += 0.0916030534351145;
          result[4] += 0.5267175572519084;
          result[5] += 0.33587786259541985;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.5178571428571429;
          result[5] += 0.17857142857142858;
        } else {
          result[0] += 0.0029211295034079843;
          result[1] += 0.0019474196689386564;
          result[2] += 0;
          result[3] += 0.0759493670886076;
          result[4] += 0.04673807205452775;
          result[5] += 0.872444011684518;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004694835680751174;
          result[3] += 0.7370892018779343;
          result[4] += 0;
          result[5] += 0.25821596244131456;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7832278481012658;
          result[1] += 0.05063291139240506;
          result[2] += 0.0031645569620253164;
          result[3] += 0.030063291139240507;
          result[4] += 0.12341772151898735;
          result[5] += 0.00949367088607595;
        } else {
          result[0] += 0.0641025641025641;
          result[1] += 0.0641025641025641;
          result[2] += 0.2564102564102564;
          result[3] += 0.26282051282051283;
          result[4] += 0.057692307692307696;
          result[5] += 0.2948717948717949;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99) ) ) {
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
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0.5333333333333333;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.37777777777777777;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.018018018018018018;
          result[2] += 0.24324324324324326;
          result[3] += 0.42342342342342343;
          result[4] += 0.04054054054054054;
          result[5] += 0.24774774774774774;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.4666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.0011185682326621924;
          result[1] += 0;
          result[2] += 0.9340044742729307;
          result[3] += 0.06152125279642058;
          result[4] += 0;
          result[5] += 0.003355704697986577;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.05825242718446602;
          result[1] += 0.003236245954692557;
          result[2] += 0;
          result[3] += 0.003236245954692557;
          result[4] += 0.8187702265372169;
          result[5] += 0.11650485436893204;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0.16666666666666666;
          result[2] += 0.07575757575757576;
          result[3] += 0.06060606060606061;
          result[4] += 0.09090909090909091;
          result[5] += 0.15151515151515152;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0031413612565445027;
          result[2] += 0;
          result[3] += 0.05549738219895288;
          result[4] += 0.09424083769633508;
          result[5] += 0.8471204188481676;
        } else {
          result[0] += 0.010526315789473684;
          result[1] += 0.04912280701754386;
          result[2] += 0.0035087719298245615;
          result[3] += 0.4982456140350877;
          result[4] += 0.09824561403508772;
          result[5] += 0.34035087719298246;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          result[0] += 0.22153846153846155;
          result[1] += 0.04;
          result[2] += 0.024615384615384615;
          result[3] += 0.20307692307692307;
          result[4] += 0.10153846153846154;
          result[5] += 0.40923076923076923;
        } else {
          result[0] += 0.7686335403726706;
          result[1] += 0.03183229813664595;
          result[2] += 0.032608695652173905;
          result[3] += 0.03726708074534161;
          result[4] += 0.10791925465838506;
          result[5] += 0.021739130434782605;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.6125;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.11538461538461539;
          result[1] += 0;
          result[2] += 0.7307692307692307;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8214285714285715;
          result[3] += 0.14285714285714288;
          result[4] += 0;
          result[5] += 0.03571428571428572;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.36363636363636365;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.5454545454545454;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03832752613240418;
          result[1] += 0;
          result[2] += 0.8013937282229965;
          result[3] += 0.1254355400696864;
          result[4] += 0.013937282229965157;
          result[5] += 0.020905923344947737;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9557522123893806;
          result[3] += 0.03982300884955752;
          result[4] += 0;
          result[5] += 0.004424778761061947;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9948051948051948;
          result[3] += 0.005194805194805195;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.018050541516245487;
          result[1] += 0.05054151624548736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9061371841155235;
          result[5] += 0.02527075812274368;
        } else {
          result[0] += 0.49528301886792453;
          result[1] += 0.0047169811320754715;
          result[2] += 0.04245283018867924;
          result[3] += 0.02830188679245283;
          result[4] += 0.2783018867924528;
          result[5] += 0.1509433962264151;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04720496894409938;
          result[4] += 0.06832298136645963;
          result[5] += 0.884472049689441;
        } else {
          result[0] += 0.023076923076923078;
          result[1] += 0.023076923076923078;
          result[2] += 0.03461538461538462;
          result[3] += 0.3;
          result[4] += 0.25384615384615383;
          result[5] += 0.36538461538461536;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          result[0] += 0.08766233766233766;
          result[1] += 0.00974025974025974;
          result[2] += 0;
          result[3] += 0.38961038961038963;
          result[4] += 0.10064935064935066;
          result[5] += 0.41233766233766234;
        } else {
          result[0] += 0.7561361836896279;
          result[1] += 0.07996832937450514;
          result[2] += 0.03800475059382423;
          result[3] += 0.04117181314330958;
          result[4] += 0.07205067300079177;
          result[5] += 0.012668250197941409;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.075;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.175;
          result[5] += 0;
        } else {
          result[0] += 0.002638522427440633;
          result[1] += 0.9973614775725593;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0.4024390243902439;
          result[4] += 0.06097560975609756;
          result[5] += 0.524390243902439;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25833333333333336;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.15833333333333333;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.35;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0.09523809523809523;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.5238095238095238;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.08974358974358974;
          result[2] += 0.6153846153846154;
          result[3] += 0.038461538461538464;
          result[4] += 0.05128205128205128;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5897435897435898;
          result[3] += 0.32051282051282054;
          result[4] += 0.02564102564102564;
          result[5] += 0.0641025641025641;
        } else {
          result[0] += 0.0023529411764705885;
          result[1] += 0;
          result[2] += 0.9470588235294118;
          result[3] += 0.048235294117647064;
          result[4] += 0;
          result[5] += 0.0023529411764705885;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.019138755980861243;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9282296650717703;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0;
          result[1] += 0.65625;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.28125;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017879948914431672;
          result[4] += 0.05108556832694764;
          result[5] += 0.9310344827586207;
        } else {
          result[0] += 0.06367041198501873;
          result[1] += 0.016853932584269662;
          result[2] += 0.035580524344569285;
          result[3] += 0.3595505617977528;
          result[4] += 0.0749063670411985;
          result[5] += 0.449438202247191;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.15789473684210525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8421052631578947;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9925373134328358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007462686567164179;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7362722351121423;
          result[1] += 0.020108275328692964;
          result[2] += 0.005413766434648105;
          result[3] += 0.029389017788089715;
          result[4] += 0.17014694508894046;
          result[5] += 0.038669760247486466;
        } else {
          result[0] += 0.20876826722338204;
          result[1] += 0.07306889352818371;
          result[2] += 0.20668058455114824;
          result[3] += 0.2150313152400835;
          result[4] += 0.05219206680584551;
          result[5] += 0.24425887265135698;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.06;
          result[3] += 0.14;
          result[4] += 0;
          result[5] += 0.76;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03614457831325301;
          result[1] += 0.024096385542168676;
          result[2] += 0.37349397590361444;
          result[3] += 0.4819277108433735;
          result[4] += 0;
          result[5] += 0.08433734939759036;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.012232415902140673;
          result[1] += 0.0030581039755351682;
          result[2] += 0.8348623853211009;
          result[3] += 0.12232415902140673;
          result[4] += 0;
          result[5] += 0.027522935779816515;
        } else {
          result[0] += 0.0018148820326678765;
          result[1] += 0;
          result[2] += 0.9745916515426497;
          result[3] += 0.023593466424682397;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.0071174377224199285;
          result[1] += 0.0035587188612099642;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9039145907473309;
          result[5] += 0.08540925266903915;
        } else {
          result[0] += 0.5945945945945945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02702702702702702;
          result[4] += 0.14864864864864863;
          result[5] += 0.2297297297297297;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05064935064935065;
          result[4] += 0.048051948051948054;
          result[5] += 0.9012987012987013;
        } else {
          result[0] += 0.002551020408163265;
          result[1] += 0.05102040816326531;
          result[2] += 0.04081632653061224;
          result[3] += 0.33418367346938777;
          result[4] += 0.05357142857142857;
          result[5] += 0.5178571428571429;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
        } else {
          result[0] += 0.012019230769230772;
          result[1] += 0.966346153846154;
          result[2] += 0;
          result[3] += 0.007211538461538463;
          result[4] += 0.014423076923076926;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.006622516556291391;
          result[1] += 0.4768211920529801;
          result[2] += 0.006622516556291391;
          result[3] += 0.052980132450331126;
          result[4] += 0.45695364238410596;
          result[5] += 0;
        } else {
          result[0] += 0.7725925925925924;
          result[1] += 0.002222222222222222;
          result[2] += 0.03555555555555555;
          result[3] += 0.07037037037037036;
          result[4] += 0.06814814814814814;
          result[5] += 0.0511111111111111;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03278688524590164;
          result[3] += 0.11475409836065574;
          result[4] += 0.09836065573770492;
          result[5] += 0.7540983606557377;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06474820143884892;
          result[3] += 0.5179856115107914;
          result[4] += 0;
          result[5] += 0.4172661870503597;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7333333333333334;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0.02857142857142857;
          result[1] += 0.11428571428571428;
          result[2] += 0.14285714285714285;
          result[3] += 0.3142857142857143;
          result[4] += 0.22857142857142856;
          result[5] += 0.17142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.015151515151515152;
          result[2] += 0.7575757575757576;
          result[3] += 0.10606060606060606;
          result[4] += 0.015151515151515152;
          result[5] += 0.10606060606060606;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.011111111111111112;
          result[2] += 0.5;
          result[3] += 0.4111111111111111;
          result[4] += 0;
          result[5] += 0.07777777777777778;
        } else {
          result[0] += 0.009846827133479213;
          result[1] += 0;
          result[2] += 0.937636761487965;
          result[3] += 0.05142231947483589;
          result[4] += 0;
          result[5] += 0.0010940919037199124;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.015748031496062995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9566929133858268;
          result[5] += 0.02755905511811024;
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
          result[0] += 0.04069175991861648;
          result[1] += 0.006103763987792472;
          result[2] += 0;
          result[3] += 0.038657171922685654;
          result[4] += 0.08240081383519837;
          result[5] += 0.832146490335707;
        } else {
          result[0] += 0.03832752613240418;
          result[1] += 0;
          result[2] += 0.03484320557491289;
          result[3] += 0.5261324041811847;
          result[4] += 0.006968641114982578;
          result[5] += 0.39372822299651566;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.017582417582417582;
          result[1] += 0.9472527472527472;
          result[2] += 0.002197802197802198;
          result[3] += 0.017582417582417582;
          result[4] += 0.015384615384615385;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.781591263650546;
          result[1] += 0.029641185647425898;
          result[2] += 0.01014040561622465;
          result[3] += 0.028081123244929798;
          result[4] += 0.11388455538221529;
          result[5] += 0.036661466458658344;
        } else {
          result[0] += 0.2012987012987013;
          result[1] += 0.032467532467532464;
          result[2] += 0.1590909090909091;
          result[3] += 0.35714285714285715;
          result[4] += 0.05844155844155844;
          result[5] += 0.19155844155844157;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2647058823529412;
          result[4] += 0;
          result[5] += 0.7352941176470589;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.09917355371900827;
          result[2] += 0.2066115702479339;
          result[3] += 0.49586776859504134;
          result[4] += 0.024793388429752067;
          result[5] += 0.17355371900826447;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.24242424242424243;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03389830508474577;
          result[1] += 0;
          result[2] += 0.5847457627118645;
          result[3] += 0.3220338983050848;
          result[4] += 0;
          result[5] += 0.05932203389830509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9868421052631579;
          result[3] += 0.013157894736842105;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          result[0] += 0.28;
          result[1] += 0;
          result[2] += 0.64;
          result[3] += 0.08;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0267515923566879;
          result[1] += 0;
          result[2] += 0.9388535031847134;
          result[3] += 0.034394904458598725;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          result[0] += 0.015209125475285171;
          result[1] += 0.026615969581749048;
          result[2] += 0;
          result[3] += 0.011406844106463879;
          result[4] += 0.9201520912547528;
          result[5] += 0.026615969581749048;
        } else {
          result[0] += 0;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.05263157894736842;
          result[5] += 0.6842105263157895;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02783964365256125;
          result[1] += 0.005567928730512249;
          result[2] += 0;
          result[3] += 0.044543429844097995;
          result[4] += 0.0757238307349666;
          result[5] += 0.8463251670378619;
        } else {
          result[0] += 0.08057851239669421;
          result[1] += 0.01652892561983471;
          result[2] += 0.008264462809917356;
          result[3] += 0.4049586776859504;
          result[4] += 0.05371900826446281;
          result[5] += 0.4359504132231405;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7276091783863805;
          result[1] += 0.07253886010362694;
          result[2] += 0.006661732050333087;
          result[3] += 0.03182827535159141;
          result[4] += 0.13397483345669875;
          result[5] += 0.027387120651369355;
        } else {
          result[0] += 0.14012738853503184;
          result[1] += 0.03184713375796178;
          result[2] += 0.267515923566879;
          result[3] += 0.25477707006369427;
          result[4] += 0.08917197452229299;
          result[5] += 0.21656050955414013;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          result[0] += 0.004889975550122249;
          result[1] += 0.9926650366748166;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024449877750611247;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.23214285714285715;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5294117647058824;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.13333333333333333;
          result[4] += 0.13333333333333333;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7209302325581395;
          result[3] += 0.27906976744186046;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32432432432432434;
          result[3] += 0.35135135135135137;
          result[4] += 0;
          result[5] += 0.32432432432432434;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7727272727272727;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.3636363636363637;
          result[1] += 0;
          result[2] += 0.5454545454545455;
          result[3] += 0.04545454545454546;
          result[4] += 0;
          result[5] += 0.04545454545454546;
        } else {
          result[0] += 0.013761467889908258;
          result[1] += 0;
          result[2] += 0.9346330275229358;
          result[3] += 0.0481651376146789;
          result[4] += 0;
          result[5] += 0.0034403669724770644;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.9130434782608695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        } else {
          result[0] += 0.0029940119760479044;
          result[1] += 0.014970059880239521;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9550898203592815;
          result[5] += 0.02694610778443114;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0.9977116704805492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002288329519450801;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004016064257028112;
          result[3] += 0.02677376171352075;
          result[4] += 0.028112449799196786;
          result[5] += 0.9410977242302544;
        } else {
          result[0] += 0.09568480300187618;
          result[1] += 0.03189493433395872;
          result[2] += 0.0075046904315197;
          result[3] += 0.3902439024390244;
          result[4] += 0.0900562851782364;
          result[5] += 0.38461538461538464;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3906810035842294;
          result[1] += 0.02867383512544803;
          result[2] += 0.03763440860215054;
          result[3] += 0.2168458781362007;
          result[4] += 0.08422939068100359;
          result[5] += 0.24193548387096775;
        } else {
          result[0] += 0.7956204379562044;
          result[1] += 0.014598540145985401;
          result[2] += 0.08759124087591241;
          result[3] += 0.03375912408759124;
          result[4] += 0.060218978102189784;
          result[5] += 0.008211678832116789;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0.03333333333333333;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19444444444444445;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.1388888888888889;
        } else {
          result[0] += 0.013157894736842105;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.2894736842105263;
          result[4] += 0;
          result[5] += 0.013157894736842105;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0.13333333333333333;
          result[5] += 0.4666666666666667;
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
          result[0] += 0.04;
          result[1] += 0.03;
          result[2] += 0.66;
          result[3] += 0.23;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0.0025000000000000005;
          result[1] += 0;
          result[2] += 0.9587500000000001;
          result[3] += 0.036250000000000004;
          result[4] += 0;
          result[5] += 0.0025000000000000005;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.004347826086956522;
          result[1] += 0.02608695652173913;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9608695652173913;
          result[5] += 0.008695652173913044;
        } else {
          result[0] += 0.0784313725490196;
          result[1] += 0.0196078431372549;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.5294117647058824;
          result[5] += 0.3137254901960784;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03270042194092827;
          result[1] += 0.005274261603375527;
          result[2] += 0;
          result[3] += 0.05590717299578059;
          result[4] += 0.08544303797468354;
          result[5] += 0.820675105485232;
        } else {
          result[0] += 0.08490566037735849;
          result[1] += 0.04009433962264151;
          result[2] += 0.04481132075471698;
          result[3] += 0.5235849056603774;
          result[4] += 0.025943396226415096;
          result[5] += 0.2806603773584906;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
          result[0] += 0.004597701149425287;
          result[1] += 0.9816091954022989;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013793103448275862;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.28301886792452835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7075471698113208;
          result[5] += 0.009433962264150945;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8378870673952641;
          result[1] += 0.03642987249544627;
          result[2] += 0;
          result[3] += 0.01912568306010929;
          result[4] += 0.08287795992714025;
          result[5] += 0.023679417122040074;
        } else {
          result[0] += 0.20238095238095238;
          result[1] += 0.02142857142857143;
          result[2] += 0.2619047619047619;
          result[3] += 0.21904761904761905;
          result[4] += 0.04047619047619048;
          result[5] += 0.25476190476190474;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13953488372093023;
          result[4] += 0.11627906976744186;
          result[5] += 0.7441860465116279;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13513513513513514;
          result[3] += 0.7297297297297297;
          result[4] += 0;
          result[5] += 0.13513513513513514;
        } else {
          result[0] += 0;
          result[1] += 0.03787878787878788;
          result[2] += 0.5681818181818182;
          result[3] += 0.2878787878787879;
          result[4] += 0;
          result[5] += 0.10606060606060606;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9444444444444444;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.024793388429752067;
          result[1] += 0;
          result[2] += 0.8057851239669421;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.03305785123966942;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9727564102564102;
          result[3] += 0.027243589743589744;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.22895622895622897;
          result[1] += 0.006734006734006734;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7441077441077442;
          result[5] += 0.020202020202020204;
        } else {
          result[0] += 0;
          result[1] += 0.06451612903225806;
          result[2] += 0;
          result[3] += 0.12903225806451613;
          result[4] += 0.22580645161290322;
          result[5] += 0.5806451612903226;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0029940119760479044;
          result[2] += 0;
          result[3] += 0.05189620758483034;
          result[4] += 0.07684630738522955;
          result[5] += 0.8682634730538922;
        } else {
          result[0] += 0;
          result[1] += 0.003236245954692557;
          result[2] += 0.009708737864077669;
          result[3] += 0.5469255663430421;
          result[4] += 0.022653721682847898;
          result[5] += 0.4174757281553398;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.27586206896551724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7241379310344828;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9886363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011363636363636364;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7838070628768303;
          result[1] += 0.025839793281653745;
          result[2] += 0.0068906115417743325;
          result[3] += 0.03617571059431524;
          result[4] += 0.12144702842377261;
          result[5] += 0.025839793281653745;
        } else {
          result[0] += 0.21890547263681592;
          result[1] += 0.06716417910447761;
          result[2] += 0.21393034825870647;
          result[3] += 0.26865671641791045;
          result[4] += 0.05472636815920398;
          result[5] += 0.17661691542288557;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1414141414141414;
          result[3] += 0.6868686868686869;
          result[4] += 0;
          result[5] += 0.1717171717171717;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.07142857142857142;
          result[4] += 0.03571428571428571;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.11363636363636363;
          result[4] += 0;
          result[5] += 0.06818181818181818;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.015384615384615382;
          result[1] += 0;
          result[2] += 0.6461538461538461;
          result[3] += 0.29230769230769227;
          result[4] += 0;
          result[5] += 0.04615384615384615;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005847953216374269;
          result[1] += 0;
          result[2] += 0.9415204678362573;
          result[3] += 0.042105263157894736;
          result[4] += 0;
          result[5] += 0.010526315789473684;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0.09451219512195122;
          result[2] += 0;
          result[3] += 0.021341463414634148;
          result[4] += 0.7560975609756098;
          result[5] += 0.11585365853658537;
        } else {
          result[0] += 0.8142857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.003500583430571762;
          result[2] += 0.003500583430571762;
          result[3] += 0.061843640606767794;
          result[4] += 0.060676779463243874;
          result[5] += 0.8704784130688448;
        } else {
          result[0] += 0.023195876288659795;
          result[1] += 0.002577319587628866;
          result[2] += 0.028350515463917526;
          result[3] += 0.5231958762886598;
          result[4] += 0.10051546391752578;
          result[5] += 0.32216494845360827;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9894736842105264;
          result[2] += 0;
          result[3] += 0.0042105263157894745;
          result[4] += 0.006315789473684211;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
          result[0] += 0.4882246376811595;
          result[1] += 0.053442028985507255;
          result[2] += 0.08786231884057973;
          result[3] += 0.1141304347826087;
          result[4] += 0.12318840579710147;
          result[5] += 0.13315217391304351;
        } else {
          result[0] += 0.9466666666666667;
          result[1] += 0;
          result[2] += 0.04380952380952381;
          result[3] += 0.0019047619047619048;
          result[4] += 0.0038095238095238095;
          result[5] += 0.0038095238095238095;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.020833333333333332;
          result[2] += 0.041666666666666664;
          result[3] += 0.10416666666666667;
          result[4] += 0;
          result[5] += 0.7916666666666666;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0.04000000000000001;
          result[1] += 0;
          result[2] += 0.24000000000000002;
          result[3] += 0.6000000000000001;
          result[4] += 0;
          result[5] += 0.12000000000000001;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8627450980392157;
          result[3] += 0.13725490196078433;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6060606060606061;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.12121212121212122;
        } else {
          result[0] += 0.0036540803897685747;
          result[1] += 0;
          result[2] += 0.953714981729598;
          result[3] += 0.037758830694275276;
          result[4] += 0;
          result[5] += 0.0048721071863581;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
          result[0] += 0.025179856115107913;
          result[1] += 0.0035971223021582736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.89568345323741;
          result[5] += 0.07553956834532374;
        } else {
          result[0] += 0;
          result[1] += 0.8666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19230769230769232;
          result[5] += 0.6538461538461539;
        } else {
          result[0] += 0.9709302325581395;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.029069767441860465;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10869565217391304;
          result[4] += 0.32608695652173914;
          result[5] += 0.5652173913043478;
        } else {
          result[0] += 0.0028368794326241137;
          result[1] += 0;
          result[2] += 0.00851063829787234;
          result[3] += 0.029787234042553193;
          result[4] += 0.02695035460992908;
          result[5] += 0.9319148936170213;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.02422145328719723;
          result[1] += 0.010380622837370242;
          result[2] += 0.006920415224913495;
          result[3] += 0.14186851211072665;
          result[4] += 0.2041522491349481;
          result[5] += 0.6124567474048442;
        } else {
          result[0] += 0.013333333333333334;
          result[1] += 0.0038095238095238095;
          result[2] += 0.049523809523809526;
          result[3] += 0.5485714285714286;
          result[4] += 0.011428571428571429;
          result[5] += 0.37333333333333335;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96.5) ) ) {
          result[0] += 0.010526315789473686;
          result[1] += 0.3052631578947369;
          result[2] += 0.010526315789473686;
          result[3] += 0.010526315789473686;
          result[4] += 0.6631578947368422;
          result[5] += 0;
        } else {
          result[0] += 0.0024271844660194173;
          result[1] += 0.9927184466019418;
          result[2] += 0;
          result[3] += 0.0024271844660194173;
          result[4] += 0.0024271844660194173;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          result[0] += 0.08;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.02666666666666667;
          result[4] += 0.49333333333333335;
          result[5] += 0;
        } else {
          result[0] += 0.8538538538538538;
          result[1] += 0.003003003003003003;
          result[2] += 0.03203203203203203;
          result[3] += 0.036036036036036036;
          result[4] += 0.03803803803803804;
          result[5] += 0.037037037037037035;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.04819277108433736;
          result[2] += 0.28915662650602414;
          result[3] += 0.49397590361445787;
          result[4] += 0;
          result[5] += 0.16867469879518074;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0.02040816326530612;
          result[2] += 0.7346938775510204;
          result[3] += 0.08163265306122448;
          result[4] += 0.12244897959183673;
          result[5] += 0.02040816326530612;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.3260869565217392;
          result[1] += 0.08695652173913045;
          result[2] += 0.3260869565217392;
          result[3] += 0.02173913043478261;
          result[4] += 0.04347826086956522;
          result[5] += 0.19565217391304351;
        } else {
          result[0] += 0.00602409638554217;
          result[1] += 0;
          result[2] += 0.9357429718875503;
          result[3] += 0.052208835341365466;
          result[4] += 0.0010040160642570282;
          result[5] += 0.005020080321285141;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004608294930875576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9124423963133641;
          result[5] += 0.08294930875576037;
        } else {
          result[0] += 0.44086021505376344;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.010752688172043012;
          result[4] += 0.1935483870967742;
          result[5] += 0.3225806451612903;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.004597701149425287;
          result[2] += 0;
          result[3] += 0.06206896551724138;
          result[4] += 0.07701149425287357;
          result[5] += 0.8563218390804598;
        } else {
          result[0] += 0.005494505494505495;
          result[1] += 0.07142857142857142;
          result[2] += 0.04120879120879121;
          result[3] += 0.4423076923076923;
          result[4] += 0.03296703296703297;
          result[5] += 0.4065934065934066;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7365056818181819;
          result[1] += 0.061789772727272735;
          result[2] += 0.016335227272727276;
          result[3] += 0.025568181818181823;
          result[4] += 0.1413352272727273;
          result[5] += 0.018465909090909095;
        } else {
          result[0] += 0.12661498708010335;
          result[1] += 0.00516795865633075;
          result[2] += 0.1834625322997416;
          result[3] += 0.29457364341085274;
          result[4] += 0.082687338501292;
          result[5] += 0.30749354005167956;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105.5) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0.1282051282051282;
          result[3] += 0.20512820512820512;
          result[4] += 0;
          result[5] += 0.6410256410256411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45806451612903226;
          result[3] += 0.4645161290322581;
          result[4] += 0;
          result[5] += 0.07741935483870968;
        } else {
          result[0] += 0;
          result[1] += 0.017241379310344827;
          result[2] += 0.9137931034482759;
          result[3] += 0.034482758620689655;
          result[4] += 0;
          result[5] += 0.034482758620689655;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0;
          result[2] += 0.41935483870967744;
          result[3] += 0.41935483870967744;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9459459459459459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.2;
        } else {
          result[0] += 0.0025906735751295338;
          result[1] += 0;
          result[2] += 0.961139896373057;
          result[3] += 0.034974093264248704;
          result[4] += 0;
          result[5] += 0.0012953367875647669;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.00784313725490196;
          result[2] += 0;
          result[3] += 0.00392156862745098;
          result[4] += 0.9333333333333333;
          result[5] += 0.054901960784313725;
        } else {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.015367727771679473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03951701427003293;
          result[4] += 0.07574094401756312;
          result[5] += 0.8693743139407245;
        } else {
          result[0] += 0.01015228426395939;
          result[1] += 0.005076142131979695;
          result[2] += 0;
          result[3] += 0.5228426395939086;
          result[4] += 0.01015228426395939;
          result[5] += 0.4517766497461929;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.7419354838709677;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25806451612903225;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9973118279569892;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002688172043010753;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7239031770045385;
          result[1] += 0.038577912254160365;
          result[2] += 0.0007564296520423601;
          result[3] += 0.0264750378214826;
          result[4] += 0.1664145234493192;
          result[5] += 0.04387291981845688;
        } else {
          result[0] += 0.14563106796116504;
          result[1] += 0.014563106796116505;
          result[2] += 0.2022653721682848;
          result[3] += 0.2896440129449838;
          result[4] += 0.042071197411003236;
          result[5] += 0.3058252427184466;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0.020833333333333332;
          result[3] += 0.125;
          result[4] += 0.125;
          result[5] += 0.6458333333333334;
        } else {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.6521739130434783;
          result[3] += 0;
          result[4] += 0.17391304347826086;
          result[5] += 0.08695652173913043;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6363636363636364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20689655172413793;
          result[3] += 0.7241379310344828;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.07692307692307693;
          result[2] += 0.07692307692307693;
          result[3] += 0.23076923076923078;
          result[4] += 0.3076923076923077;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04119850187265917;
          result[1] += 0.003745318352059925;
          result[2] += 0.7902621722846442;
          result[3] += 0.12734082397003746;
          result[4] += 0.003745318352059925;
          result[5] += 0.033707865168539325;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9718518518518519;
          result[3] += 0.025185185185185185;
          result[4] += 0;
          result[5] += 0.002962962962962963;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0.003472222222222222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9479166666666666;
          result[5] += 0.04861111111111111;
        } else {
          result[0] += 0.7073170731707318;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0853658536585366;
          result[5] += 0.20731707317073172;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.0011325028312570782;
          result[1] += 0.010192525481313703;
          result[2] += 0;
          result[3] += 0.039637599093997736;
          result[4] += 0.09626274065685164;
          result[5] += 0.8527746319365799;
        } else {
          result[0] += 0;
          result[1] += 0.0024752475247524753;
          result[2] += 0;
          result[3] += 0.5074257425742574;
          result[4] += 0.01485148514851485;
          result[5] += 0.4752475247524752;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.4225352112676056;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5704225352112676;
          result[5] += 0.007042253521126761;
        } else {
          result[0] += 0;
          result[1] += 0.989100817438692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010899182561307902;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8567730802415876;
          result[1] += 0.03364969801553063;
          result[2] += 0.0060396893874029335;
          result[3] += 0.026747195858498704;
          result[4] += 0.058671268334771355;
          result[5] += 0.0181190681622088;
        } else {
          result[0] += 0.158311345646438;
          result[1] += 0.03430079155672823;
          result[2] += 0.20580474934036938;
          result[3] += 0.287598944591029;
          result[4] += 0.08970976253298153;
          result[5] += 0.22427440633245382;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2191780821917808;
          result[3] += 0.6575342465753424;
          result[4] += 0;
          result[5] += 0.1232876712328767;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.05;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5932203389830508;
          result[3] += 0.288135593220339;
          result[4] += 0;
          result[5] += 0.11864406779661017;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.12380952380952381;
          result[4] += 0;
          result[5] += 0.01904761904761905;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01373283395755306;
          result[1] += 0;
          result[2] += 0.9450686641697877;
          result[3] += 0.039950062421972535;
          result[4] += 0;
          result[5] += 0.0012484394506866417;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92.5) ) ) {
          result[0] += 0.008264462809917356;
          result[1] += 0.008264462809917356;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9545454545454546;
          result[5] += 0.028925619834710745;
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
          result[0] += 0.024242424242424242;
          result[1] += 0;
          result[2] += 0.0036363636363636364;
          result[3] += 0.03272727272727273;
          result[4] += 0.025454545454545455;
          result[5] += 0.9139393939393939;
        } else {
          result[0] += 0.06326530612244897;
          result[1] += 0.036734693877551024;
          result[2] += 0.01020408163265306;
          result[3] += 0.3979591836734694;
          result[4] += 0.04693877551020408;
          result[5] += 0.4448979591836735;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9763779527559056;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023622047244094488;
          result[5] += 0;
        } else {
          result[0] += 0.046875;
          result[1] += 0.40625;
          result[2] += 0.015625;
          result[3] += 0;
          result[4] += 0.453125;
          result[5] += 0.078125;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7405696689761355;
          result[1] += 0.03541185527328714;
          result[2] += 0.016166281755196306;
          result[3] += 0.033102386451116246;
          result[4] += 0.1354888375673595;
          result[5] += 0.03926096997690531;
        } else {
          result[0] += 0.09798270893371758;
          result[1] += 0.01440922190201729;
          result[2] += 0.20461095100864554;
          result[3] += 0.2622478386167147;
          result[4] += 0.07204610951008646;
          result[5] += 0.34870317002881845;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0784313725490196;
          result[3] += 0.6274509803921569;
          result[4] += 0;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4827586206896552;
          result[3] += 0.5172413793103449;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8400000000000001;
          result[3] += 0.08000000000000002;
          result[4] += 0;
          result[5] += 0.08000000000000002;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7236180904522613;
          result[3] += 0.23115577889447236;
          result[4] += 0;
          result[5] += 0.04522613065326633;
        } else {
          result[0] += 0.04938271604938271;
          result[1] += 0;
          result[2] += 0.9135802469135802;
          result[3] += 0.024691358024691357;
          result[4] += 0;
          result[5] += 0.012345679012345678;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.014248704663212436;
          result[1] += 0;
          result[2] += 0.966321243523316;
          result[3] += 0.015544041450777202;
          result[4] += 0;
          result[5] += 0.0038860103626943004;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00462962962962963;
          result[1] += 0.00925925925925926;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222223;
          result[5] += 0.01388888888888889;
        } else {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.3173076923076923;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0012853470437017994;
          result[2] += 0.0038560411311053984;
          result[3] += 0.038560411311053984;
          result[4] += 0.056555269922879174;
          result[5] += 0.8997429305912596;
        } else {
          result[0] += 0.002141327623126339;
          result[1] += 0.01713062098501071;
          result[2] += 0.002141327623126339;
          result[3] += 0.36402569593147754;
          result[4] += 0.09207708779443256;
          result[5] += 0.5224839400428266;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7624703087885986;
          result[1] += 0.03642121931908155;
          result[2] += 0.010292953285827395;
          result[3] += 0.022169437846397466;
          result[4] += 0.15281076801266824;
          result[5] += 0.01583531274742676;
        } else {
          result[0] += 0.1781609195402299;
          result[1] += 0.03065134099616858;
          result[2] += 0.23180076628352492;
          result[3] += 0.23754789272030652;
          result[4] += 0.05172413793103448;
          result[5] += 0.27011494252873564;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
          result[0] += 0.04878048780487805;
          result[1] += 0.07317073170731707;
          result[2] += 0.04878048780487805;
          result[3] += 0;
          result[4] += 0.3170731707317073;
          result[5] += 0.5121951219512195;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14516129032258068;
          result[3] += 0.8064516129032259;
          result[4] += 0;
          result[5] += 0.048387096774193554;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          result[0] += 0.125;
          result[1] += 0.03571428571428571;
          result[2] += 0.4642857142857143;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.08928571428571429;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0.9302325581395349;
          result[3] += 0.046511627906976744;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)118.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0.33333333333333337;
          result[4] += 0.04761904761904762;
          result[5] += 0.4761904761904762;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7413793103448276;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0.05172413793103448;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9643835616438357;
          result[3] += 0.03424657534246575;
          result[4] += 0;
          result[5] += 0.0013698630136986301;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00847457627118644;
          result[1] += 0.038135593220338986;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9449152542372882;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0.32894736842105265;
          result[1] += 0.09210526315789473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23684210526315788;
          result[5] += 0.34210526315789475;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.007633587786259542;
          result[2] += 0.007633587786259542;
          result[3] += 0.0697928026172301;
          result[4] += 0.05670665212649945;
          result[5] += 0.8582333696837514;
        } else {
          result[0] += 0;
          result[1] += 0.03365384615384615;
          result[2] += 0;
          result[3] += 0.5192307692307693;
          result[4] += 0.04326923076923077;
          result[5] += 0.40384615384615385;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.13970588235294118;
          result[2] += 0.014705882352941176;
          result[3] += 0.04411764705882353;
          result[4] += 0.7720588235294118;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8119868637110017;
          result[1] += 0.027914614121510677;
          result[2] += 0;
          result[3] += 0.02955665024630542;
          result[4] += 0.0935960591133005;
          result[5] += 0.036945812807881784;
        } else {
          result[0] += 0.17073170731707318;
          result[1] += 0.03564727954971857;
          result[2] += 0.20637898686679174;
          result[3] += 0.29831144465290804;
          result[4] += 0.054409005628517824;
          result[5] += 0.23452157598499063;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.7666666666666667;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20000000000000004;
          result[3] += 0.7000000000000001;
          result[4] += 0;
          result[5] += 0.10000000000000002;
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010526315789473686;
          result[1] += 0.04210526315789474;
          result[2] += 0.4210526315789474;
          result[3] += 0.4210526315789474;
          result[4] += 0;
          result[5] += 0.10526315789473685;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8914728682170543;
          result[3] += 0.06201550387596899;
          result[4] += 0;
          result[5] += 0.046511627906976744;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.005069708491761723;
          result[1] += 0;
          result[2] += 0.944233206590621;
          result[3] += 0.044359949302915085;
          result[4] += 0.0012674271229404308;
          result[5] += 0.005069708491761723;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004149377593360997;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9834024896265561;
          result[5] += 0.012448132780082988;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.375;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.06557377049180328;
          result[1] += 0.2459016393442623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2786885245901639;
          result[5] += 0.4098360655737705;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015267175572519084;
          result[3] += 0.030534351145038167;
          result[4] += 0.015267175572519083;
          result[5] += 0.9526717557251908;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.030120481927710843;
          result[2] += 0.012048192771084338;
          result[3] += 0.15963855421686746;
          result[4] += 0.11144578313253012;
          result[5] += 0.6867469879518072;
        } else {
          result[0] += 0;
          result[1] += 0.027149321266968326;
          result[2] += 0.01809954751131222;
          result[3] += 0.5746606334841629;
          result[4] += 0.013574660633484163;
          result[5] += 0.3665158371040724;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0.044642857142857144;
          result[4] += 0.7589285714285714;
          result[5] += 0.017857142857142856;
        } else {
          result[0] += 0;
          result[1] += 0.9710843373493976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02891566265060241;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8515358361774744;
          result[1] += 0.03668941979522184;
          result[2] += 0.006825938566552901;
          result[3] += 0.02303754266211604;
          result[4] += 0.06313993174061433;
          result[5] += 0.01877133105802048;
        } else {
          result[0] += 0.17681159420289855;
          result[1] += 0.017391304347826087;
          result[2] += 0.12753623188405797;
          result[3] += 0.2492753623188406;
          result[4] += 0.11304347826086956;
          result[5] += 0.3159420289855073;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03125;
          result[1] += 0.005208333333333333;
          result[2] += 0.3854166666666667;
          result[3] += 0.359375;
          result[4] += 0.015625;
          result[5] += 0.203125;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.6296296296296297;
          result[1] += 0;
          result[2] += 0.25925925925925924;
          result[3] += 0.07407407407407407;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.007194244604316547;
          result[1] += 0;
          result[2] += 0.9116135662898253;
          result[3] += 0.07297019527235354;
          result[4] += 0.0020554984583761563;
          result[5] += 0.006166495375128468;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
          result[0] += 0.04838709677419355;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8483870967741935;
          result[5] += 0.1032258064516129;
        } else {
          result[0] += 0.460431654676259;
          result[1] += 0.1510791366906475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.35251798561151076;
          result[5] += 0.03597122302158273;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0050062578222778474;
          result[2] += 0;
          result[3] += 0.03128911138923655;
          result[4] += 0.06132665832290363;
          result[5] += 0.9023779724655819;
        } else {
          result[0] += 0.01809954751131222;
          result[1] += 0;
          result[2] += 0.00904977375565611;
          result[3] += 0.3257918552036199;
          result[4] += 0.15384615384615385;
          result[5] += 0.49321266968325794;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6382978723404256;
          result[2] += 0;
          result[3] += 0.10638297872340426;
          result[4] += 0.2127659574468085;
          result[5] += 0.0425531914893617;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0.40095693779904307;
          result[1] += 0.05933014354066986;
          result[2] += 0.05167464114832536;
          result[3] += 0.18564593301435406;
          result[4] += 0.11196172248803828;
          result[5] += 0.19043062200956937;
        } else {
          result[0] += 0.9168;
          result[1] += 0;
          result[2] += 0.0448;
          result[3] += 0.024;
          result[4] += 0.0096;
          result[5] += 0.0048;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.018518518518518517;
          result[5] += 0.9259259259259259;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0.009009009009009009;
          result[2] += 0.06306306306306306;
          result[3] += 0.6486486486486487;
          result[4] += 0.10810810810810811;
          result[5] += 0.14414414414414414;
        } else {
          result[0] += 0;
          result[1] += 0.023809523809523808;
          result[2] += 0.5;
          result[3] += 0.23809523809523808;
          result[4] += 0;
          result[5] += 0.23809523809523808;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5357142857142857;
          result[3] += 0.4107142857142857;
          result[4] += 0;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          result[0] += 0.02666666666666667;
          result[1] += 0;
          result[2] += 0.7466666666666667;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.02666666666666667;
        } else {
          result[0] += 0.0076335877862595426;
          result[1] += 0;
          result[2] += 0.9427480916030535;
          result[3] += 0.04325699745547074;
          result[4] += 0.0025445292620865146;
          result[5] += 0.0038167938931297713;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.011627906976744186;
          result[1] += 0.015503875968992248;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9612403100775194;
          result[5] += 0.011627906976744186;
        } else {
          result[0] += 0.4899328859060403;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2751677852348993;
          result[5] += 0.2348993288590604;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030379746835443037;
          result[4] += 0.03291139240506329;
          result[5] += 0.9367088607594937;
        } else {
          result[0] += 0.014354066985645933;
          result[1] += 0.019138755980861243;
          result[2] += 0;
          result[3] += 0.2583732057416268;
          result[4] += 0.17703349282296652;
          result[5] += 0.5311004784688995;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5384615384615384;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975490196078431;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024509803921568627;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8770053475935828;
          result[1] += 0.013368983957219251;
          result[2] += 0.00089126559714795;
          result[3] += 0.027629233511586453;
          result[4] += 0.05525846702317291;
          result[5] += 0.025846702317290554;
        } else {
          result[0] += 0.09427609427609428;
          result[1] += 0.011784511784511785;
          result[2] += 0.19696969696969696;
          result[3] += 0.4276094276094276;
          result[4] += 0.020202020202020204;
          result[5] += 0.24915824915824916;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2903225806451613;
          result[2] += 0.12903225806451613;
          result[3] += 0.03225806451612903;
          result[4] += 0.16129032258064516;
          result[5] += 0.3870967741935484;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1694915254237288;
          result[3] += 0.6610169491525424;
          result[4] += 0;
          result[5] += 0.1694915254237288;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.5454545454545455;
          result[1] += 0;
          result[2] += 0.31818181818181823;
          result[3] += 0.02272727272727273;
          result[4] += 0;
          result[5] += 0.11363636363636365;
        } else {
          result[0] += 0.032467532467532464;
          result[1] += 0.03896103896103896;
          result[2] += 0.7012987012987013;
          result[3] += 0.14935064935064934;
          result[4] += 0.012987012987012988;
          result[5] += 0.06493506493506493;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3548387096774194;
          result[3] += 0.5483870967741935;
          result[4] += 0;
          result[5] += 0.0967741935483871;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8172043010752689;
          result[3] += 0.16129032258064516;
          result[4] += 0;
          result[5] += 0.021505376344086023;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9022988505747126;
          result[3] += 0.09770114942528736;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9810344827586207;
          result[3] += 0.017241379310344827;
          result[4] += 0;
          result[5] += 0.0017241379310344827;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.023809523809523808;
          result[1] += 0.0873015873015873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8597883597883598;
          result[5] += 0.0291005291005291;
        } else {
          result[0] += 0.8162393162393162;
          result[1] += 0.00641025641025641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11324786324786325;
          result[5] += 0.0641025641025641;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0010582010582010583;
          result[1] += 0.0031746031746031746;
          result[2] += 0;
          result[3] += 0.050793650793650794;
          result[4] += 0.09206349206349207;
          result[5] += 0.852910052910053;
        } else {
          result[0] += 0.1297539149888143;
          result[1] += 0.039149888143176735;
          result[2] += 0.07494407158836688;
          result[3] += 0.3568232662192394;
          result[4] += 0.0738255033557047;
          result[5] += 0.32550335570469796;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0.5714285714285715;
          result[4] += 0;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          result[0] += 0.9946332737030411;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0017889087656529517;
          result[4] += 0.0017889087656529517;
          result[5] += 0.0017889087656529517;
        } else {
          result[0] += 0.41379310344827586;
          result[1] += 0;
          result[2] += 0.5862068965517241;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.22727272727272727;
          result[1] += 0;
          result[2] += 0.5909090909090909;
          result[3] += 0.15151515151515152;
          result[4] += 0;
          result[5] += 0.030303030303030304;
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
          result[0] += 0.01953125;
          result[1] += 0;
          result[2] += 0.76171875;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.03125;
        } else {
          result[0] += 0.002861230329041488;
          result[1] += 0;
          result[2] += 0.9670958512160229;
          result[3] += 0.027181688125894134;
          result[4] += 0;
          result[5] += 0.002861230329041488;
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
