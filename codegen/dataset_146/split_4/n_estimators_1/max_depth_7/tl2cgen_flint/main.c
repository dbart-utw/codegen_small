
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d40000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424e0000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
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
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
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
                result[4] += 0.9166666666666666;
                result[5] += 0.08333333333333333;
              }
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
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.025;
                result[4] += 0.025;
                result[5] += 0.95;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.2;
                result[4] += 0.3333333333333333;
                result[5] += 0.06666666666666667;
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42950000))) ) ) {
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
                result[3] += 0.03333333333333333;
                result[4] += 0.9;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.9090909090909091;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0165016501650165;
                result[4] += 0.009900990099009901;
                result[5] += 0.9735973597359736;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6176470588235294;
                result[5] += 0.3235294117647059;
              } else {
                result[0] += 0.028708133971291867;
                result[1] += 0.009569377990430622;
                result[2] += 0;
                result[3] += 0.1291866028708134;
                result[4] += 0.03349282296650718;
                result[5] += 0.7990430622009569;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3548387096774194;
                result[4] += 0;
                result[5] += 0.6451612903225806;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.024793388429752067;
                result[3] += 0.8016528925619835;
                result[4] += 0;
                result[5] += 0.17355371900826447;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
                result[0] += 0;
                result[1] += 0.05263157894736842;
                result[2] += 0.042105263157894736;
                result[3] += 0.3684210526315789;
                result[4] += 0;
                result[5] += 0.5368421052631579;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5625;
                result[3] += 0;
                result[4] += 0.1875;
                result[5] += 0.25;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429a0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
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
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9473684210526315;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05263157894736842;
                result[5] += 0;
              }
            }
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42580000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
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
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0.02702702702702703;
                result[1] += 0.018018018018018018;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9099099099099099;
                result[5] += 0.04504504504504504;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2727272727272727;
                result[5] += 0.7272727272727273;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
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
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0.020833333333333332;
                result[1] += 0.9583333333333334;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.020833333333333332;
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
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.043010752688172046;
                result[1] += 0.06451612903225806;
                result[2] += 0;
                result[3] += 0.34408602150537637;
                result[4] += 0.3010752688172043;
                result[5] += 0.24731182795698925;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
                result[0] += 0.2916666666666667;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.9520897043832824;
                result[1] += 0.005096839959225281;
                result[2] += 0;
                result[3] += 0.0040774719673802255;
                result[4] += 0.03465851172273191;
                result[5] += 0.0040774719673802255;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
                result[0] += 0;
                result[1] += 0.00847457627118644;
                result[2] += 0.03389830508474576;
                result[3] += 0.6271186440677966;
                result[4] += 0.025423728813559324;
                result[5] += 0.3050847457627119;
              } else {
                result[0] += 0.13846153846153847;
                result[1] += 0;
                result[2] += 0.27692307692307694;
                result[3] += 0.23076923076923078;
                result[4] += 0;
                result[5] += 0.35384615384615387;
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
                result[0] += 0.15068493150684933;
                result[1] += 0;
                result[2] += 0.6849315068493151;
                result[3] += 0.04109589041095891;
                result[4] += 0.04109589041095891;
                result[5] += 0.08219178082191782;
              } else {
                result[0] += 0.8589743589743589;
                result[1] += 0;
                result[2] += 0.08974358974358974;
                result[3] += 0;
                result[4] += 0.05128205128205128;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42930000))) ) ) {
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
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0.09523809523809523;
                result[2] += 0.19047619047619047;
                result[3] += 0.09523809523809523;
                result[4] += 0.5714285714285714;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.03225806451612903;
                result[2] += 0.3548387096774194;
                result[3] += 0.0967741935483871;
                result[4] += 0.0967741935483871;
                result[5] += 0.41935483870967744;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0.11764705882352941;
                result[1] += 0.11764705882352941;
                result[2] += 0.058823529411764705;
                result[3] += 0.11764705882352941;
                result[4] += 0.11764705882352941;
                result[5] += 0.47058823529411764;
              } else {
                result[0] += 0.018518518518518517;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.09259259259259259;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7333333333333333;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42de0000))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0.025;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.15;
                result[4] += 0;
                result[5] += 0.025;
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
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b90000))) ) ) {
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
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8742138364779874;
                result[3] += 0.12578616352201258;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5862068965517241;
                result[3] += 0.41379310344827586;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.696969696969697;
                result[3] += 0.30303030303030304;
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
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0017574692442882249;
                result[1] += 0;
                result[2] += 0.9701230228471002;
                result[3] += 0.028119507908611598;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 1;
  result[1] /= 1;
  result[2] /= 1;
  result[3] /= 1;
  result[4] /= 1;
  result[5] /= 1;
  
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
