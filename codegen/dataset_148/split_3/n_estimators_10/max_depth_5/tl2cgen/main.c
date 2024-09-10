
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.005291005291005291;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9947089947089947;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.3130699088145897;
            result[1] += 0.00911854103343465;
            result[2] += 0;
            result[3] += 0.6778115501519757;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.09546165884194054;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9045383411580594;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9932998324958124;
            result[1] += 0;
            result[2] += 0.006700167504187605;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06422018348623854;
            result[3] += 0.9357798165137615;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014354066985645933;
            result[3] += 0.9856459330143541;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9918500407497963;
            result[1] += 0;
            result[2] += 0.005704971475142625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002444987775061125;
          } else {
            result[0] += 0.9987905664180609;
            result[1] += 0;
            result[2] += 0.0012094335819391251;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.001229256299938537;
            result[1] += 0.015365703749231715;
            result[2] += 0;
            result[3] += 0.9809465273509527;
            result[4] += 0.0018438844499078057;
            result[5] += 0.0006146281499692685;
            result[6] += 0;
          } else {
            result[0] += 0.9960159362549801;
            result[1] += 0;
            result[2] += 0.0027581979773214833;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001225865767698437;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.0003207184092366902;
            result[2] += 0.0051314945477870435;
            result[3] += 0.9557408595253368;
            result[4] += 0.037203335471456066;
            result[5] += 0.0016035920461834512;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04231311706629055;
            result[3] += 0;
            result[4] += 0.9548660084626234;
            result[5] += 0.0028208744710860366;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9216467463479415;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07835325365205843;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6640625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3359375;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 0.9964639321074965;
            result[1] += 0;
            result[2] += 0.0007072135785007072;
            result[3] += 0.002828854314002829;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9589041095890412;
            result[1] += 0;
            result[2] += 0.03287671232876713;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.008219178082191782;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.11764705882352941;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.0012191405059433099;
            result[2] += 0;
            result[3] += 0.9984760743675709;
            result[4] += 0;
            result[5] += 0.00030478512648582747;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07407407407407407;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9971844376188387;
            result[1] += 0.0006581834137779728;
            result[2] += 0.001828287260494369;
            result[3] += 7.313149041977475e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00025596021646921165;
          } else {
            result[0] += 0.8832684824902725;
            result[1] += 0;
            result[2] += 0.10505836575875488;
            result[3] += 0.011673151750972765;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8555555555555555;
            result[1] += 0;
            result[2] += 0.014814814814814815;
            result[3] += 0.12962962962962962;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)134) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0625;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
            result[0] += 0.99116689911669;
            result[1] += 0;
            result[2] += 0.0055788005578800565;
            result[3] += 0.0013947001394700141;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018596001859600187;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8709677419354839;
            result[1] += 0;
            result[2] += 0.12903225806451613;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011527377521613833;
            result[3] += 0.9971181556195965;
            result[4] += 0.001729106628242075;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9567901234567902;
            result[1] += 0.037037037037037035;
            result[2] += 0.006172839506172839;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0.44;
            result[3] += 0.48;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4375;
            result[5] += 0.3125;
            result[6] += 0;
          } else {
            result[0] += 0.0006443298969072165;
            result[1] += 0.0006443298969072165;
            result[2] += 0;
            result[3] += 0.9974226804123711;
            result[4] += 0;
            result[5] += 0.001288659793814433;
            result[6] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)2) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.9368890413308181;
            result[1] += 0;
            result[2] += 0.003772937746527182;
            result[3] += 0.059166523752358084;
            result[4] += 0;
            result[5] += 0.0001714971702966901;
            result[6] += 0;
          } else {
            result[0] += 0.9689666835785558;
            result[1] += 0.0012683916793505834;
            result[2] += 0.0019448672416708945;
            result[3] += 0.027735498055132757;
            result[4] += 0;
            result[5] += 0;
            result[6] += 8.455944529003889e-05;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
            result[0] += 0.9979402677651906;
            result[1] += 0;
            result[2] += 0.0015447991761071062;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005149330587023688;
          } else {
            result[0] += 0.16160877513711153;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8376599634369287;
            result[4] += 0;
            result[5] += 0.0007312614259597807;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
            result[0] += 0.936411149825784;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06358885017421603;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9911535739561217;
            result[1] += 0;
            result[2] += 0.0021231422505307855;
            result[3] += 0.005661712668082095;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010615711252653928;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
            result[5] += 0.07142857142857142;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)9.5) ) ) {
            result[0] += 0.8056300268096515;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19436997319034852;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6062992125984252;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3937007874015748;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0003450655624568668;
            result[2] += 0;
            result[3] += 0.9989648033126294;
            result[4] += 0;
            result[5] += 0.0006901311249137336;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9310344827586207;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06896551724137931;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.993421052631579;
            result[4] += 0.006578947368421052;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09210526315789473;
            result[4] += 0.9078947368421053;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0.15517241379310345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8448275862068966;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3372093023255814;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6627906976744186;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3888888888888889;
            result[2] += 0;
            result[3] += 0.6111111111111112;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-21.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.990108803165183;
            result[1] += 0;
            result[2] += 0.005934718100890208;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003956478733926805;
          } else {
            result[0] += 0.9993023879796082;
            result[1] += 0;
            result[2] += 0.000697612020391736;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += 0;
            result[1] += 0.1891891891891892;
            result[2] += 0;
            result[3] += 0.8108108108108109;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7516556291390728;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24834437086092714;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.06375227686703097;
            result[1] += 0.02185792349726776;
            result[2] += 0.08378870673952642;
            result[3] += 0.8306010928961749;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6062567421790723;
            result[1] += 0;
            result[2] += 0.0015410695022345508;
            result[3] += 0.3914316535675759;
            result[4] += 0;
            result[5] += 0.0001541069502234551;
            result[6] += 0.0006164278008938204;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.9307745030843043;
            result[1] += 0;
            result[2] += 0.00205620287868403;
            result[3] += 0.06716929403701165;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9954640186343018;
            result[1] += 0;
            result[2] += 0.0028196640921907563;
            result[3] += 0.001225940909648155;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000490376363859262;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9428571428571428;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.009523809523809525;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9836065573770492;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9975057160673456;
            result[1] += 0;
            result[2] += 0.002494283932654334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 0.9689655172413794;
            result[1] += 0;
            result[2] += 0.03103448275862069;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.06994584837545126;
            result[1] += 0.007220216606498195;
            result[2] += 0.0013537906137184115;
            result[3] += 0.9214801444043321;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += 0.959214964734744;
            result[1] += 0.0024532352039251764;
            result[2] += 0.0030665440049064702;
            result[3] += 0.03342532965348053;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018399264029438822;
          } else {
            result[0] += 0.13937753721244925;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8565629228687416;
            result[4] += 0.0013531799729364006;
            result[5] += 0.0027063599458728013;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.969780981425007;
            result[1] += 0.00027723870252287225;
            result[2] += 0.002217909620182978;
            result[3] += 0.02716939284724148;
            result[4] += 0;
            result[5] += 0.00027723870252287225;
            result[6] += 0.00027723870252287225;
          } else {
            result[0] += 0.09141274238227147;
            result[1] += 0;
            result[2] += 0.04709141274238227;
            result[3] += 0.4986149584487535;
            result[4] += 0.3573407202216066;
            result[5] += 0.00554016620498615;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01728395061728395;
            result[3] += 0.9827160493827161;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004305705059203444;
            result[2] += 0.001076426264800861;
            result[3] += 0.9946178686759957;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 0.9977324263038548;
            result[1] += 0;
            result[2] += 0.0022675736961451248;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9598214285714286;
            result[1] += 0;
            result[2] += 0.026785714285714284;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.013392857142857142;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9989243456435999;
            result[1] += 0;
            result[2] += 0.0010756543564001434;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9995192307692308;
            result[1] += 0;
            result[2] += 0.0004807692307692308;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            result[0] += 0.8474908887019905;
            result[1] += 0.00224278104850014;
            result[2] += 0.002523128679562658;
            result[3] += 0.1443790299971965;
            result[4] += 0.000560695262125035;
            result[5] += 0.0014017381553125877;
            result[6] += 0.0014017381553125877;
          } else {
            result[0] += 0.5925834970530451;
            result[1] += 0;
            result[2] += 0.0073673870333988214;
            result[3] += 0.400049115913556;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9910313901345291;
            result[4] += 0.008968609865470852;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009103641456582634;
            result[3] += 0.9908963585434174;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0213857998289136;
            result[3] += 0.12489307100085544;
            result[4] += 0.8511548331907614;
            result[5] += 0.0025662959794696323;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9682835820895522;
            result[1] += 0;
            result[2] += 0.022388059701492536;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.009328358208955223;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.4782608695652174;
            result[2] += 0;
            result[3] += 0.43478260869565216;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.14249578414839797;
            result[1] += 0.00927487352445194;
            result[2] += 0;
            result[3] += 0.8482293423271501;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.01145912910618793;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02750190985485103;
            result[4] += 0.961038961038961;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1282051282051282;
            result[3] += 0.8717948717948718;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.0732196589769308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.925777331995988;
            result[4] += 0.0010030090270812437;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.04166666666666667;
            result[1] += 0;
            result[2] += 0.1916666666666667;
            result[3] += 0;
            result[4] += 0.7333333333333334;
            result[5] += 0.03333333333333334;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 0.9949946751863685;
            result[1] += 0;
            result[2] += 0.0009584664536741214;
            result[3] += 0.0038338658146964857;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021299254526091586;
          } else {
            result[0] += 0.545745817016732;
            result[1] += 0;
            result[2] += 0.007831968672125312;
            result[3] += 0.4442862228551086;
            result[4] += 0;
            result[5] += 0.000355998576005696;
            result[6] += 0.00177999288002848;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)10) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5000000000000001;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.33333333333333337;
            result[4] += 0.16666666666666669;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9993414192415345;
            result[1] += 0;
            result[2] += 0.0006585807584655068;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.748338081671415;
            result[1] += 0.0022158911047799935;
            result[2] += 0.00870528648306426;
            result[3] += 0.21035137701804368;
            result[4] += 0.029597974042418488;
            result[5] += 0.0004748338081671415;
            result[6] += 0.00031655587211142766;
          } else {
            result[0] += 0;
            result[1] += 0.0008598452278589854;
            result[2] += 0.0008598452278589854;
            result[3] += 0.794067067927773;
            result[4] += 0.20292347377472056;
            result[5] += 0.0012897678417884782;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.011904761904761904;
            result[2] += 0;
            result[3] += 0.9880952380952381;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.004878048780487805;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004878048780487805;
            result[4] += 0.9902439024390244;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07894736842105263;
            result[2] += 0;
            result[3] += 0.5131578947368421;
            result[4] += 0.40789473684210525;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += 0.88;
            result[1] += 0;
            result[2] += 0.12;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006024096385542169;
            result[4] += 0.9939759036144579;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3670886075949367;
            result[4] += 0.6329113924050633;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9913419913419913;
            result[1] += 0;
            result[2] += 0.008658008658008658;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
            result[0] += 0.9882352941176471;
            result[1] += 0;
            result[2] += 0.011764705882352941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8653846153846154;
            result[1] += 0;
            result[2] += 0.1346153846153846;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.020253164556962026;
            result[2] += 0.010126582278481013;
            result[3] += 0.769620253164557;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.000835421888053467;
            result[1] += 0;
            result[2] += 0.005847953216374269;
            result[3] += 0.9933166248955723;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0.00145985401459854;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9941605839416059;
            result[4] += 0.004379562043795621;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += 0.9325842696629213;
            result[1] += 0;
            result[2] += 0.06741573033707865;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0.9851301115241635;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01486988847583643;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.996728086791803;
            result[1] += 0;
            result[2] += 0.00017220595832615808;
            result[3] += 0.0030997072498708455;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.8910182405910876;
            result[1] += 0;
            result[2] += 0.003694296929115678;
            result[3] += 0.10320942045716926;
            result[4] += 0;
            result[5] += 0.00023089355806972989;
            result[6] += 0.001847148464557839;
          } else {
            result[0] += 0.40780413159908185;
            result[1] += 0;
            result[2] += 0.009181331293037491;
            result[3] += 0.5830145371078806;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9424166142227817;
            result[1] += 0.004719949653870359;
            result[2] += 0.0031466331025802393;
            result[3] += 0.048458149779735685;
            result[4] += 0;
            result[5] += 0.00031466331025802394;
            result[6] += 0.0009439899307740718;
          } else {
            result[0] += 0.9880478087649402;
            result[1] += 0.00012851818532322323;
            result[2] += 0.0015422182238786788;
            result[3] += 0.010024418455211412;
            result[4] += 0.00019277727798483485;
            result[5] += 0;
            result[6] += 6.425909266161162e-05;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9964093357271095;
            result[4] += 0.003590664272890485;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23404255319148937;
            result[3] += 0;
            result[4] += 0.7659574468085106;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013262599469496023;
            result[3] += 0.7793987621573829;
            result[4] += 0.21927497789566758;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)236.5) ) ) {
            result[0] += 0.9949166902005083;
            result[1] += 0;
            result[2] += 0.001976842699802316;
            result[3] += 0.0031064670996893535;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001256281407035176;
            result[3] += 0.9981155778894473;
            result[4] += 0.000628140703517588;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.05116279069767442;
            result[2] += 0.10232558139534884;
            result[3] += 0.7767441860465116;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8620689655172413;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += 0.0014104372355430183;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9605077574047954;
            result[4] += 0.036671368124118475;
            result[5] += 0.0014104372355430183;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 0.9863945578231292;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013605442176870748;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0010548523206751056;
            result[1] += 0;
            result[2] += 0.012658227848101267;
            result[3] += 0.8945147679324895;
            result[4] += 0.08966244725738398;
            result[5] += 0.0021097046413502112;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
            result[0] += 0.9269521410579346;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07304785894206549;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9976947387990333;
            result[1] += 0.000594906116378509;
            result[2] += 0.0014500836586726158;
            result[3] += 7.436326454731363e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00018590816136828406;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010936431989063569;
            result[3] += 0.9890635680109364;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0048484848484848485;
            result[3] += 0.19515151515151516;
            result[4] += 0.7927272727272727;
            result[5] += 0.007272727272727273;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9771428571428571;
            result[1] += 0;
            result[2] += 0.015238095238095238;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.007619047619047619;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += 0.8117254528122022;
            result[1] += 0.005719733079122975;
            result[2] += 0.004289799809342232;
            result[3] += 0.17683508102955198;
            result[4] += 0.0004766444232602479;
            result[5] += 0.0009532888465204958;
            result[6] += 0;
          } else {
            result[0] += 0.9611760271390878;
            result[1] += 0.0008795074758135445;
            result[2] += 0.001759014951627089;
            result[3] += 0.03580851865812288;
            result[4] += 0.00025128785023244125;
            result[5] += 0;
            result[6] += 0.00012564392511622062;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4712.5) ) ) {
            result[0] += 0.9993231185773184;
            result[1] += 6.153467478924374e-05;
            result[2] += 0.00024613869915697496;
            result[3] += 0.00024613869915697496;
            result[4] += 0;
            result[5] += 0.00012306934957848748;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014002333722287048;
            result[3] += 0.9859976662777129;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9992248062015504;
            result[1] += 0;
            result[2] += 0.0007751937984496124;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
            result[0] += 0.39299610894941633;
            result[1] += 0;
            result[2] += 0.04085603112840467;
            result[3] += 0;
            result[4] += 0.566147859922179;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0.20383226881421826;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7961677311857818;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014858841010401188;
            result[3] += 0;
            result[4] += 0.9985141158989599;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += 0.9882839421088904;
            result[1] += 0;
            result[2] += 0.007236388697450034;
            result[3] += 0.0006891798759476223;
            result[4] += 0.0013783597518952446;
            result[5] += 0.0013783597518952446;
            result[6] += 0.0010337698139214334;
          } else {
            result[0] += 0.9300911854103343;
            result[1] += 0;
            result[2] += 0.06990881458966565;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9610894941634242;
            result[1] += 0;
            result[2] += 0.038910505836575876;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0.0182648401826484;
            result[2] += 0;
            result[3] += 0.9817351598173516;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
