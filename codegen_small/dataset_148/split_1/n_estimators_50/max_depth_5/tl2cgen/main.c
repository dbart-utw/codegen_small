
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
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.1;
            result[1] += (float)0;
            result[2] += (float)0.8;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.1;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0003234152652005175;
            result[2] += (float)0.0016170763260025874;
            result[3] += (float)0.9970892626131953;
            result[4] += (float)0;
            result[5] += (float)0.0009702457956015524;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-144) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.006369426751592357;
            result[2] += (float)0;
            result[3] += (float)0.9936305732484076;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
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
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9982761782505043;
            result[1] += (float)0.00029341646799926647;
            result[2] += (float)0.0011736658719970659;
            result[3] += (float)3.667705849990831e-05;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00022006235099944984;
          } else {
            result[0] += (float)0.9322033898305084;
            result[1] += (float)0;
            result[2] += (float)0.06779661016949153;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)56) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.9623430962343096;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.03765690376569038;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.009424764380890478;
            result[1] += (float)0;
            result[2] += (float)0.0016249593760155996;
            result[3] += (float)0.988950276243094;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0.5;
            result[1] += (float)0;
            result[2] += (float)0.5;
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
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
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += (float)0.9991103202846975;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.0008896797153024911;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9840566873339238;
            result[1] += (float)0;
            result[2] += (float)0.0141718334809566;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001771479185119575;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
            result[0] += (float)0.9945121951219512;
            result[1] += (float)0;
            result[2] += (float)0.004878048780487805;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006097560975609756;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.9988789237668162;
            result[1] += (float)0;
            result[2] += (float)0.0011210762331838565;
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
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += (float)0.012121212121212121;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9818181818181818;
            result[4] += (float)0;
            result[5] += (float)0.006060606060606061;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03259312320916905;
            result[1] += (float)0.003939828080229226;
            result[2] += (float)0.020773638968481375;
            result[3] += (float)0.9412607449856734;
            result[4] += (float)0;
            result[5] += (float)0.0014326647564469914;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            result[0] += (float)0.993573264781491;
            result[1] += (float)0;
            result[2] += (float)0.004627249357326478;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0017994858611825194;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.00042936882782310007;
            result[3] += (float)0.9995706311721769;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += (float)0.991779020059191;
            result[1] += (float)0;
            result[2] += (float)0.007234462347911871;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0009865175928970734;
          } else {
            result[0] += (float)0.6932642487046632;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.3067357512953368;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
            result[1] += (float)0.9090909090909091;
            result[2] += (float)0;
            result[3] += (float)0.09090909090909091;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
            result[0] += (float)0.25396825396825395;
            result[1] += (float)0;
            result[2] += (float)0.12698412698412698;
            result[3] += (float)0.6190476190476191;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)121) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.5555555555555556;
            result[2] += (float)0.4444444444444444;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0009363295880149813;
            result[2] += (float)0.003433208489388265;
            result[3] += (float)0.9934456928838952;
            result[4] += (float)0;
            result[5] += (float)0.002184769038701623;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.6666666666666666;
            result[2] += (float)0;
            result[3] += (float)0.3333333333333333;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += (float)0.99788197487584;
            result[1] += (float)0.0005842827928717499;
            result[2] += (float)0.0013146362839614374;
            result[3] += (float)7.303534910896874e-05;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00014607069821793748;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.75;
            result[1] += (float)0;
            result[2] += (float)0.25;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.7647058823529411;
            result[3] += (float)0.23529411764705882;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.052083333333333336;
            result[2] += (float)0;
            result[3] += (float)0.9479166666666666;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34) ) ) {
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
            result[2] += (float)0.005302557704304429;
            result[3] += (float)0.9946974422956956;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
            result[2] += (float)0.006781193490054249;
            result[3] += (float)0.0031645569620253164;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0027124773960217;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
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
            result[0] += (float)0.98;
            result[1] += (float)0;
            result[2] += (float)0.02;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0029182879377431907;
            result[3] += (float)0.9970817120622568;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.053691275167785234;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9463087248322147;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
            result[0] += (float)0.17053206002728513;
            result[1] += (float)0.013642564802182811;
            result[2] += (float)0;
            result[3] += (float)0.8158253751705321;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.990450204638472;
            result[1] += (float)0;
            result[2] += (float)0.009549795361527967;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9995667244367418;
            result[1] += (float)0;
            result[2] += (float)0.0004332755632582322;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.02702702702702703;
            result[2] += (float)0;
            result[3] += (float)0.9680589680589681;
            result[4] += (float)0;
            result[5] += (float)0.004914004914004914;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9824537164962697;
            result[1] += (float)0;
            result[2] += (float)0.005802707930367505;
            result[3] += (float)0.01036197844708483;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0013815971262779773;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.07586206896551724;
            result[3] += (float)0;
            result[4] += (float)0.9172413793103448;
            result[5] += (float)0.006896551724137931;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.021949078138718173;
            result[1] += (float)0;
            result[2] += (float)0.019315188762071993;
            result[3] += (float)0.9569798068481123;
            result[4] += (float)0;
            result[5] += (float)0.001755926251097454;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9571428571428572;
            result[4] += (float)0.04285714285714286;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0003325573661456601;
            result[2] += (float)0;
            result[3] += (float)0.9986697705354174;
            result[4] += (float)0.0006651147322913202;
            result[5] += (float)0.0003325573661456601;
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
            result[2] += (float)0.875;
            result[3] += (float)0;
            result[4] += (float)0.125;
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
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
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
            result[0] += (float)0.9986302933455085;
            result[1] += (float)0;
            result[2] += (float)0.0013697066544914964;
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
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.902377972465582;
            result[1] += (float)0;
            result[2] += (float)0.001877346683354193;
            result[3] += (float)0.0926157697121402;
            result[4] += (float)0.000625782227784731;
            result[5] += (float)0.002503128911138924;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.6453628745916773;
            result[1] += (float)0.0026984803294986506;
            result[2] += (float)0.006675188183496663;
            result[3] += (float)0.30947308620934527;
            result[4] += (float)0.03522226956398239;
            result[5] += (float)0.000284050560999858;
            result[6] += (float)0.000284050560999858;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += (float)0.9875816993464053;
            result[1] += (float)0;
            result[2] += (float)0.00130718954248366;
            result[3] += (float)0.009150326797385621;
            result[4] += (float)0.00065359477124183;
            result[5] += (float)0;
            result[6] += (float)0.00130718954248366;
          } else {
            result[0] += (float)0.8571428571428572;
            result[1] += (float)0;
            result[2] += (float)0.04761904761904762;
            result[3] += (float)0.07823129251700682;
            result[4] += (float)0.006802721088435375;
            result[5] += (float)0.0034013605442176874;
            result[6] += (float)0.006802721088435375;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += (float)0.017793594306049824;
            result[1] += (float)0.03558718861209965;
            result[2] += (float)0;
            result[3] += (float)0.09252669039145907;
            result[4] += (float)0.8540925266903915;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.15549828178694158;
            result[1] += (float)0.003436426116838488;
            result[2] += (float)0;
            result[3] += (float)0.8410652920962199;
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
            result[0] += (float)0.288;
            result[1] += (float)0;
            result[2] += (float)0.04;
            result[3] += (float)0.672;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7712854757929883;
            result[4] += (float)0.22537562604340566;
            result[5] += (float)0.00333889816360601;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6168831168831169;
            result[4] += (float)0.38311688311688313;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0010400416016640667;
            result[2] += (float)0.011440457618304731;
            result[3] += (float)0.9875195007800313;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0273972602739726;
            result[3] += (float)0;
            result[4] += (float)0.9726027397260274;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9583333333333334;
            result[4] += (float)0.041666666666666664;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9333333333333333;
            result[4] += (float)0.06666666666666667;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
            result[0] += (float)0.96;
            result[1] += (float)0;
            result[2] += (float)0.04;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0.9991441496515467;
            result[1] += (float)0;
            result[2] += (float)0.0007947181807066879;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)6.11321677466683e-05;
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
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8036579991185545;
            result[1] += (float)0.0035257822829440288;
            result[2] += (float)0.002203613926840018;
            result[3] += (float)0.18907007492287353;
            result[4] += (float)0;
            result[5] += (float)0.0002203613926840018;
            result[6] += (float)0.0013221683561040107;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00026917900403768504;
            result[2] += (float)0.008075370121130552;
            result[3] += (float)0.8059219380888291;
            result[4] += (float)0.18519515477792733;
            result[5] += (float)0.0005383580080753701;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += (float)0.7401812688821753;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2598187311178248;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.970113085621971;
            result[1] += (float)0;
            result[2] += (float)0.010770059235325794;
            result[3] += (float)0.018039849219170706;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0010770059235325794;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            result[0] += (float)0.005277044854881266;
            result[1] += (float)0;
            result[2] += (float)0.014072119613016711;
            result[3] += (float)0.980650835532102;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.28125;
            result[3] += (float)0.6875;
            result[4] += (float)0;
            result[5] += (float)0.03125;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
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
            result[0] += (float)0.978021978021978;
            result[1] += (float)0.02197802197802198;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)160) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13324) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.2702702702702703;
            result[3] += (float)0.7297297297297297;
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.9290322580645162;
            result[1] += (float)0;
            result[2] += (float)0.07096774193548387;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9899193548387096;
            result[1] += (float)0;
            result[2] += (float)0.010080645161290322;
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
            result[0] += (float)0.6451612903225806;
            result[1] += (float)0;
            result[2] += (float)0.3548387096774194;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.20970266040688576;
            result[1] += (float)0.014084507042253521;
            result[2] += (float)0.006259780907668232;
            result[3] += (float)0.7699530516431925;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0010121457489878543;
            result[3] += (float)0.9989878542510121;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
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
            result[0] += (float)0.058823529411764705;
            result[1] += (float)0.7058823529411765;
            result[2] += (float)0;
            result[3] += (float)0.23529411764705882;
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
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0.829185520361991;
            result[1] += (float)0;
            result[2] += (float)0.0011312217194570137;
            result[3] += (float)0.16923076923076924;
            result[4] += (float)0.00022624434389140272;
            result[5] += (float)0;
            result[6] += (float)0.00022624434389140272;
          } else {
            result[0] += (float)0.8890895021924168;
            result[1] += (float)0.002321382512251741;
            result[2] += (float)0.0020634511220015478;
            result[3] += (float)0.10575187000257931;
            result[4] += (float)0.00012896569512509673;
            result[5] += (float)0.00025793139025019347;
            result[6] += (float)0.00038689708537529015;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.04861111111111111;
            result[3] += (float)0;
            result[4] += (float)0.9513888888888888;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9955775084716558;
            result[1] += (float)0;
            result[2] += (float)0.0006317845040491643;
            result[3] += (float)0.003790707024294986;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9979217180464149;
            result[4] += (float)0.0013855213023900243;
            result[5] += (float)0.0006927606511950121;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9642301710730948;
            result[1] += (float)0;
            result[2] += (float)0.03576982892690513;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += (float)0.6363636363636364;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.36363636363636365;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9954036770583533;
            result[1] += (float)0;
            result[2] += (float)0.0037969624300559553;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007993605115907274;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)59) ) ) {
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
            result[3] += (float)0;
            result[4] += (float)0.9954337899543378;
            result[5] += (float)0.0045662100456621;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.06521739130434782;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9347826086956522;
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.01906158357771261;
            result[3] += (float)0;
            result[4] += (float)0.9721407624633431;
            result[5] += (float)0.008797653958944282;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0014144271570014145;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9985855728429985;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
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
            result[0] += (float)0.9925452609158679;
            result[1] += (float)0;
            result[2] += (float)0.006389776357827476;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0010649627263045794;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.9998753894080997;
            result[1] += (float)0;
            result[2] += (float)0.00012461059190031152;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0.9937484052054095;
            result[1] += (float)0.0022965042102577188;
            result[2] += (float)0.003699923449859658;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00025516713447307985;
          } else {
            result[0] += (float)0.7958403060004782;
            result[1] += (float)0;
            result[2] += (float)0.004303131723643318;
            result[3] += (float)0.1984221850346641;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0014343772412144394;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.26768377253814146;
            result[1] += (float)0.006934812760055479;
            result[2] += (float)0.0013869625520110957;
            result[3] += (float)0.723994452149792;
            result[4] += (float)0;
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
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.17073170731707318;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8252032520325203;
            result[4] += (float)0;
            result[5] += (float)0.0040650406504065045;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += (float)0.7294117647058823;
            result[1] += (float)0.0058823529411764705;
            result[2] += (float)0;
            result[3] += (float)0.2647058823529412;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9987726296409942;
            result[1] += (float)4.383465567877964e-05;
            result[2] += (float)0.0005260158681453557;
            result[3] += (float)0.000613685179502915;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)4.383465567877964e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
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
            result[1] += (float)0.04065040650406504;
            result[2] += (float)0;
            result[3] += (float)0.959349593495935;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.9916256157635468;
            result[1] += (float)0;
            result[2] += (float)0.007389162561576354;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0009852216748768472;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.008333333333333333;
            result[1] += (float)0;
            result[2] += (float)0.001851851851851852;
            result[3] += (float)0.987037037037037;
            result[4] += (float)0.000925925925925926;
            result[5] += (float)0.001851851851851852;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.28169014084507044;
            result[1] += (float)0.0030181086519114686;
            result[2] += (float)0.025653923541247486;
            result[3] += (float)0.6539235412474849;
            result[4] += (float)0.03571428571428571;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.008064516129032258;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.012096774193548387;
            result[4] += (float)0.9798387096774194;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0364741641337386;
            result[2] += (float)0;
            result[3] += (float)0.24620060790273557;
            result[4] += (float)0.7173252279635258;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
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
            result[2] += (float)0.02666666666666667;
            result[3] += (float)0.9733333333333334;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.6486486486486487;
            result[3] += (float)0;
            result[4] += (float)0.2972972972972973;
            result[5] += (float)0.05405405405405406;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8535353535353535;
            result[1] += (float)0;
            result[2] += (float)0.12121212121212122;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.025252525252525252;
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
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
            result[0] += (float)0.9802158273381295;
            result[1] += (float)0;
            result[2] += (float)0.01618705035971223;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0035971223021582736;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0.998655462184874;
            result[1] += (float)0;
            result[2] += (float)0.0013445378151260505;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            result[0] += (float)0.021797045289416325;
            result[1] += (float)0.004601598449987891;
            result[2] += (float)0.007023492371034149;
            result[3] += (float)0.9653669169290385;
            result[4] += (float)0;
            result[5] += (float)0.001210946960523129;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.5909090909090909;
            result[2] += (float)0;
            result[3] += (float)0.4090909090909091;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += (float)0.9957315278186636;
            result[1] += (float)0;
            result[2] += (float)0.0027965852222549313;
            result[3] += (float)0.0007359434795407714;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007359434795407714;
          } else {
            result[0] += (float)0.9514563106796117;
            result[1] += (float)0;
            result[2] += (float)0.013869625520110958;
            result[3] += (float)0.030513176144244106;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.004160887656033287;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0.08823529411764706;
            result[1] += (float)0;
            result[2] += (float)0.014705882352941176;
            result[3] += (float)0.8970588235294118;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9550173010380624;
            result[1] += (float)0;
            result[2] += (float)0.025951557093425608;
            result[3] += (float)0.019031141868512114;
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
            result[0] += (float)0.5714285714285714;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.42857142857142855;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0061162079510703364;
            result[2] += (float)0;
            result[3] += (float)0.9938837920489296;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0.9433198380566802;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.05668016194331984;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)0.999209814930339;
            result[1] += (float)8.317737575379496e-05;
            result[2] += (float)0.0006238303181534623;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)8.317737575379496e-05;
          } else {
            result[0] += (float)0.9894736842105263;
            result[1] += (float)0.005263157894736842;
            result[2] += (float)0.004135338345864661;
            result[3] += (float)0.0011278195488721805;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)35) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.00037313432835820896;
            result[1] += (float)0;
            result[2] += (float)0.007462686567164179;
            result[3] += (float)0.9921641791044776;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            result[0] += (float)0.8616071428571429;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.13839285714285715;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9916545718432511;
            result[1] += (float)0;
            result[2] += (float)0.0050798258345428155;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.003265602322206096;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)3.5) ) ) {
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
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0.44451827242524916;
            result[1] += (float)0;
            result[2] += (float)0.0033222591362126247;
            result[3] += (float)0.5495016611295681;
            result[4] += (float)0;
            result[5] += (float)0.0026578073089701;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7881996974281392;
            result[1] += (float)0;
            result[2] += (float)0.03328290468986384;
            result[3] += (float)0.17851739788199697;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.16341463414634147;
            result[1] += (float)0.005691056910569106;
            result[2] += (float)0.0016260162601626016;
            result[3] += (float)0.8292682926829268;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.004992867332382311;
            result[2] += (float)0.01355206847360913;
            result[3] += (float)0.9793152639087018;
            result[4] += (float)0;
            result[5] += (float)0.0021398002853067048;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.3356009070294785;
            result[1] += (float)0.006802721088435374;
            result[2] += (float)0;
            result[3] += (float)0.6575963718820862;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.08294209702660407;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.917057902973396;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9907834101382489;
            result[1] += (float)0;
            result[2] += (float)0.009216589861751152;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.039538714991762765;
            result[3] += (float)0.9093904448105437;
            result[4] += (float)0.051070840197693576;
            result[5] += (float)0;
            result[6] += (float)0;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            result[0] += (float)0.003740648379052369;
            result[1] += (float)0.0199501246882793;
            result[2] += (float)0;
            result[3] += (float)0.08728179551122195;
            result[4] += (float)0.8890274314214464;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
            result[0] += (float)0.9904761904761905;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.009523809523809525;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9905660377358491;
            result[4] += (float)0.007075471698113208;
            result[5] += (float)0.0023584905660377358;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            result[0] += (float)0.9985873996044718;
            result[1] += (float)8.072002260160632e-05;
            result[2] += (float)0.0006861201921136538;
            result[3] += (float)0.000484320135609638;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00016144004520321265;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.5555555555555556;
            result[2] += (float)0;
            result[3] += (float)0.4444444444444444;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9943324937027708;
            result[1] += (float)0;
            result[2] += (float)0.003778337531486146;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001889168765743073;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0049504950495049506;
            result[3] += (float)0.995049504950495;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.23333333333333334;
            result[3] += (float)0;
            result[4] += (float)0.7666666666666667;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9671163575042159;
            result[1] += (float)0;
            result[2] += (float)0.026981450252951095;
            result[3] += (float)0.002529510961214165;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.003372681281618887;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-11) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.5;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.5;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.995507637017071;
            result[1] += (float)0;
            result[2] += (float)0.004492362982929021;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0.9988836793927216;
            result[1] += (float)0;
            result[2] += (float)0.0011163206072784104;
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
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
            result[4] += (float)0.9787234042553191;
            result[5] += (float)0.02127659574468085;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9583333333333334;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.041666666666666664;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            result[0] += (float)0.001996007984031936;
            result[1] += (float)0.0054890219560878245;
            result[2] += (float)0.013722554890219561;
            result[3] += (float)0.9772954091816367;
            result[4] += (float)0;
            result[5] += (float)0.0014970059880239522;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.5333333333333333;
            result[2] += (float)0;
            result[3] += (float)0.4666666666666667;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
            result[0] += (float)0.9894459102902374;
            result[1] += (float)0;
            result[2] += (float)0.0079155672823219;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.002638522427440633;
          } else {
            result[0] += (float)0.1388888888888889;
            result[1] += (float)0;
            result[2] += (float)0.013888888888888888;
            result[3] += (float)0.8472222222222222;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
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
            result[0] += (float)0.9882583170254403;
            result[1] += (float)0;
            result[2] += (float)0.006131767775603392;
            result[3] += (float)0.0045662100456621;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0010437051532941944;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-165) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0013320013320013318;
            result[2] += (float)0.010323010323010322;
            result[3] += (float)0.9823509823509822;
            result[4] += (float)0.0019980019980019976;
            result[5] += (float)0.003996003996003995;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5655172413793104;
            result[4] += (float)0.43448275862068964;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-11) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)182) ) ) {
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
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.03225806451612903;
            result[2] += (float)0;
            result[3] += (float)0.01935483870967742;
            result[4] += (float)0.9483870967741935;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
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
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += (float)0.9949382716049381;
            result[1] += (float)0.0009876543209876541;
            result[2] += (float)0.0032098765432098755;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008641975308641974;
          } else {
            result[0] += (float)0.8076923076923077;
            result[1] += (float)0;
            result[2] += (float)0.19230769230769232;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9993376471187649;
            result[1] += (float)0.0001019004432669282;
            result[2] += (float)0.0004076017730677128;
            result[3] += (float)0.00015285066490039231;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.09523809523809523;
            result[1] += (float)0;
            result[2] += (float)0.8095238095238095;
            result[3] += (float)0.09523809523809523;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
            result[0] += (float)0.75;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.25;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.007547169811320755;
            result[2] += (float)0;
            result[3] += (float)0.9924528301886792;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.9588607594936709;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.04113924050632911;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.00881488736532811;
            result[1] += (float)0;
            result[2] += (float)0.001305909239307868;
            result[3] += (float)0.9898792033953641;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0.25;
            result[1] += (float)0;
            result[2] += (float)0.75;
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)107.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9746407438715131;
            result[1] += (float)0;
            result[2] += (float)0.01775147928994083;
            result[3] += (float)0.00253592561284869;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00507185122569738;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
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
            result[0] += (float)0.007783882783882784;
            result[1] += (float)0.005036630036630037;
            result[2] += (float)0.007783882783882784;
            result[3] += (float)0.9793956043956044;
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
            result[0] += (float)0.950920245398773;
            result[1] += (float)0;
            result[2] += (float)0.049079754601226995;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)30) ) ) {
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0.9868247694334651;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.013175230566534914;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9985405010946242;
            result[1] += (float)0;
            result[2] += (float)0.00012162490878131841;
            result[3] += (float)0.0010946241790318657;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00024324981756263683;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            result[0] += (float)0.35227982510930667;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6477201748906933;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.19008264462809918;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8099173553719008;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += (float)0.6326530612244898;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.3673469387755102;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.838495575221239;
            result[1] += (float)0;
            result[2] += (float)0.04424778761061947;
            result[3] += (float)0;
            result[4] += (float)0.10398230088495575;
            result[5] += (float)0.00331858407079646;
            result[6] += (float)0.00995575221238938;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += (float)0.9875109828040669;
            result[1] += (float)0.00031379440190787;
            result[2] += (float)0.001380695368394628;
            result[3] += (float)0.010543491904104432;
            result[4] += (float)6.275888038157401e-05;
            result[5] += (float)0;
            result[6] += (float)0.000188276641144722;
          } else {
            result[0] += (float)0.9545949872865965;
            result[1] += (float)0.003995641118779514;
            result[2] += (float)0.003995641118779514;
            result[3] += (float)0.03705049037413731;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00036324010170722855;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.23076923076923078;
            result[3] += (float)0;
            result[4] += (float)0.6923076923076923;
            result[5] += (float)0.07692307692307693;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.015789473684210527;
            result[3] += (float)0.9842105263157894;
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
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0.38766140602582494;
            result[1] += (float)0;
            result[2] += (float)0.0014347202295552368;
            result[3] += (float)0.4734576757532281;
            result[4] += (float)0.13687230989956958;
            result[5] += (float)0;
            result[6] += (float)0.0005738880918220947;
          } else {
            result[0] += (float)0.9;
            result[1] += (float)0;
            result[2] += (float)0.05;
            result[3] += (float)0;
            result[4] += (float)0.05;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
            result[0] += (float)0.8947368421052632;
            result[1] += (float)0;
            result[2] += (float)0.10526315789473684;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.03821656050955414;
            result[2] += (float)0;
            result[3] += (float)0.9490445859872612;
            result[4] += (float)0.012738853503184714;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0018832391713747645;
            result[3] += (float)0.9981167608286252;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.07692307692307693;
            result[1] += (float)0;
            result[2] += (float)0.9230769230769231;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += (float)0.001652892561983471;
            result[1] += (float)0.01652892561983471;
            result[2] += (float)0;
            result[3] += (float)0.03636363636363636;
            result[4] += (float)0.9454545454545454;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2549019607843137;
            result[4] += (float)0.7450980392156863;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)54) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.6;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.4;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0006779661016949153;
            result[2] += (float)0;
            result[3] += (float)0.9966101694915255;
            result[4] += (float)0;
            result[5] += (float)0.002711864406779661;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.16666666666666666;
            result[3] += (float)0;
            result[4] += (float)0.8333333333333334;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)926) ) ) {
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
            result[0] += (float)0.9903329752953813;
            result[1] += (float)0;
            result[2] += (float)0.00644468313641246;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00322234156820623;
          } else {
            result[0] += (float)0.9990231513138614;
            result[1] += (float)0;
            result[2] += (float)0.000976848686138517;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += (float)0.9895716945996276;
            result[1] += (float)0.0022346368715083797;
            result[2] += (float)0.0011173184357541898;
            result[3] += (float)0.0067039106145251395;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00037243947858472997;
          } else {
            result[0] += (float)0.3319069269858251;
            result[1] += (float)0;
            result[2] += (float)0.008558438085049478;
            result[3] += (float)0.6576624765980209;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0018721583311045735;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0.01935483870967742;
            result[1] += (float)0.012903225806451613;
            result[2] += (float)0.04516129032258064;
            result[3] += (float)0.9096774193548387;
            result[4] += (float)0;
            result[5] += (float)0.012903225806451613;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9040822152440765;
            result[1] += (float)0;
            result[2] += (float)0.003140165572366543;
            result[3] += (float)0.09163574079360548;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0011418783899514702;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0008865248226950354;
            result[2] += (float)0;
            result[3] += (float)0.9964539007092199;
            result[4] += (float)0.0013297872340425532;
            result[5] += (float)0.0013297872340425532;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
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
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.8;
            result[3] += (float)0;
            result[4] += (float)0.2;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.004171011470281543;
            result[3] += (float)0;
            result[4] += (float)0.9937434827945777;
            result[5] += (float)0.0020855057351407717;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.9091491634033464;
            result[1] += (float)0.001139195443218227;
            result[2] += (float)0.0040583837664649345;
            result[3] += (float)0.08558205767176931;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)7.119971520113919e-05;
          } else {
            result[0] += (float)0.993514915693904;
            result[1] += (float)0;
            result[2] += (float)0.003419408088668789;
            result[3] += (float)0.0023582124749439923;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007074637424831977;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += (float)0.26401299756295693;
            result[1] += (float)0;
            result[2] += (float)0.005686433793663688;
            result[3] += (float)0.7303005686433793;
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8947368421052632;
            result[1] += (float)0;
            result[2] += (float)0.10526315789473684;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.02040816326530612;
            result[2] += (float)0;
            result[3] += (float)0.9795918367346939;
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.1507246376811594;
            result[1] += (float)0.008695652173913042;
            result[2] += (float)0.0038647342995169072;
            result[3] += (float)0.8057971014492752;
            result[4] += (float)0.030917874396135258;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03816793893129771;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.816793893129771;
            result[4] += (float)0.1450381679389313;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)121.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.989345509893455;
            result[4] += (float)0.0106544901065449;
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
            result[1] += (float)0.3611111111111111;
            result[2] += (float)0;
            result[3] += (float)0.6388888888888888;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.12857142857142856;
            result[4] += (float)0.8714285714285714;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += (float)0.8448275862068966;
            result[1] += (float)0;
            result[2] += (float)0.15517241379310345;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9987501735870018;
            result[1] += (float)0;
            result[2] += (float)0.0012498264129981948;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += (float)0.9555555555555556;
            result[1] += (float)0;
            result[2] += (float)0.044444444444444446;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.026373626373626374;
            result[2] += (float)0;
            result[3] += (float)0.9736263736263736;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.983479243151652;
            result[1] += (float)0;
            result[2] += (float)0.003953685399604632;
            result[3] += (float)0.010731431798926857;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0018356396498164361;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9944237918215614;
            result[4] += (float)0.0037174721189591076;
            result[5] += (float)0.0018587360594795538;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.09246575342465753;
            result[1] += (float)0;
            result[2] += (float)0.0958904109589041;
            result[3] += (float)0.3184931506849315;
            result[4] += (float)0.4931506849315068;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.000333000333000333;
            result[2] += (float)0.008325008325008326;
            result[3] += (float)0.9913419913419913;
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
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += (float)0.9994011976047904;
            result[1] += (float)0;
            result[2] += (float)0.0005988023952095808;
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
            result[0] += (float)0.9747191011235955;
            result[1] += (float)0;
            result[2] += (float)0.025280898876404494;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9988273233655819;
            result[1] += (float)0;
            result[2] += (float)0.0011726766344180592;
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
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9983164983164983;
            result[1] += (float)0;
            result[2] += (float)0.0016835016835016834;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7577250335871026;
            result[1] += (float)0;
            result[2] += (float)0.004478280340349306;
            result[3] += (float)0.23690103000447832;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008956560680698613;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8556701030927836;
            result[1] += (float)0;
            result[2] += (float)0.014891179839633449;
            result[3] += (float)0.12142038946162659;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.008018327605956473;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.023220973782771534;
            result[3] += (float)0.8569288389513109;
            result[4] += (float)0.1198501872659176;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
            result[0] += (float)0.08707360861759425;
            result[1] += (float)0;
            result[2] += (float)0.0017953321364452424;
            result[3] += (float)0.8348294434470377;
            result[4] += (float)0.07450628366247755;
            result[5] += (float)0.0017953321364452424;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.05263157894736842;
            result[4] += (float)0.9473684210526315;
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
            result[0] += (float)0.06153846153846154;
            result[1] += (float)0.15384615384615385;
            result[2] += (float)0;
            result[3] += (float)0.7846153846153846;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            result[0] += (float)0.024147727272727276;
            result[1] += (float)0.011363636363636366;
            result[2] += (float)0.011363636363636366;
            result[3] += (float)0.7334280303030304;
            result[4] += (float)0.21732954545454547;
            result[5] += (float)0.002367424242424243;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9906210921217173;
            result[1] += (float)0;
            result[2] += (float)0.003126302626094206;
            result[3] += (float)0.005627344726969571;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0006252605252188412;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += (float)0.18226600985221675;
            result[1] += (float)0.003284072249589491;
            result[2] += (float)0;
            result[3] += (float)0.8144499178981938;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.009569377990430622;
            result[2] += (float)0;
            result[3] += (float)0.09569377990430622;
            result[4] += (float)0.8947368421052632;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
            result[0] += (float)0.05389221556886228;
            result[1] += (float)0;
            result[2] += (float)0.08982035928143713;
            result[3] += (float)0.8562874251497006;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.014192139737991267;
            result[4] += (float)0.9858078602620087;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0037017451084082496;
            result[3] += (float)0.994711792702274;
            result[4] += (float)0;
            result[5] += (float)0.0015864621893178213;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.009036144578313253;
            result[1] += (float)0.006024096385542169;
            result[2] += (float)0;
            result[3] += (float)0.9668674698795181;
            result[4] += (float)0;
            result[5] += (float)0.018072289156626505;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += (float)0.9967115248406354;
            result[1] += (float)0;
            result[2] += (float)0.0010118385105737124;
            result[3] += (float)0.002276636648790853;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.24489795918367346;
            result[1] += (float)0.04081632653061224;
            result[2] += (float)0;
            result[3] += (float)0.7142857142857143;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += (float)0.9416419386745796;
            result[1] += (float)0.003214638971315529;
            result[2] += (float)0.010138476755687438;
            result[3] += (float)0.044015825914935705;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0009891196834817012;
          } else {
            result[0] += (float)0.002872531418312388;
            result[1] += (float)0;
            result[2] += (float)0.005026929982046679;
            result[3] += (float)0.992100538599641;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += (float)0.9903381642512077;
            result[1] += (float)0;
            result[2] += (float)0.00966183574879227;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9992052137974885;
            result[1] += (float)0;
            result[2] += (float)0.0006358289620092195;
            result[3] += (float)0.00015895724050230488;
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
            result[0] += (float)0.8948207171314742;
            result[1] += (float)0;
            result[2] += (float)0.018326693227091632;
            result[3] += (float)0.0804780876494024;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.006374501992031873;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += (float)0.06060606060606061;
            result[1] += (float)0.36363636363636365;
            result[2] += (float)0;
            result[3] += (float)0.5757575757575758;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.05;
            result[1] += (float)0.15;
            result[2] += (float)0;
            result[3] += (float)0.8;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
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
            result[0] += (float)0;
            result[1] += (float)0.007683863885839737;
            result[2] += (float)0;
            result[3] += (float)0.9923161361141603;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.05348460291734198;
            result[4] += (float)0.946515397082658;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.009523809523809525;
            result[3] += (float)0.9904761904761905;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.1111111111111111;
            result[1] += (float)0;
            result[2] += (float)0.8888888888888888;
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
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)0.9993722536095417;
            result[1] += (float)0;
            result[2] += (float)0.00012554927809165097;
            result[3] += (float)0.0005021971123666039;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8511029411764706;
            result[1] += (float)0;
            result[2] += (float)0.001838235294117647;
            result[3] += (float)0.14522058823529413;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001838235294117647;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
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
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0091324200913242;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9908675799086758;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0008278145695364238;
            result[2] += (float)0.0008278145695364238;
            result[3] += (float)0.9983443708609272;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9230769230769231;
            result[1] += (float)0;
            result[2] += (float)0.07692307692307693;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9642857142857143;
            result[3] += (float)0;
            result[4] += (float)0.03571428571428571;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9856459330143541;
            result[5] += (float)0.014354066985645933;
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
            result[2] += (float)0.005447470817120622;
            result[3] += (float)0.9945525291828794;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
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
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0.9976689976689976;
            result[1] += (float)0;
            result[2] += (float)0.001554001554001554;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.000777000777000777;
          } else {
            result[0] += (float)0.9220183486238532;
            result[1] += (float)0;
            result[2] += (float)0.05045871559633028;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.027522935779816515;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += (float)0.9970414201183432;
            result[1] += (float)0;
            result[2] += (float)0.0029585798816568047;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.019538188277087035;
            result[3] += (float)0.9609236234458259;
            result[4] += (float)0.019538188277087035;
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
            result[0] += (float)0.11573472041612484;
            result[1] += (float)0.006501950585175552;
            result[2] += (float)0;
            result[3] += (float)0.8777633289986996;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9957850368809273;
            result[1] += (float)0;
            result[2] += (float)0.004214963119072708;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0.7933960523888581;
            result[1] += (float)0.0020291459140380002;
            result[2] += (float)0.007563180225050729;
            result[3] += (float)0.16233167312304003;
            result[4] += (float)0.033757609297177645;
            result[5] += (float)0.0005534034311012728;
            result[6] += (float)0.00036893562073418186;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0022371364653243847;
            result[2] += (float)0;
            result[3] += (float)0.9977628635346756;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.9639671156200805;
            result[1] += (float)0;
            result[2] += (float)0.0005247507433968866;
            result[3] += (float)0.03480846597866014;
            result[4] += (float)0.0005247507433968866;
            result[5] += (float)0;
            result[6] += (float)0.00017491691446562885;
          } else {
            result[0] += (float)0.9990476190476191;
            result[1] += (float)0.00013605442176870748;
            result[2] += (float)6.802721088435374e-05;
            result[3] += (float)0.0006802721088435374;
            result[4] += (float)0;
            result[5] += (float)6.802721088435374e-05;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0.6036585365853658;
            result[1] += (float)0;
            result[2] += (float)0.036585365853658534;
            result[3] += (float)0.3597560975609756;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9870967741935484;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.012903225806451613;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0.032218091697645605;
            result[1] += (float)0.014869888475836432;
            result[2] += (float)0.018587360594795543;
            result[3] += (float)0.9281288723667906;
            result[4] += (float)0;
            result[5] += (float)0.0061957868649318475;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5846687592929125;
            result[1] += (float)0;
            result[2] += (float)0.001652073352056831;
            result[3] += (float)0.41318354534941343;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0004956220056170493;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += (float)0.9305949008498584;
            result[1] += (float)0;
            result[2] += (float)0.002124645892351275;
            result[3] += (float)0.06728045325779036;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9939393939393939;
            result[1] += (float)0;
            result[2] += (float)0.0031565656565656565;
            result[3] += (float)0.001893939393939394;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00101010101010101;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += (float)0.392081736909323;
            result[1] += (float)0;
            result[2] += (float)0.0076628352490421435;
            result[3] += (float)0.5977011494252873;
            result[4] += (float)0;
            result[5] += (float)0.0025542784163473816;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.00411522633744856;
            result[1] += (float)0;
            result[2] += (float)0.011522633744855968;
            result[3] += (float)0.9843621399176955;
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
            result[0] += (float)0.3945945945945946;
            result[1] += (float)0;
            result[2] += (float)0.15675675675675677;
            result[3] += (float)0.44324324324324327;
            result[4] += (float)0;
            result[5] += (float)0.005405405405405406;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.27906976744186046;
            result[1] += (float)0;
            result[2] += (float)0.023255813953488372;
            result[3] += (float)0.6976744186046512;
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
            result[0] += (float)0;
            result[1] += (float)0.015444015444015444;
            result[2] += (float)0;
            result[3] += (float)0.9845559845559846;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6027397260273972;
            result[4] += (float)0.3972602739726027;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.3076923076923077;
            result[4] += (float)0.6923076923076923;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
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
            result[0] += (float)0.996594778660613;
            result[1] += (float)0;
            result[2] += (float)0.00340522133938706;
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
            result[0] += (float)0.9736842105263158;
            result[1] += (float)0;
            result[2] += (float)0.015789473684210527;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.010526315789473684;
          }
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
            result[0] += (float)0.9976234486400845;
            result[1] += (float)0;
            result[2] += (float)0.0023765513599155004;
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
            result[0] += (float)0.01;
            result[1] += (float)0.01;
            result[2] += (float)0;
            result[3] += (float)0.975;
            result[4] += (float)0;
            result[5] += (float)0.005;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += (float)0.029197080291970802;
            result[1] += (float)0.0060111635895234005;
            result[2] += (float)0.006869901245169601;
            result[3] += (float)0.9531987977672821;
            result[4] += (float)0.0030055817947617003;
            result[5] += (float)0.0017174753112924003;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.044733044733044736;
            result[3] += (float)0.5339105339105339;
            result[4] += (float)0.417027417027417;
            result[5] += (float)0.004329004329004329;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0.834070796460177;
            result[1] += (float)0;
            result[2] += (float)0.01327433628318584;
            result[3] += (float)0.1504424778761062;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0022123893805309734;
          } else {
            result[0] += (float)0.9929103154909606;
            result[1] += (float)0;
            result[2] += (float)0.0037220843672456576;
            result[3] += (float)0.0024813895781637717;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008862105636299185;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += (float)0.0024067388688327317;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9975932611311673;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9873976055450536;
            result[1] += (float)0;
            result[2] += (float)0.009451795841209832;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0031505986137366103;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8971428571428571;
            result[1] += (float)0;
            result[2] += (float)0.10285714285714286;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-19) ) ) {
            result[0] += (float)0.1930232558139535;
            result[1] += (float)0.013953488372093023;
            result[2] += (float)0;
            result[3] += (float)0.7930232558139535;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-15) ) ) {
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
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.031578947368421054;
            result[1] += (float)0.09473684210526316;
            result[2] += (float)0;
            result[3] += (float)0.8736842105263158;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.004570383912248629;
            result[2] += (float)0.018281535648994516;
            result[3] += (float)0.9771480804387569;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.02702702702702703;
            result[4] += (float)0.972972972972973;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)114) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.13478260869565217;
            result[1] += (float)0.004347826086956522;
            result[2] += (float)0;
            result[3] += (float)0.8608695652173913;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.29931972789115646;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7006802721088435;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-103) ) ) {
            result[0] += (float)0.5;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.010582010582010581;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9894179894179894;
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += (float)0.0013755158184319122;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9924346629986246;
            result[4] += (float)0.0013755158184319122;
            result[5] += (float)0.004814305364511693;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8793103448275863;
            result[1] += (float)0;
            result[2] += (float)0.08620689655172416;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.03448275862068966;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += (float)0.9873949579831933;
            result[1] += (float)0.002965892239248641;
            result[2] += (float)0.002718734552644587;
            result[3] += (float)0.006426099851705388;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0004943153732081067;
          } else {
            result[0] += (float)0.9986360342696388;
            result[1] += (float)0.00012787178722134605;
            result[2] += (float)0.0007246067942542942;
            result[3] += (float)0.0005114871488853842;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += (float)0.6;
            result[1] += (float)0;
            result[2] += (float)0.13333333333333333;
            result[3] += (float)0.26666666666666666;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.1038961038961039;
            result[3] += (float)0.8961038961038961;
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.025974025974025976;
            result[3] += (float)0;
            result[4] += (float)0.974025974025974;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.010294639687610933;
            result[1] += (float)0;
            result[2] += (float)0.002129925452609159;
            result[3] += (float)0.9875754348597799;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9368932038834952;
            result[4] += (float)0.04854368932038835;
            result[5] += (float)0.014563106796116505;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.989322191272052;
            result[1] += (float)0;
            result[2] += (float)0.009285051067780872;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001392757660167131;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84) ) ) {
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)184) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.02564102564102564;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9743589743589743;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.33333333333333337;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5000000000000001;
            result[4] += (float)0.16666666666666669;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.015132408575031526;
            result[3] += (float)0.9836065573770492;
            result[4] += (float)0.0012610340479192938;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
            result[0] += (float)0.16383701188455008;
            result[1] += (float)0.0050933786078098476;
            result[2] += (float)0;
            result[3] += (float)0.8285229202037352;
            result[4] += (float)0.0025466893039049238;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.39285714285714285;
            result[4] += (float)0.6071428571428571;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.2222222222222222;
            result[1] += (float)0;
            result[2] += (float)0.7777777777777778;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9690721649484536;
            result[1] += (float)0;
            result[2] += (float)0.027491408934707903;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.003436426116838488;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9968287526427061;
            result[1] += (float)0;
            result[2] += (float)0.003171247357293869;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += (float)0.999444521594223;
            result[1] += (float)0;
            result[2] += (float)0.0005554784057769754;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
            result[0] += (float)0.9979765277215702;
            result[1] += (float)0;
            result[2] += (float)0.0020234722784297854;
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
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)9.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.6248122559327126;
            result[1] += (float)0.002703514568939622;
            result[2] += (float)0.00901171522979874;
            result[3] += (float)0.3418443977170322;
            result[4] += (float)0.020576749774707123;
            result[5] += (float)0;
            result[6] += (float)0.001051366776809853;
          } else {
            result[0] += (float)0.6761626491356221;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.28268809349890434;
            result[4] += (float)0.04041879717555393;
            result[5] += (float)0.00024348672997321646;
            result[6] += (float)0.0004869734599464329;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
            result[0] += (float)0.018925056775170326;
            result[1] += (float)0;
            result[2] += (float)0.014383043149129448;
            result[3] += (float)0.8599545798637396;
            result[4] += (float)0.10673732021196064;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9920424403183024;
            result[5] += (float)0.007957559681697613;
            result[6] += (float)0;
          }
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += (float)0.9977628635346756;
            result[1] += (float)0;
            result[2] += (float)0.0022371364653243847;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
            result[0] += (float)0.8719912472647703;
            result[1] += (float)0.015317286652078774;
            result[2] += (float)0.005470459518599562;
            result[3] += (float)0.10284463894967177;
            result[4] += (float)0;
            result[5] += (float)0.0032822757111597373;
            result[6] += (float)0.0010940919037199124;
          } else {
            result[0] += (float)0.7768331562167906;
            result[1] += (float)0;
            result[2] += (float)0.0021253985122210413;
            result[3] += (float)0.21944739638682254;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001594048884165781;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.21511627906976744;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7848837209302325;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.96;
            result[1] += (float)0.006666666666666667;
            result[2] += (float)0;
            result[3] += (float)0.02;
            result[4] += (float)0.006666666666666667;
            result[5] += (float)0.006666666666666667;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9965194692190559;
            result[1] += (float)0.00043506634761801175;
            result[2] += (float)0.0013051990428540352;
            result[3] += (float)0.0014139656297585382;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0003262997607135088;
          } else {
            result[0] += (float)0.999790121729397;
            result[1] += (float)0;
            result[2] += (float)0.00020987827060305023;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += (float)0.0625;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9375;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5050505050505051;
            result[1] += (float)0;
            result[2] += (float)0.02904040404040404;
            result[3] += (float)0.4659090909090909;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += (float)0.05351976856316297;
            result[1] += (float)0;
            result[2] += (float)0.012054001928640309;
            result[3] += (float)0.899228543876567;
            result[4] += (float)0.0351976856316297;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.505;
            result[1] += (float)0.035;
            result[2] += (float)0;
            result[3] += (float)0.46;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.17647058823529413;
            result[1] += (float)0.7058823529411765;
            result[2] += (float)0;
            result[3] += (float)0.11764705882352941;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0.0963963963963964;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9036036036036036;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.1267605633802817;
            result[3] += (float)0;
            result[4] += (float)0.8732394366197183;
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0007117437722419929;
            result[3] += (float)0.7252669039145907;
            result[4] += (float)0.27402135231316727;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.8432510885341074;
            result[4] += (float)0.1567489114658926;
            result[5] += (float)0;
            result[6] += (float)0;
          }
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
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
            result[0] += (float)0.9478260869565217;
            result[1] += (float)0;
            result[2] += (float)0.04695652173913043;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0052173913043478265;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
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
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.027777777777777776;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-22.5) ) ) {
            result[0] += (float)0.20833333333333334;
            result[1] += (float)0;
            result[2] += (float)0.2708333333333333;
            result[3] += (float)0.5208333333333334;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.20603015075376885;
            result[1] += (float)0;
            result[2] += (float)0.020100502512562814;
            result[3] += (float)0.7688442211055276;
            result[4] += (float)0.005025125628140704;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)0.9776773099745691;
            result[1] += (float)0;
            result[2] += (float)0.0012715456343599886;
            result[3] += (float)0.021051144391070923;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.6854460093896714;
            result[1] += (float)0;
            result[2] += (float)0.009076682316118936;
            result[3] += (float)0.3029733959311424;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0025039123630672924;
          }
        }
      }
    } else {
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
            result[0] += (float)0.995280545359203;
            result[1] += (float)0;
            result[2] += (float)0.004195070791819612;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005243838489774515;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += (float)0.9309551208285386;
            result[1] += (float)0.0017261219792865361;
            result[2] += (float)0;
            result[3] += (float)0.06731875719217491;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.381342062193126;
            result[1] += (float)0;
            result[2] += (float)0.0028641571194762683;
            result[3] += (float)0.6157937806873978;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.043478260869565216;
            result[2] += (float)0;
            result[3] += (float)0.5953177257525084;
            result[4] += (float)0.34448160535117056;
            result[5] += (float)0.016722408026755852;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9188750676041103;
            result[1] += (float)0;
            result[2] += (float)0.006489994591671174;
            result[3] += (float)0.07409410492157924;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005408328826392645;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
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
            result[1] += (float)0.14634146341463414;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.8292682926829268;
            result[5] += (float)0.024390243902439025;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0008006405124099279;
            result[2] += (float)0;
            result[3] += (float)0.9991993594875901;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.006271379703534778;
            result[2] += (float)0.009122006841505131;
            result[3] += (float)0.9846066134549601;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
            result[0] += (float)0.9354838709677419;
            result[1] += (float)0.06451612903225806;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.44642857142857145;
            result[3] += (float)0.5357142857142857;
            result[4] += (float)0;
            result[5] += (float)0.017857142857142856;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += (float)0.8478260869565217;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.15217391304347827;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
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
  }
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
            result[1] += (float)0.002702702702702703;
            result[2] += (float)0;
            result[3] += (float)0.9918918918918919;
            result[4] += (float)0;
            result[5] += (float)0.005405405405405406;
            result[6] += (float)0;
          }
        } else {
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
            result[2] += (float)0.8571428571428571;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.14285714285714285;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.9639126305792972;
            result[1] += (float)0;
            result[2] += (float)0.03608736942070275;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9982394366197183;
            result[1] += (float)0;
            result[2] += (float)0.0017605633802816902;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += (float)0.9918601145613506;
            result[1] += (float)0.004220681338558939;
            result[2] += (float)0.0021103406692794696;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0018088634308109737;
          } else {
            result[0] += (float)0.9990371569871767;
            result[1] += (float)4.3765591491969016e-05;
            result[2] += (float)0.0008315462383474113;
            result[3] += (float)8.753118298393803e-05;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.06611570247933884;
            result[2] += (float)0;
            result[3] += (float)0.9338842975206612;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0.004761904761904762;
            result[1] += (float)0;
            result[2] += (float)0.0380952380952381;
            result[3] += (float)0.9571428571428572;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9198015708970649;
            result[1] += (float)0;
            result[2] += (float)0.0045473336089293095;
            result[3] += (float)0.07399751963621332;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0016535758577924762;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.020905923344947737;
            result[3] += (float)0.9790940766550522;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0019056693663649356;
            result[3] += (float)0.9980943306336351;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9930348258706468;
            result[1] += (float)0;
            result[2] += (float)0.005472636815920399;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001492537313432836;
          } else {
            result[0] += (float)0.9991528295493053;
            result[1] += (float)0;
            result[2] += (float)0.0008471704506946798;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.019255455712451863;
            result[2] += (float)0;
            result[3] += (float)0.9768934531450578;
            result[4] += (float)0;
            result[5] += (float)0.0038510911424903724;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.997040872942482;
            result[1] += (float)0;
            result[2] += (float)0.002219345293138524;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.000739781764379508;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0.1488862837045721;
            result[1] += (float)0;
            result[2] += (float)0.01406799531066823;
            result[3] += (float)0.7561547479484173;
            result[4] += (float)0.08089097303634232;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.17320703653585928;
            result[1] += (float)0;
            result[2] += (float)0.02097428958051421;
            result[3] += (float)0.6732070365358592;
            result[4] += (float)0.13261163734776726;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9975878704341833;
            result[4] += (float)0.0017229496898690559;
            result[5] += (float)0.0006891798759476223;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.034013605442176874;
            result[3] += (float)0;
            result[4] += (float)0.9659863945578231;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += (float)0.9842442146725751;
            result[1] += (float)0;
            result[2] += (float)0.012309207287050714;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0034465780403741997;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.7379310344827587;
            result[1] += (float)0;
            result[2] += (float)0.0896551724137931;
            result[3] += (float)0.1724137931034483;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0106951871657754;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9893048128342246;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10747.5) ) ) {
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
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.002379819133745835;
            result[2] += (float)0.007615421227986673;
            result[3] += (float)0.9900047596382675;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.25;
            result[1] += (float)0.011363636363636364;
            result[2] += (float)0.022727272727272728;
            result[3] += (float)0.7159090909090909;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += (float)0.9976689976689976;
            result[1] += (float)0;
            result[2] += (float)0.002331002331002331;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            result[0] += (float)0.9625;
            result[1] += (float)0;
            result[2] += (float)0.0375;
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
            result[0] += (float)0.9910269192422732;
            result[1] += (float)0;
            result[2] += (float)0.00897308075772682;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.9991193306913254;
            result[1] += (float)0;
            result[2] += (float)0.0008806693086745927;
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
            result[0] += (float)0.25;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.75;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0049261083743842365;
            result[2] += (float)0;
            result[3] += (float)0.9950738916256158;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.012345679012345678;
            result[2] += (float)0.010167029774872912;
            result[3] += (float)0.934640522875817;
            result[4] += (float)0.04066811909949165;
            result[5] += (float)0.002178649237472767;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9720943613348677;
            result[1] += (float)0;
            result[2] += (float)0.0044591484464902185;
            result[3] += (float)0.022295742232451093;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0011507479861910242;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0074866310160427805;
            result[3] += (float)0.9925133689839573;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.5;
            result[3] += (float)0;
            result[4] += (float)0.4;
            result[5] += (float)0.1;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.9993276463419759;
            result[1] += (float)0;
            result[2] += (float)0.0006303315543976131;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)4.202210362650754e-05;
          } else {
            result[0] += (float)0.9619732785200411;
            result[1] += (float)0.003083247687564234;
            result[2] += (float)0;
            result[3] += (float)0.03494347379239465;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += (float)0.002314814814814815;
            result[1] += (float)0.02777777777777778;
            result[2] += (float)0;
            result[3] += (float)0.962962962962963;
            result[4] += (float)0;
            result[5] += (float)0.006944444444444445;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9981994958588405;
            result[1] += (float)0;
            result[2] += (float)0.0014404033129276198;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00036010082823190496;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9534358047016275;
            result[1] += (float)0;
            result[2] += (float)0.009041591320072333;
            result[3] += (float)0.03616636528028933;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00135623869801085;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.011115095016134816;
            result[3] += (float)0.9566152742918609;
            result[4] += (float)0.0322696306920043;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.20000000000000004;
            result[2] += (float)0.7000000000000001;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.10000000000000002;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.005929439667951379;
            result[1] += (float)0.0011858879335902757;
            result[2] += (float)0.008004743551734361;
            result[3] += (float)0.9831010969463386;
            result[4] += (float)0;
            result[5] += (float)0.0017788319003854136;
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
            result[0] += (float)0;
            result[1] += (float)0.7272727272727273;
            result[2] += (float)0;
            result[3] += (float)0.2727272727272727;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8648648648648649;
            result[1] += (float)0;
            result[2] += (float)0.13513513513513514;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
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
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            result[0] += (float)0.00031959092361776926;
            result[1] += (float)0.0006391818472355385;
            result[2] += (float)0;
            result[3] += (float)0.9980824544582934;
            result[4] += (float)0;
            result[5] += (float)0.0009587727708533077;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.8947368421052632;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.10526315789473684;
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
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.034013605442176874;
            result[2] += (float)0;
            result[3] += (float)0.9659863945578231;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
            result[0] += (float)0.9881450488145049;
            result[1] += (float)0.003486750348675035;
            result[2] += (float)0.007438400743840074;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0009298000929800093;
          } else {
            result[0] += (float)0.9995327102803738;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00046728971962616824;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0.9994195608010061;
            result[1] += (float)9.673986649898423e-05;
            result[2] += (float)0.0003385895327464448;
            result[3] += (float)0.00014510979974847636;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.972027972027972;
            result[1] += (float)0;
            result[2] += (float)0.026223776223776224;
            result[3] += (float)0.0017482517482517483;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += (float)0.25851318944844126;
            result[1] += (float)0;
            result[2] += (float)0.0016786570743405275;
            result[3] += (float)0.7398081534772182;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9665809768637532;
            result[1] += (float)0;
            result[2] += (float)0.024850042844901457;
            result[3] += (float)0.004284490145672665;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.004284490145672665;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)68) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += (float)0.0009149130832570906;
            result[1] += (float)0.0004574565416285453;
            result[2] += (float)0;
            result[3] += (float)0.9977127172918573;
            result[4] += (float)0.0009149130832570906;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.1111111111111111;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.8888888888888888;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0213903743315508;
            result[3] += (float)0;
            result[4] += (float)0.9786096256684492;
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9671232876712329;
            result[1] += (float)0;
            result[2] += (float)0.03287671232876712;
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
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9971856074100464;
            result[1] += (float)0.0004275026718916993;
            result[2] += (float)0.0012468827930174563;
            result[3] += (float)0.0009262557890986819;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00021375133594584965;
          } else {
            result[0] += (float)0.8529411764705882;
            result[1] += (float)0;
            result[2] += (float)0.14705882352941177;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
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
            result[0] += (float)0.8994661921708185;
            result[1] += (float)0;
            result[2] += (float)0.010231316725978648;
            result[3] += (float)0.08807829181494661;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.002224199288256228;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.005357142857142857;
            result[3] += (float)0.9946428571428572;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
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
            result[3] += (float)0.6833333333333333;
            result[4] += (float)0.31666666666666665;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.006072874493927126;
            result[2] += (float)0;
            result[3] += (float)0.9939271255060729;
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7368421052631579;
            result[1] += (float)0;
            result[2] += (float)0.2631578947368421;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-130) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.106;
            result[4] += (float)0.894;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.011603375527426161;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9883966244725738;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)3.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.007183364839319471;
            result[3] += (float)0.9920604914933837;
            result[4] += (float)0;
            result[5] += (float)0.0007561436672967864;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
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
            result[3] += (float)0.6111111111111112;
            result[4] += (float)0;
            result[5] += (float)0.3888888888888889;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
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
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
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
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-12.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)0.9842440496144821;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.015755950385517935;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8001907486886027;
            result[1] += (float)0;
            result[2] += (float)0.004291845493562232;
            result[3] += (float)0.195517405817835;
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
            result[0] += (float)0.6863860447478196;
            result[1] += (float)0;
            result[2] += (float)0.010618126659082293;
            result[3] += (float)0.29920364050056886;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0037921880925293897;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9901269393511989;
            result[1] += (float)0;
            result[2] += (float)0.0028208744710860366;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.007052186177715092;
          } else {
            result[0] += (float)0.9990396158463385;
            result[1] += (float)0.00012004801920768308;
            result[2] += (float)0.0008403361344537816;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.9952352590827874;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.004764740917212627;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.35;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.65;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.8417495029821074;
            result[1] += (float)0.006759443339960238;
            result[2] += (float)0.016302186878727636;
            result[3] += (float)0.13479125248508947;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00039761431411530816;
          } else {
            result[0] += (float)0.028368794326241134;
            result[1] += (float)0;
            result[2] += (float)0.0006447453255963894;
            result[3] += (float)0.9709864603481625;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0.9849246231155779;
            result[1] += (float)0;
            result[2] += (float)0.0023555276381909546;
            result[3] += (float)0.012719849246231155;
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
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
            result[0] += (float)0.8985507246376813;
            result[1] += (float)0;
            result[2] += (float)0.08695652173913045;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.014492753623188408;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9436619718309859;
            result[1] += (float)0;
            result[2] += (float)0.056338028169014086;
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
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.984251968503937;
            result[1] += (float)0;
            result[2] += (float)0.015748031496062992;
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
            result[0] += (float)0.998015873015873;
            result[1] += (float)0;
            result[2] += (float)0.001984126984126984;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += (float)0.9998594123435962;
            result[1] += (float)0;
            result[2] += (float)0.00014058765640376775;
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
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)0.535031847133758;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.445859872611465;
            result[4] += (float)0.01910828025477707;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.003991403131716303;
            result[1] += (float)0.006754682222904513;
            result[2] += (float)0.00828983727356463;
            result[3] += (float)0.961007061713233;
            result[4] += (float)0.018114829597789376;
            result[5] += (float)0.00184218606079214;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.006;
            result[2] += (float)0;
            result[3] += (float)0.48;
            result[4] += (float)0.514;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.031420765027322405;
            result[4] += (float)0.9685792349726776;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += (float)0.9959465545713857;
            result[1] += (float)0;
            result[2] += (float)0.002402041735475154;
            result[3] += (float)0.0006005104338687885;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00105089325927038;
          } else {
            result[0] += (float)0.9455252918287939;
            result[1] += (float)0;
            result[2] += (float)0.014267185473411156;
            result[3] += (float)0.031128404669260704;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.009079118028534373;
          }
        } else {
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
            result[2] += (float)0.21052631578947367;
            result[3] += (float)0.7894736842105263;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.010471204188481676;
            result[2] += (float)0;
            result[3] += (float)0.9895287958115183;
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
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.7;
            result[5] += (float)0.3;
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
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9503835091083414;
            result[1] += (float)0;
            result[2] += (float)0.0014381591562799617;
            result[3] += (float)0.048178331735378714;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.40252707581227437;
            result[1] += (float)0;
            result[2] += (float)0.03429602888086643;
            result[3] += (float)0.5631768953068592;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
            result[0] += (float)0.07407407407407407;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9259259259259259;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.017094017094017096;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.008547008547008548;
            result[4] += (float)0.9743589743589743;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.2573099415204678;
            result[1] += (float)0;
            result[2] += (float)0.008187134502923977;
            result[3] += (float)0.7309941520467836;
            result[4] += (float)0;
            result[5] += (float)0.0035087719298245615;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9973890339425587;
            result[1] += (float)0;
            result[2] += (float)0.0026109660574412533;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
            result[0] += (float)0.006363636363636364;
            result[1] += (float)0;
            result[2] += (float)0.011818181818181818;
            result[3] += (float)0.7981818181818182;
            result[4] += (float)0.18363636363636363;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.05217391304347826;
            result[2] += (float)0;
            result[3] += (float)0.2;
            result[4] += (float)0.7478260869565218;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.5690376569037657;
            result[1] += (float)0;
            result[2] += (float)0.003486750348675035;
            result[3] += (float)0.42747559274755925;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9652278177458035;
            result[1] += (float)0;
            result[2] += (float)0.021582733812949645;
            result[3] += (float)0.00839328537170264;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.004796163069544365;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
            result[0] += (float)0.0026690391459074734;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9919928825622776;
            result[4] += (float)0.0008896797153024911;
            result[5] += (float)0.004448398576512456;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.006361323155216285;
            result[3] += (float)0.8562340966921119;
            result[4] += (float)0.13740458015267176;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
            result[0] += (float)0.9956616052060737;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.004338394793926247;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0017421602787456446;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9982578397212544;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.48598130841121495;
            result[4] += (float)0.514018691588785;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.9988178795714814;
            result[1] += (float)0;
            result[2] += (float)0.0010343553749538235;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0001477650535648319;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += (float)0.9498956158663883;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.05010438413361169;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.43859649122807015;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5614035087719298;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += (float)0.9868852459016394;
            result[1] += (float)0;
            result[2] += (float)0.013114754098360656;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9143700787401573;
            result[1] += (float)0.0025590551181102358;
            result[2] += (float)0.012401574803149603;
            result[3] += (float)0.07047244094488188;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00019685039370078734;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0005963029218843172;
            result[3] += (float)0.9994036970781157;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.017758046614872364;
            result[3] += (float)0.9800221975582686;
            result[4] += (float)0;
            result[5] += (float)0.0022197558268590455;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
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
            result[0] += (float)0.0007645259938837921;
            result[1] += (float)0.0015290519877675841;
            result[2] += (float)0.008409785932721712;
            result[3] += (float)0.9831804281345565;
            result[4] += (float)0;
            result[5] += (float)0.0061162079510703364;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += (float)0.9923664122137404;
            result[1] += (float)0;
            result[2] += (float)0.007633587786259542;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.027210884353741496;
            result[3] += (float)0.9727891156462585;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += (float)0.9975519314540807;
            result[1] += (float)0.0003960110883104727;
            result[2] += (float)0.0010800302408467436;
            result[3] += (float)0.0008280231846491702;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00014400403211289916;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.5277777777777778;
            result[3] += (float)0.4722222222222222;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.006622516556291391;
            result[3] += (float)0.9933774834437086;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9850313858039594;
            result[1] += (float)0;
            result[2] += (float)0.009657170449058426;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.005311443746982134;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
            result[0] += (float)0.6982758620689655;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.3017241379310345;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.4161073825503356;
            result[1] += (float)0;
            result[2] += (float)0.040268456375838924;
            result[3] += (float)0.5436241610738255;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0011098779134295228;
            result[2] += (float)0;
            result[3] += (float)0.9988901220865705;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.1111111111111111;
            result[1] += (float)0.4444444444444444;
            result[2] += (float)0;
            result[3] += (float)0.4444444444444444;
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)198) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.016194331983805668;
            result[2] += (float)0;
            result[3] += (float)0.010121457489878543;
            result[4] += (float)0.9736842105263158;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.33333333333333337;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5000000000000001;
            result[4] += (float)0.16666666666666669;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
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
            result[0] += (float)0.9875706214689266;
            result[1] += (float)0;
            result[2] += (float)0.00903954802259887;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.003389830508474576;
          } else {
            result[0] += (float)0.9991073022674523;
            result[1] += (float)0;
            result[2] += (float)0.0008926977325477593;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9954545454545455;
            result[1] += (float)0;
            result[2] += (float)0.004545454545454545;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            result[0] += (float)0.06533575317604355;
            result[1] += (float)0.014519056261343012;
            result[2] += (float)0;
            result[3] += (float)0.9183303085299456;
            result[4] += (float)0;
            result[5] += (float)0.0018148820326678765;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.04838709677419355;
            result[3] += (float)0;
            result[4] += (float)0.9516129032258065;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += (float)0.002313030069390902;
            result[1] += (float)0.001156515034695451;
            result[2] += (float)0.009252120277563608;
            result[3] += (float)0.979568234387047;
            result[4] += (float)0.006168080185042405;
            result[5] += (float)0.0015420200462606013;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5793103448275863;
            result[4] += (float)0.4206896551724138;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.02909090909090909;
            result[2] += (float)0;
            result[3] += (float)0.08727272727272728;
            result[4] += (float)0.8836363636363637;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.991869918699187;
            result[4] += (float)0.008130081300813009;
            result[5] += (float)0;
            result[6] += (float)0;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.06132075471698113;
            result[4] += (float)0.9386792452830188;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.981129669769221;
            result[1] += (float)0;
            result[2] += (float)0.007140124952186663;
            result[3] += (float)0.010327680734412852;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001402524544179523;
          } else {
            result[0] += (float)0.7831325301204819;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.21686746987951808;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
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
            result[0] += (float)0.9943727242634889;
            result[1] += (float)0;
            result[2] += (float)0.005627275736511089;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.989010989010989;
            result[5] += (float)0.01098901098901099;
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-52.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.018706157443491817;
            result[1] += (float)0.0059755780722265525;
            result[2] += (float)0.011951156144453105;
            result[3] += (float)0.9625876851130164;
            result[4] += (float)0;
            result[5] += (float)0.000779423226812159;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
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
            result[1] += (float)0.007259528130671506;
            result[2] += (float)0;
            result[3] += (float)0.023593466424682397;
            result[4] += (float)0.969147005444646;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0.8393574297188755;
            result[1] += (float)0;
            result[2] += (float)0.004016064257028112;
            result[3] += (float)0.15528781793842034;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0013386880856760374;
          } else {
            result[0] += (float)0.4374572795625427;
            result[1] += (float)0;
            result[2] += (float)0.0003417634996582365;
            result[3] += (float)0.5615174299384825;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.000683526999316473;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += (float)0.9652943177951685;
            result[1] += (float)0;
            result[2] += (float)0.01156856073494386;
            result[3] += (float)0.02313712146988772;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.7404255319148936;
            result[1] += (float)0;
            result[2] += (float)0.059574468085106386;
            result[3] += (float)0.17446808510638298;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.02553191489361702;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += (float)0.9952861952861953;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.003367003367003367;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0013468013468013469;
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0012694382735639479;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9965090447476992;
            result[4] += (float)0.0012694382735639479;
            result[5] += (float)0.000952078705172961;
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
            result[1] += (float)0.007623888182973317;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9923761118170267;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.9976117242627104;
            result[1] += (float)0.0004704179482540257;
            result[2] += (float)0.0018092998009770218;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00010855798805862131;
          } else {
            result[0] += (float)0.9439655172413793;
            result[1] += (float)0;
            result[2] += (float)0.05603448275862069;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9615384615384616;
            result[1] += (float)0.038461538461538464;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
            result[0] += (float)0.71875;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.28125;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9814814814814815;
            result[1] += (float)0;
            result[2] += (float)0.018518518518518517;
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
            result[0] += (float)0.0006557377049180328;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9967213114754099;
            result[4] += (float)0.0013114754098360656;
            result[5] += (float)0.0013114754098360656;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.5116279069767442;
            result[1] += (float)0;
            result[2] += (float)0.4883720930232558;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += (float)0.8663594470046083;
            result[1] += (float)0;
            result[2] += (float)0.10599078341013825;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.027649769585253458;
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.010638297872340425;
            result[3] += (float)0.9893617021276596;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += (float)0.926829268292683;
            result[1] += (float)0.07317073170731707;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9735449735449735;
            result[1] += (float)0;
            result[2] += (float)0.026455026455026454;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.016304347826086956;
            result[1] += (float)0.059782608695652176;
            result[2] += (float)0;
            result[3] += (float)0.010869565217391304;
            result[4] += (float)0.9130434782608695;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)0.7603305785123967;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2396694214876033;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.4782608695652174;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.5217391304347826;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.05263157894736842;
            result[3] += (float)0.9473684210526315;
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
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += (float)0.9515267175572519;
            result[1] += (float)0.002035623409669211;
            result[2] += (float)0.0029262086513994912;
            result[3] += (float)0.042748091603053436;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0007633587786259542;
          } else {
            result[0] += (float)0.9986899123249018;
            result[1] += (float)0.0001511639625113373;
            result[2] += (float)0.0004031039000302328;
            result[3] += (float)0.0006550438375491283;
            result[4] += (float)0.0001007759750075582;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)28) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.42105263157894735;
            result[1] += (float)0;
            result[2] += (float)0.5614035087719298;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.017543859649122806;
            result[6] += (float)0;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0.9554140127388535;
            result[1] += (float)0;
            result[2] += (float)0.0373066424021838;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.007279344858962694;
          } else {
            result[0] += (float)0.9956483899042644;
            result[1] += (float)0;
            result[2] += (float)0.0017406440382941684;
            result[3] += (float)0.0017406440382941684;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008703220191470842;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.0015479876160990713;
            result[3] += (float)0;
            result[4] += (float)0.9984520123839009;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += (float)0.14285714285714285;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.6428571428571429;
            result[5] += (float)0.21428571428571427;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0006174745291756715;
            result[1] += (float)0.0006174745291756715;
            result[2] += (float)0;
            result[3] += (float)0.998147576412473;
            result[4] += (float)0;
            result[5] += (float)0.0006174745291756715;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
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
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.01361573373676248;
            result[3] += (float)0;
            result[4] += (float)0.9848714069591528;
            result[5] += (float)0.0015128593040847202;
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0.9941826643397325;
            result[1] += (float)0.0023269342641070393;
            result[2] += (float)0;
            result[3] += (float)0.003490401396160559;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9993031358885017;
            result[1] += (float)0;
            result[2] += (float)0.0004645760743321719;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00023228803716608595;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += (float)0.9996993385447985;
            result[1] += (float)0;
            result[2] += (float)0.0003006614552014432;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0.13580246913580246;
            result[1] += (float)0.02880658436213992;
            result[2] += (float)0.06995884773662552;
            result[3] += (float)0.7654320987654321;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9383846794338052;
            result[1] += (float)0;
            result[2] += (float)0.004079933388842631;
            result[3] += (float)0.05695253955037469;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0005828476269775188;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += (float)0.28453829634932;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7154617036506801;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9900497512437811;
            result[1] += (float)0;
            result[2] += (float)0.008528784648187633;
            result[3] += (float)0.0014214641080312722;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.043478260869565216;
            result[2] += (float)0;
            result[3] += (float)0.9565217391304348;
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.05;
            result[2] += (float)0;
            result[3] += (float)0.95;
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
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)185.5) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0045627376425855515;
            result[2] += (float)0;
            result[3] += (float)0.9946768060836502;
            result[4] += (float)0.0007604562737642585;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.028708133971291867;
            result[1] += (float)0;
            result[2] += (float)0.04066985645933014;
            result[3] += (float)0.930622009569378;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.005263157894736842;
            result[3] += (float)0.9947368421052631;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.04735062006764374;
            result[4] += (float)0.9526493799323562;
            result[5] += (float)0;
            result[6] += (float)0;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.07692307692307693;
            result[1] += (float)0;
            result[2] += (float)0.9230769230769231;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
            result[0] += (float)0.9949348769898697;
            result[1] += (float)0;
            result[2] += (float)0.005065123010130246;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9991720997619786;
            result[1] += (float)0;
            result[2] += (float)0.0008279002380213184;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += (float)0.005;
            result[1] += (float)0.005;
            result[2] += (float)0;
            result[3] += (float)0.97;
            result[4] += (float)0.01;
            result[5] += (float)0.01;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)0.6787280701754387;
            result[1] += (float)0.001754385964912281;
            result[2] += (float)0.0026315789473684214;
            result[3] += (float)0.3135964912280702;
            result[4] += (float)0.0013157894736842107;
            result[5] += (float)0.0010964912280701756;
            result[6] += (float)0.0008771929824561405;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.014456316781898178;
            result[3] += (float)0.93463230672533;
            result[4] += (float)0.05028284098051541;
            result[5] += (float)0.0006285355122564426;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53) ) ) {
            result[0] += (float)0.7642857142857142;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2357142857142857;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9608108108108108;
            result[1] += (float)0;
            result[2] += (float)0.0013513513513513514;
            result[3] += (float)0.03783783783783784;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += (float)0.9938291653134135;
            result[1] += (float)0;
            result[2] += (float)0.004222150048717116;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.001948684637869438;
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
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9848484848484849;
            result[4] += (float)0;
            result[5] += (float)0.015151515151515152;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9986803035301881;
            result[4] += (float)0.0003299241174529858;
            result[5] += (float)0.0009897723523589574;
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.04504504504504505;
            result[3] += (float)0;
            result[4] += (float)0.9523809523809524;
            result[5] += (float)0.0025740025740025744;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
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
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0.9922480620155039;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.007751937984496124;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.951048951048951;
            result[1] += (float)0.017482517482517484;
            result[2] += (float)0.013986013986013986;
            result[3] += (float)0.017482517482517484;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += (float)0.9973961198518356;
            result[1] += (float)0.0002933949462720505;
            result[2] += (float)0.0021271133604723663;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00018337184142003157;
          } else {
            result[0] += (float)0.7294117647058823;
            result[1] += (float)0;
            result[2] += (float)0.07058823529411765;
            result[3] += (float)0.2;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.05511811023622047;
            result[2] += (float)0;
            result[3] += (float)0.9448818897637795;
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
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += (float)0.895381715362865;
            result[1] += (float)0;
            result[2] += (float)0.0065975494816211105;
            result[3] += (float)0.09613572101790761;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0018850141376060316;
          } else {
            result[0] += (float)0.050314465408805034;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.949685534591195;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
            result[0] += (float)0.9968592964824121;
            result[1] += (float)0;
            result[2] += (float)0.001884422110552764;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0012562814070351761;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0.0914332784184514;
            result[1] += (float)0;
            result[2] += (float)0.01729818780889621;
            result[3] += (float)0.8912685337726524;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.23825034899953468;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7617496510004653;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
            result[0] += (float)0.7;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.3;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.00032873109796186726;
            result[2] += (float)0;
            result[3] += (float)0.9990138067061145;
            result[4] += (float)0.00032873109796186726;
            result[5] += (float)0.00032873109796186726;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9821428571428571;
            result[5] += (float)0.017857142857142856;
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)117) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)30.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += (float)0.9994383600112328;
            result[1] += (float)0;
            result[2] += (float)0.0005616399887672002;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9913637999280317;
            result[1] += (float)0;
            result[2] += (float)0.0008996041741633681;
            result[3] += (float)0.0077365958978049655;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.05128205128205128;
            result[2] += (float)0;
            result[3] += (float)0.9487179487179487;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += (float)0.5340909090909092;
            result[1] += (float)0.3068181818181819;
            result[2] += (float)0.15909090909090912;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.029649595687331536;
            result[3] += (float)0.9703504043126685;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9655540720961282;
            result[1] += (float)0;
            result[2] += (float)0.005874499332443258;
            result[3] += (float)0.026969292389853138;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0016021361815754338;
          } else {
            result[0] += (float)0.12455003599712024;
            result[1] += (float)0;
            result[2] += (float)0.0003599712023038157;
            result[3] += (float)0.875089992800576;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
            result[0] += (float)0.9959163672002613;
            result[1] += (float)0;
            result[2] += (float)0.003920287487749101;
            result[3] += (float)0.0001633453119895459;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9670298966191674;
            result[1] += (float)0;
            result[2] += (float)0.0044705224923162895;
            result[3] += (float)0.026823134953897737;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0016764459346186086;
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-5.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0003147623544224111;
            result[2] += (float)0;
            result[3] += (float)0.9974819011646208;
            result[4] += (float)0;
            result[5] += (float)0.0022033364809568774;
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
            result[2] += (float)0.014705882352941176;
            result[3] += (float)0;
            result[4] += (float)0.982620320855615;
            result[5] += (float)0.00267379679144385;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            result[0] += (float)0.9787610619469026;
            result[1] += (float)0;
            result[2] += (float)0.021238938053097345;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9966663888657388;
            result[1] += (float)0.0009167430619218269;
            result[2] += (float)0.0018334861238436537;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.000583381948495708;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += (float)0.9998659876708658;
            result[1] += (float)0;
            result[2] += (float)0.00013401232913428035;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9739583333333334;
            result[1] += (float)0;
            result[2] += (float)0.026041666666666668;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += (float)0.22034883720930232;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.7796511627906977;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9886363636363636;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.011363636363636364;
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
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += (float)0.031746031746031744;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9682539682539683;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.8877005347593583;
            result[1] += (float)0;
            result[2] += (float)0.009167303284950344;
            result[3] += (float)0.0962566844919786;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.006875477463712758;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)36) ) ) {
            result[0] += (float)0.9701237729406743;
            result[1] += (float)0;
            result[2] += (float)0.0012804097311139564;
            result[3] += (float)0.028169014084507043;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0004268032437046522;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.052083333333333336;
            result[3] += (float)0.9479166666666666;
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += (float)0.8225806451612904;
            result[1] += (float)0;
            result[2] += (float)0.1774193548387097;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0.9953243717124488;
            result[1] += (float)0;
            result[2] += (float)0.004675628287551139;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9742765273311897;
            result[1] += (float)0;
            result[2] += (float)0.01929260450160772;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.006430868167202572;
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
            result[0] += (float)0.9996922129886119;
            result[1] += (float)0;
            result[2] += (float)0.0003077870113881194;
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
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[4] += (float)0.983739837398374;
            result[5] += (float)0.016260162601626018;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += (float)0.018622448979591838;
            result[1] += (float)0.006122448979591836;
            result[2] += (float)0.009183673469387756;
            result[3] += (float)0.9640306122448979;
            result[4] += (float)0;
            result[5] += (float)0.0020408163265306124;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.9032258064516129;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.0967741935483871;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += (float)0.9936528086321803;
            result[1] += (float)0;
            result[2] += (float)0.003808314820691844;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0025388765471278957;
          } else {
            result[0] += (float)0.004640371229698376;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9953596287703016;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += (float)0.9977011494252873;
            result[1] += (float)0;
            result[2] += (float)0.0022988505747126436;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9399914273467639;
            result[1] += (float)0;
            result[2] += (float)0.013716245177882556;
            result[3] += (float)0.04543506215173597;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008572653236176598;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70) ) ) {
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
            result[0] += (float)0.4;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.6;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.03333333333333333;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0.9666666666666667;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.046242774566473986;
            result[4] += (float)0.953757225433526;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.012091898428053204;
            result[4] += (float)0.9879081015719468;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.27941176470588236;
            result[4] += (float)0.7205882352941176;
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9813953488372094;
            result[1] += (float)0;
            result[2] += (float)0.00930232558139535;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.00930232558139535;
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
            result[0] += (float)0.9988613720466838;
            result[1] += (float)0;
            result[2] += (float)0.001138627953316254;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.02601156069364162;
            result[1] += (float)0;
            result[2] += (float)0.02023121387283237;
            result[3] += (float)0.9508670520231214;
            result[4] += (float)0;
            result[5] += (float)0.002890173410404624;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0014792899408284023;
            result[2] += (float)0;
            result[3] += (float)0.1937869822485207;
            result[4] += (float)0.8047337278106509;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.03602676273803397;
            result[1] += (float)0.004117344312918168;
            result[2] += (float)0.022645393721049924;
            result[3] += (float)0.8394235717961914;
            result[4] += (float)0.09521358723623263;
            result[5] += (float)0.0025733401955738548;
            result[6] += (float)0;
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9841000912289848;
            result[1] += (float)0;
            result[2] += (float)0.005082757721881923;
            result[3] += (float)0.00951387983839437;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0013032712107389549;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.000779423226812159;
            result[3] += (float)0.9992205767731879;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.0019157088122605363;
            result[1] += (float)0.005747126436781609;
            result[2] += (float)0;
            result[3] += (float)0.9923371647509579;
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
            result[1] += (float)0.625;
            result[2] += (float)0;
            result[3] += (float)0.375;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
            result[0] += (float)0.7272727272727273;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.2727272727272727;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.02185792349726776;
            result[4] += (float)0.9781420765027322;
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
            result[0] += (float)0.8554216867469879;
            result[1] += (float)0;
            result[2] += (float)0.14457831325301204;
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
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0.9855421686746988;
            result[1] += (float)0;
            result[2] += (float)0.007228915662650603;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.007228915662650603;
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
            result[0] += (float)0.9938650306748467;
            result[1] += (float)0;
            result[2] += (float)0.006134969325153374;
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9986641731231632;
            result[1] += (float)0;
            result[2] += (float)0.0013358268768367619;
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
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
            result[0] += (float)0.9928774928774929;
            result[1] += (float)0;
            result[2] += (float)0.004273504273504275;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0028490028490028496;
          } else {
            result[0] += (float)0.9047619047619048;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0.09523809523809523;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-32) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.023255813953488372;
            result[4] += (float)0.9767441860465116;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9875776397515528;
            result[4] += (float)0.012422360248447204;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.007846214201647704;
            result[2] += (float)0.010200078462142017;
            result[3] += (float)0.9815613966261278;
            result[4] += (float)0;
            result[5] += (float)0.00039231071008238524;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            result[0] += (float)0.9990044798407167;
            result[1] += (float)0;
            result[2] += (float)0.0009955201592832255;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0.9928;
            result[1] += (float)0;
            result[2] += (float)0.0048;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0024;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.026696329254727477;
            result[3] += (float)0.9666295884315906;
            result[4] += (float)0.0055617352614015575;
            result[5] += (float)0.0011123470522803114;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0.0054525627044711015;
            result[2] += (float)0;
            result[3] += (float)0.0812431842966194;
            result[4] += (float)0.9133042529989095;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += (float)0.9903733955659276;
            result[1] += (float)0;
            result[2] += (float)0.008751458576429404;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0008751458576429405;
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
            result[4] += (float)0.9859154929577465;
            result[5] += (float)0.014084507042253521;
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
            result[2] += (float)0.9375;
            result[3] += (float)0;
            result[4] += (float)0.0625;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
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
            result[0] += (float)0.86;
            result[1] += (float)0;
            result[2] += (float)0.14;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
            result[0] += (float)0;
            result[1] += (float)0.0013914656771799629;
            result[2] += (float)0.0037105751391465678;
            result[3] += (float)0.9948979591836735;
            result[4] += (float)0;
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
            result[0] += (float)0.974025974025974;
            result[1] += (float)0;
            result[2] += (float)0.025974025974025976;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += (float)0.9940298507462687;
            result[1] += (float)0;
            result[2] += (float)0.004477611940298508;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0014925373134328358;
          } else {
            result[0] += (float)0.9992782016910703;
            result[1] += (float)0;
            result[2] += (float)0.0007217983089296762;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0.9776536312849162;
            result[4] += (float)0.01675977653631285;
            result[5] += (float)0.00558659217877095;
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
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)0.9473173436850132;
            result[1] += (float)0.0019409399694995148;
            result[2] += (float)0.003188687092749203;
            result[3] += (float)0.04533481214473867;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0.0022182171079994455;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.010672358591248666;
            result[3] += (float)0.9893276414087513;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.078125;
            result[3] += (float)0;
            result[4] += (float)0.921875;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0.006779661016949152;
            result[3] += (float)0.9898305084745763;
            result[4] += (float)0;
            result[5] += (float)0.003389830508474576;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  result[6] /= 50;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_1/test_data.csv", "r");
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
        
    }
    

    return 0;
}
