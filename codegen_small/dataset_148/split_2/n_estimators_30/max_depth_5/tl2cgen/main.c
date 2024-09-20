
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0003291639236339697;
            result[2] += (float)0;
            result[3] += (float)0.9983541803818301;
            result[4] += (float)0.0009874917709019092;
            result[5] += (float)0.0003291639236339697;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.10256410256410256;
            result[3] += (float)0;
            result[4] += (float)0.8461538461538461;
            result[5] += (float)0.05128205128205128;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)32) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)92) ) ) {
            result[0] += (float)0.8936170212765957;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.10638297872340426;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9975103734439834;
            result[1] += (float)0;
            result[2] += (float)0.0024896265560165973;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9997701149425288;
            result[1] += (float)0;
            result[2] += (float)0.00022988505747126436;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9909600433917917;
            result[1] += (float)0.0034351835111191466;
            result[2] += (float)0.004700777436268306;
            result[3] += (float)0.0003615982643283312;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005423973964924968;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.5192307692307693;
            result[3] += (float)0.4807692307692308;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.005284015852047556;
            result[3] += (float)0.9943857331571995;
            result[4] += (float)0;
            result[5] += (float)0.00033025099075297226;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9875346260387812;
            result[1] += (float)0;
            result[2] += (float)0.010156971375807941;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0023084025854108957;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.008620689655172414;
            result[4] += (float)0.9913793103448276;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.13043478260869565;
            result[2] += (float)0;
            result[3] += (float)0.37681159420289856;
            result[4] += (float)0.4927536231884058;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00414722654224987;
            result[2] += (float)0.01503369621565578;
            result[3] += (float)0.9808190772420944;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.88;
            result[1] += (float)0;
            result[2] += (float)0.12;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0.005405405405405406;
            result[1] += (float)0;
            result[2] += (float)0.02702702702702703;
            result[3] += (float)0.9675675675675676;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7580645161290323;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.24193548387096775;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9627329192546584;
            result[1] += (float)0;
            result[2] += (float)0.037267080745341616;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9975728155339806;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0024271844660194173;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9995133819951338;
            result[1] += (float)0;
            result[2] += (float)0.00048661800486618007;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9975308641975309;
            result[5] += (float)0.0024691358024691358;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.005917159763313609;
            result[2] += (float)0.011834319526627219;
            result[3] += (float)0.9822485207100592;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.5095962938451357;
            result[1] += (float)0.0018199867637326275;
            result[2] += (float)0.005294506949040371;
            result[3] += (float)0.4824619457313038;
            result[4] += (float)0;
            result[5] += (float)0.0004963600264725347;
            result[6] += (float)0.00033090668431502316;
          } else {
            result[0] += (float)0.9665109034267914;
            result[1] += (float)0;
            result[2] += (float)0.005970924195223262;
            result[3] += (float)0.026220145379023885;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0012980269989615787;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.002508361204013378;
            result[3] += (float)0.9966555183946488;
            result[4] += (float)0;
            result[5] += (float)0.0008361204013377926;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.25;
            result[3] += (float)0;
            result[4] += (float)0.7058823529411765;
            result[5] += (float)0.04411764705882353;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.08108108108108109;
            result[2] += (float)0;
            result[3] += (float)0.918918918918919;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5512.5) ) ) {
            result[0] += (float)0.5;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.016975308641975308;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9830246913580247;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9985141158989599;
            result[1] += (float)0;
            result[2] += (float)0.0014858841010401188;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8631578947368421;
            result[1] += (float)0;
            result[2] += (float)0.1368421052631579;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0.07411504424778761;
            result[1] += (float)0.00497787610619469;
            result[2] += (float)0.0038716814159292035;
            result[3] += (float)0.9164823008849557;
            result[4] += (float)0.0005530973451327434;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.18533604887983707;
            result[4] += (float)0.814663951120163;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.46994535519125685;
            result[4] += (float)0.5300546448087432;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9985310319500551;
            result[1] += (float)0;
            result[2] += (float)0.0013771575468233565;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)9.18105031215571e-05;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9953775038520801;
            result[1] += (float)0;
            result[2] += (float)0.004622496147919877;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7185978578383643;
            result[1] += (float)0;
            result[2] += (float)0.0042194092827004225;
            result[3] += (float)0.2658227848101266;
            result[4] += (float)0.010061668289516393;
            result[5] += (float)0.00032456994482310943;
            result[6] += (float)0.0009737098344693283;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            result[0] += (float)0.6959036144578313;
            result[1] += (float)0;
            result[2] += (float)0.006746987951807229;
            result[3] += (float)0.2453012048192771;
            result[4] += (float)0.052048192771084335;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8913985148514852;
            result[1] += (float)0.003712871287128713;
            result[2] += (float)0.004022277227722773;
            result[3] += (float)0.09900990099009903;
            result[4] += (float)0.00030940594059405946;
            result[5] += (float)0.0006188118811881189;
            result[6] += (float)0.0009282178217821783;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.019704433497536946;
            result[2] += (float)0;
            result[3] += (float)0.9802955665024631;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0015923566878980893;
            result[3] += (float)0;
            result[4] += (float)0.9952229299363057;
            result[5] += (float)0.0031847133757961785;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9946543121881682;
            result[4] += (float)0.004632929436920884;
            result[5] += (float)0.0007127583749109052;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9666666666666667;
            result[3] += (float)0;
            result[4] += (float)0.03333333333333333;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9900497512437811;
            result[1] += (float)0;
            result[2] += (float)0.009950248756218905;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
            result[0] += (float)0.09554140127388536;
            result[1] += (float)0;
            result[2] += (float)0.0012738853503184713;
            result[3] += (float)0.8802547770700637;
            result[4] += (float)0.022929936305732482;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2367601246105919;
            result[4] += (float)0.7632398753894081;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.1;
            result[2] += (float)0;
            result[3] += (float)0.044444444444444446;
            result[4] += (float)0.8555555555555555;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.18181818181818182;
            result[2] += (float)0;
            result[3] += (float)0.8181818181818182;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0.030303030303030304;
            result[1] += (float)0;
            result[2] += (float)0.04040404040404041;
            result[3] += (float)0.9242424242424242;
            result[4] += (float)0.005050505050505051;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0037174721189591076;
            result[2] += (float)0.0006195786864931846;
            result[3] += (float)0.5693928128872366;
            result[4] += (float)0.42627013630731103;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8717948717948718;
            result[1] += (float)0;
            result[2] += (float)0.1282051282051282;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.34615384615384615;
            result[3] += (float)0;
            result[4] += (float)0.6538461538461539;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
            result[0] += (float)0.9901800327332242;
            result[1] += (float)0;
            result[2] += (float)0.009819967266775777;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.997926386728875;
            result[1] += (float)0;
            result[2] += (float)0.002073613271124935;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
            result[0] += (float)0.9931710452317828;
            result[1] += (float)8.034064433196755e-05;
            result[2] += (float)0.0007230657989877079;
            result[3] += (float)0.006025548324897566;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.36363636363636365;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.6363636363636364;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.007017543859649123;
            result[2] += (float)0;
            result[3] += (float)0.9824561403508771;
            result[4] += (float)0.007017543859649123;
            result[5] += (float)0.0035087719298245615;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
            result[0] += (float)0.08995080815179199;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.910049191848208;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.06986899563318777;
            result[1] += (float)0;
            result[2] += (float)0.1091703056768559;
            result[3] += (float)0;
            result[4] += (float)0.8165938864628821;
            result[5] += (float)0.004366812227074236;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0.9928005759539237;
            result[1] += (float)0;
            result[2] += (float)0.004319654427645789;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0028797696184305254;
          } else {
            result[0] += (float)0.9588235294117647;
            result[1] += (float)0;
            result[2] += (float)0.029411764705882353;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.011764705882352941;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.2418996893031514;
            result[1] += (float)0;
            result[2] += (float)0.0008877052818464271;
            result[3] += (float)0.7567687527740791;
            result[4] += (float)0;
            result[5] += (float)0.00044385264092321354;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += (float)0.6296296296296297;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.37037037037037035;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9974916387959866;
            result[1] += (float)0;
            result[2] += (float)0.002508361204013378;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)34.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0007270083605961468;
            result[2] += (float)0;
            result[3] += (float)0.9974554707379135;
            result[4] += (float)0;
            result[5] += (float)0.0018175209014903672;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9142857142857143;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.08571428571428572;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5230.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9666666666666667;
            result[1] += (float)0;
            result[2] += (float)0.03333333333333333;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.999211356466877;
            result[1] += (float)0;
            result[2] += (float)0.0007886435331230284;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9881889763779528;
            result[1] += (float)0;
            result[2] += (float)0.007874015748031496;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.003937007874015748;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0.9993564401949067;
            result[1] += (float)0;
            result[2] += (float)0.0006435598050933162;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += (float)0.9914436555616238;
            result[1] += (float)0.002184598580010923;
            result[2] += (float)0.002730748225013654;
            result[3] += (float)0.0030948479883488077;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005461496450027307;
          } else {
            result[0] += (float)0.871244635193133;
            result[1] += (float)0;
            result[2] += (float)0.12875536480686695;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += (float)0.007114905727499111;
            result[1] += (float)0;
            result[2] += (float)0.005336179295624333;
            result[3] += (float)0.9875489149768766;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9224247562526495;
            result[1] += (float)0;
            result[2] += (float)0.005510809665112337;
            result[3] += (float)0.07036880033912676;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0016956337431114881;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.8333333333333334;
            result[3] += (float)0.16666666666666666;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9310344827586207;
            result[1] += (float)0.04597701149425287;
            result[2] += (float)0;
            result[3] += (float)0.022988505747126436;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.05714285714285714;
            result[3] += (float)0.9428571428571428;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
            result[0] += (float)0.9939106901217862;
            result[1] += (float)0;
            result[2] += (float)0.005412719891745603;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006765899864682003;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9917355371900827;
            result[1] += (float)0;
            result[2] += (float)0.008264462809917356;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9998338042213728;
            result[1] += (float)0;
            result[2] += (float)0.00016619577862722287;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0011273957158962795;
            result[2] += (float)0.0033821871476888386;
            result[3] += (float)0.23449830890642615;
            result[4] += (float)0.7609921082299888;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03246268656716419;
            result[1] += (float)0.005223880597014926;
            result[2] += (float)0.017537313432835825;
            result[3] += (float)0.9421641791044777;
            result[4] += (float)0.001492537313432836;
            result[5] += (float)0.0011194029850746271;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0.8767812238055323;
            result[1] += (float)0;
            result[2] += (float)0.005029337803855826;
            result[3] += (float)0.1173512154233026;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008382229673093043;
          } else {
            result[0] += (float)0.4667559125390451;
            result[1] += (float)0;
            result[2] += (float)0.00022311468094600624;
            result[3] += (float)0.5323516287371709;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006693440428380187;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9878611313425588;
            result[1] += (float)0;
            result[2] += (float)0.0029133284777858705;
            result[3] += (float)0.005826656955571741;
            result[4] += (float)0;
            result[5] += (float)0.0007283321194464676;
            result[6] += (float)0.002670551104637048;
          } else {
            result[0] += (float)0.9227053140096618;
            result[1] += (float)0;
            result[2] += (float)0.016908212560386472;
            result[3] += (float)0.06038647342995169;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.019230769230769232;
            result[2] += (float)0;
            result[3] += (float)0.9807692307692307;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.65;
            result[2] += (float)0;
            result[3] += (float)0.35;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03337783711615487;
            result[1] += (float)0.0053404539385847796;
            result[2] += (float)0.010680907877169559;
            result[3] += (float)0.9506008010680908;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9285714285714286;
            result[5] += (float)0.07142857142857142;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0005993407252022775;
            result[2] += (float)0.007791429427629608;
            result[3] += (float)0.9895115373089601;
            result[4] += (float)0;
            result[5] += (float)0.002097692538207971;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.9991228070175439;
            result[1] += (float)0;
            result[2] += (float)0.0008771929824561404;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9941217150760719;
            result[1] += (float)0;
            result[2] += (float)0.005532503457814661;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00034578146611341634;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0.2862190812720848;
            result[1] += (float)0.038869257950530034;
            result[2] += (float)0.09187279151943463;
            result[3] += (float)0.5830388692579506;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9852941176470589;
            result[1] += (float)0;
            result[2] += (float)0.0046906693711967545;
            result[3] += (float)0.009001014198782962;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0010141987829614604;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
            result[0] += (float)0.3131991051454139;
            result[1] += (float)0.013422818791946308;
            result[2] += (float)0;
            result[3] += (float)0.6733780760626398;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.013245033112582781;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9867549668874173;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += (float)0.0015186028853454822;
            result[1] += (float)0.00037965072133637056;
            result[2] += (float)0;
            result[3] += (float)0.996962794229309;
            result[4] += (float)0.00037965072133637056;
            result[5] += (float)0.0007593014426727411;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-29.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.42857142857142855;
            result[3] += (float)0;
            result[4] += (float)0.5714285714285714;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.004201680672268907;
            result[1] += (float)0;
            result[2] += (float)0.025210084033613446;
            result[3] += (float)0;
            result[4] += (float)0.9677871148459384;
            result[5] += (float)0.0028011204481792717;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9452054794520548;
            result[1] += (float)0;
            result[2] += (float)0.0547945205479452;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9921259842519685;
            result[1] += (float)0;
            result[2] += (float)0.005249343832020997;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0026246719160104987;
          } else {
            result[0] += (float)0.9997394815683209;
            result[1] += (float)0;
            result[2] += (float)0.0002605184316790413;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0.9740694270179842;
            result[1] += (float)0.011292346298619825;
            result[2] += (float)0.012965286491007947;
            result[3] += (float)0.001672940192388122;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.00975800156128025;
            result[3] += (float)0.9902419984387197;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8174431202600217;
            result[1] += (float)0;
            result[2] += (float)0.0010834236186348864;
            result[3] += (float)0.18093174431202602;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005417118093174432;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            result[0] += (float)0.9919130654536265;
            result[1] += (float)0;
            result[2] += (float)0.006065200909780136;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0020217336365933787;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0.30413625304136255;
            result[1] += (float)0.00851581508515815;
            result[2] += (float)0;
            result[3] += (float)0.6861313868613139;
            result[4] += (float)0.0012165450121654502;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.10726072607260725;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8927392739273927;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.03254437869822485;
            result[3] += (float)0.9201183431952663;
            result[4] += (float)0.047337278106508875;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.984375;
            result[1] += (float)0;
            result[2] += (float)0.015625;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-12) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.06349206349206349;
            result[2] += (float)0;
            result[3] += (float)0.9365079365079365;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.014326647564469915;
            result[2] += (float)0;
            result[3] += (float)0.0014326647564469914;
            result[4] += (float)0.9842406876790831;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9991582491582491;
            result[1] += (float)0;
            result[2] += (float)0.0008417508417508417;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.029239766081871343;
            result[3] += (float)0.9108187134502924;
            result[4] += (float)0.059941520467836254;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += (float)0.6666666666666666;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.3333333333333333;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7833228048010108;
            result[1] += (float)0;
            result[2] += (float)0.0018951358180669617;
            result[3] += (float)0.2109917877447884;
            result[4] += (float)0;
            result[5] += (float)0.0025268477574226155;
            result[6] += (float)0.0012634238787113078;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += (float)0.5824468085106383;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.39893617021276595;
            result[4] += (float)0.018617021276595744;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9990275920748755;
            result[1] += (float)0;
            result[2] += (float)0.0007293059438434423;
            result[3] += (float)0.00016206798752076495;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)8.103399376038248e-05;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.038348082595870206;
            result[2] += (float)0;
            result[3] += (float)0.9616519174041298;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.2;
            result[5] += (float)0.8;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)108.5) ) ) {
            result[0] += (float)0.43023255813953487;
            result[1] += (float)0;
            result[2] += (float)0.026578073089700997;
            result[3] += (float)0.0033222591362126247;
            result[4] += (float)0.5398671096345515;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9413489736070382;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.05865102639296188;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9;
            result[5] += (float)0.1;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
            result[0] += (float)0.995787700084246;
            result[1] += (float)0;
            result[2] += (float)0.003369839932603201;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008424599831508003;
          } else {
            result[0] += (float)0.8571428571428571;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.14285714285714285;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.057057057057057055;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9429429429429429;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += (float)0.23731236597569694;
            result[1] += (float)0.007147962830593281;
            result[2] += (float)0;
            result[3] += (float)0.7555396711937098;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5698569856985699;
            result[1] += (float)0;
            result[2] += (float)0.0176017601760176;
            result[3] += (float)0.41254125412541254;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += (float)0.029411764705882353;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9705882352941176;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.00411522633744856;
            result[1] += (float)0.053497942386831275;
            result[2] += (float)0;
            result[3] += (float)0.012345679012345678;
            result[4] += (float)0.9300411522633745;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5555555555555556;
            result[1] += (float)0;
            result[2] += (float)0.15555555555555556;
            result[3] += (float)0.28888888888888886;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.8333333333333334;
            result[5] += (float)0.16666666666666666;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.006012024048096192;
            result[3] += (float)0.9926519706078825;
            result[4] += (float)0;
            result[5] += (float)0.0013360053440213762;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += (float)0.9987230295024219;
            result[1] += (float)8.806693086745927e-05;
            result[2] += (float)0.0007485689123734037;
            result[3] += (float)0.00035226772346983706;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)8.806693086745927e-05;
          } else {
            result[0] += (float)0.9914273467638234;
            result[1] += (float)0.0038576939562794685;
            result[2] += (float)0.0030004286326618087;
            result[3] += (float)0.0017145306472353193;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0.84375;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.15625;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9691504508780256;
            result[1] += (float)0;
            result[2] += (float)0.004746084480303749;
            result[3] += (float)0.024679639297579496;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0014238253440911248;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.981302950628104;
            result[1] += (float)0;
            result[2] += (float)0.011101373064563248;
            result[3] += (float)0.0008764241893076249;
            result[4] += (float)0.004674262342973999;
            result[5] += (float)0.0005842827928717499;
            result[6] += (float)0.001460706982179375;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)345.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.03292181069958848;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9670781893004116;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.002733734281027884;
            result[2] += (float)0.008747949699289229;
            result[3] += (float)0.9885183160196829;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.2;
            result[1] += (float)0;
            result[2] += (float)0.06382978723404255;
            result[3] += (float)0.7361702127659574;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9959555106167847;
            result[1] += (float)0;
            result[2] += (float)0.003538928210313448;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005055611729019212;
          } else {
            result[0] += (float)0.9996721848877234;
            result[1] += (float)0;
            result[2] += (float)0.00032781511227667593;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.05161290322580645;
            result[3] += (float)0;
            result[4] += (float)0.9419354838709677;
            result[5] += (float)0.0064516129032258064;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.006703229737964655;
            result[2] += (float)0.002437538086532602;
            result[3] += (float)0.9896404631322364;
            result[4] += (float)0;
            result[5] += (float)0.001218769043266301;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9981374172185431;
            result[1] += (float)0;
            result[2] += (float)0.0012417218543046358;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006208609271523179;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.036603221083455345;
            result[3] += (float)0;
            result[4] += (float)0.9575402635431918;
            result[5] += (float)0.005856515373352855;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0023356690023356693;
            result[3] += (float)0.9973306639973307;
            result[4] += (float)0;
            result[5] += (float)0.00033366700033366707;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += (float)0.9932034435885818;
            result[1] += (float)0;
            result[2] += (float)0.0058903488898957865;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0009062075215224287;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += (float)0.9577464788732394;
            result[1] += (float)0;
            result[2] += (float)0.04225352112676056;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9951768488745981;
            result[1] += (float)0;
            result[2] += (float)0.00482315112540193;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9997993981945837;
            result[1] += (float)0;
            result[2] += (float)0.00020060180541624874;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.004474940334128878;
            result[2] += (float)0.011336515513126491;
            result[3] += (float)0.9812052505966588;
            result[4] += (float)0.0011933174224343676;
            result[5] += (float)0.0017899761336515514;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.24277456647398843;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7572254335260116;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)67) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.8620689655172414;
            result[3] += (float)0;
            result[4] += (float)0.03448275862068966;
            result[5] += (float)0.10344827586206898;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0015408320493066256;
            result[3] += (float)0;
            result[4] += (float)0.9984591679506933;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0.7721518987341772;
            result[1] += (float)0.002109704641350211;
            result[2] += (float)0.008438818565400843;
            result[3] += (float)0.21729957805907174;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9948515531148103;
            result[1] += (float)0;
            result[2] += (float)0.003775527715805732;
            result[3] += (float)0.0012013042732109147;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00017161489617298782;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)50.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.001171875;
            result[3] += (float)0.998046875;
            result[4] += (float)0;
            result[5] += (float)0.00078125;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9840425531914894;
            result[1] += (float)0;
            result[2] += (float)0.01182033096926714;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.004137115839243499;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.2222222222222222;
            result[1] += (float)0.1111111111111111;
            result[2] += (float)0;
            result[3] += (float)0.6666666666666666;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0026666666666666666;
            result[1] += (float)0.0026666666666666666;
            result[2] += (float)0;
            result[3] += (float)0.9946666666666667;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.8571428571428571;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.14285714285714285;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.002867155144950621;
            result[3] += (float)0.9961771264733992;
            result[4] += (float)0;
            result[5] += (float)0.000955718381650207;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5230.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += (float)0.998211091234347;
            result[1] += (float)0;
            result[2] += (float)0.0017889087656529517;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9827586206896551;
            result[1] += (float)0;
            result[2] += (float)0.017241379310344827;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9987128481160777;
            result[1] += (float)0;
            result[2] += (float)0.0012871518839223028;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)16) ) ) {
            result[0] += (float)0.011299435028248588;
            result[1] += (float)0.015065913370998116;
            result[2] += (float)0.060263653483992465;
            result[3] += (float)0.9133709981167608;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.4720496894409938;
            result[1] += (float)0.09316770186335403;
            result[2] += (float)0;
            result[3] += (float)0.43478260869565216;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += (float)0.9851371436292393;
            result[1] += (float)0;
            result[2] += (float)0.0044588569112282124;
            result[3] += (float)0.009728415079043373;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006755843804891231;
          } else {
            result[0] += (float)0.9377652050919377;
            result[1] += (float)0;
            result[2] += (float)0.014144271570014143;
            result[3] += (float)0.039603960396039604;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.008486562942008486;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0012121212121212121;
            result[2] += (float)0.013333333333333334;
            result[3] += (float)0.9854545454545455;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.07792207792207792;
            result[3] += (float)0.922077922077922;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)239) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.001298701298701299;
            result[2] += (float)0;
            result[3] += (float)0.9977272727272728;
            result[4] += (float)0;
            result[5] += (float)0.0009740259740259741;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9666666666666667;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.03333333333333333;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-36) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.9285714285714286;
            result[2] += (float)0;
            result[3] += (float)0.07142857142857142;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.99568345323741;
            result[1] += (float)0;
            result[2] += (float)0.0038369304556354917;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00047961630695443646;
          } else {
            result[0] += (float)0.9997675634842234;
            result[1] += (float)0;
            result[2] += (float)0.0002324365157766285;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += (float)0.4679783176069062;
            result[1] += (float)0.00220839188917888;
            result[2] += (float)0.003814495081308974;
            result[3] += (float)0.5245934551294921;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0014053402931138326;
          } else {
            result[0] += (float)0.7516378796902919;
            result[1] += (float)0;
            result[2] += (float)0.023823704586063137;
            result[3] += (float)0.22394282310899347;
            result[4] += (float)0;
            result[5] += (float)0.0005955926146515785;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9934023433056536;
            result[1] += (float)0;
            result[2] += (float)0.0032988283471732456;
            result[3] += (float)0.0030713229439199184;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0002275054032533273;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
            result[0] += (float)0.9220308250226654;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.07796917497733455;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)918) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9983602077070238;
            result[1] += (float)0;
            result[2] += (float)0.0014575931493121983;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0001821991436640248;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += (float)0.03063063063063063;
            result[1] += (float)0.005045045045045045;
            result[2] += (float)0.015495495495495495;
            result[3] += (float)0.9484684684684684;
            result[4] += (float)0;
            result[5] += (float)0.00036036036036036037;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9968040907638223;
            result[1] += (float)0;
            result[2] += (float)0.0028763183125599234;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00031959092361776926;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0011843663639952626;
            result[3] += (float)0.9988156336360048;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9860172453973433;
            result[1] += (float)0;
            result[2] += (float)0.00559310184106269;
            result[3] += (float)0.006758331391284083;
            result[4] += (float)0;
            result[5] += (float)0.00046609182008855747;
            result[6] += (float)0.0011652295502213937;
          } else {
            result[0] += (float)0.8921348314606742;
            result[1] += (float)0;
            result[2] += (float)0.020224719101123594;
            result[3] += (float)0.08764044943820225;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.005263157894736842;
            result[3] += (float)0.9947368421052631;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.95260663507109;
            result[1] += (float)0;
            result[2] += (float)0.04739336492890995;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += (float)0.0009191176470588235;
            result[1] += (float)0.0055147058823529415;
            result[2] += (float)0;
            result[3] += (float)0.9935661764705882;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.07692307692307693;
            result[1] += (float)0.8076923076923077;
            result[2] += (float)0;
            result[3] += (float)0.11538461538461539;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9844961240310077;
            result[4] += (float)0.015503875968992248;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00033852403520649965;
            result[2] += (float)0;
            result[3] += (float)0.9989844278943805;
            result[4] += (float)0.00033852403520649965;
            result[5] += (float)0.00033852403520649965;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)2) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.014754098360655738;
            result[3] += (float)0;
            result[4] += (float)0.9852459016393442;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += (float)0.9926108374384236;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.007389162561576354;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9991584852734923;
            result[1] += (float)0.00011220196353436185;
            result[2] += (float)0.000729312762973352;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.9885732941560561;
            result[1] += (float)0.002611818478615736;
            result[2] += (float)0.008161932745674175;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.000652954619653934;
          } else {
            result[0] += (float)0.9965073529411764;
            result[1] += (float)0;
            result[2] += (float)0.0029411764705882353;
            result[3] += (float)0.0005514705882352941;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += (float)0.09090909090909091;
            result[1] += (float)0.9090909090909091;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.8534675615212528;
            result[1] += (float)0;
            result[2] += (float)0.00587248322147651;
            result[3] += (float)0.13758389261744966;
            result[4] += (float)0;
            result[5] += (float)0.0002796420581655481;
            result[6] += (float)0.002796420581655481;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0.40318963369050587;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5968103663094941;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9682539682539683;
            result[1] += (float)0;
            result[2] += (float)0.031746031746031744;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.953125;
            result[1] += (float)0;
            result[2] += (float)0.001288659793814433;
            result[3] += (float)0.045586340206185565;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.998651817116061;
            result[1] += (float)0.00029308323563892143;
            result[2] += (float)0.00029308323563892143;
            result[3] += (float)0.0004689331770222743;
            result[4] += (float)0.00029308323563892143;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += (float)0.8641532016756434;
            result[1] += (float)0.005385996409335727;
            result[2] += (float)0.004189108318372232;
            result[3] += (float)0.12597247157390784;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0002992220227408737;
          } else {
            result[0] += (float)0.9983624454148472;
            result[1] += (float)0;
            result[2] += (float)0.0016375545851528383;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9979360165118679;
            result[4] += (float)0;
            result[5] += (float)0.0020639834881320948;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7051744885679904;
            result[4] += (float)0.29482551143200963;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9875776397515528;
            result[1] += (float)0;
            result[2] += (float)0.012422360248447204;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)126.5) ) ) {
            result[0] += (float)0.009216589861751152;
            result[1] += (float)0.04608294930875576;
            result[2] += (float)0;
            result[3] += (float)0.22119815668202766;
            result[4] += (float)0.7235023041474654;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.03125;
            result[4] += (float)0.96875;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += (float)0.11913626209977662;
            result[1] += (float)0.008190618019359643;
            result[2] += (float)0;
            result[3] += (float)0.6284437825763217;
            result[4] += (float)0.24422933730454208;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3790909090909091;
            result[1] += (float)0;
            result[2] += (float)0.031818181818181815;
            result[3] += (float)0.2318181818181818;
            result[4] += (float)0.3572727272727273;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0625;
            result[2] += (float)0;
            result[3] += (float)0.9375;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
            result[0] += (float)0.79375;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.20625;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9795501022494888;
            result[1] += (float)0;
            result[2] += (float)0.02044989775051125;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9996791786974655;
            result[4] += (float)0;
            result[5] += (float)0.0003208213025344883;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.65625;
            result[1] += (float)0;
            result[2] += (float)0.34375;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += (float)0.9990118577075099;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.0009881422924901185;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9863945578231292;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.013605442176870748;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.8981818181818182;
            result[1] += (float)0;
            result[2] += (float)0.07272727272727272;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.02909090909090909;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.014760147601476014;
            result[3] += (float)0.577490774907749;
            result[4] += (float)0.40682656826568264;
            result[5] += (float)0.0009225092250922509;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.3146853146853147;
            result[4] += (float)0.6853146853146853;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.04225352112676056;
            result[3] += (float)0;
            result[4] += (float)0.9436619718309859;
            result[5] += (float)0.014084507042253521;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.002756086357372531;
            result[3] += (float)0.9967845659163987;
            result[4] += (float)0;
            result[5] += (float)0.00045934772622875517;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)180) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += (float)0.99812382739212;
            result[1] += (float)0;
            result[2] += (float)0.001876172607879925;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.983957219251337;
            result[1] += (float)0;
            result[2] += (float)0.0106951871657754;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0053475935828877;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.9985835694050992;
            result[1] += (float)0;
            result[2] += (float)0.00141643059490085;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            result[0] += (float)0.9901977644024076;
            result[1] += (float)0.002063628546861565;
            result[2] += (float)0.0070507308684436805;
            result[3] += (float)0.0005159071367153912;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00017196904557179707;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.2;
            result[2] += (float)0;
            result[3] += (float)0.8;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
            result[0] += (float)0.03773584905660377;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9622641509433962;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.42394822006472493;
            result[1] += (float)0.06472491909385113;
            result[2] += (float)0;
            result[3] += (float)0.511326860841424;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.006075768406004289;
            result[3] += (float)0.9939242315939957;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
            result[0] += (float)0.5371900826446281;
            result[1] += (float)0;
            result[2] += (float)0.006887052341597796;
            result[3] += (float)0.4559228650137741;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.971107544141252;
            result[1] += (float)0;
            result[2] += (float)0.00749063670411985;
            result[3] += (float)0.01658640984483681;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.004815409309791332;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += (float)0.08230842005676443;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8533585619678334;
            result[4] += (float)0.06149479659413434;
            result[5] += (float)0.002838221381267739;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.994995741056218;
            result[1] += (float)0;
            result[2] += (float)0.0013841567291311755;
            result[3] += (float)0.0034071550255536627;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00021294718909710392;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += (float)0.09302325581395349;
            result[1] += (float)0;
            result[2] += (float)0.025436046511627907;
            result[3] += (float)0.873546511627907;
            result[4] += (float)0.007267441860465116;
            result[5] += (float)0.0007267441860465116;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9888811674774148;
            result[1] += (float)0;
            result[2] += (float)0.006254343293954135;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.004864489228630994;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += (float)0.10981818181818181;
            result[1] += (float)0.0014545454545454545;
            result[2] += (float)0;
            result[3] += (float)0.885090909090909;
            result[4] += (float)0.002181818181818182;
            result[5] += (float)0.0014545454545454545;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.04736842105263158;
            result[3] += (float)0;
            result[4] += (float)0.9526315789473684;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
            result[0] += (float)0.5905631659056316;
            result[1] += (float)0;
            result[2] += (float)0.0015220700152207;
            result[3] += (float)0.4079147640791476;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9239152871238078;
            result[1] += (float)0.000743095405193411;
            result[2] += (float)0.0026421169962432393;
            result[3] += (float)0.07236923585022498;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0003302646245304049;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-114.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
            result[0] += (float)0.9313725490196079;
            result[1] += (float)0;
            result[2] += (float)0.06862745098039216;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5531914893617021;
            result[1] += (float)0;
            result[2] += (float)0.02127659574468085;
            result[3] += (float)0.425531914893617;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.028888888888888888;
            result[2] += (float)0;
            result[3] += (float)0.9711111111111111;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0.004347826086956522;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9956521739130435;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.1;
            result[1] += (float)0.85;
            result[2] += (float)0;
            result[3] += (float)0.05;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9969040247678018;
            result[1] += (float)0;
            result[2] += (float)0.0030959752321981426;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)0.9998998146571156;
            result[1] += (float)0;
            result[2] += (float)0.00010018534288433603;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9992942836979535;
            result[1] += (float)0;
            result[2] += (float)0.0007057163020465773;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0.007063572149344097;
            result[1] += (float)0;
            result[2] += (float)0.013622603430877902;
            result[3] += (float)0.834510595358224;
            result[4] += (float)0.144803229061554;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9988132911392406;
            result[1] += (float)0;
            result[2] += (float)0.0011867088607594937;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9948755490483162;
            result[1] += (float)0;
            result[2] += (float)0.005124450951683748;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.829202343397927;
            result[1] += (float)0.00202794051374493;
            result[2] += (float)0.005182514646237044;
            result[3] += (float)0.16065795403334834;
            result[4] += (float)0.0006759801712483101;
            result[5] += (float)0.0009013068949977468;
            result[6] += (float)0.0013519603424966202;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.00159846547314578;
            result[2] += (float)0;
            result[3] += (float)0.9984015345268542;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.5;
            result[5] += (float)0.5;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9736842105263158;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.02631578947368421;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.012658227848101266;
            result[2] += (float)0;
            result[3] += (float)0.9873417721518988;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.6923076923076923;
            result[2] += (float)0;
            result[3] += (float)0.3076923076923077;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
            result[0] += (float)0.9285714285714286;
            result[1] += (float)0;
            result[2] += (float)0.07142857142857142;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.013303769401330377;
            result[2] += (float)0;
            result[3] += (float)0.9866962305986696;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.9403409090909091;
            result[1] += (float)0;
            result[2] += (float)0.0007102272727272727;
            result[3] += (float)0.05859375;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0003551136363636364;
          } else {
            result[0] += (float)0.9974941268598277;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.0025058731401722788;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += (float)0.2019704433497537;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7980295566502463;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5217391304347826;
            result[1] += (float)0;
            result[2] += (float)0.07004830917874397;
            result[3] += (float)0;
            result[4] += (float)0.4082125603864734;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8797417271993543;
            result[1] += (float)0;
            result[2] += (float)0.00645682001614205;
            result[3] += (float)0.09927360774818401;
            result[4] += (float)0.008071025020177562;
            result[5] += (float)0.004035512510088781;
            result[6] += (float)0.002421307506053269;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9917355371900827;
            result[1] += (float)0;
            result[2] += (float)0.006887052341597796;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0013774104683195593;
          } else {
            result[0] += (float)0.9994044783230109;
            result[1] += (float)0;
            result[2] += (float)0.0005955216769890424;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += (float)0.4119448698315467;
            result[1] += (float)0.0013126230584117262;
            result[2] += (float)0.0006563115292058631;
            result[3] += (float)0.48107635090789763;
            result[4] += (float)0.10457230365346751;
            result[5] += (float)0.0002187705097352877;
            result[6] += (float)0.0002187705097352877;
          } else {
            result[0] += (float)0.9261874197689345;
            result[1] += (float)0;
            result[2] += (float)0.005776636713735558;
            result[3] += (float)0.06771501925545571;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00032092426187419767;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += (float)0.007761966364812419;
            result[1] += (float)0;
            result[2] += (float)0.009055627425614488;
            result[3] += (float)0.9780077619663649;
            result[4] += (float)0.00517464424320828;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0365296803652968;
            result[3] += (float)0.091324200913242;
            result[4] += (float)0.867579908675799;
            result[5] += (float)0.0045662100456621;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.021235521235521235;
            result[2] += (float)0;
            result[3] += (float)0.9768339768339769;
            result[4] += (float)0.0019305019305019305;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.024725274725274724;
            result[1] += (float)0;
            result[2] += (float)0.024725274725274724;
            result[3] += (float)0.37362637362637363;
            result[4] += (float)0.5769230769230769;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0234375;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9765625;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)16) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.75;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.25;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0003078817733990148;
            result[2] += (float)0.004310344827586207;
            result[3] += (float)0.9944581280788177;
            result[4] += (float)0;
            result[5] += (float)0.0009236453201970443;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.004366812227074236;
            result[3] += (float)0.9956331877729258;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.9939059909486042;
            result[1] += (float)0.0015235022628489491;
            result[2] += (float)0.002509297844692387;
            result[3] += (float)0.0017475467132679124;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00031366223058654837;
          } else {
            result[0] += (float)0.758139534883721;
            result[1] += (float)0;
            result[2] += (float)0.00930232558139535;
            result[3] += (float)0.23255813953488375;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.8823529411764706;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.11764705882352941;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-189.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
            result[0] += (float)0.9985328638497653;
            result[1] += (float)0;
            result[2] += (float)0.0013204225352112676;
            result[3] += (float)0.00014671361502347418;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9628563201842787;
            result[1] += (float)0;
            result[2] += (float)0.005758710048949035;
            result[3] += (float)0.028505614742297725;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0028793550244745176;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.8;
            result[5] += (float)0.2;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9996889580093312;
            result[4] += (float)0;
            result[5] += (float)0.00031104199066874026;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9333333333333333;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.06666666666666667;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9981239771684031;
            result[1] += (float)0.0006785614497265798;
            result[2] += (float)0.0010777152436833915;
            result[3] += (float)3.9915379395681165e-05;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)7.983075879136233e-05;
          } else {
            result[0] += (float)0.9107806691449815;
            result[1] += (float)0;
            result[2] += (float)0.08178438661710037;
            result[3] += (float)0.007434944237918215;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
            result[0] += (float)0.967741935483871;
            result[1] += (float)0;
            result[2] += (float)0.03225806451612903;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9949005609382968;
            result[1] += (float)0;
            result[2] += (float)0.005099439061703213;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.003751172241325414;
            result[3] += (float)0.9962488277586746;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9837076177895201;
            result[1] += (float)0;
            result[2] += (float)0.013650374284456188;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0026420079260237785;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
            result[0] += (float)0.931098696461825;
            result[1] += (float)0.0148975791433892;
            result[2] += (float)0;
            result[3] += (float)0.0521415270018622;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00186219739292365;
          } else {
            result[0] += (float)0.9971830985915493;
            result[1] += (float)0;
            result[2] += (float)0.002112676056338028;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007042253521126761;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += (float)0.8042553191489362;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.19574468085106383;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.6755407653910149;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.324459234608985;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.9501500500166723;
            result[1] += (float)0;
            result[2] += (float)0.0026675558519506505;
            result[3] += (float)0.04701567189063022;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00016672224074691566;
          } else {
            result[0] += (float)0.9991664814403202;
            result[1] += (float)5.556790397866193e-05;
            result[2] += (float)0.00011113580795732386;
            result[3] += (float)0.0005556790397866193;
            result[4] += (float)0.00011113580795732386;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.026200873362445413;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9737991266375546;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0041462495288352805;
            result[2] += (float)0.008292499057670561;
            result[3] += (float)0.9875612514134942;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0.989247311827957;
            result[1] += (float)0.010752688172043012;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3076923076923077;
            result[1] += (float)0;
            result[2] += (float)0.3269230769230769;
            result[3] += (float)0.36538461538461536;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.06976744186046512;
            result[3] += (float)0.9302325581395349;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9967213114754099;
            result[4] += (float)0;
            result[5] += (float)0.003278688524590164;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9942196531791907;
            result[1] += (float)0;
            result[2] += (float)0.005780346820809248;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)27.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9305912596401028;
            result[1] += (float)0;
            result[2] += (float)0.06426735218508997;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.005141388174807198;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)89.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)1;
          } else {
            result[0] += (float)0.75;
            result[1] += (float)0;
            result[2] += (float)0.25;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9905660377358491;
            result[4] += (float)0.0031446540880503146;
            result[5] += (float)0.006289308176100629;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.6666666666666666;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.3333333333333333;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9977542508822586;
            result[1] += (float)0;
            result[2] += (float)0.002245749117741418;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9946524064171123;
            result[1] += (float)0;
            result[2] += (float)0.0053475935828877;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9998869353835718;
            result[1] += (float)0;
            result[2] += (float)0.00011306461642828877;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8980401885388242;
            result[1] += (float)0.0014884644008930788;
            result[2] += (float)0.010667328206400399;
            result[3] += (float)0.08881170925328703;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.000992309600595386;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0007541478129713424;
            result[2] += (float)0.004147812971342383;
            result[3] += (float)0.9950980392156863;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.9144811858608894;
            result[1] += (float)0;
            result[2] += (float)0.01596351197263398;
            result[3] += (float)0.06157354618015964;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00798175598631699;
          } else {
            result[0] += (float)0.9835032993401319;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.016496700659868028;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.898989898989899;
            result[1] += (float)0;
            result[2] += (float)0.10101010101010101;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.7777777777777778;
            result[2] += (float)0;
            result[3] += (float)0.2222222222222222;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.3333333333333333;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6666666666666666;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0.003992015968063872;
            result[1] += (float)0.011976047904191617;
            result[2] += (float)0;
            result[3] += (float)0.9840319361277445;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += (float)0.010067114093959731;
            result[1] += (float)0.0436241610738255;
            result[2] += (float)0;
            result[3] += (float)0.10067114093959731;
            result[4] += (float)0.8456375838926175;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            result[0] += (float)0.7894736842105263;
            result[1] += (float)0;
            result[2] += (float)0.21052631578947367;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9896157840083074;
            result[1] += (float)0;
            result[2] += (float)0.010384215991692628;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
            result[0] += (float)0.20062370062370063;
            result[1] += (float)0.017671517671517672;
            result[2] += (float)0;
            result[3] += (float)0.7505197505197505;
            result[4] += (float)0.031185031185031187;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0036968576709796672;
            result[3] += (float)0.9916820702402958;
            result[4] += (float)0.0046210720887245845;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += (float)0.9150943396226415;
            result[1] += (float)0;
            result[2] += (float)0.08490566037735849;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.009174311926605505;
            result[1] += (float)0;
            result[2] += (float)0.09174311926605505;
            result[3] += (float)0.8990825688073395;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.99860529986053;
            result[4] += (float)0;
            result[5] += (float)0.001394700139470014;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.6;
            result[3] += (float)0;
            result[4] += (float)0.26666666666666666;
            result[5] += (float)0.13333333333333333;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0784313725490196;
            result[3] += (float)0;
            result[4] += (float)0.9215686274509803;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-21.5) ) ) {
            result[0] += (float)0.375;
            result[1] += (float)0;
            result[2] += (float)0.625;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9812206572769953;
            result[1] += (float)0;
            result[2] += (float)0.018779342723004695;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.022727272727272728;
            result[3] += (float)0;
            result[4] += (float)0.9772727272727273;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0.9984617016762147;
            result[1] += (float)0.00010608953957139826;
            result[2] += (float)0.0006895820072140887;
            result[3] += (float)0.0007426267769997878;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9438202247191011;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.056179775280898875;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.4528301886792453;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5471698113207547;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9089207735495946;
            result[1] += (float)0.0028072364316905803;
            result[2] += (float)0.004990642545227698;
            result[3] += (float)0.08265751715533375;
            result[4] += (float)0;
            result[5] += (float)0.00031191515907673113;
            result[6] += (float)0.00031191515907673113;
          } else {
            result[0] += (float)0.12340710932260228;
            result[1] += (float)0;
            result[2] += (float)0.004024144869215292;
            result[3] += (float)0.8725687458081824;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
            result[0] += (float)0.9989556135770234;
            result[1] += (float)0;
            result[2] += (float)0.0010443864229765013;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9676124964173115;
            result[1] += (float)0;
            result[2] += (float)0.005445686443106907;
            result[3] += (float)0.026368586987675552;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005732301519059903;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.990234375;
            result[1] += (float)0;
            result[2] += (float)0.00390625;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.005859375;
          } else {
            result[0] += (float)0.9974076474400518;
            result[1] += (float)0;
            result[2] += (float)0.002592352559948153;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9993822584630591;
            result[1] += (float)0;
            result[2] += (float)0.000617741536940944;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9306763962952568;
            result[1] += (float)0.004490597810833568;
            result[2] += (float)0.0016839741790625876;
            result[3] += (float)0.06258770698849285;
            result[4] += (float)0;
            result[5] += (float)0.000280662363177098;
            result[6] += (float)0.000280662363177098;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0010097610232245036;
            result[2] += (float)0.009424436216762033;
            result[3] += (float)0.9895658027600135;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9850421539298342;
            result[1] += (float)0;
            result[2] += (float)0.005167255915148219;
            result[3] += (float)0.007614903453902639;
            result[4] += (float)0;
            result[5] += (float)0.00027196083763937997;
            result[6] += (float)0.0019037258634756597;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.007226738934056007;
            result[1] += (float)0.012646793134598013;
            result[2] += (float)0.017163504968383016;
            result[3] += (float)0.962059620596206;
            result[4] += (float)0;
            result[5] += (float)0.0009033423667570009;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0016233766233766235;
            result[3] += (float)0.9983766233766234;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)1;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9619686800894854;
            result[1] += (float)0;
            result[2] += (float)0.03803131991051454;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9905956112852664;
            result[1] += (float)0;
            result[2] += (float)0.009404388714733543;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9986655228290916;
            result[1] += (float)0;
            result[2] += (float)0.0012391573729863693;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)9.53197979220284e-05;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            result[0] += (float)0.9996332966629996;
            result[1] += (float)0;
            result[2] += (float)0.0003667033370003667;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8685304117869287;
            result[1] += (float)0.0015111446921042692;
            result[2] += (float)0.004344540989799774;
            result[3] += (float)0.12334718549301096;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.002266717038156404;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.006050129645635264;
            result[1] += (float)0;
            result[2] += (float)0.0025929127052722557;
            result[3] += (float)0.986171132238548;
            result[4] += (float)0.005185825410544511;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.30930930930930933;
            result[1] += (float)0;
            result[2] += (float)0.01951951951951952;
            result[3] += (float)0.4692192192192192;
            result[4] += (float)0.20195195195195195;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.1719641401792991;
            result[1] += (float)0.017114914425427872;
            result[2] += (float)0;
            result[3] += (float)0.810920945395273;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.22739018087855298;
            result[1] += (float)0;
            result[2] += (float)0.041343669250646;
            result[3] += (float)0.7312661498708011;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-10.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00101010101010101;
            result[2] += (float)0;
            result[3] += (float)0.998989898989899;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.02631578947368421;
            result[3] += (float)0;
            result[4] += (float)0.9736842105263158;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0005854800936768151;
            result[3] += (float)0.9988290398126465;
            result[4] += (float)0.0005854800936768151;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.56;
            result[2] += (float)0.44;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.04633204633204633;
            result[2] += (float)0;
            result[3] += (float)0.007722007722007722;
            result[4] += (float)0.9459459459459459;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.1348314606741573;
            result[4] += (float)0.8651685393258427;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.18772563176895307;
            result[1] += (float)0;
            result[2] += (float)0.04693140794223827;
            result[3] += (float)0.7653429602888087;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)54) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.13793103448275862;
            result[3] += (float)0;
            result[4] += (float)0.8620689655172413;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
            result[0] += (float)0.0031055900621118015;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9953416149068324;
            result[4] += (float)0;
            result[5] += (float)0.0015527950310559007;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.2;
            result[2] += (float)0;
            result[3] += (float)0.8;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9959313507915373;
            result[1] += (float)0.0005918035212309514;
            result[2] += (float)0.0016274596833851164;
            result[3] += (float)0.0014795088030773785;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0003698772007693446;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += (float)0.6862567811934901;
            result[1] += (float)0;
            result[2] += (float)0.0015069318866787222;
            result[3] += (float)0.31223628691983124;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9442997395311561;
            result[1] += (float)0;
            result[2] += (float)0.008415147265077139;
            result[3] += (float)0.04488078541374474;
            result[4] += (float)0;
            result[5] += (float)0.0006010819475055099;
            result[6] += (float)0.0018032458425165298;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.978709248170326;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.021290751829673986;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += (float)0.05936319481921209;
            result[1] += (float)0;
            result[2] += (float)0.009174311926605505;
            result[3] += (float)0.9314624932541824;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9932569116655429;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.006743088334457181;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += (float)0.9886363636363636;
            result[1] += (float)0;
            result[2] += (float)0.011363636363636364;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.1;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.994475138121547;
            result[1] += (float)0;
            result[2] += (float)0.0055248618784530384;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9996704383170384;
            result[1] += (float)0;
            result[2] += (float)0.000329561682961661;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.008620689655172415;
            result[2] += (float)0.01120689655172414;
            result[3] += (float)0.9784482758620691;
            result[4] += (float)0.001724137931034483;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0.9904761904761905;
            result[1] += (float)0.009523809523809525;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8905364151766246;
            result[1] += (float)0.003052769297863062;
            result[2] += (float)0.0013083296990841695;
            result[3] += (float)0.1044483209768862;
            result[4] += (float)0;
            result[5] += (float)0.00043610989969472314;
            result[6] += (float)0.00021805494984736157;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.01327433628318584;
            result[2] += (float)0;
            result[3] += (float)0.9867256637168141;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9989572471324296;
            result[4] += (float)0;
            result[5] += (float)0.0010427528675703858;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += (float)0.37516339869281046;
            result[1] += (float)0;
            result[2] += (float)0.027450980392156862;
            result[3] += (float)0.5934640522875817;
            result[4] += (float)0.00392156862745098;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0055248618784530384;
            result[2] += (float)0;
            result[3] += (float)0.08066298342541436;
            result[4] += (float)0.9138121546961326;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)39) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0015513496742165685;
            result[3] += (float)0.9984486503257834;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9946605644546148;
            result[1] += (float)0;
            result[2] += (float)0.005339435545385202;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.939843068875327;
            result[1] += (float)0;
            result[2] += (float)0.04882301656495205;
            result[3] += (float)0.0017436791630340018;
            result[4] += (float)0;
            result[5] += (float)0.0034873583260680036;
            result[6] += (float)0.006102877070619006;
          }
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
  result[6] /= 30;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_2/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
