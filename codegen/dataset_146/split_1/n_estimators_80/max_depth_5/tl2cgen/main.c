
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9511278195488722;
            result[5] += 0.04887218045112782;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10204081632653061;
            result[4] += 0.30612244897959184;
            result[5] += 0.5918367346938775;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.21428571428571427;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.9629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.8936170212765957;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0851063829787234;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.0022172949002217295;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.057649667405764965;
            result[4] += 0.0598669623059867;
            result[5] += 0.8802660753880266;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.01777777777777778;
            result[1] += 0;
            result[2] += 0.04444444444444445;
            result[3] += 0.688888888888889;
            result[4] += 0.00888888888888889;
            result[5] += 0.24000000000000002;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
            result[0] += 0.046153846153846156;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8769230769230769;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5918367346938777;
            result[2] += 0.06122448979591837;
            result[3] += 0.10204081632653063;
            result[4] += 0.0816326530612245;
            result[5] += 0.163265306122449;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.8997289972899729;
            result[1] += 0.02981029810298103;
            result[2] += 0;
            result[3] += 0.004516711833785004;
            result[4] += 0.06052393857271906;
            result[5] += 0.005420054200542005;
          } else {
            result[0] += 0.3317757009345794;
            result[1] += 0.02336448598130841;
            result[2] += 0.03271028037383177;
            result[3] += 0.24299065420560748;
            result[4] += 0.056074766355140186;
            result[5] += 0.3130841121495327;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            result[0] += 0.015625;
            result[1] += 0.053125;
            result[2] += 0.265625;
            result[3] += 0.38125;
            result[4] += 0.06875;
            result[5] += 0.215625;
          } else {
            result[0] += 0.43902439024390244;
            result[1] += 0;
            result[2] += 0.4959349593495935;
            result[3] += 0.016260162601626018;
            result[4] += 0.04878048780487805;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12903225806451613;
            result[3] += 0.8387096774193549;
            result[4] += 0;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93.5) ) ) {
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0.7058823529411765;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9803921568627451;
            result[3] += 0.0196078431372549;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.0056179775280898875;
            result[1] += 0;
            result[2] += 0.9691011235955056;
            result[3] += 0.019662921348314606;
            result[4] += 0;
            result[5] += 0.0056179775280898875;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.004273504273504275;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.982905982905983;
            result[5] += 0.012820512820512822;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.1;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)80.5) ) ) {
            result[0] += 0.046875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.484375;
            result[5] += 0.46875;
          } else {
            result[0] += 0.7954545454545454;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0.07954545454545454;
            result[4] += 0.10227272727272728;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.5333333333333333;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0.001148105625717566;
            result[1] += 0.002296211251435132;
            result[2] += 0.001148105625717566;
            result[3] += 0.0505166475315729;
            result[4] += 0.02870264064293915;
            result[5] += 0.9161882893226176;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.010256410256410256;
            result[1] += 0.08717948717948718;
            result[2] += 0.046153846153846156;
            result[3] += 0.2512820512820513;
            result[4] += 0.046153846153846156;
            result[5] += 0.558974358974359;
          } else {
            result[0] += 0.040983606557377046;
            result[1] += 0.020491803278688523;
            result[2] += 0.045081967213114756;
            result[3] += 0.6065573770491803;
            result[4] += 0.02459016393442623;
            result[5] += 0.26229508196721313;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.7058823529411765;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29411764705882354;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0.07633587786259542;
            result[1] += 0.20610687022900764;
            result[2] += 0;
            result[3] += 0.07633587786259542;
            result[4] += 0.6106870229007634;
            result[5] += 0.030534351145038167;
          } else {
            result[0] += 0.8352524357838795;
            result[1] += 0.010628875110717449;
            result[2] += 0.0070859167404783;
            result[3] += 0.02745792736935341;
            result[4] += 0.09034543844109831;
            result[5] += 0.029229406554472984;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0.12903225806451613;
            result[3] += 0.5225806451612903;
            result[4] += 0.01935483870967742;
            result[5] += 0.2967741935483871;
          } else {
            result[0] += 0.3072289156626506;
            result[1] += 0.006024096385542169;
            result[2] += 0.4879518072289157;
            result[3] += 0.03614457831325301;
            result[4] += 0.09036144578313253;
            result[5] += 0.07228915662650602;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0.5000000000000001;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.027777777777777776;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.027777777777777776;
            result[5] += 0.7777777777777778;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.9259259259259259;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39130434782608703;
            result[3] += 0.3478260869565218;
            result[4] += 0.08695652173913045;
            result[5] += 0.1739130434782609;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.22807017543859648;
            result[4] += 0;
            result[5] += 0.07017543859649122;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)114) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5283018867924528;
            result[3] += 0.4716981132075472;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)108.5) ) ) {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0.7333333333333334;
            result[3] += 0.06666666666666668;
            result[4] += 0;
            result[5] += 0.03333333333333334;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0013280212483399733;
            result[1] += 0;
            result[2] += 0.9681274900398407;
            result[3] += 0.03054448871181939;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
            result[0] += 0.0038022813688212928;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9771863117870723;
            result[5] += 0.019011406844106463;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.2857142857142857;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.125;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9876543209876543;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012345679012345678;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.002127659574468085;
            result[1] += 0.007446808510638298;
            result[2] += 0;
            result[3] += 0.039361702127659576;
            result[4] += 0.08085106382978724;
            result[5] += 0.8702127659574468;
          } else {
            result[0] += 0;
            result[1] += 0.005;
            result[2] += 0.0125;
            result[3] += 0.555;
            result[4] += 0.0275;
            result[5] += 0.4;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.1282051282051282;
            result[2] += 0;
            result[3] += 0.02564102564102564;
            result[4] += 0.8333333333333334;
            result[5] += 0.01282051282051282;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
            result[0] += 0.07954545454545454;
            result[1] += 0.022727272727272728;
            result[2] += 0.06818181818181818;
            result[3] += 0.5;
            result[4] += 0.011363636363636364;
            result[5] += 0.3181818181818182;
          } else {
            result[0] += 0.8772426817752597;
            result[1] += 0.03777148253068933;
            result[2] += 0.013220018885741265;
            result[3] += 0.0113314447592068;
            result[4] += 0.056657223796033995;
            result[5] += 0.003777148253068933;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
            result[0] += 0.06514657980456026;
            result[1] += 0.026058631921824105;
            result[2] += 0.30618892508143325;
            result[3] += 0.2671009771986971;
            result[4] += 0.09771986970684039;
            result[5] += 0.23778501628664495;
          } else {
            result[0] += 0.8507462686567164;
            result[1] += 0.014925373134328358;
            result[2] += 0.08955223880597014;
            result[3] += 0;
            result[4] += 0.04477611940298507;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50.5) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.11764705882352941;
            result[3] += 0.5294117647058824;
            result[4] += 0;
            result[5] += 0.29411764705882354;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.5869565217391305;
            result[3] += 0.1956521739130435;
            result[4] += 0.010869565217391304;
            result[5] += 0.18478260869565216;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)126.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6853932584269663;
            result[3] += 0.24719101123595505;
            result[4] += 0;
            result[5] += 0.06741573033707865;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9017543859649123;
            result[3] += 0.09473684210526316;
            result[4] += 0;
            result[5] += 0.0035087719298245615;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104) ) ) {
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
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9746835443037974;
            result[3] += 0.02531645569620253;
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
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.971830985915493;
            result[5] += 0.028169014084507043;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.21875;
            result[4] += 0.21875;
            result[5] += 0.53125;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0013679890560875513;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027359781121751026;
            result[4] += 0.017783857729138167;
            result[5] += 0.9534883720930233;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8936170212765957;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10638297872340426;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01532567049808429;
            result[2] += 0.005747126436781609;
            result[3] += 0.36590038314176243;
            result[4] += 0.10153256704980843;
            result[5] += 0.5114942528735632;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0.25925925925925924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7407407407407407;
            result[5] += 0;
          } else {
            result[0] += 0.13207547169811323;
            result[1] += 0.679245283018868;
            result[2] += 0;
            result[3] += 0.13207547169811323;
            result[4] += 0.05660377358490567;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.07926829268292683;
            result[1] += 0.3780487804878049;
            result[2] += 0.012195121951219513;
            result[3] += 0.018292682926829267;
            result[4] += 0.4817073170731707;
            result[5] += 0.03048780487804878;
          } else {
            result[0] += 0.885589519650655;
            result[1] += 0.010480349344978166;
            result[2] += 0.0069868995633187774;
            result[3] += 0.01572052401746725;
            result[4] += 0.06899563318777292;
            result[5] += 0.01222707423580786;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.01858736059479554;
            result[1] += 0.01858736059479554;
            result[2] += 0.11524163568773234;
            result[3] += 0.4646840148698885;
            result[4] += 0.040892193308550186;
            result[5] += 0.3420074349442379;
          } else {
            result[0] += 0.2679245283018868;
            result[1] += 0.018867924528301886;
            result[2] += 0.4528301886792453;
            result[3] += 0.09811320754716982;
            result[4] += 0.0830188679245283;
            result[5] += 0.07924528301886792;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.2;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9444444444444444;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.08695652173913043;
            result[2] += 0.4782608695652174;
            result[3] += 0.30434782608695654;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4210526315789474;
            result[3] += 0.4736842105263158;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9039301310043668;
            result[3] += 0.09170305676855896;
            result[4] += 0;
            result[5] += 0.004366812227074236;
          } else {
            result[0] += 0.00850340136054422;
            result[1] += 0;
            result[2] += 0.9829931972789117;
            result[3] += 0.00850340136054422;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
            result[4] += 0.8;
            result[5] += 0.2;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.875;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013966480446927375;
            result[3] += 0.025139664804469275;
            result[4] += 0.009776536312849162;
            result[5] += 0.9636871508379888;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.4705882352941177;
            result[1] += 0.22058823529411767;
            result[2] += 0;
            result[3] += 0.04411764705882354;
            result[4] += 0.23529411764705885;
            result[5] += 0.029411764705882356;
          } else {
            result[0] += 0.016835016835016835;
            result[1] += 0.03367003367003367;
            result[2] += 0;
            result[3] += 0.15151515151515152;
            result[4] += 0.07744107744107744;
            result[5] += 0.7205387205387206;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.005208333333333333;
            result[2] += 0.03125;
            result[3] += 0.640625;
            result[4] += 0.010416666666666666;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.007481296758104739;
            result[1] += 0.9900249376558604;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002493765586034913;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            result[0] += 0.25833333333333336;
            result[1] += 0.10833333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.9063636363636364;
            result[1] += 0.005454545454545455;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.05090909090909091;
            result[5] += 0.017272727272727273;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0.04247104247104247;
            result[1] += 0.007722007722007722;
            result[2] += 0.15444015444015444;
            result[3] += 0.28185328185328185;
            result[4] += 0.12355212355212356;
            result[5] += 0.38996138996138996;
          } else {
            result[0] += 0.8679245283018868;
            result[1] += 0.03773584905660377;
            result[2] += 0.05660377358490566;
            result[3] += 0.018867924528301886;
            result[4] += 0.018867924528301886;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0.16326530612244897;
            result[2] += 0;
            result[3] += 0.24489795918367346;
            result[4] += 0.04081632653061224;
            result[5] += 0.4897959183673469;
          } else {
            result[0] += 0.04761904761904762;
            result[1] += 0;
            result[2] += 0.11904761904761905;
            result[3] += 0.6904761904761906;
            result[4] += 0.011904761904761906;
            result[5] += 0.130952380952381;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
            result[0] += 0.8529411764705882;
            result[1] += 0;
            result[2] += 0.14705882352941177;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0;
            result[2] += 0.6976744186046512;
            result[3] += 0.1686046511627907;
            result[4] += 0.005813953488372093;
            result[5] += 0.11627906976744186;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.6521739130434783;
            result[4] += 0;
            result[5] += 0.21739130434782608;
          } else {
            result[0] += 0.0136986301369863;
            result[1] += 0.02054794520547945;
            result[2] += 0.7397260273972602;
            result[3] += 0.19863013698630136;
            result[4] += 0;
            result[5] += 0.0273972602739726;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.008021390374331552;
            result[1] += 0;
            result[2] += 0.9518716577540107;
            result[3] += 0.03609625668449198;
            result[4] += 0;
            result[5] += 0.004010695187165776;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.015151515151515152;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8977272727272727;
            result[5] += 0.08712121212121213;
          } else {
            result[0] += 0.6052631578947368;
            result[1] += 0;
            result[2] += 0.013157894736842105;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0.3026315789473684;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.0023584905660377358;
            result[2] += 0;
            result[3] += 0.05778301886792453;
            result[4] += 0.04245283018867924;
            result[5] += 0.8974056603773585;
          } else {
            result[0] += 0.003257328990228013;
            result[1] += 0.04560260586319218;
            result[2] += 0.029315960912052116;
            result[3] += 0.5504885993485342;
            result[4] += 0.04234527687296417;
            result[5] += 0.3289902280130293;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1694915254237288;
            result[1] += 0.14689265536723164;
            result[2] += 0;
            result[3] += 0.005649717514124294;
            result[4] += 0.632768361581921;
            result[5] += 0.04519774011299435;
          } else {
            result[0] += 0.8700716845878136;
            result[1] += 0.023297491039426525;
            result[2] += 0.007168458781362007;
            result[3] += 0.022401433691756272;
            result[4] += 0.06362007168458782;
            result[5] += 0.013440860215053764;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.008064516129032258;
            result[2] += 0.239247311827957;
            result[3] += 0.3655913978494624;
            result[4] += 0.051075268817204304;
            result[5] += 0.33602150537634407;
          } else {
            result[0] += 0.54;
            result[1] += 0;
            result[2] += 0.21;
            result[3] += 0.02;
            result[4] += 0.2;
            result[5] += 0.03;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0.08;
            result[3] += 0.44;
            result[4] += 0.08;
            result[5] += 0.32;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16363636363636364;
            result[3] += 0.8363636363636363;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8837209302325582;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.2692307692307692;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.016666666666666666;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9432624113475178;
            result[3] += 0.05673758865248227;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9908675799086758;
            result[3] += 0.0091324200913242;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
            result[0] += 0.004081632653061225;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9755102040816327;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.75;
            result[5] += 0.1875;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015151515151515152;
            result[4] += 0.48484848484848486;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01808066759388039;
            result[4] += 0.055632823365785816;
            result[5] += 0.9262865090403338;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10256410256410256;
            result[4] += 0.038461538461538464;
            result[5] += 0.8589743589743589;
          } else {
            result[0] += 0.08443271767810027;
            result[1] += 0.015831134564643804;
            result[2] += 0;
            result[3] += 0.5092348284960423;
            result[4] += 0.02902374670184697;
            result[5] += 0.3614775725593668;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07027027027027027;
            result[1] += 0.20540540540540542;
            result[2] += 0.016216216216216217;
            result[3] += 0;
            result[4] += 0.6918918918918919;
            result[5] += 0.016216216216216217;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8761467889908257;
            result[1] += 0.011926605504587157;
            result[2] += 0.006422018348623854;
            result[3] += 0.029357798165137616;
            result[4] += 0.05779816513761468;
            result[5] += 0.01834862385321101;
          } else {
            result[0] += 0.15544041450777202;
            result[1] += 0.007772020725388601;
            result[2] += 0.24352331606217617;
            result[3] += 0.28756476683937826;
            result[4] += 0.08031088082901554;
            result[5] += 0.22538860103626943;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0.9024390243902439;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0.06666666666666667;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.8421052631578947;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.23636363636363636;
            result[4] += 0;
            result[5] += 0.01818181818181818;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.6944444444444444;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
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
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009900990099009901;
            result[1] += 0;
            result[2] += 0.8168316831683168;
            result[3] += 0.15346534653465346;
            result[4] += 0;
            result[5] += 0.019801980198019802;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            result[0] += 0.009090909090909092;
            result[1] += 0;
            result[2] += 0.890909090909091;
            result[3] += 0.09545454545454547;
            result[4] += 0;
            result[5] += 0.004545454545454546;
          } else {
            result[0] += 0.006263048016701462;
            result[1] += 0;
            result[2] += 0.9832985386221295;
            result[3] += 0.010438413361169102;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)34.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0.022222222222222223;
            result[4] += 0.7111111111111111;
            result[5] += 0.24444444444444444;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.0027002700270027003;
            result[1] += 0.0027002700270027003;
            result[2] += 0.0018001800180018;
            result[3] += 0.07290729072907291;
            result[4] += 0.048604860486048604;
            result[5] += 0.8712871287128713;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.041666666666666664;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0.008547008547008548;
            result[2] += 0;
            result[3] += 0.8290598290598291;
            result[4] += 0;
            result[5] += 0.1623931623931624;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
            result[0] += 0.002173913043478261;
            result[1] += 0.991304347826087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006521739130434782;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.5408;
            result[1] += 0.1088;
            result[2] += 0;
            result[3] += 0.0592;
            result[4] += 0.232;
            result[5] += 0.0592;
          } else {
            result[0] += 0.8861111111111111;
            result[1] += 0.020833333333333332;
            result[2] += 0.018055555555555554;
            result[3] += 0.011111111111111112;
            result[4] += 0.05416666666666667;
            result[5] += 0.009722222222222222;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
            result[0] += 0.009966777408637873;
            result[1] += 0;
            result[2] += 0.2956810631229236;
            result[3] += 0.3521594684385382;
            result[4] += 0.013289036544850499;
            result[5] += 0.3289036544850498;
          } else {
            result[0] += 0.6582278481012658;
            result[1] += 0;
            result[2] += 0.0759493670886076;
            result[3] += 0.05063291139240506;
            result[4] += 0.21518987341772153;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.13636363636363635;
            result[2] += 0.045454545454545456;
            result[3] += 0.5;
            result[4] += 0.18181818181818182;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.09523809523809523;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.14705882352941177;
            result[2] += 0.23529411764705882;
            result[3] += 0.5588235294117647;
            result[4] += 0.029411764705882353;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7586206896551724;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.6538461538461539;
            result[3] += 0.07692307692307693;
            result[4] += 0.038461538461538464;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.9722222222222222;
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
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.856655290102389;
            result[3] += 0.12627986348122866;
            result[4] += 0;
            result[5] += 0.017064846416382253;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9818548387096774;
            result[3] += 0.016129032258064516;
            result[4] += 0;
            result[5] += 0.0020161290322580645;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9943820224719101;
            result[5] += 0.0056179775280898875;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43333333333333335;
            result[5] += 0.5666666666666667;
          } else {
            result[0] += 0.5970149253731343;
            result[1] += 0.04477611940298507;
            result[2] += 0;
            result[3] += 0.08955223880597014;
            result[4] += 0.22388059701492538;
            result[5] += 0.04477611940298507;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.0012135922330097086;
            result[1] += 0.0024271844660194173;
            result[2] += 0;
            result[3] += 0.0412621359223301;
            result[4] += 0.032766990291262135;
            result[5] += 0.9223300970873787;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.009345794392523364;
            result[2] += 0;
            result[3] += 0.17757009345794392;
            result[4] += 0.009345794392523364;
            result[5] += 0.8037383177570093;
          } else {
            result[0] += 0.0070921985815602835;
            result[1] += 0;
            result[2] += 0.02127659574468085;
            result[3] += 0.7021276595744681;
            result[4] += 0;
            result[5] += 0.2695035460992908;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977827050997783;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022172949002217295;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0.13043478260869565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8478260869565217;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.1836734693877551;
            result[1] += 0.01020408163265306;
            result[2] += 0.061224489795918366;
            result[3] += 0.20408163265306123;
            result[4] += 0.24489795918367346;
            result[5] += 0.29591836734693877;
          } else {
            result[0] += 0.8827586206896553;
            result[1] += 0.026724137931034488;
            result[2] += 0.005172413793103449;
            result[3] += 0.018103448275862074;
            result[4] += 0.055172413793103454;
            result[5] += 0.012068965517241381;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.049586776859504134;
            result[3] += 0.5537190082644629;
            result[4] += 0.04132231404958678;
            result[5] += 0.35537190082644626;
          } else {
            result[0] += 0.3697478991596639;
            result[1] += 0.008403361344537815;
            result[2] += 0.31092436974789917;
            result[3] += 0.04201680672268908;
            result[4] += 0.15126050420168066;
            result[5] += 0.11764705882352941;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.2;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.021739130434782608;
            result[5] += 0.9782608695652174;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.6923076923076923;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0.30434782608695654;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17094017094017097;
            result[3] += 0.7264957264957266;
            result[4] += 0;
            result[5] += 0.10256410256410257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0.046511627906976744;
            result[2] += 0.023255813953488372;
            result[3] += 0.4418604651162791;
            result[4] += 0;
            result[5] += 0.4418604651162791;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0.0625;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6060606060606061;
            result[1] += 0.09090909090909091;
            result[2] += 0.21212121212121213;
            result[3] += 0.06060606060606061;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.00641025641025641;
            result[1] += 0;
            result[2] += 0.6858974358974359;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.057692307692307696;
          } else {
            result[0] += 0.022857142857142857;
            result[1] += 0;
            result[2] += 0.9028571428571428;
            result[3] += 0.05142857142857143;
            result[4] += 0;
            result[5] += 0.022857142857142857;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9744408945686901;
            result[3] += 0.020766773162939296;
            result[4] += 0;
            result[5] += 0.004792332268370607;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007380073800738007;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.977859778597786;
            result[5] += 0.014760147601476014;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.6521739130434784;
            result[1] += 0.11594202898550726;
            result[2] += 0.014492753623188408;
            result[3] += 0.04347826086956522;
            result[4] += 0.15942028985507248;
            result[5] += 0.014492753623188408;
          } else {
            result[0] += 0.0011086474501108647;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.057649667405764965;
            result[4] += 0.07538802660753881;
            result[5] += 0.8658536585365854;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06944444444444445;
            result[4] += 0.06944444444444445;
            result[5] += 0.8611111111111112;
          } else {
            result[0] += 0.06722689075630253;
            result[1] += 0;
            result[2] += 0.03781512605042017;
            result[3] += 0.6008403361344539;
            result[4] += 0.03781512605042017;
            result[5] += 0.2563025210084034;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.6153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0;
          } else {
            result[0] += 0.01388888888888889;
            result[1] += 0.02777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444445;
            result[5] += 0.01388888888888889;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5652173913043478;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43478260869565216;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            result[0] += 0.1702127659574468;
            result[1] += 0.0070921985815602835;
            result[2] += 0.014184397163120567;
            result[3] += 0.20567375886524822;
            result[4] += 0.028368794326241134;
            result[5] += 0.574468085106383;
          } else {
            result[0] += 0.8733031674208145;
            result[1] += 0.024434389140271493;
            result[2] += 0.00904977375565611;
            result[3] += 0.019004524886877826;
            result[4] += 0.06244343891402715;
            result[5] += 0.011764705882352941;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0.005291005291005292;
            result[1] += 0.04232804232804233;
            result[2] += 0.04232804232804233;
            result[3] += 0.6031746031746033;
            result[4] += 0.03174603174603175;
            result[5] += 0.2751322751322752;
          } else {
            result[0] += 0.28426395939086296;
            result[1] += 0.015228426395939087;
            result[2] += 0.40609137055837563;
            result[3] += 0.06598984771573604;
            result[4] += 0.08121827411167512;
            result[5] += 0.14720812182741116;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9545454545454546;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.18518518518518517;
            result[2] += 0.037037037037037035;
            result[3] += 0.18518518518518517;
            result[4] += 0.2222222222222222;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2909090909090909;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.07272727272727272;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09210526315789475;
            result[1] += 0;
            result[2] += 0.605263157894737;
            result[3] += 0.1973684210526316;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.5543478260869565;
            result[3] += 0.29347826086956524;
            result[4] += 0;
            result[5] += 0.10869565217391304;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.859375;
            result[3] += 0.140625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)131.5) ) ) {
            result[0] += 0.020202020202020204;
            result[1] += 0;
            result[2] += 0.9191919191919192;
            result[3] += 0.050505050505050504;
            result[4] += 0;
            result[5] += 0.010101010101010102;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            result[0] += 0.22727272727272727;
            result[1] += 0;
            result[2] += 0.7727272727272727;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0034782608695652175;
            result[1] += 0;
            result[2] += 0.9721739130434782;
            result[3] += 0.02434782608695652;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9951456310679612;
            result[5] += 0.0048543689320388345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7619047619047619;
            result[1] += 0.23809523809523808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02666666666666667;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5066666666666667;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008210180623973728;
            result[4] += 0.031198686371100164;
            result[5] += 0.9605911330049262;
          } else {
            result[0] += 0;
            result[1] += 0.03940886699507389;
            result[2] += 0.0049261083743842365;
            result[3] += 0.1724137931034483;
            result[4] += 0.09852216748768473;
            result[5] += 0.6847290640394089;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.26605504587155965;
            result[4] += 0.03669724770642202;
            result[5] += 0.6972477064220184;
          } else {
            result[0] += 0;
            result[1] += 0.024752475247524754;
            result[2] += 0.06930693069306931;
            result[3] += 0.6039603960396039;
            result[4] += 0.019801980198019802;
            result[5] += 0.28217821782178215;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.05357142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9107142857142857;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.6875;
            result[2] += 0.125;
            result[3] += 0.0625;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0024154589371980675;
            result[1] += 0.9975845410628019;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0.20454545454545456;
            result[2] += 0;
            result[3] += 0.031818181818181815;
            result[4] += 0.5227272727272727;
            result[5] += 0.05909090909090909;
          } else {
            result[0] += 0.8402107111501317;
            result[1] += 0.0026338893766461808;
            result[2] += 0.003511852502194908;
            result[3] += 0.043898156277436345;
            result[4] += 0.07287093942054433;
            result[5] += 0.03687445127304653;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            result[0] += 0.040955631399317405;
            result[1] += 0.027303754266211604;
            result[2] += 0.27986348122866894;
            result[3] += 0.33447098976109213;
            result[4] += 0.017064846416382253;
            result[5] += 0.3003412969283277;
          } else {
            result[0] += 0.7333333333333333;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0;
            result[4] += 0.10833333333333334;
            result[5] += 0.008333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.8695652173913043;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.8;
            result[4] += 0.04;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0.11764705882352941;
            result[4] += 0.17647058823529413;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42105263157894735;
            result[3] += 0.21052631578947367;
            result[4] += 0;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0.8494623655913979;
            result[3] += 0.10752688172043011;
            result[4] += 0;
            result[5] += 0.010752688172043012;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)114.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0.022058823529411766;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.13970588235294118;
            result[4] += 0;
            result[5] += 0.014705882352941176;
          } else {
            result[0] += 0.008287292817679558;
            result[1] += 0;
            result[2] += 0.9544198895027625;
            result[3] += 0.03314917127071823;
            result[4] += 0;
            result[5] += 0.004143646408839779;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.8421052631578947;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
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
            result[4] += 0.3;
            result[5] += 0.7;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002663115845539281;
            result[3] += 0.03595206391478029;
            result[4] += 0.019973368841544607;
            result[5] += 0.9414114513981359;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.07291666666666667;
            result[1] += 0.11458333333333333;
            result[2] += 0;
            result[3] += 0.08854166666666667;
            result[4] += 0.140625;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05116279069767442;
            result[3] += 0.5255813953488372;
            result[4] += 0.018604651162790697;
            result[5] += 0.4046511627906977;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976019184652278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002398081534772182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 0.6391752577319587;
            result[1] += 0.02577319587628866;
            result[2] += 0;
            result[3] += 0.037800687285223365;
            result[4] += 0.281786941580756;
            result[5] += 0.015463917525773196;
          } else {
            result[0] += 0.008333333333333333;
            result[1] += 0.01875;
            result[2] += 0.14375;
            result[3] += 0.36666666666666664;
            result[4] += 0.0625;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
            result[0] += 0.06153846153846154;
            result[1] += 0.2923076923076923;
            result[2] += 0.046153846153846156;
            result[3] += 0.015384615384615385;
            result[4] += 0.5538461538461539;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0.8733850129198967;
            result[1] += 0.015503875968992248;
            result[2] += 0.04521963824289406;
            result[3] += 0.02454780361757106;
            result[4] += 0.03617571059431524;
            result[5] += 0.00516795865633075;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0.3125;
            result[2] += 0.1875;
            result[3] += 0.0625;
            result[4] += 0.375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.72;
            result[4] += 0;
            result[5] += 0.28;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45;
            result[3] += 0.45;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.9615384615384616;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.4489795918367347;
            result[3] += 0.5204081632653061;
            result[4] += 0;
            result[5] += 0.01020408163265306;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.0053475935828877;
            result[2] += 0.8502673796791443;
            result[3] += 0.1443850267379679;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9785831960461285;
            result[3] += 0.0214168039538715;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95.5) ) ) {
            result[0] += 0.004347826086956522;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9782608695652174;
            result[5] += 0.017391304347826087;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0273972602739726;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4931506849315068;
            result[5] += 0.4794520547945205;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.575;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0.002325581395348837;
            result[2] += 0;
            result[3] += 0.06627906976744186;
            result[4] += 0.03837209302325582;
            result[5] += 0.8930232558139535;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.00975609756097561;
            result[2] += 0;
            result[3] += 0.25853658536585367;
            result[4] += 0.08780487804878048;
            result[5] += 0.6439024390243903;
          } else {
            result[0] += 0;
            result[1] += 0.006756756756756757;
            result[2] += 0.006756756756756757;
            result[3] += 0.7297297297297297;
            result[4] += 0.02027027027027027;
            result[5] += 0.23648648648648649;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0.07291666666666667;
            result[2] += 0;
            result[3] += 0.010416666666666666;
            result[4] += 0.875;
            result[5] += 0.020833333333333332;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7352941176470589;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2647058823529412;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0.7457886676875958;
            result[1] += 0.0643185298621746;
            result[2] += 0.001531393568147014;
            result[3] += 0.01990811638591118;
            result[4] += 0.13323124042879023;
            result[5] += 0.035222052067381326;
          } else {
            result[0] += 0.06788511749347259;
            result[1] += 0.05221932114882506;
            result[2] += 0.2297650130548303;
            result[3] += 0.3237597911227154;
            result[4] += 0.0391644908616188;
            result[5] += 0.28720626631853785;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
            result[0] += 0.9765166340508806;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0019569471624266144;
            result[4] += 0.021526418786692758;
            result[5] += 0;
          } else {
            result[0] += 0.3863636363636364;
            result[1] += 0;
            result[2] += 0.18181818181818185;
            result[3] += 0.13636363636363638;
            result[4] += 0.18181818181818185;
            result[5] += 0.11363636363636365;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02127659574468085;
            result[3] += 0.9361702127659575;
            result[4] += 0;
            result[5] += 0.0425531914893617;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7051282051282052;
            result[3] += 0.20512820512820512;
            result[4] += 0;
            result[5] += 0.08974358974358974;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9264705882352942;
            result[3] += 0.07352941176470588;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)121) ) ) {
            result[0] += 0.008733624454148471;
            result[1] += 0;
            result[2] += 0.8733624454148472;
            result[3] += 0.11790393013100436;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9518072289156626;
            result[3] += 0.04819277108433735;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0023529411764705885;
            result[1] += 0;
            result[2] += 0.9952941176470589;
            result[3] += 0.0023529411764705885;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.004016064257028112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9718875502008032;
            result[5] += 0.024096385542168676;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.8596491228070176;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14035087719298245;
            result[5] += 0;
          } else {
            result[0] += 0.0011123470522803114;
            result[1] += 0.004449388209121246;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.09454949944382647;
            result[5] += 0.8676307007786429;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.01282051282051282;
            result[1] += 0.01282051282051282;
            result[2] += 0.01282051282051282;
            result[3] += 0.25;
            result[4] += 0.03205128205128205;
            result[5] += 0.6794871794871795;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015706806282722516;
            result[3] += 0.6910994764397906;
            result[4] += 0;
            result[5] += 0.29319371727748694;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
            result[0] += 0.08461538461538462;
            result[1] += 0.16153846153846155;
            result[2] += 0.007692307692307693;
            result[3] += 0.023076923076923078;
            result[4] += 0.6923076923076923;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0.9705882352941176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += 0.8385726423109601;
            result[1] += 0.027187765505522515;
            result[2] += 0.013593882752761258;
            result[3] += 0.028037383177570093;
            result[4] += 0.06032285471537808;
            result[5] += 0.03228547153780799;
          } else {
            result[0] += 0.27450980392156865;
            result[1] += 0.00980392156862745;
            result[2] += 0.19852941176470587;
            result[3] += 0.27941176470588236;
            result[4] += 0.03676470588235294;
            result[5] += 0.20098039215686275;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23809523809523808;
            result[5] += 0;
          } else {
            result[0] += 0.0026666666666666666;
            result[1] += 0.9973333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8125;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.45454545454545453;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.015789473684210527;
            result[1] += 0;
            result[2] += 0.8157894736842105;
            result[3] += 0.1368421052631579;
            result[4] += 0;
            result[5] += 0.031578947368421054;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
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
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.14583333333333334;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0.08620689655172416;
            result[1] += 0;
            result[2] += 0.7241379310344829;
            result[3] += 0.15517241379310348;
            result[4] += 0;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9720176730486009;
            result[3] += 0.027982326951399118;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9703389830508474;
            result[5] += 0.029661016949152543;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.984375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.015625;
            result[5] += 0;
          } else {
            result[0] += 0.14634146341463414;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4634146341463415;
            result[5] += 0.3902439024390244;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.3108108108108108;
            result[2] += 0;
            result[3] += 0.06756756756756757;
            result[4] += 0.4864864864864865;
            result[5] += 0.13513513513513514;
          } else {
            result[0] += 0.0011261261261261261;
            result[1] += 0.0022522522522522522;
            result[2] += 0;
            result[3] += 0.04954954954954955;
            result[4] += 0.04842342342342342;
            result[5] += 0.8986486486486487;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0.0045871559633027525;
            result[2] += 0.05045871559633028;
            result[3] += 0.19724770642201836;
            result[4] += 0.03211009174311927;
            result[5] += 0.7064220183486238;
          } else {
            result[0] += 0.005405405405405406;
            result[1] += 0.010810810810810811;
            result[2] += 0.08108108108108109;
            result[3] += 0.6756756756756757;
            result[4] += 0;
            result[5] += 0.22702702702702704;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5833333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.6206896551724138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3793103448275862;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.014492753623188406;
            result[1] += 0.34782608695652173;
            result[2] += 0.11594202898550725;
            result[3] += 0.014492753623188406;
            result[4] += 0.4782608695652174;
            result[5] += 0.028985507246376812;
          } else {
            result[0] += 0.8958534233365477;
            result[1] += 0.0048216007714561235;
            result[2] += 0.0048216007714561235;
            result[3] += 0.01639344262295082;
            result[4] += 0.06750241080038573;
            result[5] += 0.010607521697203472;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
            result[0] += 0.017921146953405017;
            result[1] += 0.025089605734767026;
            result[2] += 0.20430107526881722;
            result[3] += 0.34767025089605735;
            result[4] += 0.06451612903225806;
            result[5] += 0.34050179211469533;
          } else {
            result[0] += 0.6039603960396039;
            result[1] += 0;
            result[2] += 0.25742574257425743;
            result[3] += 0.019801980198019802;
            result[4] += 0.1188118811881188;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02857142857142857;
            result[5] += 0.9714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.07407407407407407;
            result[1] += 0.14814814814814814;
            result[2] += 0.18518518518518517;
            result[3] += 0.18518518518518517;
            result[4] += 0;
            result[5] += 0.4074074074074074;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19696969696969696;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.07575757575757576;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.04545454545454546;
            result[1] += 0;
            result[2] += 0.8863636363636365;
            result[3] += 0.04545454545454546;
            result[4] += 0;
            result[5] += 0.02272727272727273;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.36507936507936506;
            result[4] += 0;
            result[5] += 0.06349206349206349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.922077922077922;
            result[3] += 0.07792207792207792;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9294117647058824;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.011764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.994263862332696;
            result[3] += 0.0057361376673040155;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.978021978021978;
            result[5] += 0.02197802197802198;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.7213114754098361;
            result[5] += 0.2459016393442623;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.5769230769230769;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4230769230769231;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037209302325581395;
            result[4] += 0.05;
            result[5] += 0.9127906976744186;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += 0.03007518796992481;
            result[1] += 0.007518796992481203;
            result[2] += 0.007518796992481203;
            result[3] += 0.2706766917293233;
            result[4] += 0.12781954887218044;
            result[5] += 0.556390977443609;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8507462686567164;
            result[4] += 0;
            result[5] += 0.14925373134328357;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
            result[0] += 0.08762886597938144;
            result[1] += 0.29381443298969073;
            result[2] += 0;
            result[3] += 0.015463917525773196;
            result[4] += 0.5309278350515464;
            result[5] += 0.07216494845360824;
          } else {
            result[0] += 0.829635499207607;
            result[1] += 0.015847860538827262;
            result[2] += 0.003961965134706816;
            result[3] += 0.03565768621236134;
            result[4] += 0.05546751188589541;
            result[5] += 0.05942947702060222;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.006578947368421052;
            result[2] += 0.05592105263157895;
            result[3] += 0.5230263157894737;
            result[4] += 0.006578947368421052;
            result[5] += 0.40789473684210525;
          } else {
            result[0] += 0.26851851851851855;
            result[1] += 0.018518518518518517;
            result[2] += 0.4537037037037037;
            result[3] += 0.09722222222222222;
            result[4] += 0.10185185185185185;
            result[5] += 0.06018518518518518;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0;
            result[4] += 0.6666666666666667;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1702127659574468;
            result[3] += 0;
            result[4] += 0.0425531914893617;
            result[5] += 0.7872340425531915;
          } else {
            result[0] += 0.0684931506849315;
            result[1] += 0.0410958904109589;
            result[2] += 0.1780821917808219;
            result[3] += 0.5068493150684932;
            result[4] += 0.0684931506849315;
            result[5] += 0.136986301369863;
          }
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68) ) ) {
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
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0056022408963585435;
            result[1] += 0;
            result[2] += 0.876750700280112;
            result[3] += 0.10084033613445378;
            result[4] += 0;
            result[5] += 0.01680672268907563;
          } else {
            result[0] += 0.001904761904761905;
            result[1] += 0;
            result[2] += 0.9885714285714287;
            result[3] += 0.00761904761904762;
            result[4] += 0;
            result[5] += 0.001904761904761905;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
            result[0] += 0.02158273381294964;
            result[1] += 0.017985611510791366;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8776978417266187;
            result[5] += 0.08273381294964029;
          } else {
            result[0] += 0;
            result[1] += 0.8214285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.17857142857142858;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.8222222222222223;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05185185185185186;
            result[4] += 0.11851851851851854;
            result[5] += 0.0074074074074074086;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02173913043478261;
            result[3] += 0;
            result[4] += 0.9130434782608696;
            result[5] += 0.06521739130434784;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034916201117318434;
            result[4] += 0.012569832402234637;
            result[5] += 0.952513966480447;
          } else {
            result[0] += 0.02850877192982456;
            result[1] += 0.017543859649122806;
            result[2] += 0.02412280701754386;
            result[3] += 0.3092105263157895;
            result[4] += 0.09868421052631579;
            result[5] += 0.5219298245614035;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.020833333333333332;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.3055555555555556;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5277777777777778;
            result[5] += 0;
          } else {
            result[0] += 0.8977384464110127;
            result[1] += 0.017699115044247787;
            result[2] += 0.0058997050147492625;
            result[3] += 0.03343166175024582;
            result[4] += 0.035398230088495575;
            result[5] += 0.00983284169124877;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0.01092896174863388;
            result[1] += 0.00819672131147541;
            result[2] += 0.12021857923497267;
            result[3] += 0.45901639344262296;
            result[4] += 0.03278688524590164;
            result[5] += 0.36885245901639346;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.1527777777777778;
            result[3] += 0;
            result[4] += 0.09722222222222222;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
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
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.18181818181818182;
            result[4] += 0.030303030303030304;
            result[5] += 0.24242424242424243;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6710526315789475;
            result[3] += 0.3026315789473685;
            result[4] += 0;
            result[5] += 0.026315789473684213;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9240506329113924;
            result[3] += 0.05063291139240506;
            result[4] += 0;
            result[5] += 0.02531645569620253;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.4642857142857143;
            result[3] += 0.5;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.9027777777777778;
            result[3] += 0.06597222222222222;
            result[4] += 0;
            result[5] += 0.003472222222222222;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9568627450980393;
            result[3] += 0.0392156862745098;
            result[4] += 0;
            result[5] += 0.00392156862745098;
          } else {
            result[0] += 0.0035211267605633804;
            result[1] += 0;
            result[2] += 0.9964788732394366;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9906542056074766;
            result[5] += 0.009345794392523364;
          } else {
            result[0] += 0.2608695652173913;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.391304347826087;
            result[5] += 0.34782608695652173;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0.012345679012345678;
            result[2] += 0;
            result[3] += 0.08641975308641975;
            result[4] += 0.41975308641975306;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.03225806451612903;
            result[4] += 0.8064516129032258;
            result[5] += 0.0967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04055944055944056;
            result[4] += 0.03776223776223776;
            result[5] += 0.9216783216783216;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.008368200836820083;
            result[2] += 0;
            result[3] += 0.16317991631799164;
            result[4] += 0.16317991631799164;
            result[5] += 0.6652719665271967;
          } else {
            result[0] += 0;
            result[1] += 0.008547008547008548;
            result[2] += 0;
            result[3] += 0.5769230769230769;
            result[4] += 0.04700854700854701;
            result[5] += 0.36752136752136755;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.033707865168539325;
            result[2] += 0;
            result[3] += 0.033707865168539325;
            result[4] += 0.9325842696629213;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.76;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0.17857142857142858;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9931972789115646;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006802721088435374;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)110.5) ) ) {
            result[0] += 0.85;
            result[1] += 0.0017543859649122807;
            result[2] += 0.0008771929824561404;
            result[3] += 0.034210526315789476;
            result[4] += 0.07894736842105263;
            result[5] += 0.034210526315789476;
          } else {
            result[0] += 0;
            result[1] += 0.9666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
            result[0] += 0.0735930735930736;
            result[1] += 0.047619047619047616;
            result[2] += 0.11255411255411256;
            result[3] += 0.41125541125541126;
            result[4] += 0.08225108225108226;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.20289855072463772;
            result[1] += 0.014492753623188408;
            result[2] += 0.5652173913043479;
            result[3] += 0.15942028985507248;
            result[4] += 0.019323671497584544;
            result[5] += 0.03864734299516909;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
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
            result[2] += 0.075;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.825;
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
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.05194805194805195;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.19480519480519481;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.03896103896103896;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9436619718309859;
            result[3] += 0.056338028169014086;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9888682745825603;
            result[3] += 0.00927643784786642;
            result[4] += 0;
            result[5] += 0.0018552875695732839;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.994475138121547;
            result[5] += 0.0055248618784530384;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.21739130434782608;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.5652173913043478;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0.0059594755661501785;
            result[1] += 0.0011918951132300357;
            result[2] += 0;
            result[3] += 0.041716328963051254;
            result[4] += 0.03218116805721097;
            result[5] += 0.9189511323003575;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38181818181818183;
            result[5] += 0.6181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7391304347826086;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.0625;
            result[1] += 0.11538461538461539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8028846153846154;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0;
            result[1] += 0.9545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8047808764940239;
            result[1] += 0.012749003984063745;
            result[2] += 0.012749003984063745;
            result[3] += 0.04462151394422311;
            result[4] += 0.07171314741035857;
            result[5] += 0.05338645418326693;
          } else {
            result[0] += 0.14695340501792115;
            result[1] += 0.014336917562724014;
            result[2] += 0.1827956989247312;
            result[3] += 0.3602150537634409;
            result[4] += 0.07885304659498207;
            result[5] += 0.2168458781362007;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.9976851851851852;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023148148148148147;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0;
            result[4] += 0.02702702702702703;
            result[5] += 0.9459459459459459;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1935483870967742;
            result[3] += 0.7903225806451613;
            result[4] += 0;
            result[5] += 0.016129032258064516;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
            result[0] += 0.4;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6896551724137931;
            result[3] += 0.2413793103448276;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.5714285714285714;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.018867924528301886;
            result[1] += 0;
            result[2] += 0.8075471698113208;
            result[3] += 0.16226415094339622;
            result[4] += 0;
            result[5] += 0.011320754716981131;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
            result[0] += 0.23529411764705882;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9739663093415007;
            result[3] += 0.02450229709035222;
            result[4] += 0;
            result[5] += 0.0015313935681470138;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9870689655172413;
            result[5] += 0.01293103448275862;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0.0012836970474967907;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03337612323491656;
            result[4] += 0.01797175866495507;
            result[5] += 0.9473684210526315;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0.13712374581939799;
            result[1] += 0.030100334448160536;
            result[2] += 0;
            result[3] += 0.11705685618729098;
            result[4] += 0.17725752508361203;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0;
            result[1] += 0.004464285714285714;
            result[2] += 0.049107142857142856;
            result[3] += 0.7008928571428571;
            result[4] += 0.017857142857142856;
            result[5] += 0.22767857142857142;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
            result[0] += 0.11515151515151516;
            result[1] += 0.26666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.8484589041095891;
            result[1] += 0.027397260273972605;
            result[2] += 0.0034246575342465756;
            result[3] += 0.024828767123287673;
            result[4] += 0.07619863013698631;
            result[5] += 0.01969178082191781;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0.015706806282722512;
            result[1] += 0.005235602094240838;
            result[2] += 0.031413612565445025;
            result[3] += 0.4031413612565445;
            result[4] += 0.06806282722513089;
            result[5] += 0.47643979057591623;
          } else {
            result[0] += 0.27611940298507465;
            result[1] += 0.029850746268656716;
            result[2] += 0.4253731343283582;
            result[3] += 0.09701492537313433;
            result[4] += 0.08955223880597014;
            result[5] += 0.08208955223880597;
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
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2441860465116279;
            result[4] += 0.05813953488372093;
            result[5] += 0.6976744186046512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2807017543859649;
            result[3] += 0.6491228070175439;
            result[4] += 0;
            result[5] += 0.07017543859649122;
          } else {
            result[0] += 0.05970149253731344;
            result[1] += 0;
            result[2] += 0.6268656716417912;
            result[3] += 0.20895522388059704;
            result[4] += 0.04477611940298508;
            result[5] += 0.05970149253731344;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0.15789473684210525;
            result[2] += 0.15789473684210525;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
            result[0] += 0.08108108108108109;
            result[1] += 0;
            result[2] += 0.8108108108108109;
            result[3] += 0.05405405405405406;
            result[4] += 0.05405405405405406;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.017605633802816906;
            result[1] += 0;
            result[2] += 0.8345070422535212;
            result[3] += 0.11971830985915494;
            result[4] += 0;
            result[5] += 0.028169014084507046;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9844020797227037;
            result[3] += 0.01559792027729636;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0.0038910505836575876;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9610894941634242;
            result[5] += 0.03501945525291829;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9545454545454546;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          } else {
            result[0] += 0.013157894736842105;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.3157894736842105;
            result[5] += 0.5657894736842105;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04502617801047121;
            result[4] += 0.05654450261780105;
            result[5] += 0.8984293193717278;
          } else {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0.3939393939393939;
            result[4] += 0.24242424242424243;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.35526315789473684;
            result[4] += 0;
            result[5] += 0.618421052631579;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7723577235772358;
            result[4] += 0.008130081300813009;
            result[5] += 0.21951219512195122;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.09424083769633508;
            result[1] += 0.47643979057591623;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.418848167539267;
            result[5] += 0.010471204188481676;
          } else {
            result[0] += 0.8697152717860225;
            result[1] += 0.011216566005176877;
            result[2] += 0.003451251078515962;
            result[3] += 0.014667817083692839;
            result[4] += 0.08455565142364108;
            result[5] += 0.01639344262295082;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.04484304932735426;
            result[2] += 0.09865470852017937;
            result[3] += 0.4304932735426009;
            result[4] += 0.08520179372197309;
            result[5] += 0.34080717488789236;
          } else {
            result[0] += 0.1793478260869565;
            result[1] += 0.021739130434782608;
            result[2] += 0.4782608695652174;
            result[3] += 0.10326086956521739;
            result[4] += 0.016304347826086956;
            result[5] += 0.20108695652173914;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.9875;
            result[2] += 0;
            result[3] += 0.0025;
            result[4] += 0.01;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
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
            result[4] += 0.04;
            result[5] += 0.96;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5897435897435898;
            result[3] += 0.41025641025641024;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.904109589041096;
            result[3] += 0.06849315068493152;
            result[4] += 0;
            result[5] += 0.027397260273972605;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.8827586206896552;
            result[3] += 0.0896551724137931;
            result[4] += 0;
            result[5] += 0.010344827586206896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9804964539007093;
            result[3] += 0.01773049645390071;
            result[4] += 0;
            result[5] += 0.0017730496453900709;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.00888888888888889;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9777777777777779;
            result[5] += 0.013333333333333336;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7333333333333333;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9565217391304348;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4057971014492754;
            result[5] += 0.5652173913043478;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0.005763688760806916;
            result[2] += 0;
            result[3] += 0.037463976945244955;
            result[4] += 0.005763688760806916;
            result[5] += 0.9510086455331412;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.00796812749003984;
            result[2] += 0;
            result[3] += 0.14741035856573706;
            result[4] += 0.1593625498007968;
            result[5] += 0.6852589641434262;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7555555555555555;
            result[4] += 0;
            result[5] += 0.24444444444444444;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0.030927835051546393;
            result[1] += 0.09278350515463918;
            result[2] += 0;
            result[3] += 0.020618556701030927;
            result[4] += 0.845360824742268;
            result[5] += 0.010309278350515464;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.9905882352941177;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009411764705882352;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.3;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.76;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24;
            result[5] += 0;
          } else {
            result[0] += 0.8953386103781882;
            result[1] += 0.006156552330694811;
            result[2] += 0.0008795074758135445;
            result[3] += 0.014072119613016711;
            result[4] += 0.06508355321020229;
            result[5] += 0.018469656992084433;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.005917159763313609;
            result[2] += 0.04142011834319527;
            result[3] += 0.39644970414201186;
            result[4] += 0.07692307692307693;
            result[5] += 0.47928994082840237;
          } else {
            result[0] += 0.32786885245901637;
            result[1] += 0;
            result[2] += 0.4918032786885246;
            result[3] += 0.08196721311475409;
            result[4] += 0.01639344262295082;
            result[5] += 0.08196721311475409;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.10526315789473684;
            result[2] += 0;
            result[3] += 0.2631578947368421;
            result[4] += 0.5789473684210527;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.078125;
            result[4] += 0;
            result[5] += 0.875;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7362637362637363;
            result[4] += 0.01098901098901099;
            result[5] += 0.25274725274725274;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.044642857142857144;
            result[1] += 0.07142857142857142;
            result[2] += 0.2767857142857143;
            result[3] += 0.4642857142857143;
            result[4] += 0.008928571428571428;
            result[5] += 0.13392857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8367346938775511;
            result[3] += 0.16326530612244897;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 0.8250000000000001;
            result[1] += 0.07500000000000001;
            result[2] += 0.10000000000000002;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.10526315789473686;
            result[1] += 0.15789473684210528;
            result[2] += 0.42105263157894746;
            result[3] += 0;
            result[4] += 0.26315789473684215;
            result[5] += 0.05263157894736843;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.00909090909090909;
            result[1] += 0;
            result[2] += 0.42727272727272725;
            result[3] += 0.4909090909090909;
            result[4] += 0;
            result[5] += 0.07272727272727272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7727272727272727;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9487179487179487;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0;
            result[2] += 0.8347107438016529;
            result[3] += 0.15702479338842976;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9512195121951219;
            result[3] += 0.04878048780487805;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002352941176470588;
            result[1] += 0;
            result[2] += 0.9976470588235294;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59) ) ) {
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.01968503937007874;
            result[1] += 0.003937007874015748;
            result[2] += 0.003937007874015748;
            result[3] += 0;
            result[4] += 0.937007874015748;
            result[5] += 0.03543307086614173;
          } else {
            result[0] += 0.41379310344827586;
            result[1] += 0.017241379310344827;
            result[2] += 0;
            result[3] += 0.07758620689655173;
            result[4] += 0.1896551724137931;
            result[5] += 0.3017241379310345;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.0024330900243309003;
            result[2] += 0;
            result[3] += 0.0364963503649635;
            result[4] += 0.06082725060827251;
            result[5] += 0.9002433090024331;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4738372093023256;
            result[4] += 0.023255813953488372;
            result[5] += 0.502906976744186;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.0962566844919786;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0.0106951871657754;
            result[4] += 0.5240641711229946;
            result[5] += 0.0053475935828877;
          } else {
            result[0] += 0.8774422735346359;
            result[1] += 0.004440497335701598;
            result[2] += 0.004440497335701598;
            result[3] += 0.02664298401420959;
            result[4] += 0.06838365896980461;
            result[5] += 0.018650088809946713;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0034965034965034965;
            result[1] += 0.045454545454545456;
            result[2] += 0.15734265734265734;
            result[3] += 0.4405594405594406;
            result[4] += 0.055944055944055944;
            result[5] += 0.2972027972027972;
          } else {
            result[0] += 0.452054794520548;
            result[1] += 0;
            result[2] += 0.36986301369863017;
            result[3] += 0.06164383561643836;
            result[4] += 0.09589041095890412;
            result[5] += 0.020547945205479454;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10344827586206896;
            result[3] += 0.5172413793103449;
            result[4] += 0;
            result[5] += 0.3793103448275862;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444445;
            result[3] += 0.38888888888888895;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.2916666666666667;
            result[4] += 0;
            result[5] += 0.2916666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)123.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7358490566037735;
            result[3] += 0.2641509433962264;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.918918918918919;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0.11111111111111112;
            result[1] += 0;
            result[2] += 0.7222222222222223;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.0013623978201634877;
            result[1] += 0;
            result[2] += 0.9809264305177112;
            result[3] += 0.01634877384196185;
            result[4] += 0;
            result[5] += 0.0013623978201634877;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0.01606425702811245;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9718875502008032;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0.018518518518518517;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0.25925925925925924;
            result[5] += 0.6481481481481481;
          } else {
            result[0] += 0.9743589743589743;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.0013280212483399733;
            result[2] += 0;
            result[3] += 0.02390438247011952;
            result[4] += 0.02390438247011952;
            result[5] += 0.950863213811421;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.014814814814814815;
            result[1] += 0.037037037037037035;
            result[2] += 0.03333333333333333;
            result[3] += 0.2740740740740741;
            result[4] += 0.06666666666666667;
            result[5] += 0.5740740740740741;
          } else {
            result[0] += 0.0058823529411764705;
            result[1] += 0.011764705882352941;
            result[2] += 0;
            result[3] += 0.6882352941176471;
            result[4] += 0.011764705882352941;
            result[5] += 0.2823529411764706;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.08823529411764706;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8529411764705882;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0410958904109589;
            result[1] += 0.13013698630136986;
            result[2] += 0.02054794520547945;
            result[3] += 0.00684931506849315;
            result[4] += 0.7671232876712328;
            result[5] += 0.03424657534246575;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8456735057983943;
            result[1] += 0.0026761819803746653;
            result[2] += 0.009812667261373774;
            result[3] += 0.03746654772524532;
            result[4] += 0.06779661016949153;
            result[5] += 0.036574487065120426;
          } else {
            result[0] += 0.15128205128205127;
            result[1] += 0.005128205128205128;
            result[2] += 0.24871794871794872;
            result[3] += 0.28205128205128205;
            result[4] += 0.05897435897435897;
            result[5] += 0.25384615384615383;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)71.5) ) ) {
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
            result[4] += 0.05;
            result[5] += 0.95;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.04918032786885246;
            result[1] += 0.01639344262295082;
            result[2] += 0.13114754098360656;
            result[3] += 0.7049180327868853;
            result[4] += 0.01639344262295082;
            result[5] += 0.08196721311475409;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
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
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7244094488188977;
            result[3] += 0.23622047244094488;
            result[4] += 0;
            result[5] += 0.03937007874015748;
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00598086124401914;
            result[1] += 0;
            result[2] += 0.9413875598086126;
            result[3] += 0.04665071770334929;
            result[4] += 0;
            result[5] += 0.00598086124401914;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004484304932735426;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9955156950672646;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01492537313432836;
            result[1] += 0.0746268656716418;
            result[2] += 0.01492537313432836;
            result[3] += 0.11940298507462688;
            result[4] += 0.4328358208955224;
            result[5] += 0.3432835820895523;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8823529411764706;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.001440922190201729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03025936599423631;
            result[4] += 0.021613832853025938;
            result[5] += 0.946685878962536;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0.27953890489913547;
            result[1] += 0.005763688760806916;
            result[2] += 0;
            result[3] += 0.11815561959654179;
            result[4] += 0.18155619596541786;
            result[5] += 0.414985590778098;
          } else {
            result[0] += 0.06266318537859007;
            result[1] += 0.0026109660574412533;
            result[2] += 0.028720626631853787;
            result[3] += 0.5091383812010444;
            result[4] += 0.02610966057441253;
            result[5] += 0.370757180156658;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.26595744680851063;
            result[2] += 0;
            result[3] += 0.010638297872340425;
            result[4] += 0.723404255319149;
            result[5] += 0;
          } else {
            result[0] += 0.8484320557491289;
            result[1] += 0.0156794425087108;
            result[2] += 0.009581881533101045;
            result[3] += 0.027874564459930314;
            result[4] += 0.06881533101045297;
            result[5] += 0.029616724738675958;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
            result[0] += 0.043209876543209874;
            result[1] += 0.05555555555555555;
            result[2] += 0.09259259259259259;
            result[3] += 0.19753086419753085;
            result[4] += 0.15432098765432098;
            result[5] += 0.4567901234567901;
          } else {
            result[0] += 0.0915492957746479;
            result[1] += 0;
            result[2] += 0.619718309859155;
            result[3] += 0.14084507042253525;
            result[4] += 0.04225352112676057;
            result[5] += 0.10563380281690142;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9629629629629629;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.85;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.5416666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.20833333333333334;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)117) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.72;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.08;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9059304703476483;
            result[3] += 0.08793456032719836;
            result[4] += 0;
            result[5] += 0.006134969325153374;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0.21052631578947367;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9947643979057592;
            result[3] += 0.005235602094240838;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)122.5) ) ) {
            result[0] += 0.003663003663003663;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.978021978021978;
            result[5] += 0.018315018315018316;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.5714285714285714;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.6082474226804123;
            result[1] += 0.12371134020618557;
            result[2] += 0;
            result[3] += 0.020618556701030927;
            result[4] += 0.18556701030927836;
            result[5] += 0.061855670103092786;
          } else {
            result[0] += 0.0009861932938856016;
            result[1] += 0.0039447731755424065;
            result[2] += 0.0009861932938856016;
            result[3] += 0.08875739644970414;
            result[4] += 0.04043392504930966;
            result[5] += 0.8648915187376726;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004672897196261682;
            result[3] += 0.7429906542056075;
            result[4] += 0;
            result[5] += 0.2523364485981308;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.3137254901960784;
            result[3] += 0.1568627450980392;
            result[4] += 0.0392156862745098;
            result[5] += 0.47058823529411764;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0.056;
            result[1] += 0.12;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.816;
            result[5] += 0.008;
          } else {
            result[0] += 0;
            result[1] += 0.8780487804878049;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12195121951219512;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.9974683544303797;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002531645569620253;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0.25862068965517243;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22413793103448276;
            result[4] += 0.1896551724137931;
            result[5] += 0.3275862068965517;
          } else {
            result[0] += 0.9087488240827846;
            result[1] += 0.007525870178739417;
            result[2] += 0.014111006585136407;
            result[3] += 0.024459078080903106;
            result[4] += 0.03857008466603951;
            result[5] += 0.00658513640639699;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.04602510460251046;
            result[1] += 0.03347280334728033;
            result[2] += 0.06694560669456066;
            result[3] += 0.34309623430962344;
            result[4] += 0.16736401673640167;
            result[5] += 0.34309623430962344;
          } else {
            result[0] += 0.4057971014492754;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.007246376811594203;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10869565217391304;
            result[4] += 0.15217391304347827;
            result[5] += 0.6956521739130435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.03529411764705882;
            result[2] += 0.18823529411764706;
            result[3] += 0.7058823529411765;
            result[4] += 0.011764705882352941;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7959183673469389;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.06122448979591837;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.9444444444444444;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6551724137931034;
            result[3] += 0.3448275862068966;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0.004878048780487805;
            result[1] += 0;
            result[2] += 0.9024390243902439;
            result[3] += 0.09268292682926829;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0020161290322580645;
            result[1] += 0;
            result[2] += 0.9959677419354839;
            result[3] += 0.0020161290322580645;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)122.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.0033444816053511705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9866220735785953;
            result[5] += 0.010033444816053512;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.65;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
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
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017069701280227598;
            result[4] += 0.029871977240398292;
            result[5] += 0.9530583214793741;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0.005277044854881266;
            result[1] += 0.021108179419525065;
            result[2] += 0.005277044854881266;
            result[3] += 0.25065963060686014;
            result[4] += 0.06596306068601583;
            result[5] += 0.6517150395778364;
          } else {
            result[0] += 0.17647058823529413;
            result[1] += 0;
            result[2] += 0.025210084033613446;
            result[3] += 0.11764705882352941;
            result[4] += 0.40336134453781514;
            result[5] += 0.2773109243697479;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8928571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10714285714285714;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.21428571428571427;
            result[2] += 0.03571428571428571;
            result[3] += 0.05357142857142857;
            result[4] += 0.6785714285714286;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.05660377358490566;
            result[1] += 0.5849056603773585;
            result[2] += 0;
            result[3] += 0.11320754716981132;
            result[4] += 0.22641509433962265;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0.8858536585365854;
            result[1] += 0.004878048780487805;
            result[2] += 0.005853658536585366;
            result[3] += 0.041951219512195125;
            result[4] += 0.042926829268292686;
            result[5] += 0.018536585365853658;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.023346303501945526;
            result[1] += 0.007782101167315175;
            result[2] += 0.12062256809338522;
            result[3] += 0.44357976653696496;
            result[4] += 0.019455252918287938;
            result[5] += 0.3852140077821012;
          } else {
            result[0] += 0.74;
            result[1] += 0.02;
            result[2] += 0.06;
            result[3] += 0;
            result[4] += 0.14;
            result[5] += 0.04;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.03608247422680412;
            result[2] += 0.12886597938144329;
            result[3] += 0.6237113402061856;
            result[4] += 0;
            result[5] += 0.211340206185567;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8636363636363636;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428572;
            result[3] += 0.07142857142857144;
            result[4] += 0;
            result[5] += 0.07142857142857144;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7368421052631579;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0.04285714285714286;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.21428571428571427;
            result[4] += 0.02857142857142857;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0.020879120879120874;
            result[1] += 0;
            result[2] += 0.9219780219780218;
            result[3] += 0.050549450549450536;
            result[4] += 0;
            result[5] += 0.006593406593406592;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0.00980392156862745;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9901960784313726;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0.3076923076923077;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0.0032085561497326204;
            result[1] += 0.011764705882352941;
            result[2] += 0;
            result[3] += 0.06631016042780749;
            result[4] += 0.059893048128342244;
            result[5] += 0.8588235294117647;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10714285714285714;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0.005405405405405406;
            result[1] += 0;
            result[2] += 0.005405405405405406;
            result[3] += 0.7135135135135136;
            result[4] += 0;
            result[5] += 0.2756756756756757;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.9977973568281938;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022026431718061676;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.09444444444444444;
            result[1] += 0.15555555555555556;
            result[2] += 0.005555555555555556;
            result[3] += 0.016666666666666666;
            result[4] += 0.6722222222222223;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.8933333333333333;
            result[1] += 0.015111111111111112;
            result[2] += 0;
            result[3] += 0.024;
            result[4] += 0.05333333333333334;
            result[5] += 0.014222222222222223;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113.5) ) ) {
            result[0] += 0.04276315789473684;
            result[1] += 0.019736842105263157;
            result[2] += 0.2631578947368421;
            result[3] += 0.3256578947368421;
            result[4] += 0.0756578947368421;
            result[5] += 0.2730263157894737;
          } else {
            result[0] += 0.7439024390243902;
            result[1] += 0;
            result[2] += 0.07317073170731707;
            result[3] += 0;
            result[4] += 0.18292682926829268;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
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
            result[3] += 0.044444444444444446;
            result[4] += 0;
            result[5] += 0.9555555555555556;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.125;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01388888888888889;
            result[3] += 0.7500000000000001;
            result[4] += 0.01388888888888889;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
            result[0] += 0.009345794392523364;
            result[1] += 0;
            result[2] += 0.42990654205607476;
            result[3] += 0.45794392523364486;
            result[4] += 0;
            result[5] += 0.102803738317757;
          } else {
            result[0] += 0.1935483870967742;
            result[1] += 0;
            result[2] += 0.8064516129032258;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)114) ) ) {
            result[0] += 0.24;
            result[1] += 0.04;
            result[2] += 0.72;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.839622641509434;
            result[3] += 0.1509433962264151;
            result[4] += 0;
            result[5] += 0.009433962264150943;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9786096256684492;
            result[3] += 0.01871657754010695;
            result[4] += 0;
            result[5] += 0.00267379679144385;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.17647058823529413;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.3333333333333333;
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
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015625;
            result[4] += 0.0109375;
            result[5] += 0.9734375;
          } else {
            result[0] += 0;
            result[1] += 0.03804347826086957;
            result[2] += 0;
            result[3] += 0.07608695652173914;
            result[4] += 0.09782608695652174;
            result[5] += 0.7880434782608695;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
            result[0] += 0.4411764705882353;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0.20588235294117646;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014925373134328358;
            result[3] += 0.09701492537313433;
            result[4] += 0.08208955223880597;
            result[5] += 0.8059701492537313;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7934782608695652;
            result[4] += 0.005434782608695652;
            result[5] += 0.20108695652173914;
          } else {
            result[0] += 0.03174603174603175;
            result[1] += 0.015873015873015876;
            result[2] += 0.14285714285714288;
            result[3] += 0.33333333333333337;
            result[4] += 0.03174603174603175;
            result[5] += 0.4444444444444445;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.9629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71.5) ) ) {
            result[0] += 0.26991150442477874;
            result[1] += 0.084070796460177;
            result[2] += 0;
            result[3] += 0.01327433628318584;
            result[4] += 0.5796460176991151;
            result[5] += 0.05309734513274336;
          } else {
            result[0] += 0.8933601609657947;
            result[1] += 0.018108651911468814;
            result[2] += 0;
            result[3] += 0.022132796780684104;
            result[4] += 0.04627766599597585;
            result[5] += 0.02012072434607646;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0.4444444444444445;
            result[1] += 0.02469135802469136;
            result[2] += 0.3641975308641976;
            result[3] += 0.06790123456790124;
            result[4] += 0.07407407407407408;
            result[5] += 0.02469135802469136;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.041666666666666664;
            result[4] += 0.041666666666666664;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0.02247191011235955;
            result[2] += 0.16853932584269662;
            result[3] += 0.6573033707865169;
            result[4] += 0.0056179775280898875;
            result[5] += 0.14606741573033707;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.04477611940298507;
            result[1] += 0.04477611940298507;
            result[2] += 0.04477611940298507;
            result[3] += 0.05970149253731343;
            result[4] += 0.3283582089552239;
            result[5] += 0.47761194029850745;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5370370370370371;
            result[3] += 0.2777777777777778;
            result[4] += 0.037037037037037035;
            result[5] += 0.14814814814814814;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.7333333333333333;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.010309278350515465;
            result[1] += 0;
            result[2] += 0.7010309278350516;
            result[3] += 0.21649484536082478;
            result[4] += 0.010309278350515465;
            result[5] += 0.06185567010309279;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006857142857142857;
            result[1] += 0;
            result[2] += 0.9371428571428572;
            result[3] += 0.05028571428571429;
            result[4] += 0;
            result[5] += 0.005714285714285714;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
            result[0] += 0.0078125;
            result[1] += 0.00390625;
            result[2] += 0;
            result[3] += 0.03515625;
            result[4] += 0.89453125;
            result[5] += 0.05859375;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.36;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.52;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045121951219512194;
            result[4] += 0.03414634146341464;
            result[5] += 0.9207317073170732;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0.030303030303030304;
            result[2] += 0.030303030303030304;
            result[3] += 0;
            result[4] += 0.21212121212121213;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010273972602739725;
            result[2] += 0.02054794520547945;
            result[3] += 0.5102739726027398;
            result[4] += 0.02054794520547945;
            result[5] += 0.4383561643835616;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976415094339622;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023584905660377358;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6809815950920245;
            result[1] += 0.03987730061349693;
            result[2] += 0.007668711656441718;
            result[3] += 0.02147239263803681;
            result[4] += 0.21932515337423314;
            result[5] += 0.03067484662576687;
          } else {
            result[0] += 0.052742616033755275;
            result[1] += 0.02109704641350211;
            result[2] += 0.1350210970464135;
            result[3] += 0.29957805907172996;
            result[4] += 0.10759493670886076;
            result[5] += 0.38396624472573837;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9517133956386293;
            result[1] += 0.012461059190031152;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03582554517133956;
            result[5] += 0;
          } else {
            result[0] += 0.21951219512195122;
            result[1] += 0;
            result[2] += 0.7073170731707317;
            result[3] += 0.024390243902439025;
            result[4] += 0.024390243902439025;
            result[5] += 0.024390243902439025;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0.04285714285714286;
            result[2] += 0.07142857142857142;
            result[3] += 0.5857142857142857;
            result[4] += 0.02857142857142857;
            result[5] += 0.2571428571428571;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8428571428571429;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.014285714285714285;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
            result[0] += 0.5806451612903226;
            result[1] += 0.03225806451612903;
            result[2] += 0.3870967741935484;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0036144578313253013;
            result[1] += 0;
            result[2] += 0.9530120481927711;
            result[3] += 0.04216867469879518;
            result[4] += 0;
            result[5] += 0.0012048192771084338;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
            result[0] += 0.016194331983805668;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9635627530364372;
            result[5] += 0.020242914979757085;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01483679525222552;
            result[4] += 0.019287833827893175;
            result[5] += 0.9658753709198813;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1534090909090909;
            result[4] += 0.22727272727272727;
            result[5] += 0.5568181818181818;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0.12972972972972974;
            result[1] += 0.07027027027027027;
            result[2] += 0.005405405405405406;
            result[3] += 0.11351351351351352;
            result[4] += 0.11351351351351352;
            result[5] += 0.5675675675675675;
          } else {
            result[0] += 0;
            result[1] += 0.01020408163265306;
            result[2] += 0.01020408163265306;
            result[3] += 0.7040816326530612;
            result[4] += 0.00510204081632653;
            result[5] += 0.27040816326530615;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.015037593984962405;
            result[1] += 0.38345864661654133;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6015037593984962;
            result[5] += 0;
          } else {
            result[0] += 0.8314144736842105;
            result[1] += 0.03536184210526316;
            result[2] += 0.012335526315789474;
            result[3] += 0.032072368421052634;
            result[4] += 0.05756578947368421;
            result[5] += 0.03125;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.024096385542168676;
            result[2] += 0.10040160642570281;
            result[3] += 0.3493975903614458;
            result[4] += 0.06827309236947791;
            result[5] += 0.4578313253012048;
          } else {
            result[0] += 0.26;
            result[1] += 0.015;
            result[2] += 0.4;
            result[3] += 0.195;
            result[4] += 0.09;
            result[5] += 0.04;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
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
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.027777777777777776;
            result[4] += 0.027777777777777776;
            result[5] += 0.8611111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.9523809523809523;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            result[0] += 0.06060606060606061;
            result[1] += 0.18181818181818182;
            result[2] += 0.24242424242424243;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0.3939393939393939;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5147058823529412;
            result[3] += 0.39705882352941185;
            result[4] += 0.01470588235294118;
            result[5] += 0.0735294117647059;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.09774436090225563;
            result[4] += 0;
            result[5] += 0.007518796992481203;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
            result[0] += 0.1016949152542373;
            result[1] += 0;
            result[2] += 0.8135593220338984;
            result[3] += 0.06779661016949153;
            result[4] += 0.01694915254237288;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9638888888888889;
            result[3] += 0.03611111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9779735682819384;
            result[5] += 0.022026431718061675;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0.11363636363636363;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.4772727272727273;
            result[1] += 0.10227272727272728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10227272727272728;
            result[5] += 0.3181818181818182;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.0033783783783783786;
            result[2] += 0;
            result[3] += 0.011824324324324325;
            result[4] += 0.011824324324324325;
            result[5] += 0.972972972972973;
          } else {
            result[0] += 0.007017543859649123;
            result[1] += 0;
            result[2] += 0.0035087719298245615;
            result[3] += 0.1824561403508772;
            result[4] += 0.21052631578947367;
            result[5] += 0.5964912280701754;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.0273972602739726;
            result[2] += 0;
            result[3] += 0.0547945205479452;
            result[4] += 0.0684931506849315;
            result[5] += 0.8493150684931506;
          } else {
            result[0] += 0.028169014084507043;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7112676056338029;
            result[4] += 0;
            result[5] += 0.2605633802816901;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0.0310077519379845;
            result[1] += 0.124031007751938;
            result[2] += 0;
            result[3] += 0.062015503875969;
            result[4] += 0.7209302325581396;
            result[5] += 0.062015503875969;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8464193270060397;
            result[1] += 0.010353753235547885;
            result[2] += 0.005176876617773943;
            result[3] += 0.023295944779982744;
            result[4] += 0.055220017256255395;
            result[5] += 0.059534081104400345;
          } else {
            result[0] += 0.18591549295774648;
            result[1] += 0.008450704225352112;
            result[2] += 0.18591549295774648;
            result[3] += 0.27323943661971833;
            result[4] += 0.04225352112676056;
            result[5] += 0.30422535211267604;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.45454545454545453;
            result[1] += 0.5454545454545454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.061224489795918366;
            result[2] += 0;
            result[3] += 0.32653061224489793;
            result[4] += 0.16326530612244897;
            result[5] += 0.40816326530612246;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.021739130434782608;
            result[3] += 0.043478260869565216;
            result[4] += 0.06521739130434782;
            result[5] += 0.8695652173913043;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03529411764705882;
            result[3] += 0.9058823529411765;
            result[4] += 0.011764705882352941;
            result[5] += 0.047058823529411764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3877551020408163;
            result[3] += 0.4489795918367347;
            result[4] += 0;
            result[5] += 0.16326530612244897;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.41379310344827586;
            result[3] += 0.4482758620689655;
            result[4] += 0;
            result[5] += 0.13793103448275862;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0.18518518518518517;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.6153846153846154;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.3076923076923077;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6101694915254238;
            result[3] += 0.13559322033898305;
            result[4] += 0.01694915254237288;
            result[5] += 0.23728813559322035;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0.006024096385542169;
            result[1] += 0;
            result[2] += 0.8614457831325302;
            result[3] += 0.12048192771084337;
            result[4] += 0.0030120481927710845;
            result[5] += 0.009036144578313253;
          } else {
            result[0] += 0.0018761726078799245;
            result[1] += 0;
            result[2] += 0.9774859287054407;
            result[3] += 0.016885553470919322;
            result[4] += 0;
            result[5] += 0.003752345215759849;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8076923076923077;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56) ) ) {
            result[0] += 0.8536585365853658;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14634146341463414;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0.046875;
            result[4] += 0.5625;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.43478260869565216;
            result[5] += 0.391304347826087;
          } else {
            result[0] += 0;
            result[1] += 0.004968944099378882;
            result[2] += 0;
            result[3] += 0.03229813664596273;
            result[4] += 0.02981366459627329;
            result[5] += 0.9329192546583851;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
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
            result[3] += 0.11956521739130435;
            result[4] += 0;
            result[5] += 0.8804347826086957;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015151515151515152;
            result[3] += 0.25757575757575757;
            result[4] += 0.10606060606060606;
            result[5] += 0.6212121212121212;
          } else {
            result[0] += 0.03211009174311927;
            result[1] += 0.009174311926605505;
            result[2] += 0.013761467889908258;
            result[3] += 0.6972477064220184;
            result[4] += 0.0045871559633027525;
            result[5] += 0.24311926605504589;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.2777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)47) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0.8428571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0.014285714285714285;
          } else {
            result[0] += 0.011363636363636364;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.022727272727272728;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            result[0] += 0.48747591522157996;
            result[1] += 0.02119460500963391;
            result[2] += 0.0674373795761079;
            result[3] += 0.11368015414258188;
            result[4] += 0.1579961464354528;
            result[5] += 0.15221579961464354;
          } else {
            result[0] += 0.8721311475409838;
            result[1] += 0;
            result[2] += 0.03387978142076503;
            result[3] += 0.03497267759562842;
            result[4] += 0.050273224043715856;
            result[5] += 0.008743169398907106;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
            result[0] += 0.21739130434782608;
            result[1] += 0.13043478260869565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6521739130434783;
            result[5] += 0;
          } else {
            result[0] += 0.013157894736842106;
            result[1] += 0.006578947368421053;
            result[2] += 0.11842105263157895;
            result[3] += 0.5460526315789475;
            result[4] += 0.006578947368421053;
            result[5] += 0.30921052631578955;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7032967032967034;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45098039215686275;
            result[3] += 0.45098039215686275;
            result[4] += 0;
            result[5] += 0.09803921568627451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.06896551724137931;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002306805074971165;
            result[1] += 0;
            result[2] += 0.9446366782006921;
            result[3] += 0.0461361014994233;
            result[4] += 0;
            result[5] += 0.006920415224913495;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9942857142857143;
            result[5] += 0.005714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8448275862068966;
            result[5] += 0.15517241379310345;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
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
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51.5) ) ) {
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
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024495677233429394;
            result[4] += 0.018731988472622477;
            result[5] += 0.9567723342939481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.1;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.0040650406504065045;
            result[1] += 0.07723577235772358;
            result[2] += 0;
            result[3] += 0.17073170731707318;
            result[4] += 0.13008130081300814;
            result[5] += 0.6178861788617886;
          } else {
            result[0] += 0.01730103806228374;
            result[1] += 0;
            result[2] += 0.05536332179930796;
            result[3] += 0.5605536332179931;
            result[4] += 0.01384083044982699;
            result[5] += 0.35294117647058826;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.029850746268656716;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9552238805970149;
            result[5] += 0.014925373134328358;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9921671018276762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007832898172323759;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            result[0] += 0.06666666666666668;
            result[1] += 0.08000000000000002;
            result[2] += 0;
            result[3] += 0.10666666666666669;
            result[4] += 0.6666666666666667;
            result[5] += 0.08000000000000002;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8946412352406903;
            result[1] += 0.0036330608537693005;
            result[2] += 0;
            result[3] += 0.009082652134423252;
            result[4] += 0.08356039963669391;
            result[5] += 0.009082652134423252;
          } else {
            result[0] += 0.3191489361702128;
            result[1] += 0.03546099290780142;
            result[2] += 0.12056737588652482;
            result[3] += 0.23404255319148937;
            result[4] += 0.14184397163120568;
            result[5] += 0.14893617021276595;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.04201680672268908;
            result[2] += 0.03361344537815126;
            result[3] += 0.14285714285714285;
            result[4] += 0.14285714285714285;
            result[5] += 0.6386554621848739;
          } else {
            result[0] += 0.008849557522123894;
            result[1] += 0.061946902654867256;
            result[2] += 0.17699115044247787;
            result[3] += 0.4424778761061947;
            result[4] += 0.02654867256637168;
            result[5] += 0.2831858407079646;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.38947368421052636;
            result[1] += 0;
            result[2] += 0.46315789473684216;
            result[3] += 0.02105263157894737;
            result[4] += 0.09473684210526317;
            result[5] += 0.03157894736842106;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.019867549668874173;
            result[1] += 0;
            result[2] += 0.4370860927152318;
            result[3] += 0.39072847682119205;
            result[4] += 0;
            result[5] += 0.152317880794702;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9318181818181819;
            result[3] += 0.02272727272727273;
            result[4] += 0;
            result[5] += 0.04545454545454546;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.007352941176470588;
            result[1] += 0;
            result[2] += 0.7794117647058824;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.03676470588235294;
          } else {
            result[0] += 0.008894536213468869;
            result[1] += 0;
            result[2] += 0.9542566709021602;
            result[3] += 0.03176620076238882;
            result[4] += 0;
            result[5] += 0.005082592121982211;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.004878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0.01951219512195122;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6944444444444444;
            result[5] += 0.2777777777777778;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.43243243243243246;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05405405405405406;
            result[4] += 0.47297297297297297;
            result[5] += 0.04054054054054054;
          } else {
            result[0] += 0.004336513443191674;
            result[1] += 0.0026019080659150044;
            result[2] += 0.003469210754553339;
            result[3] += 0.0997398091934085;
            result[4] += 0.05637467476149176;
            result[5] += 0.8334778837814397;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9193548387096774;
            result[4] += 0;
            result[5] += 0.08064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.11688311688311688;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5974025974025974;
            result[5] += 0;
          } else {
            result[0] += 0.8758992805755396;
            result[1] += 0.008992805755395683;
            result[2] += 0.006294964028776978;
            result[3] += 0.03866906474820144;
            result[4] += 0.04136690647482014;
            result[5] += 0.02877697841726619;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0728744939271255;
            result[1] += 0.024291497975708502;
            result[2] += 0.11740890688259109;
            result[3] += 0.46558704453441296;
            result[4] += 0.03643724696356275;
            result[5] += 0.2834008097165992;
          } else {
            result[0] += 0.3626943005181348;
            result[1] += 0.025906735751295342;
            result[2] += 0.4611398963730571;
            result[3] += 0.04663212435233161;
            result[4] += 0.056994818652849756;
            result[5] += 0.04663212435233161;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.034482758620689655;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.896551724137931;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
            result[0] += 0.026315789473684213;
            result[1] += 0.026315789473684213;
            result[2] += 0.10526315789473685;
            result[3] += 0.605263157894737;
            result[4] += 0;
            result[5] += 0.2368421052631579;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6511627906976745;
            result[3] += 0.3178294573643411;
            result[4] += 0;
            result[5] += 0.031007751937984496;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
            result[0] += 0.06818181818181818;
            result[1] += 0.045454545454545456;
            result[2] += 0.5227272727272727;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.8899082568807339;
            result[3] += 0.10091743119266056;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.24;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001584786053882726;
            result[1] += 0;
            result[2] += 0.9730586370839936;
            result[3] += 0.025356576862123614;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.004347826086956523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9695652173913044;
            result[5] += 0.026086956521739132;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0.003942181340341655;
            result[2] += 0;
            result[3] += 0.022339027595269383;
            result[4] += 0.018396846254927726;
            result[5] += 0.9553219448094612;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019230769230769232;
            result[4] += 0.17307692307692307;
            result[5] += 0.057692307692307696;
          } else {
            result[0] += 0.005836575875486381;
            result[1] += 0.0019455252918287938;
            result[2] += 0.0019455252918287938;
            result[3] += 0.35992217898832685;
            result[4] += 0.09922178988326848;
            result[5] += 0.5311284046692607;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
            result[0] += 0.008928571428571428;
            result[1] += 0.13392857142857142;
            result[2] += 0.03571428571428571;
            result[3] += 0.026785714285714284;
            result[4] += 0.7767857142857143;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7647058823529411;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23529411764705882;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.16455696202531644;
            result[1] += 0.5822784810126582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25316455696202533;
            result[5] += 0;
          } else {
            result[0] += 0.8802228412256268;
            result[1] += 0.004642525533890436;
            result[2] += 0.002785515320334262;
            result[3] += 0.04085422469823584;
            result[4] += 0.04549675023212628;
            result[5] += 0.025998142989786442;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0.0456140350877193;
            result[1] += 0.010526315789473684;
            result[2] += 0.23157894736842105;
            result[3] += 0.38596491228070173;
            result[4] += 0.03508771929824561;
            result[5] += 0.2912280701754386;
          } else {
            result[0] += 0.6190476190476191;
            result[1] += 0.013605442176870748;
            result[2] += 0.2789115646258503;
            result[3] += 0;
            result[4] += 0.027210884353741496;
            result[5] += 0.061224489795918366;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0.04;
            result[5] += 0.88;
          } else {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0.5625;
            result[3] += 0.125;
            result[4] += 0.0625;
            result[5] += 0.0625;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9137931034482759;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0.05172413793103448;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.72;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.872;
            result[3] += 0.096;
            result[4] += 0;
            result[5] += 0.032;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8802083333333334;
            result[3] += 0.11979166666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.0650887573964497;
            result[4] += 0;
            result[5] += 0.011834319526627219;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9926108374384236;
            result[3] += 0.007389162561576354;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.0035087719298245615;
            result[1] += 0.0035087719298245615;
            result[2] += 0;
            result[3] += 0.007017543859649123;
            result[4] += 0.9543859649122807;
            result[5] += 0.031578947368421054;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9404761904761905;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023809523809523808;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.14084507042253522;
            result[1] += 0.028169014084507043;
            result[2] += 0;
            result[3] += 0.04225352112676056;
            result[4] += 0.5774647887323944;
            result[5] += 0.2112676056338028;
          } else {
            result[0] += 0.0010845986984815619;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07049891540130152;
            result[4] += 0.04772234273318872;
            result[5] += 0.8806941431670282;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.7755102040816327;
            result[2] += 0;
            result[3] += 0.06122448979591837;
            result[4] += 0.163265306122449;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
            result[0] += 0.3097826086956522;
            result[1] += 0.10869565217391305;
            result[2] += 0.01630434782608696;
            result[3] += 0.005434782608695653;
            result[4] += 0.4945652173913044;
            result[5] += 0.06521739130434784;
          } else {
            result[0] += 0.901565995525727;
            result[1] += 0.0145413870246085;
            result[2] += 0.0011185682326621924;
            result[3] += 0.02348993288590604;
            result[4] += 0.03355704697986577;
            result[5] += 0.025727069351230425;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
            result[0] += 0.023728813559322035;
            result[1] += 0.0423728813559322;
            result[2] += 0.1152542372881356;
            result[3] += 0.49322033898305084;
            result[4] += 0.03559322033898305;
            result[5] += 0.28983050847457625;
          } else {
            result[0] += 0.6394849785407726;
            result[1] += 0.017167381974248927;
            result[2] += 0.21030042918454936;
            result[3] += 0.02575107296137339;
            result[4] += 0.06866952789699571;
            result[5] += 0.03862660944206009;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6551724137931034;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0.20689655172413793;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3870967741935484;
            result[3] += 0.5806451612903226;
            result[4] += 0;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7662337662337663;
            result[3] += 0.2077922077922078;
            result[4] += 0;
            result[5] += 0.025974025974025976;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0.011494252873563218;
            result[1] += 0;
            result[2] += 0.9448275862068966;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0.009195402298850575;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.003745318352059925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9850187265917603;
            result[5] += 0.011235955056179775;
          } else {
            result[0] += 0.04;
            result[1] += 0.04;
            result[2] += 0.04;
            result[3] += 0.04;
            result[4] += 0.52;
            result[5] += 0.32;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0012787723785166241;
            result[1] += 0.0012787723785166241;
            result[2] += 0;
            result[3] += 0.028132992327365727;
            result[4] += 0.04475703324808184;
            result[5] += 0.9245524296675192;
          } else {
            result[0] += 0.10377358490566038;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1320754716981132;
            result[4] += 0.2358490566037736;
            result[5] += 0.5283018867924528;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.13548387096774195;
            result[1] += 0.012903225806451613;
            result[2] += 0;
            result[3] += 0.23225806451612904;
            result[4] += 0.05161290322580645;
            result[5] += 0.567741935483871;
          } else {
            result[0] += 0.010638297872340425;
            result[1] += 0.005319148936170213;
            result[2] += 0.031914893617021274;
            result[3] += 0.7393617021276596;
            result[4] += 0;
            result[5] += 0.2127659574468085;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.8507462686567164;
            result[2] += 0;
            result[3] += 0.07462686567164178;
            result[4] += 0.07462686567164178;
            result[5] += 0;
          } else {
            result[0] += 0.09433962264150944;
            result[1] += 0.11949685534591195;
            result[2] += 0.012578616352201259;
            result[3] += 0.025157232704402517;
            result[4] += 0.6918238993710691;
            result[5] += 0.05660377358490566;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.4445983379501386;
            result[1] += 0.013850415512465377;
            result[2] += 0.09556786703601111;
            result[3] += 0.1800554016620499;
            result[4] += 0.0512465373961219;
            result[5] += 0.21468144044321336;
          } else {
            result[0] += 0.9067357512953368;
            result[1] += 0.0025906735751295338;
            result[2] += 0.02849740932642487;
            result[3] += 0.0038860103626943004;
            result[4] += 0.04922279792746114;
            result[5] += 0.009067357512953367;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.918918918918919;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.734375;
            result[3] += 0.234375;
            result[4] += 0;
            result[5] += 0.03125;
          } else {
            result[0] += 0.0037593984962406013;
            result[1] += 0;
            result[2] += 0.9273182957393483;
            result[3] += 0.05889724310776942;
            result[4] += 0;
            result[5] += 0.010025062656641603;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9910714285714286;
            result[5] += 0.008928571428571428;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
            result[0] += 0.046153846153846156;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5230769230769231;
            result[5] += 0.4307692307692308;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011419249592169658;
            result[4] += 0.01631321370309951;
            result[5] += 0.9722675367047309;
          } else {
            result[0] += 0.0036363636363636364;
            result[1] += 0.05454545454545454;
            result[2] += 0.04;
            result[3] += 0.14181818181818182;
            result[4] += 0.07636363636363637;
            result[5] += 0.6836363636363636;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23170731707317074;
            result[4] += 0.036585365853658534;
            result[5] += 0.7317073170731707;
          } else {
            result[0] += 0;
            result[1] += 0.014423076923076924;
            result[2] += 0.052884615384615384;
            result[3] += 0.6875;
            result[4] += 0;
            result[5] += 0.24519230769230768;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9512195121951219;
            result[5] += 0.036585365853658534;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.002314814814814815;
            result[1] += 0.9953703703703705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002314814814814815;
            result[5] += 0;
          } else {
            result[0] += 0.01851851851851852;
            result[1] += 0.5740740740740742;
            result[2] += 0;
            result[3] += 0.1851851851851852;
            result[4] += 0.1851851851851852;
            result[5] += 0.03703703703703704;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.32903225806451614;
            result[1] += 0.16129032258064516;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5032258064516129;
            result[5] += 0.0064516129032258064;
          } else {
            result[0] += 0.8927911275415896;
            result[1] += 0.0036968576709796672;
            result[2] += 0.006469500924214418;
            result[3] += 0.019408502772643253;
            result[4] += 0.04713493530499076;
            result[5] += 0.030499075785582256;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0.01171875;
            result[1] += 0.00390625;
            result[2] += 0.17578125;
            result[3] += 0.359375;
            result[4] += 0.02734375;
            result[5] += 0.421875;
          } else {
            result[0] += 0.5042016806722689;
            result[1] += 0.03361344537815126;
            result[2] += 0.29411764705882354;
            result[3] += 0.05042016806722689;
            result[4] += 0.10084033613445378;
            result[5] += 0.01680672268907563;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.2105263157894737;
            result[1] += 0;
            result[2] += 0.31578947368421056;
            result[3] += 0;
            result[4] += 0.15789473684210528;
            result[5] += 0.31578947368421056;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.8541666666666666;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5333333333333334;
            result[3] += 0.3666666666666667;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6615384615384615;
            result[3] += 0.3384615384615385;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00423728813559322;
            result[1] += 0;
            result[2] += 0.8940677966101694;
            result[3] += 0.1016949152542373;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8316831683168316;
            result[3] += 0.13861386138613863;
            result[4] += 0;
            result[5] += 0.0297029702970297;
          } else {
            result[0] += 0.025423728813559324;
            result[1] += 0;
            result[2] += 0.9322033898305084;
            result[3] += 0.03389830508474576;
            result[4] += 0;
            result[5] += 0.00847457627118644;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9948849104859335;
            result[3] += 0.005115089514066497;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9954545454545455;
            result[5] += 0.004545454545454545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.8181818181818182;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.09375;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.6875;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.23809523809523808;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.5584415584415584;
            result[1] += 0.012987012987012988;
            result[2] += 0;
            result[3] += 0.03896103896103896;
            result[4] += 0.33766233766233766;
            result[5] += 0.05194805194805195;
          } else {
            result[0] += 0.007360672975814932;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.054679284963196635;
            result[4] += 0.052576235541535225;
            result[5] += 0.8853838065194533;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.003003003003003003;
            result[2] += 0.009009009009009009;
            result[3] += 0.5555555555555556;
            result[4] += 0.03003003003003003;
            result[5] += 0.4024024024024024;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += 0.015873015873015876;
            result[1] += 0.888888888888889;
            result[2] += 0;
            result[3] += 0.03174603174603175;
            result[4] += 0.0634920634920635;
            result[5] += 0;
          } else {
            result[0] += 0.11643835616438356;
            result[1] += 0.17123287671232876;
            result[2] += 0.0136986301369863;
            result[3] += 0.0273972602739726;
            result[4] += 0.6301369863013698;
            result[5] += 0.0410958904109589;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8738574040219378;
            result[1] += 0.013711151736745886;
            result[2] += 0.011882998171846435;
            result[3] += 0.025594149908592323;
            result[4] += 0.051188299817184646;
            result[5] += 0.02376599634369287;
          } else {
            result[0] += 0.12422360248447206;
            result[1] += 0.04658385093167702;
            result[2] += 0.3043478260869566;
            result[3] += 0.24844720496894412;
            result[4] += 0.031055900621118016;
            result[5] += 0.24534161490683232;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91) ) ) {
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
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.04166666666666667;
            result[2] += 0.16666666666666669;
            result[3] += 0.6875000000000001;
            result[4] += 0;
            result[5] += 0.10416666666666669;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.21428571428571427;
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
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.5;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8285714285714286;
            result[1] += 0;
            result[2] += 0.17142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32;
            result[3] += 0.64;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.782608695652174;
            result[3] += 0.1956521739130435;
            result[4] += 0;
            result[5] += 0.021739130434782608;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9615861214374226;
            result[3] += 0.032218091697645605;
            result[4] += 0;
            result[5] += 0.0061957868649318475;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.013574660633484163;
            result[1] += 0.02262443438914027;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9321266968325792;
            result[5] += 0.03167420814479638;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30612244897959184;
            result[5] += 0.6938775510204082;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.00510204081632653;
            result[2] += 0;
            result[3] += 0.029336734693877552;
            result[4] += 0.039540816326530615;
            result[5] += 0.9260204081632653;
          } else {
            result[0] += 0;
            result[1] += 0.034934497816593885;
            result[2] += 0;
            result[3] += 0.2314410480349345;
            result[4] += 0.08733624454148471;
            result[5] += 0.6462882096069869;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8541666666666666;
            result[4] += 0;
            result[5] += 0.14583333333333334;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.1724137931034483;
            result[4] += 0.017241379310344827;
            result[5] += 0.6551724137931034;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.07211538461538461;
            result[2] += 0.014423076923076924;
            result[3] += 0.04326923076923077;
            result[4] += 0.7355769230769231;
            result[5] += 0.057692307692307696;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8177816901408451;
            result[1] += 0.016725352112676055;
            result[2] += 0.006161971830985915;
            result[3] += 0.02640845070422535;
            result[4] += 0.0721830985915493;
            result[5] += 0.06073943661971831;
          } else {
            result[0] += 0.22396856581532418;
            result[1] += 0.0412573673870334;
            result[2] += 0.2180746561886051;
            result[3] += 0.3045186640471513;
            result[4] += 0.03732809430255403;
            result[5] += 0.17485265225933203;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)117.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
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
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.00423728813559322;
            result[1] += 0;
            result[2] += 0.8559322033898306;
            result[3] += 0.1228813559322034;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003205128205128205;
            result[1] += 0;
            result[2] += 0.9711538461538461;
            result[3] += 0.022435897435897436;
            result[4] += 0;
            result[5] += 0.003205128205128205;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003745318352059925;
            result[1] += 0.003745318352059925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.951310861423221;
            result[5] += 0.04119850187265917;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0.001430615164520744;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.032904148783977114;
            result[4] += 0.01859799713876967;
            result[5] += 0.9470672389127325;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
            result[0] += 0.3564356435643564;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019801980198019802;
            result[4] += 0.44554455445544555;
            result[5] += 0.1782178217821782;
          } else {
            result[0] += 0.029953917050691243;
            result[1] += 0.002304147465437788;
            result[2] += 0.0069124423963133645;
            result[3] += 0.4377880184331797;
            result[4] += 0.03225806451612903;
            result[5] += 0.49078341013824883;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.22119815668202766;
            result[1] += 0.17050691244239632;
            result[2] += 0;
            result[3] += 0.018433179723502304;
            result[4] += 0.5161290322580645;
            result[5] += 0.07373271889400922;
          } else {
            result[0] += 0.8653500897666068;
            result[1] += 0.009874326750448833;
            result[2] += 0.00807899461400359;
            result[3] += 0.0296229802513465;
            result[4] += 0.027827648114901255;
            result[5] += 0.059245960502693;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0784313725490196;
            result[3] += 0.5294117647058824;
            result[4] += 0.0196078431372549;
            result[5] += 0.37254901960784315;
          } else {
            result[0] += 0.1724137931034483;
            result[1] += 0.04310344827586207;
            result[2] += 0.46120689655172414;
            result[3] += 0.15948275862068967;
            result[4] += 0.0603448275862069;
            result[5] += 0.10344827586206896;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404255;
            result[3] += 0.06382978723404255;
            result[4] += 0.06382978723404255;
            result[5] += 0.8085106382978723;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.375;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.175;
            result[3] += 0.775;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.09090909090909091;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7532467532467533;
            result[3] += 0.19480519480519481;
            result[4] += 0;
            result[5] += 0.05194805194805195;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014492753623188408;
            result[1] += 0;
            result[2] += 0.8586956521739132;
            result[3] += 0.11231884057971016;
            result[4] += 0;
            result[5] += 0.014492753623188408;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9419642857142857;
            result[3] += 0.05803571428571429;
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
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
            result[0] += 0.0036101083032490976;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9783393501805054;
            result[5] += 0.018050541516245487;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0.4;
            result[5] += 0.3;
          } else {
            result[0] += 0.0027397260273972603;
            result[1] += 0;
            result[2] += 0.005479452054794521;
            result[3] += 0.021917808219178082;
            result[4] += 0.03424657534246575;
            result[5] += 0.9356164383561644;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7540983606557377;
            result[1] += 0.03278688524590164;
            result[2] += 0;
            result[3] += 0.04918032786885246;
            result[4] += 0.06557377049180328;
            result[5] += 0.09836065573770492;
          } else {
            result[0] += 0.00909090909090909;
            result[1] += 0.011363636363636364;
            result[2] += 0.011363636363636364;
            result[3] += 0.4;
            result[4] += 0.06818181818181818;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.006410256410256411;
            result[1] += 0.9743589743589745;
            result[2] += 0;
            result[3] += 0.004273504273504275;
            result[4] += 0.01495726495726496;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0.028571428571428574;
            result[2] += 0;
            result[3] += 0.014285714285714287;
            result[4] += 0.942857142857143;
            result[5] += 0.014285714285714287;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += 0.8652482269503544;
            result[1] += 0.004432624113475177;
            result[2] += 0.004432624113475177;
            result[3] += 0.028368794326241127;
            result[4] += 0.075354609929078;
            result[5] += 0.022163120567375884;
          } else {
            result[0] += 0.24481327800829877;
            result[1] += 0.024896265560165977;
            result[2] += 0.2531120331950208;
            result[3] += 0.24896265560165978;
            result[4] += 0.031120331950207473;
            result[5] += 0.19709543568464732;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05084745762711865;
            result[3] += 0.7627118644067796;
            result[4] += 0;
            result[5] += 0.1864406779661017;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
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
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0.5333333333333333;
            result[3] += 0.4222222222222222;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.06451612903225806;
            result[1] += 0;
            result[2] += 0.9032258064516129;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.25;
          } else {
            result[0] += 0.0035335689045936395;
            result[1] += 0.01060070671378092;
            result[2] += 0.8374558303886925;
            result[3] += 0.127208480565371;
            result[4] += 0;
            result[5] += 0.02120141342756184;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9907235621521335;
            result[3] += 0.00927643784786642;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7419354838709677;
            result[5] += 0.22580645161290322;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.5357142857142858;
            result[1] += 0.07142857142857144;
            result[2] += 0.03571428571428572;
            result[3] += 0;
            result[4] += 0.3214285714285715;
            result[5] += 0.03571428571428572;
          } else {
            result[0] += 0;
            result[1] += 0.015086206896551725;
            result[2] += 0;
            result[3] += 0.04741379310344827;
            result[4] += 0.04525862068965517;
            result[5] += 0.8922413793103449;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013333333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6533333333333333;
          } else {
            result[0] += 0.0234375;
            result[1] += 0;
            result[2] += 0.0078125;
            result[3] += 0.84375;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06976744186046512;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9186046511627907;
            result[5] += 0.011627906976744186;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0.7633410672853829;
            result[1] += 0.02088167053364269;
            result[2] += 0.02320185614849188;
            result[3] += 0.018561484918793503;
            result[4] += 0.14153132250580047;
            result[5] += 0.03248259860788863;
          } else {
            result[0] += 0.050699300699300696;
            result[1] += 0.08041958041958042;
            result[2] += 0.14335664335664336;
            result[3] += 0.3094405594405594;
            result[4] += 0.07517482517482517;
            result[5] += 0.3409090909090909;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
            result[0] += 0.2765957446808511;
            result[1] += 0.19148936170212766;
            result[2] += 0;
            result[3] += 0.02127659574468085;
            result[4] += 0.5106382978723404;
            result[5] += 0;
          } else {
            result[0] += 0.9297297297297298;
            result[1] += 0;
            result[2] += 0.022972972972972974;
            result[3] += 0.010810810810810811;
            result[4] += 0.032432432432432434;
            result[5] += 0.004054054054054054;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.3;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.18518518518518517;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210528;
            result[3] += 0.736842105263158;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0.08620689655172414;
            result[2] += 0.6379310344827587;
            result[3] += 0.1724137931034483;
            result[4] += 0.017241379310344827;
            result[5] += 0.06896551724137931;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)111.5) ) ) {
            result[0] += 0.014598540145985401;
            result[1] += 0;
            result[2] += 0.791970802919708;
            result[3] += 0.1678832116788321;
            result[4] += 0;
            result[5] += 0.025547445255474453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8372093023255814;
            result[3] += 0.16279069767441862;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9915397631133672;
            result[3] += 0.008460236886632826;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)60.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.0049261083743842365;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9802955665024631;
            result[5] += 0.014778325123152709;
          } else {
            result[0] += 0.14814814814814814;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7037037037037037;
            result[5] += 0.14814814814814814;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6511627906976745;
            result[5] += 0.3488372093023256;
          } else {
            result[0] += 0.0027063599458728013;
            result[1] += 0;
            result[2] += 0.0027063599458728013;
            result[3] += 0.03247631935047361;
            result[4] += 0.005412719891745603;
            result[5] += 0.9566982408660352;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.039473684210526314;
            result[1] += 0.3026315789473684;
            result[2] += 0;
            result[3] += 0.06578947368421052;
            result[4] += 0.4868421052631579;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0.09504950495049505;
            result[1] += 0;
            result[2] += 0.009900990099009901;
            result[3] += 0.32673267326732675;
            result[4] += 0.061386138613861385;
            result[5] += 0.5069306930693069;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
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
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
            result[0] += 0.07291666666666667;
            result[1] += 0.2708333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6354166666666666;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0.8433024431339511;
            result[1] += 0.005054759898904802;
            result[2] += 0.007582139848357203;
            result[3] += 0.041280539174389216;
            result[4] += 0.05897219882055602;
            result[5] += 0.04380791912384162;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0.010610079575596816;
            result[1] += 0.03713527851458886;
            result[2] += 0.22281167108753316;
            result[3] += 0.41909814323607425;
            result[4] += 0.03183023872679045;
            result[5] += 0.27851458885941643;
          } else {
            result[0] += 0.6717557251908397;
            result[1] += 0.0916030534351145;
            result[2] += 0.183206106870229;
            result[3] += 0;
            result[4] += 0.05343511450381679;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)110) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.7878787878787878;
            result[4] += 0;
            result[5] += 0.12121212121212122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8787878787878788;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
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
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.8245614035087719;
            result[3] += 0.07017543859649122;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7747747747747747;
            result[3] += 0.2072072072072072;
            result[4] += 0;
            result[5] += 0.018018018018018018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9388888888888889;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.011111111111111112;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0.05263157894736842;
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
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69) ) ) {
            result[0] += 0.003472222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.003472222222222222;
            result[4] += 0.9756944444444444;
            result[5] += 0.017361111111111112;
          } else {
            result[0] += 0.08;
            result[1] += 0.08;
            result[2] += 0;
            result[3] += 0.16;
            result[4] += 0.2;
            result[5] += 0.48;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9791666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.010416666666666668;
            result[5] += 0.010416666666666668;
          } else {
            result[0] += 0.28846153846153844;
            result[1] += 0;
            result[2] += 0.019230769230769232;
            result[3] += 0;
            result[4] += 0.5769230769230769;
            result[5] += 0.11538461538461539;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.015730337078651686;
            result[1] += 0.0011235955056179776;
            result[2] += 0;
            result[3] += 0.028089887640449437;
            result[4] += 0.07415730337078652;
            result[5] += 0.8808988764044944;
          } else {
            result[0] += 0.023622047244094488;
            result[1] += 0.007874015748031496;
            result[2] += 0.027559055118110236;
            result[3] += 0.33858267716535434;
            result[4] += 0.031496062992125984;
            result[5] += 0.5708661417322834;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
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
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.12244897959183673;
            result[1] += 0.32653061224489793;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5238095238095238;
            result[5] += 0.027210884353741496;
          } else {
            result[0] += 0.8494949494949495;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0.049494949494949494;
            result[4] += 0.03838383838383838;
            result[5] += 0.029292929292929294;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.018666666666666668;
            result[1] += 0.048;
            result[2] += 0.058666666666666666;
            result[3] += 0.4693333333333333;
            result[4] += 0.088;
            result[5] += 0.31733333333333336;
          } else {
            result[0] += 0.4134078212290502;
            result[1] += 0.011173184357541898;
            result[2] += 0.4581005586592178;
            result[3] += 0.07821229050279328;
            result[4] += 0.02793296089385474;
            result[5] += 0.011173184357541898;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
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
            result[2] += 0.08163265306122448;
            result[3] += 0.5306122448979592;
            result[4] += 0;
            result[5] += 0.3877551020408163;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23529411764705882;
            result[3] += 0.6176470588235294;
            result[4] += 0;
            result[5] += 0.14705882352941177;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8064516129032258;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7428571428571429;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.005494505494505496;
            result[1] += 0;
            result[2] += 0.9527472527472528;
            result[3] += 0.04065934065934067;
            result[4] += 0;
            result[5] += 0.0010989010989010991;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.010498687664041995;
            result[1] += 0.007874015748031496;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9212598425196851;
            result[5] += 0.06036745406824147;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.23333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.9310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
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
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)63.5) ) ) {
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
            result[3] += 0.0267022696929239;
            result[4] += 0.014686248331108143;
            result[5] += 0.9586114819759679;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.014285714285714285;
            result[1] += 0.007142857142857143;
            result[2] += 0.03571428571428571;
            result[3] += 0.18571428571428572;
            result[4] += 0.07142857142857142;
            result[5] += 0.6857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013513513513513514;
            result[3] += 0.7162162162162162;
            result[4] += 0;
            result[5] += 0.2702702702702703;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.872161480235492;
            result[1] += 0.015138772077375946;
            result[2] += 0;
            result[3] += 0.018502943650126155;
            result[4] += 0.07148864592094197;
            result[5] += 0.022708158116063918;
          } else {
            result[0] += 0.19411764705882356;
            result[1] += 0.023529411764705885;
            result[2] += 0.07058823529411766;
            result[3] += 0.23529411764705885;
            result[4] += 0.0647058823529412;
            result[5] += 0.411764705882353;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.019830028328611898;
            result[1] += 0.014164305949008499;
            result[2] += 0.09915014164305949;
            result[3] += 0.5127478753541076;
            result[4] += 0.06515580736543909;
            result[5] += 0.28895184135977336;
          } else {
            result[0] += 0.3096774193548387;
            result[1] += 0.0064516129032258064;
            result[2] += 0.44516129032258067;
            result[3] += 0.03870967741935484;
            result[4] += 0.07741935483870968;
            result[5] += 0.12258064516129032;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.05263157894736842;
            result[5] += 0.8947368421052632;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.7692307692307693;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10638297872340426;
            result[3] += 0.8297872340425532;
            result[4] += 0;
            result[5] += 0.06382978723404255;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)118) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0;
            result[2] += 0.6976744186046512;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0.13953488372093023;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.12152777777777778;
            result[4] += 0;
            result[5] += 0.006944444444444444;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.4090909090909091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9746835443037974;
            result[3] += 0.02531645569620253;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9916839916839917;
            result[3] += 0.006237006237006237;
            result[4] += 0;
            result[5] += 0.002079002079002079;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)36) ) ) {
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
            result[4] += 0.9879032258064516;
            result[5] += 0.012096774193548387;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0;
            result[4] += 0.5909090909090909;
            result[5] += 0.38636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0010799136069114472;
            result[2] += 0;
            result[3] += 0.04535637149028078;
            result[4] += 0.05183585313174946;
            result[5] += 0.9017278617710583;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.07207207207207207;
            result[1] += 0.12612612612612611;
            result[2] += 0;
            result[3] += 0.16216216216216217;
            result[4] += 0.07207207207207207;
            result[5] += 0.5675675675675675;
          } else {
            result[0] += 0.01904761904761905;
            result[1] += 0.004761904761904762;
            result[2] += 0.0380952380952381;
            result[3] += 0.7047619047619048;
            result[4] += 0.014285714285714285;
            result[5] += 0.21904761904761905;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0;
          } else {
            result[0] += 0.004901960784313725;
            result[1] += 0.9901960784313726;
            result[2] += 0;
            result[3] += 0.0024509803921568627;
            result[4] += 0.0024509803921568627;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)105.5) ) ) {
            result[0] += 0.7869387755102041;
            result[1] += 0.013877551020408163;
            result[2] += 0.007346938775510204;
            result[3] += 0.022040816326530613;
            result[4] += 0.156734693877551;
            result[5] += 0.013061224489795919;
          } else {
            result[0] += 0;
            result[1] += 0.9016393442622951;
            result[2] += 0;
            result[3] += 0.04918032786885246;
            result[4] += 0.04918032786885246;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.031578947368421054;
            result[2] += 0.18157894736842106;
            result[3] += 0.3473684210526316;
            result[4] += 0.04736842105263158;
            result[5] += 0.36578947368421055;
          } else {
            result[0] += 0.7704918032786885;
            result[1] += 0.03278688524590164;
            result[2] += 0.04918032786885246;
            result[3] += 0;
            result[4] += 0.14754098360655737;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0.8028169014084507;
            result[3] += 0.14084507042253522;
            result[4] += 0;
            result[5] += 0.04225352112676056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            result[0] += 0.020134228187919462;
            result[1] += 0;
            result[2] += 0.8523489932885906;
            result[3] += 0.11073825503355705;
            result[4] += 0;
            result[5] += 0.016778523489932886;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9219858156028369;
            result[3] += 0.07801418439716312;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9977272727272727;
            result[3] += 0.0022727272727272726;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9652173913043478;
            result[5] += 0.034782608695652174;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5074626865671642;
            result[5] += 0.47761194029850745;
          } else {
            result[0] += 0;
            result[1] += 0.631578947368421;
            result[2] += 0;
            result[3] += 0.3684210526315789;
            result[4] += 0;
            result[5] += 0;
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04672897196261682;
            result[4] += 0.0630841121495327;
            result[5] += 0.8901869158878505;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
            result[0] += 0.23404255319148937;
            result[1] += 0.010638297872340425;
            result[2] += 0.05319148936170213;
            result[3] += 0.06382978723404255;
            result[4] += 0.11702127659574468;
            result[5] += 0.5212765957446809;
          } else {
            result[0] += 0.03255813953488372;
            result[1] += 0;
            result[2] += 0.018604651162790697;
            result[3] += 0.6744186046511628;
            result[4] += 0.004651162790697674;
            result[5] += 0.26976744186046514;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.7276119402985075;
            result[1] += 0.03731343283582089;
            result[2] += 0;
            result[3] += 0.0037313432835820895;
            result[4] += 0.19776119402985073;
            result[5] += 0.033582089552238806;
          } else {
            result[0] += 0.06284153005464481;
            result[1] += 0.01092896174863388;
            result[2] += 0.13387978142076504;
            result[3] += 0.36885245901639346;
            result[4] += 0.08469945355191257;
            result[5] += 0.33879781420765026;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.8388998035363457;
            result[1] += 0.043222003929273084;
            result[2] += 0.0068762278978389;
            result[3] += 0.0137524557956778;
            result[4] += 0.09332023575638507;
            result[5] += 0.003929273084479371;
          } else {
            result[0] += 0.1523809523809524;
            result[1] += 0.0380952380952381;
            result[2] += 0.5523809523809524;
            result[3] += 0.12380952380952381;
            result[4] += 0.10476190476190476;
            result[5] += 0.02857142857142857;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0.11428571428571428;
            result[4] += 0.02857142857142857;
            result[5] += 0.7428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0.08163265306122448;
            result[2] += 0.12244897959183673;
            result[3] += 0.5918367346938775;
            result[4] += 0;
            result[5] += 0.20408163265306123;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90.5) ) ) {
            result[0] += 0.5;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
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
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
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
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6358024691358025;
            result[3] += 0.2716049382716049;
            result[4] += 0;
            result[5] += 0.09259259259259259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 0.5789473684210527;
            result[1] += 0;
            result[2] += 0.42105263157894735;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05426356589147287;
            result[1] += 0;
            result[2] += 0.875968992248062;
            result[3] += 0.06976744186046512;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0.21052631578947367;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.001733102253032929;
            result[1] += 0;
            result[2] += 0.9792027729636049;
            result[3] += 0.01906412478336222;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0.00558659217877095;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9832402234636871;
            result[5] += 0.0111731843575419;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1956521739130435;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.15217391304347827;
            result[5] += 0.6086956521739131;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5588235294117647;
            result[5] += 0.4117647058823529;
          } else {
            result[0] += 0;
            result[1] += 0.015056461731493099;
            result[2] += 0;
            result[3] += 0.043914680050188205;
            result[4] += 0.037641154328732745;
            result[5] += 0.903387703889586;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0967741935483871;
            result[3] += 0.06451612903225806;
            result[4] += 0;
            result[5] += 0.8387096774193549;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6868686868686869;
            result[4] += 0.010101010101010102;
            result[5] += 0.30303030303030304;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0.05181347150259067;
            result[1] += 0.11398963730569948;
            result[2] += 0;
            result[3] += 0.05699481865284974;
            result[4] += 0.7098445595854922;
            result[5] += 0.06735751295336788;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 0.8593894542090657;
            result[1] += 0.0064754856614246065;
            result[2] += 0.005550416281221091;
            result[3] += 0.016651248843663275;
            result[4] += 0.07955596669750231;
            result[5] += 0.032377428307123035;
          } else {
            result[0] += 0.26371951219512196;
            result[1] += 0.027439024390243903;
            result[2] += 0.06402439024390244;
            result[3] += 0.26676829268292684;
            result[4] += 0.08231707317073171;
            result[5] += 0.29573170731707316;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.851063829787234;
            result[4] += 0;
            result[5] += 0.14893617021276595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.359375;
            result[3] += 0.46875;
            result[4] += 0;
            result[5] += 0.171875;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7681159420289855;
            result[3] += 0.2028985507246377;
            result[4] += 0;
            result[5] += 0.028985507246376812;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0.011583011583011582;
            result[1] += 0;
            result[2] += 0.8223938223938224;
            result[3] += 0.16216216216216217;
            result[4] += 0;
            result[5] += 0.003861003861003861;
          } else {
            result[0] += 0.0029069767441860465;
            result[1] += 0;
            result[2] += 0.9593023255813954;
            result[3] += 0.030523255813953487;
            result[4] += 0;
            result[5] += 0.007267441860465116;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)46.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9715447154471545;
            result[5] += 0.028455284552845527;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.00211864406779661;
            result[2] += 0;
            result[3] += 0.05508474576271186;
            result[4] += 0.06779661016949153;
            result[5] += 0.875;
          } else {
            result[0] += 0.0024330900243309003;
            result[1] += 0.004866180048661801;
            result[2] += 0.012165450121654502;
            result[3] += 0.44768856447688565;
            result[4] += 0.0535279805352798;
            result[5] += 0.4793187347931874;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.44565217391304346;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4782608695652174;
            result[5] += 0.03260869565217391;
          } else {
            result[0] += 0.9157509157509157;
            result[1] += 0.01282051282051282;
            result[2] += 0.0009157509157509158;
            result[3] += 0.015567765567765568;
            result[4] += 0.05311355311355311;
            result[5] += 0.0018315018315018315;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0.025547445255474453;
            result[1] += 0.014598540145985401;
            result[2] += 0.23357664233576642;
            result[3] += 0.38321167883211676;
            result[4] += 0.032846715328467155;
            result[5] += 0.3102189781021898;
          } else {
            result[0] += 0.6944444444444444;
            result[1] += 0.009259259259259259;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.12962962962962962;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0.9032258064516129;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5151515151515151;
            result[3] += 0.42424242424242425;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.006666666666666667;
            result[1] += 0;
            result[2] += 0.6333333333333333;
            result[3] += 0.34;
            result[4] += 0;
            result[5] += 0.02;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9083333333333333;
            result[3] += 0.09166666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0030864197530864196;
            result[1] += 0;
            result[2] += 0.9660493827160493;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.0030864197530864196;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00847457627118644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9576271186440678;
            result[5] += 0.03389830508474576;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.95;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0.13114754098360656;
            result[4] += 0.2459016393442623;
            result[5] += 0.6065573770491803;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06779661016949153;
            result[4] += 0.4576271186440678;
            result[5] += 0.4745762711864407;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031210986267166042;
            result[4] += 0.02247191011235955;
            result[5] += 0.9463171036204744;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.10416666666666667;
            result[2] += 0;
            result[3] += 0.19791666666666666;
            result[4] += 0.020833333333333332;
            result[5] += 0.6770833333333334;
          } else {
            result[0] += 0.020408163265306124;
            result[1] += 0.015306122448979593;
            result[2] += 0.06122448979591837;
            result[3] += 0.6173469387755103;
            result[4] += 0.010204081632653062;
            result[5] += 0.2755102040816327;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.7647058823529411;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976689976689976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002331002331002331;
            result[5] += 0;
          } else {
            result[0] += 0.4375;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
            result[0] += 0.4517241379310345;
            result[1] += 0.05862068965517241;
            result[2] += 0.0034482758620689655;
            result[3] += 0.020689655172413793;
            result[4] += 0.3689655172413793;
            result[5] += 0.09655172413793103;
          } else {
            result[0] += 0.8738140417457305;
            result[1] += 0.03889943074003795;
            result[2] += 0.003795066413662239;
            result[3] += 0.013282732447817837;
            result[4] += 0.0635673624288425;
            result[5] += 0.006641366223908918;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.0032051282051282055;
            result[1] += 0.02243589743589744;
            result[2] += 0.10576923076923078;
            result[3] += 0.38141025641025644;
            result[4] += 0.012820512820512822;
            result[5] += 0.4743589743589744;
          } else {
            result[0] += 0.4;
            result[1] += 0.02857142857142857;
            result[2] += 0.2785714285714286;
            result[3] += 0.06428571428571428;
            result[4] += 0.17142857142857143;
            result[5] += 0.05714285714285714;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19540229885057472;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5606060606060606;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.07575757575757576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.058823529411764705;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8360655737704918;
            result[3] += 0.15300546448087432;
            result[4] += 0;
            result[5] += 0.01092896174863388;
          } else {
            result[0] += 0.00315955766192733;
            result[1] += 0;
            result[2] += 0.9731437598736177;
            result[3] += 0.020537124802527645;
            result[4] += 0;
            result[5] += 0.00315955766192733;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.7586206896551724;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2413793103448276;
            result[5] += 0;
          } else {
            result[0] += 0.0034246575342465756;
            result[1] += 0.0034246575342465756;
            result[2] += 0;
            result[3] += 0.010273972602739727;
            result[4] += 0.904109589041096;
            result[5] += 0.07876712328767124;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0.96875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0450070323488045;
            result[4] += 0.02531645569620253;
            result[5] += 0.929676511954993;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.016129032258064516;
            result[2] += 0.004032258064516129;
            result[3] += 0.16129032258064516;
            result[4] += 0.23387096774193547;
            result[5] += 0.5846774193548387;
          } else {
            result[0] += 0.05365853658536585;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0.6341463414634146;
            result[4] += 0.014634146341463415;
            result[5] += 0.2731707317073171;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0.11258278145695365;
            result[1] += 0.1390728476821192;
            result[2] += 0;
            result[3] += 0.13245033112582782;
            result[4] += 0.609271523178808;
            result[5] += 0.006622516556291391;
          } else {
            result[0] += 0.9060402684563756;
            result[1] += 0.011505273250239692;
            result[2] += 0.002876318312559923;
            result[3] += 0.018216682646212845;
            result[4] += 0.04697986577181207;
            result[5] += 0.014381591562799613;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.012096774193548387;
            result[1] += 0.056451612903225805;
            result[2] += 0.0967741935483871;
            result[3] += 0.3225806451612903;
            result[4] += 0.020161290322580645;
            result[5] += 0.49193548387096775;
          } else {
            result[0] += 0.3612903225806452;
            result[1] += 0.03225806451612904;
            result[2] += 0.41290322580645167;
            result[3] += 0.02580645161290323;
            result[4] += 0.0903225806451613;
            result[5] += 0.0774193548387097;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.47619047619047616;
            result[5] += 0.19047619047619047;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14423076923076922;
            result[3] += 0.6730769230769231;
            result[4] += 0;
            result[5] += 0.18269230769230768;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.3888888888888889;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6419753086419753;
            result[3] += 0.30864197530864196;
            result[4] += 0;
            result[5] += 0.04938271604938271;
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)122.5) ) ) {
            result[0] += 0;
            result[1] += 0.04761904761904762;
            result[2] += 0.380952380952381;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0.4761904761904762;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.09836065573770492;
            result[1] += 0;
            result[2] += 0.6229508196721312;
            result[3] += 0.26229508196721313;
            result[4] += 0;
            result[5] += 0.01639344262295082;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7222222222222223;
            result[3] += 0.2592592592592593;
            result[4] += 0;
            result[5] += 0.01851851851851852;
          } else {
            result[0] += 0.04347826086956522;
            result[1] += 0;
            result[2] += 0.9130434782608696;
            result[3] += 0.04347826086956522;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9674074074074074;
            result[3] += 0.028148148148148148;
            result[4] += 0;
            result[5] += 0.0044444444444444444;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
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
            result[4] += 0.9776951672862454;
            result[5] += 0.022304832713754646;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56) ) ) {
            result[0] += 0.94;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06;
            result[5] += 0;
          } else {
            result[0] += 0.0009689922480620155;
            result[1] += 0.003875968992248062;
            result[2] += 0;
            result[3] += 0.06395348837209303;
            result[4] += 0.06686046511627906;
            result[5] += 0.8643410852713178;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28;
            result[4] += 0.02;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.85;
            result[4] += 0;
            result[5] += 0.15;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9767441860465116;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976905311778291;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023094688221709007;
            result[5] += 0;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0.6041666666666666;
            result[2] += 0.041666666666666664;
            result[3] += 0.020833333333333332;
            result[4] += 0.3125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.15;
            result[1] += 0.45;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0.8735955056179776;
            result[1] += 0.005617977528089888;
            result[2] += 0.00655430711610487;
            result[3] += 0.034644194756554315;
            result[4] += 0.04588014981273409;
            result[5] += 0.03370786516853933;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0.02553191489361702;
            result[1] += 0.02553191489361702;
            result[2] += 0.1702127659574468;
            result[3] += 0.39574468085106385;
            result[4] += 0.029787234042553193;
            result[5] += 0.35319148936170214;
          } else {
            result[0] += 0.538860103626943;
            result[1] += 0.0051813471502590676;
            result[2] += 0.33678756476683935;
            result[3] += 0.03626943005181347;
            result[4] += 0.05181347150259067;
            result[5] += 0.031088082901554404;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.8333333333333334;
            result[4] += 0.020833333333333332;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36;
            result[3] += 0.52;
            result[4] += 0;
            result[5] += 0.12;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0.25;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.4642857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.9111111111111111;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.19230769230769232;
            result[1] += 0.038461538461538464;
            result[2] += 0.3076923076923077;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0.4230769230769231;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.7619047619047619;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.11904761904761904;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.01567398119122257;
            result[1] += 0;
            result[2] += 0.8934169278996865;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9802371541501976;
            result[3] += 0.019762845849802372;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
            result[4] += 0.8846153846153846;
            result[5] += 0.11538461538461539;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04545454545454546;
            result[4] += 0.6818181818181819;
            result[5] += 0.27272727272727276;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.972972972972973;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001287001287001287;
            result[3] += 0.04247104247104247;
            result[4] += 0.03346203346203346;
            result[5] += 0.9227799227799228;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5974025974025974;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35064935064935066;
            result[5] += 0.05194805194805195;
          } else {
            result[0] += 0;
            result[1] += 0.026442307692307692;
            result[2] += 0.002403846153846154;
            result[3] += 0.3798076923076923;
            result[4] += 0.08413461538461539;
            result[5] += 0.5072115384615384;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.10909090909090909;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8909090909090909;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8095238095238095;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
            result[0] += 0.022727272727272728;
            result[1] += 0.6363636363636364;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.29545454545454547;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9951923076923077;
            result[2] += 0;
            result[3] += 0.004807692307692308;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107.5) ) ) {
            result[0] += 0.8801498127340824;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0.015917602996254682;
            result[4] += 0.0749063670411985;
            result[5] += 0.017790262172284643;
          } else {
            result[0] += 0.04;
            result[1] += 0.96;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0.012903225806451613;
            result[1] += 0.01935483870967742;
            result[2] += 0.16129032258064516;
            result[3] += 0.4774193548387097;
            result[4] += 0.03870967741935484;
            result[5] += 0.2903225806451613;
          } else {
            result[0] += 0.43814432989690727;
            result[1] += 0.13402061855670105;
            result[2] += 0.288659793814433;
            result[3] += 0.05670103092783506;
            result[4] += 0.04123711340206186;
            result[5] += 0.04123711340206186;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0.9523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21052631578947367;
            result[4] += 0.5789473684210527;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.006993006993006993;
            result[1] += 0;
            result[2] += 0.1258741258741259;
            result[3] += 0.5314685314685315;
            result[4] += 0.013986013986013986;
            result[5] += 0.32167832167832167;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.045454545454545456;
            result[3] += 0.13636363636363635;
            result[4] += 0.13636363636363635;
            result[5] += 0.5909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.52;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0.012500000000000002;
            result[1] += 0;
            result[2] += 0.8500000000000001;
            result[3] += 0.10000000000000002;
            result[4] += 0;
            result[5] += 0.037500000000000006;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.01775147928994083;
            result[2] += 0.7218934911242604;
            result[3] += 0.24260355029585798;
            result[4] += 0;
            result[5] += 0.01775147928994083;
          } else {
            result[0] += 0.02727272727272727;
            result[1] += 0;
            result[2] += 0.9181818181818182;
            result[3] += 0.05454545454545454;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9961904761904762;
            result[3] += 0.0038095238095238095;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953917050691244;
            result[5] += 0.004608294930875576;
          } else {
            result[0] += 0.12121212121212122;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.15151515151515152;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.6111111111111112;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8269230769230769;
            result[5] += 0.17307692307692307;
          } else {
            result[0] += 0.03896103896103896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05952380952380952;
            result[4] += 0.03571428571428571;
            result[5] += 0.8658008658008658;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.13983050847457626;
            result[1] += 0.00423728813559322;
            result[2] += 0;
            result[3] += 0.2457627118644068;
            result[4] += 0.11016949152542373;
            result[5] += 0.5;
          } else {
            result[0] += 0.005813953488372093;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7965116279069767;
            result[4] += 0;
            result[5] += 0.19767441860465115;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3888888888888889;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9883720930232558;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011627906976744186;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)106.5) ) ) {
            result[0] += 0.06451612903225806;
            result[1] += 0.06451612903225806;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8709677419354839;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            result[0] += 0.5669291338582677;
            result[1] += 0.07086614173228346;
            result[2] += 0;
            result[3] += 0.047244094488188976;
            result[4] += 0.2440944881889764;
            result[5] += 0.07086614173228346;
          } else {
            result[0] += 0.9174809989142236;
            result[1] += 0.011943539630836048;
            result[2] += 0.010857763300760043;
            result[3] += 0.019543973941368076;
            result[4] += 0.026058631921824105;
            result[5] += 0.014115092290988056;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.01809954751131222;
            result[1] += 0.004524886877828055;
            result[2] += 0.14479638009049775;
            result[3] += 0.45248868778280543;
            result[4] += 0.05429864253393665;
            result[5] += 0.3257918552036199;
          } else {
            result[0] += 0.22988505747126436;
            result[1] += 0;
            result[2] += 0.4425287356321839;
            result[3] += 0.08620689655172414;
            result[4] += 0.13793103448275862;
            result[5] += 0.10344827586206896;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06060606060606061;
            result[4] += 0.030303030303030304;
            result[5] += 0.9090909090909091;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.41935483870967744;
            result[3] += 0.3225806451612903;
            result[4] += 0;
            result[5] += 0.25806451612903225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14754098360655737;
            result[3] += 0.8032786885245902;
            result[4] += 0;
            result[5] += 0.04918032786885246;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.5833333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.1095890410958904;
            result[1] += 0;
            result[2] += 0.7945205479452054;
            result[3] += 0.0821917808219178;
            result[4] += 0;
            result[5] += 0.0136986301369863;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82) ) ) {
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
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)114) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8173913043478261;
            result[3] += 0.1565217391304348;
            result[4] += 0;
            result[5] += 0.02608695652173913;
          } else {
            result[0] += 0.01020408163265306;
            result[1] += 0;
            result[2] += 0.9489795918367347;
            result[3] += 0.04081632653061224;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018018018018018018;
            result[1] += 0;
            result[2] += 0.9675675675675676;
            result[3] += 0.03063063063063063;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9831460674157303;
            result[5] += 0.0056179775280898875;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.675;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.1794871794871795;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47435897435897434;
            result[5] += 0.34615384615384615;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04791929382093316;
            result[4] += 0.03783102143757881;
            result[5] += 0.914249684741488;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0.9148936170212766;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0851063829787234;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.05641025641025641;
            result[2] += 0.03076923076923077;
            result[3] += 0.2564102564102564;
            result[4] += 0.12307692307692308;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0.01657458563535912;
            result[1] += 0.005524861878453039;
            result[2] += 0.038674033149171276;
            result[3] += 0.6685082872928177;
            result[4] += 0.038674033149171276;
            result[5] += 0.23204419889502764;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.0594059405940594;
            result[1] += 0.0594059405940594;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8811881188118812;
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.6428571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022222222222222222;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
            result[0] += 0.5092592592592593;
            result[1] += 0.06481481481481481;
            result[2] += 0;
            result[3] += 0.027777777777777776;
            result[4] += 0.37037037037037035;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.8980582524271845;
            result[1] += 0.01262135922330097;
            result[2] += 0;
            result[3] += 0.01262135922330097;
            result[4] += 0.039805825242718446;
            result[5] += 0.036893203883495145;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.020661157024793392;
            result[1] += 0.016528925619834715;
            result[2] += 0.13223140495867772;
            result[3] += 0.487603305785124;
            result[4] += 0.004132231404958679;
            result[5] += 0.3388429752066116;
          } else {
            result[0] += 0.44516129032258067;
            result[1] += 0;
            result[2] += 0.432258064516129;
            result[3] += 0.05161290322580645;
            result[4] += 0.07096774193548387;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06976744186046512;
            result[5] += 0.9302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.015625;
            result[2] += 0.0625;
            result[3] += 0.734375;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0.05454545454545454;
            result[1] += 0;
            result[2] += 0.21818181818181817;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0.32727272727272727;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0.1111111111111111;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.15555555555555556;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004830917874396135;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.16908212560386474;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            result[0] += 0.4444444444444444;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.0028776978417266188;
            result[1] += 0;
            result[2] += 0.9697841726618706;
            result[3] += 0.02302158273381295;
            result[4] += 0;
            result[5] += 0.004316546762589928;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
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
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
            result[0] += 0.008733624454148471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9519650655021834;
            result[5] += 0.039301310043668124;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0.024242424242424242;
            result[1] += 0.01616161616161616;
            result[2] += 0.00101010101010101;
            result[3] += 0.06060606060606061;
            result[4] += 0.04040404040404041;
            result[5] += 0.8575757575757575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11304347826086956;
            result[3] += 0.6347826086956522;
            result[4] += 0.008695652173913044;
            result[5] += 0.24347826086956523;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
            result[0] += 0.12440191387559808;
            result[1] += 0.27751196172248804;
            result[2] += 0;
            result[3] += 0.014354066985645933;
            result[4] += 0.583732057416268;
            result[5] += 0;
          } else {
            result[0] += 0.8344103392568659;
            result[1] += 0.005654281098546042;
            result[2] += 0.004038772213247173;
            result[3] += 0.051696284329563816;
            result[4] += 0.08077544426494346;
            result[5] += 0.023424878836833602;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.03647416413373861;
            result[2] += 0.07598784194528876;
            result[3] += 0.4650455927051672;
            result[4] += 0.06686930091185411;
            result[5] += 0.35562310030395144;
          } else {
            result[0] += 0.3464052287581699;
            result[1] += 0;
            result[2] += 0.3137254901960784;
            result[3] += 0.05228758169934641;
            result[4] += 0.1830065359477124;
            result[5] += 0.10457516339869281;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.10810810810810811;
            result[4] += 0.05405405405405406;
            result[5] += 0.8108108108108109;
          } else {
            result[0] += 0.11864406779661017;
            result[1] += 0.1016949152542373;
            result[2] += 0;
            result[3] += 0.13559322033898305;
            result[4] += 0.3728813559322034;
            result[5] += 0.2711864406779661;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.13333333333333333;
            result[2] += 0.13333333333333333;
            result[3] += 0.26666666666666666;
            result[4] += 0.06666666666666667;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0.05263157894736842;
            result[2] += 0.8421052631578947;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15476190476190477;
            result[3] += 0.8095238095238095;
            result[4] += 0.011904761904761904;
            result[5] += 0.023809523809523808;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5652173913043478;
            result[3] += 0.43478260869565216;
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
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8825396825396826;
            result[3] += 0.10476190476190478;
            result[4] += 0;
            result[5] += 0.0126984126984127;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0.8984375;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007125890736342043;
            result[1] += 0;
            result[2] += 0.9833729216152018;
            result[3] += 0.009501187648456057;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 0.007462686567164179;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0037313432835820895;
            result[4] += 0.9738805970149254;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.6666666666666666;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02582496413199426;
            result[4] += 0.020086083213773313;
            result[5] += 0.9540889526542324;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.125;
            result[1] += 0.0325;
            result[2] += 0.0125;
            result[3] += 0.1625;
            result[4] += 0.09;
            result[5] += 0.5775;
          } else {
            result[0] += 0;
            result[1] += 0.029585798816568046;
            result[2] += 0.023668639053254437;
            result[3] += 0.7455621301775148;
            result[4] += 0;
            result[5] += 0.20118343195266272;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
            result[0] += 0.007371007371007372;
            result[1] += 0.977886977886978;
            result[2] += 0.0024570024570024574;
            result[3] += 0.0024570024570024574;
            result[4] += 0.00982800982800983;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
            result[0] += 0.06486486486486487;
            result[1] += 0.32432432432432434;
            result[2] += 0;
            result[3] += 0.021621621621621623;
            result[4] += 0.5621621621621622;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0.8208578637510513;
            result[1] += 0.007569386038687973;
            result[2] += 0.001682085786375105;
            result[3] += 0.031959629941127;
            result[4] += 0.08746846089150546;
            result[5] += 0.050462573591253154;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0.03684210526315789;
            result[1] += 0.013157894736842105;
            result[2] += 0.32105263157894737;
            result[3] += 0.3894736842105263;
            result[4] += 0.039473684210526314;
            result[5] += 0.2;
          } else {
            result[0] += 0.7125;
            result[1] += 0;
            result[2] += 0.1375;
            result[3] += 0;
            result[4] += 0.15;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
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
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.775;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.075;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7835820895522388;
            result[3] += 0.1791044776119403;
            result[4] += 0;
            result[5] += 0.03731343283582089;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.017937219730941704;
            result[1] += 0;
            result[2] += 0.9327354260089686;
            result[3] += 0.04484304932735426;
            result[4] += 0;
            result[5] += 0.004484304932735426;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9613259668508287;
            result[3] += 0.03314917127071823;
            result[4] += 0;
            result[5] += 0.0055248618784530384;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.015267175572519083;
            result[2] += 0.003816793893129771;
            result[3] += 0;
            result[4] += 0.9580152671755725;
            result[5] += 0.022900763358778626;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            result[0] += 0.0035671819262782403;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.036860879904875146;
            result[4] += 0.03210463733650416;
            result[5] += 0.9274673008323424;
          } else {
            result[0] += 0.3037037037037037;
            result[1] += 0.15555555555555556;
            result[2] += 0;
            result[3] += 0.18518518518518517;
            result[4] += 0.1111111111111111;
            result[5] += 0.24444444444444444;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.014285714285714285;
            result[2] += 0;
            result[3] += 0.04285714285714286;
            result[4] += 0.08571428571428572;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.0045662100456621;
            result[1] += 0;
            result[2] += 0.0182648401826484;
            result[3] += 0.7534246575342466;
            result[4] += 0;
            result[5] += 0.2237442922374429;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.9954441913439636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004555808656036446;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            result[0] += 0.06179775280898876;
            result[1] += 0.02247191011235955;
            result[2] += 0.056179775280898875;
            result[3] += 0.1348314606741573;
            result[4] += 0.3258426966292135;
            result[5] += 0.398876404494382;
          } else {
            result[0] += 0.8313953488372093;
            result[1] += 0.018272425249169437;
            result[2] += 0.013289036544850499;
            result[3] += 0.02574750830564784;
            result[4] += 0.09053156146179402;
            result[5] += 0.020764119601328904;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0.03684210526315789;
            result[1] += 0.06842105263157895;
            result[2] += 0.031578947368421054;
            result[3] += 0.3894736842105263;
            result[4] += 0.09473684210526316;
            result[5] += 0.37894736842105264;
          } else {
            result[0] += 0.17341040462427748;
            result[1] += 0;
            result[2] += 0.49132947976878616;
            result[3] += 0.21965317919075147;
            result[4] += 0.04624277456647399;
            result[5] += 0.06936416184971099;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)54.5) ) ) {
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
            result[3] += 0.03571428571428571;
            result[4] += 0.17857142857142858;
            result[5] += 0.7857142857142857;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.8431372549019608;
            result[4] += 0;
            result[5] += 0.09803921568627451;
          } else {
            result[0] += 0;
            result[1] += 0.0967741935483871;
            result[2] += 0.3548387096774194;
            result[3] += 0.25806451612903225;
            result[4] += 0;
            result[5] += 0.2903225806451613;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009708737864077669;
            result[1] += 0;
            result[2] += 0.6310679611650486;
            result[3] += 0.32038834951456313;
            result[4] += 0;
            result[5] += 0.038834951456310676;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9782608695652174;
            result[3] += 0.010869565217391304;
            result[4] += 0;
            result[5] += 0.010869565217391304;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9375;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.859504132231405;
            result[3] += 0.14049586776859505;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9753954305799648;
            result[3] += 0.02460456942003515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9693486590038314;
            result[5] += 0.03065134099616858;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.5833333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.7192982456140351;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2807017543859649;
            result[5] += 0;
          } else {
            result[0] += 0.0011135857461024498;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04899777282850779;
            result[4] += 0.05790645879732739;
            result[5] += 0.8919821826280624;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11428571428571428;
            result[5] += 0;
          } else {
            result[0] += 0.010443864229765013;
            result[1] += 0.005221932114882507;
            result[2] += 0.013054830287206266;
            result[3] += 0.5352480417754569;
            result[4] += 0.020887728459530026;
            result[5] += 0.4151436031331593;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
            result[0] += 0.002409638554216868;
            result[1] += 0.9879518072289157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009638554216867472;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0.2413793103448276;
            result[1] += 0.06896551724137931;
            result[2] += 0;
            result[3] += 0.041379310344827586;
            result[4] += 0.5793103448275863;
            result[5] += 0.06896551724137931;
          } else {
            result[0] += 0.8489010989010989;
            result[1] += 0.056776556776556776;
            result[2] += 0.0009157509157509158;
            result[3] += 0.008241758241758242;
            result[4] += 0.0815018315018315;
            result[5] += 0.003663003663003663;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.006849315068493151;
            result[2] += 0.15753424657534248;
            result[3] += 0.4657534246575343;
            result[4] += 0.013698630136986302;
            result[5] += 0.35616438356164387;
          } else {
            result[0] += 0.29949238578680204;
            result[1] += 0;
            result[2] += 0.48223350253807107;
            result[3] += 0.07614213197969544;
            result[4] += 0.06091370558375635;
            result[5] += 0.08121827411167512;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.7222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15217391304347827;
            result[3] += 0.6956521739130435;
            result[4] += 0;
            result[5] += 0.15217391304347827;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.09375;
            result[1] += 0.09375;
            result[2] += 0.40625;
            result[3] += 0.15625;
            result[4] += 0.0625;
            result[5] += 0.1875;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.018518518518518517;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0.01739130434782609;
            result[1] += 0;
            result[2] += 0.6956521739130436;
            result[3] += 0.26086956521739135;
            result[4] += 0;
            result[5] += 0.026086956521739132;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.08771929824561403;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0.9375;
            result[1] += 0;
            result[2] += 0.0625;
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.020134228187919465;
            result[1] += 0;
            result[2] += 0.8791946308724833;
            result[3] += 0.09395973154362418;
            result[4] += 0;
            result[5] += 0.006711409395973155;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9354838709677419;
            result[3] += 0.06451612903225806;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9942084942084942;
            result[3] += 0.005791505791505791;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.013574660633484165;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9728506787330318;
            result[5] += 0.013574660633484165;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.31746031746031744;
            result[5] += 0.6349206349206349;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            result[0] += 0.031578947368421054;
            result[1] += 0.12631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8421052631578947;
            result[5] += 0;
          } else {
            result[0] += 0.8846153846153847;
            result[1] += 0.012820512820512822;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08974358974358976;
            result[5] += 0.012820512820512822;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024615384615384615;
            result[4] += 0.027692307692307693;
            result[5] += 0.9476923076923077;
          } else {
            result[0] += 0;
            result[1] += 0.010309278350515464;
            result[2] += 0;
            result[3] += 0.08247422680412371;
            result[4] += 0.23711340206185566;
            result[5] += 0.6701030927835051;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.8666666666666667;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0.045317220543806644;
            result[1] += 0.012084592145015106;
            result[2] += 0.021148036253776436;
            result[3] += 0.3957703927492447;
            result[4] += 0.07854984894259819;
            result[5] += 0.4471299093655589;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0.5147058823529411;
            result[1] += 0.11274509803921569;
            result[2] += 0.007352941176470588;
            result[3] += 0.07107843137254902;
            result[4] += 0.14705882352941177;
            result[5] += 0.14705882352941177;
          } else {
            result[0] += 0.9162436548223348;
            result[1] += 0.010152284263959388;
            result[2] += 0.026649746192893394;
            result[3] += 0.015228426395939083;
            result[4] += 0.015228426395939083;
            result[5] += 0.016497461928934008;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
            result[0] += 0.026402640264026403;
            result[1] += 0.0297029702970297;
            result[2] += 0.18811881188118812;
            result[3] += 0.4884488448844885;
            result[4] += 0.026402640264026403;
            result[5] += 0.24092409240924093;
          } else {
            result[0] += 0.7012987012987013;
            result[1] += 0;
            result[2] += 0.16883116883116883;
            result[3] += 0;
            result[4] += 0.12987012987012986;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9444444444444444;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0.7333333333333334;
            result[4] += 0;
            result[5] += 0.15555555555555559;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.2619047619047619;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.006134969325153375;
            result[2] += 0.7975460122699387;
            result[3] += 0.18404907975460125;
            result[4] += 0;
            result[5] += 0.01226993865030675;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.15384615384615385;
            result[2] += 0.3076923076923077;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.0029806259314456027;
            result[1] += 0;
            result[2] += 0.9746646795827122;
            result[3] += 0.020864381520119223;
            result[4] += 0;
            result[5] += 0.0014903129657228014;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01893939393939394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0.026515151515151516;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9305555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.013888888888888888;
          } else {
            result[0] += 0.0410958904109589;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1780821917808219;
            result[4] += 0.2876712328767123;
            result[5] += 0.4931506849315068;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7083333333333334;
            result[5] += 0.2916666666666667;
          } else {
            result[0] += 0.0022753128555176336;
            result[1] += 0.007963594994311717;
            result[2] += 0;
            result[3] += 0.04209328782707622;
            result[4] += 0.05915813424345848;
            result[5] += 0.888509670079636;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1917808219178082;
            result[4] += 0.0136986301369863;
            result[5] += 0.7945205479452054;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0043859649122807015;
            result[3] += 0.6271929824561403;
            result[4] += 0.008771929824561403;
            result[5] += 0.35964912280701755;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
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
            result[0] += 0.0847457627118644;
            result[1] += 0.17796610169491525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7372881355932204;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8518518518518519;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14814814814814814;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.24489795918367346;
            result[1] += 0.061224489795918366;
            result[2] += 0.02040816326530612;
            result[3] += 0.22448979591836735;
            result[4] += 0.12244897959183673;
            result[5] += 0.32653061224489793;
          } else {
            result[0] += 0.9225684608120869;
            result[1] += 0.014164305949008499;
            result[2] += 0.0028328611898017;
            result[3] += 0.0066100094428706326;
            result[4] += 0.05004721435316336;
            result[5] += 0.003777148253068933;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
            result[0] += 0.10434782608695652;
            result[1] += 0.02608695652173913;
            result[2] += 0.1391304347826087;
            result[3] += 0.3130434782608696;
            result[4] += 0.13043478260869565;
            result[5] += 0.28695652173913044;
          } else {
            result[0] += 0.9024390243902439;
            result[1] += 0;
            result[2] += 0.06097560975609756;
            result[3] += 0.012195121951219513;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0.02564102564102564;
            result[5] += 0.7435897435897436;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09022556390977443;
            result[3] += 0.7593984962406015;
            result[4] += 0.015037593984962405;
            result[5] += 0.13533834586466165;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.17073170731707318;
            result[3] += 0.21951219512195122;
            result[4] += 0;
            result[5] += 0.5853658536585366;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.023255813953488372;
            result[2] += 0.23255813953488372;
            result[3] += 0.18604651162790697;
            result[4] += 0.023255813953488372;
            result[5] += 0.5348837209302325;
          } else {
            result[0] += 0.03125;
            result[1] += 0.03125;
            result[2] += 0.671875;
            result[3] += 0.078125;
            result[4] += 0.046875;
            result[5] += 0.140625;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.7647058823529411;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0.005917159763313609;
            result[1] += 0;
            result[2] += 0.727810650887574;
            result[3] += 0.2603550295857988;
            result[4] += 0;
            result[5] += 0.005917159763313609;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            result[0] += 0.00425531914893617;
            result[1] += 0;
            result[2] += 0.8893617021276595;
            result[3] += 0.10212765957446808;
            result[4] += 0;
            result[5] += 0.00425531914893617;
          } else {
            result[0] += 0.021352313167259787;
            result[1] += 0;
            result[2] += 0.9644128113879004;
            result[3] += 0.0071174377224199285;
            result[4] += 0;
            result[5] += 0.0071174377224199285;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9896373056994818;
            result[5] += 0.010362694300518135;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05128205128205128;
            result[4] += 0.6923076923076923;
            result[5] += 0.2564102564102564;
          } else {
            result[0] += 0.002398081534772182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03237410071942446;
            result[4] += 0.03836930455635491;
            result[5] += 0.9268585131894485;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.65;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.275;
            result[4] += 0;
            result[5] += 0.725;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0851063829787234;
            result[4] += 0;
            result[5] += 0.9148936170212766;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66) ) ) {
            result[0] += 0.5882352941176471;
            result[1] += 0.29411764705882354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006756756756756757;
            result[2] += 0.013513513513513514;
            result[3] += 0.49324324324324326;
            result[4] += 0.006756756756756757;
            result[5] += 0.4797297297297297;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0.008928571428571428;
            result[1] += 0.008928571428571428;
            result[2] += 0;
            result[3] += 0.9196428571428571;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.9976744186046511;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002325581395348837;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
            result[0] += 0.12837837837837837;
            result[1] += 0.05405405405405406;
            result[2] += 0;
            result[3] += 0.0472972972972973;
            result[4] += 0.7432432432432432;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0.03076923076923077;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.06153846153846154;
            result[4] += 0.06153846153846154;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
            result[0] += 0.65814696485623;
            result[1] += 0.01757188498402556;
            result[2] += 0.01597444089456869;
            result[3] += 0.11022364217252396;
            result[4] += 0.11022364217252396;
            result[5] += 0.0878594249201278;
          } else {
            result[0] += 0.9763406940063092;
            result[1] += 0;
            result[2] += 0.011041009463722398;
            result[3] += 0.006309148264984227;
            result[4] += 0.006309148264984227;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
            result[5] += 0.9642857142857143;
          } else {
            result[0] += 0;
            result[1] += 0.004048582995951417;
            result[2] += 0.29554655870445345;
            result[3] += 0.4979757085020243;
            result[4] += 0;
            result[5] += 0.20242914979757085;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
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
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0.17391304347826086;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.6086956521739131;
          } else {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0.42857142857142855;
            result[3] += 0.5102040816326531;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0.015748031496062992;
            result[1] += 0;
            result[2] += 0.9212598425196851;
            result[3] += 0.052868391451068614;
            result[4] += 0.0044994375703037125;
            result[5] += 0.00562429696287964;
          } else {
            result[0] += 0.2676056338028169;
            result[1] += 0;
            result[2] += 0.7323943661971831;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
            result[0] += 0.004807692307692308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9855769230769231;
            result[5] += 0.009615384615384616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.3333333333333333;
            result[5] += 0.6111111111111112;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.43478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45652173913043476;
            result[5] += 0.10869565217391304;
          } else {
            result[0] += 0.0034562211981566822;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03456221198156682;
            result[4] += 0.044930875576036866;
            result[5] += 0.9170506912442397;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.013888888888888888;
            result[5] += 0.875;
          } else {
            result[0] += 0.013824884792626729;
            result[1] += 0.009216589861751152;
            result[2] += 0.004608294930875576;
            result[3] += 0.5483870967741935;
            result[4] += 0.004608294930875576;
            result[5] += 0.41935483870967744;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.9932584269662922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006741573033707865;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            result[0] += 0.4111111111111111;
            result[1] += 0.10888888888888888;
            result[2] += 0.0044444444444444444;
            result[3] += 0.07333333333333333;
            result[4] += 0.29555555555555557;
            result[5] += 0.10666666666666667;
          } else {
            result[0] += 0.8805460750853242;
            result[1] += 0.034129692832764506;
            result[2] += 0.0034129692832764505;
            result[3] += 0.013651877133105802;
            result[4] += 0.06484641638225255;
            result[5] += 0.0034129692832764505;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.022988505747126436;
            result[1] += 0.04597701149425287;
            result[2] += 0.0842911877394636;
            result[3] += 0.4559386973180077;
            result[4] += 0.05747126436781609;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.22009569377990432;
            result[1] += 0.03349282296650718;
            result[2] += 0.5023923444976076;
            result[3] += 0.09090909090909091;
            result[4] += 0.06698564593301436;
            result[5] += 0.0861244019138756;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03636363636363636;
            result[4] += 0;
            result[5] += 0.9636363636363636;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0.02702702702702703;
            result[2] += 0.2882882882882883;
            result[3] += 0.4774774774774775;
            result[4] += 0.04504504504504504;
            result[5] += 0.13513513513513514;
          } else {
            result[0] += 0.7083333333333334;
            result[1] += 0.08333333333333333;
            result[2] += 0.20833333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
            result[0] += 0.03508771929824562;
            result[1] += 0;
            result[2] += 0.8421052631578948;
            result[3] += 0.08771929824561404;
            result[4] += 0;
            result[5] += 0.03508771929824562;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.004651162790697675;
            result[1] += 0;
            result[2] += 0.8930232558139536;
            result[3] += 0.08837209302325583;
            result[4] += 0;
            result[5] += 0.013953488372093025;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.958904109589041;
            result[3] += 0.0410958904109589;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9936575052854123;
            result[3] += 0.006342494714587738;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
            result[0] += 0.00888888888888889;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9777777777777779;
            result[5] += 0.013333333333333336;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.225;
            result[5] += 0.675;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
            result[0] += 0.009414225941422594;
            result[1] += 0.0020920502092050207;
            result[2] += 0.0010460251046025104;
            result[3] += 0.07845188284518828;
            result[4] += 0.05230125523012552;
            result[5] += 0.856694560669456;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0.05714285714285714;
            result[3] += 0.2;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7471910112359551;
            result[4] += 0.011235955056179775;
            result[5] += 0.24157303370786518;
          } else {
            result[0] += 0.07142857142857144;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.10714285714285715;
            result[4] += 0.07142857142857144;
            result[5] += 0.6071428571428572;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967741935483871;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
            result[0] += 0.29741379310344834;
            result[1] += 0.08620689655172416;
            result[2] += 0.04310344827586208;
            result[3] += 0.008620689655172415;
            result[4] += 0.5301724137931035;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0.8651685393258427;
            result[1] += 0.025280898876404494;
            result[2] += 0.0018726591760299626;
            result[3] += 0.033707865168539325;
            result[4] += 0.05056179775280899;
            result[5] += 0.023408239700374533;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.028985507246376812;
            result[2] += 0.2028985507246377;
            result[3] += 0.34057971014492755;
            result[4] += 0.043478260869565216;
            result[5] += 0.38405797101449274;
          } else {
            result[0] += 0.39436619718309857;
            result[1] += 0;
            result[2] += 0.3732394366197183;
            result[3] += 0.04225352112676056;
            result[4] += 0.15492957746478872;
            result[5] += 0.035211267605633804;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0821917808219178;
            result[3] += 0.7534246575342466;
            result[4] += 0.0273972602739726;
            result[5] += 0.136986301369863;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4186046511627907;
            result[3] += 0.3488372093023256;
            result[4] += 0;
            result[5] += 0.23255813953488372;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.03225806451612904;
            result[1] += 0;
            result[2] += 0.7903225806451614;
            result[3] += 0.14516129032258068;
            result[4] += 0.01612903225806452;
            result[5] += 0.01612903225806452;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
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
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
            result[0] += 0.4827586206896552;
            result[1] += 0;
            result[2] += 0.4827586206896552;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004700352526439483;
            result[1] += 0;
            result[2] += 0.9471210340775558;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0.004700352526439483;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9950980392156863;
            result[5] += 0.004901960784313725;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.04716981132075473;
            result[1] += 0.009433962264150945;
            result[2] += 0;
            result[3] += 0.04716981132075473;
            result[4] += 0.7264150943396227;
            result[5] += 0.169811320754717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.21052631578947367;
            result[5] += 0.6842105263157895;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
            result[0] += 0.43137254901960786;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45098039215686275;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.052096569250317665;
            result[4] += 0.04193138500635324;
            result[5] += 0.9059720457433291;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010362694300518137;
            result[1] += 0.062176165803108814;
            result[2] += 0.020725388601036274;
            result[3] += 0.44818652849740936;
            result[4] += 0.04663212435233161;
            result[5] += 0.41191709844559593;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            result[0] += 0.10869565217391304;
            result[1] += 0.2318840579710145;
            result[2] += 0;
            result[3] += 0.050724637681159424;
            result[4] += 0.5797101449275363;
            result[5] += 0.028985507246376812;
          } else {
            result[0] += 0.9270833333333334;
            result[1] += 0.00946969696969697;
            result[2] += 0.000946969696969697;
            result[3] += 0.006628787878787879;
            result[4] += 0.05303030303030303;
            result[5] += 0.002840909090909091;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            result[0] += 0.011029411764705883;
            result[1] += 0;
            result[2] += 0.20588235294117646;
            result[3] += 0.3492647058823529;
            result[4] += 0.03676470588235294;
            result[5] += 0.39705882352941174;
          } else {
            result[0] += 0.46853146853146854;
            result[1] += 0.006993006993006993;
            result[2] += 0.3986013986013986;
            result[3] += 0.027972027972027972;
            result[4] += 0.06993006993006994;
            result[5] += 0.027972027972027972;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.24444444444444444;
            result[5] += 0.6222222222222222;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.38461538461538464;
            result[2] += 0.46153846153846156;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1935483870967742;
            result[3] += 0.8064516129032258;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7285714285714285;
            result[3] += 0.18571428571428572;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37500000000000006;
            result[3] += 0.45833333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8522727272727273;
            result[3] += 0.14772727272727273;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8996138996138996;
            result[3] += 0.09266409266409266;
            result[4] += 0;
            result[5] += 0.007722007722007722;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9391304347826087;
            result[3] += 0.06086956521739131;
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
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
            result[0] += 0.011952191235059762;
            result[1] += 0.011952191235059762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9282868525896415;
            result[5] += 0.04780876494023905;
          } else {
            result[0] += 0.358974358974359;
            result[1] += 0.01282051282051282;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2948717948717949;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
            result[0] += 0.04046242774566475;
            result[1] += 0.4335260115606937;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4682080924855492;
            result[5] += 0.05780346820809249;
          } else {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02956989247311828;
            result[5] += 0.002688172043010753;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.5641025641025641;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.004434589800443459;
            result[2] += 0.0022172949002217295;
            result[3] += 0.041019955654102;
            result[4] += 0.03325942350332594;
            result[5] += 0.9190687361419069;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.0213903743315508;
            result[1] += 0.0855614973262032;
            result[2] += 0;
            result[3] += 0.08021390374331551;
            result[4] += 0.2620320855614973;
            result[5] += 0.5508021390374331;
          } else {
            result[0] += 0.036036036036036036;
            result[1] += 0.0022522522522522522;
            result[2] += 0.0472972972972973;
            result[3] += 0.5833333333333334;
            result[4] += 0.018018018018018018;
            result[5] += 0.3130630630630631;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            result[0] += 0.5727272727272728;
            result[1] += 0.10909090909090909;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0.03389830508474576;
            result[1] += 0.1864406779661017;
            result[2] += 0.2796610169491525;
            result[3] += 0.0847457627118644;
            result[4] += 0.15254237288135594;
            result[5] += 0.2627118644067797;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9915966386554622;
            result[1] += 0;
            result[2] += 0.0033613445378151263;
            result[3] += 0;
            result[4] += 0.005042016806722689;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0;
            result[2] += 0.29166666666666674;
            result[3] += 0.04166666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          } else {
            result[0] += 0.13333333333333336;
            result[1] += 0;
            result[2] += 0.7333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.13333333333333336;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7073170731707317;
            result[3] += 0.2926829268292683;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.4210526315789474;
            result[1] += 0;
            result[2] += 0.2105263157894737;
            result[3] += 0.26315789473684215;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0.004962779156327543;
            result[1] += 0;
            result[2] += 0.8362282878411911;
            result[3] += 0.13895781637717122;
            result[4] += 0;
            result[5] += 0.019851116625310174;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9192546583850931;
            result[3] += 0.08074534161490683;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002583979328165375;
            result[1] += 0;
            result[2] += 0.9974160206718347;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0.019230769230769232;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.4230769230769231;
            result[5] += 0.46153846153846156;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02077562326869806;
            result[4] += 0.024930747922437674;
            result[5] += 0.9542936288088643;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9710144927536232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.028985507246376812;
            result[5] += 0;
          } else {
            result[0] += 0.006756756756756757;
            result[1] += 0.015202702702702704;
            result[2] += 0.0016891891891891893;
            result[3] += 0.375;
            result[4] += 0.08614864864864864;
            result[5] += 0.5152027027027027;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0625;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.8125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
            result[0] += 0.008948545861297539;
            result[1] += 0.9821029082774049;
            result[2] += 0;
            result[3] += 0.0022371364653243847;
            result[4] += 0.006711409395973154;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0.6879699248120301;
            result[1] += 0.046992481203007516;
            result[2] += 0.011278195488721804;
            result[3] += 0.011278195488721804;
            result[4] += 0.23308270676691728;
            result[5] += 0.009398496240601503;
          } else {
            result[0] += 0.014598540145985401;
            result[1] += 0.01824817518248175;
            result[2] += 0.18248175182481752;
            result[3] += 0.34306569343065696;
            result[4] += 0.058394160583941604;
            result[5] += 0.38321167883211676;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9122302158273381;
            result[1] += 0.0028776978417266188;
            result[2] += 0.02446043165467626;
            result[3] += 0.0057553956834532375;
            result[4] += 0.053237410071942444;
            result[5] += 0.0014388489208633094;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.7936507936507936;
            result[4] += 0.047619047619047616;
            result[5] += 0.06349206349206349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9629629629629629;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8410596026490066;
            result[3] += 0.15894039735099338;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009370816599732263;
            result[1] += 0;
            result[2] += 0.9558232931726908;
            result[3] += 0.025435073627844713;
            result[4] += 0;
            result[5] += 0.009370816599732263;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.97;
            result[5] += 0.005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046153846153846156;
            result[4] += 0.7076923076923077;
            result[5] += 0.24615384615384617;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.20481927710843373;
            result[1] += 0.07228915662650602;
            result[2] += 0;
            result[3] += 0.024096385542168676;
            result[4] += 0.43373493975903615;
            result[5] += 0.26506024096385544;
          } else {
            result[0] += 0.0012391573729863693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03841387856257745;
            result[4] += 0.03717472118959108;
            result[5] += 0.9231722428748451;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0.14736842105263157;
            result[1] += 0.042105263157894736;
            result[2] += 0.042105263157894736;
            result[3] += 0.1631578947368421;
            result[4] += 0.17894736842105263;
            result[5] += 0.4263157894736842;
          } else {
            result[0] += 0.010869565217391304;
            result[1] += 0.02717391304347826;
            result[2] += 0.010869565217391304;
            result[3] += 0.7717391304347826;
            result[4] += 0;
            result[5] += 0.1793478260869565;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
            result[0] += 0.147239263803681;
            result[1] += 0.06134969325153374;
            result[2] += 0;
            result[3] += 0.05521472392638037;
            result[4] += 0.6503067484662577;
            result[5] += 0.08588957055214724;
          } else {
            result[0] += 0.06756756756756757;
            result[1] += 0.7972972972972973;
            result[2] += 0;
            result[3] += 0.0945945945945946;
            result[4] += 0.04054054054054054;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.9086491739552962;
            result[1] += 0.006802721088435372;
            result[2] += 0.007774538386783283;
            result[3] += 0.017492711370262388;
            result[4] += 0.040816326530612235;
            result[5] += 0.018464528668610296;
          } else {
            result[0] += 0.15420560747663553;
            result[1] += 0.0023364485981308414;
            result[2] += 0.22897196261682246;
            result[3] += 0.2757009345794393;
            result[4] += 0.025700934579439255;
            result[5] += 0.31308411214953275;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.21739130434782608;
            result[4] += 0.17391304347826086;
            result[5] += 0.5217391304347826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2033898305084746;
            result[3] += 0.6779661016949152;
            result[4] += 0;
            result[5] += 0.11864406779661017;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0.03703703703703704;
            result[2] += 0.888888888888889;
            result[3] += 0.07407407407407408;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
            result[0] += 0.2777777777777778;
            result[1] += 0.1111111111111111;
            result[2] += 0.3888888888888889;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.020833333333333332;
            result[4] += 0;
            result[5] += 0.0625;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.4375;
            result[4] += 0.0625;
            result[5] += 0.25;
          } else {
            result[0] += 0.005434782608695652;
            result[1] += 0;
            result[2] += 0.7989130434782609;
            result[3] += 0.16847826086956522;
            result[4] += 0;
            result[5] += 0.02717391304347826;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
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
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0013477088948787063;
            result[1] += 0;
            result[2] += 0.9622641509433962;
            result[3] += 0.03369272237196765;
            result[4] += 0;
            result[5] += 0.0026954177897574125;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9952830188679245;
            result[5] += 0.0047169811320754715;
          } else {
            result[0] += 0.05405405405405406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8378378378378378;
            result[5] += 0.10810810810810811;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.4090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.0027137042062415195;
            result[1] += 0;
            result[2] += 0.004070556309362279;
            result[3] += 0.031207598371777476;
            result[4] += 0.03934871099050204;
            result[5] += 0.9226594301221167;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.09620991253644315;
            result[1] += 0.04081632653061224;
            result[2] += 0.03498542274052478;
            result[3] += 0.20116618075801748;
            result[4] += 0.04664723032069971;
            result[5] += 0.5801749271137027;
          } else {
            result[0] += 0.004975124378109453;
            result[1] += 0;
            result[2] += 0.029850746268656716;
            result[3] += 0.7164179104477612;
            result[4] += 0.014925373134328358;
            result[5] += 0.23383084577114427;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9973544973544973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0026455026455026454;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0.10294117647058823;
            result[1] += 0.004901960784313725;
            result[2] += 0.00980392156862745;
            result[3] += 0.03431372549019608;
            result[4] += 0.7990196078431373;
            result[5] += 0.049019607843137254;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.810359964881475;
            result[1] += 0.04302019315188762;
            result[2] += 0.0052677787532923615;
            result[3] += 0.033362598770851626;
            result[4] += 0.08955223880597014;
            result[5] += 0.018437225636523266;
          } else {
            result[0] += 0.17307692307692307;
            result[1] += 0.005494505494505495;
            result[2] += 0.2692307692307692;
            result[3] += 0.27472527472527475;
            result[4] += 0.04120879120879121;
            result[5] += 0.23626373626373626;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.45454545454545453;
            result[3] += 0.09090909090909091;
            result[4] += 0.2727272727272727;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.8222222222222222;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14893617021276595;
            result[3] += 0.5319148936170213;
            result[4] += 0.0425531914893617;
            result[5] += 0.2765957446808511;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.2777777777777778;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7974683544303798;
            result[3] += 0.19831223628691982;
            result[4] += 0;
            result[5] += 0.004219409282700422;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8048780487804879;
            result[3] += 0.17073170731707318;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.972972972972973;
            result[3] += 0.02702702702702703;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9743589743589743;
            result[3] += 0.02564102564102564;
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
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)64.5) ) ) {
            result[0] += 0.011857707509881422;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9723320158102767;
            result[5] += 0.015810276679841896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0.5833333333333334;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)64.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96) ) ) {
            result[0] += 0.9570552147239264;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04294478527607362;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.0022650056625141564;
            result[1] += 0.0022650056625141564;
            result[2] += 0;
            result[3] += 0.05436013590033975;
            result[4] += 0.0464326160815402;
            result[5] += 0.8946772366930917;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.2923076923076923;
            result[2] += 0;
            result[3] += 0.03076923076923077;
            result[4] += 0.46153846153846156;
            result[5] += 0.2153846153846154;
          } else {
            result[0] += 0.0718954248366013;
            result[1] += 0.0392156862745098;
            result[2] += 0.026143790849673203;
            result[3] += 0.33986928104575165;
            result[4] += 0.06535947712418301;
            result[5] += 0.45751633986928103;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)81) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
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
            result[3] += 0.09090909090909091;
            result[4] += 0.11363636363636363;
            result[5] += 0.7954545454545454;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.007662835249042146;
            result[2] += 0.003831417624521073;
            result[3] += 0.7356321839080461;
            result[4] += 0.007662835249042146;
            result[5] += 0.24521072796934867;
          } else {
            result[0] += 0.036458333333333336;
            result[1] += 0.015625;
            result[2] += 0.140625;
            result[3] += 0.3489583333333333;
            result[4] += 0.03125;
            result[5] += 0.4270833333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
            result[0] += 0.12162162162162163;
            result[1] += 0.13513513513513514;
            result[2] += 0.02702702702702703;
            result[3] += 0.006756756756756757;
            result[4] += 0.6756756756756757;
            result[5] += 0.033783783783783786;
          } else {
            result[0] += 0.03225806451612904;
            result[1] += 0.935483870967742;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612904;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9350220264317181;
            result[1] += 0.003303964757709251;
            result[2] += 0.0022026431718061676;
            result[3] += 0.00881057268722467;
            result[4] += 0.04405286343612335;
            result[5] += 0.006607929515418502;
          } else {
            result[0] += 0.22500000000000003;
            result[1] += 0.05000000000000001;
            result[2] += 0.31250000000000006;
            result[3] += 0.17500000000000002;
            result[4] += 0.13750000000000004;
            result[5] += 0.10000000000000002;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
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
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.01639344262295082;
            result[2] += 0.18032786885245902;
            result[3] += 0.3442622950819672;
            result[4] += 0.03278688524590164;
            result[5] += 0.4262295081967213;
          } else {
            result[0] += 0.13636363636363638;
            result[1] += 0.13636363636363638;
            result[2] += 0.5454545454545455;
            result[3] += 0;
            result[4] += 0.13636363636363638;
            result[5] += 0.04545454545454546;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.0625;
            result[2] += 0.20833333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.029850746268656716;
            result[1] += 0;
            result[2] += 0.5074626865671642;
            result[3] += 0.373134328358209;
            result[4] += 0;
            result[5] += 0.08955223880597014;
          } else {
            result[0] += 0.017191977077363897;
            result[1] += 0;
            result[2] += 0.8137535816618912;
            result[3] += 0.15472779369627507;
            result[4] += 0;
            result[5] += 0.014326647564469915;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.019736842105263157;
            result[1] += 0;
            result[2] += 0.9013157894736842;
            result[3] += 0.07236842105263158;
            result[4] += 0;
            result[5] += 0.006578947368421052;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9809976247030879;
            result[3] += 0.014251781472684086;
            result[4] += 0;
            result[5] += 0.004750593824228029;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9658536585365853;
            result[5] += 0.03414634146341464;
          } else {
            result[0] += 0;
            result[1] += 0.782608695652174;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21739130434782608;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
            result[0] += 0.03278688524590164;
            result[1] += 0.03278688524590164;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4918032786885246;
            result[5] += 0.4426229508196721;
          } else {
            result[0] += 0.6862745098039216;
            result[1] += 0.0392156862745098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09803921568627451;
            result[5] += 0.17647058823529413;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037991858887381276;
            result[4] += 0.012211668928086838;
            result[5] += 0.9497964721845319;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.017045454545454544;
            result[2] += 0;
            result[3] += 0.07386363636363637;
            result[4] += 0.2897727272727273;
            result[5] += 0.6193181818181818;
          } else {
            result[0] += 0.0031847133757961785;
            result[1] += 0;
            result[2] += 0.05732484076433121;
            result[3] += 0.6019108280254777;
            result[4] += 0.006369426751592357;
            result[5] += 0.33121019108280253;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.1165919282511211;
            result[1] += 0.25560538116591935;
            result[2] += 0;
            result[3] += 0.03139013452914799;
            result[4] += 0.5739910313901346;
            result[5] += 0.022421524663677132;
          } else {
            result[0] += 0.8909257561869844;
            result[1] += 0.00916590284142988;
            result[2] += 0.011915673693858845;
            result[3] += 0.015582034830430797;
            result[4] += 0.054078826764436295;
            result[5] += 0.01833180568285976;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012422360248447204;
            result[3] += 0.3416149068322981;
            result[4] += 0.018633540372670808;
            result[5] += 0.6273291925465838;
          } else {
            result[0] += 0.23921568627450981;
            result[1] += 0.00392156862745098;
            result[2] += 0.3568627450980392;
            result[3] += 0.2235294117647059;
            result[4] += 0.09411764705882353;
            result[5] += 0.08235294117647059;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03773584905660377;
            result[3] += 0.5471698113207547;
            result[4] += 0;
            result[5] += 0.41509433962264153;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.75;
            result[4] += 0.05;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0.020942408376963356;
            result[1] += 0;
            result[2] += 0.8481675392670158;
            result[3] += 0.10994764397905761;
            result[4] += 0.005235602094240839;
            result[5] += 0.015706806282722516;
          } else {
            result[0] += 0.0014577259475218659;
            result[1] += 0;
            result[2] += 0.9620991253644315;
            result[3] += 0.03644314868804665;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)34.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003968253968253968;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.996031746031746;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
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
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0.018867924528301886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2830188679245283;
            result[5] += 0.660377358490566;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008438818565400843;
            result[4] += 0.029535864978902954;
            result[5] += 0.9620253164556962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0041841004184100415;
            result[2] += 0.0041841004184100415;
            result[3] += 0.16317991631799164;
            result[4] += 0.08786610878661087;
            result[5] += 0.7405857740585774;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)64.5) ) ) {
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
            result[3] += 0.1111111111111111;
            result[4] += 0.022222222222222223;
            result[5] += 0.8666666666666667;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8014705882352942;
            result[4] += 0;
            result[5] += 0.19852941176470587;
          } else {
            result[0] += 0.05084745762711865;
            result[1] += 0;
            result[2] += 0.01694915254237288;
            result[3] += 0.4576271186440678;
            result[4] += 0;
            result[5] += 0.4745762711864407;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.65;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.0027472527472527475;
            result[1] += 0.9972527472527473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
            result[0] += 0.536388140161725;
            result[1] += 0.10242587601078164;
            result[2] += 0.002695417789757412;
            result[3] += 0.035040431266846354;
            result[4] += 0.3153638814016172;
            result[5] += 0.008086253369272236;
          } else {
            result[0] += 0.03543307086614174;
            result[1] += 0.03543307086614174;
            result[2] += 0.10236220472440946;
            result[3] += 0.3503937007874016;
            result[4] += 0.1535433070866142;
            result[5] += 0.3228346456692914;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
            result[0] += 0.06956521739130435;
            result[1] += 0.6521739130434783;
            result[2] += 0.034782608695652174;
            result[3] += 0;
            result[4] += 0.24347826086956523;
            result[5] += 0;
          } else {
            result[0] += 0.9126794258373205;
            result[1] += 0.004784688995215311;
            result[2] += 0.02033492822966507;
            result[3] += 0.01674641148325359;
            result[4] += 0.03708133971291866;
            result[5] += 0.008373205741626795;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.007407407407407408;
            result[2] += 0.11851851851851852;
            result[3] += 0.4;
            result[4] += 0.08888888888888889;
            result[5] += 0.3851851851851852;
          } else {
            result[0] += 0.05172413793103448;
            result[1] += 0;
            result[2] += 0.6896551724137931;
            result[3] += 0.15517241379310345;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.13636363636363635;
            result[2] += 0.18181818181818182;
            result[3] += 0.5909090909090909;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.5256410256410257;
            result[3] += 0.15384615384615385;
            result[4] += 0.01282051282051282;
            result[5] += 0.2692307692307692;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00888888888888889;
            result[1] += 0;
            result[2] += 0.9177777777777779;
            result[3] += 0.060000000000000005;
            result[4] += 0;
            result[5] += 0.013333333333333336;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0.004016064257028112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9558232931726908;
            result[5] += 0.040160642570281124;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0.10526315789473685;
            result[1] += 0;
            result[2] += 0.052631578947368425;
            result[3] += 0.5263157894736843;
            result[4] += 0.2105263157894737;
            result[5] += 0.10526315789473685;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01610305958132045;
            result[4] += 0.00644122383252818;
            result[5] += 0.9774557165861514;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0893371757925072;
            result[1] += 0.04899135446685879;
            result[2] += 0.002881844380403458;
            result[3] += 0.1585014409221902;
            result[4] += 0.12103746397694524;
            result[5] += 0.579250720461095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015151515151515152;
            result[3] += 0.7525252525252525;
            result[4] += 0.005050505050505051;
            result[5] += 0.22727272727272727;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
            result[0] += 0.7756714060031595;
            result[1] += 0.013428120063191154;
            result[2] += 0.010268562401263823;
            result[3] += 0.030015797788309637;
            result[4] += 0.1524486571879937;
            result[5] += 0.018167456556082148;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.9302325581395349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            result[0] += 0.04436860068259386;
            result[1] += 0.034129692832764506;
            result[2] += 0.08873720136518772;
            result[3] += 0.36177474402730375;
            result[4] += 0.08873720136518772;
            result[5] += 0.3822525597269625;
          } else {
            result[0] += 0.3489583333333333;
            result[1] += 0.015625;
            result[2] += 0.5208333333333334;
            result[3] += 0.026041666666666668;
            result[4] += 0.015625;
            result[5] += 0.07291666666666667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
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
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.8928571428571429;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.4;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.11538461538461539;
            result[2] += 0.15384615384615385;
            result[3] += 0.5769230769230769;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7043478260869566;
            result[3] += 0.23478260869565218;
            result[4] += 0;
            result[5] += 0.06086956521739131;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2916666666666667;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.07317073170731707;
            result[1] += 0;
            result[2] += 0.7560975609756098;
            result[3] += 0.17073170731707318;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0025220680958385876;
            result[1] += 0;
            result[2] += 0.9609079445145019;
            result[3] += 0.031525851197982346;
            result[4] += 0;
            result[5] += 0.005044136191677175;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0.0072992700729927005;
            result[1] += 0.021897810218978103;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9708029197080292;
            result[5] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45;
            result[5] += 0.45;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.9238095238095239;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0.0410958904109589;
            result[2] += 0.0273972602739726;
            result[3] += 0;
            result[4] += 0.3424657534246575;
            result[5] += 0.5342465753424658;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.036;
            result[5] += 0.9306666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0.6;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.00684931506849315;
            result[1] += 0.0273972602739726;
            result[2] += 0.05136986301369863;
            result[3] += 0.3424657534246575;
            result[4] += 0.08904109589041095;
            result[5] += 0.4828767123287671;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52.5) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.002551020408163265;
            result[1] += 0.9897959183673469;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007653061224489796;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0.009900990099009901;
            result[1] += 0.6435643564356436;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.33663366336633666;
            result[5] += 0.009900990099009901;
          } else {
            result[0] += 0.8392193308550187;
            result[1] += 0.030669144981412644;
            result[2] += 0.021375464684014873;
            result[3] += 0.03996282527881041;
            result[4] += 0.05111524163568774;
            result[5] += 0.017657992565055767;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.012345679012345678;
            result[1] += 0.02880658436213992;
            result[2] += 0.037037037037037035;
            result[3] += 0.4897119341563786;
            result[4] += 0.06995884773662552;
            result[5] += 0.36213991769547327;
          } else {
            result[0] += 0.46078431372549017;
            result[1] += 0.058823529411764705;
            result[2] += 0.29411764705882354;
            result[3] += 0.0784313725490196;
            result[4] += 0.08823529411764706;
            result[5] += 0.0196078431372549;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.05405405405405406;
            result[2] += 0.10810810810810811;
            result[3] += 0.2702702702702703;
            result[4] += 0.1891891891891892;
            result[5] += 0.3783783783783784;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14189189189189189;
            result[3] += 0.6486486486486487;
            result[4] += 0;
            result[5] += 0.20945945945945946;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0.4838709677419355;
            result[3] += 0.1935483870967742;
            result[4] += 0;
            result[5] += 0.2903225806451613;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.09333333333333334;
            result[4] += 0.02666666666666667;
            result[5] += 0.12;
          } else {
            result[0] += 0.7;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8594377510040161;
            result[3] += 0.12048192771084337;
            result[4] += 0;
            result[5] += 0.020080321285140562;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
            result[0] += 0.01388888888888889;
            result[1] += 0;
            result[2] += 0.763888888888889;
            result[3] += 0.20833333333333337;
            result[4] += 0;
            result[5] += 0.01388888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96875;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9977220956719818;
            result[3] += 0.002277904328018223;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01834862385321101;
            result[4] += 0.9678899082568807;
            result[5] += 0.013761467889908258;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.0029239766081871343;
            result[2] += 0;
            result[3] += 0.017543859649122806;
            result[4] += 0.02046783625730994;
            result[5] += 0.9590643274853801;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8247422680412371;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12371134020618557;
            result[5] += 0.05154639175257732;
          } else {
            result[0] += 0.009389671361502348;
            result[1] += 0.02034428794992175;
            result[2] += 0.028169014084507043;
            result[3] += 0.38028169014084506;
            result[4] += 0.13615023474178403;
            result[5] += 0.42566510172143973;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.12500000000000003;
            result[1] += 0.15625000000000003;
            result[2] += 0;
            result[3] += 0.07291666666666669;
            result[4] += 0.6354166666666667;
            result[5] += 0.010416666666666668;
          } else {
            result[0] += 0.8389031705227078;
            result[1] += 0.007712082262210797;
            result[2] += 0.002570694087403599;
            result[3] += 0.03427592116538132;
            result[4] += 0.05141388174807198;
            result[5] += 0.06512425021422451;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.32653061224489793;
            result[1] += 0.07482993197278912;
            result[2] += 0.05442176870748299;
            result[3] += 0.11564625850340136;
            result[4] += 0.10204081632653061;
            result[5] += 0.32653061224489793;
          } else {
            result[0] += 0.07772020725388601;
            result[1] += 0.04145077720207254;
            result[2] += 0.47150259067357514;
            result[3] += 0.2849740932642487;
            result[4] += 0.031088082901554404;
            result[5] += 0.09326424870466321;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0.16363636363636364;
            result[3] += 0.7636363636363637;
            result[4] += 0;
            result[5] += 0.05454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.07142857142857142;
            result[4] += 0.21428571428571427;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5178571428571429;
            result[3] += 0.4642857142857143;
            result[4] += 0;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8095238095238095;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
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
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.7058823529411765;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8448275862068966;
            result[3] += 0.14655172413793102;
            result[4] += 0;
            result[5] += 0.008620689655172414;
          } else {
            result[0] += 0.0015360983102918587;
            result[1] += 0;
            result[2] += 0.9723502304147466;
            result[3] += 0.02304147465437788;
            result[4] += 0;
            result[5] += 0.0030721966205837174;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012422360248447204;
            result[4] += 0.9875776397515528;
            result[5] += 0;
          } else {
            result[0] += 0.09230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5846153846153846;
            result[5] += 0.3230769230769231;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0;
          } else {
            result[0] += 0.94;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.002317497103128621;
            result[2] += 0;
            result[3] += 0.04055619930475087;
            result[4] += 0.054461181923522596;
            result[5] += 0.9026651216685979;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1388888888888889;
            result[4] += 0.12777777777777777;
            result[5] += 0.7333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.014285714285714285;
            result[2] += 0.004761904761904762;
            result[3] += 0.6190476190476191;
            result[4] += 0.023809523809523808;
            result[5] += 0.3380952380952381;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.9259259259259259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0;
          } else {
            result[0] += 0.0136986301369863;
            result[1] += 0.0821917808219178;
            result[2] += 0.0273972602739726;
            result[3] += 0;
            result[4] += 0.8767123287671232;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6206896551724138;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.3103448275862069;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4264705882352941;
            result[5] += 0.014705882352941176;
          } else {
            result[0] += 0.8567708333333334;
            result[1] += 0.0078125;
            result[2] += 0.003472222222222222;
            result[3] += 0.041666666666666664;
            result[4] += 0.05555555555555555;
            result[5] += 0.034722222222222224;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0.013745704467353952;
            result[1] += 0.06872852233676977;
            result[2] += 0.18556701030927836;
            result[3] += 0.4054982817869416;
            result[4] += 0.08247422680412371;
            result[5] += 0.24398625429553264;
          } else {
            result[0] += 0.4339622641509434;
            result[1] += 0.012578616352201259;
            result[2] += 0.42138364779874216;
            result[3] += 0.05660377358490566;
            result[4] += 0.03773584905660377;
            result[5] += 0.03773584905660377;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2987012987012987;
            result[3] += 0.5844155844155844;
            result[4] += 0;
            result[5] += 0.11688311688311688;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.037037037037037035;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8518518518518519;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7307692307692307;
            result[3] += 0.08974358974358974;
            result[4] += 0;
            result[5] += 0.1794871794871795;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8627450980392157;
            result[3] += 0.12418300653594772;
            result[4] += 0;
            result[5] += 0.013071895424836602;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9732441471571907;
            result[3] += 0.023411371237458192;
            result[4] += 0.0016722408026755853;
            result[5] += 0.0016722408026755853;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.983402489626556;
            result[5] += 0.016597510373443983;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0.25925925925925924;
            result[4] += 0.48148148148148145;
            result[5] += 0.18518518518518517;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.6621621621621622;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06756756756756757;
            result[4] += 0.2702702702702703;
            result[5] += 0;
          } else {
            result[0] += 0.004574565416285453;
            result[1] += 0.0036596523330283625;
            result[2] += 0.0009149130832570906;
            result[3] += 0.0686184812442818;
            result[4] += 0.04666056724611162;
            result[5] += 0.8755718206770357;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.1875;
            result[5] += 0.6875;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0;
            result[2] += 0.007142857142857143;
            result[3] += 0.7785714285714286;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.9882352941176471;
            result[2] += 0;
            result[3] += 0.002352941176470588;
            result[4] += 0.009411764705882352;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.022900763358778626;
            result[1] += 0.45038167938931295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5267175572519084;
            result[5] += 0;
          } else {
            result[0] += 0.8555460017196905;
            result[1] += 0.007738607050730869;
            result[2] += 0;
            result[3] += 0.024075666380051593;
            result[4] += 0.09802235597592435;
            result[5] += 0.014617368873602753;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.004081632653061225;
            result[2] += 0.2938775510204082;
            result[3] += 0.3877551020408163;
            result[4] += 0.004081632653061225;
            result[5] += 0.2693877551020408;
          } else {
            result[0] += 0.9183673469387755;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08163265306122448;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5416666666666666;
            result[4] += 0.125;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.7916666666666666;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.02912621359223301;
            result[1] += 0.009708737864077669;
            result[2] += 0.1941747572815534;
            result[3] += 0.6213592233009708;
            result[4] += 0.02912621359223301;
            result[5] += 0.11650485436893204;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.5555555555555556;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.7222222222222222;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.018518518518518517;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20833333333333334;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.22916666666666666;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.004629629629629629;
            result[1] += 0;
            result[2] += 0.8657407407407407;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.004629629629629629;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9435028248587571;
            result[3] += 0.050847457627118654;
            result[4] += 0;
            result[5] += 0.005649717514124295;
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
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.0053475935828877;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9946524064171123;
            result[5] += 0;
          } else {
            result[0] += 0.06818181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.29545454545454547;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.30434782608695654;
            result[1] += 0.2391304347826087;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.30434782608695654;
            result[5] += 0.10869565217391304;
          } else {
            result[0] += 0.009775171065493646;
            result[1] += 0.005865102639296188;
            result[2] += 0;
            result[3] += 0.06744868035190615;
            result[4] += 0.03421309872922776;
            result[5] += 0.8826979472140762;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.014814814814814815;
            result[2] += 0.16296296296296298;
            result[3] += 0.34814814814814815;
            result[4] += 0.007407407407407408;
            result[5] += 0.4666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008264462809917356;
            result[3] += 0.8677685950413223;
            result[4] += 0;
            result[5] += 0.12396694214876033;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.03883495145631068;
            result[1] += 0.28155339805825247;
            result[2] += 0.01941747572815534;
            result[3] += 0.00970873786407767;
            result[4] += 0.5922330097087379;
            result[5] += 0.05825242718446603;
          } else {
            result[0] += 0.8551842330762639;
            result[1] += 0.011139674378748929;
            result[2] += 0.009425878320479864;
            result[3] += 0.02313624678663239;
            result[4] += 0.08483290488431877;
            result[5] += 0.016281062553556127;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0.02553191489361702;
            result[1] += 0.00851063829787234;
            result[2] += 0.09361702127659574;
            result[3] += 0.4765957446808511;
            result[4] += 0.07234042553191489;
            result[5] += 0.32340425531914896;
          } else {
            result[0] += 0.3012820512820513;
            result[1] += 0.03846153846153847;
            result[2] += 0.467948717948718;
            result[3] += 0.04487179487179488;
            result[4] += 0.04487179487179488;
            result[5] += 0.10256410256410257;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
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
            result[4] += 0.030303030303030304;
            result[5] += 0.9696969696969697;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33673469387755106;
            result[3] += 0.6020408163265307;
            result[4] += 0;
            result[5] += 0.06122448979591837;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.8775510204081632;
            result[3] += 0.08163265306122448;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)112.5) ) ) {
            result[0] += 0.009287925696594427;
            result[1] += 0;
            result[2] += 0.8575851393188855;
            result[3] += 0.11455108359133127;
            result[4] += 0;
            result[5] += 0.018575851393188854;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9882121807465619;
            result[3] += 0.009823182711198428;
            result[4] += 0;
            result[5] += 0.0019646365422396855;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  
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
