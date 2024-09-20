
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)3.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.996031746031746;
                result[4] += (float)0;
                result[5] += (float)0.003968253968253968;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.21052631578947367;
                result[2] += (float)0.7368421052631579;
                result[3] += (float)0.05263157894736842;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9989743589743589;
                result[4] += (float)0;
                result[5] += (float)0.0010256410256410256;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.5;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5229.5) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9796437659033079;
                result[1] += (float)0;
                result[2] += (float)0.020356234096692113;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += (float)0.9992217898832685;
                result[1] += (float)0.00014149274849663954;
                result[2] += (float)0.0005659709939865582;
                result[3] += (float)7.074637424831977e-05;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9934456928838952;
                result[1] += (float)0;
                result[2] += (float)0.003745318352059925;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0028089887640449437;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                result[0] += (float)0.9915682967959528;
                result[1] += (float)0;
                result[2] += (float)0.006745362563237774;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016863406408094434;
              } else {
                result[0] += (float)0.9707207207207208;
                result[1] += (float)0.027027027027027032;
                result[2] += (float)0.0022522522522522527;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.9958188153310105;
                result[1] += (float)0;
                result[2] += (float)0.004181184668989547;
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
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0036330608537693005;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9963669391462306;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
                result[0] += (float)0.27734375;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.72265625;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9834983498349835;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0165016501650165;
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.002077922077922078;
                result[3] += (float)0.9979220779220779;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9915254237288136;
                result[1] += (float)0;
                result[2] += (float)0.00847457627118644;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)31.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9296482412060302;
                result[1] += (float)0;
                result[2] += (float)0.052763819095477386;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.017587939698492462;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
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
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)126.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)1;
              } else {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0;
                result[2] += (float)0.3333333333333333;
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
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.017009847806624886;
                result[3] += (float)0.9829901521933752;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9978494623655914;
                result[1] += (float)0;
                result[2] += (float)0.002150537634408602;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8380281690140845;
                result[1] += (float)0;
                result[2] += (float)0.1619718309859155;
                result[3] += (float)0;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.875;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.125;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.2868369351669941;
                result[1] += (float)0.0137524557956778;
                result[2] += (float)0;
                result[3] += (float)0.6994106090373281;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.42857142857142855;
                result[1] += (float)0;
                result[2] += (float)0.5714285714285714;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.9230769230769231;
                result[2] += (float)0;
                result[3] += (float)0.07692307692307693;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1382) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                result[0] += (float)0.9984137055837564;
                result[1] += (float)0.000317258883248731;
                result[2] += (float)0.0010575296108291034;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00021150592216582066;
              } else {
                result[0] += (float)0.9813365442504516;
                result[1] += (float)0.002408187838651415;
                result[2] += (float)0.00481637567730283;
                result[3] += (float)0.011438892233594221;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                result[0] += (float)0.9998451532982348;
                result[1] += (float)0;
                result[2] += (float)0.0001548467017652524;
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-3.5) ) ) {
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
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13.5) ) ) {
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
                result[1] += (float)0.011363636363636364;
                result[2] += (float)0;
                result[3] += (float)0.9886363636363636;
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
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)1;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.3333333333333333;
                result[5] += (float)0.6666666666666666;
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
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9359605911330049;
                result[1] += (float)0;
                result[2] += (float)0.054187192118226604;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.009852216748768473;
              }
            }
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)0.9974025974025974;
                result[1] += (float)0;
                result[2] += (float)0.002077922077922078;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005194805194805195;
              } else {
                result[0] += (float)0.8600311041990669;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.13996889580093314;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
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
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-499) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)147.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0007575757575757576;
                result[2] += (float)0;
                result[3] += (float)0.9992424242424243;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.875;
                result[4] += (float)0.125;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
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
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                result[0] += (float)0.9881656804733728;
                result[1] += (float)0;
                result[2] += (float)0.011834319526627219;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.10144927536231885;
                result[3] += (float)0.8985507246376812;
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
                result[0] += (float)0.006993006993006993;
                result[1] += (float)0;
                result[2] += (float)0.027972027972027972;
                result[3] += (float)0.965034965034965;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)27) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.045454545454545456;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9545454545454546;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-117) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5;
                result[4] += (float)0.5;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-45) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.016216216216216217;
                result[2] += (float)0;
                result[3] += (float)0.9783783783783784;
                result[4] += (float)0;
                result[5] += (float)0.005405405405405406;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)31.5) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.3;
                result[2] += (float)0;
                result[3] += (float)0.7;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)0.9989703459637562;
                result[1] += (float)0.00016474464579901152;
                result[2] += (float)0.0007825370675453048;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)8.237232289950576e-05;
              } else {
                result[0] += (float)0.991727493917275;
                result[1] += (float)0.0024330900243309003;
                result[2] += (float)0.00535279805352798;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00048661800486618007;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
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
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
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
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
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
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.3225806451612903;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6774193548387096;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8142857142857143;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.18571428571428572;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
                result[0] += (float)0.9375;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0625;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                result[0] += (float)0.0003669724770642202;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996330275229358;
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
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)39) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8571428571428571;
                result[5] += (float)0.14285714285714285;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9736379613356766;
                result[1] += (float)0;
                result[2] += (float)0.01845342706502636;
                result[3] += (float)0.0008787346221441124;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007029876977152899;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-70) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.02857142857142857;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9714285714285714;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
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
                result[2] += (float)0.8;
                result[3] += (float)0;
                result[4] += (float)0.2;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
                result[0] += (float)0.9975397426192278;
                result[1] += (float)0;
                result[2] += (float)0.0005677517032551098;
                result[3] += (float)0.0018925056775170325;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.14691943127962084;
                result[1] += (float)0;
                result[2] += (float)0.04739336492890995;
                result[3] += (float)0.8056872037914692;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.49635036496350365;
                result[1] += (float)0;
                result[2] += (float)0.0031282586027111575;
                result[3] += (float)0.4994786235662148;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010427528675703858;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.988155668358714;
                result[1] += (float)0;
                result[2] += (float)0.011844331641285956;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9993838570548367;
                result[1] += (float)0;
                result[2] += (float)0.0006161429451632779;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9976133651551312;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002386634844868735;
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
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.13043478260869565;
                result[2] += (float)0;
                result[3] += (float)0.8695652173913043;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9813374805598757;
                result[1] += (float)0;
                result[2] += (float)0.013996889580093314;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0046656298600311055;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9705882352941176;
                result[4] += (float)0;
                result[5] += (float)0.029411764705882353;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9956709956709957;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.004329004329004329;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9791666666666666;
                result[1] += (float)0;
                result[2] += (float)0.020833333333333332;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
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
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
                result[0] += (float)0.8695652173913043;
                result[1] += (float)0;
                result[2] += (float)0.13043478260869565;
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
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9717741935483871;
                result[1] += (float)0;
                result[2] += (float)0.016129032258064516;
                result[3] += (float)0.012096774193548387;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0018587360594795538;
                result[2] += (float)0;
                result[3] += (float)0.9981412639405205;
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.4666666666666667;
                result[2] += (float)0;
                result[3] += (float)0.5333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
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
                result[2] += (float)0.03402854006586169;
                result[3] += (float)0.9659714599341384;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-9) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.009419152276295133;
                result[2] += (float)0;
                result[3] += (float)0.9905808477237049;
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
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5230.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
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
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += (float)0.8;
                result[1] += (float)0;
                result[2] += (float)0.2;
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4) ) ) {
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
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0.5;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += (float)0.44084682440846823;
                result[1] += (float)0;
                result[2] += (float)0.010792860107928601;
                result[3] += (float)0.5483603154836032;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8773946360153256;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.12260536398467432;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-58) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9766042780748663;
                result[1] += (float)0;
                result[2] += (float)0.0106951871657754;
                result[3] += (float)0.010026737967914439;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00267379679144385;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02577319587628866;
                result[3] += (float)0.9742268041237113;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                result[0] += (float)0.7483443708609272;
                result[1] += (float)0.026490066225165563;
                result[2] += (float)0.024282560706401765;
                result[3] += (float)0.18984547461368653;
                result[4] += (float)0;
                result[5] += (float)0.004415011037527594;
                result[6] += (float)0.006622516556291391;
              } else {
                result[0] += (float)0.5684931506849316;
                result[1] += (float)0;
                result[2] += (float)0.017123287671232876;
                result[3] += (float)0.4143835616438356;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
                result[0] += (float)0.7542372881355932;
                result[1] += (float)0;
                result[2] += (float)0.038135593220338986;
                result[3] += (float)0.00847457627118644;
                result[4] += (float)0.19915254237288135;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9770992366412213;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.007633587786259542;
                result[4] += (float)0.015267175572519083;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.031746031746031744;
                result[2] += (float)0;
                result[3] += (float)0.9365079365079365;
                result[4] += (float)0;
                result[5] += (float)0.031746031746031744;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                result[0] += (float)0.9705882352941176;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.029411764705882353;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9980771695936418;
                result[1] += (float)0.0003845660812716318;
                result[2] += (float)0.0015382643250865273;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.987012987012987;
                result[1] += (float)0;
                result[2] += (float)0.003246753246753247;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00974025974025974;
              } else {
                result[0] += (float)0.9994526546250684;
                result[1] += (float)0;
                result[2] += (float)0.0003284072249589491;
                result[3] += (float)0.00010946907498631637;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00010946907498631637;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
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
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
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
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                result[0] += (float)0.9382716049382716;
                result[1] += (float)0;
                result[2] += (float)0.06172839506172839;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9970760233918129;
                result[1] += (float)0;
                result[2] += (float)0.0009746588693957114;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001949317738791423;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
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
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
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
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)16.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9760119940029985;
                result[1] += (float)0;
                result[2] += (float)0.0239880059970015;
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.1;
                result[1] += (float)0;
                result[2] += (float)0.9;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0091324200913242;
                result[3] += (float)0.9908675799086758;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9939759036144579;
                result[1] += (float)0;
                result[2] += (float)0.006024096385542169;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.008571428571428572;
                result[2] += (float)0;
                result[3] += (float)0.9914285714285714;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)110) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
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
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.999034749034749;
                result[4] += (float)0;
                result[5] += (float)0.0009652509652509653;
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.013100436681222707;
                result[2] += (float)0;
                result[3] += (float)0.9694323144104804;
                result[4] += (float)0;
                result[5] += (float)0.017467248908296942;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.07407407407407407;
                result[2] += (float)0;
                result[3] += (float)0.9259259259259259;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)0.9987878787878788;
                result[1] += (float)9.324009324009324e-05;
                result[2] += (float)0.0010256410256410256;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)9.324009324009324e-05;
              } else {
                result[0] += (float)0.9951573849878934;
                result[1] += (float)0.0014527845036319612;
                result[2] += (float)0.0009685230024213075;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002421307506053269;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9981834695731153;
                result[1] += (float)0;
                result[2] += (float)0.0018165304268846503;
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
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0041841004184100415;
                result[3] += (float)0.99581589958159;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0.9885057471264368;
                result[1] += (float)0;
                result[2] += (float)0.009578544061302681;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0019157088122605363;
              } else {
                result[0] += (float)0.9285714285714286;
                result[1] += (float)0;
                result[2] += (float)0.05952380952380952;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.011904761904761904;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.9984307571596704;
                result[1] += (float)0;
                result[2] += (float)0.001569242840329541;
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)25.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0019175455417066154;
                result[3] += (float)0.99712368168744;
                result[4] += (float)0;
                result[5] += (float)0.0009587727708533077;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9795918367346939;
                result[4] += (float)0;
                result[5] += (float)0.02040816326530612;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                result[0] += (float)0.9994998213647731;
                result[1] += (float)0;
                result[2] += (float)0.0005001786352268668;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.25;
                result[2] += (float)0;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)18.5) ) ) {
                result[0] += (float)0.41818181818181815;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5818181818181818;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                result[0] += (float)0.875;
                result[1] += (float)0;
                result[2] += (float)0.125;
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
                result[0] += (float)0.012048192771084338;
                result[1] += (float)0.03132530120481928;
                result[2] += (float)0.05301204819277108;
                result[3] += (float)0.9036144578313253;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                result[0] += (float)0.9956101843722563;
                result[1] += (float)0;
                result[2] += (float)0.003511852502194908;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000877963125548727;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.05063291139240506;
                result[3] += (float)0.9493670886075949;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.6020864381520119;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.3979135618479881;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0004743833017077799;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9995256166982922;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9917898193760263;
                result[1] += (float)0;
                result[2] += (float)0.008210180623973728;
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)34) ) ) {
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
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                result[0] += (float)0.4375;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5625;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9791666666666666;
                result[1] += (float)0;
                result[2] += (float)0.020833333333333332;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9923809523809524;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.007619047619047619;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9903614457831326;
                result[1] += (float)0;
                result[2] += (float)0.006746987951807229;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002891566265060241;
              } else {
                result[0] += (float)0.8;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.2;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
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
                result[2] += (float)0.06060606060606061;
                result[3] += (float)0.9393939393939394;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22) ) ) {
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
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
                result[0] += (float)0.9964253798033958;
                result[1] += (float)0;
                result[2] += (float)0.0035746201966041107;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9991511035653651;
                result[1] += (float)0;
                result[2] += (float)0.0008488964346349745;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9727272727272728;
                result[1] += (float)0;
                result[2] += (float)0.02727272727272727;
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
                result[0] += (float)0.9765625;
                result[1] += (float)0;
                result[2] += (float)0.0234375;
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
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)20) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.001651073197578426;
                result[2] += (float)0.014859658778205834;
                result[3] += (float)0.9812878370941112;
                result[4] += (float)0;
                result[5] += (float)0.002201430930104568;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.2786885245901639;
                result[3] += (float)0;
                result[4] += (float)0.7213114754098361;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0044444444444444444;
                result[3] += (float)0;
                result[4] += (float)0.9955555555555555;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.13333333333333333;
                result[3] += (float)0.8666666666666667;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9728579031399681;
                result[1] += (float)0;
                result[2] += (float)0.007982969664715274;
                result[3] += (float)0.018626929217668974;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005321979776476849;
              } else {
                result[0] += (float)0.8440366972477065;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.1559633027522936;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                result[0] += (float)0.997080291970803;
                result[1] += (float)0;
                result[2] += (float)0.0021897810218978104;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00072992700729927;
              } else {
                result[0] += (float)0.9454545454545454;
                result[1] += (float)0;
                result[2] += (float)0.05454545454545454;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2467) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
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
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.000856898029134533;
                result[2] += (float)0.000856898029134533;
                result[3] += (float)0.998286203941731;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9586776859504132;
                result[1] += (float)0;
                result[2] += (float)0.04132231404958678;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.11734693877551021;
                result[4] += (float)0.8826530612244898;
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
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.25;
                result[2] += (float)0;
                result[3] += (float)0.75;
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
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9473684210526315;
                result[1] += (float)0;
                result[2] += (float)0.05263157894736842;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-5) ) ) {
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
                result[2] += (float)0.0014814814814814814;
                result[3] += (float)0.9985185185185185;
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
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0033557046979865762;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9865771812080535;
                result[4] += (float)0.0033557046979865762;
                result[5] += (float)0.0067114093959731525;
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
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0.9943883277216611;
                result[1] += (float)0;
                result[2] += (float)0.004489337822671156;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001122334455667789;
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9876543209876543;
                result[1] += (float)0;
                result[2] += (float)0.012345679012345678;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.947103274559194;
                result[1] += (float)0.0008396305625524769;
                result[2] += (float)0.007556675062972292;
                result[3] += (float)0.04450041981528128;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9881981834992114;
                result[1] += (float)0;
                result[2] += (float)0.0006526350138684941;
                result[3] += (float)0.010768477728830151;
                result[4] += (float)0.00016315875346712352;
                result[5] += (float)0.00010877250231141567;
                result[6] += (float)0.00010877250231141567;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
                result[0] += (float)0.9935897435897436;
                result[1] += (float)0;
                result[2] += (float)0.00641025641025641;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.03896103896103896;
                result[2] += (float)0;
                result[3] += (float)0.961038961038961;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
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
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.016042780748663103;
                result[3] += (float)0.983957219251337;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.74;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.26;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.2608695652173913;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7391304347826086;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45.5) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
                result[0] += (float)0.375;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.625;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.888268156424581;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.11173184357541899;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)34) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9887372013651877;
                result[1] += (float)0;
                result[2] += (float)0.008191126279863481;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0030716723549488053;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
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
                result[4] += (float)0.5;
                result[5] += (float)0.5;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                result[0] += (float)0.027777777777777776;
                result[1] += (float)0;
                result[2] += (float)0.3055555555555556;
                result[3] += (float)0.6666666666666666;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
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
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)26) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
                result[0] += (float)0.4;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6;
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
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
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9766355140186916;
                result[1] += (float)0;
                result[2] += (float)0.02336448598130841;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9941176470588236;
                result[1] += (float)0;
                result[2] += (float)0.0058823529411764705;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)1;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9953287818900467;
                result[1] += (float)0;
                result[2] += (float)0.004671218109953288;
                result[3] += (float)0;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-5) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
                result[0] += (float)0.002171552660152009;
                result[1] += (float)0.004885993485342019;
                result[2] += (float)0.025515743756786103;
                result[3] += (float)0.9663409337676439;
                result[4] += (float)0.0010857763300760044;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5870967741935483;
                result[4] += (float)0.4129032258064516;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0017441860465116279;
                result[1] += (float)0.011046511627906977;
                result[2] += (float)0;
                result[3] += (float)0.9872093023255814;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.6875;
                result[2] += (float)0;
                result[3] += (float)0.3125;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-59.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9908303616912888;
                result[1] += (float)0;
                result[2] += (float)0.0056036678553234845;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003565970453387672;
              } else {
                result[0] += (float)0.9988273233655819;
                result[1] += (float)0;
                result[2] += (float)0.0011726766344180592;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
                result[0] += (float)0.97265625;
                result[1] += (float)0;
                result[2] += (float)0.00830078125;
                result[3] += (float)0.01708984375;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001953125;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08333333333333333;
                result[3] += (float)0.9166666666666666;
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
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
                result[0] += (float)0.33014354066985646;
                result[1] += (float)0.03349282296650718;
                result[2] += (float)0;
                result[3] += (float)0.6363636363636364;
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
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
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
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)33) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.018867924528301886;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9433962264150944;
                result[4] += (float)0.009433962264150943;
                result[5] += (float)0.02830188679245283;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-26) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.3333333333333333;
                result[3] += (float)0;
                result[4] += (float)0.6666666666666666;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)39) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
                result[3] += (float)0.9984276729559748;
                result[4] += (float)0;
                result[5] += (float)0.0015723270440251573;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
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
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                result[0] += (float)0.9959636730575177;
                result[1] += (float)0;
                result[2] += (float)0.004036326942482341;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9791044776119403;
                result[1] += (float)0.014925373134328358;
                result[2] += (float)0.0014925373134328358;
                result[3] += (float)0.004477611940298508;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)15) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.995;
                result[1] += (float)0;
                result[2] += (float)0.0038461538461538464;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001153846153846154;
              } else {
                result[0] += (float)0.9991773530123398;
                result[1] += (float)0;
                result[2] += (float)0.0006774739898378903;
                result[3] += (float)0.00014517299782240505;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
                result[0] += (float)0.810126582278481;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.189873417721519;
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
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.013409961685823755;
                result[3] += (float)0.9865900383141762;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9747899159663865;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.025210084033613446;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9789674952198854;
                result[1] += (float)0;
                result[2] += (float)0.015296367112810709;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005736137667304016;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
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
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
                result[0] += (float)0.25794621026894865;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7420537897310513;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.4368131868131868;
                result[1] += (float)0;
                result[2] += (float)0.0027472527472527475;
                result[3] += (float)0.5604395604395604;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
                result[0] += (float)0.9867109634551495;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.013289036544850499;
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.9986106286905175;
                result[1] += (float)0;
                result[2] += (float)0.0013893713094824591;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0;
                result[2] += (float)0.3333333333333333;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                result[0] += (float)0.9977092877967514;
                result[1] += (float)0.00020824656393169514;
                result[2] += (float)0.001874219075385256;
                result[3] += (float)0.00010412328196584757;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00010412328196584757;
              } else {
                result[0] += (float)0.9600000000000001;
                result[1] += (float)0.0023529411764705885;
                result[2] += (float)0;
                result[3] += (float)0.037647058823529415;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.9993299832495812;
                result[1] += (float)0;
                result[2] += (float)0.0006700167504187605;
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)44) ) ) {
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
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
                result[3] += (float)0.9952380952380953;
                result[4] += (float)0;
                result[5] += (float)0.004761904761904762;
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
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9528301886792453;
                result[1] += (float)0;
                result[2] += (float)0.02830188679245283;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.018867924528301886;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9940119760479041;
                result[1] += (float)0;
                result[2] += (float)0.005988023952095809;
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
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08304498269896193;
                result[3] += (float)0.916955017301038;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.011299435028248588;
                result[3] += (float)0.9887005649717514;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08064516129032258;
                result[3] += (float)0;
                result[4] += (float)0.9193548387096774;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)235) ) ) {
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)121.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4897959183673469;
                result[4] += (float)0.5102040816326531;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9636363636363636;
                result[4] += (float)0.03636363636363636;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)126.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.03003003003003003;
                result[2] += (float)0;
                result[3] += (float)0.07807807807807808;
                result[4] += (float)0.8918918918918919;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
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
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)33) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.9140271493212669;
                result[1] += (float)0;
                result[2] += (float)0.06787330316742081;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01809954751131222;
              } else {
                result[0] += (float)0.9921465968586388;
                result[1] += (float)0;
                result[2] += (float)0.0026178010471204194;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005235602094240839;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)1;
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1967.5) ) ) {
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
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9930394431554525;
                result[1] += (float)0;
                result[2] += (float)0.0069605568445475635;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.625;
                result[1] += (float)0;
                result[2] += (float)0.375;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.75;
                result[1] += (float)0;
                result[2] += (float)0.25;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
                result[0] += (float)0.8888888888888888;
                result[1] += (float)0;
                result[2] += (float)0.1111111111111111;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.004575163398692811;
                result[3] += (float)0.9934640522875817;
                result[4] += (float)0.00196078431372549;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.014492753623188406;
                result[3] += (float)0.7246376811594203;
                result[4] += (float)0.2608695652173913;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.05128205128205128;
                result[2] += (float)0;
                result[3] += (float)0.28205128205128205;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0076045627376425855;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9923954372623575;
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
                result[0] += (float)0.12;
                result[1] += (float)0.2;
                result[2] += (float)0;
                result[3] += (float)0.68;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)9.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.18571428571428572;
                result[4] += (float)0.8142857142857143;
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
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-18) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9977695167286246;
                result[4] += (float)0;
                result[5] += (float)0.0022304832713754648;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.16666666666666666;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.8333333333333334;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
        } else {
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
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)28) ) ) {
                result[0] += (float)0.9134615384615384;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.08653846153846154;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0.9721448467966575;
                result[1] += (float)0.0027855153203342623;
                result[2] += (float)0;
                result[3] += (float)0.02506963788300836;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9967594936708861;
                result[1] += (float)0.0012151898734177216;
                result[2] += (float)0.0012151898734177216;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008101265822784811;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                result[0] += (float)0.9907834101382489;
                result[1] += (float)0;
                result[2] += (float)0.009216589861751152;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9984362783424551;
                result[1] += (float)0;
                result[2] += (float)0.001563721657544957;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.7543859649122807;
                result[1] += (float)0;
                result[2] += (float)0.14035087719298245;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.10526315789473684;
              } else {
                result[0] += (float)0.9655172413793104;
                result[1] += (float)0;
                result[2] += (float)0.034482758620689655;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9658536585365853;
                result[1] += (float)0;
                result[2] += (float)0.024390243902439025;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00975609756097561;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-14.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
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
              result[2] += (float)1;
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
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9886363636363636;
                result[1] += (float)0;
                result[2] += (float)0.011363636363636364;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.01639344262295082;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9836065573770492;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                result[0] += (float)0.9731182795698925;
                result[1] += (float)0;
                result[2] += (float)0.021505376344086023;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005376344086021506;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0008733624454148472;
                result[3] += (float)0.9991266375545852;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02968036529680365;
                result[3] += (float)0.9703196347031964;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)0.9693877551020408;
                result[1] += (float)0;
                result[2] += (float)0.030612244897959183;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9974429396723176;
                result[1] += (float)0.0002841178141869496;
                result[2] += (float)0.0015152950089970644;
                result[3] += (float)0.00047352969031158257;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0002841178141869496;
              } else {
                result[0] += (float)0.9997185080928923;
                result[1] += (float)0;
                result[2] += (float)7.037297677691766e-05;
                result[3] += (float)0.000211118930330753;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
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
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-30.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.007837548984681154;
                result[3] += (float)0.9921624510153189;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9865336658354115;
                result[1] += (float)0;
                result[2] += (float)0.010972568578553617;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0024937655860349127;
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
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
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
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-11631) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.5;
                result[2] += (float)0;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
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
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9166666666666666;
                result[1] += (float)0;
                result[2] += (float)0.08333333333333333;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.6;
                result[2] += (float)0;
                result[3] += (float)0.4;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.9506726457399103;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.04932735426008968;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
                result[0] += (float)0.9975062344139651;
                result[1] += (float)0.0020781379883624274;
                result[2] += (float)0;
                result[3] += (float)0.00041562759767248546;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9988859571973029;
                result[1] += (float)0;
                result[2] += (float)0.0010554089709762533;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)5.8633831720902964e-05;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
                result[0] += (float)0.7432432432432432;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.25675675675675674;
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)96) ) ) {
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
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                result[0] += (float)0.9813084112149533;
                result[1] += (float)0;
                result[2] += (float)0.018691588785046728;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9932960893854746;
                result[1] += (float)0;
                result[2] += (float)0.003351955307262569;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.0011173184357541896;
                result[6] += (float)0.0022346368715083793;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)0.9979550102249489;
                result[1] += (float)0.002044989775051125;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9264705882352942;
                result[1] += (float)0.029411764705882353;
                result[2] += (float)0.029411764705882353;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014705882352941176;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.17971163748712668;
                result[1] += (float)0.0025746652935118436;
                result[2] += (float)0;
                result[3] += (float)0.815653964984552;
                result[4] += (float)0.0010298661174047373;
                result[5] += (float)0.0010298661174047373;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.10126582278481013;
                result[3] += (float)0.27848101265822783;
                result[4] += (float)0.620253164556962;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9936204146730463;
                result[1] += (float)0;
                result[2] += (float)0.004784688995215311;
                result[3] += (float)0.001594896331738437;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                result[0] += (float)0.03411513859275053;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9658848614072495;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3533834586466165;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6466165413533834;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.9310344827586207;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.06896551724137931;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9997120644975526;
                result[1] += (float)0;
                result[2] += (float)0.00028793550244745177;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9713261648745519;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.02867383512544803;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                result[0] += (float)0.9044368600682594;
                result[1] += (float)0;
                result[2] += (float)0.07508532423208192;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.020477815699658702;
              } else {
                result[0] += (float)0.9968944099378882;
                result[1] += (float)0;
                result[2] += (float)0.003105590062111801;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
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
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9752066115702479;
                result[1] += (float)0;
                result[2] += (float)0.024793388429752067;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.9743589743589743;
                result[1] += (float)0;
                result[2] += (float)0.02564102564102564;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
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
                result[0] += (float)0.9795918367346939;
                result[1] += (float)0;
                result[2] += (float)0.02040816326530612;
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9989701338825953;
                result[1] += (float)0;
                result[2] += (float)0.0010298661174047373;
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
              result[0] += (float)1;
              result[1] += (float)0;
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
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
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
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.009191176470588236;
                result[2] += (float)0;
                result[3] += (float)0.9880514705882353;
                result[4] += (float)0;
                result[5] += (float)0.0027573529411764708;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)30) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.2413793103448276;
                result[1] += (float)0.06896551724137931;
                result[2] += (float)0.6896551724137931;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9653679653679654;
                result[4] += (float)0.030303030303030307;
                result[5] += (float)0.00432900432900433;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6923.5) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
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
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                result[0] += (float)0.9973913043478261;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0026086956521739132;
              } else {
                result[0] += (float)0.9166666666666666;
                result[1] += (float)0;
                result[2] += (float)0.08333333333333333;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.8297872340425532;
                result[1] += (float)0;
                result[2] += (float)0.15602836879432624;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014184397163120567;
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
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)0.9644670050761421;
                result[1] += (float)0;
                result[2] += (float)0.025380710659898477;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01015228426395939;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
                result[0] += (float)0.992;
                result[1] += (float)0;
                result[2] += (float)0.008;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6280487804878049;
                result[1] += (float)0;
                result[2] += (float)0.01016260162601626;
                result[3] += (float)0.3617886178861789;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9996256083863722;
                result[1] += (float)0;
                result[2] += (float)0.00037439161362785476;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9546218487394958;
                result[1] += (float)0;
                result[2] += (float)0.02857142857142857;
                result[3] += (float)0.01680672268907563;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
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
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)25.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8571428571428571;
                result[4] += (float)0;
                result[5] += (float)0.14285714285714285;
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
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.9964677112580382;
                result[1] += (float)0.0011774295806539262;
                result[2] += (float)0.0018114301240829635;
                result[3] += (float)0.0003622860248165927;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00018114301240829635;
              } else {
                result[0] += (float)0.9939812750780205;
                result[1] += (float)0;
                result[2] += (float)0.0020062416406598305;
                result[3] += (float)0.004012483281319661;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)0.8571428571428571;
                result[1] += (float)0;
                result[2] += (float)0.14285714285714285;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8163265306122449;
                result[1] += (float)0;
                result[2] += (float)0.12755102040816327;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.05612244897959184;
              }
            }
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
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
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0.14285714285714285;
                result[1] += (float)0;
                result[2] += (float)0.8571428571428571;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
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
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)25.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.003968253968253968;
                result[2] += (float)0;
                result[3] += (float)0.996031746031746;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8888888888888888;
                result[4] += (float)0;
                result[5] += (float)0.1111111111111111;
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
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
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
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                result[0] += (float)0.9973848320257493;
                result[1] += (float)0;
                result[2] += (float)0.0020116676725005027;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0006035003017501509;
              } else {
                result[0] += (float)0.9873035066505441;
                result[1] += (float)0.005441354292623942;
                result[2] += (float)0.007255139056831923;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0.9996338114128777;
                result[1] += (float)6.1031431187061336e-05;
                result[2] += (float)0.000183094293561184;
                result[3] += (float)0.00012206286237412267;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.998162186997473;
                result[1] += (float)0;
                result[2] += (float)0.001837813002526993;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)2) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
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
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)36) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9365079365079365;
                result[1] += (float)0;
                result[2] += (float)0.05555555555555555;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007936507936507936;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
                result[2] += (float)0.03636363636363636;
                result[3] += (float)0.9636363636363636;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
                result[0] += (float)0.8947368421052632;
                result[1] += (float)0;
                result[2] += (float)0.10526315789473684;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.92;
                result[1] += (float)0;
                result[2] += (float)0.08;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9937965260545906;
                result[1] += (float)0;
                result[2] += (float)0.00620347394540943;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9965753424657534;
                result[1] += (float)0;
                result[2] += (float)0.003424657534246575;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)51) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0023446658851113715;
                result[2] += (float)0;
                result[3] += (float)0.9976553341148886;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0.9985994397759104;
                result[1] += (float)0;
                result[2] += (float)0.0014005602240896359;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9846378931967813;
                result[1] += (float)0;
                result[2] += (float)0.011704462326261888;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.002926115581565472;
                result[6] += (float)0.000731528895391368;
              } else {
                result[0] += (float)0.6901983663943991;
                result[1] += (float)0.005834305717619604;
                result[2] += (float)0.0023337222870478415;
                result[3] += (float)0.3010501750291716;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005834305717619604;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-3) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.25;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9988412514484357;
                result[1] += (float)0;
                result[2] += (float)0.0011587485515643105;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.016129032258064516;
                result[2] += (float)0;
                result[3] += (float)0.9838709677419355;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.518796992481203;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.48120300751879697;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)73.5) ) ) {
                result[0] += (float)0.7467105263157895;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.2532894736842105;
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.1568627450980392;
                result[3] += (float)0.8431372549019608;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.011538461538461539;
                result[3] += (float)0.9884615384615385;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9741379310344828;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.02586206896551724;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.47619047619047616;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5238095238095238;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.9826254826254828;
                result[1] += (float)0;
                result[2] += (float)0.007722007722007723;
                result[3] += (float)0.0019305019305019308;
                result[4] += (float)0.0025740025740025744;
                result[5] += (float)0.0006435006435006436;
                result[6] += (float)0.004504504504504505;
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
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
              result[4] += (float)0;
              result[5] += (float)1;
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
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)8) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.989247311827957;
                result[1] += (float)0;
                result[2] += (float)0.010752688172043012;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-29.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.5882352941176471;
                result[3] += (float)0.4117647058823529;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
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
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)18) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)33) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
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
                result[3] += (float)0.9764453961456103;
                result[4] += (float)0.023554603854389723;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
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
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
                result[0] += (float)0.1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.888888888888889;
                result[1] += (float)0;
                result[2] += (float)0.007936507936507938;
                result[3] += (float)0.10317460317460318;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
                result[0] += (float)0.25806451612903225;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7419354838709677;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5314606741573034;
                result[1] += (float)0;
                result[2] += (float)0.0033707865168539327;
                result[3] += (float)0.4651685393258427;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.9768637532133676;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.02313624678663239;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9985905567300916;
                result[1] += (float)0;
                result[2] += (float)0.0014094432699083862;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.6190476190476191;
                result[1] += (float)0;
                result[2] += (float)0.047619047619047616;
                result[3] += (float)0.3333333333333333;
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
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)33.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9592760180995475;
                result[1] += (float)0;
                result[2] += (float)0.02262443438914027;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.00904977375565611;
                result[6] += (float)0.00904977375565611;
              } else {
                result[0] += (float)0.9963768115942029;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.0036231884057971015;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)42) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
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
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.996551724137931;
                result[4] += (float)0;
                result[5] += (float)0.0034482758620689655;
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.3333333333333333;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)114) ) ) {
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
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.125;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.875;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.125;
                result[3] += (float)0.875;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                result[0] += (float)0.5357142857142857;
                result[1] += (float)0;
                result[2] += (float)0.4642857142857143;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.027777777777777776;
                result[3] += (float)0.9722222222222222;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
                result[0] += (float)0.975;
                result[1] += (float)0;
                result[2] += (float)0.025;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9936079545454546;
                result[1] += (float)0;
                result[2] += (float)0.005681818181818182;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007102272727272727;
              } else {
                result[0] += (float)0.9996988858777477;
                result[1] += (float)0;
                result[2] += (float)0.00030111412225233364;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9487179487179487;
                result[1] += (float)0.017094017094017096;
                result[2] += (float)0.018043684710351376;
                result[3] += (float)0.015194681861348529;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000949667616334283;
              } else {
                result[0] += (float)0.9732458354366482;
                result[1] += (float)0;
                result[2] += (float)0.002019182231196366;
                result[3] += (float)0.02473498233215548;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.995729537366548;
                result[1] += (float)0;
                result[2] += (float)0.0035587188612099642;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007117437722419929;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                result[0] += (float)0.9981308411214953;
                result[1] += (float)0;
                result[2] += (float)0.001869158878504673;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9618320610687023;
                result[1] += (float)0;
                result[2] += (float)0.03816793893129771;
                result[3] += (float)0;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.18181818181818182;
                result[2] += (float)0;
                result[3] += (float)0.8181818181818182;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.008379888268156424;
                result[3] += (float)0.9916201117318436;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7578947368421053;
                result[4] += (float)0.24210526315789474;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.017391304347826087;
                result[2] += (float)0;
                result[3] += (float)0.9826086956521739;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)0.9920537897310513;
                result[1] += (float)0;
                result[2] += (float)0.007946210268948655;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.997895622895623;
                result[1] += (float)0;
                result[2] += (float)0.001473063973063973;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0006313131313131314;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0.994578109115554;
                result[1] += (float)0.0006777363605557439;
                result[2] += (float)0.0013554727211114877;
                result[3] += (float)0.003388681802778719;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9990445859872611;
                result[1] += (float)0;
                result[2] += (float)0.0006369426751592356;
                result[3] += (float)0.0003184713375796178;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                result[0] += (float)0.9992792273316996;
                result[1] += (float)0;
                result[2] += (float)0.0007207726683004181;
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
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
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
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
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
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.391304347826087;
                result[1] += (float)0;
                result[2] += (float)0.6086956521739131;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9705882352941176;
                result[1] += (float)0;
                result[2] += (float)0.029411764705882353;
                result[3] += (float)0;
                result[4] += (float)0;
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
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48) ) ) {
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
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)33) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9854014598540146;
                result[1] += (float)0;
                result[2] += (float)0.0072992700729927005;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0072992700729927005;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)107) ) ) {
                result[0] += (float)0.8360655737704918;
                result[1] += (float)0;
                result[2] += (float)0.16393442622950818;
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
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)1;
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
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
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
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
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
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9908256880733946;
                result[4] += (float)0;
                result[5] += (float)0.009174311926605505;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
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
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)0.7692307692307693;
                result[1] += (float)0;
                result[2] += (float)0.23076923076923078;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9757281553398058;
                result[1] += (float)0;
                result[2] += (float)0.024271844660194174;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9934402332361516;
                result[1] += (float)0;
                result[2] += (float)0.006559766763848397;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.99842661272196;
                result[1] += (float)0;
                result[2] += (float)0.001573387278040009;
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)33) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                result[0] += (float)0.9966329966329966;
                result[1] += (float)0.002244668911335578;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001122334455667789;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0012350761630300535;
                result[2] += (float)0.004116920543433511;
                result[3] += (float)0.9946480032935364;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9962825278810409;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0037174721189591076;
              } else {
                result[0] += (float)0.9147727272727273;
                result[1] += (float)0.045454545454545456;
                result[2] += (float)0.017045454545454544;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.022727272727272728;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5733333333333334;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4266666666666667;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)34) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
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
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
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
                result[2] += (float)0.011764705882352941;
                result[3] += (float)0.9882352941176471;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9921483097055617;
                result[1] += (float)0;
                result[2] += (float)0.0074154852780806985;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00043620501635768816;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.2054794520547945;
                result[3] += (float)0.7945205479452054;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
                result[0] += (float)0.92;
                result[1] += (float)0;
                result[2] += (float)0.08;
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
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.004901960784313725;
                result[2] += (float)0;
                result[3] += (float)0.9950980392156863;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9714285714285714;
                result[1] += (float)0.02857142857142857;
                result[2] += (float)0;
                result[3] += (float)0;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
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
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
                result[0] += (float)0.9896373056994818;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.010362694300518135;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9940476190476191;
                result[4] += (float)0;
                result[5] += (float)0.005952380952380952;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                result[0] += (float)0.9991060253888789;
                result[1] += (float)0;
                result[2] += (float)0.0008939746111210441;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.16666666666666666;
                result[2] += (float)0;
                result[3] += (float)0.8333333333333334;
                result[4] += (float)0;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
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
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                result[0] += (float)0.998581560283688;
                result[1] += (float)0;
                result[2] += (float)0.0007092198581560285;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007092198581560285;
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
                result[0] += (float)0.9657287157287158;
                result[1] += (float)0.005772005772005772;
                result[2] += (float)0.005050505050505051;
                result[3] += (float)0.022366522366522368;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010822510822510823;
              } else {
                result[0] += (float)0.5756676557863502;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.42433234421364985;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.012716763005780347;
                result[3] += (float)0.9872832369942196;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.006071118820468344;
                result[3] += (float)0.9939288811795317;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.9090909090909091;
                result[1] += (float)0;
                result[2] += (float)0.09090909090909091;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-189.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9464720194647203;
                result[1] += (float)0;
                result[2] += (float)0.03649635036496351;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.017031630170316305;
              }
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
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9955947136563876;
                result[4] += (float)0.004405286343612335;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.40625;
                result[1] += (float)0.0125;
                result[2] += (float)0;
                result[3] += (float)0.58125;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
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
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
                result[0] += (float)0.625;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.375;
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
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9948078920041536;
                result[1] += (float)0;
                result[2] += (float)0.005192107995846314;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9997247832668226;
                result[1] += (float)0;
                result[2] += (float)0.0002752167331773772;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.848780487804878;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.15121951219512195;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.01904761904761905;
                result[2] += (float)0;
                result[3] += (float)0.9809523809523809;
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
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += (float)0.9846570397111913;
                result[1] += (float)0.004963898916967509;
                result[2] += (float)0.007220216606498195;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00315884476534296;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.994535519125683;
                result[4] += (float)0;
                result[5] += (float)0.00546448087431694;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.8950437317784257;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.10495626822157435;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9978415047795252;
                result[1] += (float)0.0006167129201356768;
                result[2] += (float)0.0012334258402713536;
                result[3] += (float)0.0003083564600678384;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
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
                result[0] += (float)0.0003800836183960471;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.999619916381604;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
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
                result[2] += (float)0.68;
                result[3] += (float)0.32;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-60.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
                result[0] += (float)0.9990995047276002;
                result[1] += (float)0;
                result[2] += (float)0.0009004952723998199;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9740728585493929;
                result[1] += (float)0;
                result[2] += (float)0.0032819166393173614;
                result[3] += (float)0.02100426649163111;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016409583196586807;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-19.5) ) ) {
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
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9) ) ) {
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
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.13043478260869565;
                result[1] += (float)0.4782608695652174;
                result[2] += (float)0;
                result[3] += (float)0.043478260869565216;
                result[4] += (float)0.34782608695652173;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-343.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0007412898443291328;
                result[2] += (float)0;
                result[3] += (float)0.9985174203113418;
                result[4] += (float)0.0007412898443291328;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.10843373493975904;
                result[3] += (float)0.891566265060241;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0032154340836012866;
                result[2] += (float)0;
                result[3] += (float)0.9935691318327975;
                result[4] += (float)0;
                result[5] += (float)0.0032154340836012866;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.058823529411764705;
                result[3] += (float)0;
                result[4] += (float)0.9411764705882353;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
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
                result[2] += (float)1;
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
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
                result[2] += (float)0.02127659574468085;
                result[3] += (float)0.9787234042553191;
                result[4] += (float)0;
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
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9859976662777129;
                result[1] += (float)0;
                result[2] += (float)0.011668611435239206;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002333722287047841;
              } else {
                result[0] += (float)0.9994884910485934;
                result[1] += (float)0;
                result[2] += (float)0.0005115089514066496;
                result[3] += (float)0;
                result[4] += (float)0;
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
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)31.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.9693877551020409;
                result[1] += (float)0;
                result[2] += (float)0.025510204081632657;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005102040816326531;
              } else {
                result[0] += (float)0.992530345471522;
                result[1] += (float)0.007469654528478058;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0.9910141206675225;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.008985879332477536;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9993392361569975;
                result[1] += (float)4.405092286683406e-05;
                result[2] += (float)0.00048456015153517464;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0001321527686005022;
              }
            }
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
                result[0] += (float)0.003312476996687523;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9966875230033124;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.425531914893617;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.574468085106383;
                result[4] += (float)0;
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
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
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
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.9868356899073623;
                result[1] += (float)0;
                result[2] += (float)0.010238907849829351;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0029254022428083864;
              } else {
                result[0] += (float)0.25;
                result[1] += (float)0;
                result[2] += (float)0.75;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)66) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
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
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.00030940594059405946;
                result[2] += (float)0;
                result[3] += (float)0.9990717821782179;
                result[4] += (float)0;
                result[5] += (float)0.0006188118811881189;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
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
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
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
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.868421052631579;
                result[1] += (float)0;
                result[2] += (float)0.13157894736842105;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9733333333333334;
                result[1] += (float)0;
                result[2] += (float)0.02666666666666667;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9915966386554622;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.008403361344537815;
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += (float)0.9995547640249333;
                result[1] += (float)0;
                result[2] += (float)0.0004452359750667854;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9975389663658737;
                result[1] += (float)0;
                result[2] += (float)0.002461033634126333;
                result[3] += (float)0;
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
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.25;
                result[2] += (float)0.75;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9949579831932773;
                result[1] += (float)0;
                result[2] += (float)0.004481792717086834;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005602240896358543;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.038461538461538464;
                result[2] += (float)0;
                result[3] += (float)0.9615384615384616;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
                result[0] += (float)0.5843137254901961;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.41568627450980394;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.012195121951219513;
                result[1] += (float)0;
                result[2] += (float)0.09146341463414634;
                result[3] += (float)0.8963414634146342;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)34) ) ) {
                result[0] += (float)0.9781729991915926;
                result[1] += (float)0;
                result[2] += (float)0.015359741309620048;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0064672594987873885;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                result[0] += (float)0.9989680082559339;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0010319917440660474;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9842105263157894;
                result[1] += (float)0;
                result[2] += (float)0.003157894736842105;
                result[3] += (float)0.011578947368421053;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010526315789473684;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.97;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.03;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
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
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)199.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-9.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.6666666666666666;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0003361344537815126;
                result[2] += (float)0;
                result[3] += (float)0.9989915966386554;
                result[4] += (float)0;
                result[5] += (float)0.0006722689075630252;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.02185792349726776;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9781420765027322;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)90) ) ) {
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
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)19.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.6666666666666666;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.3333333333333333;
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
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
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
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)920) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
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
                result[2] += (float)0.8;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.2;
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
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
                result[0] += (float)0.9969140815332143;
                result[1] += (float)0.0012993340912782199;
                result[2] += (float)0.0014617508526879974;
                result[3] += (float)0.00032483352281955497;
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
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9918750000000001;
                result[1] += (float)0.0006250000000000001;
                result[2] += (float)0.006250000000000001;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0012500000000000002;
              } else {
                result[0] += (float)0.9996360327570518;
                result[1] += (float)0;
                result[2] += (float)0.0003639672429481347;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
                result[0] += (float)0.26814516129032256;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7318548387096774;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8260869565217391;
                result[1] += (float)0;
                result[2] += (float)0.17391304347826086;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)6) ) ) {
                result[0] += (float)0.7551020408163265;
                result[1] += (float)0;
                result[2] += (float)0.24489795918367346;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-105) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
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
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.3055555555555556;
                result[3] += (float)0.6944444444444444;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                result[0] += (float)0.979757085020243;
                result[1] += (float)0;
                result[2] += (float)0.016194331983805668;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004048582995951417;
              } else {
                result[0] += (float)0.9991638795986622;
                result[1] += (float)0;
                result[2] += (float)0.0008361204013377926;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9976553341148886;
                result[1] += (float)0;
                result[2] += (float)0.0023446658851113715;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)162) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)104) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)20) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)0.9986646884272997;
                result[1] += (float)0;
                result[2] += (float)0.0008902077151335311;
                result[3] += (float)0.00044510385756676556;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.991128010139417;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.008871989860583017;
                result[4] += (float)0;
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
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9800995024875622;
                result[1] += (float)0;
                result[2] += (float)0.01990049751243781;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8543046357615894;
                result[1] += (float)0;
                result[2] += (float)0.11920529801324503;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.026490066225165563;
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
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)0.8914956011730205;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.10850439882697947;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.007125890736342043;
                result[1] += (float)0.009501187648456057;
                result[2] += (float)0;
                result[3] += (float)0.9833729216152018;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.1724137931034483;
                result[2] += (float)0;
                result[3] += (float)0.8275862068965517;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                result[0] += (float)0.981859410430839;
                result[1] += (float)0;
                result[2] += (float)0.011337868480725623;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006802721088435374;
              } else {
                result[0] += (float)0.9981549815498155;
                result[1] += (float)0;
                result[2] += (float)0.0018450184501845018;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.03926701570680629;
                result[2] += (float)0;
                result[3] += (float)0.9581151832460734;
                result[4] += (float)0;
                result[5] += (float)0.0026178010471204194;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9974635383639823;
                result[1] += (float)0;
                result[2] += (float)0.0019023462270133164;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0006341154090044388;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9955634427684117;
                result[1] += (float)0;
                result[2] += (float)0.003992901508429458;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00044365572315882877;
              } else {
                result[0] += (float)0.999812734082397;
                result[1] += (float)0;
                result[2] += (float)0.00018726591760299626;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.008928571428571428;
                result[2] += (float)0;
                result[3] += (float)0.9910714285714286;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
                result[0] += (float)0.9583333333333334;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.041666666666666664;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9992027637523253;
                result[1] += (float)0;
                result[2] += (float)0.0007972362476747276;
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
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)10.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)15.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.4666666666666667;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.12345679012345678;
                result[3] += (float)0;
                result[4] += (float)0.8765432098765432;
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
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.6428571428571429;
                result[3] += (float)0;
                result[4] += (float)0.35714285714285715;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)9.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5;
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-30.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.030864197530864196;
                result[3] += (float)0;
                result[4] += (float)0.9691358024691358;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9767699115044248;
                result[1] += (float)0;
                result[2] += (float)0.0027654867256637168;
                result[3] += (float)0.01991150442477876;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005530973451327434;
              } else {
                result[0] += (float)0.8661971830985915;
                result[1] += (float)0;
                result[2] += (float)0.045774647887323945;
                result[3] += (float)0.06690140845070422;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.02112676056338028;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)27.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9583333333333334;
                result[4] += (float)0.03333333333333333;
                result[5] += (float)0.008333333333333333;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)42) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)1;
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.75;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.25;
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996062992125985;
                result[4] += (float)0;
                result[5] += (float)0.0003937007874015748;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.8;
                result[2] += (float)0.2;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)12) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                result[0] += (float)0.9996497373029772;
                result[1] += (float)0;
                result[2] += (float)0.0003502626970227671;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.3870967741935484;
                result[2] += (float)0.6129032258064516;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.27710843373493976;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7228915662650602;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)0.9991052026076953;
                result[1] += (float)0;
                result[2] += (float)0.0008308832928544036;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)6.391409945033875e-05;
              } else {
                result[0] += (float)0.9921537857983523;
                result[1] += (float)0;
                result[2] += (float)0.0051000392310710085;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002746174970576697;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)0.9762900976290099;
                result[1] += (float)0;
                result[2] += (float)0.022315202231520226;
                result[3] += (float)0.0013947001394700141;
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)80) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
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
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)23) ) ) {
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.7532467532467533;
                result[1] += (float)0;
                result[2] += (float)0.12987012987012986;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.11688311688311688;
              } else {
                result[0] += (float)0.9195402298850575;
                result[1] += (float)0;
                result[2] += (float)0.06896551724137931;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.011494252873563218;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9770114942528736;
                result[1] += (float)0;
                result[2] += (float)0.022988505747126436;
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
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
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
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9955947136563876;
                result[1] += (float)0;
                result[2] += (float)0.004405286343612335;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9998670389575854;
                result[1] += (float)0;
                result[2] += (float)0.00013296104241457252;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
                result[0] += (float)0.9993986770895971;
                result[1] += (float)0;
                result[2] += (float)0.0006013229104028864;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9343246592317225;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.06567534076827757;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.06896551724137931;
                result[2] += (float)0;
                result[3] += (float)0.9310344827586207;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0013568521031207597;
                result[2] += (float)0;
                result[3] += (float)0.9938941655359566;
                result[4] += (float)0.0020352781546811396;
                result[5] += (float)0.0027137042062415195;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7027027027027027;
                result[1] += (float)0.2972972972972973;
                result[2] += (float)0;
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08496732026143791;
                result[3] += (float)0.9084967320261438;
                result[4] += (float)0;
                result[5] += (float)0.006535947712418301;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                result[0] += (float)0.9962749746020996;
                result[1] += (float)0;
                result[2] += (float)0.002031832035218422;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016931933626820183;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.46153846153846156;
                result[3] += (float)0.5384615384615384;
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996226415094339;
                result[4] += (float)0;
                result[5] += (float)0.0003773584905660377;
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
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6896551724137931;
                result[1] += (float)0;
                result[2] += (float)0.06896551724137931;
                result[3] += (float)0.2413793103448276;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9643799472295514;
                result[1] += (float)0;
                result[2] += (float)0.006596306068601583;
                result[3] += (float)0.029023746701846966;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.12359550561797752;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8764044943820225;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                result[0] += (float)0.9996366279069767;
                result[1] += (float)0;
                result[2] += (float)0.0003633720930232558;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9380165289256198;
                result[1] += (float)0;
                result[2] += (float)0.03925619834710744;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.022727272727272728;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.9812734082397003;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.018726591760299626;
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_1/test_data.csv", "r");
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
