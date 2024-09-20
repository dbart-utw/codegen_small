
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
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
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
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
                result[0] += (float)0;
                result[1] += (float)0.005076142131979695;
                result[2] += (float)0.003948110547095319;
                result[3] += (float)0.990975747320925;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)0.9909297052154195;
                result[1] += (float)0;
                result[2] += (float)0.009070294784580499;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9629629629629629;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.037037037037037035;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.9996048211815847;
                result[1] += (float)0;
                result[2] += (float)0.00039517881841533294;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9937163375224417;
                result[1] += (float)0;
                result[2] += (float)0.0062836624775583485;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9998725302740599;
                result[1] += (float)0;
                result[2] += (float)0.00012746972594008922;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-41.5) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                result[0] += (float)0.9996784565916399;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0003215434083601286;
              } else {
                result[0] += (float)0.9615384615384616;
                result[1] += (float)0;
                result[2] += (float)0.03461538461538462;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0038461538461538464;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0026155187445510027;
                result[2] += (float)0;
                result[3] += (float)0.997384481255449;
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
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
                result[0] += (float)0.9690721649484536;
                result[1] += (float)0;
                result[2] += (float)0.024054982817869417;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006872852233676976;
              } else {
                result[0] += (float)0.9974554707379135;
                result[1] += (float)0;
                result[2] += (float)0.002544529262086514;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
                result[0] += (float)0.9978563772775991;
                result[1] += (float)0;
                result[2] += (float)0.0021436227224008574;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.06382978723404255;
                result[2] += (float)0;
                result[3] += (float)0.9361702127659575;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.9545454545454546;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.045454545454545456;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)31) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.18620689655172415;
                result[3] += (float)0.06206896551724138;
                result[4] += (float)0.7517241379310344;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5538461538461539;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4461538461538462;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
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
                result[4] += (float)0.8;
                result[5] += (float)0.2;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0019305019305019305;
                result[2] += (float)0;
                result[3] += (float)0.9980694980694981;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9976873471203024;
                result[1] += (float)0.00066711140760507;
                result[2] += (float)0.000978430064487436;
                result[3] += (float)0.00022237046920169;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00044474093840338;
              } else {
                result[0] += (float)0.8227848101265823;
                result[1] += (float)0;
                result[2] += (float)0.17721518987341772;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
                result[2] += (float)0.875;
                result[3] += (float)0.125;
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
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)195.5) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.98989898989899;
                result[1] += (float)0;
                result[2] += (float)0.010101010101010102;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9965635738831615;
                result[1] += (float)0;
                result[2] += (float)0.003436426116838488;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8564356435643564;
                result[1] += (float)0;
                result[2] += (float)0.12376237623762376;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.019801980198019802;
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
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9230769230769231;
                result[5] += (float)0.07692307692307693;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)31) ) ) {
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
                result[2] += (float)0.3333333333333333;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.6666666666666666;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
                result[1] += (float)0.5294117647058824;
                result[2] += (float)0;
                result[3] += (float)0.4117647058823529;
                result[4] += (float)0.058823529411764705;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += (float)0.9992937853107344;
                result[1] += (float)0;
                result[2] += (float)0.0007062146892655367;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
                result[0] += (float)0.875;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.125;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.1452991452991453;
                result[3] += (float)0.8547008547008547;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.012658227848101266;
                result[3] += (float)0.9873417721518988;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                result[0] += (float)0.9976047904191617;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0023952095808383233;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.005050505050505051;
                result[3] += (float)0.9848484848484849;
                result[4] += (float)0;
                result[5] += (float)0.010101010101010102;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9961389961389961;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.003861003861003861;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5294117647058824;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.47058823529411764;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
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
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.825;
                result[1] += (float)0;
                result[2] += (float)0.05;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.125;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                result[0] += (float)0.31578947368421056;
                result[1] += (float)0;
                result[2] += (float)0.368421052631579;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.31578947368421056;
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
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)22.5) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                result[0] += (float)0.22357723577235772;
                result[1] += (float)0.032520325203252036;
                result[2] += (float)0;
                result[3] += (float)0.7439024390243902;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.05416666666666667;
                result[1] += (float)0;
                result[2] += (float)0.09166666666666666;
                result[3] += (float)0.8541666666666666;
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
        }
      }
    } else {
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9959183673469387;
                result[1] += (float)0;
                result[2] += (float)0.004081632653061225;
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
                result[0] += (float)0.93;
                result[1] += (float)0;
                result[2] += (float)0.04;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.03;
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
                result[0] += (float)0.9971014492753624;
                result[1] += (float)0;
                result[2] += (float)0.002898550724637681;
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
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
                result[0] += (float)0.008097165991902834;
                result[1] += (float)0.044534412955465584;
                result[2] += (float)0.004048582995951417;
                result[3] += (float)0.9392712550607287;
                result[4] += (float)0;
                result[5] += (float)0.004048582995951417;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.25925925925925924;
                result[3] += (float)0;
                result[4] += (float)0.7407407407407407;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0.7373737373737373;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.26262626262626265;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9867724867724867;
                result[1] += (float)0;
                result[2] += (float)0.008597883597883597;
                result[3] += (float)0.003968253968253968;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0006613756613756613;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.10204081632653061;
                result[2] += (float)0;
                result[3] += (float)0.8979591836734694;
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
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
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
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0036496350364963502;
                result[3] += (float)0.9963503649635036;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9464285714285714;
                result[5] += (float)0.05357142857142857;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                result[0] += (float)0.8742632612966602;
                result[1] += (float)0;
                result[2] += (float)0.003929273084479372;
                result[3] += (float)0.12180746561886052;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.464;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.536;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)36) ) ) {
                result[0] += (float)0.9719101123595506;
                result[1] += (float)0;
                result[2] += (float)0.0016853932584269663;
                result[3] += (float)0.025280898876404494;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0011235955056179776;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08695652173913043;
                result[3] += (float)0.9130434782608695;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-52.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.003060183611016661;
                result[3] += (float)0.9965997959877593;
                result[4] += (float)0;
                result[5] += (float)0.00034002040122407346;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0035714285714285718;
                result[2] += (float)0;
                result[3] += (float)0.9821428571428572;
                result[4] += (float)0;
                result[5] += (float)0.014285714285714287;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7647058823529411;
                result[1] += (float)0;
                result[2] += (float)0.23529411764705882;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0.9692307692307692;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.03076923076923077;
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.375;
                result[1] += (float)0;
                result[2] += (float)0.625;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
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
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9111111111111111;
                result[1] += (float)0;
                result[2] += (float)0.08888888888888889;
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
                result[0] += (float)0.2604501607717042;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7395498392282959;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.10186757215619695;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8981324278438031;
                result[4] += (float)0;
                result[5] += (float)0;
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
                result[0] += (float)0.6818181818181818;
                result[1] += (float)0;
                result[2] += (float)0.3181818181818182;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0.9845360824742269;
                result[1] += (float)0;
                result[2] += (float)0.010309278350515464;
                result[3] += (float)0.001288659793814433;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003865979381443299;
              } else {
                result[0] += (float)0.897196261682243;
                result[1] += (float)0;
                result[2] += (float)0.06542056074766354;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.037383177570093455;
              }
            } else {
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
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
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
                result[1] += (float)0.06569343065693431;
                result[2] += (float)0;
                result[3] += (float)0.9343065693430657;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                result[0] += (float)0.9182156133828996;
                result[1] += (float)0;
                result[2] += (float)0.06691449814126393;
                result[3] += (float)0.01486988847583643;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9967649857278782;
                result[1] += (float)0.0008880431335236283;
                result[2] += (float)0.002029812876625436;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0003171582619727244;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
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
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
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
                result[0] += (float)0.9992743105950653;
                result[1] += (float)0;
                result[2] += (float)0.000725689404934688;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)30) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)4) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)11631) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-136) ) ) {
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
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
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
                result[0] += (float)0.9790209790209791;
                result[1] += (float)0;
                result[2] += (float)0.02097902097902098;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9734513274336283;
                result[1] += (float)0;
                result[2] += (float)0.02654867256637168;
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.5;
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
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                result[0] += (float)0.33333333333333337;
                result[1] += (float)0;
                result[2] += (float)0.6333333333333334;
                result[3] += (float)0.03333333333333334;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.004530011325028313;
                result[2] += (float)0.0016987542468856172;
                result[3] += (float)0.9937712344280861;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6419.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.05405405405405406;
                result[2] += (float)0;
                result[3] += (float)0.9459459459459459;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.004418262150220913;
                result[2] += (float)0;
                result[3] += (float)0.061855670103092786;
                result[4] += (float)0.9337260677466863;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.5;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.9921875;
                result[1] += (float)0;
                result[2] += (float)0.0078125;
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                result[0] += (float)0.9672131147540983;
                result[1] += (float)0;
                result[2] += (float)0.01873536299765808;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01405152224824356;
              } else {
                result[0] += (float)0.9980787704130644;
                result[1] += (float)0;
                result[2] += (float)0.0019212295869356388;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.17543859649122806;
                result[3] += (float)0.08187134502923976;
                result[4] += (float)0.7426900584795322;
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
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9811320754716981;
                result[1] += (float)0;
                result[2] += (float)0.018867924528301886;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
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
                result[1] += (float)0.009259259259259259;
                result[2] += (float)0;
                result[3] += (float)0.9722222222222222;
                result[4] += (float)0;
                result[5] += (float)0.018518518518518517;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.9908743008536944;
                result[1] += (float)0;
                result[2] += (float)0.008242566970856638;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008831321754489255;
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
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)102) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
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
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9949730700179533;
                result[1] += (float)0;
                result[2] += (float)0.004308797127468581;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000718132854578097;
              } else {
                result[0] += (float)0.9140346058775062;
                result[1] += (float)0.0024718483932985444;
                result[2] += (float)0;
                result[3] += (float)0.08349354572919528;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                result[0] += (float)0.9916540212443096;
                result[1] += (float)0;
                result[2] += (float)0.004552352048558422;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0037936267071320183;
              } else {
                result[0] += (float)0.95;
                result[1] += (float)0;
                result[2] += (float)0.05;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9938650306748467;
                result[1] += (float)0;
                result[2] += (float)0.006134969325153374;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9999428048501487;
                result[1] += (float)5.719514985129261e-05;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)6.5) ) ) {
                result[0] += (float)0.9838926174496644;
                result[1] += (float)0.006040268456375839;
                result[2] += (float)0;
                result[3] += (float)0.010067114093959731;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.875;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.125;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)14) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56) ) ) {
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
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
                result[0] += (float)0.05;
                result[1] += (float)0.45;
                result[2] += (float)0;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.024390243902439025;
                result[2] += (float)0;
                result[3] += (float)0.975609756097561;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0061068702290076335;
                result[2] += (float)0;
                result[3] += (float)0.9938931297709923;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08860759493670886;
                result[3] += (float)0.9113924050632911;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5833333333333334;
                result[1] += (float)0;
                result[2] += (float)0.4166666666666667;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
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
                result[2] += (float)0.2857142857142857;
                result[3] += (float)0.7142857142857143;
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
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
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
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)39) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2) ) ) {
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
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
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
                result[2] += (float)0.00267379679144385;
                result[3] += (float)0.9973262032085561;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)75.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9403409090909091;
                result[1] += (float)0;
                result[2] += (float)0.05113636363636364;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.008522727272727272;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.5;
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
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)89.5) ) ) {
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
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
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
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.6363636363636364;
                result[2] += (float)0;
                result[3] += (float)0.36363636363636365;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-36) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
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
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.9982517482517482;
                result[1] += (float)0;
                result[2] += (float)0.0017482517482517483;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.999721059972106;
                result[1] += (float)0;
                result[2] += (float)0.0001394700139470014;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0001394700139470014;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8095238095238095;
                result[1] += (float)0;
                result[2] += (float)0.19047619047619047;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += (float)0.9404761904761905;
                result[1] += (float)0;
                result[2] += (float)0.051587301587301584;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007936507936507936;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
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
                result[2] += (float)0.037037037037037035;
                result[3] += (float)0.9629629629629629;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
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
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0.41509433962264153;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5849056603773585;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9565217391304348;
                result[1] += (float)0.014492753623188406;
                result[2] += (float)0;
                result[3] += (float)0.028985507246376812;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9947886508396062;
                result[1] += (float)0;
                result[2] += (float)0.0052113491603937466;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9991282237559026;
                result[1] += (float)0.00043588812204867417;
                result[2] += (float)0.00029059208136578276;
                result[3] += (float)0.00014529604068289138;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                result[0] += (float)0.9946018893387314;
                result[1] += (float)0;
                result[2] += (float)0.004048582995951417;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001349527665317139;
              } else {
                result[0] += (float)0.8481675392670157;
                result[1] += (float)0.08900523560209424;
                result[2] += (float)0;
                result[3] += (float)0.06282722513089005;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9763779527559056;
                result[1] += (float)0;
                result[2] += (float)0.023622047244094488;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.975609756097561;
                result[1] += (float)0;
                result[2] += (float)0.024390243902439025;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)7) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-6) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-21.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
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
                result[1] += (float)0.004901960784313725;
                result[2] += (float)0;
                result[3] += (float)0.9950980392156863;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
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
                result[2] += (float)0.022002200220022004;
                result[3] += (float)0.976897689768977;
                result[4] += (float)0;
                result[5] += (float)0.0011001100110011;
                result[6] += (float)0;
              }
            }
          }
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
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
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
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
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
                result[3] += (float)0.07051282051282051;
                result[4] += (float)0.9294871794871795;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)30) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.01694915254237288;
                result[3] += (float)0.9830508474576272;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.5;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9951219512195122;
                result[4] += (float)0;
                result[5] += (float)0.004878048780487805;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.00034423407917383823;
                result[2] += (float)0;
                result[3] += (float)0.9996557659208262;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
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
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
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
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                result[0] += (float)0.999415318651335;
                result[1] += (float)0;
                result[2] += (float)0.0005846813486649776;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
                result[0] += (float)0.9189723320158103;
                result[1] += (float)0;
                result[2] += (float)0.001976284584980237;
                result[3] += (float)0.07114624505928854;
                result[4] += (float)0;
                result[5] += (float)0.007905138339920948;
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
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58) ) ) {
                result[0] += (float)0.9684434968017057;
                result[1] += (float)0;
                result[2] += (float)0.006823027718550106;
                result[3] += (float)0.024733475479744138;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.028846153846153848;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9711538461538461;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
                result[0] += (float)0.8116051243406179;
                result[1] += (float)0;
                result[2] += (float)0.0007535795026375283;
                result[3] += (float)0.18613413715146948;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015071590052750565;
              } else {
                result[0] += (float)0.20346320346320346;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7965367965367965;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9565217391304348;
                result[1] += (float)0;
                result[2] += (float)0.043478260869565216;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8623853211009175;
                result[1] += (float)0;
                result[2] += (float)0.06880733944954129;
                result[3] += (float)0.05963302752293578;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.009174311926605505;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9865470852017937;
                result[1] += (float)0;
                result[2] += (float)0.013452914798206279;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9980806142034548;
                result[1] += (float)0;
                result[2] += (float)0.0019193857965451055;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9183673469387755;
                result[1] += (float)0;
                result[2] += (float)0.061224489795918366;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.02040816326530612;
              } else {
                result[0] += (float)0.9874371859296482;
                result[1] += (float)0;
                result[2] += (float)0.01256281407035176;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.19607843137254902;
                result[2] += (float)0;
                result[3] += (float)0.803921568627451;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                result[0] += (float)0.9940417080436942;
                result[1] += (float)0.003972194637537239;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0019860973187686196;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0007267441860465116;
                result[3] += (float)0.9992732558139535;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9358752166377817;
                result[1] += (float)0.031195840554592725;
                result[2] += (float)0.029462738301559797;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003466204506065858;
              } else {
                result[0] += (float)0.9765886287625418;
                result[1] += (float)0;
                result[2] += (float)0.023411371237458192;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.04918032786885246;
                result[3] += (float)0.9508196721311475;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0036231884057971015;
                result[3] += (float)0.9963768115942029;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
                result[0] += (float)0.9980872226472839;
                result[1] += (float)0;
                result[2] += (float)0.0011476664116296864;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007651109410864575;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
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
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
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
              result[3] += (float)0.3333333333333333;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.027777777777777776;
                result[3] += (float)0.9722222222222222;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.4090909090909091;
                result[2] += (float)0;
                result[3] += (float)0.5909090909090909;
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
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.997491219267436;
                result[1] += (float)0;
                result[2] += (float)0.002508780732563974;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9998807749627422;
                result[1] += (float)0;
                result[2] += (float)0.00011922503725782414;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
                result[0] += (float)0.993006993006993;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006993006993006993;
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
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-27.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8954545454545455;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.10454545454545454;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1973.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.017241379310344827;
                result[2] += (float)0;
                result[3] += (float)0.9827586206896551;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-4.5) ) ) {
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
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.12698412698412698;
                result[3] += (float)0.8412698412698413;
                result[4] += (float)0;
                result[5] += (float)0.031746031746031744;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.04291845493562232;
                result[1] += (float)0.034334763948497854;
                result[2] += (float)0.02145922746781116;
                result[3] += (float)0.9012875536480687;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.75;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.25;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9981684981684982;
                result[4] += (float)0.0018315018315018315;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9939710610932476;
                result[1] += (float)0;
                result[2] += (float)0.0040192926045016075;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0020096463022508037;
              } else {
                result[0] += (float)0.8461538461538461;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.15384615384615385;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0032989690721649486;
                result[1] += (float)0;
                result[2] += (float)0.0008247422680412372;
                result[3] += (float)0.9958762886597938;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9793103448275862;
                result[1] += (float)0;
                result[2] += (float)0.020689655172413793;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9990176817288802;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0009823182711198428;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.3125;
                result[3] += (float)0;
                result[4] += (float)0.6875;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
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
                result[2] += (float)0.03089887640449438;
                result[3] += (float)0.9691011235955056;
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
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)34) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
                result[0] += (float)0.9894631209232313;
                result[1] += (float)0;
                result[2] += (float)0.008529854490717512;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.0005017561465127947;
                result[6] += (float)0.0015052684395383843;
              } else {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.6666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1185.5) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9811320754716981;
                result[4] += (float)0;
                result[5] += (float)0.018867924528301886;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.003067484662576687;
                result[2] += (float)0;
                result[3] += (float)0.9969325153374233;
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
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122.5) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)910) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
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
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.5;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
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
                result[0] += (float)0.9507575757575758;
                result[1] += (float)0;
                result[2] += (float)0.03409090909090909;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.015151515151515152;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9910141206675225;
                result[1] += (float)0;
                result[2] += (float)0.008985879332477536;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.997080291970803;
                result[1] += (float)0;
                result[2] += (float)0.00291970802919708;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.9992553983618764;
                result[1] += (float)0;
                result[2] += (float)0.0007446016381236039;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9909622541201489;
                result[1] += (float)0;
                result[2] += (float)0.0058479532163742695;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0031897926634768745;
              } else {
                result[0] += (float)0.9992841803865425;
                result[1] += (float)0;
                result[2] += (float)0.0007158196134574087;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9540229885057471;
                result[1] += (float)0;
                result[2] += (float)0.04597701149425287;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)36) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                result[0] += (float)0.1232876712328767;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8767123287671232;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8669833729216152;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.1330166270783848;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0033333333333333335;
                result[3] += (float)0.9966666666666667;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += (float)0.6363636363636364;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.36363636363636365;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
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
                result[0] += (float)0.9708222811671088;
                result[1] += (float)0;
                result[2] += (float)0.023872679045092837;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005305039787798408;
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
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
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
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9961977186311787;
                result[1] += (float)0;
                result[2] += (float)0.003041825095057034;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007604562737642585;
              } else {
                result[0] += (float)0.9997512437810945;
                result[1] += (float)0.00014925373134328358;
                result[2] += (float)9.950248756218905e-05;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
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
                result[1] += (float)0.25;
                result[2] += (float)0;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
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
                result[0] += (float)0.9897018970189702;
                result[1] += (float)0;
                result[2] += (float)0.007588075880758808;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0027100271002710027;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.075;
                result[3] += (float)0.925;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0182328190743338;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9817671809256662;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.27413127413127414;
                result[1] += (float)0.011583011583011582;
                result[2] += (float)0.004826254826254826;
                result[3] += (float)0.7094594594594594;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.944;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.056;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)115) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)6) ) ) {
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.22916666666666666;
                result[2] += (float)0;
                result[3] += (float)0.7708333333333334;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.003374578177727784;
                result[3] += (float)0.9966254218222722;
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)156) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.9545454545454546;
                result[3] += (float)0;
                result[4] += (float)0.045454545454545456;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
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
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
                result[0] += (float)0.6;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.14659685863874344;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8534031413612565;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.5804195804195804;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4195804195804196;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                result[0] += (float)0.8719211822660099;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.12807881773399016;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9885321100917431;
                result[1] += (float)0;
                result[2] += (float)0.006880733944954129;
                result[3] += (float)0.0007645259938837921;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00382262996941896;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-14.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
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
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7947019867549668;
                result[1] += (float)0;
                result[2] += (float)0.2052980132450331;
                result[3] += (float)0;
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
                result[0] += (float)0.9961013645224172;
                result[1] += (float)0;
                result[2] += (float)0.003898635477582846;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6666666666666666;
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
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-17) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0.5;
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
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
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
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9958534899792675;
                result[1] += (float)0;
                result[2] += (float)0.0031098825155494126;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010366275051831375;
              } else {
                result[0] += (float)0.9990610328638497;
                result[1] += (float)0;
                result[2] += (float)0.0009389671361502347;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9911949685534591;
                result[1] += (float)0;
                result[2] += (float)0.007547169811320755;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0012578616352201257;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.9466666666666667;
                result[1] += (float)0;
                result[2] += (float)0.013333333333333334;
                result[3] += (float)0.04;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9921259842519685;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.007874015748031496;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)46) ) ) {
                result[0] += (float)0.9990739311622164;
                result[1] += (float)0.00020579307506302414;
                result[2] += (float)0.0007202757627205844;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5521) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0.2894736842105263;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7105263157894737;
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.001336898395721925;
                result[1] += (float)0;
                result[2] += (float)0.004010695187165776;
                result[3] += (float)0.9946524064171123;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)2) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)27.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9857712009106432;
                result[1] += (float)0;
                result[2] += (float)0.012521343198634035;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001707455890722823;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)109) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.5;
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
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
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
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9853658536585366;
                result[4] += (float)0.00975609756097561;
                result[5] += (float)0.004878048780487805;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)56) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)30) ) ) {
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
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
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
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)170.5) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9978740801308259;
                result[1] += (float)0;
                result[2] += (float)0.001144726083401472;
                result[3] += (float)0.0009811937857726904;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
                result[0] += (float)0.9744219357479026;
                result[1] += (float)0.0016369961121342337;
                result[2] += (float)0.0009208103130755065;
                result[3] += (float)0.022508696541845712;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005115612850419481;
              } else {
                result[0] += (float)0.17578125;
                result[1] += (float)0;
                result[2] += (float)0.07421875;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
                result[0] += (float)0.998831229546517;
                result[1] += (float)0;
                result[2] += (float)0.0009350163627863488;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0002337540906965872;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
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
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                result[0] += (float)0.9982866933181039;
                result[1] += (float)0;
                result[2] += (float)0.0017133066818960593;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.10714285714285714;
                result[3] += (float)0.8928571428571429;
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
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)332.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)32.5) ) ) {
                result[0] += (float)0.9961822953948938;
                result[1] += (float)0;
                result[2] += (float)0.002863278453829635;
                result[3] += (float)0.0007158196134574087;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00023860653781913624;
              } else {
                result[0] += (float)0.85;
                result[1] += (float)0;
                result[2] += (float)0.1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.05;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)766) ) ) {
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
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                result[0] += (float)0.9957627118644068;
                result[1] += (float)0;
                result[2] += (float)0.00423728813559322;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                result[0] += (float)0.9850924269528921;
                result[1] += (float)0.0035778175313059034;
                result[2] += (float)0.008944543828264758;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002385211687537269;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.13513513513513514;
                result[2] += (float)0;
                result[3] += (float)0.8648648648648649;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += (float)0.9996052112120016;
                result[1] += (float)0;
                result[2] += (float)0.00039478878799842083;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9950928098997227;
                result[1] += (float)0.001920204821847664;
                result[2] += (float)0.0021335609131640713;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008534243652656285;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)26.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
                result[0] += (float)0.9998138842359948;
                result[1] += (float)6.203858800173708e-05;
                result[2] += (float)0.00012407717600347416;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9913793103448276;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.008620689655172414;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9980506822612085;
                result[4] += (float)0.001949317738791423;
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
                result[0] += (float)0.9430379746835443;
                result[1] += (float)0;
                result[2] += (float)0.04219409282700422;
                result[3] += (float)0.014767932489451477;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.06102987921169739;
                result[1] += (float)0.008264462809917356;
                result[2] += (float)0;
                result[3] += (float)0.9307056579783852;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.07042253521126761;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9295774647887324;
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5533.5) ) ) {
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
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
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
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.17391304347826086;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8260869565217391;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
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
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)26.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0;
                result[2] += (float)0;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
                result[0] += (float)0.863905325443787;
                result[1] += (float)0;
                result[2] += (float)0.08284023668639054;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.005917159763313609;
                result[6] += (float)0.047337278106508875;
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1185.5) ) ) {
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
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.9333333333333333;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.06666666666666667;
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
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                result[0] += (float)0.9933967247754887;
                result[1] += (float)0.0021130480718436345;
                result[2] += (float)0.003169572107765452;
                result[3] += (float)0.0002641310089804543;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010565240359218173;
              } else {
                result[0] += (float)0.9414634146341463;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.05853658536585366;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9993078387264233;
                result[1] += (float)0;
                result[2] += (float)0.0006056411143796505;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)8.652015919709292e-05;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.375;
                result[2] += (float)0;
                result[3] += (float)0.625;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
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
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)0.9897959183673469;
                result[1] += (float)0;
                result[2] += (float)0.01020408163265306;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9349593495934959;
                result[1] += (float)0;
                result[2] += (float)0.06504065040650407;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0.8490566037735849;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.1509433962264151;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.025252525252525252;
                result[3] += (float)0.9747474747474747;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
                result[0] += (float)0.23923444976076555;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7607655502392344;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.48292682926829267;
                result[1] += (float)0;
                result[2] += (float)0.0024390243902439024;
                result[3] += (float)0.5146341463414634;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
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
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9986850756081526;
                result[4] += (float)0;
                result[5] += (float)0.0013149243918474688;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
                result[0] += (float)0.9982062780269059;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0017937219730941704;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.1111111111111111;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8888888888888888;
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9014598540145985;
                result[1] += (float)0;
                result[2] += (float)0.072992700729927;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.025547445255474453;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
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
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02564102564102564;
                result[3] += (float)0.9743589743589743;
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
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.038461538461538464;
                result[2] += (float)0;
                result[3] += (float)0.9615384615384616;
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
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_4/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
