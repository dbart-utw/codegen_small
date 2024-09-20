
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
                result[0] += (float)0.037037037037037035;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9629629629629629;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3446601941747573;
                result[1] += (float)0.012944983818770227;
                result[2] += (float)0;
                result[3] += (float)0.6423948220064725;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.44155844155844154;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5584415584415584;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
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
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b00000))) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
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
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
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
                result[3] += (float)0.9976359338061466;
                result[4] += (float)0;
                result[5] += (float)0.002364066193853428;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x423c0000))) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42000000))) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
                result[0] += (float)0.9947908445146014;
                result[1] += (float)0.0011049723756906078;
                result[2] += (float)0.003472770323599053;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0006314127861089187;
              } else {
                result[0] += (float)0.9995132635677781;
                result[1] += (float)0;
                result[2] += (float)0.00043806278899975666;
                result[3] += (float)4.8673643222195186e-05;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
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
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e00000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cc0000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40d00000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
                result[0] += (float)0.39285714285714285;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6071428571428571;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0109204368174727;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9890795631825273;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42680000))) ) ) {
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
                result[4] += (float)0.625;
                result[5] += (float)0.375;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42760000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40800000))) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.962962962962963;
                result[1] += (float)0;
                result[2] += (float)0.02396514161220044;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.013071895424836603;
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
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40e00000))) ) ) {
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
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.014234875444839857;
                result[2] += (float)0;
                result[3] += (float)0.9857651245551602;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0034662045060658577;
                result[3] += (float)0.9965337954939342;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x462dae00))) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ec0000))) ) ) {
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
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42480000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
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
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41a00000))) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42780000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
                result[0] += (float)0.9997341839447103;
                result[1] += (float)0;
                result[2] += (float)0.0002658160552897395;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9903139013452915;
                result[1] += (float)0;
                result[2] += (float)0.0010762331838565023;
                result[3] += (float)0.008609865470852018;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.017241379310344827;
                result[2] += (float)0;
                result[3] += (float)0.9827586206896551;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41200000))) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0030959752321981426;
                result[2] += (float)0;
                result[3] += (float)0.9907120743034056;
                result[4] += (float)0;
                result[5] += (float)0.006191950464396285;
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
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)0.99079754601227;
                result[1] += (float)0;
                result[2] += (float)0.003067484662576687;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006134969325153374;
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41880000))) ) ) {
                result[0] += (float)0.9652509652509653;
                result[1] += (float)0;
                result[2] += (float)0.02316602316602317;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.011583011583011584;
              } else {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
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
                result[2] += (float)0.3898305084745763;
                result[3] += (float)0.6101694915254238;
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
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8571428571428571;
                result[5] += (float)0.14285714285714285;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.017537171178040413;
                result[1] += (float)0.0003812428516965307;
                result[2] += (float)0.004574914220358368;
                result[3] += (float)0.9767441860465116;
                result[4] += (float)0;
                result[5] += (float)0.0007624857033930614;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
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
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.017429193899782137;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9825708061002179;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e00000))) ) ) {
                result[0] += (float)0.9882352941176471;
                result[1] += (float)0;
                result[2] += (float)0.011764705882352941;
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
                result[0] += (float)0.9893238434163701;
                result[1] += (float)0;
                result[2] += (float)0.010676156583629894;
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
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
                result[0] += (float)0.8256880733944955;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.1743119266055046;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9853348090758163;
                result[1] += (float)0;
                result[2] += (float)0.00691754288876591;
                result[3] += (float)0.0063641394576646375;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001383508577753182;
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
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45935c00))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9738562091503268;
                result[1] += (float)0;
                result[2] += (float)0.026143790849673203;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
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
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.9722222222222222;
                result[1] += (float)0;
                result[2] += (float)0.027777777777777776;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.999645599527466;
                result[1] += (float)0;
                result[2] += (float)0.0003544004725339634;
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40600000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7272727272727273;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.2727272727272727;
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
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4613de00))) ) ) {
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
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41cc0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.017524644030668127;
                result[2] += (float)0;
                result[3] += (float)0.9780941949616648;
                result[4] += (float)0;
                result[5] += (float)0.004381161007667032;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.6538461538461539;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.34615384615384615;
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
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
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
                result[2] += (float)0.5714285714285714;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.42857142857142855;
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
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.005050505050505051;
                result[3] += (float)0.9942279942279942;
                result[4] += (float)0;
                result[5] += (float)0.0007215007215007215;
                result[6] += (float)0;
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
                result[0] += (float)0.13513513513513514;
                result[1] += (float)0.16216216216216217;
                result[2] += (float)0.7027027027027027;
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
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
                result[0] += (float)0.9963061465721041;
                result[1] += (float)0;
                result[2] += (float)0.0022163120567375892;
                result[3] += (float)0.0007387706855791963;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007387706855791963;
              } else {
                result[0] += (float)0.9313186813186813;
                result[1] += (float)0;
                result[2] += (float)0.024725274725274724;
                result[3] += (float)0.03983516483516483;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004120879120879121;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
                result[0] += (float)0.35384615384615387;
                result[1] += (float)0;
                result[2] += (float)0.03076923076923077;
                result[3] += (float)0.6153846153846154;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9393939393939394;
                result[1] += (float)0;
                result[2] += (float)0.06060606060606061;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42640000))) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
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
        } else {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41fc0000))) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41600000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.056818181818181816;
                result[3] += (float)0.9431818181818182;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.004164497657470068;
                result[2] += (float)0;
                result[3] += (float)0.9958355023425299;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b00000))) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
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
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.1276595744680851;
                result[3] += (float)0;
                result[4] += (float)0.8723404255319149;
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
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x418c0000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
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
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.00392156862745098;
                result[2] += (float)0;
                result[3] += (float)0.996078431372549;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.875;
                result[2] += (float)0;
                result[3] += (float)0.125;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9964619661359616;
                result[1] += (float)0;
                result[2] += (float)0.0017690169320192064;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0017690169320192064;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
                result[0] += (float)0.9975843326719006;
                result[1] += (float)0.0004313691657320335;
                result[2] += (float)0.001121559830903287;
                result[3] += (float)0.0007764644983176603;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)8.62738331464067e-05;
              } else {
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
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
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
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
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
        if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
                result[0] += (float)0.8875739644970414;
                result[1] += (float)0;
                result[2] += (float)0.08284023668639054;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.029585798816568046;
              } else {
                result[0] += (float)0.9972640218878249;
                result[1] += (float)0;
                result[2] += (float)0.0013679890560875513;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0013679890560875513;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d70000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423a0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9854651162790697;
                result[1] += (float)0;
                result[2] += (float)0.0029069767441860465;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.011627906976744186;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41cc0000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42120000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.00034352456200618345;
                result[2] += (float)0;
                result[3] += (float)0.9986259017519753;
                result[4] += (float)0.00034352456200618345;
                result[5] += (float)0.0006870491240123669;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0;
                result[4] += (float)0.09523809523809523;
                result[5] += (float)0.23809523809523808;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43420000))) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
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
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41680000))) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
                result[0] += (float)0.9983016828778756;
                result[1] += (float)0.0004631773969430292;
                result[2] += (float)0.0008491585610622202;
                result[3] += (float)7.71962328238382e-05;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0003087849312953528;
              } else {
                result[0] += (float)0.9797979797979798;
                result[1] += (float)0;
                result[2] += (float)0.020202020202020204;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40800000))) ) ) {
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
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6956521739130435;
                result[1] += (float)0;
                result[2] += (float)0.30434782608695654;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42ca0000))) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46503000))) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
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
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cc0000))) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
                result[0] += (float)0.8592233009708737;
                result[1] += (float)0;
                result[2] += (float)0.12135922330097088;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.019417475728155338;
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
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
                result[0] += (float)0.8518518518518519;
                result[1] += (float)0;
                result[2] += (float)0.14814814814814814;
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
            if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9948186528497409;
                result[1] += (float)0;
                result[2] += (float)0.0051813471502590676;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
                result[0] += (float)0.9989094874591058;
                result[1] += (float)0;
                result[2] += (float)0.0010905125408942203;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9896373056994818;
                result[1] += (float)0;
                result[2] += (float)0.010362694300518135;
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9993823347745522;
                result[1] += (float)0;
                result[2] += (float)0.0006176652254478073;
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
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
                result[2] += (float)0.625;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.375;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.005536130536130536;
                result[2] += (float)0.010198135198135198;
                result[3] += (float)0.9831002331002331;
                result[4] += (float)0;
                result[5] += (float)0.0011655011655011655;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.24107142857142858;
                result[1] += (float)0.011904761904761904;
                result[2] += (float)0;
                result[3] += (float)0.7470238095238095;
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
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41980000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9965337954939342;
                result[1] += (float)0;
                result[2] += (float)0.0034662045060658577;
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
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41b00000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
                result[0] += (float)0.963302752293578;
                result[1] += (float)0;
                result[2] += (float)0.027522935779816515;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.009174311926605505;
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
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42460000))) ) ) {
                result[0] += (float)0.9959183673469387;
                result[1] += (float)0;
                result[2] += (float)0.0032653061224489797;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008163265306122449;
              } else {
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42680000))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ce0000))) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42720000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9815852682145717;
                result[1] += (float)0;
                result[2] += (float)0.01521216973578863;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0032025620496397116;
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
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41380000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41200000))) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41cc0000))) ) ) {
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
                result[3] += (float)0.9285714285714286;
                result[4] += (float)0;
                result[5] += (float)0.07142857142857142;
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ec0000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40000000))) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42be0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
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
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8333333333333334;
                result[1] += (float)0;
                result[2] += (float)0.16666666666666666;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
                result[0] += (float)0.984251968503937;
                result[1] += (float)0;
                result[2] += (float)0.015748031496062992;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9965675057208238;
                result[1] += (float)0;
                result[2] += (float)0.003432494279176201;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.996039603960396;
                result[1] += (float)0;
                result[2] += (float)0.0039603960396039604;
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
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
                result[0] += (float)0.7117117117117118;
                result[1] += (float)0.0900900900900901;
                result[2] += (float)0.19819819819819823;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02142857142857143;
                result[3] += (float)0.9785714285714285;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
                result[0] += (float)0.8990384615384616;
                result[1] += (float)0;
                result[2] += (float)0.01201923076923077;
                result[3] += (float)0.0889423076923077;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9844623990055935;
                result[1] += (float)0;
                result[2] += (float)0.005593536357986327;
                result[3] += (float)0.00839030453697949;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015537600994406464;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.07894736842105263;
                result[3] += (float)0.9210526315789473;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.00819672131147541;
                result[2] += (float)0;
                result[3] += (float)0.9918032786885246;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b20000))) ) ) {
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
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ce0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
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
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
                result[0] += (float)0.9932773109243698;
                result[1] += (float)0;
                result[2] += (float)0.0067226890756302525;
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
                result[0] += (float)0.8387096774193549;
                result[1] += (float)0;
                result[2] += (float)0.13709677419354838;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.024193548387096774;
              } else {
                result[0] += (float)0.9888888888888889;
                result[1] += (float)0;
                result[2] += (float)0.011111111111111112;
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e00000))) ) ) {
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
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
                result[3] += (float)0.9727891156462585;
                result[4] += (float)0;
                result[5] += (float)0.027210884353741496;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.017482517482517484;
                result[2] += (float)0;
                result[3] += (float)0.9825174825174825;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41900000))) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.36;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.64;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.07692307692307693;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9230769230769231;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42680000))) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9843400447427293;
                result[1] += (float)0;
                result[2] += (float)0.015659955257270694;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
                result[0] += (float)0.9922010398613518;
                result[1] += (float)0.002021952628538417;
                result[2] += (float)0.003755054881571346;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002021952628538417;
              } else {
                result[0] += (float)0.9991183990126069;
                result[1] += (float)0.0001322401481089659;
                result[2] += (float)0.0007052807899144847;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)4.4080049369655294e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.034482758620689655;
                result[2] += (float)0.6206896551724138;
                result[3] += (float)0.3448275862068966;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.06557377049180328;
                result[3] += (float)0.9344262295081968;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42280000))) ) ) {
                result[0] += (float)0.994475138121547;
                result[1] += (float)0;
                result[2] += (float)0.0055248618784530384;
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c80000))) ) ) {
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
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42780000))) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
                result[0] += (float)0.9117647058823529;
                result[1] += (float)0;
                result[2] += (float)0.08823529411764706;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9961089494163424;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0038910505836575876;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
                result[0] += (float)0.950530035335689;
                result[1] += (float)0;
                result[2] += (float)0.0353356890459364;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014134275618374558;
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41380000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426c0000))) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41cc0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9642857142857143;
                result[4] += (float)0;
                result[5] += (float)0.03571428571428571;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.00030627871362940275;
                result[2] += (float)0;
                result[3] += (float)0.9996937212863706;
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
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d00000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
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
          } else {
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42380000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42680000))) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40d00000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41b00000))) ) ) {
                result[0] += (float)0.984873949579832;
                result[1] += (float)0;
                result[2] += (float)0.013865546218487394;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0012605042016806723;
              } else {
                result[0] += (float)0.998375480586993;
                result[1] += (float)0.0005956571181025613;
                result[2] += (float)0.0009205610007039585;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0001083012942004657;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9975629569455727;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002437043054427295;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
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
                result[2] += (float)0.06896551724137931;
                result[3] += (float)0.9310344827586207;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42de0000))) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41a40000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41e80000))) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40400000))) ) ) {
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
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
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
                result[3] += (float)0.9655172413793104;
                result[4] += (float)0.034482758620689655;
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
      } else {
        if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42040000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
                result[0] += (float)0.9030837004405287;
                result[1] += (float)0;
                result[2] += (float)0.06607929515418502;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.030837004405286344;
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
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x4416e000))) ) ) {
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
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
                result[0] += (float)0.985781990521327;
                result[1] += (float)0;
                result[2] += (float)0.014218009478672985;
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
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9420289855072463;
                result[1] += (float)0;
                result[2] += (float)0.057971014492753624;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
                result[0] += (float)0.8409090909090909;
                result[1] += (float)0;
                result[2] += (float)0.1590909090909091;
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
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
                result[0] += (float)0.9991878722252301;
                result[1] += (float)0;
                result[2] += (float)0.0008121277747698972;
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
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
                result[0] += (float)0.6;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.4;
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
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42600000))) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)0.048507462686567165;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9514925373134329;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0042796005706134095;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9957203994293866;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
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
          } else {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41980000))) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
                result[0] += (float)0.9992138364779874;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007861635220125787;
              } else {
                result[0] += (float)0.9363636363636364;
                result[1] += (float)0;
                result[2] += (float)0.06363636363636363;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
                result[0] += (float)0.18461538461538463;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8153846153846154;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9678714859437751;
                result[1] += (float)0;
                result[2] += (float)0.0321285140562249;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
                result[0] += (float)0.944;
                result[1] += (float)0;
                result[2] += (float)0.04;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.016;
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
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ce0000))) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
                result[0] += (float)0.01818181818181818;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9818181818181818;
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.047619047619047616;
                result[2] += (float)0;
                result[3] += (float)0.7619047619047619;
                result[4] += (float)0.19047619047619047;
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
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41400000))) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41980000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.625;
                result[3] += (float)0;
                result[4] += (float)0.3125;
                result[5] += (float)0.0625;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.005687693898655636;
                result[1] += (float)0.005687693898655636;
                result[2] += (float)0.011892450879007239;
                result[3] += (float)0.9767321613236815;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
                result[0] += (float)0.9734789391575663;
                result[1] += (float)0;
                result[2] += (float)0.0070202808112324495;
                result[3] += (float)0.0187207488299532;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00078003120124805;
              } else {
                result[0] += (float)0.9978911851539435;
                result[1] += (float)0;
                result[2] += (float)0.00042176296921130323;
                result[3] += (float)0.001687051876845213;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
                result[0] += (float)0.5306122448979592;
                result[1] += (float)0;
                result[2] += (float)0.1836734693877551;
                result[3] += (float)0.2857142857142857;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9882352941176471;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.011764705882352941;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42180000))) ) ) {
                result[0] += (float)0.9896907216494846;
                result[1] += (float)0;
                result[2] += (float)0.00902061855670103;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001288659793814433;
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
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42480000))) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41980000))) ) ) {
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
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42880000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42660000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.000500751126690035;
                result[2] += (float)0.000500751126690035;
                result[3] += (float)0.99899849774662;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.004566210045662101;
                result[3] += (float)0.9863013698630138;
                result[4] += (float)0.009132420091324202;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
                result[0] += (float)0.9983275594313703;
                result[1] += (float)0.00011946004061641382;
                result[2] += (float)0.0010751403655477245;
                result[3] += (float)0.0004778401624656553;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9889123548046462;
                result[1] += (float)0.004751847940865892;
                result[2] += (float)0.004751847940865892;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015839493136219642;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
                result[0] += (float)0.9995320542817033;
                result[1] += (float)0;
                result[2] += (float)0.0004679457182966776;
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
                result[0] += (float)0.9954149472718936;
                result[1] += (float)0;
                result[2] += (float)0.002751031636863824;
                result[3] += (float)0.0009170105456212746;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009170105456212746;
              } else {
                result[0] += (float)0.96045197740113;
                result[1] += (float)0;
                result[2] += (float)0.007062146892655367;
                result[3] += (float)0.03248587570621469;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42640000))) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.21428571428571427;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7857142857142857;
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
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41600000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42380000))) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5737704918032787;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4262295081967213;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
                result[0] += (float)0.6865079365079365;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.3134920634920635;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9843014128728415;
                result[1] += (float)0;
                result[2] += (float)0.007326007326007326;
                result[3] += (float)0;
                result[4] += (float)0.0052328623757195184;
                result[5] += (float)0;
                result[6] += (float)0.0031397174254317113;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f80000))) ) ) {
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
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
                result[0] += (float)0.5276073619631901;
                result[1] += (float)0.04294478527607362;
                result[2] += (float)0;
                result[3] += (float)0.4294478527607362;
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
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3275862068965517;
                result[1] += (float)0;
                result[2] += (float)0.13793103448275862;
                result[3] += (float)0.5344827586206896;
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
                result[0] += (float)0.25;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.75;
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
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f40000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.14285714285714285;
                result[2] += (float)0;
                result[3] += (float)0.8571428571428571;
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9766536964980544;
                result[1] += (float)0;
                result[2] += (float)0.019455252918287938;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0038910505836575876;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.9925925925925926;
                result[1] += (float)0;
                result[2] += (float)0.007407407407407408;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.999536536381894;
                result[1] += (float)0;
                result[2] += (float)0.0004634636181059787;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
                result[0] += (float)0.9760413830656139;
                result[1] += (float)0.0019057990743261638;
                result[2] += (float)0.0035393411380343046;
                result[3] += (float)0.016607677647699427;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0019057990743261638;
              } else {
                result[0] += (float)0.0074211502782931356;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9888682745825603;
                result[4] += (float)0;
                result[5] += (float)0.0037105751391465678;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9946033459255262;
                result[1] += (float)0;
                result[2] += (float)0.004587155963302753;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000809498111171074;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0026785714285714286;
                result[3] += (float)0.9892857142857143;
                result[4] += (float)0.004464285714285714;
                result[5] += (float)0.0035714285714285713;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6470588235294118;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.35294117647058826;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
                result[0] += (float)0.01668520578420467;
                result[1] += (float)0;
                result[2] += (float)0.03670745272525028;
                result[3] += (float)0.6507230255839822;
                result[4] += (float)0.29588431590656283;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9860724233983287;
                result[1] += (float)0;
                result[2] += (float)0.013927576601671309;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42800000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.000663129973474801;
                result[2] += (float)0;
                result[3] += (float)0.9993368700265252;
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.6666666666666666;
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
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4500c800))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
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
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43370000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.009727626459143969;
                result[2] += (float)0;
                result[3] += (float)0.9902723735408561;
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40200000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.975;
                result[4] += (float)0;
                result[5] += (float)0.025;
                result[6] += (float)0;
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
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42040000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40000000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x418c0000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
                result[0] += (float)0.9840244731475187;
                result[1] += (float)0.0030591434398368456;
                result[2] += (float)0.005778382053025153;
                result[3] += (float)0.005778382053025153;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0013596193065941536;
              } else {
                result[0] += (float)0.9977565900168256;
                result[1] += (float)0;
                result[2] += (float)0.0011217049915872126;
                result[3] += (float)0.0005608524957936063;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005608524957936063;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
                result[0] += (float)0.9972127863426531;
                result[1] += (float)8.710042679209128e-05;
                result[2] += (float)0.0013936068286734605;
                result[3] += (float)0.0010452051215050953;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0002613012803762738;
              } else {
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
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40800000))) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d80000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423c0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9391891891891891;
                result[1] += (float)0;
                result[2] += (float)0.04954954954954955;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01126126126126126;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
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
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d00000))) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f800000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
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
                result[3] += (float)0.6666666666666666;
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
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42280000))) ) ) {
                result[0] += (float)0.7857142857142857;
                result[1] += (float)0;
                result[2] += (float)0.21428571428571427;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.16666666666666666;
                result[1] += (float)0;
                result[2] += (float)0.8333333333333334;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.02;
                result[2] += (float)0;
                result[3] += (float)0.98;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.25925925925925924;
                result[2] += (float)0;
                result[3] += (float)0.7407407407407407;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
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
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.09523809523809523;
                result[4] += (float)0.9047619047619048;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.34782608695652173;
                result[4] += (float)0.6521739130434783;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
                result[0] += (float)0.9990909090909091;
                result[1] += (float)0;
                result[2] += (float)0.0009090909090909091;
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9320388349514563;
                result[1] += (float)0;
                result[2] += (float)0.05825242718446602;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.009708737864077669;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
                result[0] += (float)0.9891640866873065;
                result[1] += (float)0;
                result[2] += (float)0.010835913312693499;
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
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c30000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42860000))) ) ) {
                result[0] += (float)0.018835019183815836;
                result[1] += (float)0.006278339727938612;
                result[2] += (float)0.011510289501220789;
                result[3] += (float)0.9605859783746076;
                result[4] += (float)0.0010463899546564353;
                result[5] += (float)0.0017439832577607255;
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
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41840000))) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
                result[0] += (float)0.9982652578457655;
                result[1] += (float)0;
                result[2] += (float)0.000946222993218735;
                result[3] += (float)0.000315407664406245;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0004731114966093675;
              } else {
                result[0] += (float)0.9737827715355806;
                result[1] += (float)0;
                result[2] += (float)0.026217228464419477;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
                result[0] += (float)0.3968253968253968;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6031746031746031;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9906832298136646;
                result[1] += (float)0;
                result[2] += (float)0.009316770186335404;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41500000))) ) ) {
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
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8425925925925926;
                result[1] += (float)0;
                result[2] += (float)0.1111111111111111;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.046296296296296294;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
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
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.03875968992248062;
                result[2] += (float)0;
                result[3] += (float)0.9612403100775194;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.00303951367781155;
                result[2] += (float)0;
                result[3] += (float)0.9969604863221885;
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42080000))) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e60000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43380000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.07692307692307693;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9230769230769231;
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
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f800000))) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40400000))) ) ) {
                result[0] += (float)0.07142857142857142;
                result[1] += (float)0;
                result[2] += (float)0.9285714285714286;
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42480000))) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42040000))) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
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
                result[2] += (float)0.0525328330206379;
                result[3] += (float)0.9474671669793621;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.776595744680851;
                result[1] += (float)0;
                result[2] += (float)0.05319148936170213;
                result[3] += (float)0;
                result[4] += (float)0.1702127659574468;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.06451612903225806;
                result[1] += (float)0;
                result[2] += (float)0.25806451612903225;
                result[3] += (float)0.6774193548387096;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43300000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.6666666666666666;
                result[5] += (float)0;
                result[6] += (float)0;
              }
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
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
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
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41980000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.7777777777777778;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.2222222222222222;
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
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41a80000))) ) ) {
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
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
                result[0] += (float)0.998902840424235;
                result[1] += (float)0.0002438132390588809;
                result[2] += (float)0.0008533463367060831;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9829369183040331;
                result[1] += (float)0.0062047569803516025;
                result[2] += (float)0.0031023784901758012;
                result[3] += (float)0.0062047569803516025;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015511892450879006;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
                result[0] += (float)0.999128160418483;
                result[1] += (float)0;
                result[2] += (float)0.0008718395815170009;
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
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9892163910855499;
                result[1] += (float)0;
                result[2] += (float)0.010064701653486701;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007189072609633358;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.007936507936507936;
                result[3] += (float)0;
                result[4] += (float)0.9920634920634921;
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
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41840000))) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41580000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
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
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
                result[0] += (float)0.966824644549763;
                result[1] += (float)0;
                result[2] += (float)0.03317535545023697;
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
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.981549815498155;
                result[1] += (float)0;
                result[2] += (float)0.01845018450184502;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
                result[0] += (float)0.9986275048037332;
                result[1] += (float)0;
                result[2] += (float)0.001372495196266813;
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
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.989010989010989;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.01098901098901099;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x418c0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.8461538461538461;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.15384615384615385;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0033112582781456954;
                result[1] += (float)0.005518763796909493;
                result[2] += (float)0.011037527593818985;
                result[3] += (float)0.9786607799852833;
                result[4] += (float)0;
                result[5] += (float)0.0014716703458425313;
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
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
                result[0] += (float)0.9974321938693629;
                result[1] += (float)0;
                result[2] += (float)0.0012839030653185683;
                result[3] += (float)0.0008024394158241052;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00048146364949446316;
              } else {
                result[0] += (float)0.9608150470219435;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.03918495297805643;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
                result[0] += (float)0.79;
                result[1] += (float)0;
                result[2] += (float)0.15;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.06;
              } else {
                result[0] += (float)0.982078853046595;
                result[1] += (float)0;
                result[2] += (float)0.010752688172043012;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007168458781362007;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
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
                result[2] += (float)0.6428571428571429;
                result[3] += (float)0.35714285714285715;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429c0000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.010752688172043012;
                result[2] += (float)0;
                result[3] += (float)0.989247311827957;
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
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
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
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41ac0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41880000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.010752688172043012;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.989247311827957;
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
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42fb0000))) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
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
                result[3] += (float)0.5833333333333334;
                result[4] += (float)0.4166666666666667;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42300000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.3333333333333333;
                result[4] += (float)0.6666666666666666;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.4482758620689655;
                result[2] += (float)0;
                result[3] += (float)0.41379310344827586;
                result[4] += (float)0.13793103448275862;
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
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
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
                result[2] += (float)0.013215859030837005;
                result[3] += (float)0.986784140969163;
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
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
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
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
            } else {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9647058823529412;
                result[1] += (float)0;
                result[2] += (float)0.03137254901960784;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00392156862745098;
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
                result[0] += (float)0.9916107382550335;
                result[1] += (float)0;
                result[2] += (float)0.008389261744966443;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9994566398608998;
                result[1] += (float)0;
                result[2] += (float)0.0005433601391001956;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
                result[0] += (float)0.027777777777777776;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9722222222222222;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9897058823529412;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.007352941176470588;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0029411764705882353;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.9675632911392406;
                result[1] += (float)0.003691983122362869;
                result[2] += (float)0.002109704641350211;
                result[3] += (float)0.025843881856540084;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0007911392405063291;
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
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
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
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0;
                result[4] += (float)0.3333333333333333;
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
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f00000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7272727272727273;
                result[1] += (float)0;
                result[2] += (float)0.2727272727272727;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f00000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42840000))) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)0.6666666666666667;
                result[1] += (float)0;
                result[2] += (float)0.16666666666666669;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.16666666666666669;
              } else {
                result[0] += (float)0.8372093023255814;
                result[1] += (float)0;
                result[2] += (float)0.13953488372093023;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.023255813953488372;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
                result[0] += (float)0.9622641509433962;
                result[1] += (float)0;
                result[2] += (float)0.02830188679245283;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.009433962264150943;
              } else {
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41980000))) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.002354326074161271;
                result[2] += (float)0.0008828722778104767;
                result[3] += (float)0.9955856386109476;
                result[4] += (float)0;
                result[5] += (float)0.0011771630370806356;
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
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43858000))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
                result[0] += (float)0.9975700069428374;
                result[1] += (float)0.00023142791020597088;
                result[2] += (float)0.0021985651469567232;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.988795518207283;
                result[1] += (float)0.004481792717086834;
                result[2] += (float)0.005042016806722689;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016806722689075631;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
                result[0] += (float)0.9998038831143361;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00019611688566385565;
              } else {
                result[0] += (float)0.9962962962962963;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003703703703703704;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42820000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9513888888888888;
                result[1] += (float)0;
                result[2] += (float)0.04861111111111111;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
                result[0] += (float)0.6793893129770993;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.32061068702290074;
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
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d70000))) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41bc0000))) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
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
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428c0000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
                result[0] += (float)0.8048780487804879;
                result[1] += (float)0;
                result[2] += (float)0.04878048780487805;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.14634146341463414;
              } else {
                result[0] += (float)0.5128205128205128;
                result[1] += (float)0;
                result[2] += (float)0.4358974358974359;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.05128205128205128;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.9310344827586207;
                result[1] += (float)0;
                result[2] += (float)0.06896551724137931;
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
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42970000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8846153846153846;
                result[1] += (float)0;
                result[2] += (float)0.057692307692307696;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.057692307692307696;
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42340000))) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42be0000))) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9872611464968153;
                result[4] += (float)0;
                result[5] += (float)0.012738853503184714;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0004870920603994155;
                result[2] += (float)0;
                result[3] += (float)0.9995129079396006;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.9166666666666666;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.08333333333333333;
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
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9606299212598425;
                result[1] += (float)0;
                result[2] += (float)0.031496062992125984;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.007874015748031496;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
                result[0] += (float)0.9991266375545852;
                result[1] += (float)0;
                result[2] += (float)0.0008733624454148472;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9963503649635036;
                result[1] += (float)0;
                result[2] += (float)0.0036496350364963502;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42500000))) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.1;
                result[2] += (float)0;
                result[3] += (float)0.9;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9893499816378994;
                result[1] += (float)0.002203452074917371;
                result[2] += (float)0.00477414616232097;
                result[3] += (float)0.003121557106132942;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0005508630187293428;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.7058823529411765;
                result[3] += (float)0.29411764705882354;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.11320754716981132;
                result[3] += (float)0.8867924528301887;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423c0000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x426e0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.987099856665074;
                result[1] += (float)0;
                result[2] += (float)0.008600095556617296;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004300047778308648;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
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
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x44b9a000))) ) ) {
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
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42fb0000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.09090909090909091;
                result[1] += (float)0.2727272727272727;
                result[2] += (float)0;
                result[3] += (float)0.045454545454545456;
                result[4] += (float)0.5909090909090909;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41a40000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.006711409395973154;
                result[4] += (float)0.9932885906040269;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.08;
                result[2] += (float)0;
                result[3] += (float)0.08;
                result[4] += (float)0.84;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6923076923076923;
                result[1] += (float)0;
                result[2] += (float)0.3076923076923077;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
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
                result[2] += (float)0.01639344262295082;
                result[3] += (float)0.9836065573770492;
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
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0010666666666666667;
                result[2] += (float)0;
                result[3] += (float)0.9984;
                result[4] += (float)0;
                result[5] += (float)0.0005333333333333334;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
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
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43340000))) ) ) {
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
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42900000))) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42860000))) ) ) {
                result[0] += (float)0.988168180857807;
                result[1] += (float)0.0027466723008662585;
                result[2] += (float)0.007817451933234737;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0012676949080921193;
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
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9994955100393502;
                result[1] += (float)0;
                result[2] += (float)0.000504489960649783;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e00000))) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
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
                result[2] += (float)0.0017152658662092624;
                result[3] += (float)0.9982847341337907;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
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
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
                result[0] += (float)0.3103448275862069;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6896551724137931;
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
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d70000))) ) ) {
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
          if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42720000))) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42040000))) ) ) {
                result[0] += (float)0.9936247723132969;
                result[1] += (float)0;
                result[2] += (float)0.004857316332726169;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015179113539769277;
              } else {
                result[0] += (float)0.7333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.06666666666666667;
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
