
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)923.5) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.8333333333333334;
                result[2] += (float)0;
                result[3] += (float)0.16666666666666666;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9951117318435754;
                result[1] += (float)0;
                result[2] += (float)0.0034916201117318434;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0013966480446927375;
              }
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
                result[0] += (float)0.9947470817120623;
                result[1] += (float)0.0011673151750972762;
                result[2] += (float)0.0015564202334630351;
                result[3] += (float)0.0019455252918287938;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005836575875486381;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                result[0] += (float)0.975;
                result[1] += (float)0;
                result[2] += (float)0.025;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9983739837398374;
                result[1] += (float)0;
                result[2] += (float)0.0016260162601626016;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
                result[0] += (float)0.9710610932475884;
                result[1] += (float)0;
                result[2] += (float)0.022508038585209004;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006430868167202572;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
                result[1] += (float)0.000948316737790422;
                result[2] += (float)0;
                result[3] += (float)0.9990516832622096;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)0.9725274725274725;
                result[1] += (float)0;
                result[2] += (float)0.027472527472527472;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)60) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)119.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.6;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4;
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
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
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
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
                result[4] += (float)0.7777777777777778;
                result[5] += (float)0.2222222222222222;
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
                result[0] += (float)0.9578544061302682;
                result[1] += (float)0;
                result[2] += (float)0.03065134099616858;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.011494252873563218;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
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
                result[3] += (float)0.999657651489216;
                result[4] += (float)0;
                result[5] += (float)0.00034234851078397807;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
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
                result[2] += (float)0.8181818181818182;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.18181818181818182;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)194) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9955654101995566;
                result[1] += (float)0;
                result[2] += (float)0.004434589800443459;
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
                result[0] += (float)0.9798994974874372;
                result[1] += (float)0.01507537688442211;
                result[2] += (float)0;
                result[3] += (float)0.005025125628140704;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9913419913419913;
                result[1] += (float)0;
                result[2] += (float)0.008658008658008658;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                result[0] += (float)0.9924528301886792;
                result[1] += (float)0;
                result[2] += (float)0.007547169811320755;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9918032786885246;
                result[1] += (float)0;
                result[2] += (float)0.00546448087431694;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00273224043715847;
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
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9;
                result[1] += (float)0;
                result[2] += (float)0.1;
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
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                result[0] += (float)0.6481481481481481;
                result[1] += (float)0.2222222222222222;
                result[2] += (float)0.12962962962962962;
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
                result[0] += (float)0.9906387665198237;
                result[1] += (float)0;
                result[2] += (float)0.003992290748898678;
                result[3] += (float)0.0042676211453744495;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0011013215859030838;
              } else {
                result[0] += (float)0.9060240963855422;
                result[1] += (float)0;
                result[2] += (float)0.03132530120481928;
                result[3] += (float)0.06265060240963856;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.010889292196007259;
                result[2] += (float)0.0054446460980036296;
                result[3] += (float)0.9836660617059891;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.995260663507109;
                result[4] += (float)0;
                result[5] += (float)0.004739336492890996;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9994407158836689;
                result[4] += (float)0;
                result[5] += (float)0.0005592841163310962;
                result[6] += (float)0;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9419354838709677;
                result[1] += (float)0;
                result[2] += (float)0.05161290322580645;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0064516129032258064;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9885057471264368;
                result[1] += (float)0;
                result[2] += (float)0.011494252873563218;
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
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.993103448275862;
                result[1] += (float)0;
                result[2] += (float)0.006896551724137931;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9935064935064936;
                result[1] += (float)0;
                result[2] += (float)0.006493506493506494;
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
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.06796116504854369;
                result[1] += (float)0;
                result[2] += (float)0.04854368932038835;
                result[3] += (float)0.883495145631068;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.9904774860563187;
                result[1] += (float)0;
                result[2] += (float)0.0031288260100666566;
                result[3] += (float)0.005033328798802883;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00136035913481159;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0.2;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9574468085106383;
                result[1] += (float)0;
                result[2] += (float)0.030732860520094562;
                result[3] += (float)0.01182033096926714;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                result[0] += (float)0.2892857142857143;
                result[1] += (float)0;
                result[2] += (float)0.03571428571428571;
                result[3] += (float)0.675;
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)135) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
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
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32) ) ) {
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
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9968944099378882;
                result[4] += (float)0;
                result[5] += (float)0.003105590062111801;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4;
                result[4] += (float)0;
                result[5] += (float)0.6;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.995850622406639;
                result[4] += (float)0;
                result[5] += (float)0.004149377593360996;
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
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-164.5) ) ) {
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
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
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
                result[4] += (float)0.9;
                result[5] += (float)0.1;
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
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
                result[1] += (float)0.8235294117647058;
                result[2] += (float)0;
                result[3] += (float)0.17647058823529413;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.9989801121876594;
                result[1] += (float)0;
                result[2] += (float)0.0010198878123406426;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9898674980514419;
                result[1] += (float)0.0012990387113535984;
                result[2] += (float)0.006235385814497272;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002598077422707197;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
                result[0] += (float)0.9998824151919572;
                result[1] += (float)0;
                result[2] += (float)0.00011758480804280087;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9969183359013868;
                result[1] += (float)0;
                result[2] += (float)0.0030816640986132513;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                result[0] += (float)0.21428571428571427;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7857142857142857;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8872727272727273;
                result[1] += (float)0;
                result[2] += (float)0.007272727272727273;
                result[3] += (float)0.10181818181818182;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0036363636363636364;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
                result[0] += (float)0.9469361970941251;
                result[1] += (float)0;
                result[2] += (float)0.004421983575489577;
                result[3] += (float)0.04864181933038535;
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
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9751552795031055;
                result[1] += (float)0;
                result[2] += (float)0.024844720496894408;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9950535861500412;
                result[1] += (float)0;
                result[2] += (float)0.00494641384995878;
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
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)5.5) ) ) {
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-52.5) ) ) {
                result[0] += (float)0.42857142857142855;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.5714285714285714;
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.10714285714285714;
                result[2] += (float)0;
                result[3] += (float)0.8928571428571429;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)80) ) ) {
                result[0] += (float)0.0022860875244937948;
                result[1] += (float)0.002939255388634879;
                result[2] += (float)0.0062050947093403004;
                result[3] += (float)0.9859568909209667;
                result[4] += (float)0.00032658393207054214;
                result[5] += (float)0.0022860875244937948;
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.2;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8;
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
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
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.11764705882352941;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8823529411764706;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02214022140221402;
                result[3] += (float)0.977859778597786;
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
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9779735682819384;
                result[1] += (float)0;
                result[2] += (float)0.013215859030837005;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00881057268722467;
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
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += (float)0.9919891378139851;
                result[1] += (float)0;
                result[2] += (float)0.0029871011541072645;
                result[3] += (float)0.004480651731160897;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005431093007467754;
              } else {
                result[0] += (float)0.9341772151898734;
                result[1] += (float)0;
                result[2] += (float)0.05569620253164557;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.010126582278481013;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                result[0] += (float)0.9797979797979798;
                result[1] += (float)0;
                result[2] += (float)0.020202020202020204;
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
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9883720930232558;
                result[1] += (float)0;
                result[2] += (float)0.011627906976744186;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
                result[0] += (float)0.7692307692307693;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.23076923076923078;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
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
                result[0] += (float)0.9333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.06666666666666667;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
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
                result[2] += (float)0.6363636363636364;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.36363636363636365;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.0005002501250625312;
                result[1] += (float)0.005502751375687844;
                result[2] += (float)0;
                result[3] += (float)0.9929964982491246;
                result[4] += (float)0;
                result[5] += (float)0.0010005002501250625;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.001026694045174538;
                result[1] += (float)0.00513347022587269;
                result[2] += (float)0.012320328542094456;
                result[3] += (float)0.9815195071868583;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9758454106280193;
                result[1] += (float)0;
                result[2] += (float)0.00966183574879227;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014492753623188406;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9906542056074766;
                result[1] += (float)0;
                result[2] += (float)0.009345794392523364;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9375;
                result[1] += (float)0;
                result[2] += (float)0.03125;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.03125;
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
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += (float)0.9996150885296382;
                result[1] += (float)0;
                result[2] += (float)0.00038491147036181676;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9920948616600791;
                result[1] += (float)0;
                result[2] += (float)0.007905138339920948;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9922048997772829;
                result[1] += (float)0;
                result[2] += (float)0.006124721603563474;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016703786191536749;
              } else {
                result[0] += (float)0.8580645161290322;
                result[1] += (float)0;
                result[2] += (float)0.02258064516129032;
                result[3] += (float)0.0967741935483871;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.02258064516129032;
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.875;
                result[5] += (float)0.125;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)20) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9974293059125964;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002570694087403599;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                result[0] += (float)0.9780439121756487;
                result[1] += (float)0;
                result[2] += (float)0.013972055888223553;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007984031936127744;
              } else {
                result[0] += (float)0.9984076433121019;
                result[1] += (float)0;
                result[2] += (float)0.0015923566878980893;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += (float)0.9047619047619048;
                result[1] += (float)0.09523809523809523;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.998474945533769;
                result[1] += (float)0;
                result[2] += (float)0.0011982570806100218;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000326797385620915;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.999591419816139;
                result[1] += (float)0;
                result[2] += (float)0.00040858018386108274;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
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
                result[2] += (float)0.008396305625524769;
                result[3] += (float)0.9916036943744753;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
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
                result[0] += (float)0;
                result[1] += (float)0.9;
                result[2] += (float)0;
                result[3] += (float)0.1;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9873417721518988;
                result[1] += (float)0;
                result[2] += (float)0.012658227848101266;
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
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
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
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
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
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
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
                result[0] += (float)0.9386792452830188;
                result[1] += (float)0;
                result[2] += (float)0.04245283018867924;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.018867924528301886;
              } else {
                result[0] += (float)0.989100817438692;
                result[1] += (float)0;
                result[2] += (float)0.008174386920980926;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0027247956403269754;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)25.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9844961240310077;
                result[4] += (float)0.006201550387596899;
                result[5] += (float)0.009302325581395349;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9166666666666666;
                result[4] += (float)0;
                result[5] += (float)0.08333333333333333;
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
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6.5) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)46) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.2;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.9985281942783553;
                result[1] += (float)0;
                result[2] += (float)0.0013798178640419465;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)9.198785760279643e-05;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.5714285714285714;
                result[2] += (float)0;
                result[3] += (float)0.42857142857142855;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9942991940239828;
                result[1] += (float)0.0019657951641438966;
                result[2] += (float)0.0027521132298014553;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009828975820719483;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
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
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)267) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
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
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
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
                result[0] += (float)0.9108910891089109;
                result[1] += (float)0;
                result[2] += (float)0.07260726072607261;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0165016501650165;
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
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
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
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9629629629629629;
                result[1] += (float)0;
                result[2] += (float)0.037037037037037035;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.972972972972973;
                result[1] += (float)0;
                result[2] += (float)0.02702702702702703;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9869281045751634;
                result[1] += (float)0;
                result[2] += (float)0.013071895424836602;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9920634920634921;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007936507936507936;
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
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)46) ) ) {
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
                result[3] += (float)0.9857142857142858;
                result[4] += (float)0;
                result[5] += (float)0.014285714285714285;
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0021321961620469083;
                result[1] += (float)0.04477611940298507;
                result[2] += (float)0;
                result[3] += (float)0.9424307036247335;
                result[4] += (float)0.0021321961620469083;
                result[5] += (float)0.008528784648187633;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.36363636363636365;
                result[2] += (float)0;
                result[3] += (float)0.6363636363636364;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0009658725048293626;
                result[1] += (float)0;
                result[2] += (float)0.008370895041854474;
                result[3] += (float)0.9903412749517064;
                result[4] += (float)0.0003219575016097875;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9957504932463197;
                result[1] += (float)0;
                result[2] += (float)0.0022765214751859163;
                result[3] += (float)0.0013659128851115498;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000607072393382911;
              } else {
                result[0] += (float)0.9247572815533981;
                result[1] += (float)0;
                result[2] += (float)0.012135922330097087;
                result[3] += (float)0.06310679611650485;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
                result[0] += (float)0.9886845827439887;
                result[1] += (float)0;
                result[2] += (float)0.007072135785007072;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004243281471004243;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5210084033613446;
                result[1] += (float)0;
                result[2] += (float)0.09243697478991597;
                result[3] += (float)0.3865546218487395;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
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
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
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
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
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
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6354883081155434;
                result[4] += (float)0.36451169188445665;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0189328743545611;
                result[3] += (float)0.9707401032702238;
                result[4] += (float)0.010327022375215147;
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56) ) ) {
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
                result[3] += (float)0.9966887417218543;
                result[4] += (float)0;
                result[5] += (float)0.0033112582781456954;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86) ) ) {
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
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)254.5) ) ) {
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
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                result[0] += (float)0.9971181556195965;
                result[1] += (float)0;
                result[2] += (float)0.002881844380403458;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
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
                result[0] += (float)0.9722222222222222;
                result[1] += (float)0;
                result[2] += (float)0.027777777777777776;
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
                result[0] += (float)0.9148936170212766;
                result[1] += (float)0;
                result[2] += (float)0.0851063829787234;
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9996227364185111;
                result[1] += (float)0;
                result[2] += (float)0.0003772635814889336;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.01020408163265306;
                result[2] += (float)0.030612244897959183;
                result[3] += (float)0.9591836734693877;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
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
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0.99140708915145;
                result[1] += (float)0;
                result[2] += (float)0.006086645184389545;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002506265664160401;
              } else {
                result[0] += (float)0.998829953198128;
                result[1] += (float)0;
                result[2] += (float)0.001170046801872075;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.009523809523809525;
                result[3] += (float)0.9904761904761905;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
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
                result[0] += (float)0.9556840077071291;
                result[1] += (float)0;
                result[2] += (float)0.038535645472061654;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005780346820809248;
              }
            }
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
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
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7014925373134329;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.29850746268656714;
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
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8598130841121495;
                result[1] += (float)0.14018691588785046;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.4;
                result[5] += (float)0.6;
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
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9990104452996151;
                result[1] += (float)0;
                result[2] += (float)0.0009895547003848269;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.3076923076923077;
                result[2] += (float)0;
                result[3] += (float)0.6923076923076923;
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
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4516) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9950819672131148;
                result[4] += (float)0.0032786885245901644;
                result[5] += (float)0.0016393442622950822;
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
                result[0] += (float)0.9984973703981969;
                result[1] += (float)0;
                result[2] += (float)0.0007513148009015778;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007513148009015778;
              } else {
                result[0] += (float)0.9865269461077845;
                result[1] += (float)0;
                result[2] += (float)0.0074850299401197605;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005988023952095809;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += (float)0.061068702290076333;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9381679389312977;
                result[4] += (float)0;
                result[5] += (float)0.0007633587786259542;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.16470588235294117;
                result[1] += (float)0;
                result[2] += (float)0.009411764705882352;
                result[3] += (float)0.8258823529411765;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.17857142857142858;
                result[3] += (float)0;
                result[4] += (float)0.8214285714285714;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9984634296250768;
                result[1] += (float)0;
                result[2] += (float)0.0010755992624462201;
                result[3] += (float)0.00046097111247695143;
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                result[0] += (float)0.976905311778291;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.023094688221709007;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.009940357852882704;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9900596421471173;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9607843137254902;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0392156862745098;
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
                result[0] += (float)0.9105691056910569;
                result[1] += (float)0;
                result[2] += (float)0.06910569105691057;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.02032520325203252;
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9943502824858758;
                result[1] += (float)0;
                result[2] += (float)0.005649717514124294;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8235294117647058;
                result[1] += (float)0;
                result[2] += (float)0.17647058823529413;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.00798175598631699;
                result[2] += (float)0;
                result[3] += (float)0.992018244013683;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1486) ) ) {
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
              result[1] += (float)1;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)195.5) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.9947997919916797;
                result[1] += (float)0;
                result[2] += (float)0.005200208008320333;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9732620320855615;
                result[1] += (float)0;
                result[2] += (float)0.026737967914438502;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9908675799086758;
                result[1] += (float)0;
                result[2] += (float)0.0091324200913242;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9997090062563655;
                result[1] += (float)0;
                result[2] += (float)0.00029099374363451185;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)4.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
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
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9984239558707644;
                result[4] += (float)0.0015760441292356187;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9919732441471573;
                result[1] += (float)0.0026755852842809368;
                result[2] += (float)0.004347826086956523;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010033444816053513;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.45833333333333337;
                result[3] += (float)0.04166666666666667;
                result[4] += (float)0.33333333333333337;
                result[5] += (float)0.16666666666666669;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.004435346298191744;
                result[3] += (float)0.9948822927328557;
                result[4] += (float)0;
                result[5] += (float)0.000682360968952576;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
                result[0] += (float)0.981998199819982;
                result[1] += (float)0;
                result[2] += (float)0.012601260126012601;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0054005400540054005;
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
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
                result[3] += (float)0.9791666666666666;
                result[4] += (float)0.020833333333333332;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.3333333333333333;
                result[2] += (float)0.6666666666666666;
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
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
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9826589595375722;
                result[1] += (float)0;
                result[2] += (float)0.011560693641618497;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005780346820809248;
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9992768179991964;
                result[1] += (float)0;
                result[2] += (float)0.0007231820008035356;
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.021164021164021163;
                result[2] += (float)0.021164021164021163;
                result[3] += (float)0.9576719576719577;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.052419354838709686;
                result[2] += (float)0;
                result[3] += (float)0.935483870967742;
                result[4] += (float)0;
                result[5] += (float)0.012096774193548388;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)0.9977086118006493;
                result[1] += (float)0;
                result[2] += (float)0.0021004391827382095;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00019094901661256448;
              } else {
                result[0] += (float)0.9833333333333334;
                result[1] += (float)0;
                result[2] += (float)0.013333333333333336;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003333333333333334;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.0003700962250185048;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996299037749815;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9808612440191388;
                result[1] += (float)0;
                result[2] += (float)0.019138755980861243;
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)0.8714285714285714;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.12857142857142856;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7017543859649122;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.2982456140350877;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9920634920634921;
                result[1] += (float)0;
                result[2] += (float)0.006069094304388422;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0018674136321195146;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
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
                result[3] += (float)0.9963031423290203;
                result[4] += (float)0;
                result[5] += (float)0.0036968576709796672;
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
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
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
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.954248366013072;
                result[1] += (float)0;
                result[2] += (float)0.0457516339869281;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
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
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.994413407821229;
                result[1] += (float)0;
                result[2] += (float)0.00558659217877095;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.993920972644377;
                result[1] += (float)0;
                result[2] += (float)0.0060790273556231;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9981285090455396;
                result[1] += (float)0;
                result[2] += (float)0.0018714909544603868;
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
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.9997288503253796;
                result[1] += (float)0;
                result[2] += (float)0.00027114967462039046;
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
                result[0] += (float)0.42857142857142855;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.5714285714285714;
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
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.1;
                result[2] += (float)0;
                result[3] += (float)0.9;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9982014388489209;
                result[4] += (float)0;
                result[5] += (float)0.0017985611510791368;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
                result[0] += (float)0.5795454545454546;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.42045454545454547;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9960085968682837;
                result[1] += (float)0;
                result[2] += (float)0.0026097635861221983;
                result[3] += (float)0.0006140620202640467;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007675775253300583;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
                result[0] += (float)0.9272237196765498;
                result[1] += (float)0;
                result[2] += (float)0.013477088948787063;
                result[3] += (float)0.05660377358490566;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0026954177897574125;
              } else {
                result[0] += (float)0.4;
                result[1] += (float)0;
                result[2] += (float)0.6;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.004222972972972973;
                result[1] += (float)0;
                result[2] += (float)0.0008445945945945946;
                result[3] += (float)0.9949324324324325;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                result[0] += (float)0.963265306122449;
                result[1] += (float)0;
                result[2] += (float)0.030612244897959183;
                result[3] += (float)0.006122448979591836;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.15178571428571427;
                result[3] += (float)0.8482142857142857;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.005194805194805195;
                result[2] += (float)0.008441558441558441;
                result[3] += (float)0.951948051948052;
                result[4] += (float)0.03441558441558441;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-12) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
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
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.998812351543943;
                result[1] += (float)0;
                result[2] += (float)0.0011876484560570072;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9662921348314607;
                result[1] += (float)0;
                result[2] += (float)0.033707865168539325;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.004830917874396135;
                result[1] += (float)0;
                result[2] += (float)0.04830917874396135;
                result[3] += (float)0.9468599033816425;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.012048192771084338;
                result[2] += (float)0;
                result[3] += (float)0.9879518072289156;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.25;
                result[1] += (float)0.625;
                result[2] += (float)0;
                result[3] += (float)0.125;
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
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9790575916230367;
                result[1] += (float)0;
                result[2] += (float)0.005235602094240839;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.015706806282722516;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9680851063829787;
                result[1] += (float)0;
                result[2] += (float)0.031914893617021274;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.998193315266486;
                result[1] += (float)0;
                result[2] += (float)0.0018066847335140017;
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
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.02092050209205021;
                result[2] += (float)0;
                result[3] += (float)0.9748953974895398;
                result[4] += (float)0;
                result[5] += (float)0.0041841004184100415;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9947506561679791;
                result[1] += (float)0;
                result[2] += (float)0.003062117235345582;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002187226596675416;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0029839612085042896;
                result[3] += (float)0.9970160387914957;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9799537393986122;
                result[1] += (float)0;
                result[2] += (float)0.015420200462606014;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004626060138781804;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)23) ) ) {
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
                result[2] += (float)0.03651685393258427;
                result[3] += (float)0.9634831460674157;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0017006802721088437;
                result[3] += (float)0.9965986394557824;
                result[4] += (float)0;
                result[5] += (float)0.0017006802721088437;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60) ) ) {
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
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.9883040935672515;
                result[1] += (float)0;
                result[2] += (float)0.011695906432748537;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9967845659163987;
                result[1] += (float)0;
                result[2] += (float)0.001607717041800643;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001607717041800643;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9510204081632653;
                result[1] += (float)0;
                result[2] += (float)0.0326530612244898;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0163265306122449;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-100.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)25.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9946666666666667;
                result[4] += (float)0;
                result[5] += (float)0.005333333333333333;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8823529411764706;
                result[4] += (float)0;
                result[5] += (float)0.11764705882352941;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9940476190476191;
                result[1] += (float)0;
                result[2] += (float)0.005456349206349206;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000496031746031746;
              } else {
                result[0] += (float)0.9992898567877856;
                result[1] += (float)0.00023671440407148776;
                result[2] += (float)0.0004734288081429755;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.20833333333333334;
                result[2] += (float)0;
                result[3] += (float)0.7916666666666666;
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
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9636363636363636;
                result[1] += (float)0;
                result[2] += (float)0.03636363636363636;
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
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.007071547420965058;
                result[3] += (float)0.992928452579035;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.05454545454545454;
                result[2] += (float)0;
                result[3] += (float)0.9454545454545454;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.21311475409836064;
                result[3] += (float)0;
                result[4] += (float)0.7868852459016393;
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
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
                result[0] += (float)0.5;
                result[1] += (float)0.5;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
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
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)5) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.927710843373494;
                result[1] += (float)0;
                result[2] += (float)0.05622489959839357;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01606425702811245;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-23.5) ) ) {
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9973753280839895;
                result[1] += (float)0;
                result[2] += (float)0.0026246719160104987;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.9846153846153847;
                result[1] += (float)0;
                result[2] += (float)0.015384615384615385;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
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
                result[0] += (float)0.990521327014218;
                result[1] += (float)0;
                result[2] += (float)0.009478672985781991;
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
                result[0] += (float)0.9989023051591658;
                result[1] += (float)0;
                result[2] += (float)0.0010976948408342481;
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
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
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
                result[1] += (float)0.06467661691542288;
                result[2] += (float)0;
                result[3] += (float)0.9353233830845771;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
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
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0.25;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
                result[0] += (float)0.9915834801330985;
                result[1] += (float)0;
                result[2] += (float)0.006654922685457036;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0017615971814445098;
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)18) ) ) {
                result[0] += (float)0.9991119005328597;
                result[1] += (float)0;
                result[2] += (float)0.0008880994671403197;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
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
                result[3] += (float)0.9969635627530364;
                result[4] += (float)0;
                result[5] += (float)0.003036437246963563;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9543147208121827;
                result[1] += (float)0;
                result[2] += (float)0.01015228426395939;
                result[3] += (float)0.03553299492385787;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.01001669449081803;
                result[1] += (float)0;
                result[2] += (float)0.028380634390651086;
                result[3] += (float)0.9616026711185309;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
                result[0] += (float)0.1725214676034348;
                result[1] += (float)0.00702576112412178;
                result[2] += (float)0.0039032006245121;
                result[3] += (float)0.8165495706479313;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.012345679012345678;
                result[1] += (float)0.02880658436213992;
                result[2] += (float)0;
                result[3] += (float)0.9588477366255144;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
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
                result[1] += (float)0.125;
                result[2] += (float)0;
                result[3] += (float)0.875;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)1.5) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)18) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
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
                result[4] += (float)0.8333333333333334;
                result[5] += (float)0.16666666666666666;
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
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9989264626945786;
                result[4] += (float)0;
                result[5] += (float)0.0010735373054213634;
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0.3333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.009549795361527967;
                result[3] += (float)0.990450204638472;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.985721085197525;
                result[1] += (float)0;
                result[2] += (float)0.013326987148976678;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009519276534983341;
              } else {
                result[0] += (float)0.9589189189189189;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.04108108108108108;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)0.9891618497109826;
                result[1] += (float)0.007947976878612716;
                result[2] += (float)0.000722543352601156;
                result[3] += (float)0.002167630057803468;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9969987302320212;
                result[1] += (float)0.0004617338104582708;
                result[2] += (float)0.0017315017892185155;
                result[3] += (float)0.0005771672630728385;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0002308669052291354;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.9982474588152822;
                result[1] += (float)0;
                result[2] += (float)0.0017525411847178409;
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-12) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
                result[0] += (float)0.39473684210526316;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6052631578947368;
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
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.17307692307692307;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8269230769230769;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.967741935483871;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.03225806451612903;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                result[0] += (float)0.9668310174809502;
                result[1] += (float)0;
                result[2] += (float)0.008516360376512775;
                result[3] += (float)0.021963245181532944;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002689376961004034;
              } else {
                result[0] += (float)0.06206896551724138;
                result[1] += (float)0;
                result[2] += (float)0.04827586206896552;
                result[3] += (float)0.8758620689655172;
                result[4] += (float)0;
                result[5] += (float)0.013793103448275862;
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
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)36) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.01804511278195489;
                result[3] += (float)0.9819548872180451;
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
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9948253557567918;
                result[1] += (float)0;
                result[2] += (float)0.00517464424320828;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.94;
                result[1] += (float)0;
                result[2] += (float)0.06;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)0) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.1276595744680851;
                result[2] += (float)0;
                result[3] += (float)0.8723404255319149;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
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
                result[0] += (float)0.16666666666666666;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8333333333333334;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.010297482837528604;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9897025171624714;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)31) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0.5;
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
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9792531120331951;
                result[1] += (float)0.006224066390041494;
                result[2] += (float)0.011756569847856157;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002766251728907331;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)0.9938763012859767;
                result[1] += (float)0;
                result[2] += (float)0.004286589099816289;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001837109614206981;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0.9946949602122016;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.005305039787798408;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9994504945549005;
                result[1] += (float)0.0001998201618543311;
                result[2] += (float)0.00034968528324507943;
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
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
                result[2] += (float)0.18181818181818182;
                result[3] += (float)0.8181818181818182;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9523809523809523;
                result[1] += (float)0;
                result[2] += (float)0.04081632653061224;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006802721088435374;
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9776119402985075;
                result[4] += (float)0;
                result[5] += (float)0.022388059701492536;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0005068423720223012;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9989863152559555;
                result[4] += (float)0;
                result[5] += (float)0.0005068423720223012;
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
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
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.035211267605633804;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9647887323943662;
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
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.9969167523124358;
                result[1] += (float)0;
                result[2] += (float)0.003083247687564234;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9998720900486058;
                result[1] += (float)0;
                result[2] += (float)0.00012790995139421848;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.8888888888888888;
                result[2] += (float)0;
                result[3] += (float)0.1111111111111111;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.6111111111111112;
                result[2] += (float)0.3888888888888889;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.8;
                result[3] += (float)0.2;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9950188476036618;
                result[1] += (float)0;
                result[2] += (float)0.0036348949919224557;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0013462574044157242;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.8888888888888888;
                result[3] += (float)0.1111111111111111;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9944341372912802;
                result[1] += (float)0;
                result[2] += (float)0.0055658627087198514;
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
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
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
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
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
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
                result[0] += (float)0.9512820512820513;
                result[1] += (float)0;
                result[2] += (float)0.0358974358974359;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.012820512820512822;
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
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)470) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
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
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_0/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
